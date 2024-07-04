void __fastcall TopSignupRequest___ctor(TopSignupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_48E40B8 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E40B8 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E40B7 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_22978/*"signup/top"*/, v2);
    byte_48E40B7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_22978/*"signup/top"*/, 0LL);
}


void __fastcall TopSignupRequest__requestCompleted(
        TopSignupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v12; // x20
  int64_t birthDay; // x21
  Il2CppObject *Instance; // x0
  System_String_o *name; // x22
  int32_t genderType; // w21
  NetworkManager_o *v17; // x23
  int32_t Month; // w24
  Il2CppObject *Day; // x0
  __int64 v20; // x1
  __int64 *v21; // x8
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8

  if ( (byte_48E40B9 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, responseList);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v8);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v9);
    byte_48E40B9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(1, responseList, 0LL);
  if ( v10
    && ResponseData__checkError_39752340(v10, 0LL)
    && (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) != 0LL )
  {
    v12 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_37173004(birthDay, 0LL).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v12->fields.name;
    genderType = v12->fields.genderType;
    v17 = (NetworkManager_o *)Instance;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v23.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v23, 0LL);
    v24.fields._dateData = (uint64_t)&dateData;
    Day = (Il2CppObject *)System_DateTime__get_Day(v24, 0LL);
    if ( !v17
      || (NetworkManager__SetSignup_37252204(v17, name, genderType, Month, (int32_t)Day, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v12->fields.friendCode, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
      sub_1B00F28(Day, v20);
    }
    NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0LL);
    v21 = &StringLiteral_21923/*"ok"*/;
  }
  else
  {
    v21 = &StringLiteral_21754/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v21, 0LL);
}