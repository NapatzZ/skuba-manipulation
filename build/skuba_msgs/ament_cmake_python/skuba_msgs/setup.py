from setuptools import find_packages
from setuptools import setup

setup(
    name='skuba_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('skuba_msgs', 'skuba_msgs.*')),
)
