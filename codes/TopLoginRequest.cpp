void __fastcall TopLoginRequest__AddAppCheckField(TopLoginRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FirebaseScript_c *v9; // x0
  FirebaseScript_c *v10; // x0
  __int64 v11; // x1
  bool IsNullOrEmpty; // w20
  FirebaseScript_c *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  char v16; // w20
  System_String_o *v17; // x1
  System_String_o *AppCheckTokenError_k__BackingField; // x2
  FirebaseScript_c *v19; // x0
  __int64 *v20; // x9
  FirebaseScript_c *v21; // x0
  FirebaseScript_c *v22; // x0
  System_String_o *v23; // x20
  System_String_o *String_69314580; // x0
  const MethodInfo *v25; // x3

  if ( (byte_4A4FFCA & 1) == 0 )
  {
    sub_1B863B8(&FirebaseScript_TypeInfo, method);
    sub_1B863B8(&StringLiteral_14034/*"The token wasn't created in time"*/, v4);
    sub_1B863B8(&StringLiteral_16577/*"appCheckPrevMessage"*/, v5);
    sub_1B863B8(&StringLiteral_16578/*"appCheckToken"*/, v6);
    sub_1B863B8(&StringLiteral_16576/*"appCheckErrorMessage"*/, v7);
    sub_1B863B8(&StringLiteral_6681/*"Firebase wasn't available"*/, v8);
    byte_4A4FFCA = 1;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4A48C24 )
  {
    sub_1B863B8(&FirebaseScript_TypeInfo, method);
    byte_4A48C24 = 1;
  }
  v9 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v9 = FirebaseScript_TypeInfo;
  }
  if ( v9->static_fields->_CanUseFirebase_k__BackingField )
    goto LABEL_57;
  if ( !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9);
  if ( !byte_4A4DDAB )
  {
    sub_1B863B8(&FirebaseScript_TypeInfo, method);
    byte_4A4DDAB = 1;
  }
  v9 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v9 = FirebaseScript_TypeInfo;
  }
  if ( !v9->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
LABEL_57:
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_4A4DDAD )
    {
      sub_1B863B8(&FirebaseScript_TypeInfo, method);
      byte_4A4DDAD = 1;
    }
    v10 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v10 = FirebaseScript_TypeInfo;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(v10->static_fields->_AppCheckToken_k__BackingField, 0LL);
    if ( FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
      {
LABEL_18:
        if ( !byte_4A4DDAE )
        {
          sub_1B863B8(&FirebaseScript_TypeInfo, v11);
          byte_4A4DDAE = 1;
        }
        v13 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v13 = FirebaseScript_TypeInfo;
        }
        if ( System_String__IsNullOrEmpty(v13->static_fields->_AppCheckTokenError_k__BackingField, 0LL) )
        {
          RequestBase__addField_42282000(
            (RequestBase_o *)this,
            (System_String_o *)StringLiteral_16576/*"appCheckErrorMessage"*/,
            (System_String_o *)StringLiteral_14034/*"The token wasn't created in time"*/,
            v2);
          v16 = 0;
          goto LABEL_47;
        }
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4A4DDAE )
        {
          sub_1B863B8(&FirebaseScript_TypeInfo, v14);
          byte_4A4DDAE = 1;
        }
        v21 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v21 = FirebaseScript_TypeInfo;
        }
        v20 = &StringLiteral_16576/*"appCheckErrorMessage"*/;
        AppCheckTokenError_k__BackingField = v21->static_fields->_AppCheckTokenError_k__BackingField;
        goto LABEL_45;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( IsNullOrEmpty )
        goto LABEL_18;
    }
    if ( !byte_4A4DDAD )
    {
      sub_1B863B8(&FirebaseScript_TypeInfo, v11);
      byte_4A4DDAD = 1;
    }
    v19 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v19 = FirebaseScript_TypeInfo;
    }
    v20 = &StringLiteral_16578/*"appCheckToken"*/;
    AppCheckTokenError_k__BackingField = v19->static_fields->_AppCheckToken_k__BackingField;
LABEL_45:
    v17 = (System_String_o *)*v20;
    goto LABEL_46;
  }
  v17 = (System_String_o *)StringLiteral_16576/*"appCheckErrorMessage"*/;
  AppCheckTokenError_k__BackingField = (System_String_o *)StringLiteral_6681/*"Firebase wasn't available"*/;
LABEL_46:
  RequestBase__addField_42282000((RequestBase_o *)this, v17, AppCheckTokenError_k__BackingField, v2);
  v16 = 1;
LABEL_47:
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4A4DDAA )
  {
    sub_1B863B8(&FirebaseScript_TypeInfo, v15);
    byte_4A4DDAA = 1;
  }
  v22 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v22 = FirebaseScript_TypeInfo;
  }
  v22->static_fields->_IsSendAppCheckToken_k__BackingField = v16;
  v23 = (System_String_o *)StringLiteral_16577/*"appCheckPrevMessage"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16577/*"appCheckPrevMessage"*/, 0LL) )
  {
    String_69314580 = UnityEngine_PlayerPrefs__GetString_69314580(v23, 0LL);
    RequestBase__addField_42282000((RequestBase_o *)this, v23, String_69314580, v25);
    UnityEngine_PlayerPrefs__DeleteKey(v23, 0LL);
  }
}


void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4FFC9 & 1) == 0 )
  {
    sub_1B863B8(&TopLoginRequest_TypeInfo, v1);
    byte_4A4FFC9 = 1;
  }
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
}


void __fastcall TopLoginRequest__beginRequest(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  NetworkManager_c *v12; // x0
  System_String_o *dataServerFolder; // x20
  _QWORD *UTF8; // x0
  __int64 v15; // x1
  System_Byte_array *v16; // x21
  uint32_t v17; // w21
  __int64 v18; // x22
  Il2CppObject *Item; // x0
  int64_t v20; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x9
  const MethodInfo *v23; // x3
  int32_t TerminalDispState; // w0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1

  if ( (byte_4A4FFC7 & 1) == 0 )
  {
    sub_1B863B8(&Crc32_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_16699/*"assetbundleFolder"*/, v5);
    sub_1B863B8(&StringLiteral_24279/*"userState"*/, v6);
    sub_1B863B8(&StringLiteral_20854/*"lastAccessTime"*/, v7);
    sub_1B863B8(&StringLiteral_20642/*"isTerminalLogin"*/, v8);
    byte_4A4FFC7 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__AddSignatureField((RequestBase_o *)this, v9);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A4BADB )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v11);
    byte_4A4BADB = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v12->static_fields->dataServerFolder;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_21;
  v16 = (System_Byte_array *)(*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 600LL))(
                               UTF8,
                               dataServerFolder,
                               *(_QWORD *)(*UTF8 + 608LL));
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v17 = Crc32__Compute(v16, 0LL);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v15);
    byte_4A48C25 = 1;
  }
  UTF8 = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UTF8 = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !this->fields.paramString )
LABEL_21:
    sub_1B86614(UTF8, v15);
  v18 = *(_QWORD *)(UTF8[23] + 64LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_20854/*"lastAccessTime"*/,
           (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v20 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v20 < 0 )
    v22 = ~v20;
  else
    v22 = -v20;
  RequestBase__addField_42287768(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24279/*"userState"*/,
    (unsigned int)v18 & v17 ^ (unsigned __int64)(v22 >> 2),
    v21);
  RequestBase__addField_42282000((RequestBase_o *)this, (System_String_o *)StringLiteral_16699/*"assetbundleFolder"*/, dataServerFolder, v23);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20642/*"isTerminalLogin"*/, TerminalDispState, v25);
  TopLoginRequest__AddAppCheckField(this, v26);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_4A4FFC6 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&TopLoginRequest_TypeInfo, v2);
    byte_4A4FFC6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  static_fields = TopLoginRequest_TypeInfo->static_fields;
  return Time <= static_fields->resetTime || Time <= static_fields->accessTime;
}


System_String_o *__fastcall TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4FFC5 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_8994/*"MockTopLoginRequest"*/, v2);
    byte_4A4FFC5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_8994/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A4FFC4 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_21018/*"login/top"*/, v2);
    byte_4A4FFC4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_21018/*"login/top"*/, 0LL);
}


void __fastcall TopLoginRequest__requestCompleted(
        TopLoginRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  ResponseData_o *v28; // x0
  const MethodInfo *v29; // x2
  ResponseData_o *v30; // x20
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v32; // x21
  ManagerConfig_c *v33; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *v35; // x1
  int64_t birthDay; // x22
  Il2CppObject *v37; // x0
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v40; // x24
  int32_t Month; // w25
  BalanceConfig_c *v42; // x0
  int64_t NextDayTime_39523668; // x22
  int64_t v44; // x0
  int64_t v45; // x9
  Il2CppObject *Request_object; // x21
  const MethodInfo *v47; // x3
  Il2CppObject *success; // x20
  System_String_o *v49; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v51; // x1
  ResponseFailData_o *v52; // x21
  const MethodInfo *v53; // x2
  struct NetworkManager_ResultCallbackFunc_o *v54; // x8
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v56; // 0:x0.8
  System_DateTime_o v57; // 0:x0.8

  if ( (byte_4A4FFC8 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, responseList);
    sub_1B863B8(&System_DateTime_TypeInfo, v5);
    sub_1B863B8(&int___TypeInfo, v6);
    sub_1B863B8(&JsonManager_TypeInfo, v7);
    sub_1B863B8(&ManagerConfig_TypeInfo, v8);
    sub_1B863B8(&Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&OtherUserNewManager_TypeInfo, v11);
    sub_1B863B8(&ResponseCommandKind_TypeInfo, v12);
    sub_1B863B8(&ResponseFailData_TypeInfo, v13);
    sub_1B863B8(&ServantCommentManager_TypeInfo, v14);
    sub_1B863B8(&ServantProfileEventJoinManager_TypeInfo, v15);
    sub_1B863B8(&ServantProfileLimitCountManager_TypeInfo, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v19);
    sub_1B863B8(&TopLoginRequest_TypeInfo, v20);
    sub_1B863B8(&UserCommandCodeCollectionManager_TypeInfo, v21);
    sub_1B863B8(&UserCommandCodeNewManager_TypeInfo, v22);
    sub_1B863B8(&UserEquipNewManager_TypeInfo, v23);
    sub_1B863B8(&UserServantCollectionManager_TypeInfo, v24);
    sub_1B863B8(&UserServantNewManager_TypeInfo, v25);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v26);
    sub_1B863B8(&StringLiteral_18429/*"do_signup"*/, v27);
    byte_4A4FFC8 = 1;
  }
  dateData = 0LL;
  if ( (byte_4A4FFBA & 1) == 0 )
  {
    sub_1B863B8(&TopHomeRequest_TypeInfo, responseList);
    byte_4A4FFBA = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v28 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( !v28 )
    goto LABEL_71;
  v30 = v28;
  if ( ResponseData__checkError(v28, v28->fields.resCode, v29) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v32 = SelfUserGame;
      v33 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v33 = ManagerConfig_TypeInfo;
      }
      if ( v33->static_fields->UseDebugCommand )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
        {
          birthDay = v32->fields.birthDay;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          dateData = NetworkManager__getDateTime_39522640(birthDay, 0LL).fields._dateData;
          v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          name = v32->fields.name;
          genderType = v32->fields.genderType;
          v40 = (NetworkManager_o *)v37;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v56.fields._dateData = (uint64_t)&dateData;
          Month = System_DateTime__get_Month(v56, 0LL);
          v57.fields._dateData = (uint64_t)&dateData;
          Instance = (Il2CppObject *)System_DateTime__get_Day(v57, 0LL);
          if ( !v40 )
            goto LABEL_74;
          NetworkManager__SetSignup_39512564(v40, name, genderType, Month, (int32_t)Instance, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_74;
          NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
        }
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v32->fields.friendCode, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__SetUserId((AdManager_o *)Instance, v32->fields.userId, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetFriendCode((AdManager_o *)Instance, v32->fields.friendCode, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
          if ( Instance )
          {
            CrashReporter__SetUserId((CrashReporter_o *)Instance, v32->fields.friendCode, 0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            NetworkManager__getTime(0LL);
            v42 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v42 = BalanceConfig_TypeInfo;
            }
            NextDayTime_39523668 = NetworkManager__getNextDayTime_39523668(
                                     v42->static_fields->RequestTopLoginResetTime1,
                                     0LL);
            v44 = NetworkManager__getNextDayTime_39523668(
                    BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                    0LL);
            if ( NextDayTime_39523668 <= v44 )
              v45 = NextDayTime_39523668;
            else
              v45 = v44;
            TopLoginRequest_TypeInfo->static_fields->accessTime = v45;
            if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
            UserServantNewManager__LoginProcess(0LL);
            if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
            UserServantCollectionManager__LoginProcess(0LL);
            if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            ServantCommentManager__LoginProcess(0LL);
            if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
            UserEquipNewManager__LoginProcess(0LL);
            if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
            OtherUserNewManager__LoginProcess(0LL);
            if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
            UserCommandCodeNewManager__LoginProcess(0LL);
            if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
            UserCommandCodeCollectionManager__LoginProcess(0LL);
            SoundPlayerComponent__LoginProcess(0LL);
            if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
            ServantProfileLimitCountManager__UpdateProfileServantLimitCount(0LL);
            if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
            ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
            if ( UserGameEntity__HasFlag(v32, 0x2000000, 0LL) )
            {
LABEL_62:
              success = (Il2CppObject *)v30->fields.success;
              if ( !JsonManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
              v49 = JsonManager__toJson(success, 0, 0, 0LL);
              CallBack = this->fields.CallBack;
              if ( CallBack )
              {
                v51 = (__int64)v49;
LABEL_70:
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                  CallBack->fields.original_method_info,
                  v51,
                  *(_QWORD *)&CallBack->fields.extra_arg);
                return;
              }
              return;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Request_object = NetworkManager__getRequest_object_(
                               0LL,
                               (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
            Instance = (Il2CppObject *)sub_1B86460(int___TypeInfo, 1LL);
            if ( Instance )
            {
              v35 = Instance;
              if ( !LODWORD(Instance[1].monitor) )
                sub_1B8661C(Instance, Instance);
              LODWORD(Instance[2].klass) = 25;
              if ( Request_object )
              {
                UserStatusFlagSetRequest__beginRequest(
                  (UserStatusFlagSetRequest_o *)Request_object,
                  (System_Int32_array *)Instance,
                  0LL,
                  v47);
                goto LABEL_62;
              }
            }
          }
        }
      }
LABEL_74:
      sub_1B86614(Instance, v35);
    }
LABEL_71:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v54 = this->fields.CallBack;
    if ( v54 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v54->fields.m_target)(
        v54->fields.original_method_info,
        StringLiteral_21893/*"ng"*/,
        *(_QWORD *)&v54->fields.extra_arg);
    return;
  }
  v52 = (ResponseFailData_o *)sub_1B86604(ResponseFailData_TypeInfo);
  ResponseFailData___ctor(v52, v30, v53);
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !v52 )
    goto LABEL_74;
  if ( !System_String__op_Equality(v52->fields.action, (System_String_o *)StringLiteral_18429/*"do_signup"*/, 0LL) )
    goto LABEL_71;
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v51 = StringLiteral_18429/*"do_signup"*/;
    goto LABEL_70;
  }
}