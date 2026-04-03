from setuptools import find_packages, setup

package_name = 'rgbd_capture'

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
    description='Capture package for RGBD data',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        'rgbd_capture_node = rgbd_capture.capture_node_test:main',
        ],
    },
)
