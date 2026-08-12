void TopLoginRequest__AddAppCheckField(TopLoginRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  FirebaseScript_c *v4; // x0
  FirebaseScript_c *v5; // x0
  __int64 v6; // x1
  bool IsNullOrEmpty; // w8
  int v8; // w9
  FirebaseScript_c *v9; // x0
  __int64 v10; // x1
  char v11; // w21
  __int64 *v12; // x8
  System_String_o **p_AppCheckTokenError_k__BackingField; // x9
  FirebaseScript_c *v14; // x0
  FirebaseScript_c *v15; // x0
  __int64 v16; // x1
  FirebaseScript_c *v17; // x0
  int v18; // w9
  __int64 v19; // x1
  FirebaseScript_c *v20; // x0
  System_String_o *AppCheckPrevMessageKey_k__BackingField; // x21
  System_String_o *String_83398240; // x0
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  FirebaseScript_c *v25; // x0

  if ( (byte_5972500 & 1) == 0 )
  {
    sub_2213A60(&FirebaseScript_TypeInfo);
    sub_2213A60(&StringLiteral_14846/*"The token wasn't created in time"*/);
    sub_2213A60(&StringLiteral_17523/*"appCheckToken"*/);
    sub_2213A60(&StringLiteral_17521/*"appCheckErrorMessage"*/);
    sub_2213A60(&StringLiteral_7035/*"Firebase wasn't available"*/);
    byte_5972500 = 1;
  }
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
  if ( !byte_5969EF1 )
  {
    sub_2213A60(&FirebaseScript_TypeInfo);
    byte_5969EF1 = 1;
  }
  v4 = FirebaseScript_TypeInfo;
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
    v4 = FirebaseScript_TypeInfo;
  }
  if ( v4->static_fields->_CanUseFirebase_k__BackingField )
    goto LABEL_77;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method);
  if ( !byte_597006D )
  {
    sub_2213A60(&FirebaseScript_TypeInfo);
    byte_597006D = 1;
  }
  v4 = FirebaseScript_TypeInfo;
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
    v4 = FirebaseScript_TypeInfo;
  }
  if ( !v4->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
LABEL_77:
    if ( !*(&v4->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v4, method);
    if ( !byte_5970070 )
    {
      sub_2213A60(&FirebaseScript_TypeInfo);
      byte_5970070 = 1;
    }
    v5 = FirebaseScript_TypeInfo;
    if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, method);
      v5 = FirebaseScript_TypeInfo;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(v5->static_fields->_AppCheckToken_k__BackingField, 0);
    v8 = *(&FirebaseScript_TypeInfo->_2.cctor_finished + 1);
    if ( IsNullOrEmpty )
    {
      if ( !v8 )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v6);
      if ( !byte_5970071 )
      {
        sub_2213A60(&FirebaseScript_TypeInfo);
        byte_5970071 = 1;
      }
      v9 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v6);
        v9 = FirebaseScript_TypeInfo;
      }
      if ( System_String__IsNullOrEmpty(v9->static_fields->_AppCheckTokenError_k__BackingField, 0) )
      {
        v11 = 0;
        v12 = &StringLiteral_17521/*"appCheckErrorMessage"*/;
        p_AppCheckTokenError_k__BackingField = (System_String_o **)&StringLiteral_14846/*"The token wasn't created in time"*/;
        goto LABEL_48;
      }
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v10);
      if ( !byte_5970071 )
      {
        sub_2213A60(&FirebaseScript_TypeInfo);
        byte_5970071 = 1;
      }
      v15 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v10);
        v15 = FirebaseScript_TypeInfo;
      }
      v12 = &StringLiteral_17521/*"appCheckErrorMessage"*/;
      p_AppCheckTokenError_k__BackingField = &v15->static_fields->_AppCheckTokenError_k__BackingField;
    }
    else
    {
      if ( !v8 )
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v6);
      if ( !byte_5970070 )
      {
        sub_2213A60(&FirebaseScript_TypeInfo);
        byte_5970070 = 1;
      }
      v14 = FirebaseScript_TypeInfo;
      if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v6);
        v14 = FirebaseScript_TypeInfo;
      }
      v12 = &StringLiteral_17523/*"appCheckToken"*/;
      p_AppCheckTokenError_k__BackingField = &v14->static_fields->_AppCheckToken_k__BackingField;
    }
  }
  else
  {
    v12 = &StringLiteral_17521/*"appCheckErrorMessage"*/;
    p_AppCheckTokenError_k__BackingField = (System_String_o **)&StringLiteral_7035/*"Firebase wasn't available"*/;
  }
  v11 = 1;
LABEL_48:
  RequestBase__addField_51259256(
    (RequestBase_o *)this,
    (System_String_o *)*v12,
    *p_AppCheckTokenError_k__BackingField,
    v2);
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v16);
  if ( !byte_597006C )
  {
    sub_2213A60(&FirebaseScript_TypeInfo);
    byte_597006C = 1;
  }
  v17 = FirebaseScript_TypeInfo;
  if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v16);
    v17 = FirebaseScript_TypeInfo;
  }
  v18 = (unsigned __int8)byte_597006F;
  v17->static_fields->_IsSendAppCheckToken_k__BackingField = v11;
  if ( !v18 )
  {
    sub_2213A60(&FirebaseScript_TypeInfo);
    v17 = FirebaseScript_TypeInfo;
    byte_597006F = 1;
  }
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v16);
    v17 = FirebaseScript_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v17->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0) )
  {
    if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v19);
    if ( !byte_597006F )
    {
      sub_2213A60(&FirebaseScript_TypeInfo);
      byte_597006F = 1;
    }
    v20 = FirebaseScript_TypeInfo;
    if ( *(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    {
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v19);
      v20 = FirebaseScript_TypeInfo;
      AppCheckPrevMessageKey_k__BackingField = FirebaseScript_TypeInfo->static_fields->_AppCheckPrevMessageKey_k__BackingField;
      if ( !byte_597006F )
      {
        sub_2213A60(&FirebaseScript_TypeInfo);
        v20 = FirebaseScript_TypeInfo;
        byte_597006F = 1;
      }
    }
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      v20 = FirebaseScript_TypeInfo;
    }
    String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(
                        v20->static_fields->_AppCheckPrevMessageKey_k__BackingField,
                        0);
    RequestBase__addField_51259256((RequestBase_o *)this, AppCheckPrevMessageKey_k__BackingField, String_83398240, v23);
    if ( !byte_597006F )
    {
      sub_2213A60(&FirebaseScript_TypeInfo);
      byte_597006F = 1;
    }
    v25 = FirebaseScript_TypeInfo;
    if ( !*(&FirebaseScript_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo, v24);
      v25 = FirebaseScript_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v25->static_fields->_AppCheckPrevMessageKey_k__BackingField, 0);
  }
}


void TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  if ( (byte_59724FF & 1) == 0 )
  {
    sub_2213A60(&TopLoginRequest_TypeInfo);
    byte_59724FF = 1;
  }
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0;
}


void TopLoginRequest__beginRequest(TopLoginRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  NetworkManager_c *v6; // x0
  System_String_o *dataServerFolder; // x20
  _QWORD *UTF8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  System_Byte_array *v11; // x21
  uint32_t v12; // w21
  __int64 v13; // x27
  Il2CppObject *Item; // x0
  int64_t v15; // x0
  const MethodInfo *v16; // x3
  __int64 v17; // x9
  const MethodInfo *v18; // x3
  int32_t TerminalDispState; // w0
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  int64_t ResumeBattleId; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1

  if ( (byte_59724FD & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&Crc32_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_17630/*"assetbundleFolder"*/);
    sub_2213A60(&StringLiteral_25926/*"userState"*/);
    sub_2213A60(&StringLiteral_22234/*"lastAccessTime"*/);
    sub_2213A60(&StringLiteral_17807/*"battleId"*/);
    sub_2213A60(&StringLiteral_21994/*"isTerminalLogin"*/);
    byte_59724FD = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__AddSignatureField((RequestBase_o *)this, v3);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v4);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_596DC87 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596DC87 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    v6 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v6->static_fields->dataServerFolder;
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_22;
  v11 = (System_Byte_array *)(*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 600LL))(
                               UTF8,
                               dataServerFolder,
                               *(_QWORD *)(*UTF8 + 608LL));
  if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v10);
  v12 = Crc32__Compute(v11, 0);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  UTF8 = &NetworkManager_TypeInfo->_1.image;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    UTF8 = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !this->fields.paramString )
LABEL_22:
    sub_2213CDC(UTF8, v9);
  v13 = *(_QWORD *)(UTF8[23] + 64LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_22234/*"lastAccessTime"*/,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v15 = System_Int64__Parse((System_String_o *)Item, 0);
  v17 = -v15;
  if ( v15 < 0 )
    v17 = ~v15;
  RequestBase__addField_51256716(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_25926/*"userState"*/,
    (unsigned int)v13 & v12 ^ (unsigned __int64)(v17 >> 2),
    v16);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_17630/*"assetbundleFolder"*/, dataServerFolder, v18);
  TerminalDispState = NetworkManager__GetTerminalDispState(0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21994/*"isTerminalLogin"*/, TerminalDispState, v20);
  if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v21);
  ResumeBattleId = BattleData__getResumeBattleId(0);
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_17807/*"battleId"*/, ResumeBattleId, v23);
  TopLoginRequest__AddAppCheckField(this, v24);
  NetworkManager__RequestStart((RequestBase_o *)this, 0);
}


bool TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_59724FC & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&TopLoginRequest_TypeInfo);
    byte_59724FC = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  static_fields = TopLoginRequest_TypeInfo->static_fields;
  return Time <= static_fields->resetTime || Time <= static_fields->accessTime;
}


System_String_o *TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  if ( (byte_59724FB & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_9521/*"MockTopLoginRequest"*/);
    byte_59724FB = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9521/*"MockTopLoginRequest"*/, 0);
}


System_String_o *TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59724FA & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_22420/*"login/top"*/);
    byte_59724FA = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_22420/*"login/top"*/, 0);
}


void TopLoginRequest__requestCompleted(
        TopLoginRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseCommandKind_c *v5; // x0
  int v6; // w9
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v11; // x1
  UserGameEntity_o *v12; // x21
  ManagerConfig_c *v13; // x0
  NetworkManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t birthDay; // x22
  __int64 v18; // x1
  Il2CppObject *v19; // x24
  System_String_o *name; // x22
  int32_t genderType; // w23
  int32_t Month; // w25
  Il2CppObject *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x1
  BalanceConfig_c *v26; // x0
  int64_t NextDayTime_48348308; // x21
  __int64 v28; // x1
  int64_t v29; // x8
  UserServantNewManager_c *v30; // x0
  int v31; // w10
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  Il2CppObject *success; // x20
  System_String_o *v42; // x0
  struct NetworkManager_ResultCallbackFunc_o *v43; // x8
  ResponseFailData_o *v44; // x21
  const MethodInfo *v45; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v47; // x1
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_59724FE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&ResponseFailData_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_2213A60(&TopLoginRequest_TypeInfo);
    sub_2213A60(&UserCommandCodeCollectionManager_TypeInfo);
    sub_2213A60(&UserCommandCodeNewManager_TypeInfo);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    sub_2213A60(&UserServantCollectionManager_TypeInfo);
    sub_2213A60(&UserServantNewManager_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_19510/*"do_signup"*/);
    byte_59724FE = 1;
  }
  dateData = 0;
  if ( (byte_59724F0 & 1) == 0 )
  {
    sub_2213A60(&TopHomeRequest_TypeInfo);
    byte_59724F0 = 1;
  }
  v5 = ResponseCommandKind_TypeInfo;
  v6 = *(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1);
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, responseList);
  v7 = ResponseCommandKind__SearchData(4, responseList, 0);
  if ( !v7 )
    goto LABEL_63;
  v9 = v7;
  if ( !ResponseData__checkError(v7, v7->fields.resCode, v8) )
  {
    v44 = (ResponseFailData_o *)sub_2213CCC(ResponseFailData_TypeInfo);
    ResponseFailData___ctor(v44, v9, v45);
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0;
    if ( !v44 )
      goto LABEL_67;
    if ( System_String__op_Equality(v44->fields.action, (System_String_o *)StringLiteral_19510/*"do_signup"*/, 0) )
    {
      CallBack = this->fields.CallBack;
      if ( !CallBack )
        return;
      v47 = StringLiteral_19510/*"do_signup"*/;
      goto LABEL_65;
    }
LABEL_63:
    CallBack = this->fields.CallBack;
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0;
    if ( !CallBack )
      return;
    v47 = StringLiteral_23336/*"ng"*/;
LABEL_65:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v47,
      CallBack->fields.method);
    return;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_63;
  v12 = SelfUserGame;
  v13 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v11);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( v13->static_fields->UseDebugCommand )
  {
    Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    if ( !NetworkManager__ReadSignup(Instance, 0) )
    {
      birthDay = v12->fields.birthDay;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
      dateData = NetworkManager__getDateTime_48347260(birthDay, 0).fields._dateData;
      v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      name = v12->fields.name;
      genderType = v12->fields.genderType;
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v18);
      Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
      Instance = (NetworkManager_o *)System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
      if ( !v19 )
        goto LABEL_67;
      NetworkManager__SetSignup_48337384((NetworkManager_o *)v19, name, genderType, Month, (int32_t)Instance, 0);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      NetworkManager__WriteSignup(Instance, 0);
    }
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  if ( !NetworkManager__ReadFriendCode(Instance, 0) )
  {
    Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
    {
      NetworkManager__SetFriendCode(Instance, v12->fields.friendCode, 0);
      Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( Instance )
      {
        NetworkManager__WriteFriendCode(Instance, 0);
        goto LABEL_27;
      }
    }
LABEL_67:
    sub_2213CDC(Instance, v15);
  }
LABEL_27:
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  AdManager__SetUserId((AdManager_o *)Instance, v12->fields.userId, 0);
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  AdManager__SetFriendCode((AdManager_o *)Instance, v12->fields.friendCode, 0);
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  CrashReporter__SetFriendCode((CrashReporter_o *)Instance, v12->fields.friendCode, 0);
  v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  Instance = (NetworkManager_o *)System_Int64__ToString((int64_t)&v12->fields, 0);
  if ( !v23 )
    goto LABEL_67;
  CrashReporter__SetUserId((CrashReporter_o *)v23, (System_String_o *)Instance, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
  NetworkManager__getTime(0);
  v26 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25);
    v26 = BalanceConfig_TypeInfo;
  }
  NextDayTime_48348308 = NetworkManager__getNextDayTime_48348308(v26->static_fields->RequestTopLoginResetTime1, 0, 0);
  v29 = NetworkManager__getNextDayTime_48348308(BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2, 0, 0);
  if ( NextDayTime_48348308 < v29 )
    v29 = NextDayTime_48348308;
  v30 = UserServantNewManager_TypeInfo;
  v31 = *(&UserServantNewManager_TypeInfo->_2.cctor_finished + 1);
  TopLoginRequest_TypeInfo->static_fields->accessTime = v29;
  if ( !v31 )
    j_il2cpp_runtime_class_init_0(v30, v28);
  UserServantNewManager__LoginProcess(0);
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v32);
  UserServantCollectionManager__LoginProcess(0);
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v33);
  ServantCommentManager__LoginProcess(0);
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v34);
  UserEquipNewManager__LoginProcess(0);
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v35);
  OtherUserNewManager__LoginProcess(0);
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v36);
  UserCommandCodeNewManager__LoginProcess(0);
  if ( !*(&UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v37);
  UserCommandCodeCollectionManager__LoginProcess(0);
  SoundPlayerComponent__LoginProcess(0);
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v38);
  ServantProfileLimitCountManager__UpdateProfileServantLimitCount(0);
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v39);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0);
  success = (Il2CppObject *)v9->fields.success;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v40);
  v42 = JsonManager__toJson(success, 0, 0, 0);
  v43 = this->fields.CallBack;
  if ( v43 )
    ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))v43->fields.invoke_impl)(
      v43->fields.method_code,
      v42,
      v43->fields.method);
}