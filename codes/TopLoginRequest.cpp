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
  __int64 v1; // x1
  TopLoginRequest_c *v2; // x0

  if ( (byte_40FB7FB & 1) == 0 )
  {
    sub_B16FFC(&TopLoginRequest_TypeInfo, v1);
    byte_40FB7FB = 1;
  }
  v2 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v2 = TopLoginRequest_TypeInfo;
  }
  v2->static_fields->accessTime = 0LL;
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
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v13; // x21
  uint32_t v14; // w21
  int UserId; // w0
  int v16; // w22
  System_String_o *Item; // x0
  int64_t v18; // x0
  __int64 v19; // x9
  int32_t TerminalDispState; // w0

  if ( (byte_40FB7F9 & 1) == 0 )
  {
    sub_B16FFC(&Crc32_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_16431/*"assetbundleFolder"*/, v5);
    sub_B16FFC(&StringLiteral_22961/*"userState"*/, v6);
    sub_B16FFC(&StringLiteral_20098/*"lastAccessTime"*/, v7);
    sub_B16FFC(&StringLiteral_19877/*"isTerminalLogin"*/, v8);
    byte_40FB7F9 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_40F696E )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40F696E = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v10->static_fields->dataServerFolder;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_19;
  v13 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               dataServerFolder,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v14 = Crc32__Compute(v13, 0LL);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.paramString )
LABEL_19:
    sub_B170D4();
  v16 = UserId;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.paramString,
                              (System_Type_o *)StringLiteral_20098/*"lastAccessTime"*/,
                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v18 = System_Int64__Parse(Item, 0LL);
  v19 = -v18;
  if ( v18 < 0 )
    v19 = ~v18;
  RequestBase__addField_30956696(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_22961/*"userState"*/,
    v16 & v14 ^ (unsigned __int64)(v19 >> 2),
    0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_16431/*"assetbundleFolder"*/, dataServerFolder, 0LL);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19877/*"isTerminalLogin"*/, TerminalDispState, 0LL);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x19
  TopLoginRequest_c *v4; // x8
  struct TopLoginRequest_StaticFields *static_fields; // x9

  if ( (byte_40FB7F8 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&TopLoginRequest_TypeInfo, v2);
    byte_40FB7F8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v4 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v4 = TopLoginRequest_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( Time <= static_fields->resetTime )
    return 1;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = TopLoginRequest_TypeInfo->static_fields;
  }
  return Time <= static_fields->accessTime;
}


System_String_o *__fastcall TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FB7F7 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9138/*"MockTopLoginRequest"*/, v2);
    byte_40FB7F7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9138/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FB7F6 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_20229/*"login/top"*/, v2);
    byte_40FB7F6 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_20229/*"login/top"*/, 0LL);
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
  TopHomeRequest_c *v27; // x0
  ResponseData_o *v28; // x0
  ResponseData_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v35; // x21
  ManagerConfig_c *v36; // x0
  NetworkManager_o *Instance; // x0
  int64_t birthDay; // x22
  WebViewManager_o *v39; // x0
  System_String_o *name; // x22
  int32_t genderType; // w23
  NetworkManager_o *v42; // x24
  int32_t Month; // w25
  int32_t Day; // w0
  NetworkManager_o *v45; // x0
  NetworkManager_o *v46; // x0
  NetworkManager_o *v47; // x0
  NetworkManager_o *v48; // x0
  AdManager_o *v49; // x0
  AdManager_o *v50; // x0
  CrashReporter_o *v51; // x0
  BalanceConfig_c *v52; // x0
  int64_t NextDayTime_23686252; // x21
  int64_t v54; // x0
  TopLoginRequest_c *v55; // x8
  Il2CppObject *success; // x20
  System_String_o *v57; // x1
  ResponseFailData_o *v58; // x21
  TopLoginRequest_c *v59; // x0
  TopLoginRequest_c *v60; // x0
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v62; // 0:x0.8
  System_DateTime_o v63; // 0:x0.8

  if ( (byte_40FB7FA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, responseList);
    sub_B16FFC(&JsonManager_TypeInfo, v5);
    sub_B16FFC(&ManagerConfig_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v8);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v9);
    sub_B16FFC(&ResponseFailData_TypeInfo, v10);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v11);
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v12);
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v16);
    sub_B16FFC(&SoundPlayerComponent_TypeInfo, v17);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v18);
    sub_B16FFC(&TopLoginRequest_TypeInfo, v19);
    sub_B16FFC(&UserCommandCodeCollectionManager_TypeInfo, v20);
    sub_B16FFC(&UserCommandCodeNewManager_TypeInfo, v21);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v22);
    sub_B16FFC(&UserServantCollectionManager_TypeInfo, v23);
    sub_B16FFC(&UserServantNewManager_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v25);
    sub_B16FFC(&StringLiteral_17971/*"do_signup"*/, v26);
    byte_40FB7FA = 1;
  }
  dateData = 0LL;
  v27 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v27);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v28 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( v28 )
  {
    v29 = v28;
    if ( ResponseData__checkError_30924960(v28, 0LL) )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( SelfUserGame )
      {
        v35 = SelfUserGame;
        v36 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v36 = ManagerConfig_TypeInfo;
        }
        if ( v36->static_fields->UseDebugCommand )
        {
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          if ( !NetworkManager__ReadSignup(Instance, 0LL) )
          {
            birthDay = v35->fields.birthDay;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            dateData = NetworkManager__getDateTime_23685272(birthDay, 0LL).fields.dateData;
            v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            name = v35->fields.name;
            genderType = v35->fields.genderType;
            v42 = (NetworkManager_o *)v39;
            v62.fields.dateData = (uint64_t)&dateData;
            Month = System_DateTime__get_Month(v62, 0LL);
            v63.fields.dateData = (uint64_t)&dateData;
            Day = System_DateTime__get_Day(v63, 0LL);
            if ( !v42 )
              goto LABEL_88;
            NetworkManager__SetSignup_23672008(v42, name, genderType, Month, Day, 0LL);
            v45 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !v45 )
              goto LABEL_88;
            NetworkManager__WriteSignup(v45, 0LL);
          }
        }
        v46 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !v46 )
          goto LABEL_88;
        if ( !NetworkManager__ReadFriendCode(v46, 0LL) )
        {
          v47 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !v47 )
            goto LABEL_88;
          NetworkManager__SetFriendCode(v47, v35->fields.friendCode, 0LL);
          v48 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !v48 )
            goto LABEL_88;
          NetworkManager__WriteFriendCode(v48, 0LL);
        }
        v49 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( v49 )
        {
          AdManager__SetUserId(v49, v35->fields.userId, 0LL);
          v50 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
          if ( v50 )
          {
            AdManager__SetFriendCode(v50, v35->fields.friendCode, 0LL);
            v51 = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
            if ( v51 )
            {
              CrashReporter__SetUserId(v51, v35->fields.friendCode, 0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              NetworkManager__getTime(0LL);
              v52 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v52 = BalanceConfig_TypeInfo;
              }
              NextDayTime_23686252 = NetworkManager__getNextDayTime_23686252(
                                       v52->static_fields->RequestTopLoginResetTime1,
                                       0LL);
              v54 = NetworkManager__getNextDayTime_23686252(
                      BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                      0LL);
              if ( NextDayTime_23686252 > v54 )
                NextDayTime_23686252 = v54;
              v55 = TopLoginRequest_TypeInfo;
              if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TopLoginRequest_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
                v55 = TopLoginRequest_TypeInfo;
              }
              v55->static_fields->accessTime = NextDayTime_23686252;
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
              success = (Il2CppObject *)v29->fields.success;
              if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !JsonManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
              }
              v57 = JsonManager__toJson(success, 0, 0, 0LL);
              goto LABEL_87;
            }
          }
        }
LABEL_88:
        sub_B170D4();
      }
    }
    else
    {
      v58 = (ResponseFailData_o *)sub_B170CC(ResponseFailData_TypeInfo, v30, v31, v32, v33);
      ResponseFailData___ctor(v58, v29, 0LL);
      v59 = TopLoginRequest_TypeInfo;
      if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TopLoginRequest_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
        v59 = TopLoginRequest_TypeInfo;
      }
      v59->static_fields->accessTime = 0LL;
      if ( !v58 )
        goto LABEL_88;
      if ( System_String__op_Equality(v58->fields.action, (System_String_o *)StringLiteral_17971/*"do_signup"*/, 0LL) )
      {
        v57 = (System_String_o *)StringLiteral_17971/*"do_signup"*/;
        goto LABEL_87;
      }
    }
  }
  v60 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v60 = TopLoginRequest_TypeInfo;
  }
  v60->static_fields->accessTime = 0LL;
  v57 = (System_String_o *)StringLiteral_20980/*"ng"*/;
LABEL_87:
  RequestBase__completed((RequestBase_o *)this, v57, 0LL);
}