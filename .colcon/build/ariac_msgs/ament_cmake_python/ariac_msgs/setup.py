from setuptools import find_packages
from setuptools import setup

setup(
    name='ariac_msgs',
    version='2024.4.1',
    packages=find_packages(
        include=('ariac_msgs', 'ariac_msgs.*')),
)
