System_String_o *TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_5972508 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972508 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972507 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_24739/*"signup/top"*/);
    byte_5972507 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_24739/*"signup/top"*/, 0);
}


void TopSignupRequest__requestCompleted(
        TopSignupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v8; // x1
  UserGameEntity_o *v9; // x20
  int64_t birthDay; // x21
  __int64 v11; // x1
  Il2CppObject *Instance; // x23
  System_String_o *name; // x21
  int32_t genderType; // w22
  int32_t Month; // w24
  Il2CppObject *Day; // x0
  __int64 v17; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v19; // x8
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5972509 & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972509 = 1;
  }
  dateData = 0;
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(1, responseList, 0);
  if ( v5
    && ResponseData__checkError(v5, v5->fields.resCode, v6)
    && (SelfUserGame = UserGameMaster__getSelfUserGame(0)) != 0 )
  {
    v9 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
    dateData = NetworkManager__getDateTime_48347260(birthDay, 0).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v9->fields.name;
    genderType = v9->fields.genderType;
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v11);
    Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
    Day = (Il2CppObject *)System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
    if ( !Instance
      || (NetworkManager__SetSignup_48337384((NetworkManager_o *)Instance, name, genderType, Month, (int32_t)Day, 0),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0)
      || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0)
      || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v9->fields.friendCode, 0),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0) )
    {
      sub_2213CDC(Day, v17);
    }
    NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        StringLiteral_23515/*"ok"*/,
        CallBack->fields.method);
  }
  else
  {
    v19 = this->fields.CallBack;
    if ( v19 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v19->fields.invoke_impl)(
        v19->fields.method_code,
        StringLiteral_23336/*"ng"*/,
        v19->fields.method);
  }
}