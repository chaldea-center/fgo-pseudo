void __fastcall FavoriteChnageMenu___ctor(FavoriteChnageMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F9AFE & 1) == 0 )
  {
    sub_1B64870(&BaseMenu_TypeInfo, method);
    byte_49F9AFE = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}