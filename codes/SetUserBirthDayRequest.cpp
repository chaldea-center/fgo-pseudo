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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  int64_t Time_39269384; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8

  if ( (byte_4B17B8B & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, normalName, *(_QWORD *)&genderType);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_17363/*"birthDay"*/, v13, v14);
    byte_4B17B8B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v16);
  NetworkManager__SetSignup_39260136((NetworkManager_o *)Instance, normalName, genderType, month, day, 0LL);
  v20.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0LL;
  System_DateTime___ctor_63080372(v20, 2000, month, day, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  v21.fields._dateData = dateTime.fields._dateData;
  Time_39269384 = NetworkManager__getTime_39269384(v21, 0LL);
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_17363/*"birthDay"*/, Time_39269384, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B8A & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22858/*"profile/editBirth"*/, v3, v4);
    byte_4B17B8A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_22858/*"profile/editBirth"*/, 0LL);
}


void __fastcall SetUserBirthDayRequest__requestCompleted(
        SetUserBirthDayRequest_o *this,
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
  ResponseData_o *v17; // x20
  NetworkManager_o *SelfUserGame; // x0
  __int64 v19; // x1
  NetworkManager_o *v20; // x21
  int64_t mAndroidApiKey; // x22
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  System_String_o *m_CancellationTokenSource; // x22
  int32_t mAuGameServerPublicKey_high; // w21
  NetworkManager_o *v26; // x23
  int32_t Month; // w24
  __int64 v28; // x1
  Il2CppObject *success; // x20
  System_String_o *v30; // x1
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8

  if ( (byte_4B17B8C & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, responseList, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v13, v14);
    byte_4B17B8C = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v15 = ResponseCommandKind__SearchData(43, responseList, 0LL);
  if ( v15 && (v17 = v15, ResponseData__checkError(v15, v15->fields.resCode, v16)) )
  {
    SelfUserGame = (NetworkManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_19;
    v20 = SelfUserGame;
    mAndroidApiKey = (int64_t)SelfUserGame->fields.mAndroidApiKey;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
    dateData = NetworkManager__getDateTime_39270164(mAndroidApiKey, 0LL).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    m_CancellationTokenSource = (System_String_o *)v20->fields.m_CancellationTokenSource;
    mAuGameServerPublicKey_high = HIDWORD(v20->fields.mAuGameServerPublicKey);
    v26 = (NetworkManager_o *)Instance;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v23);
    v32.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v32, 0LL);
    v33.fields._dateData = (uint64_t)&dateData;
    SelfUserGame = (NetworkManager_o *)System_DateTime__get_Day(v33, 0LL);
    if ( !v26
      || (NetworkManager__SetSignup_39260136(
            v26,
            m_CancellationTokenSource,
            mAuGameServerPublicKey_high,
            Month,
            (int32_t)SelfUserGame,
            0LL),
          (SelfUserGame = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_19:
      sub_1BCAA3C(SelfUserGame, v19);
    }
    NetworkManager__WriteSignup(SelfUserGame, 0LL);
    success = (Il2CppObject *)v17->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v28);
    v30 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v30 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v30, 0LL);
}