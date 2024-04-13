void __fastcall TopSignupRequest___ctor(TopSignupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAC39 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EAC39 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EAC38 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22430/*"signup/top"*/, v4, v5, v6);
    byte_42EAC38 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_22430/*"signup/top"*/, 0LL);
}


void __fastcall TopSignupRequest__requestCompleted(
        TopSignupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  ResponseData_o *v18; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v20; // x20
  int64_t birthDay; // x21
  WebViewManager_o *Instance; // x0
  System_String_o *name; // x21
  int32_t genderType; // w22
  NetworkManager_o *v25; // x23
  int32_t Month; // w24
  WebViewManager_o *Day; // x0
  __int64 v28; // x1
  __int64 *v29; // x8
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8

  if ( (byte_42EAC3A & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    byte_42EAC3A = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v18 = ResponseCommandKind__SearchData(1, responseList, 0LL);
  if ( v18
    && ResponseData__checkError_29500464(v18, 0LL)
    && (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) != 0LL )
  {
    v20 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_26077468(birthDay, 0LL).fields.dateData;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v20->fields.name;
    genderType = v20->fields.genderType;
    v25 = (NetworkManager_o *)Instance;
    v31.fields.dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v31, 0LL);
    v32.fields.dateData = (uint64_t)&dateData;
    Day = (WebViewManager_o *)System_DateTime__get_Day(v32, 0LL);
    if ( !v25
      || (NetworkManager__SetSignup_26064012(v25, name, genderType, Month, (int32_t)Day, 0LL),
          (Day = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0LL),
          (Day = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v20->fields.friendCode, 0LL),
          (Day = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
      sub_B5D69C(Day, v28);
    }
    NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0LL);
    v29 = &StringLiteral_21497/*"ok"*/;
  }
  else
  {
    v29 = &StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v29, 0LL);
}