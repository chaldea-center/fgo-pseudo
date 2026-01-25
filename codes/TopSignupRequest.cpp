System_String_o *TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CF0257 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF0257 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF0256 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23721/*"signup/top"*/);
    byte_4CF0256 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_23721/*"signup/top"*/, 0);
}


void TopSignupRequest__requestCompleted(
        TopSignupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v8; // x20
  int64_t birthDay; // x21
  Il2CppObject *Instance; // x0
  System_String_o *name; // x22
  int32_t genderType; // w21
  NetworkManager_o *v13; // x23
  System_DateTime_o v14; // x0
  int32_t Month; // w24
  System_DateTime_o v16; // x0
  Il2CppObject *Day; // x0
  __int64 v18; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v20; // x9
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CF0258 & 1) == 0 )
  {
    sub_1C7BAE8(&System_DateTime_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF0258 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(1, responseList, 0);
  if ( !v5
    || !ResponseData__checkError(v5, v5->fields.resCode, v6)
    || (SelfUserGame = UserGameMaster__getSelfUserGame(0)) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v20 = &StringLiteral_22419/*"ng"*/;
    goto LABEL_20;
  }
  v8 = SelfUserGame;
  birthDay = SelfUserGame->fields.birthDay;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime_41943204(birthDay, 0).fields._dateData;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  name = v8->fields.name;
  genderType = v8->fields.genderType;
  v13 = (NetworkManager_o *)Instance;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v14.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v14, 0);
  v16.fields._dateData = (uint64_t)&dateData;
  Day = (Il2CppObject *)System_DateTime__get_Day(v16, 0);
  if ( !v13
    || (NetworkManager__SetSignup_41933128(v13, name, genderType, Month, (int32_t)Day, 0),
        (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0)
    || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0),
        (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0)
    || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v8->fields.friendCode, 0),
        (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0) )
  {
    sub_1C7BD40(Day, v18);
  }
  NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v20 = &StringLiteral_22590/*"ok"*/;
LABEL_20:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      *v20,
      CallBack->fields.method);
  }
}