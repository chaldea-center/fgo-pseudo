void __fastcall TopSignupRequest___ctor(TopSignupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42B22D8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B22D8 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B22D7 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_22315/*"signup/top"*/);
    byte_42B22D7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_22315/*"signup/top"*/, 0LL);
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
  WebViewManager_o *Instance; // x0
  System_String_o *name; // x21
  int32_t genderType; // w22
  NetworkManager_o *v12; // x23
  int32_t Month; // w24
  WebViewManager_o *Day; // x0
  __int64 v15; // x1
  __int64 *v16; // x8
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8

  if ( (byte_42B22D9 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B22D9 = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(1, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) && (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) != 0LL )
  {
    v7 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_25741912(birthDay, 0LL).fields.dateData;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v7->fields.name;
    genderType = v7->fields.genderType;
    v12 = (NetworkManager_o *)Instance;
    v18.fields.dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v18, 0LL);
    v19.fields.dateData = (uint64_t)&dateData;
    Day = (WebViewManager_o *)System_DateTime__get_Day(v19, 0LL);
    if ( !v12
      || (NetworkManager__SetSignup_25728456(v12, name, genderType, Month, (int32_t)Day, 0LL),
          (Day = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0LL),
          (Day = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v7->fields.friendCode, 0LL),
          (Day = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
      sub_B52A5C(Day, v15);
    }
    NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0LL);
    v16 = &StringLiteral_21388/*"ok"*/;
  }
  else
  {
    v16 = &StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v16, 0LL);
}