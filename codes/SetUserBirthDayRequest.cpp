void __fastcall SetUserBirthDayRequest___ctor(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetUserBirthDayRequest__beginRequest(
        SetUserBirthDayRequest_o *this,
        System_String_o *normalName,
        int32_t genderType,
        int32_t month,
        int32_t day,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_o *Instance; // x0
  __int64 v18; // x1
  int64_t Time_26076684; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8

  if ( (byte_42ECF0E & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)normalName, genderType, *(_QWORD *)&month);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16926/*"birthDay"*/, v14, v15, v16);
    byte_42ECF0E = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v18);
  NetworkManager__SetSignup_26064012(Instance, normalName, genderType, month, day, 0LL);
  v21.fields.dateData = (uint64_t)&dateTime;
  dateTime.fields.dateData = 0LL;
  System_DateTime___ctor_15565784(v21, 2000, month, day, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v22.fields.dateData = dateTime.fields.dateData;
  Time_26076684 = NetworkManager__getTime_26076684(v22, 0LL);
  RequestBase__addField_32361792((RequestBase_o *)this, (System_String_o *)StringLiteral_16926/*"birthDay"*/, Time_26076684, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42ECF0D & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21834/*"profile/editBirth"*/, v4, v5, v6);
    byte_42ECF0D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_21834/*"profile/editBirth"*/, 0LL);
}


void __fastcall SetUserBirthDayRequest__requestCompleted(
        SetUserBirthDayRequest_o *this,
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
  ResponseData_o *v19; // x20
  NetworkManager_o *SelfUserGame; // x0
  __int64 v21; // x1
  NetworkManager_o *v22; // x21
  int64_t mAndroidProjectId; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *mAndroidApiKey; // x22
  int32_t commandList_high; // w21
  NetworkManager_o *v27; // x23
  int32_t Month; // w24
  Il2CppObject *success; // x20
  System_String_o *v30; // x1
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8

  if ( (byte_42ECF0F & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    byte_42ECF0F = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v18 = ResponseCommandKind__SearchData(43, responseList, 0LL);
  if ( v18 && (v19 = v18, ResponseData__checkError_29500464(v18, 0LL)) )
  {
    SelfUserGame = (NetworkManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_20;
    v22 = SelfUserGame;
    mAndroidProjectId = (int64_t)SelfUserGame->fields.mAndroidProjectId;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_26077468(mAndroidProjectId, 0LL).fields.dateData;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    mAndroidApiKey = v22->fields.mAndroidApiKey;
    commandList_high = HIDWORD(v22->fields.commandList);
    v27 = (NetworkManager_o *)Instance;
    v32.fields.dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v32, 0LL);
    v33.fields.dateData = (uint64_t)&dateData;
    SelfUserGame = (NetworkManager_o *)System_DateTime__get_Day(v33, 0LL);
    if ( !v27
      || (NetworkManager__SetSignup_26064012(v27, mAndroidApiKey, commandList_high, Month, (int32_t)SelfUserGame, 0LL),
          (SelfUserGame = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_20:
      sub_B5D69C(SelfUserGame, v21);
    }
    NetworkManager__WriteSignup(SelfUserGame, 0LL);
    success = (Il2CppObject *)v19->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v30 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v30 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v30, 0LL);
}