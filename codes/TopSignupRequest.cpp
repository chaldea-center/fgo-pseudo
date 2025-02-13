void __fastcall TopSignupRequest___ctor(TopSignupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDF96 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDF96 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDF95 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_23752/*"signup/top"*/);
    byte_4BDDF95 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_23752/*"signup/top"*/, 0LL);
}


void __fastcall TopSignupRequest__requestCompleted(
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
  int32_t Month; // w24
  Il2CppObject *Day; // x0
  __int64 v16; // x1
  __int64 *v17; // x8
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8

  if ( (byte_4BDDF97 & 1) == 0 )
  {
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDF97 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(1, responseList, 0LL);
  if ( v5
    && ResponseData__checkError(v5, v5->fields.resCode, v6)
    && (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) != 0LL )
  {
    v8 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_39807076(birthDay, 0LL).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v8->fields.name;
    genderType = v8->fields.genderType;
    v13 = (NetworkManager_o *)Instance;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v19.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v19, 0LL);
    v20.fields._dateData = (uint64_t)&dateData;
    Day = (Il2CppObject *)System_DateTime__get_Day(v20, 0LL);
    if ( !v13
      || (NetworkManager__SetSignup_39797000(v13, name, genderType, Month, (int32_t)Day, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v8->fields.friendCode, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
      sub_1C22094(Day, v16);
    }
    NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0LL);
    v17 = &StringLiteral_22632/*"ok"*/;
  }
  else
  {
    v17 = &StringLiteral_22456/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v17, 0LL);
}