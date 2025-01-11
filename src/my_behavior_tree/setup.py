from setuptools import find_packages, setup

package_name = 'my_behavior_tree'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='etri',
    maintainer_email='etri@todo.todo',
    description='Behavior Tree Example Package',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'bt_basic = my_behavior_tree.bt_basic:main',  # 실행 가능한 스크립트 등록
            'bt_basic_blackboard = my_behavior_tree.bt_basic_blackboard:main',  # 추가된 스크립트
            'bt_basic_blackboard2 = my_behavior_tree.bt_basic_blackboard2:main',  
        ],
    },
)
