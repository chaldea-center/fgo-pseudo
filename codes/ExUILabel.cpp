void ExUILabel___ctor(ExUILabel_o *this, const MethodInfo *method)
{
  if ( (byte_4D320B2 & 1) == 0 )
  {
    sub_1C93AD4(&UILabel_TypeInfo);
    byte_4D320B2 = 1;
  }
  if ( !UILabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
  UILabel___ctor((UILabel_o *)this, 0);
}