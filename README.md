﻿# <font face="黑体">**注意事项**</font>
* 头文件里先用不写注释 注释全部写在.cpp文件中
* **考生界面等后端实现功能的Model请另开模块！！！**

# <font face="黑体">**更新日志**</font>
更新时间|更新内容|
---|:--:|
2019/1/1|config类中将选择题拆分成了单选题和多选题 但数据库中仍以object_score表示单选分值，以multi_score表示多选分值
2019/1/1|合并了黄思泳的创建考试模块
2018/12/29|修复了SqlModel中查询判断题的bug
2018/12/29|添加了创建考试页面以及功能模块文件
2018/12/28|完成了从考生主界面到考试界面的参数传递功能
2018/12/28|整合了学生考试的功能并修改了考试界面样式
2018/12/23|实现了管理员界面显示考试信息的功能
2018/12/23|将原Exam类更改为Config类，新建Exam类用于存储试卷信息
2018/12/21|修复了合并后单选题修改完成不能自动刷新的BUG
2018/12/20|完成了多选题和判断题部分的删除功能
2018/12/20|学生主界面实现注销、根据考试名称自适应、内容居中显示、去除试题编号
2018/12/20|数据表config中新增multi_score字段用于存储考生多选题得分
2018/12/20|更改数据表中subject_id为judge_id
2018/12/20|允许了exam_content数据表中object_id和subject_id字段值为空
2018/12/20|修改了界面上AB选项的TextEdit名相反的Bug
2018/12/19|合并了多选题和判断题模块的代码
2018/12/19|解决了18日合并上出现的问题
2018/12/19|实现了添加试题界面并增加了最大化按钮
2018/12/19|优化了添加试题界面的布局和样式
2018/12/19|新增题库搜索功能，其检索方式为模糊搜索
2018/12/19|引入外部开源样式表并做了部分修改
2018/12/18|合并了已实现逻辑功能的学生主界面
2018/12/17|修复了题库界面内存泄露的问题
2018/12/17|修复了题库界面析构函数中删除指针的问题


# <font face="黑体">**迭代开发任务**</font>
* 考试界面
   * 需要修复当选择题、判断题有一个部分不存在题目时，会报数组访问越界的bug
   * 题目描述最后要注明题目的分值，例如：这是这道题的描述(2分)
   * 跳转到第几题应通过点击按钮触发而不是回车触发，同时应显示当前是第几题/总共有几题
   * 跳转完成后应清除输入框中的内容
   * 考试名称、时长、信息、倒计时功能需要完成
   * 提交完成后需要对主界面做一次刷新操作
   * 因修改了config类，所以考试的单选题、多选题成绩需需要分别插入

* 创建考试界面
   * 创建好考试后应当将所有考生数据直接插入到config表中
   * 存在崩溃问题（把题库中所有题目加进来后会崩溃，原因是堆溢出）修改方案：chosenChoice等不要用new的方式建立，而以QList代替
   * 试题的显示应当以添加的先后显示在列表中，而不是以QuestionId的排序显示（这个最好能改，改不了也没事）

* 所有页面
   * 修改标题栏的颜色适应背景色
   * 修改标题栏的图标

* 学生主界面

* 添加试题页面
   * 试题描述、选项描述的长度检测

* 题库界面
   * 把魔鬼数字改成宏

* Model
   * 对SqlModel进行分流