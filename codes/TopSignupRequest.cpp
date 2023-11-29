void __fastcall TopSignupRequest___ctor(TopSignupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_40FB803 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FB803 = 1;
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FB802 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22036, v2);
    byte_40FB802 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_22036, 0LL);
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
  int32_t Day; // w0
  NetworkManager_o *v19; // x0
  NetworkManager_o *v20; // x0
  NetworkManager_o *v21; // x0
  System_String_o **v22; // x8
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8

  if ( (byte_40FB804 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_21129, v7);
    sub_B16FFC(&StringLiteral_20980, v8);
    byte_40FB804 = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(1, responseList, 0LL);
  if ( v9 && ResponseData__checkError_30924960(v9, 0LL) && (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) != 0LL )
  {
    v11 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_23685272(birthDay, 0LL).fields.dateData;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v11->fields.name;
    genderType = v11->fields.genderType;
    v16 = (NetworkManager_o *)Instance;
    v24.fields.dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v24, 0LL);
    v25.fields.dateData = (uint64_t)&dateData;
    Day = System_DateTime__get_Day(v25, 0LL);
    if ( !v16
      || (NetworkManager__SetSignup_23672008(v16, name, genderType, Month, Day, 0LL),
          (v19 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__WriteSignup(v19, 0LL),
          (v20 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
      || (NetworkManager__SetFriendCode(v20, v11->fields.friendCode, 0LL),
          (v21 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
      sub_B170D4();
    }
    NetworkManager__WriteFriendCode(v21, 0LL);
    v22 = (System_String_o **)&StringLiteral_21129;
  }
  else
  {
    v22 = (System_String_o **)&StringLiteral_20980;
  }
  RequestBase__completed((RequestBase_o *)this, *v22, 0LL);
}