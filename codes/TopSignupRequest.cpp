void __fastcall TopSignupRequest___ctor(TopSignupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CAED & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CAED = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAEC & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23324/*"signup/top"*/);
    byte_4A5CAEC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_23324/*"signup/top"*/, 0LL);
}


void __fastcall TopSignupRequest__requestCompleted(
        TopSignupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v7; // x20
  int64_t birthDay; // x21
  Il2CppObject *Instance; // x0
  System_String_o *name; // x22
  int32_t genderType; // w21
  NetworkManager_o *v12; // x23
  int32_t Month; // w24
  Il2CppObject *Day; // x0
  __int64 v15; // x1
  __int64 *v16; // x8
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8

  if ( (byte_4A5CAEE & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CAEE = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(1, responseList, 0LL);
  if ( v5 && ResponseData__checkError_41126424(v5, 0LL) && (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) != 0LL )
  {
    v7 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_38478840(birthDay, 0LL).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v7->fields.name;
    genderType = v7->fields.genderType;
    v12 = (NetworkManager_o *)Instance;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v18.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v18, 0LL);
    v19.fields._dateData = (uint64_t)&dateData;
    Day = (Il2CppObject *)System_DateTime__get_Day(v19, 0LL);
    if ( !v12
      || (NetworkManager__SetSignup_38468812(v12, name, genderType, Month, (int32_t)Day, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v7->fields.friendCode, 0LL),
          (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
      sub_1B8880C(Day, v15);
    }
    NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0LL);
    v16 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    v16 = &StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v16, 0LL);
}