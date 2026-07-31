System_String_o *TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A32B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A32B = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A32A & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24691/*"signup/top"*/);
    byte_593A32A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_24691/*"signup/top"*/, 0);
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
  System_DateTime_o v15; // x0
  int32_t Month; // w24
  System_DateTime_o v17; // x0
  Il2CppObject *Day; // x0
  __int64 v19; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v21; // x8
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593A32C & 1) == 0 )
  {
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A32C = 1;
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
    dateData = NetworkManager__getDateTime_48311376(birthDay, 0).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v9->fields.name;
    genderType = v9->fields.genderType;
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v11);
    v15.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v15, 0);
    v17.fields._dateData = (uint64_t)&dateData;
    Day = (Il2CppObject *)System_DateTime__get_Day(v17, 0);
    if ( !Instance
      || (NetworkManager__SetSignup_48301500((NetworkManager_o *)Instance, name, genderType, Month, (int32_t)Day, 0),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0)
      || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0)
      || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v9->fields.friendCode, 0),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0) )
    {
      sub_21FFECC(Day, v19);
    }
    NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        StringLiteral_23468/*"ok"*/,
        CallBack->fields.method);
  }
  else
  {
    v21 = this->fields.CallBack;
    if ( v21 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v21->fields.invoke_impl)(
        v21->fields.method_code,
        StringLiteral_23290/*"ng"*/,
        v21->fields.method);
  }
}