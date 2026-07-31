void ExUILabel___ctor(ExUILabel_o *this, const MethodInfo *method)
{
  if ( (byte_5939DF0 & 1) == 0 )
  {
    sub_21FFC50(&UILabel_TypeInfo);
    byte_5939DF0 = 1;
  }
  if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, method);
  UILabel___ctor((UILabel_o *)this, 0);
}