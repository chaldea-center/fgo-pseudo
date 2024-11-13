void __fastcall TopLoginRequest___ctor(TopLoginRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TopLoginRequest__AddAppCheckField(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  FirebaseScript_c *v14; // x0
  FirebaseScript_c *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  bool IsNullOrEmpty; // w20
  FirebaseScript_c *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  char v24; // w20
  System_String_o *v25; // x1
  System_String_o *AppCheckTokenError_k__BackingField; // x2
  FirebaseScript_c *v27; // x0
  __int64 *v28; // x9
  FirebaseScript_c *v29; // x0
  FirebaseScript_c *v30; // x0
  System_String_o *v31; // x20
  System_String_o *String_70112520; // x0

  if ( (byte_4B17BAA & 1) == 0 )
  {
    sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_14390/*"The token wasn't created in time"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_16979/*"appCheckPrevMessage"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_16980/*"appCheckToken"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16978/*"appCheckErrorMessage"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_6836/*"Firebase wasn't available"*/, v12, v13);
    byte_4B17BAA = 1;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
  if ( !byte_4B1594D )
  {
    sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
    byte_4B1594D = 1;
  }
  v14 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
    v14 = FirebaseScript_TypeInfo;
  }
  if ( v14->static_fields->_CanUseFirebase_k__BackingField )
    goto LABEL_57;
  if ( !v14->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v14, method);
  if ( !byte_4B15B1E )
  {
    sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
    byte_4B15B1E = 1;
  }
  v14 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
    v14 = FirebaseScript_TypeInfo;
  }
  if ( !v14->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
LABEL_57:
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14, method);
    if ( !byte_4B15B20 )
    {
      sub_1BCA7E0(&FirebaseScript_TypeInfo, method, v2);
      byte_4B15B20 = 1;
    }
    v15 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
      v15 = FirebaseScript_TypeInfo;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(v15->static_fields->_AppCheckToken_k__BackingField, 0LL);
    if ( FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
      {
LABEL_18:
        if ( !byte_4B15B21 )
        {
          sub_1BCA7E0(&FirebaseScript_TypeInfo, v16, v17);
          byte_4B15B21 = 1;
        }
        v19 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v16);
          v19 = FirebaseScript_TypeInfo;
        }
        if ( System_String__IsNullOrEmpty(v19->static_fields->_AppCheckTokenError_k__BackingField, 0LL) )
        {
          RequestBase__addField_41862348(
            (RequestBase_o *)this,
            (System_String_o *)StringLiteral_16978/*"appCheckErrorMessage"*/,
            (System_String_o *)StringLiteral_14390/*"The token wasn't created in time"*/,
            0LL);
          v24 = 0;
          goto LABEL_47;
        }
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v20);
        if ( !byte_4B15B21 )
        {
          sub_1BCA7E0(&FirebaseScript_TypeInfo, v20, v21);
          byte_4B15B21 = 1;
        }
        v29 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v20);
          v29 = FirebaseScript_TypeInfo;
        }
        v28 = &StringLiteral_16978/*"appCheckErrorMessage"*/;
        AppCheckTokenError_k__BackingField = v29->static_fields->_AppCheckTokenError_k__BackingField;
        goto LABEL_45;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v16);
      if ( IsNullOrEmpty )
        goto LABEL_18;
    }
    if ( !byte_4B15B20 )
    {
      sub_1BCA7E0(&FirebaseScript_TypeInfo, v16, v17);
      byte_4B15B20 = 1;
    }
    v27 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v16);
      v27 = FirebaseScript_TypeInfo;
    }
    v28 = &StringLiteral_16980/*"appCheckToken"*/;
    AppCheckTokenError_k__BackingField = v27->static_fields->_AppCheckToken_k__BackingField;
LABEL_45:
    v25 = (System_String_o *)*v28;
    goto LABEL_46;
  }
  v25 = (System_String_o *)StringLiteral_16978/*"appCheckErrorMessage"*/;
  AppCheckTokenError_k__BackingField = (System_String_o *)StringLiteral_6836/*"Firebase wasn't available"*/;
LABEL_46:
  RequestBase__addField_41862348((RequestBase_o *)this, v25, AppCheckTokenError_k__BackingField, 0LL);
  v24 = 1;
LABEL_47:
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v22);
  if ( !byte_4B15B1D )
  {
    sub_1BCA7E0(&FirebaseScript_TypeInfo, v22, v23);
    byte_4B15B1D = 1;
  }
  v30 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v22);
    v30 = FirebaseScript_TypeInfo;
  }
  v30->static_fields->_IsSendAppCheckToken_k__BackingField = v24;
  v31 = (System_String_o *)StringLiteral_16979/*"appCheckPrevMessage"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16979/*"appCheckPrevMessage"*/, 0LL) )
  {
    String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(v31, 0LL);
    RequestBase__addField_41862348((RequestBase_o *)this, v31, String_70112520, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v31, 0LL);
  }
}


void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B17BA9 & 1) == 0 )
  {
    sub_1BCA7E0(&TopLoginRequest_TypeInfo, v1, v2);
    byte_4B17BA9 = 1;
  }
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
}


void __fastcall TopLoginRequest__beginRequest(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  NetworkManager_c *v18; // x0
  System_String_o *dataServerFolder; // x20
  int64_t UTF8; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  System_Byte_array *v23; // x21
  uint32_t v24; // w21
  int v25; // w22
  Il2CppObject *Item; // x0
  int64_t v27; // x0
  __int64 v28; // x9
  int32_t TerminalDispState; // w0
  const MethodInfo *v30; // x1

  if ( (byte_4B17BA7 & 1) == 0 )
  {
    sub_1BCA7E0(&Crc32_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_17108/*"assetbundleFolder"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_24695/*"userState"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_21267/*"lastAccessTime"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21050/*"isTerminalLogin"*/, v14, v15);
    byte_4B17BA7 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  if ( !byte_4B1394F )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    byte_4B1394F = 1;
  }
  v18 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
    v18 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v18->static_fields->dataServerFolder;
  UTF8 = (int64_t)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_17;
  v23 = (System_Byte_array *)(*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                               UTF8,
                               dataServerFolder,
                               *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v22);
  v24 = Crc32__Compute(v23, 0LL);
  UTF8 = NetworkManager__get_UserId(0LL);
  if ( !this->fields.paramString )
LABEL_17:
    sub_1BCAA3C(UTF8, v21);
  v25 = UTF8;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_21267/*"lastAccessTime"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v27 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v27 < 0 )
    v28 = ~v27;
  else
    v28 = -v27;
  RequestBase__addField_41868688(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24695/*"userState"*/,
    v25 & v24 ^ (unsigned __int64)(v28 >> 2),
    0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_17108/*"assetbundleFolder"*/, dataServerFolder, 0LL);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21050/*"isTerminalLogin"*/, TerminalDispState, 0LL);
  TopLoginRequest__AddAppCheckField(this, v30);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_4B17BA6 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TopLoginRequest_TypeInfo, v3, v4);
    byte_4B17BA6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  static_fields = TopLoginRequest_TypeInfo->static_fields;
  return Time <= static_fields->resetTime || Time <= static_fields->accessTime;
}


System_String_o *__fastcall TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17BA5 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9241/*"MockTopLoginRequest"*/, v3, v4);
    byte_4B17BA5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9241/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17BA4 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_21429/*"login/top"*/, v3, v4);
    byte_4B17BA4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_21429/*"login/top"*/, 0LL);
}


void __fastcall TopLoginRequest__requestCompleted(
        TopLoginRequest_o *this,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  ResponseData_o *v51; // x0
  const MethodInfo *v52; // x2
  ResponseData_o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v58; // x1
  UserGameEntity_o *v59; // x21
  ManagerConfig_c *v60; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *v62; // x1
  __int64 v63; // x1
  int64_t birthDay; // x22
  Il2CppObject *v65; // x0
  __int64 v66; // x1
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v69; // x24
  int32_t Month; // w25
  __int64 v71; // x1
  __int64 v72; // x1
  BalanceConfig_c *v73; // x0
  int64_t NextDayTime_39271192; // x22
  int64_t v75; // x0
  __int64 v76; // x1
  int64_t v77; // x9
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  Il2CppObject *Request_object; // x21
  const MethodInfo *v88; // x3
  Il2CppObject *success; // x20
  System_String_o *v90; // x1
  ResponseFailData_o *v91; // x21
  const MethodInfo *v92; // x2
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v94; // 0:x0.8
  System_DateTime_o v95; // 0:x0.8

  if ( (byte_4B17BA8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, responseList, method);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v5, v6);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&JsonManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v19, v20);
    sub_1BCA7E0(&ResponseFailData_TypeInfo, v21, v22);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&TopLoginRequest_TypeInfo, v35, v36);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&UserCommandCodeNewManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v41, v42);
    sub_1BCA7E0(&UserServantCollectionManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&UserServantNewManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_18850/*"do_signup"*/, v49, v50);
    byte_4B17BA8 = 1;
  }
  dateData = 0LL;
  if ( (byte_4B17B9A & 1) == 0 )
  {
    sub_1BCA7E0(&TopHomeRequest_TypeInfo, responseList, method);
    byte_4B17B9A = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v51 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( !v51 )
    goto LABEL_68;
  v53 = v51;
  if ( !ResponseData__checkError(v51, v51->fields.resCode, v52) )
  {
    v91 = (ResponseFailData_o *)sub_1BCAA2C(ResponseFailData_TypeInfo, v54, v55, v56);
    ResponseFailData___ctor(v91, v53, v92);
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    if ( !v91 )
      goto LABEL_70;
    if ( System_String__op_Equality(v91->fields.action, (System_String_o *)StringLiteral_18850/*"do_signup"*/, 0LL) )
    {
      v90 = (System_String_o *)StringLiteral_18850/*"do_signup"*/;
      goto LABEL_69;
    }
LABEL_68:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v90 = (System_String_o *)StringLiteral_22292/*"ng"*/;
    goto LABEL_69;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  v59 = SelfUserGame;
  v60 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v58);
    v60 = ManagerConfig_TypeInfo;
  }
  if ( v60->static_fields->UseDebugCommand )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
    {
      birthDay = v59->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v63);
      dateData = NetworkManager__getDateTime_39270164(birthDay, 0LL).fields._dateData;
      v65 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      name = v59->fields.name;
      genderType = v59->fields.genderType;
      v69 = (NetworkManager_o *)v65;
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v66);
      v94.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v94, 0LL);
      v95.fields._dateData = (uint64_t)&dateData;
      Instance = (Il2CppObject *)System_DateTime__get_Day(v95, 0LL);
      if ( !v69 )
        goto LABEL_70;
      NetworkManager__SetSignup_39260136(v69, name, genderType, Month, (int32_t)Instance, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_70;
      NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v59->fields.friendCode, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetUserId((AdManager_o *)Instance, v59->fields.userId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetFriendCode((AdManager_o *)Instance, v59->fields.friendCode, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  CrashReporter__SetUserId((CrashReporter_o *)Instance, v59->fields.friendCode, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v71);
  NetworkManager__getTime(0LL);
  v73 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v72);
    v73 = BalanceConfig_TypeInfo;
  }
  NextDayTime_39271192 = NetworkManager__getNextDayTime_39271192(v73->static_fields->RequestTopLoginResetTime1, 0LL);
  v75 = NetworkManager__getNextDayTime_39271192(BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2, 0LL);
  if ( NextDayTime_39271192 <= v75 )
    v77 = NextDayTime_39271192;
  else
    v77 = v75;
  TopLoginRequest_TypeInfo->static_fields->accessTime = v77;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v76);
  UserServantNewManager__LoginProcess(0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v78);
  UserServantCollectionManager__LoginProcess(0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v79);
  ServantCommentManager__LoginProcess(0LL);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v80);
  UserEquipNewManager__LoginProcess(0LL);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v81);
  OtherUserNewManager__LoginProcess(0LL);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v82);
  UserCommandCodeNewManager__LoginProcess(0LL);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v83);
  UserCommandCodeCollectionManager__LoginProcess(0LL);
  SoundPlayerComponent__LoginProcess(0LL);
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v84);
  ServantProfileLimitCountManager__UpdateProfileServantLimitCount(0LL);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v85);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
  if ( UserGameEntity__HasFlag(v59, 0x2000000, 0LL) )
    goto LABEL_62;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v86);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
  Instance = (Il2CppObject *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_70;
  v62 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    sub_1BCAA44(Instance, Instance);
  LODWORD(Instance[2].klass) = 25;
  if ( !Request_object )
LABEL_70:
    sub_1BCAA3C(Instance, v62);
  UserStatusFlagSetRequest__beginRequest(
    (UserStatusFlagSetRequest_o *)Request_object,
    (System_Int32_array *)Instance,
    0LL,
    v88);
LABEL_62:
  success = (Il2CppObject *)v53->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v86);
  v90 = JsonManager__toJson(success, 0, 0, 0LL);
LABEL_69:
  RequestBase__completed((RequestBase_o *)this, v90, 0LL);
}