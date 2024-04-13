void __fastcall TopLoginRequest___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall TopLoginRequest___ctor(TopLoginRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TopLoginRequest_c *v4; // x0

  if ( (byte_42EAC31 & 1) == 0 )
  {
    sub_B5D5C4(&TopLoginRequest_TypeInfo, v1, v2, v3);
    byte_42EAC31 = 1;
  }
  v4 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v4 = TopLoginRequest_TypeInfo;
  }
  v4->static_fields->accessTime = 0LL;
}


void __fastcall TopLoginRequest__beginRequest(TopLoginRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  NetworkManager_c *v26; // x0
  System_String_o *dataServerFolder; // x20
  int64_t UTF8; // x0
  __int64 v29; // x1
  System_Byte_array *v30; // x21
  uint32_t v31; // w21
  int v32; // w22
  System_String_o *Item; // x0
  int64_t v34; // x0
  __int64 v35; // x9
  int32_t TerminalDispState; // w0

  if ( (byte_42EAC2F & 1) == 0 )
  {
    sub_B5D5C4(&Crc32_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16693/*"assetbundleFolder"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23361/*"userState"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_20437/*"lastAccessTime"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20213/*"isTerminalLogin"*/, v20, v21, v22);
    byte_42EAC2F = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42E5F97 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    byte_42E5F97 = 1;
  }
  v26 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v26 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v26->static_fields->dataServerFolder;
  UTF8 = (int64_t)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_19;
  v30 = (System_Byte_array *)(*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                               UTF8,
                               dataServerFolder,
                               *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v31 = Crc32__Compute(v30, 0LL);
  UTF8 = NetworkManager__get_UserId(0LL);
  if ( !this->fields.paramString )
LABEL_19:
    sub_B5D69C(UTF8, v29);
  v32 = UTF8;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.paramString,
                              (System_Type_o *)StringLiteral_20437/*"lastAccessTime"*/,
                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v34 = System_Int64__Parse(Item, 0LL);
  v35 = -v34;
  if ( v34 < 0 )
    v35 = ~v34;
  RequestBase__addField_32361792(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23361/*"userState"*/,
    v32 & v31 ^ (unsigned __int64)(v35 >> 2),
    0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_16693/*"assetbundleFolder"*/, dataServerFolder, 0LL);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20213/*"isTerminalLogin"*/, TerminalDispState, 0LL);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int64_t Time; // x19
  TopLoginRequest_c *v8; // x8
  struct TopLoginRequest_StaticFields *static_fields; // x9

  if ( (byte_42EAC2E & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TopLoginRequest_TypeInfo, v4, v5, v6);
    byte_42EAC2E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v8 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v8 = TopLoginRequest_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( Time <= static_fields->resetTime )
    return 1;
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    static_fields = TopLoginRequest_TypeInfo->static_fields;
  }
  return Time <= static_fields->accessTime;
}


System_String_o *__fastcall TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42EAC2D & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9262/*"MockTopLoginRequest"*/, v4, v5, v6);
    byte_42EAC2D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9262/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EAC2C & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_20571/*"login/top"*/, v4, v5, v6);
    byte_42EAC2C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_20571/*"login/top"*/, 0LL);
}


void __fastcall TopLoginRequest__requestCompleted(
        TopLoginRequest_o *this,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  TopHomeRequest_c *v72; // x0
  ResponseData_o *v73; // x0
  ResponseData_o *v74; // x20
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v76; // x21
  ManagerConfig_c *v77; // x0
  NetworkManager_o *Instance; // x0
  __int64 v79; // x1
  int64_t birthDay; // x22
  WebViewManager_o *v81; // x0
  System_String_o *name; // x22
  int32_t genderType; // w23
  NetworkManager_o *v84; // x24
  int32_t Month; // w25
  BalanceConfig_c *v86; // x0
  int64_t NextDayTime_26078448; // x21
  int64_t v88; // x0
  TopLoginRequest_c *v89; // x8
  Il2CppObject *success; // x20
  System_String_o *v91; // x1
  ResponseFailData_o *v92; // x21
  TopLoginRequest_c *v93; // x0
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v95; // 0:x0.8
  System_DateTime_o v96; // 0:x0.8

  if ( (byte_42EAC30 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&OtherUserNewManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ResponseFailData_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&SoundPlayerComponent_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&TopLoginRequest_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&UserCommandCodeCollectionManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&UserCommandCodeNewManager_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&UserServantCollectionManager_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_18266/*"do_signup"*/, v69, v70, v71);
    byte_42EAC30 = 1;
  }
  dateData = 0LL;
  v72 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v72);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v73 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( v73 )
  {
    v74 = v73;
    if ( ResponseData__checkError_29500464(v73, 0LL) )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( SelfUserGame )
      {
        v76 = SelfUserGame;
        v77 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v77 = ManagerConfig_TypeInfo;
        }
        if ( v77->static_fields->UseDebugCommand )
        {
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          if ( !NetworkManager__ReadSignup(Instance, 0LL) )
          {
            birthDay = v76->fields.birthDay;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            dateData = NetworkManager__getDateTime_26077468(birthDay, 0LL).fields.dateData;
            v81 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            name = v76->fields.name;
            genderType = v76->fields.genderType;
            v84 = (NetworkManager_o *)v81;
            v95.fields.dateData = (uint64_t)&dateData;
            Month = System_DateTime__get_Month(v95, 0LL);
            v96.fields.dateData = (uint64_t)&dateData;
            Instance = (NetworkManager_o *)System_DateTime__get_Day(v96, 0LL);
            if ( !v84 )
              goto LABEL_88;
            NetworkManager__SetSignup_26064012(v84, name, genderType, Month, (int32_t)Instance, 0LL);
            Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !Instance )
              goto LABEL_88;
            NetworkManager__WriteSignup(Instance, 0LL);
          }
        }
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_88;
        if ( !NetworkManager__ReadFriendCode(Instance, 0LL) )
        {
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          NetworkManager__SetFriendCode(Instance, v76->fields.friendCode, 0LL);
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          NetworkManager__WriteFriendCode(Instance, 0LL);
        }
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetUserId((AdManager_o *)Instance, v76->fields.userId, 0LL);
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
          if ( Instance )
          {
            AdManager__SetFriendCode((AdManager_o *)Instance, v76->fields.friendCode, 0LL);
            Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
            if ( Instance )
            {
              CrashReporter__SetUserId((CrashReporter_o *)Instance, v76->fields.friendCode, 0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              NetworkManager__getTime(0LL);
              v86 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v86 = BalanceConfig_TypeInfo;
              }
              NextDayTime_26078448 = NetworkManager__getNextDayTime_26078448(
                                       v86->static_fields->RequestTopLoginResetTime1,
                                       0LL);
              v88 = NetworkManager__getNextDayTime_26078448(
                      BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                      0LL);
              if ( NextDayTime_26078448 > v88 )
                NextDayTime_26078448 = v88;
              v89 = TopLoginRequest_TypeInfo;
              if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TopLoginRequest_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
                v89 = TopLoginRequest_TypeInfo;
              }
              v89->static_fields->accessTime = NextDayTime_26078448;
              if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserServantNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
              }
              UserServantNewManager__LoginProcess(0LL);
              if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
              }
              UserServantCollectionManager__LoginProcess(0LL);
              if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
              }
              ServantCommentManager__LoginProcess(0LL);
              if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
              }
              UserEquipNewManager__LoginProcess(0LL);
              if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
              }
              OtherUserNewManager__LoginProcess(0LL);
              if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
              }
              UserCommandCodeNewManager__LoginProcess(0LL);
              if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
              }
              UserCommandCodeCollectionManager__LoginProcess(0LL);
              if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
              }
              SoundPlayerComponent__LoginProcess(0LL);
              if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
              }
              ServantProfileLimitCountManager__UpdateProfileServantLimitCount(0LL);
              if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
              }
              ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
              success = (Il2CppObject *)v74->fields.success;
              if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !JsonManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
              }
              v91 = JsonManager__toJson(success, 0, 0, 0LL);
              goto LABEL_87;
            }
          }
        }
LABEL_88:
        sub_B5D69C(Instance, v79);
      }
    }
    else
    {
      v92 = (ResponseFailData_o *)sub_B5D694(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v92, v74, 0LL);
      Instance = (NetworkManager_o *)TopLoginRequest_TypeInfo;
      if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TopLoginRequest_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
        Instance = (NetworkManager_o *)TopLoginRequest_TypeInfo;
      }
      *((_QWORD *)Instance[1].monitor + 1) = 0LL;
      if ( !v92 )
        goto LABEL_88;
      if ( System_String__op_Equality(v92->fields.action, (System_String_o *)StringLiteral_18266/*"do_signup"*/, 0LL) )
      {
        v91 = (System_String_o *)StringLiteral_18266/*"do_signup"*/;
        goto LABEL_87;
      }
    }
  }
  v93 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v93 = TopLoginRequest_TypeInfo;
  }
  v93->static_fields->accessTime = 0LL;
  v91 = (System_String_o *)StringLiteral_21345/*"ng"*/;
LABEL_87:
  RequestBase__completed((RequestBase_o *)this, v91, 0LL);
}