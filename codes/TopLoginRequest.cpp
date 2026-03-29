void TopLoginRequest__AddAppCheckField(TopLoginRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  FirebaseScript_c *v4; // x0
  FirebaseScript_c *v5; // x0
  bool IsNullOrEmpty; // w21
  FirebaseScript_c *v7; // x0
  char v8; // w21
  System_String_o *v9; // x1
  System_String_o *AppCheckTokenError_k__BackingField; // x2
  FirebaseScript_c *v11; // x0
  __int64 *v12; // x9
  FirebaseScript_c *v13; // x0
  FirebaseScript_c *v14; // x0
  FirebaseScript_c *v15; // x0
  System_String_o *AppCheckPrevMessageKey_k__BackingField; // x21
  System_String_o *String_72078212; // x0
  const MethodInfo *v18; // x3
  FirebaseScript_c *v19; // x0

  if ( (byte_4D325DF & 1) == 0 )
  {
    sub_1C93AD4(&FirebaseScript_TypeInfo);
    sub_1C93AD4(&StringLiteral_14361/*"The token wasn't created in time"*/);
    sub_1C93AD4(&StringLiteral_16934/*"appCheckToken"*/);
    sub_1C93AD4(&StringLiteral_16932/*"appCheckErrorMessage"*/);
    sub_1C93AD4(&StringLiteral_6780/*"Firebase wasn't available"*/);
    byte_4D325DF = 1;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4D2A55A )
  {
    sub_1C93AD4(&FirebaseScript_TypeInfo);
    byte_4D2A55A = 1;
  }
  v4 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v4 = FirebaseScript_TypeInfo;
  }
  if ( v4->static_fields->_CanUseFirebase_k__BackingField )
    goto LABEL_76;
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  if ( !byte_4D3028F )
  {
    sub_1C93AD4(&FirebaseScript_TypeInfo);
    byte_4D3028F = 1;
  }
  v4 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v4 = FirebaseScript_TypeInfo;
  }
  if ( !v4->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
LABEL_76:
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_4D30292 )
    {
      sub_1C93AD4(&FirebaseScript_TypeInfo);
      byte_4D30292 = 1;
    }
    v5 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v5 = FirebaseScript_TypeInfo;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(v5->static_fields->_AppCheckToken_k__BackingField, 0);
    if ( FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
      {
LABEL_18:
        if ( !byte_4D30293 )
        {
          sub_1C93AD4(&FirebaseScript_TypeInfo);
          byte_4D30293 = 1;
        }
        v7 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v7 = FirebaseScript_TypeInfo;
        }
        if ( System_String__IsNullOrEmpty(v7->static_fields->_AppCheckTokenError_k__BackingField, 0) )
        {
          RequestBase__addField_44907496(
            (RequestBase_o *)this,
            (System_String_o *)StringLiteral_16932/*"appCheckErrorMessage"*/,
            (System_String_o *)StringLiteral_14361/*"The token wasn't created in time"*/,
            v2);
          v8 = 0;
          goto LABEL_47;
        }
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4D30293 )
        {
          sub_1C93AD4(&FirebaseScript_TypeInfo);
          byte_4D30293 = 1;
        }
        v13 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v13 = FirebaseScript_TypeInfo;
        }
        v12 = &StringLiteral_16932/*"appCheckErrorMessage"*/;
        AppCheckTokenError_k__BackingField = v13->static_fields->_AppCheckTokenError_k__BackingField;
        goto LABEL_45;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( IsNullOrEmpty )
        goto LABEL_18;
    }
    if ( !byte_4D30292 )
    {
      sub_1C93AD4(&FirebaseScript_TypeInfo);
      byte_4D30292 = 1;
    }
    v11 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v11 = FirebaseScript_TypeInfo;
    }
    v12 = &StringLiteral_16934/*"appCheckToken"*/;
    AppCheckTokenError_k__BackingField = v11->static_fields->_AppCheckToken_k__BackingField;
LABEL_45:
    v9 = (System_String_o *)*v12;
    goto LABEL_46;
  }
  v9 = (System_String_o *)StringLiteral_16932/*"appCheckErrorMessage"*/;
  AppCheckTokenError_k__BackingField = (System_String_o *)StringLiteral_6780/*"Firebase wasn't available"*/;
LABEL_46:
  RequestBase__addField_44907496((RequestBase_o *)this, v9, AppCheckTokenError_k__BackingField, v2);
  v8 = 1;
LABEL_47:
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4D3028E )
  {
    sub_1C93AD4(&FirebaseScript_TypeInfo);
    byte_4D3028E = 1;
  }
  v14 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v14 = FirebaseScript_TypeInfo;
  }
  v14->static_fields->_IsSendAppCheckToken_k__BackingField = v8;
  if ( !byte_4D30291 )
  {
    sub_1C93AD4(&FirebaseScript_TypeInfo);
    v14 = FirebaseScript_TypeInfo;
    byte_4D30291 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = FirebaseScript_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v14->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0) )
  {
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    if ( !byte_4D30291 )
    {
      sub_1C93AD4(&FirebaseScript_TypeInfo);
      byte_4D30291 = 1;
    }
    v15 = FirebaseScript_TypeInfo;
    if ( FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v15 = FirebaseScript_TypeInfo;
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
      if ( !byte_4D30291 )
      {
        sub_1C93AD4(&FirebaseScript_TypeInfo);
        v15 = FirebaseScript_TypeInfo;
        byte_4D30291 = 1;
      }
    }
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = FirebaseScript_TypeInfo;
    }
    String_72078212 = UnityEngine_PlayerPrefs__GetString_72078212(
                        v15->static_fields->_AppCheckPrevMessageKey_k__BackingField,
                        0);
    RequestBase__addField_44907496((RequestBase_o *)this, AppCheckPrevMessageKey_k__BackingField, String_72078212, v18);
    if ( !byte_4D30291 )
    {
      sub_1C93AD4(&FirebaseScript_TypeInfo);
      byte_4D30291 = 1;
    }
    v19 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v19 = FirebaseScript_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v19->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0);
  }
}


void TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  if ( (byte_4D325DE & 1) == 0 )
  {
    sub_1C93AD4(&TopLoginRequest_TypeInfo);
    byte_4D325DE = 1;
  }
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0;
}


void TopLoginRequest__beginRequest(TopLoginRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  NetworkManager_c *v5; // x0
  System_String_o *dataServerFolder; // x20
  _QWORD *UTF8; // x0
  __int64 v8; // x1
  System_Byte_array *v9; // x21
  uint32_t v10; // w21
  __int64 v11; // x22
  Il2CppObject *Item; // x0
  int64_t v13; // x0
  const MethodInfo *v14; // x3
  __int64 v15; // x9
  const MethodInfo *v16; // x3
  int32_t TerminalDispState; // w0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1

  if ( (byte_4D325DC & 1) == 0 )
  {
    sub_1C93AD4(&Crc32_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17036/*"assetbundleFolder"*/);
    sub_1C93AD4(&StringLiteral_24887/*"userState"*/);
    sub_1C93AD4(&StringLiteral_21429/*"lastAccessTime"*/);
    sub_1C93AD4(&StringLiteral_21209/*"isTerminalLogin"*/);
    byte_4D325DC = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__AddSignatureField((RequestBase_o *)this, v3);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2DF30 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2DF30 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v5->static_fields->dataServerFolder;
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_21;
  v9 = (System_Byte_array *)(*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 600LL))(
                              UTF8,
                              dataServerFolder,
                              *(_QWORD *)(*UTF8 + 608LL));
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v10 = Crc32__Compute(v9, 0);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  UTF8 = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UTF8 = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !this->fields.paramString )
LABEL_21:
    sub_1C93D2C(UTF8, v8);
  v11 = *(_QWORD *)(UTF8[23] + 64LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_21429/*"lastAccessTime"*/,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v13 = System_Int64__Parse((System_String_o *)Item, 0);
  if ( v13 < 0 )
    v15 = ~v13;
  else
    v15 = -v13;
  RequestBase__addField_44911784(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24887/*"userState"*/,
    (unsigned int)v11 & v10 ^ (unsigned __int64)(v15 >> 2),
    v14);
  RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_17036/*"assetbundleFolder"*/, dataServerFolder, v16);
  TerminalDispState = NetworkManager__GetTerminalDispState(0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21209/*"isTerminalLogin"*/, TerminalDispState, v18);
  TopLoginRequest__AddAppCheckField(this, v19);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


bool TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_4D325DB & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&TopLoginRequest_TypeInfo);
    byte_4D325DB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  static_fields = TopLoginRequest_TypeInfo->static_fields;
  return Time <= static_fields->resetTime || Time <= static_fields->accessTime;
}


System_String_o *TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D325DA & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_9193/*"MockTopLoginRequest"*/);
    byte_4D325DA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9193/*"MockTopLoginRequest"*/, 0);
}


System_String_o *TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D325D9 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_21605/*"login/top"*/);
    byte_4D325D9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_21605/*"login/top"*/, 0);
}


void TopLoginRequest__requestCompleted(
        TopLoginRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v9; // x21
  ManagerConfig_c *v10; // x0
  NetworkManager_o *Instance; // x0
  __int64 v12; // x1
  int64_t birthDay; // x22
  Il2CppObject *v14; // x0
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v17; // x24
  int32_t Month; // w25
  int64_t p_fields; // x22
  Il2CppObject *v20; // x21
  BalanceConfig_c *v21; // x0
  int64_t NextDayTime_42097784; // x21
  int64_t v23; // x0
  int64_t v24; // x9
  Il2CppObject *success; // x20
  System_String_o *v26; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v28; // x1
  ResponseFailData_o *v29; // x21
  const MethodInfo *v30; // x2
  struct NetworkManager_ResultCallbackFunc_o *v31; // x8
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D325DD & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&OtherUserNewManager_TypeInfo);
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&ResponseFailData_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C93AD4(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C93AD4(&TopLoginRequest_TypeInfo);
    sub_1C93AD4(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C93AD4(&UserCommandCodeNewManager_TypeInfo);
    sub_1C93AD4(&UserEquipNewManager_TypeInfo);
    sub_1C93AD4(&UserServantCollectionManager_TypeInfo);
    sub_1C93AD4(&UserServantNewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_18822/*"do_signup"*/);
    byte_4D325DD = 1;
  }
  dateData = 0;
  if ( (byte_4D325CF & 1) == 0 )
  {
    sub_1C93AD4(&TopHomeRequest_TypeInfo);
    byte_4D325CF = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(4, responseList, 0);
  if ( !v5 )
    goto LABEL_65;
  v7 = v5;
  if ( ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( SelfUserGame )
    {
      v9 = SelfUserGame;
      v10 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v10 = ManagerConfig_TypeInfo;
      }
      if ( v10->static_fields->UseDebugCommand )
      {
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_68;
        if ( !NetworkManager__ReadSignup(Instance, 0) )
        {
          birthDay = v9->fields.birthDay;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          dateData = NetworkManager__getDateTime_42096756(birthDay, 0).fields._dateData;
          v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          name = v9->fields.name;
          genderType = v9->fields.genderType;
          v17 = (NetworkManager_o *)v14;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
          Instance = (NetworkManager_o *)System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
          if ( !v17 )
            goto LABEL_68;
          NetworkManager__SetSignup_42086680(v17, name, genderType, Month, (int32_t)Instance, 0);
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_68;
          NetworkManager__WriteSignup(Instance, 0);
        }
      }
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      if ( !NetworkManager__ReadFriendCode(Instance, 0) )
      {
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_68;
        NetworkManager__SetFriendCode(Instance, v9->fields.friendCode, 0);
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_68;
        NetworkManager__WriteFriendCode(Instance, 0);
      }
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__SetUserId((AdManager_o *)Instance, v9->fields.userId, 0);
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetFriendCode((AdManager_o *)Instance, v9->fields.friendCode, 0);
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
          if ( Instance )
          {
            p_fields = (int64_t)&v9->fields;
            CrashReporter__SetFriendCode((CrashReporter_o *)Instance, v9->fields.friendCode, 0);
            v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
            Instance = (NetworkManager_o *)System_Int64__ToString(p_fields, 0);
            if ( v20 )
            {
              CrashReporter__SetUserId((CrashReporter_o *)v20, (System_String_o *)Instance, 0);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              NetworkManager__getTime(0);
              v21 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v21 = BalanceConfig_TypeInfo;
              }
              NextDayTime_42097784 = NetworkManager__getNextDayTime_42097784(
                                       v21->static_fields->RequestTopLoginResetTime1,
                                       0);
              v23 = NetworkManager__getNextDayTime_42097784(
                      BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                      0);
              if ( NextDayTime_42097784 <= v23 )
                v24 = NextDayTime_42097784;
              else
                v24 = v23;
              TopLoginRequest_TypeInfo->static_fields->accessTime = v24;
              if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
              UserServantNewManager__LoginProcess(0);
              if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
              UserServantCollectionManager__LoginProcess(0);
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
              ServantCommentManager__LoginProcess(0);
              if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
              UserEquipNewManager__LoginProcess(0);
              if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
              OtherUserNewManager__LoginProcess(0);
              if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
              UserCommandCodeNewManager__LoginProcess(0);
              if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
              UserCommandCodeCollectionManager__LoginProcess(0);
              SoundPlayerComponent__LoginProcess(0);
              if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
              ServantProfileLimitCountManager__UpdateProfileServantLimitCount(0);
              if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
              ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0);
              success = (Il2CppObject *)v7->fields.success;
              if ( !JsonManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
              v26 = JsonManager__toJson(success, 0, 0, 0);
              CallBack = this->fields.CallBack;
              if ( CallBack )
              {
                v28 = (__int64)v26;
LABEL_64:
                ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
                  CallBack->fields.method_code,
                  v28,
                  CallBack->fields.method);
                return;
              }
              return;
            }
          }
        }
      }
LABEL_68:
      sub_1C93D2C(Instance, v12);
    }
LABEL_65:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0;
    v31 = this->fields.CallBack;
    if ( v31 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v31->fields.invoke_impl)(
        v31->fields.method_code,
        StringLiteral_22483/*"ng"*/,
        v31->fields.method);
    return;
  }
  v29 = (ResponseFailData_o *)sub_1C93D20(ResponseFailData_TypeInfo);
  ResponseFailData___ctor(v29, v7, v30);
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !v29 )
    goto LABEL_68;
  if ( !System_String__op_Equality(v29->fields.action, (System_String_o *)StringLiteral_18822/*"do_signup"*/, 0) )
    goto LABEL_65;
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v28 = StringLiteral_18822/*"do_signup"*/;
    goto LABEL_64;
  }
}