void ExUILabel___ctor(ExUILabel_o *this, const MethodInfo *method)
{
  if ( (byte_4C390C6 & 1) == 0 )
  {
    sub_1C32C20(&UILabel_TypeInfo);
    byte_4C390C6 = 1;
  }
  if ( !UILabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
  UILabel___ctor((UILabel_o *)this, 0);
}