void __fastcall FavoriteChnageMenu___ctor(FavoriteChnageMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B115ED & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B115ED = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}