void __fastcall TopSignupRequest___ctor(TopSignupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17BB2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17BB2 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17BB1 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23572/*"signup/top"*/, v3, v4);
    byte_4B17BB1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_23572/*"signup/top"*/, 0LL);
}


void __fastcall TopSignupRequest__requestCompleted(
        TopSignupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ResponseData_o *v15; // x0
  const MethodInfo *v16; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v18; // x1
  UserGameEntity_o *v19; // x20
  int64_t birthDay; // x21
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  System_String_o *name; // x22
  int32_t genderType; // w21
  NetworkManager_o *v25; // x23
  int32_t Month; // w24
  Il2CppObject *Day; // x0
  __int64 v28; // x1
  __int64 *v29; // x8
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8

  if ( (byte_4B17BB3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, responseList, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v13, v14);
    byte_4B17BB3 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v15 = ResponseCommandKind__SearchData(1, responseList, 0LL);
  if ( v15
    && ResponseData__checkError(v15, v15->fields.resCode, v16)
    && (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) != 0LL )
  {
    v19 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    dateData = NetworkManager__getDateTime_39270164(birthDay, 0LL).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v19->fields.name;
    genderType = v19->fields.genderType;
    v25 = (NetworkManager_o *)Instance;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v22);
    v31.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v31, 0LL);
    v32.fields._dateData = (uint64_t)&dateData;
    Day = (Il2CppObject *)System_DateTime__get_Day(v32, 0LL);
    if ( !v25
      || (NetworkManager__SetSignup_39260136(v25, name, genderType, Month, (int32_t)Day, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v19->fields.friendCode, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
      sub_1BCAA3C(Day, v28);
    }
    NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0LL);
    v29 = &StringLiteral_22465/*"ok"*/;
  }
  else
  {
    v29 = &StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v29, 0LL);
}