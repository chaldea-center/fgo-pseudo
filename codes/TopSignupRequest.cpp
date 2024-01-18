void __fastcall TopSignupRequest___ctor(TopSignupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_418993A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418993A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4189939 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22128/*"signup/top"*/, v2);
    byte_4189939 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_22128/*"signup/top"*/, 0LL);
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
  ResponseData_o *v9; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v11; // x20
  int64_t birthDay; // x21
  WebViewManager_o *Instance; // x0
  System_String_o *name; // x21
  int32_t genderType; // w22
  NetworkManager_o *v16; // x23
  int32_t Month; // w24
  WebViewManager_o *Day; // x0
  __int64 v19; // x1
  __int64 *v20; // x8
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8

  if ( (byte_418993B & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    byte_418993B = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(1, responseList, 0LL);
  if ( v9 && ResponseData__checkError_31019724(v9, 0LL) && (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) != 0LL )
  {
    v11 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_26271468(birthDay, 0LL).fields.dateData;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v11->fields.name;
    genderType = v11->fields.genderType;
    v16 = (NetworkManager_o *)Instance;
    v22.fields.dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v22, 0LL);
    v23.fields.dateData = (uint64_t)&dateData;
    Day = (WebViewManager_o *)System_DateTime__get_Day(v23, 0LL);
    if ( !v16
      || (NetworkManager__SetSignup_26258204(v16, name, genderType, Month, (int32_t)Day, 0LL),
          (Day = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0LL),
          (Day = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v11->fields.friendCode, 0LL),
          (Day = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
      sub_B2C434(Day, v19);
    }
    NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0LL);
    v20 = &StringLiteral_21218/*"ok"*/;
  }
  else
  {
    v20 = &StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v20, 0LL);
}