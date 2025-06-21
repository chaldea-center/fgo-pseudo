void __fastcall TopLoginRequest__AddAppCheckField(TopLoginRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FirebaseScript_c *v8; // x0
  FirebaseScript_c *v9; // x0
  __int64 v10; // x1
  bool IsNullOrEmpty; // w21
  FirebaseScript_c *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  char v15; // w21
  System_String_o *v16; // x1
  System_String_o *AppCheckTokenError_k__BackingField; // x2
  FirebaseScript_c *v18; // x0
  __int64 *v19; // x9
  FirebaseScript_c *v20; // x0
  FirebaseScript_c *v21; // x0
  __int64 v22; // x1
  FirebaseScript_c *v23; // x0
  System_String_o *AppCheckPrevMessageKey_k__BackingField; // x21
  __int64 v25; // x1
  System_String_o *String_70094888; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  FirebaseScript_c *v29; // x0

  if ( (byte_4B1E0B9 & 1) == 0 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_14144/*"The token wasn't created in time"*/, v4);
    sub_1BCAFF8(&StringLiteral_16675/*"appCheckToken"*/, v5);
    sub_1BCAFF8(&StringLiteral_16673/*"appCheckErrorMessage"*/, v6);
    sub_1BCAFF8(&StringLiteral_6699/*"Firebase wasn't available"*/, v7);
    byte_4B1E0B9 = 1;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4B165D0 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, method);
    byte_4B165D0 = 1;
  }
  v8 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v8 = FirebaseScript_TypeInfo;
  }
  if ( v8->static_fields->_CanUseFirebase_k__BackingField )
    goto LABEL_76;
  if ( !v8->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v8);
  if ( !byte_4B1BDF1 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, method);
    byte_4B1BDF1 = 1;
  }
  v8 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v8 = FirebaseScript_TypeInfo;
  }
  if ( !v8->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
LABEL_76:
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_4B1BDF4 )
    {
      sub_1BCAFF8(&FirebaseScript_TypeInfo, method);
      byte_4B1BDF4 = 1;
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
        if ( !byte_4B1BDF5 )
        {
          sub_1BCAFF8(&FirebaseScript_TypeInfo, v10);
          byte_4B1BDF5 = 1;
        }
        v12 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v12 = FirebaseScript_TypeInfo;
        }
        if ( System_String__IsNullOrEmpty(v12->static_fields->_AppCheckTokenError_k__BackingField, 0LL) )
        {
          RequestBase__addField_43348616(
            (RequestBase_o *)this,
            (System_String_o *)StringLiteral_16673/*"appCheckErrorMessage"*/,
            (System_String_o *)StringLiteral_14144/*"The token wasn't created in time"*/,
            v2);
          v15 = 0;
          goto LABEL_47;
        }
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4B1BDF5 )
        {
          sub_1BCAFF8(&FirebaseScript_TypeInfo, v13);
          byte_4B1BDF5 = 1;
        }
        v20 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v20 = FirebaseScript_TypeInfo;
        }
        v19 = &StringLiteral_16673/*"appCheckErrorMessage"*/;
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
    if ( !byte_4B1BDF4 )
    {
      sub_1BCAFF8(&FirebaseScript_TypeInfo, v10);
      byte_4B1BDF4 = 1;
    }
    v18 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v18 = FirebaseScript_TypeInfo;
    }
    v19 = &StringLiteral_16675/*"appCheckToken"*/;
    AppCheckTokenError_k__BackingField = v18->static_fields->_AppCheckToken_k__BackingField;
LABEL_45:
    v16 = (System_String_o *)*v19;
    goto LABEL_46;
  }
  v16 = (System_String_o *)StringLiteral_16673/*"appCheckErrorMessage"*/;
  AppCheckTokenError_k__BackingField = (System_String_o *)StringLiteral_6699/*"Firebase wasn't available"*/;
LABEL_46:
  RequestBase__addField_43348616((RequestBase_o *)this, v16, AppCheckTokenError_k__BackingField, v2);
  v15 = 1;
LABEL_47:
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4B1BDF0 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, v14);
    byte_4B1BDF0 = 1;
  }
  v21 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v21 = FirebaseScript_TypeInfo;
  }
  v21->static_fields->_IsSendAppCheckToken_k__BackingField = v15;
  if ( !byte_4B1BDF3 )
  {
    sub_1BCAFF8(&FirebaseScript_TypeInfo, v14);
    v21 = FirebaseScript_TypeInfo;
    byte_4B1BDF3 = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = FirebaseScript_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v21->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0LL) )
  {
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    if ( !byte_4B1BDF3 )
    {
      sub_1BCAFF8(&FirebaseScript_TypeInfo, v22);
      byte_4B1BDF3 = 1;
    }
    v23 = FirebaseScript_TypeInfo;
    if ( FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v23 = FirebaseScript_TypeInfo;
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
      if ( !byte_4B1BDF3 )
      {
        sub_1BCAFF8(&FirebaseScript_TypeInfo, v25);
        v23 = FirebaseScript_TypeInfo;
        byte_4B1BDF3 = 1;
      }
    }
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = FirebaseScript_TypeInfo;
    }
    String_70094888 = UnityEngine_PlayerPrefs__GetString_70094888(
                        v23->static_fields->_AppCheckPrevMessageKey_k__BackingField,
                        0LL);
    RequestBase__addField_43348616((RequestBase_o *)this, AppCheckPrevMessageKey_k__BackingField, String_70094888, v27);
    if ( !byte_4B1BDF3 )
    {
      sub_1BCAFF8(&FirebaseScript_TypeInfo, v28);
      byte_4B1BDF3 = 1;
    }
    v29 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v29 = FirebaseScript_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v29->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0LL);
  }
}


void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1E0B8 & 1) == 0 )
  {
    sub_1BCAFF8(&TopLoginRequest_TypeInfo, v1);
    byte_4B1E0B8 = 1;
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

  if ( (byte_4B1E0B6 & 1) == 0 )
  {
    sub_1BCAFF8(&Crc32_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_16777/*"assetbundleFolder"*/, v5);
    sub_1BCAFF8(&StringLiteral_24355/*"userState"*/, v6);
    sub_1BCAFF8(&StringLiteral_20979/*"lastAccessTime"*/, v7);
    sub_1BCAFF8(&StringLiteral_20771/*"isTerminalLogin"*/, v8);
    byte_4B1E0B6 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__AddSignatureField((RequestBase_o *)this, v9);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B19AEF )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    byte_4B19AEF = 1;
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
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    byte_4B165D1 = 1;
  }
  UTF8 = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UTF8 = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !this->fields.paramString )
LABEL_21:
    sub_1BCB254(UTF8, v15);
  v18 = *(_QWORD *)(UTF8[23] + 64LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_20979/*"lastAccessTime"*/,
           (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v20 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v20 < 0 )
    v22 = ~v20;
  else
    v22 = -v20;
  RequestBase__addField_43346700(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24355/*"userState"*/,
    (unsigned int)v18 & v17 ^ (unsigned __int64)(v22 >> 2),
    v21);
  RequestBase__addField_43348616((RequestBase_o *)this, (System_String_o *)StringLiteral_16777/*"assetbundleFolder"*/, dataServerFolder, v23);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20771/*"isTerminalLogin"*/, TerminalDispState, v25);
  TopLoginRequest__AddAppCheckField(this, v26);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_4B1E0B5 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&TopLoginRequest_TypeInfo, v2);
    byte_4B1E0B5 = 1;
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

  if ( (byte_4B1E0B4 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_9071/*"MockTopLoginRequest"*/, v2);
    byte_4B1E0B4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9071/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1E0B3 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_21150/*"login/top"*/, v2);
    byte_4B1E0B3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_21150/*"login/top"*/, 0LL);
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
  __int64 Instance; // x0
  __int64 v35; // x1
  int64_t birthDay; // x22
  Il2CppObject *v37; // x0
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v40; // x24
  int32_t Month; // w25
  Il2CppObject *v42; // x22
  BalanceConfig_c *v43; // x0
  int64_t NextDayTime_40543992; // x22
  int64_t v45; // x0
  int64_t v46; // x9
  Il2CppObject *Request_object; // x21
  __int64 v48; // x2
  const MethodInfo *v49; // x3
  Il2CppObject *success; // x20
  System_String_o *v51; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v53; // x1
  ResponseFailData_o *v54; // x21
  const MethodInfo *v55; // x2
  struct NetworkManager_ResultCallbackFunc_o *v56; // x8
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v58; // 0:x0.8
  System_DateTime_o v59; // 0:x0.8

  if ( (byte_4B1E0B7 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, responseList);
    sub_1BCAFF8(&System_DateTime_TypeInfo, v5);
    sub_1BCAFF8(&int___TypeInfo, v6);
    sub_1BCAFF8(&JsonManager_TypeInfo, v7);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v8);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    sub_1BCAFF8(&OtherUserNewManager_TypeInfo, v11);
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, v12);
    sub_1BCAFF8(&ResponseFailData_TypeInfo, v13);
    sub_1BCAFF8(&ServantCommentManager_TypeInfo, v14);
    sub_1BCAFF8(&ServantProfileEventJoinManager_TypeInfo, v15);
    sub_1BCAFF8(&ServantProfileLimitCountManager_TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v17);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v19);
    sub_1BCAFF8(&TopLoginRequest_TypeInfo, v20);
    sub_1BCAFF8(&UserCommandCodeCollectionManager_TypeInfo, v21);
    sub_1BCAFF8(&UserCommandCodeNewManager_TypeInfo, v22);
    sub_1BCAFF8(&UserEquipNewManager_TypeInfo, v23);
    sub_1BCAFF8(&UserServantCollectionManager_TypeInfo, v24);
    sub_1BCAFF8(&UserServantNewManager_TypeInfo, v25);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v26);
    sub_1BCAFF8(&StringLiteral_18499/*"do_signup"*/, v27);
    byte_4B1E0B7 = 1;
  }
  dateData = 0LL;
  if ( (byte_4B1E0A9 & 1) == 0 )
  {
    sub_1BCAFF8(&TopHomeRequest_TypeInfo, responseList);
    byte_4B1E0A9 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v28 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( !v28 )
    goto LABEL_72;
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
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_75;
        if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
        {
          birthDay = v32->fields.birthDay;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          dateData = NetworkManager__getDateTime_40542964(birthDay, 0LL).fields._dateData;
          v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          name = v32->fields.name;
          genderType = v32->fields.genderType;
          v40 = (NetworkManager_o *)v37;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v58.fields._dateData = (uint64_t)&dateData;
          Month = System_DateTime__get_Month(v58, 0LL);
          v59.fields._dateData = (uint64_t)&dateData;
          Instance = System_DateTime__get_Day(v59, 0LL);
          if ( !v40 )
            goto LABEL_75;
          NetworkManager__SetSignup_40532888(v40, name, genderType, Month, Instance, 0LL);
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_75;
          NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
        }
      }
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
      {
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_75;
        NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v32->fields.friendCode, 0LL);
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_75;
        NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
      }
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__SetUserId((AdManager_o *)Instance, v32->fields.userId, 0LL);
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetFriendCode((AdManager_o *)Instance, v32->fields.friendCode, 0LL);
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
          if ( Instance )
          {
            CrashReporter__SetFriendCode((CrashReporter_o *)Instance, v32->fields.friendCode, 0LL);
            v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
            Instance = (__int64)System_Int64__ToString((int64_t)&v32->fields, 0LL);
            if ( v42 )
            {
              CrashReporter__SetUserId((CrashReporter_o *)v42, (System_String_o *)Instance, 0LL);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              NetworkManager__getTime(0LL);
              v43 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v43 = BalanceConfig_TypeInfo;
              }
              NextDayTime_40543992 = NetworkManager__getNextDayTime_40543992(
                                       v43->static_fields->RequestTopLoginResetTime1,
                                       0LL);
              v45 = NetworkManager__getNextDayTime_40543992(
                      BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                      0LL);
              if ( NextDayTime_40543992 <= v45 )
                v46 = NextDayTime_40543992;
              else
                v46 = v45;
              TopLoginRequest_TypeInfo->static_fields->accessTime = v46;
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
LABEL_63:
                success = (Il2CppObject *)v30->fields.success;
                if ( !JsonManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
                v51 = JsonManager__toJson(success, 0, 0, 0LL);
                CallBack = this->fields.CallBack;
                if ( CallBack )
                {
                  v53 = (__int64)v51;
LABEL_71:
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    v53,
                    *(_QWORD *)&CallBack->fields.extra_arg);
                  return;
                }
                return;
              }
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Request_object = NetworkManager__getRequest_object_(
                                 0LL,
                                 (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
              Instance = sub_1BCB0A0(int___TypeInfo, 1LL);
              if ( Instance )
              {
                v35 = Instance;
                if ( !*(_DWORD *)(Instance + 24) )
                  sub_1BCB25C(Instance, Instance, v48);
                *(_DWORD *)(Instance + 32) = 25;
                if ( Request_object )
                {
                  UserStatusFlagSetRequest__beginRequest(
                    (UserStatusFlagSetRequest_o *)Request_object,
                    (System_Int32_array *)Instance,
                    0LL,
                    v49);
                  goto LABEL_63;
                }
              }
            }
          }
        }
      }
LABEL_75:
      sub_1BCB254(Instance, v35);
    }
LABEL_72:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v56 = this->fields.CallBack;
    if ( v56 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v56->fields.m_target)(
        v56->fields.original_method_info,
        StringLiteral_22015/*"ng"*/,
        *(_QWORD *)&v56->fields.extra_arg);
    return;
  }
  v54 = (ResponseFailData_o *)sub_1BCB244(ResponseFailData_TypeInfo);
  ResponseFailData___ctor(v54, v30, v55);
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !v54 )
    goto LABEL_75;
  if ( !System_String__op_Equality(v54->fields.action, (System_String_o *)StringLiteral_18499/*"do_signup"*/, 0LL) )
    goto LABEL_72;
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v53 = StringLiteral_18499/*"do_signup"*/;
    goto LABEL_71;
  }
}