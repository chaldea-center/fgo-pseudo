void __fastcall TopLoginRequest___ctor(TopLoginRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TopLoginRequest__AddAppCheckField(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FirebaseScript_c *v8; // x0
  FirebaseScript_c *v9; // x0
  __int64 v10; // x1
  bool IsNullOrEmpty; // w20
  FirebaseScript_c *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  char v15; // w20
  System_String_o *v16; // x1
  System_String_o *AppCheckTokenError_k__BackingField; // x2
  FirebaseScript_c *v18; // x0
  __int64 *v19; // x9
  FirebaseScript_c *v20; // x0
  FirebaseScript_c *v21; // x0
  System_String_o *v22; // x20
  System_String_o *String_70752688; // x0

  if ( (byte_4BC94E4 & 1) == 0 )
  {
    sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_14473/*"The token wasn't created in time"*/, v3);
    sub_1C1ABD4(&StringLiteral_17080/*"appCheckPrevMessage"*/, v4);
    sub_1C1ABD4(&StringLiteral_17081/*"appCheckToken"*/, v5);
    sub_1C1ABD4(&StringLiteral_17079/*"appCheckErrorMessage"*/, v6);
    sub_1C1ABD4(&StringLiteral_6877/*"Firebase wasn't available"*/, v7);
    byte_4BC94E4 = 1;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4BC2584 )
  {
    sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
    byte_4BC2584 = 1;
  }
  v8 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v8 = FirebaseScript_TypeInfo;
  }
  if ( v8->static_fields->_CanUseFirebase_k__BackingField )
    goto LABEL_57;
  if ( !v8->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v8);
  if ( !byte_4BC73C4 )
  {
    sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
    byte_4BC73C4 = 1;
  }
  v8 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v8 = FirebaseScript_TypeInfo;
  }
  if ( !v8->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
LABEL_57:
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_4BC73C6 )
    {
      sub_1C1ABD4(&FirebaseScript_TypeInfo, method);
      byte_4BC73C6 = 1;
    }
    v9 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v9 = FirebaseScript_TypeInfo;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(v9->static_fields->_AppCheckToken_k__BackingField, 0LL);
    if ( FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
      {
LABEL_18:
        if ( !byte_4BC73C7 )
        {
          sub_1C1ABD4(&FirebaseScript_TypeInfo, v10);
          byte_4BC73C7 = 1;
        }
        v12 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v12 = FirebaseScript_TypeInfo;
        }
        if ( System_String__IsNullOrEmpty(v12->static_fields->_AppCheckTokenError_k__BackingField, 0LL) )
        {
          RequestBase__addField_42362156(
            (RequestBase_o *)this,
            (System_String_o *)StringLiteral_17079/*"appCheckErrorMessage"*/,
            (System_String_o *)StringLiteral_14473/*"The token wasn't created in time"*/,
            0LL);
          v15 = 0;
          goto LABEL_47;
        }
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4BC73C7 )
        {
          sub_1C1ABD4(&FirebaseScript_TypeInfo, v13);
          byte_4BC73C7 = 1;
        }
        v20 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v20 = FirebaseScript_TypeInfo;
        }
        v19 = &StringLiteral_17079/*"appCheckErrorMessage"*/;
        AppCheckTokenError_k__BackingField = v20->static_fields->_AppCheckTokenError_k__BackingField;
        goto LABEL_45;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( IsNullOrEmpty )
        goto LABEL_18;
    }
    if ( !byte_4BC73C6 )
    {
      sub_1C1ABD4(&FirebaseScript_TypeInfo, v10);
      byte_4BC73C6 = 1;
    }
    v18 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v18 = FirebaseScript_TypeInfo;
    }
    v19 = &StringLiteral_17081/*"appCheckToken"*/;
    AppCheckTokenError_k__BackingField = v18->static_fields->_AppCheckToken_k__BackingField;
LABEL_45:
    v16 = (System_String_o *)*v19;
    goto LABEL_46;
  }
  v16 = (System_String_o *)StringLiteral_17079/*"appCheckErrorMessage"*/;
  AppCheckTokenError_k__BackingField = (System_String_o *)StringLiteral_6877/*"Firebase wasn't available"*/;
LABEL_46:
  RequestBase__addField_42362156((RequestBase_o *)this, v16, AppCheckTokenError_k__BackingField, 0LL);
  v15 = 1;
LABEL_47:
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4BC73C3 )
  {
    sub_1C1ABD4(&FirebaseScript_TypeInfo, v14);
    byte_4BC73C3 = 1;
  }
  v21 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v21 = FirebaseScript_TypeInfo;
  }
  v21->static_fields->_IsSendAppCheckToken_k__BackingField = v15;
  v22 = (System_String_o *)StringLiteral_17080/*"appCheckPrevMessage"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_17080/*"appCheckPrevMessage"*/, 0LL) )
  {
    String_70752688 = UnityEngine_PlayerPrefs__GetString_70752688(v22, 0LL);
    RequestBase__addField_42362156((RequestBase_o *)this, v22, String_70752688, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v22, 0LL);
  }
}


void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BC94E3 & 1) == 0 )
  {
    sub_1C1ABD4(&TopLoginRequest_TypeInfo, v1);
    byte_4BC94E3 = 1;
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
  __int64 v9; // x1
  NetworkManager_c *v10; // x0
  System_String_o *dataServerFolder; // x20
  _QWORD *UTF8; // x0
  __int64 v13; // x1
  System_Byte_array *v14; // x21
  uint32_t v15; // w21
  __int64 v16; // x22
  Il2CppObject *Item; // x0
  int64_t v18; // x0
  __int64 v19; // x9
  int32_t TerminalDispState; // w0
  const MethodInfo *v21; // x1

  if ( (byte_4BC94E1 & 1) == 0 )
  {
    sub_1C1ABD4(&Crc32_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&StringLiteral_17209/*"assetbundleFolder"*/, v5);
    sub_1C1ABD4(&StringLiteral_24861/*"userState"*/, v6);
    sub_1C1ABD4(&StringLiteral_21401/*"lastAccessTime"*/, v7);
    sub_1C1ABD4(&StringLiteral_21183/*"isTerminalLogin"*/, v8);
    byte_4BC94E1 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC51A4 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    byte_4BC51A4 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v10->static_fields->dataServerFolder;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_21;
  v14 = (System_Byte_array *)(*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 616LL))(
                               UTF8,
                               dataServerFolder,
                               *(_QWORD *)(*UTF8 + 624LL));
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v15 = Crc32__Compute(v14, 0LL);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v13);
    byte_4BC2585 = 1;
  }
  UTF8 = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UTF8 = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !this->fields.paramString )
LABEL_21:
    sub_1C1AE30(UTF8, v13);
  v16 = *(_QWORD *)(UTF8[23] + 64LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_21401/*"lastAccessTime"*/,
           (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v18 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v18 < 0 )
    v19 = ~v18;
  else
    v19 = -v18;
  RequestBase__addField_42368496(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24861/*"userState"*/,
    (unsigned int)v16 & v15 ^ (unsigned __int64)(v19 >> 2),
    0LL);
  RequestBase__addField_42362156((RequestBase_o *)this, (System_String_o *)StringLiteral_17209/*"assetbundleFolder"*/, dataServerFolder, 0LL);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21183/*"isTerminalLogin"*/, TerminalDispState, 0LL);
  TopLoginRequest__AddAppCheckField(this, v21);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_4BC94E0 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&TopLoginRequest_TypeInfo, v2);
    byte_4BC94E0 = 1;
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

  if ( (byte_4BC94DF & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_9292/*"MockTopLoginRequest"*/, v2);
    byte_4BC94DF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9292/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC94DE & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_21563/*"login/top"*/, v2);
    byte_4BC94DE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_21563/*"login/top"*/, 0LL);
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
  int64_t NextDayTime_39761680; // x22
  int64_t v44; // x0
  int64_t v45; // x9
  Il2CppObject *Request_object; // x21
  const MethodInfo *v47; // x3
  Il2CppObject *success; // x20
  System_String_o *v49; // x1
  ResponseFailData_o *v50; // x21
  const MethodInfo *v51; // x2
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v53; // 0:x0.8
  System_DateTime_o v54; // 0:x0.8

  if ( (byte_4BC94E2 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, responseList);
    sub_1C1ABD4(&System_DateTime_TypeInfo, v5);
    sub_1C1ABD4(&int___TypeInfo, v6);
    sub_1C1ABD4(&JsonManager_TypeInfo, v7);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v8);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___, v9);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
    sub_1C1ABD4(&OtherUserNewManager_TypeInfo, v11);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v12);
    sub_1C1ABD4(&ResponseFailData_TypeInfo, v13);
    sub_1C1ABD4(&ServantCommentManager_TypeInfo, v14);
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v15);
    sub_1C1ABD4(&ServantProfileLimitCountManager_TypeInfo, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v19);
    sub_1C1ABD4(&TopLoginRequest_TypeInfo, v20);
    sub_1C1ABD4(&UserCommandCodeCollectionManager_TypeInfo, v21);
    sub_1C1ABD4(&UserCommandCodeNewManager_TypeInfo, v22);
    sub_1C1ABD4(&UserEquipNewManager_TypeInfo, v23);
    sub_1C1ABD4(&UserServantCollectionManager_TypeInfo, v24);
    sub_1C1ABD4(&UserServantNewManager_TypeInfo, v25);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v26);
    sub_1C1ABD4(&StringLiteral_18963/*"do_signup"*/, v27);
    byte_4BC94E2 = 1;
  }
  dateData = 0LL;
  if ( (byte_4BC94D4 & 1) == 0 )
  {
    sub_1C1ABD4(&TopHomeRequest_TypeInfo, responseList);
    byte_4BC94D4 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v28 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( !v28 )
    goto LABEL_68;
  v30 = v28;
  if ( !ResponseData__checkError(v28, v28->fields.resCode, v29) )
  {
    v50 = (ResponseFailData_o *)sub_1C1AE20(ResponseFailData_TypeInfo);
    ResponseFailData___ctor(v50, v30, v51);
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    if ( !v50 )
      goto LABEL_70;
    if ( System_String__op_Equality(v50->fields.action, (System_String_o *)StringLiteral_18963/*"do_signup"*/, 0LL) )
    {
      v49 = (System_String_o *)StringLiteral_18963/*"do_signup"*/;
      goto LABEL_69;
    }
LABEL_68:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v49 = (System_String_o *)StringLiteral_22437/*"ng"*/;
    goto LABEL_69;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  v32 = SelfUserGame;
  v33 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v33 = ManagerConfig_TypeInfo;
  }
  if ( v33->static_fields->UseDebugCommand )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
    {
      birthDay = v32->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_39760652(birthDay, 0LL).fields._dateData;
      v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      name = v32->fields.name;
      genderType = v32->fields.genderType;
      v40 = (NetworkManager_o *)v37;
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v53.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v53, 0LL);
      v54.fields._dateData = (uint64_t)&dateData;
      Instance = (Il2CppObject *)System_DateTime__get_Day(v54, 0LL);
      if ( !v40 )
        goto LABEL_70;
      NetworkManager__SetSignup_39750576(v40, name, genderType, Month, (int32_t)Instance, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_70;
      NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v32->fields.friendCode, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetUserId((AdManager_o *)Instance, v32->fields.userId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetFriendCode((AdManager_o *)Instance, v32->fields.friendCode, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
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
  NextDayTime_39761680 = NetworkManager__getNextDayTime_39761680(v42->static_fields->RequestTopLoginResetTime1, 0LL);
  v44 = NetworkManager__getNextDayTime_39761680(BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2, 0LL);
  if ( NextDayTime_39761680 <= v44 )
    v45 = NextDayTime_39761680;
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
    goto LABEL_62;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
  Instance = (Il2CppObject *)sub_1C1AC7C(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_70;
  v35 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    sub_1C1AE38(Instance, Instance);
  LODWORD(Instance[2].klass) = 25;
  if ( !Request_object )
LABEL_70:
    sub_1C1AE30(Instance, v35);
  UserStatusFlagSetRequest__beginRequest(
    (UserStatusFlagSetRequest_o *)Request_object,
    (System_Int32_array *)Instance,
    0LL,
    v47);
LABEL_62:
  success = (Il2CppObject *)v30->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v49 = JsonManager__toJson(success, 0, 0, 0LL);
LABEL_69:
  RequestBase__completed((RequestBase_o *)this, v49, 0LL);
}