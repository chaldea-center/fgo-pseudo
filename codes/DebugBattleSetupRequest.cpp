void DebugBattleSetupRequest___ctor(DebugBattleSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *DebugBattleSetupRequest__getURL(DebugBattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723C8 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18810/*"clientdebug/battlesetup"*/);
    byte_59723C8 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18810/*"clientdebug/battlesetup"*/, 0);
}