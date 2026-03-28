from setuptools import find_packages, setup

package_name = 'mapping_executor'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    package_data={'': ['py.typed']},
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dchoate119',
    maintainer_email='dchoate119@gmail.com',
    description='Mapping executor package',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        'mapping_executor = mapping_executor.executor_node:main',
        'mapping_client = mapping_executor.mapping_client:main',
        ],
    },
)
