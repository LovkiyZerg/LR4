if(EXISTS "/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/LabWork4_PartC/Task5/Task5Tests[1]_tests.cmake")
  include("/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/LabWork4_PartC/Task5/Task5Tests[1]_tests.cmake")
else()
  add_test(Task5Tests_NOT_BUILT Task5Tests_NOT_BUILT)
endif()
