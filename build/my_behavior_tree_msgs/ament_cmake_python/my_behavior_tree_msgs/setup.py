from setuptools import find_packages
from setuptools import setup

setup(
    name='my_behavior_tree_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('my_behavior_tree_msgs', 'my_behavior_tree_msgs.*')),
)
