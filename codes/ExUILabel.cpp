void ExUILabel___ctor(ExUILabel_o *this, const MethodInfo *method)
{
  if ( (byte_4E060FA & 1) == 0 )
  {
    sub_1CE6700(&UILabel_TypeInfo);
    byte_4E060FA = 1;
  }
  if ( !UILabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
  UILabel___ctor((UILabel_o *)this, 0);
}