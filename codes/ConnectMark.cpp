void ConnectMark___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x19
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  struct ConnectMark_StaticFields *static_fields; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  struct ConnectMark_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  if ( (byte_596F20F & 1) == 0 )
  {
    sub_2213A60(&ConnectMark_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_22378/*"load_mark"*/);
    sub_2213A60(&StringLiteral_19034/*"connectMarkC"*/);
    sub_2213A60(&StringLiteral_19033/*"connectMarkB"*/);
    sub_2213A60(&StringLiteral_13750/*"SvtProfilePushKey"*/);
    sub_2213A60(&StringLiteral_19032/*"connectMarkA"*/);
    byte_596F20F = 1;
  }
  v7 = StringLiteral_13750/*"SvtProfilePushKey"*/;
  ConnectMark_TypeInfo->static_fields->SERVANT_PROFILE_PUSH_SAVE_KEY = (struct System_String_o *)StringLiteral_13750/*"SvtProfilePushKey"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)ConnectMark_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = sub_2213B20(string___TypeInfo, 3);
  if ( !v8 )
    sub_2213CDC(0, v9);
  v16 = v8;
  if ( !*(_DWORD *)(v8 + 24)
    || (v17 = StringLiteral_19032/*"connectMarkA"*/,
        *(_QWORD *)(v8 + 32) = StringLiteral_19032/*"connectMarkA"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), v17, v10, v11, v12, v13, v14, v15),
        (*(_DWORD *)(v16 + 24) & 0xFFFFFFFE) == 0)
    || (v24 = StringLiteral_19033/*"connectMarkB"*/,
        *(_QWORD *)(v16 + 40) = StringLiteral_19033/*"connectMarkB"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 40), v24, v18, v19, v20, v21, v22, v23),
        *(_DWORD *)(v16 + 24) <= 2u) )
  {
    sub_2213CE4(v8);
  }
  v31 = StringLiteral_19034/*"connectMarkC"*/;
  *(_QWORD *)(v16 + 48) = StringLiteral_19034/*"connectMarkC"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 48), v31, v25, v26, v27, v28, v29, v30);
  static_fields = ConnectMark_TypeInfo->static_fields;
  static_fields->markIconAnimationNameList = (struct System_String_array *)v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->markIconAnimationNameList,
    v16,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = StringLiteral_22378/*"load_mark"*/;
  v40 = ConnectMark_TypeInfo->static_fields;
  v40->ANIMATION_ICON_PREFAB = (struct System_String_o *)StringLiteral_22378/*"load_mark"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->ANIMATION_ICON_PREFAB, v39, v41, v42, v43, v44, v45, v46);
}


void ConnectMark___ctor(ConnectMark_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ConnectMark__Awake(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_596F20E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11227/*"ProgressBar/CancelButton"*/);
    sub_2213A60(&StringLiteral_9453/*"MiniProgressBar/CancelButton"*/);
    byte_596F20E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_51986024(transform, (System_String_o *)StringLiteral_11227/*"ProgressBar/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_51986024(v4, (System_String_o *)StringLiteral_9453/*"MiniProgressBar/CancelButton"*/, 0);
}


void ConnectMark__BeforeServantoProfile(ConnectMark_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t svtProfileIndex; // w8
  __int64 v5; // x1
  struct ServantCommentEntity_array *servantCommentEntityList; // x8
  RubyLabelHelper_o *rubyLabelHelper; // x0

  svtProfileIndex = this->fields.svtProfileIndex;
  v5 = (unsigned int)(svtProfileIndex - 1);
  this->fields.svtProfileIndex = v5;
  if ( svtProfileIndex - 1 < 0 )
  {
    servantCommentEntityList = this->fields.servantCommentEntityList;
    if ( !servantCommentEntityList )
      sub_2213CDC(this, v5);
    LODWORD(v5) = LODWORD(servantCommentEntityList->max_length) - 1;
    this->fields.svtProfileIndex = v5;
  }
  rubyLabelHelper = this->fields.rubyLabelHelper;
  if ( rubyLabelHelper )
  {
    RubyLabelHelper__ReleasePrefabs(rubyLabelHelper, 0);
    LODWORD(v5) = this->fields.svtProfileIndex;
  }
  ConnectMark__SetServantProfile(this, v5, v2);
}


// local variable allocation has failed, the output may be wrong!
void ConnectMark__CallbackConfirmDialog(ConnectMark_o *this, bool isDecie, const MethodInfo *method)
{
  if ( (byte_596F204 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F204 = 1;
  }
  if ( isDecie )
    this->fields.isLoadCancel = 1;
  else
    this->fields.isLoadPause = 0;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, isDecie, method);
  AssetManager__resumeDownloadAssetStorage(0);
}


void ConnectMark__DownloadCancel(ConnectMark_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MovieFileMerge_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_596F203 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596F203 = 1;
  }
  if ( this->fields.mode == 9 )
  {
    Instance = (MovieFileMerge_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance || (Instance = (MovieFileMerge_o *)Instance[13].fields.outputSplitFileFolder) == 0 )
      sub_2213CDC(Instance, v5);
    MovieFileMerge__DownloadCancel(Instance, 0);
  }
  else
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__pauseDownloadAssetStorage(0);
    this->fields.isLoadPause = 1;
    ConnectMark__CallbackConfirmDialog(this, 1, v6);
  }
}


void ConnectMark__EndCloseNotificationDownload(ConnectMark_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
}


void ConnectMark__EndNotificationDownload(ConnectMark_o *this, bool isDecide, const MethodInfo *method)
{
  NotificationDialog_o *notificationDialog; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596F201 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ConnectMark_EndCloseNotificationDownload__);
    byte_596F201 = 1;
  }
  notificationDialog = this->fields.notificationDialog;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ConnectMark_EndCloseNotificationDownload__, 0);
  if ( !notificationDialog )
    sub_2213CDC(v6, v7);
  NotificationDialog__Close_37581388(notificationDialog, v5, 0);
}


float ConnectMark__GetFadeInLagSecondByLagType(
        ConnectMark_o *this,
        System_Nullable_ConnectMarkFadeInLagType__o type,
        const MethodInfo *method)
{
  float result; // s0

  if ( (byte_596F1F4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_ConnectMarkFadeInLagType__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_ConnectMarkFadeInLagType__get_HasValue__);
    byte_596F1F4 = 1;
  }
  result = 0.0;
  if ( !type.fields.hasValue || HIDWORD(*(unsigned __int64 *)&type) != 0 )
    return 0.5;
  return result;
}


System_String_o *ConnectMark__GetServantNameByProfileSaveData(
        ConnectMark_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w20
  int32_t LimitCount; // w20
  bool v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w9
  bool v14; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x0
  LocalizationManager_c *v17; // x0
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_596F1FC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantProfileEventJoinManager_TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    sub_2213A60(&StringLiteral_25143/*"svtProfileLimit"*/);
    byte_596F1FC = 1;
  }
  param = 0;
  if ( servantEntity )
  {
    v4 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantEntity, method);
    *(_QWORD *)&v19.fields.currentCryptoKey = v4;
    *(_QWORD *)&v19.fields.fakeValue = v5;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
    if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v6, v7);
    LimitCount = ServantProfileLimitCountManager__GetLimitCount(v8, 0);
    v10 = ServantEntity__checkScript_49687556(servantEntity, (System_String_o *)StringLiteral_25143/*"svtProfileLimit"*/, &param, 0);
    v13 = param;
    if ( param >= LimitCount )
      v13 = LimitCount;
    if ( v10 )
      LimitCount = v13;
    if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v11, v12);
    v14 = ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(servantEntity, 0);
    Name = ServantEntity__GetName(servantEntity, LimitCount, v14, -1, 1, 0);
    return BasicHelper__DecryptValue_51160620(Name, 0);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, servantEntity, method);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v17 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, servantEntity, method);
      v17 = LocalizationManager_TypeInfo;
    }
    return v17->static_fields->unknownNameText;
  }
}


ServantCommentEntity_o *ConnectMark__GetStartProfileServantCommentEntity(
        ConnectMark_o *this,
        System_Int32_array *clearwarIdList,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *v4; // x1
  ServantProfilePushMaster_o *v5; // x22
  ServantProfilePushEntity_array *AvaiableEntities; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ConnectMark_c *v10; // x0
  System_String_o *String_83398240; // x23
  System_String_o *v12; // x2
  int v13; // w8
  void *v14; // x23
  unsigned int v15; // w25
  __int64 v16; // x24
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  unsigned int v26; // w19
  __int64 v27; // x22
  ConnectMark_ProfilePushData_o *v28; // x24
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject **v35; // x23
  ServantProfilePushEntity_o *v36; // x8
  Il2CppObject *v37; // x9
  System_Predicate_ConnectMark_ProfilePushData__c *v38; // x0
  System_Predicate_object__o *v39; // x24
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *SERVANT_PROFILE_PUSH_SAVE_KEY; // x19
  System_Object_array *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  JsonManager_c *v49; // x8
  Il2CppObject *p_obj; // x20
  ServantCommentEntity_o *v51; // x22
  System_String_o *v52; // x0
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  ConnectMark_c *v60; // x0
  System_Object_array *v61; // x0
  ServantProfilePushEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596F20D & 1) == 0 )
  {
    sub_2213A60(&ConnectMark_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantProfilePushMaster___);
    sub_2213A60(&Method_JsonManager_DeserializeArray_ConnectMark_ProfilePushData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ConnectMark_ProfilePushData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ConnectMark_ProfilePushData__TypeInfo);
    sub_2213A60(&System_Predicate_ConnectMark_ProfilePushData__TypeInfo);
    sub_2213A60(&ConnectMark_ProfilePushData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ConnectMark___c__DisplayClass111_0__GetStartProfileServantCommentEntity_b__0__);
    sub_2213A60(&ConnectMark___c__DisplayClass111_0_TypeInfo);
    byte_596F20D = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantProfilePushMaster___);
  if ( !Instance )
    goto LABEL_52;
  v5 = (ServantProfilePushMaster_o *)Instance;
  AvaiableEntities = ServantProfilePushMaster__GetAvaiableEntities((ServantProfilePushMaster_o *)Instance, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ConnectMark_ProfilePushData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ConnectMark_ProfilePushData___ctor__);
  v10 = ConnectMark_TypeInfo;
  if ( !*(&ConnectMark_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo, v8, v9);
    v10 = ConnectMark_TypeInfo;
  }
  String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(v10->static_fields->SERVANT_PROFILE_PUSH_SAVE_KEY, 0);
  Instance = (void *)System_String__IsNullOrEmpty(String_83398240, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4, v12);
    Instance = JsonManager__DeserializeArray_object_(
                 (Il2CppObject *)String_83398240,
                 (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_ConnectMark_ProfilePushData___);
    if ( !Instance )
      goto LABEL_52;
    v13 = *((_DWORD *)Instance + 6);
    v14 = Instance;
    if ( v13 >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= v13 )
LABEL_53:
          sub_2213CE4(Instance);
        v16 = *((_QWORD *)v14 + (int)v15 + 4);
        if ( !v16 )
          break;
        Instance = (void *)ServantProfilePushMaster__TryGetEntity(
                             v5,
                             &entity,
                             *(_DWORD *)(v16 + 16),
                             *(_DWORD *)(v16 + 20),
                             0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = entity;
          if ( !entity )
            break;
          Instance = (void *)ServantProfilePushEntity__TimeEnd(entity, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v23 = Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v16,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v16;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), v16, v12, v17, v18, v19, v20, v21);
            }
          }
        }
        v13 = *((_DWORD *)v14 + 6);
        if ( (int)++v15 >= v13 )
          goto LABEL_24;
      }
LABEL_52:
      sub_2213CDC(Instance, v4);
    }
  }
LABEL_24:
  if ( !AvaiableEntities )
    goto LABEL_52;
  if ( SLODWORD(AvaiableEntities->max_length) < 1 )
  {
LABEL_38:
    Instance = ConnectMark_TypeInfo;
    if ( !*(&ConnectMark_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo, v4, v12);
      Instance = ConnectMark_TypeInfo;
    }
    if ( !v7 )
      goto LABEL_52;
    SERVANT_PROFILE_PUSH_SAVE_KEY = (System_String_o *)**((_QWORD **)Instance + 23);
    v46 = System_Collections_Generic_List_object___ToArray(
            v7,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__ToArray__);
    v49 = JsonManager_TypeInfo;
    p_obj = &v46->obj;
    v51 = 0;
  }
  else
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = sub_2213CCC(ConnectMark___c__DisplayClass111_0_TypeInfo);
      ConnectMark___c__DisplayClass111_0___ctor((ConnectMark___c__DisplayClass111_0_o *)v27, 0);
      v28 = (ConnectMark_ProfilePushData_o *)sub_2213CCC(ConnectMark_ProfilePushData_TypeInfo);
      ConnectMark_ProfilePushData___ctor(v28, 0);
      if ( !v27 )
        goto LABEL_52;
      *(_QWORD *)(v27 + 16) = v28;
      v35 = (Il2CppObject **)(v27 + 16);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 16), (int32_t)v28, v29, v30, v31, v32, v33, v34);
      if ( v26 >= LODWORD(AvaiableEntities->max_length) )
        goto LABEL_53;
      v36 = AvaiableEntities->m_Items[v26];
      if ( !v36 )
        goto LABEL_52;
      v37 = *v35;
      if ( !*v35 )
        goto LABEL_52;
      v38 = System_Predicate_ConnectMark_ProfilePushData__TypeInfo;
      v37[1].klass = *(Il2CppClass **)&v36->fields.svtId;
      LODWORD(v37[1].monitor) = v36->fields.priority;
      v39 = (System_Predicate_object__o *)sub_2213CCC(v38);
      System_Predicate_object____ctor(
        v39,
        (Il2CppObject *)v27,
        Method_ConnectMark___c__DisplayClass111_0__GetStartProfileServantCommentEntity_b__0__,
        0);
      if ( !v7 )
        goto LABEL_52;
      if ( !System_Collections_Generic_List_object___Find(
              v7,
              (System_Predicate_T__o *)v39,
              (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Find__) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_52;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
        if ( !*v35 || !Instance )
          goto LABEL_52;
        Instance = ServantProfileMaster__GetChapterProgressEntity(
                     (ServantProfileMaster_o *)Instance,
                     clearwarIdList,
                     (int32_t)(*v35)[1].klass,
                     0);
        if ( Instance )
          break;
      }
      if ( (signed int)++v26 >= SLODWORD(AvaiableEntities->max_length) )
        goto LABEL_38;
    }
    v54 = v7->fields._items;
    v4 = *v35;
    v55 = Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__Add__;
    ++v7->fields._version;
    if ( !v54 )
      goto LABEL_52;
    v56 = v7->fields._size;
    v51 = (ServantCommentEntity_o *)Instance;
    if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v4,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->obj.klass + v56;
      v7->fields._size = v56 + 1;
      v57[4] = (Il2CppClass *)v4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v57 + 4), (int32_t)v4, v12, v40, v41, v42, v43, v44);
    }
    v60 = ConnectMark_TypeInfo;
    if ( !*(&ConnectMark_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo, v58, v59);
      v60 = ConnectMark_TypeInfo;
    }
    SERVANT_PROFILE_PUSH_SAVE_KEY = v60->static_fields->SERVANT_PROFILE_PUSH_SAVE_KEY;
    v61 = System_Collections_Generic_List_object___ToArray(
            v7,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ConnectMark_ProfilePushData__ToArray__);
    v49 = JsonManager_TypeInfo;
    p_obj = &v61->obj;
  }
  if ( !*(&v49->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v49, v47, v48);
  v52 = JsonManager__toJson(p_obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString(SERVANT_PROFILE_PUSH_SAVE_KEY, v52, 0);
  UnityEngine_PlayerPrefs__Save(0);
  return v51;
}


void ConnectMark__HideEventAnimationIcons(ConnectMark_o *this, int32_t excludeEventId, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *value; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_596F20B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__AnimationLoadingIcon__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__AnimationLoadingIcon__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F20B = 1;
  }
  eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
  memset(&v14, 0, sizeof(v14));
  if ( eventAnimationIconDictionary )
  {
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v13,
      (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
      (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__GetEnumerator__);
    v14 = v13;
    v13.fields._dictionary = 0;
    *(_QWORD *)&v13.fields._version = &v14;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v14,
              (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__MoveNext__) )
    {
      if ( LODWORD(v14.fields._current.fields.key) != excludeEventId )
      {
        value = v14.fields._current.fields.value;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
        v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)value, 0, 0);
        if ( v9 )
        {
          if ( !value )
            sub_2213CDC(v9, v10);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)value, 0);
          if ( !gameObject )
            sub_2213CDC(0, v12);
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v14,
      (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__AnimationLoadingIcon__Dispose__);
  }
}


void ConnectMark__Init(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBase; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_596F1F2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__UIAtlas___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__UIAtlas__TypeInfo);
    byte_596F1F2 = 1;
  }
  maskBase = this->fields.maskBase;
  if ( !maskBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(maskBase, 0, 0);
  maskBase = this->fields.tipsBase;
  if ( !maskBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(maskBase, 0, 0);
  maskBase = this->fields.profileBase;
  if ( !maskBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(maskBase, 0, 0);
  maskBase = this->fields.touchInfoBase;
  if ( !maskBase
    || (UnityEngine_GameObject__SetActive(maskBase, 0, 0), (maskBase = this->fields.arrowInfo) == 0)
    || (UnityEngine_GameObject__SetActive(maskBase, 0, 0),
        (maskBase = (UnityEngine_GameObject_o *)this->fields.markSprite) == 0)
    || (UISprite__set_atlas((UISprite_o *)maskBase, this->fields.systemUIAtlas, 0),
        (maskBase = (UnityEngine_GameObject_o *)this->fields.markSprite) == 0)
    || (maskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBase, 0)) == 0 )
  {
LABEL_12:
    sub_2213CDC(maskBase, method);
  }
  UnityEngine_GameObject__SetActive(maskBase, 1, 0);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__UIAtlas__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas___ctor__);
  this->fields.EventUIAtlasDictionary = (struct System_Collections_Generic_Dictionary_string__UIAtlas__o *)v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.EventUIAtlasDictionary,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ConnectMark__InitEventAnimationIcons(this, v11);
  ConnectMark__ReleaseBackImage(this, v12);
  *(_QWORD *)&this->fields.mode = 0;
  *(_WORD *)&this->fields.isMaskClickWait = 0;
  this->fields.tipNum = -1;
  ConnectMark__SetDispMode(this, v13);
}


void ConnectMark__InitEventAnimationIcons(ConnectMark_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *currentValue; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_Dictionary_int__object__o *v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F20C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Values__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__get_Current__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__AnimationLoadingIcon__GetEnumerator__);
    byte_596F20C = 1;
  }
  eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
  memset(&v21, 0, sizeof(v21));
  if ( eventAnimationIconDictionary )
  {
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
               (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Values__);
    if ( !Values )
      sub_2213CDC(0, v5);
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v21,
      Values,
      (const MethodInfo_3CC3590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__AnimationLoadingIcon__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              &v21,
              (const MethodInfo_41591F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__MoveNext__) )
    {
      currentValue = v21.fields._currentValue;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)currentValue, 0, 0);
      if ( v9 )
      {
        if ( !currentValue )
          sub_2213CDC(v9, v10);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)currentValue,
                                               0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        UnityEngine_Object__Destroy_83459800(gameObject, 0);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v21,
      (const MethodInfo_41591F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__AnimationLoadingIcon__Dispose__);
  }
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v14,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon___ctor__);
  this->fields.eventAnimationIconDictionary = (struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventAnimationIconDictionary,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


bool ConnectMark__InitServantProfileList(ConnectMark_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *ClearWarIdList; // x22
  __int64 Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x20
  System_Array_o *v9; // x21
  ServantCommentEntity_o *StartProfileServantCommentEntity; // x0
  unsigned __int64 v11; // x28
  __int64 v12; // x27
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  void *monitor; // x8
  unsigned int v20; // w25
  System_Array_c **v21; // x19
  System_Array_c **v22; // x23
  System_Array_c *v23; // x26
  System_Array_c **v24; // x23
  System_Array_c *v25; // x24
  System_Array_c *v26; // t1
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  unsigned int v34; // w27
  MissionNaviTransitionBoardItem_o *v35; // x24
  MissionNaviTransitionBoardItem_c *klass; // x26
  MissionNaviTransitionBoardItem_c *v37; // x25
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  unsigned int v50; // w22
  __int64 v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  _BOOL4 isInitilizedMsgPos; // w8
  __int64 v59; // x1
  __int64 v60; // x2
  FSUtility_c *v61; // x0
  float v62; // s0
  __int64 v64; // x0
  ConnectMark_o *v65; // [xsp+8h] [xbp-78h]
  ServantCommentEntity_o *v66; // [xsp+10h] [xbp-70h]
  MissionNaviTransitionBoardItem_o *v67; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F1FA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&ServantCommentEntity___TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F1FA = 1;
  }
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, method, v2);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_48;
  Instance = (__int64)ServantProfileMaster__GetChapterProgressEntityList(
                        (ServantProfileMaster_o *)Instance,
                        ClearWarIdList,
                        0);
  if ( !Instance )
    goto LABEL_48;
  v8 = *(_QWORD *)(Instance + 24);
  v9 = (System_Array_o *)Instance;
  StartProfileServantCommentEntity = ConnectMark__GetStartProfileServantCommentEntity(
                                       (ConnectMark_o *)Instance,
                                       ClearWarIdList,
                                       v7);
  if ( (int)v8 >= 1 )
  {
    v11 = 0;
    v12 = 32;
    v65 = this;
    v66 = StartProfileServantCommentEntity;
    v67 = (MissionNaviTransitionBoardItem_o *)&v9[2];
    do
    {
      Instance = UnityEngine_Random__Range_83400680(0, v8, 0);
      if ( v11 != (unsigned int)Instance )
      {
        monitor = v9[1].monitor;
        v20 = Instance;
        if ( (unsigned int)Instance >= (unsigned int)monitor || v11 >= (unsigned int)v9[1].monitor )
          goto LABEL_46;
        v21 = &v9->klass + v11;
        v22 = &v9->klass + (int)Instance;
        v23 = v21[4];
        v26 = v22[4];
        v24 = v22 + 4;
        v25 = v26;
        if ( v23 )
        {
          Instance = sub_2213BB4(v21[4], v9->klass->_1.element_class);
          if ( !Instance )
            goto LABEL_47;
          LODWORD(monitor) = v9[1].monitor;
        }
        if ( v20 >= (unsigned int)monitor )
          goto LABEL_46;
        *v24 = v23;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)((char *)v67 + 8 * (int)v20),
          (int32_t)v23,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        if ( v25 )
        {
          Instance = sub_2213BB4(v25, v9->klass->_1.element_class);
          if ( !Instance )
          {
LABEL_47:
            v64 = sub_2213D00(Instance, v27);
            sub_2213BA0(v64, 0);
          }
        }
        if ( v11 >= LODWORD(v9[1].monitor) )
          goto LABEL_46;
        v21[4] = v25;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v9 + v12), (int32_t)v25, v28, v29, v30, v31, v32, v33);
      }
      ++v11;
      v12 += 8;
    }
    while ( (unsigned int)v8 != v11 );
    if ( v66 )
    {
      v34 = 0;
      v35 = (MissionNaviTransitionBoardItem_o *)&v9[2];
      while ( v34 < LODWORD(v9[1].monitor) )
      {
        klass = v35->klass;
        if ( !v35->klass )
          goto LABEL_48;
        if ( LODWORD(klass->_1.name) == v66->fields.svtId )
        {
          v37 = (MissionNaviTransitionBoardItem_c *)v9[2].klass;
          Instance = sub_2213BB4(v35->klass, v9->klass->_1.element_class);
          if ( !Instance )
            goto LABEL_47;
          if ( !LODWORD(v9[1].monitor) )
            break;
          v67->klass = klass;
          sub_2213A04(v67, (int32_t)klass, v38, v39, v40, v41, v42, v43);
          if ( v37 )
          {
            Instance = sub_2213BB4(v37, v9->klass->_1.element_class);
            if ( !Instance )
              goto LABEL_47;
          }
          if ( v34 >= LODWORD(v9[1].monitor) )
            break;
          v35->klass = v37;
          sub_2213A04(v35, (int32_t)v37, v44, v45, v46, v47, v48, v49);
        }
        ++v34;
        v35 = (MissionNaviTransitionBoardItem_o *)((char *)v35 + 8);
        if ( (_DWORD)v8 == v34 )
          goto LABEL_34;
      }
LABEL_46:
      sub_2213CE4(Instance);
    }
LABEL_34:
    v50 = (int)v8 >= 10 ? 10 : v8;
    v51 = sub_2213B20(ServantCommentEntity___TypeInfo, v50);
    v65->fields.servantCommentEntityList = (struct ServantCommentEntity_array *)v51;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v65->fields.servantCommentEntityList,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    System_Array__Copy_77295396(v9, (System_Array_o *)v65->fields.servantCommentEntityList, v50, 0);
    isInitilizedMsgPos = v65->fields.isInitilizedMsgPos;
    v65->fields.svtProfileIndex = 0;
    if ( !isInitilizedMsgPos )
    {
      Instance = (__int64)v65->fields.profileMessageLabel;
      v65->fields.isInitilizedMsgPos = 1;
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
          if ( Instance )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
            v65->fields.svtProfileMsgPos.fields.x = localPosition.fields.x;
            v65->fields.svtProfileMsgPos.fields.y = localPosition.fields.y;
            v61 = FSUtility_TypeInfo;
            v65->fields.svtProfileMsgPos.fields.z = localPosition.fields.z;
            if ( !*(&v61->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v61, v59, v60);
            if ( !FSUtility__IsUnderVista(0) )
            {
              v62 = v65->fields.svtProfileMsgPos.fields.z + 0.0;
              *(float32x2_t *)&v65->fields.svtProfileMsgPos.fields.x = vadd_f32(
                                                                         *(float32x2_t *)&v65->fields.svtProfileMsgPos.fields.x,
                                                                         (float32x2_t)0x4100000000000000LL);
              v65->fields.svtProfileMsgPos.fields.z = v62;
            }
            return (int)v8 > 0;
          }
        }
      }
LABEL_48:
      sub_2213CDC(Instance, v6);
    }
  }
  return (int)v8 > 0;
}


bool ConnectMark__IsBusy(ConnectMark_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


bool ConnectMark__IsDispMask(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBase; // x0

  maskBase = this->fields.maskBase;
  if ( !maskBase )
    sub_2213CDC(0, method);
  return UnityEngine_GameObject__get_activeSelf(maskBase, 0);
}


bool ConnectMark__IsMaskClick(ConnectMark_o *this, const MethodInfo *method)
{
  return !this->fields.isMaskClickWait;
}


bool ConnectMark__IsMode(ConnectMark_o *this, int32_t mode, const MethodInfo *method)
{
  return this->fields.mode == mode;
}


void ConnectMark__LoadAtlas(
        ConnectMark_o *this,
        System_String_o *atlasName,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_Dictionary_object__object__o *v30; // x22
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x0
  System_String_o *v38; // x19
  AssetLoader_LoadEndDataHandler_o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  int32_t v42; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596F208 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__UIAtlas___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__UIAtlas__TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_ConnectMark___c__DisplayClass105_0__LoadAtlas_b__0__);
    sub_2213A60(&ConnectMark___c__DisplayClass105_0_TypeInfo);
    sub_2213A60(&StringLiteral_6538/*"EventUI/Prefabs/{0}"*/);
    byte_596F208 = 1;
  }
  v9 = sub_2213CCC(ConnectMark___c__DisplayClass105_0_TypeInfo);
  ConnectMark___c__DisplayClass105_0___ctor((ConnectMark___c__DisplayClass105_0_o *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = atlasName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)atlasName, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)callback, v24, v25, v26, v27, v28, v29);
  if ( !this->fields.EventUIAtlasDictionary )
  {
    v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__UIAtlas__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v30,
      (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas___ctor__);
    this->fields.EventUIAtlasDictionary = (struct System_Collections_Generic_Dictionary_string__UIAtlas__o *)v30;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.EventUIAtlasDictionary,
      (int32_t)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v42 = eventId;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v42);
  v38 = System_String__Format((System_String_o *)StringLiteral_6538/*"EventUI/Prefabs/{0}"*/, v37, 0);
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)v9,
    Method_ConnectMark___c__DisplayClass105_0__LoadAtlas_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v40, v41);
  AssetManager__loadAssetStorage(v38, v39, 1, 0, 0);
}


void ConnectMark__LoadBackImage(ConnectMark_o *this, System_String_o *fileName, const MethodInfo *method)
{
  UnityEngine_Object_o *loadBackTextureData; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppType *v8; // x21
  System_RuntimeTypeHandle_o v9; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_83400868; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Texture2D_c *v18; // x8
  struct UnityEngine_Texture2D_o *v19; // x9
  int32_t v20; // w1
  __int64 v21; // x1
  struct UITexture_o *loadBackTexture; // x0

  if ( (byte_596F1F7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Texture2D_var);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    byte_596F1F7 = 1;
  }
  loadBackTextureData = (UnityEngine_Object_o *)this->fields.loadBackTextureData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, fileName, method);
  if ( UnityEngine_Object__op_Equality(loadBackTextureData, 0, 0) )
  {
    v8 = UnityEngine_Texture2D_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v6, v7);
    v9.fields.value = (intptr_t)v8;
    TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0);
    _83400868 = UnityEngine_Resources__Load_83400868(fileName, TypeFromHandle, 0);
    if ( _83400868 )
    {
      v18 = UnityEngine_Texture2D_TypeInfo;
      if ( (UnityEngine_Texture2D_c *)_83400868->klass == UnityEngine_Texture2D_TypeInfo )
        v19 = (struct UnityEngine_Texture2D_o *)_83400868;
      else
        v19 = 0;
      this->fields.loadBackTextureData = v19;
      if ( (UnityEngine_Texture2D_c *)_83400868->klass == v18 )
        v20 = (int)_83400868;
      else
        v20 = 0;
    }
    else
    {
      v20 = 0;
      this->fields.loadBackTextureData = 0;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.loadBackTextureData,
      v20,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    loadBackTexture = this->fields.loadBackTexture;
    if ( !loadBackTexture )
      sub_2213CDC(0, v21);
    ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_Texture2D_o *, const MethodInfo *))loadBackTexture->klass->vtable._27_set_mainTexture.methodPtr)(
      loadBackTexture,
      this->fields.loadBackTextureData,
      loadBackTexture->klass->vtable._27_set_mainTexture.method);
  }
}


void ConnectMark__LoadEventAnimationIcon(
        ConnectMark_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_o **v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *Item; // x22
  System_Collections_Generic_Dictionary_int__object__o *v27; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x0
  System_String_o *v35; // x19
  AssetLoader_LoadEndDataHandler_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  int v39; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F207 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ConnectMark___c__DisplayClass104_0__LoadEventAnimationIcon_b__0__);
    sub_2213A60(&ConnectMark___c__DisplayClass104_0_TypeInfo);
    sub_2213A60(&StringLiteral_6538/*"EventUI/Prefabs/{0}"*/);
    byte_596F207 = 1;
  }
  v7 = sub_2213CCC(ConnectMark___c__DisplayClass104_0_TypeInfo);
  ConnectMark___c__DisplayClass104_0___ctor((ConnectMark___c__DisplayClass104_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  v16 = (System_Action_o **)(v7 + 32);
  *(_DWORD *)(v7 + 24) = eventId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)callback, v17, v18, v19, v20, v21, v22);
  eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
  if ( !eventAnimationIconDictionary )
  {
LABEL_12:
    v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v27,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon___ctor__);
    this->fields.eventAnimationIconDictionary = (struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *)v27;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventAnimationIconDictionary,
      (int32_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    goto LABEL_13;
  }
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
         *(_DWORD *)(v7 + 24),
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__) )
  {
    v8 = this->fields.eventAnimationIconDictionary;
    if ( v8 )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)v8,
               *(_DWORD *)(v7 + 24),
               (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        ActionExtensions__Call(*v16, 0);
        return;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_2213CDC(v8, v9);
  }
LABEL_11:
  if ( !this->fields.eventAnimationIconDictionary )
    goto LABEL_12;
LABEL_13:
  v39 = *(_DWORD *)(v7 + 24);
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v39);
  v35 = System_String__Format((System_String_o *)StringLiteral_6538/*"EventUI/Prefabs/{0}"*/, v34, 0);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_ConnectMark___c__DisplayClass104_0__LoadEventAnimationIcon_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37, v38);
  if ( !AssetManager__loadAssetStorage(v35, v36, 1, 0, 0) )
    ActionExtensions__Call(*v16, 0);
}


void ConnectMark__LoadOtherMark(ConnectMark_o *this, int32_t eventId, int32_t animationId, const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_c *v16; // x0
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3

  if ( (byte_596F206 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ConnectMark___c__DisplayClass103_0__LoadOtherMark_b__0__);
    sub_2213A60(&ConnectMark___c__DisplayClass103_0_TypeInfo);
    byte_596F206 = 1;
  }
  v7 = sub_2213CCC(ConnectMark___c__DisplayClass103_0_TypeInfo);
  ConnectMark___c__DisplayClass103_0___ctor((ConnectMark___c__DisplayClass103_0_o *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = System_Action_TypeInfo;
  *(_DWORD *)(v7 + 24) = eventId;
  *(_DWORD *)(v7 + 28) = animationId;
  v17 = (System_Action_o *)sub_2213CCC(v16);
  System_Action___ctor(v17, (Il2CppObject *)v7, Method_ConnectMark___c__DisplayClass103_0__LoadOtherMark_b__0__, 0);
  ConnectMark__LoadEventAnimationIcon(this, eventId, v17, v18);
}


System_Collections_IEnumerator_o *ConnectMark__MarkCR(
        ConnectMark_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596F1F9 & 1) == 0 )
  {
    sub_2213A60(&ConnectMark__MarkCR_d__83_TypeInfo);
    byte_596F1F9 = 1;
  }
  v5 = sub_2213CCC(ConnectMark__MarkCR_d__83_TypeInfo);
  ConnectMark__MarkCR_d__83___ctor((ConnectMark__MarkCR_d__83_o *)v5, 0, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = message;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)message, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void ConnectMark__MaskClickInit(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *arrowInfo; // x0

  arrowInfo = this->fields.arrowInfo;
  this->fields.isMaskClickWait = 1;
  if ( !arrowInfo
    || (UnityEngine_GameObject__SetActive(arrowInfo, 0, 0), (arrowInfo = this->fields.miniProgressBarBase) == 0) )
  {
    sub_2213CDC(arrowInfo, method);
  }
  UnityEngine_GameObject__SetActive(arrowInfo, 0, 0);
}


bool ConnectMark__NeedToShowMarkDefinitely(
        ConnectMark_o *this,
        System_Nullable_ConnectMarkFadeInLagType__o type,
        const MethodInfo *method)
{
  if ( (byte_596F1F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_ConnectMarkFadeInLagType__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_ConnectMarkFadeInLagType__get_HasValue__);
    byte_596F1F5 = 1;
  }
  return type.fields.hasValue && HIDWORD(*(unsigned __int64 *)&type) == 0;
}


void ConnectMark__NextServantProfile(ConnectMark_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ServantCommentEntity_array *servantCommentEntityList; // x8
  __int64 v4; // x1
  RubyLabelHelper_o *rubyLabelHelper; // x0

  servantCommentEntityList = this->fields.servantCommentEntityList;
  v4 = (unsigned int)(this->fields.svtProfileIndex + 1);
  this->fields.svtProfileIndex = v4;
  if ( !servantCommentEntityList )
    sub_2213CDC(this, v4);
  if ( (int)v4 > LODWORD(servantCommentEntityList->max_length) - 1 )
  {
    LODWORD(v4) = 0;
    this->fields.svtProfileIndex = 0;
  }
  rubyLabelHelper = this->fields.rubyLabelHelper;
  if ( rubyLabelHelper )
  {
    RubyLabelHelper__ReleasePrefabs(rubyLabelHelper, 0);
    LODWORD(v4) = this->fields.svtProfileIndex;
  }
  ConnectMark__SetServantProfile(this, v4, v2);
}


void ConnectMark__OnClickCancel(ConnectMark_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  CommonUI_o *v4; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x0
  CommonUI_o **v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct ConnectMark_DownloadCancelDialogData_o *downloadCancelDialogData; // x8
  CommonUI_o *v23; // x22
  struct MovieFileMerge_o *MovieFileMerge_k__BackingField; // x9
  System_String_o *title; // x23
  System_String_o *message; // x24
  System_String_o *decideText; // x25
  System_String_o *cancelText; // x26
  CommonConfirmDialog_ClickDelegate_o *v29; // x27
  const MethodInfo *v30; // x3
  struct ConnectMark_DownloadCancelDialogData_o *v31; // x8

  if ( (byte_596F202 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_ConnectMark_OnClickCancel__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ConnectMark___c__DisplayClass95_0__OnClickCancel_b__0__);
    sub_2213A60(&ConnectMark___c__DisplayClass95_0_TypeInfo);
    byte_596F202 = 1;
  }
  v3 = sub_2213CCC(ConnectMark___c__DisplayClass95_0_TypeInfo);
  ConnectMark___c__DisplayClass95_0___ctor((ConnectMark___c__DisplayClass95_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_17;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.isLoadCancel )
    return;
  v12 = Method_ConnectMark_OnClickCancel__;
  if ( (*((_BYTE *)Method_ConnectMark_OnClickCancel__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_2213A78(Method_ConnectMark_OnClickCancel__);
  v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  v15 = (CommonUI_o **)(v3 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Instance, v16, v17, v18, v19, v20, v21);
  downloadCancelDialogData = this->fields.downloadCancelDialogData;
  if ( downloadCancelDialogData )
  {
    v23 = *v15;
    if ( this->fields.mode == 9 )
    {
      if ( !v23 )
        goto LABEL_17;
      MovieFileMerge_k__BackingField = v23->fields._MovieFileMerge_k__BackingField;
      if ( !MovieFileMerge_k__BackingField )
        goto LABEL_17;
      MovieFileMerge_k__BackingField->fields.isDownloadPause = 1;
    }
    title = downloadCancelDialogData->fields.title;
    message = downloadCancelDialogData->fields.message;
    decideText = downloadCancelDialogData->fields.decideText;
    cancelText = downloadCancelDialogData->fields.cancelText;
    v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v29,
      (Il2CppObject *)v3,
      Method_ConnectMark___c__DisplayClass95_0__OnClickCancel_b__0__,
      v30);
    if ( v23 )
    {
      CommonUI__OpenConfirmDialogOnFade(v23, title, message, decideText, cancelText, v29, 0, 0, 15.0, 0, 0, 1, 0);
      v31 = this->fields.downloadCancelDialogData;
      if ( v31 )
      {
        v4 = *v15;
        if ( *v15 )
        {
          CommonUI__SetConfirmDialogForceCancelSE(v4, v31->fields.forceCancelSE, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_2213CDC(v4, v5);
  }
  ConnectMark__DownloadCancel(this, v5);
}


void ConnectMark__OnClickLeftArrow(ConnectMark_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596F1FD & 1) == 0 )
  {
    sub_2213A60(&Method_ConnectMark_OnClickLeftArrow__);
    byte_596F1FD = 1;
  }
  v3 = Method_ConnectMark_OnClickLeftArrow__;
  if ( (*((_BYTE *)Method_ConnectMark_OnClickLeftArrow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ConnectMark_OnClickLeftArrow__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ConnectMark__BeforeServantoProfile(this, v5);
}


void ConnectMark__OnClickMask(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchInfoBase; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_596F205 & 1) == 0 )
  {
    sub_2213A60(&Method_ConnectMark_OnClickMask__);
    byte_596F205 = 1;
  }
  if ( this->fields.isMaskClickWait )
  {
    touchInfoBase = this->fields.touchInfoBase;
    if ( !touchInfoBase )
      goto LABEL_14;
    if ( UnityEngine_GameObject__get_activeSelf(touchInfoBase, 0) )
    {
      touchInfoBase = this->fields.touchInfoBase;
      this->fields.isMaskClickWait = 0;
      if ( touchInfoBase )
      {
        UnityEngine_GameObject__SetActive(touchInfoBase, 0, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(touchInfoBase, method);
    }
  }
  else if ( this->fields.isMaskClickTip && ConnectMark__SetTipMessage(this, method) )
  {
    v4 = Method_ConnectMark_OnClickMask__;
    if ( (*((_BYTE *)Method_ConnectMark_OnClickMask__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_ConnectMark_OnClickMask__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  }
}


void ConnectMark__OnClickRightArrow(ConnectMark_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596F1FE & 1) == 0 )
  {
    sub_2213A60(&Method_ConnectMark_OnClickRightArrow__);
    byte_596F1FE = 1;
  }
  v3 = Method_ConnectMark_OnClickRightArrow__;
  if ( (*((_BYTE *)Method_ConnectMark_OnClickRightArrow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ConnectMark_OnClickRightArrow__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ConnectMark__NextServantProfile(this, v5);
}


void ConnectMark__OnEndAlphaTween(ConnectMark_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *markBase; // x0

  markBase = this->fields.markBase;
  if ( !markBase )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(markBase, 0, 0);
}


System_Collections_IEnumerator_o *ConnectMark__ProgressBarCR(ConnectMark_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596F200 & 1) == 0 )
  {
    sub_2213A60(&ConnectMark__ProgressBarCR_d__92_TypeInfo);
    byte_596F200 = 1;
  }
  v3 = sub_2213CCC(ConnectMark__ProgressBarCR_d__92_TypeInfo);
  ConnectMark__ProgressBarCR_d__92___ctor((ConnectMark__ProgressBarCR_d__92_o *)v3, 0, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void ConnectMark__ReleaseBackImage(ConnectMark_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *loadBackTextureData; // x20
  __int64 v5; // x1
  struct UITexture_o *loadBackTexture; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596F1F8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F1F8 = 1;
  }
  loadBackTextureData = (UnityEngine_Object_o *)this->fields.loadBackTextureData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(loadBackTextureData, 0, 0) )
  {
    loadBackTexture = this->fields.loadBackTexture;
    if ( !loadBackTexture )
      sub_2213CDC(0, v5);
    ((void (__fastcall *)(struct UITexture_o *, _QWORD, const MethodInfo *))loadBackTexture->klass->vtable._27_set_mainTexture.methodPtr)(
      loadBackTexture,
      0,
      loadBackTexture->klass->vtable._27_set_mainTexture.method);
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)this->fields.loadBackTextureData, 0);
    this->fields.loadBackTextureData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadBackTextureData, 0, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void ConnectMark__SetActiveMiniProgressCancelButton(ConnectMark_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Component_o *miniProgressLoadCancelButton; // x0

  miniProgressLoadCancelButton = (UnityEngine_Component_o *)this->fields.miniProgressLoadCancelButton;
  if ( !miniProgressLoadCancelButton
    || (miniProgressLoadCancelButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                    miniProgressLoadCancelButton,
                                                                    0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniProgressLoadCancelButton, enabled, 0),
        (miniProgressLoadCancelButton = (UnityEngine_Component_o *)this->fields.miniProgressLoadCancelButton) == 0) )
  {
    sub_2213CDC(miniProgressLoadCancelButton, enabled);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)miniProgressLoadCancelButton, enabled, 0);
}


// local variable allocation has failed, the output may be wrong!
void ConnectMark__SetConnect(ConnectMark_o *this, bool isConnect, const MethodInfo *method)
{
  int32_t connectCount; // w8
  int32_t v4; // w8
  bool v5; // vf
  int32_t v6; // w8

  connectCount = this->fields.connectCount;
  if ( isConnect )
  {
    v4 = connectCount + 1;
    this->fields.connectCount = v4;
    if ( v4 >= 2 )
      return;
    goto LABEL_6;
  }
  v5 = __OFSUB__(connectCount, 1);
  v6 = connectCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.connectCount = v6;
    if ( !v6 )
    {
LABEL_6:
      if ( (this->fields.mode | 8) == 8 )
        ConnectMark__SetDispMode(this, (const MethodInfo *)isConnect);
    }
  }
}


void ConnectMark__SetDefaultMark(ConnectMark_o *this, const MethodInfo *method)
{
  UISprite_o *markSprite; // x0
  const MethodInfo *v4; // x2

  markSprite = this->fields.markSprite;
  if ( !markSprite
    || (UISprite__set_atlas(markSprite, this->fields.systemUIAtlas, 0),
        markSprite = this->fields.markSprite,
        *(_QWORD *)&this->fields.CurrentEventId = 0,
        !markSprite)
    || (markSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)markSprite, 0)) == 0 )
  {
    sub_2213CDC(markSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)markSprite, 1, 0);
  ConnectMark__HideEventAnimationIcons(this, 0, v4);
}


void ConnectMark__SetDispMode(ConnectMark_o *this, const MethodInfo *method)
{
  int32_t mode; // w8
  System_String_o *v4; // x20
  int v5; // w22
  __int64 *v6; // x8
  System_Collections_IEnumerator_o *markCRW; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_GameObject_o *maskBase; // x0
  const MethodInfo *v15; // x2
  struct System_Collections_IEnumerator_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  TweenAlpha_o *v25; // x20
  System_Nullable_ConnectMarkFadeInLagType__o fadeInLagType; // x1
  bool v27; // w0
  float value; // s0
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  EventDelegate_Callback_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Collections_IEnumerator_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  unsigned int v46; // w8
  bool v47; // w1

  if ( (byte_596F1F6 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_ConnectMark_OnEndAlphaTween__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_2213A60(&StringLiteral_3929/*"CONNECTING"*/);
    sub_2213A60(&StringLiteral_13941/*"THINKING"*/);
    sub_2213A60(&StringLiteral_8639/*"LOADING"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F1F6 = 1;
  }
  mode = this->fields.mode;
  v4 = 0;
  v5 = 0;
  if ( mode > 7 )
  {
    if ( mode != 8 )
    {
      if ( mode != 9 )
      {
        if ( mode != 10 )
          goto LABEL_16;
        v6 = &StringLiteral_13941/*"THINKING"*/;
        goto LABEL_15;
      }
LABEL_11:
      v5 = 1;
      v4 = (System_String_o *)StringLiteral_3929/*"CONNECTING"*/;
      goto LABEL_16;
    }
    if ( this->fields.connectCount < 1 )
      v6 = (__int64 *)&StringLiteral_1/*""*/;
    else
      v6 = &StringLiteral_3929/*"CONNECTING"*/;
LABEL_15:
    v4 = (System_String_o *)*v6;
    v5 = 0;
    goto LABEL_16;
  }
  if ( (unsigned int)(mode - 4) < 4 )
    goto LABEL_11;
  if ( (unsigned int)(mode - 1) < 3 )
  {
    v6 = &StringLiteral_8639/*"LOADING"*/;
    goto LABEL_15;
  }
  if ( !mode )
  {
    v5 = 0;
    if ( this->fields.connectCount >= 1 )
      v4 = (System_String_o *)StringLiteral_3929/*"CONNECTING"*/;
    else
      v4 = 0;
  }
LABEL_16:
  markCRW = this->fields.markCRW;
  if ( markCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, markCRW, 0);
    this->fields.markCRW = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.markCRW, 0, v8, v9, v10, v11, v12, v13);
  }
  if ( v4 )
  {
    maskBase = this->fields.maskBase;
    this->fields.isBusy = 1;
    if ( !maskBase )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(maskBase, 1, 0);
    v16 = ConnectMark__MarkCR(this, v4, v15);
    this->fields.markCRW = v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.markCRW, (int32_t)v16, v17, v18, v19, v20, v21, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, this->fields.markCRW, 0);
  }
  else
  {
    maskBase = this->fields.maskBase;
    if ( !maskBase )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    maskBase = this->fields.tipsBase;
    if ( !maskBase )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    maskBase = this->fields.profileBase;
    if ( !maskBase )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    maskBase = this->fields.touchInfoBase;
    if ( !maskBase )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    ConnectMark__ReleaseBackImage(this, v23);
    maskBase = this->fields.markBase;
    if ( !maskBase )
      goto LABEL_50;
    maskBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskBase,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !maskBase )
      goto LABEL_50;
    HIDWORD(maskBase[2].klass) = 0;
    v25 = (TweenAlpha_o *)maskBase;
    fadeInLagType = this->fields.fadeInLagType;
    v27 = ConnectMark__NeedToShowMarkDefinitely((ConnectMark_o *)maskBase, fadeInLagType, v24);
    value = 1.0;
    if ( !v27 )
      value = TweenAlpha__get_value(v25, 0);
    v25->fields.from = value;
    v25->fields.to = 0.0;
    UITweener__ResetToBeginning((UITweener_o *)v25, 0);
    UITweener__PlayForward((UITweener_o *)v25, 0);
    onFinished = v25->fields.onFinished;
    v30 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v30, (Il2CppObject *)this, Method_ConnectMark_OnEndAlphaTween__, 0);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v31, v32);
    EventDelegate__Set_56322328(onFinished, v30, 0);
    this->fields.fadeInLagType = 0;
  }
  markCRW = this->fields.progressBarCRW;
  if ( markCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, markCRW, 0);
    this->fields.progressBarCRW = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.progressBarCRW, 0, v33, v34, v35, v36, v37, v38);
  }
  if ( v5 )
  {
    this->fields.isLoadCancel = 0;
    *(_WORD *)&this->fields.isBusy = 1;
    v39 = ConnectMark__ProgressBarCR(this, (const MethodInfo *)markCRW);
    this->fields.progressBarCRW = v39;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.progressBarCRW,
      (int32_t)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756(
      (UnityEngine_MonoBehaviour_o *)this,
      this->fields.progressBarCRW,
      0);
  }
  else
  {
    maskBase = this->fields.progressBarBase;
    if ( !maskBase )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    maskBase = this->fields.miniProgressBarBase;
    if ( !maskBase )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
  }
  v46 = this->fields.mode;
  if ( v46 > 9 || ((1 << v46) & 0x2A0) == 0 )
  {
    maskBase = this->fields.arrowInfo;
    if ( maskBase )
    {
      v47 = 0;
      goto LABEL_45;
    }
LABEL_50:
    sub_2213CDC(maskBase, markCRW);
  }
  maskBase = this->fields.arrowInfo;
  if ( !maskBase )
    goto LABEL_50;
  v47 = 1;
LABEL_45:
  UnityEngine_GameObject__SetActive(maskBase, v47, 0);
}


void ConnectMark__SetDownloadCancelDialogData(
        ConnectMark_o *this,
        ConnectMark_DownloadCancelDialogData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.downloadCancelDialogData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.downloadCancelDialogData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ConnectMark__SetMarkFadeInLag(ConnectMark_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Nullable_ConnectMarkFadeInLagType__o *p_fadeInLagType; // x20
  System_Nullable_Int32Enum__o v6; // x0
  struct System_Nullable_ConnectMarkFadeInLagType__o v7; // x8
  int32_t value; // w1
  struct System_Nullable_ConnectMarkFadeInLagType__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F1F3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_ConnectMarkFadeInLagType__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_ConnectMarkFadeInLagType___ctor__);
    sub_2213A60(&Method_System_Nullable_ConnectMarkFadeInLagType__get_HasValue__);
    byte_596F1F3 = 1;
  }
  p_fadeInLagType = &this->fields.fadeInLagType;
  v6 = (System_Nullable_Int32Enum__o)&v9;
  v7 = *p_fadeInLagType;
  v9 = 0;
  if ( v7.fields.hasValue )
    value = v7.fields.value;
  else
    value = type;
  System_Nullable_Int32Enum____ctor(
    v6,
    value,
    (const MethodInfo_45E4698 *)Method_System_Nullable_ConnectMarkFadeInLagType___ctor__);
  *p_fadeInLagType = v9;
}


void ConnectMark__SetMiniProgress(ConnectMark_o *this, float progress, const MethodInfo *method)
{
  UIProgressBar_o *miniProgressBarSlider; // x0

  miniProgressBarSlider = (UIProgressBar_o *)this->fields.miniProgressBarSlider;
  if ( !miniProgressBarSlider )
    sub_2213CDC(0, method);
  UIProgressBar__set_value(miniProgressBarSlider, progress, 0);
}


void ConnectMark__SetMode(ConnectMark_o *this, int32_t mode, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1

  if ( (unsigned int)mode > 0xA || ((1 << mode) & 0x50F) == 0 || this->fields.mode != mode )
  {
    this->fields.downloadCancelDialogData = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.downloadCancelDialogData,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.mode = mode;
    ConnectMark__SetDispMode(this, v10);
  }
}


void ConnectMark__SetOtherMark(ConnectMark_o *this, int32_t eventId, int32_t animationId, const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  bool v18; // w0
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3

  if ( (byte_596F209 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_2213A60(&Method_ConnectMark___c__DisplayClass106_0__SetOtherMark_b__0__);
    sub_2213A60(&ConnectMark___c__DisplayClass106_0_TypeInfo);
    byte_596F209 = 1;
  }
  v7 = sub_2213CCC(ConnectMark___c__DisplayClass106_0_TypeInfo);
  ConnectMark___c__DisplayClass106_0___ctor((ConnectMark___c__DisplayClass106_0_o *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = eventId;
  *(_DWORD *)(v7 + 28) = animationId;
  if ( eventId && animationId )
  {
    eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
    if ( eventAnimationIconDictionary
      && (v18 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
                  eventId,
                  (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__),
          eventId = *(_DWORD *)(v7 + 24),
          v18) )
    {
      ConnectMark__SetOtherMarkAfterLoad(this, *(_DWORD *)(v7 + 24), *(_DWORD *)(v7 + 28), v19);
    }
    else
    {
      v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)v7, Method_ConnectMark___c__DisplayClass106_0__SetOtherMark_b__0__, 0);
      ConnectMark__LoadEventAnimationIcon(this, eventId, v20, v21);
    }
  }
  else
  {
    ConnectMark__SetDefaultMark(this, v16);
  }
}


void ConnectMark__SetOtherMarkAfterLoad(
        ConnectMark_o *this,
        int32_t eventId,
        int32_t animationId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__o *eventAnimationIconDictionary; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *gameObject; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Item; // x22
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x22
  UISprite_o *markSprite; // x23
  const MethodInfo *v19; // x2
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F20A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_596F20A = 1;
  }
  eventAnimationIconDictionary = this->fields.eventAnimationIconDictionary;
  if ( eventAnimationIconDictionary
    && System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventAnimationIconDictionary,
         eventId,
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__) )
  {
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.eventAnimationIconDictionary;
    if ( !gameObject )
      goto LABEL_23;
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             gameObject,
             eventId,
             (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                           (UnityEngine_Object_o *)Item,
                                                                           0,
                                                                           0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_23;
      if ( AnimationLoadingIcon__HasAnimation((AnimationLoadingIcon_o *)Item, animationId, 0) )
      {
        LODWORD(Item[2].klass) = animationId;
        gameObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)Item,
                                                                               0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          AnimationLoadingIcon__PlayAnimation((AnimationLoadingIcon_o *)Item, animationId, 0);
          ConnectMark__HideEventAnimationIcons(this, eventId, v13);
          gameObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.markSprite;
          if ( gameObject )
          {
            gameObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)gameObject,
                                                                                   0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
              return;
            }
          }
        }
LABEL_23:
        sub_2213CDC(gameObject, v8);
      }
    }
  }
  v21 = eventId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
  v20 = animationId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
  v16 = (Il2CppObject *)System_String__Format_75697880((System_String_o *)StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/, v14, v15, 0);
  if ( this->fields.EventUIAtlasDictionary
    && (v17 = v16,
        System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.EventUIAtlasDictionary,
          v16,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__)) )
  {
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.EventUIAtlasDictionary;
    if ( !gameObject )
      goto LABEL_23;
    markSprite = this->fields.markSprite;
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                           (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
                                                                           v17,
                                                                           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__get_Item__);
    if ( !markSprite )
      goto LABEL_23;
    UISprite__set_atlas(markSprite, (UIAtlas_o *)gameObject, 0);
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.markSprite;
    this->fields.CurrentEventId = eventId;
    this->fields.CurrentAnimationId = animationId;
    if ( !gameObject )
      goto LABEL_23;
    gameObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)gameObject,
                                                                           0);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    ConnectMark__HideEventAnimationIcons(this, 0, v19);
  }
  else
  {
    ConnectMark__SetDefaultMark(this, v8);
  }
}


void ConnectMark__SetServantProfile(ConnectMark_o *this, int32_t index, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_String_o *v6; // x1
  struct ServantCommentEntity_array *servantCommentEntityList; // x8
  ServantCommentEntity_o *v8; // x20
  ServantEntity_o *v9; // x21
  System_String_o *OverwriteProfileName; // x22
  UILabel_o *profileNameLabel; // x23
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *profileClassLabel; // x22
  System_String_o *ClassName; // x0
  RubyLabelHelper_o *rubyLabelHelper; // x21
  UnityEngine_GameObject_o *mainPrefab; // x22
  UnityEngine_GameObject_o *rubyPrefab; // x23
  UILabel_o *profileMessageLabel; // x21
  RubyLabelHelper_o *v21; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  float v28; // s0
  float x; // s11
  float y; // s8
  float z; // s9
  float v32; // s10
  __int64 v33; // x1
  __int64 v34; // x2
  UIWidget_o *v35; // x19
  int32_t v36; // w1
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F1FB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&RubyLabelHelper_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_26810/*"クラス："*/);
    byte_596F1FB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  servantCommentEntityList = this->fields.servantCommentEntityList;
  if ( !servantCommentEntityList )
    goto LABEL_41;
  if ( LODWORD(servantCommentEntityList->max_length) <= index )
    sub_2213CE4(Instance);
  v8 = servantCommentEntityList->m_Items[index];
  if ( !v8 )
    goto LABEL_41;
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                v8->fields.svtId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.profileMessageLabel )
    goto LABEL_41;
  v9 = (ServantEntity_o *)Instance;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.profileMessageLabel, 1, 0);
  Instance = (DataManager_o *)this->fields.profileBase;
  if ( !Instance )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  if ( v9 )
    OverwriteProfileName = ServantEntity__GetOverwriteProfileName(v9, 0);
  else
    OverwriteProfileName = 0;
  profileNameLabel = this->fields.profileNameLabel;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(OverwriteProfileName, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)ConnectMark__GetServantNameByProfileSaveData((ConnectMark_o *)Instance, v9, v12);
    OverwriteProfileName = (System_String_o *)Instance;
  }
  if ( !profileNameLabel )
    goto LABEL_41;
  UILabel__set_text(profileNameLabel, OverwriteProfileName, 0);
  profileClassLabel = this->fields.profileClassLabel;
  if ( v9 )
  {
    ClassName = ServantEntity__getClassName(v9, 0);
    Instance = (DataManager_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_26810/*"クラス："*/, ClassName, 0);
    v6 = (System_String_o *)Instance;
    if ( !profileClassLabel )
      goto LABEL_41;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
      Instance = (DataManager_o *)LocalizationManager_TypeInfo;
    }
    v6 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields._DispLog + 32LL);
    if ( !profileClassLabel )
      goto LABEL_41;
  }
  UILabel__set_text(profileClassLabel, v6, 0);
  rubyLabelHelper = this->fields.rubyLabelHelper;
  if ( rubyLabelHelper )
  {
    Instance = (DataManager_o *)ServantCommentEntity__GetComment(v8, 0);
  }
  else
  {
    rubyPrefab = this->fields.rubyPrefab;
    mainPrefab = this->fields.mainPrefab;
    profileMessageLabel = this->fields.profileMessageLabel;
    v21 = (RubyLabelHelper_o *)sub_2213CCC(RubyLabelHelper_TypeInfo);
    RubyLabelHelper___ctor(v21, profileMessageLabel, mainPrefab, rubyPrefab, 0);
    this->fields.rubyLabelHelper = v21;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rubyLabelHelper,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    rubyLabelHelper = this->fields.rubyLabelHelper;
    Instance = (DataManager_o *)ServantCommentEntity__GetComment(v8, 0);
    if ( !rubyLabelHelper )
      goto LABEL_41;
  }
  RubyLabelHelper__SetText(rubyLabelHelper, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.rubyLabelHelper;
  if ( !Instance )
    goto LABEL_41;
  LODWORD(v28) = *(_QWORD *)&RubyLabelHelper__get_Size((RubyLabelHelper_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.profileMessageLabel;
  if ( !Instance )
    goto LABEL_41;
  x = this->fields.svtProfileMsgPos.fields.x;
  y = this->fields.svtProfileMsgPos.fields.y;
  z = this->fields.svtProfileMsgPos.fields.z;
  v32 = v28;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_41;
  v37.fields.z = z;
  v37.fields.x = (float)(x + (float)((float)(560.0 - v32) * 0.5)) + 1.0;
  v37.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v37, 0);
  Instance = (DataManager_o *)this->fields.profileMessageLabel;
  if ( !Instance )
    goto LABEL_41;
  UIWidget__set_width((UIWidget_o *)Instance, 560, 0);
  v35 = (UIWidget_o *)this->fields.profileMessageLabel;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v33, v34);
  Instance = (DataManager_o *)FSUtility__IsUnderVista(0);
  if ( !v35 )
LABEL_41:
    sub_2213CDC(Instance, v6);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v36 = 360;
  else
    v36 = 350;
  UIWidget__set_height(v35, v36, 0);
}


bool ConnectMark__SetTipMessage(ConnectMark_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x22
  int32_t Sum; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t v9; // w0
  Il2CppObject *Entity; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *tipsMessageLabel; // x22
  Il2CppObject *v14; // x23

  if ( (byte_596F1FF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TipsBattleMaster___);
    sub_2213A60(&Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3939/*"CONNECT_TIP_MESSAGE"*/);
    byte_596F1FF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TipsBattleMaster___);
  if ( !Instance )
    goto LABEL_18;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Sum = TipsBattleMaster__getSum((TipsBattleMaster_o *)Instance, 0);
  v7 = Sum;
  if ( Sum >= 1 )
  {
    if ( Sum == 1 )
    {
      v8 = 1;
    }
    else
    {
      do
      {
        v9 = UnityEngine_Random__Range_83400680(1, v7 + 1, 0);
        if ( v9 >= v7 )
          v8 = v7;
        else
          v8 = v9;
      }
      while ( this->fields.tipNum == v8 );
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               v5,
               v8,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int__GetEntity__);
    tipsMessageLabel = this->fields.tipsMessageLabel;
    v14 = Entity;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3939/*"CONNECT_TIP_MESSAGE"*/, 0);
    if ( v14 )
    {
      Instance = (DataManager_o *)System_String__Format((System_String_o *)Instance, (Il2CppObject *)v14[1].monitor, 0);
      if ( tipsMessageLabel )
      {
        UILabel__set_text(tipsMessageLabel, (System_String_o *)Instance, 0);
        this->fields.tipNum = v8;
        return v7 > 0;
      }
    }
LABEL_18:
    sub_2213CDC(Instance, v4);
  }
  return v7 > 0;
}


void ConnectMark_DownloadCancelDialogData___ctor(
        ConnectMark_DownloadCancelDialogData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark_ProfilePushData___ctor(ConnectMark_ProfilePushData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.priority = -1;
  *(_QWORD *)&this->fields.svtId = -1;
}


void ConnectMark__MarkCR_d__83___ctor(ConnectMark__MarkCR_d__83_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ConnectMark__MarkCR_d__83__MoveNext(ConnectMark__MarkCR_d__83_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct ConnectMark_o *_4__this; // x20
  UnityEngine_Animation_o *tenText_5__4; // x0
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_simpleAnimation_5__2; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x0
  UnityEngine_Animation_o **p_an_5__3; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  _BOOL4 v28; // w26
  UnityEngine_Object_o *simpleAnimation_5__2; // x21
  UnityEngine_WaitForEndOfFrame_o *v30; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w8
  UnityEngine_WaitForEndOfFrame_o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  UnityEngine_WaitForSeconds_o *v46; // x20
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  UnityEngine_WaitForEndOfFrame_o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  UnityEngine_Object_o *v60; // x21
  __int64 v61; // x1
  UnityEngine_Object_o *v62; // x21
  UnityEngine_Object_o *v63; // x21
  bool IsNullOrEmpty; // w8
  __int64 v65; // x1
  UnityEngine_Object_o *v66; // x23
  UITweener_o *v67; // x23
  System_Collections_Generic_List_EventDelegate__o *klass; // x24
  EventDelegate_Callback_o *v69; // x25
  __int64 v70; // x1
  System_Nullable_ConnectMarkFadeInLagType__o fadeInLagType; // x1
  __int64 v72; // x1
  UnityEngine_Object_o *v73; // x23
  UnityEngine_Object_o *v74; // x23
  UnityEngine_Object_o *v75; // x23
  int v76; // w8
  SimpleAnimation_o *v77; // x21
  __int64 v78; // x8
  UnityEngine_Animation_o *v79; // x21
  __int64 v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct System_String_o *v87; // x1
  UnityEngine_Object_o *an_5__3; // x21
  UnityEngine_Animation_o *v89; // x22
  UILabel_o *markLabel; // x20
  UnityEngine_WaitForEndOfFrame_o *v91; // x20
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  UnityEngine_Object_o *v98; // x21
  UnityEngine_WaitForEndOfFrame_o *v99; // x20
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  UnityEngine_Object_o *v106; // x22
  UnityEngine_Animation_o *v107; // x22
  __int64 v108; // x8
  UnityEngine_AnimationState_o *v109; // x22
  System_String_o *name; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  UnityEngine_Animation_o *v117; // x22
  unsigned int mode; // w8
  RubyLabelHelper_o *rubyLabelHelper; // x0
  unsigned int v120; // w8
  UnityEngine_WaitForEndOfFrame_o *v121; // x20
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  bool v128; // w8
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FBF7 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&Method_ConnectMark_OnEndAlphaTween__);
    sub_2213A60(&ConnectMark_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_13870/*"System/tips_back02"*/);
    sub_2213A60(&StringLiteral_13869/*"System/tips_back01"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1063/*"."*/);
    byte_596FBF7 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  tenText_5__4 = 0;
  if ( _1__state > 3 )
  {
    if ( _1__state > 5 )
    {
      if ( _1__state != 6 )
      {
        if ( _1__state != 7 )
          return (char)tenText_5__4;
        this->fields.__1__state = -1;
        goto LABEL_38;
      }
      this->fields.__1__state = -1;
    }
    else
    {
      if ( _1__state == 4 )
      {
        this->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_162;
        goto LABEL_35;
      }
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_162;
      if ( !_4__this->fields.isMaskClickWait )
      {
        tenText_5__4 = (UnityEngine_Animation_o *)this->fields._tenText_5__4;
        if ( !tenText_5__4 )
          goto LABEL_162;
        v87 = SLODWORD(tenText_5__4->fields.m_CachedPtr) <= 2
            ? System_String__Concat_75651716((System_String_o *)tenText_5__4, (System_String_o *)StringLiteral_1063/*"."*/, 0)
            : (struct System_String_o *)StringLiteral_1/*""*/;
        this->fields._tenText_5__4 = v87;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._tenText_5__4,
          (int32_t)v87,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        markLabel = _4__this->fields.markLabel;
        tenText_5__4 = (UnityEngine_Animation_o *)System_String__Concat_75651716(
                                                    this->fields.message,
                                                    this->fields._tenText_5__4,
                                                    0);
        if ( !markLabel )
          goto LABEL_162;
        UILabel__set_text(markLabel, (System_String_o *)tenText_5__4, 0);
        v91 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v91, 0);
        this->fields.__2__current = (Il2CppObject *)v91;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
          (int32_t)v91,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
        v37 = 7;
LABEL_150:
        LOBYTE(tenText_5__4) = 1;
        this->fields.__1__state = v37;
        return (char)tenText_5__4;
      }
      tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.markBase;
      if ( !tenText_5__4 )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 0, 0);
      tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.touchInfoBase;
      if ( !tenText_5__4 )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 1, 0);
    }
    v53 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v53, 0);
    this->fields.__2__current = (Il2CppObject *)v53;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    v37 = 6;
    goto LABEL_150;
  }
  if ( _1__state > 1 )
  {
    if ( _1__state != 2 )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_162;
      if ( !_4__this->fields.isLoadPause )
        goto LABEL_108;
      simpleAnimation_5__2 = (UnityEngine_Object_o *)this->fields._simpleAnimation_5__2;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(simpleAnimation_5__2, 0, 0) )
      {
        tenText_5__4 = (UnityEngine_Animation_o *)this->fields._simpleAnimation_5__2;
        if ( !tenText_5__4 )
          goto LABEL_162;
        SimpleAnimation__Stop((SimpleAnimation_o *)tenText_5__4, 0);
      }
      else
      {
        an_5__3 = (UnityEngine_Object_o *)this->fields._an_5__3;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(an_5__3, 0, 0) )
        {
          tenText_5__4 = this->fields._an_5__3;
          if ( !tenText_5__4 )
            goto LABEL_162;
          UnityEngine_Animation__Stop(tenText_5__4, 0);
        }
      }
LABEL_35:
      if ( _4__this->fields.isLoadPause )
      {
        v38 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v38, 0);
        this->fields.__2__current = (Il2CppObject *)v38;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
          (int32_t)v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        v37 = 4;
        goto LABEL_150;
      }
      v60 = (UnityEngine_Object_o *)this->fields._an_5__3;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(v60, 0, 0) )
        goto LABEL_167;
      v62 = (UnityEngine_Object_o *)this->fields._simpleAnimation_5__2;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
      if ( UnityEngine_Object__op_Inequality(v62, 0, 0) )
      {
LABEL_167:
        if ( _4__this->fields.markAnimationName )
        {
          v63 = (UnityEngine_Object_o *)this->fields._simpleAnimation_5__2;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
          if ( UnityEngine_Object__op_Inequality(v63, 0, 0) )
          {
            tenText_5__4 = (UnityEngine_Animation_o *)this->fields._simpleAnimation_5__2;
            if ( !tenText_5__4 )
              goto LABEL_162;
            SimpleAnimation__Play_78552168((SimpleAnimation_o *)tenText_5__4, _4__this->fields.markAnimationName, 0);
          }
          else
          {
            v98 = (UnityEngine_Object_o *)this->fields._an_5__3;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
            if ( UnityEngine_Object__op_Inequality(v98, 0, 0) )
            {
              tenText_5__4 = this->fields._an_5__3;
              if ( !tenText_5__4 )
                goto LABEL_162;
              UnityEngine_Animation__Play_83078544(tenText_5__4, _4__this->fields.markAnimationName, 0);
            }
          }
        }
      }
LABEL_108:
      v99 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v99, 0);
      this->fields.__2__current = (Il2CppObject *)v99;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v99,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v37 = 5;
      goto LABEL_150;
    }
    v45 = (int)StringLiteral_1/*""*/;
    this->fields._tenText_5__4 = (struct System_String_o *)StringLiteral_1/*""*/;
    this->fields.__1__state = -1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._tenText_5__4, v45, v2, v3, v4, v5, v6, v7);
LABEL_38:
    v46 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v46, 1.0, 0);
    this->fields.__2__current = (Il2CppObject *)v46;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    v37 = 3;
    goto LABEL_150;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_162;
    tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.touchInfoBase;
    _4__this->fields.tipNum = -1;
    *(_WORD *)&_4__this->fields.isMaskClickWait = 0;
    if ( !tenText_5__4 )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 0, 0);
    v30 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v30, 0);
    this->fields.__2__current = (Il2CppObject *)v30;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    v37 = 1;
    goto LABEL_150;
  }
  if ( _1__state != 1 )
    return (char)tenText_5__4;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_162;
  tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.markSprite;
  if ( !tenText_5__4 )
    goto LABEL_162;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)tenText_5__4,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimation_5__2 = &this->fields._simpleAnimation_5__2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._simpleAnimation_5__2,
    (int32_t)Component_object,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.markSprite;
  if ( !tenText_5__4 )
    goto LABEL_162;
  v20 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)tenText_5__4,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields._an_5__3 = (struct UnityEngine_Animation_o *)v20;
  p_an_5__3 = &this->fields._an_5__3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._an_5__3, (int32_t)v20, v22, v23, v24, v25, v26, v27);
  tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.markBase;
  if ( !tenText_5__4 )
    goto LABEL_162;
  v28 = !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)tenText_5__4, 0)
     || _4__this->fields.markAnimationName == 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.message, 0);
  tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.markBase;
  if ( IsNullOrEmpty )
  {
    if ( !tenText_5__4 )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 0, 0);
    tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.markLabel;
    if ( !tenText_5__4 )
      goto LABEL_162;
    UILabel__set_text((UILabel_o *)tenText_5__4, (System_String_o *)StringLiteral_1/*""*/, 0);
    v66 = (UnityEngine_Object_o *)*p_simpleAnimation_5__2;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
    if ( UnityEngine_Object__op_Inequality(v66, 0, 0) )
    {
      tenText_5__4 = (UnityEngine_Animation_o *)*p_simpleAnimation_5__2;
      if ( !*p_simpleAnimation_5__2 )
        goto LABEL_162;
      SimpleAnimation__Stop((SimpleAnimation_o *)tenText_5__4, 0);
    }
    else
    {
      v89 = *p_an_5__3;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v89, 0, 0) )
      {
        tenText_5__4 = *p_an_5__3;
        if ( !*p_an_5__3 )
          goto LABEL_162;
        UnityEngine_Animation__Stop(tenText_5__4, 0);
      }
    }
    goto LABEL_134;
  }
  if ( !tenText_5__4 )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 1, 0);
  tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.markBase;
  if ( !tenText_5__4 )
    goto LABEL_162;
  tenText_5__4 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)tenText_5__4,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !tenText_5__4 )
    goto LABEL_162;
  v130.fields.r = *((float *)&tenText_5__4[6].klass + 1);
  v130.fields.g = *(float *)&tenText_5__4[6].monitor;
  v130.fields.b = *((float *)&tenText_5__4[6].monitor + 1);
  v130.fields.a = 0.005;
  UIWidget__set_color((UIWidget_o *)tenText_5__4, v130, 0);
  tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.markBase;
  if ( !tenText_5__4 )
    goto LABEL_162;
  tenText_5__4 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)tenText_5__4,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !tenText_5__4 )
    goto LABEL_162;
  v67 = (UITweener_o *)tenText_5__4;
  klass = (System_Collections_Generic_List_EventDelegate__o *)tenText_5__4[3].klass;
  v69 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v69, (Il2CppObject *)_4__this, Method_ConnectMark_OnEndAlphaTween__, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v70);
  EventDelegate__Remove(klass, v69, 0);
  fadeInLagType = _4__this->fields.fadeInLagType;
  v67->fields.delay = ConnectMark__GetFadeInLagSecondByLagType(_4__this, fadeInLagType, 0);
  v67[1].klass = (UITweener_c *)0x3F8000003BA3D70ALL;
  UITweener__ResetToBeginning(v67, 0);
  UITweener__PlayForward(v67, 0);
  tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.markLabel;
  if ( !tenText_5__4 )
    goto LABEL_162;
  UILabel__set_text((UILabel_o *)tenText_5__4, this->fields.message, 0);
  v73 = (UnityEngine_Object_o *)this->fields._an_5__3;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
  if ( UnityEngine_Object__op_Inequality(v73, 0, 0) )
    goto LABEL_76;
  v74 = (UnityEngine_Object_o *)*p_simpleAnimation_5__2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v74, 0, 0) )
  {
LABEL_76:
    v75 = (UnityEngine_Object_o *)*p_simpleAnimation_5__2;
    v76 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( v28 )
    {
      if ( !v76 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(v75, 0, 0) )
      {
        v77 = *p_simpleAnimation_5__2;
        tenText_5__4 = (UnityEngine_Animation_o *)ConnectMark_TypeInfo;
        if ( !*(&ConnectMark_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo, method);
          tenText_5__4 = (UnityEngine_Animation_o *)ConnectMark_TypeInfo;
        }
        v78 = *(_QWORD *)(tenText_5__4[7].fields.m_CachedPtr + 8);
        if ( !v78 )
          goto LABEL_162;
        if ( *(_DWORD *)(v78 + 24) )
        {
          if ( !v77 )
            goto LABEL_162;
          tenText_5__4 = (UnityEngine_Animation_o *)SimpleAnimation__get_Item(v77, *(System_String_o **)(v78 + 32), 0);
          if ( !tenText_5__4 )
            goto LABEL_162;
          v79 = tenText_5__4;
          sub_200B6E4(18, SimpleAnimation_State_TypeInfo, tenText_5__4, 2);
          v80 = sub_200B5F0(9, SimpleAnimation_State_TypeInfo, v79);
          _4__this->fields.markAnimationName = (struct System_String_o *)v80;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&_4__this->fields.markAnimationName,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86);
LABEL_114:
          tenText_5__4 = (UnityEngine_Animation_o *)*p_simpleAnimation_5__2;
          if ( !*p_simpleAnimation_5__2 )
            goto LABEL_162;
          SimpleAnimation__Play_78552168((SimpleAnimation_o *)tenText_5__4, _4__this->fields.markAnimationName, 0);
          goto LABEL_134;
        }
LABEL_163:
        sub_2213CE4(tenText_5__4);
      }
      v106 = (UnityEngine_Object_o *)*p_an_5__3;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality(v106, 0, 0) )
        goto LABEL_134;
      v107 = *p_an_5__3;
      tenText_5__4 = (UnityEngine_Animation_o *)ConnectMark_TypeInfo;
      if ( !*(&ConnectMark_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo, method);
        tenText_5__4 = (UnityEngine_Animation_o *)ConnectMark_TypeInfo;
      }
      v108 = *(_QWORD *)(tenText_5__4[7].fields.m_CachedPtr + 8);
      if ( !v108 )
        goto LABEL_162;
      if ( !*(_DWORD *)(v108 + 24) )
        goto LABEL_163;
      if ( !v107 )
        goto LABEL_162;
      tenText_5__4 = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(
                                                  v107,
                                                  *(System_String_o **)(v108 + 32),
                                                  0);
      if ( !*p_an_5__3 )
        goto LABEL_162;
      v109 = (UnityEngine_AnimationState_o *)tenText_5__4;
      UnityEngine_Animation__set_wrapMode(*p_an_5__3, 2, 0);
      if ( !v109 )
        goto LABEL_162;
      name = UnityEngine_AnimationState__get_name(v109, 0);
      _4__this->fields.markAnimationName = name;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.markAnimationName,
        (int32_t)name,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
    }
    else
    {
      if ( !v76 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(v75, 0, 0) )
      {
        tenText_5__4 = (UnityEngine_Animation_o *)*p_simpleAnimation_5__2;
        if ( !*p_simpleAnimation_5__2 )
          goto LABEL_162;
        if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)tenText_5__4, 0) )
          goto LABEL_134;
        goto LABEL_114;
      }
      v117 = *p_an_5__3;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v117, 0, 0) )
        goto LABEL_134;
      tenText_5__4 = *p_an_5__3;
      if ( !*p_an_5__3 )
        goto LABEL_162;
      if ( UnityEngine_Animation__get_isPlaying(tenText_5__4, 0) )
        goto LABEL_134;
    }
    tenText_5__4 = *p_an_5__3;
    if ( !*p_an_5__3 )
      goto LABEL_162;
    UnityEngine_Animation__Play_83078544(tenText_5__4, _4__this->fields.markAnimationName, 0);
  }
LABEL_134:
  mode = _4__this->fields.mode;
  if ( mode <= 9 )
  {
    if ( ((1 << mode) & 0x2A8) != 0 )
    {
      if ( ConnectMark__InitServantProfileList(_4__this, 0) )
      {
        ConnectMark__SetServantProfile(_4__this, _4__this->fields.svtProfileIndex, 0);
        ConnectMark__LoadBackImage(_4__this, (System_String_o *)StringLiteral_13870/*"System/tips_back02"*/, 0);
        rubyLabelHelper = _4__this->fields.rubyLabelHelper;
        if ( rubyLabelHelper )
          RubyLabelHelper__ReleasePrefabs(rubyLabelHelper, 0);
        ConnectMark__SetServantProfile(_4__this, _4__this->fields.svtProfileIndex, 0);
      }
      else
      {
        tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.profileBase;
        if ( !tenText_5__4 )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 0, 0);
        v120 = _4__this->fields.mode;
        if ( v120 <= 9 && ((1 << v120) & 0x2A0) != 0 )
        {
          tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.arrowInfo;
          if ( !tenText_5__4 )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 0, 0);
        }
      }
      tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.tipsBase;
      if ( tenText_5__4 )
      {
LABEL_146:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 0, 0);
        goto LABEL_147;
      }
      goto LABEL_162;
    }
    if ( mode == 2 )
    {
      v128 = ConnectMark__SetTipMessage(_4__this, 0);
      tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.tipsBase;
      if ( v128 )
      {
        if ( !tenText_5__4 )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 1, 0);
        _4__this->fields.isMaskClickTip = 1;
        _4__this->fields.tipNum = -1;
        ConnectMark__LoadBackImage(_4__this, (System_String_o *)StringLiteral_13869/*"System/tips_back01"*/, 0);
      }
      else
      {
        if ( !tenText_5__4 )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 0, 0);
      }
      tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.profileBase;
      if ( tenText_5__4 )
        goto LABEL_146;
LABEL_162:
      sub_2213CDC(tenText_5__4, method);
    }
  }
  tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.tipsBase;
  if ( !tenText_5__4 )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 0, 0);
  tenText_5__4 = (UnityEngine_Animation_o *)_4__this->fields.profileBase;
  if ( !tenText_5__4 )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tenText_5__4, 0, 0);
  ConnectMark__ReleaseBackImage(_4__this, 0);
LABEL_147:
  if ( !System_String__IsNullOrEmpty(this->fields.message, 0) )
  {
    v121 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v121, 0);
    this->fields.__2__current = (Il2CppObject *)v121;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v121,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
    v37 = 2;
    goto LABEL_150;
  }
  LOBYTE(tenText_5__4) = 0;
  return (char)tenText_5__4;
}


Il2CppObject *ConnectMark__MarkCR_d__83__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ConnectMark__MarkCR_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ConnectMark__MarkCR_d__83__System_Collections_IEnumerator_Reset(
        ConnectMark__MarkCR_d__83_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ConnectMark__MarkCR_d__83_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ConnectMark__MarkCR_d__83__System_Collections_IEnumerator_get_Current(
        ConnectMark__MarkCR_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ConnectMark__MarkCR_d__83__System_IDisposable_Dispose(ConnectMark__MarkCR_d__83_o *this, const MethodInfo *method)
{
  ;
}


void ConnectMark__ProgressBarCR_d__92___ctor(
        ConnectMark__ProgressBarCR_d__92_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ConnectMark__ProgressBarCR_d__92__MoveNext(ConnectMark__ProgressBarCR_d__92_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct ConnectMark_o *_4__this; // x20
  UIProgressBar_o *progressBarSlider; // x0
  float v6; // s0
  float v7; // s0
  int mode; // w8
  _BOOL4 isUseDialog_5__3; // w8
  __int64 v10; // x1
  NotificationDialog_o *v11; // x19
  __int64 *v12; // x8
  int v13; // w8
  __int64 v14; // x1
  UILabel_o *progressBarLabel; // x20
  System_String_o **v16; // x8
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  ManagerConfig_c *v19; // x0
  UILabel_o *loadCancelLabel; // x21
  UILabel_o *miniProgressLoadCancelLabel; // x21
  unsigned int v22; // w8
  UnityEngine_WaitForSeconds_o *v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w8
  unsigned int v31; // w8
  int32_t v32; // w8
  UnityEngine_WaitForSeconds_o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  UnityEngine_WaitForEndOfFrame_o *v41; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int v49; // w8
  UnityEngine_WaitForEndOfFrame_o *v50; // x20
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x1
  System_String_o *v58; // x21
  NotificationDialog_ClickDelegate_o *v59; // x22
  UnityEngine_WaitForEndOfFrame_o *v60; // x20
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  UnityEngine_WaitForEndOfFrame_o *v67; // x20
  Il2CppObject **v68; // x19
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  UnityEngine_WaitForEndOfFrame_o *v75; // x20
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  NotificationDialog_o *notificationDialog; // x19
  System_String_o *v83; // x21
  NotificationDialog_ClickDelegate_o *v84; // x22
  UnityEngine_WaitForEndOfFrame_o *v85; // x20
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  UnityEngine_WaitForEndOfFrame_o *v92; // x20
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7

  if ( (byte_596FBF8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_ConnectMark_EndNotificationDownload__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_3932/*"CONNECT_LATEST_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3933/*"CONNECT_LOAD_CANCEL"*/);
    sub_2213A60(&StringLiteral_3935/*"CONNECT_LOAD_MESSAGE2"*/);
    sub_2213A60(&StringLiteral_13868/*"System/loadImage"*/);
    sub_2213A60(&StringLiteral_3930/*"CONNECT_CANCEL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3934/*"CONNECT_LOAD_MESSAGE1"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3936/*"CONNECT_LOAD_MESSAGE3"*/);
    sub_2213A60(&StringLiteral_3931/*"CONNECT_COMPLET_MESSAGE"*/);
    byte_596FBF8 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  progressBarSlider = 0;
  if ( _1__state <= 4 )
  {
    if ( _1__state > 1 )
    {
      if ( _1__state != 2 )
      {
        if ( _1__state != 3 )
        {
          v6 = 1.0 - (float)((float)this->fields._size_5__6 / (float)this->fields._allSize_5__5);
          this->fields.__1__state = -1;
          v7 = v6 * 0.99;
          if ( this->fields._sliderValue_5__4 >= v7 )
            goto LABEL_103;
          if ( !_4__this )
            goto LABEL_154;
          mode = _4__this->fields.mode;
          if ( mode > 6 )
          {
            if ( mode != 7 && mode != 9 )
              goto LABEL_103;
          }
          else if ( mode != 5 )
          {
            if ( mode == 6 )
            {
              progressBarSlider = (UIProgressBar_o *)_4__this->fields.progressBarSlider;
              goto LABEL_101;
            }
LABEL_103:
            v60 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v60, 0);
            this->fields.__2__current = (Il2CppObject *)v60;
            p__2__current = &this->fields.__2__current;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v60, v61, v62, v63, v64, v65, v66);
            v49 = 5;
            goto LABEL_151;
          }
          progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressBarSlider;
LABEL_101:
          this->fields._sliderValue_5__4 = v7;
          if ( progressBarSlider )
          {
            UIProgressBar__set_value(progressBarSlider, v7, 0);
            goto LABEL_103;
          }
LABEL_154:
          sub_2213CDC(progressBarSlider, method);
        }
        this->fields.__1__state = -1;
LABEL_136:
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
        progressBarSlider = (UIProgressBar_o *)AssetManager__getDownloadSize(0);
        this->fields._size_5__6 = (int64_t)progressBarSlider;
        if ( (__int64)progressBarSlider >= 1 )
        {
          v75 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v75, 0);
          this->fields.__2__current = (Il2CppObject *)v75;
          p__2__current = &this->fields.__2__current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v75, v76, v77, v78, v79, v80, v81);
          v49 = 3;
          goto LABEL_151;
        }
        if ( this->fields._isUseDialog_5__3 )
        {
          if ( !_4__this )
            goto LABEL_154;
          notificationDialog = _4__this->fields.notificationDialog;
          _4__this->fields.isLoadPause = 1;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
          v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3930/*"CONNECT_CANCEL_MESSAGE"*/, 0);
          v84 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
          NotificationDialog_ClickDelegate___ctor(
            v84,
            (Il2CppObject *)_4__this,
            Method_ConnectMark_EndNotificationDownload__,
            0);
          if ( !notificationDialog )
            goto LABEL_154;
          NotificationDialog__Open(
            notificationDialog,
            (System_String_o *)StringLiteral_1/*""*/,
            v83,
            v84,
            -1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0.0,
            0,
            1,
            0);
          goto LABEL_146;
        }
        goto LABEL_147;
      }
      this->fields.__1__state = -1;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      progressBarSlider = (UIProgressBar_o *)AssetManager__getDownloadSize(0);
      this->fields._allSize_5__5 = (int64_t)progressBarSlider;
      if ( (__int64)progressBarSlider >= 1 )
      {
        if ( this->fields._isUseCancel_5__2 )
        {
          if ( !_4__this )
            goto LABEL_154;
          v31 = _4__this->fields.mode;
          if ( v31 <= 9 && ((1 << v31) & 0x2A0) != 0 )
          {
            progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressLoadCancelButton;
            if ( !progressBarSlider )
              goto LABEL_154;
            ((void (__fastcall *)(UIProgressBar_o *, __int64, const MethodInfo *))progressBarSlider->klass->vtable._5_OnStart.methodPtr)(
              progressBarSlider,
              1,
              progressBarSlider->klass->vtable._5_OnStart.method);
            progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressLoadCancelButton;
            if ( !progressBarSlider )
              goto LABEL_154;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)progressBarSlider, 1, 0);
            progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressLoadCancelButton;
            if ( !progressBarSlider )
              goto LABEL_154;
          }
          else
          {
            progressBarSlider = (UIProgressBar_o *)_4__this->fields.loadCancelButton;
            if ( !progressBarSlider )
              goto LABEL_154;
            ((void (__fastcall *)(UIProgressBar_o *, __int64, const MethodInfo *))progressBarSlider->klass->vtable._5_OnStart.methodPtr)(
              progressBarSlider,
              1,
              progressBarSlider->klass->vtable._5_OnStart.method);
            progressBarSlider = (UIProgressBar_o *)_4__this->fields.loadCancelButton;
            if ( !progressBarSlider )
              goto LABEL_154;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)progressBarSlider, 1, 0);
            progressBarSlider = (UIProgressBar_o *)_4__this->fields.loadCancelButton;
            if ( !progressBarSlider )
              goto LABEL_154;
          }
          ((void (__fastcall *)(UIProgressBar_o *, _QWORD, _QWORD, void *))progressBarSlider->klass[1]._1.generic_class)(
            progressBarSlider,
            0,
            0,
            progressBarSlider->klass[1]._1.typeMetadataHandle);
        }
        goto LABEL_128;
      }
      if ( this->fields._isUseDialog_5__3 )
      {
        if ( !_4__this )
          goto LABEL_154;
        progressBarSlider = (UIProgressBar_o *)_4__this->fields.markBase;
        _4__this->fields.isLoadPause = 1;
        if ( !progressBarSlider )
          goto LABEL_154;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressBarSlider, 0, 0);
        v11 = _4__this->fields.notificationDialog;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
        v12 = &StringLiteral_3932/*"CONNECT_LATEST_MESSAGE"*/;
LABEL_96:
        v58 = LocalizationManager__Get((System_String_o *)*v12, 0);
        v59 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          v59,
          (Il2CppObject *)_4__this,
          Method_ConnectMark_EndNotificationDownload__,
          0);
        if ( !v11 )
          goto LABEL_154;
        NotificationDialog__Open(
          v11,
          (System_String_o *)StringLiteral_1/*""*/,
          v58,
          v59,
          -1,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0.0,
          0,
          1,
          0);
LABEL_146:
        LOBYTE(progressBarSlider) = 0;
        return (char)progressBarSlider;
      }
      goto LABEL_147;
    }
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)progressBarSlider;
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_154;
      v13 = _4__this->fields.mode;
      if ( v13 > 6 )
      {
        if ( v13 != 7 && v13 != 9 )
          goto LABEL_86;
      }
      else if ( v13 != 5 )
      {
        if ( v13 == 6 )
        {
          progressBarSlider = (UIProgressBar_o *)_4__this->fields.progressBarBase;
          if ( !progressBarSlider )
            goto LABEL_154;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressBarSlider, 1, 0);
          progressBarSlider = (UIProgressBar_o *)_4__this->fields.progressBarSlider;
          if ( !progressBarSlider )
            goto LABEL_154;
          UIProgressBar__set_value(progressBarSlider, this->fields._sliderValue_5__4, 0);
          progressBarLabel = _4__this->fields.progressBarLabel;
          if ( this->fields._isUseCancel_5__2 )
            v16 = (System_String_o **)&StringLiteral_3934/*"CONNECT_LOAD_MESSAGE1"*/;
          else
            v16 = (System_String_o **)&StringLiteral_3935/*"CONNECT_LOAD_MESSAGE2"*/;
          v17 = *v16;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
          v18 = v17;
LABEL_84:
          progressBarSlider = (UIProgressBar_o *)LocalizationManager__Get(v18, 0);
          if ( !progressBarLabel )
            goto LABEL_154;
          UILabel__set_text(progressBarLabel, (System_String_o *)progressBarSlider, 0);
        }
LABEL_86:
        v41 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v41, 0);
        this->fields.__2__current = (Il2CppObject *)v41;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v41, v43, v44, v45, v46, v47, v48);
        v49 = 2;
LABEL_151:
        *((_DWORD *)p__2__current - 2) = v49;
        goto LABEL_152;
      }
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressBarBase;
      if ( !progressBarSlider )
        goto LABEL_154;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressBarSlider, 1, 0);
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressBarSlider;
      if ( !progressBarSlider )
        goto LABEL_154;
      UIProgressBar__set_value(progressBarSlider, this->fields._sliderValue_5__4, 0);
      progressBarLabel = _4__this->fields.miniProgressBarLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
      v18 = (System_String_o *)StringLiteral_3936/*"CONNECT_LOAD_MESSAGE3"*/;
      goto LABEL_84;
    }
    *(_WORD *)&this->fields._isUseCancel_5__2 = 0;
    this->fields.__1__state = -1;
    this->fields._sliderValue_5__4 = 0.0;
    if ( !_4__this )
      goto LABEL_154;
    if ( _4__this->fields.mode == 6 )
    {
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
      if ( !UnityEngine_Application__get_isEditor(0) )
      {
        v19 = ManagerConfig_TypeInfo;
        if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
          v19 = ManagerConfig_TypeInfo;
        }
        if ( !v19->static_fields->UseDebugCommand )
          ConnectMark__LoadBackImage(_4__this, (System_String_o *)StringLiteral_13868/*"System/loadImage"*/, 0);
      }
    }
    loadCancelLabel = _4__this->fields.loadCancelLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    progressBarSlider = (UIProgressBar_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3933/*"CONNECT_LOAD_CANCEL"*/, 0);
    if ( !loadCancelLabel )
      goto LABEL_154;
    UILabel__set_text(loadCancelLabel, (System_String_o *)progressBarSlider, 0);
    miniProgressLoadCancelLabel = _4__this->fields.miniProgressLoadCancelLabel;
    progressBarSlider = (UIProgressBar_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3933/*"CONNECT_LOAD_CANCEL"*/, 0);
    if ( !miniProgressLoadCancelLabel )
      goto LABEL_154;
    UILabel__set_text(miniProgressLoadCancelLabel, (System_String_o *)progressBarSlider, 0);
    v22 = _4__this->fields.mode;
    if ( v22 - 6 >= 2 )
    {
      if ( v22 == 5 )
      {
        *(_WORD *)&this->fields._isUseCancel_5__2 = 257;
        goto LABEL_112;
      }
      if ( v22 == 9 )
      {
        this->fields._isUseCancel_5__2 = 1;
        goto LABEL_112;
      }
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.loadCancelButton;
      if ( !progressBarSlider )
        goto LABEL_154;
      progressBarSlider = (UIProgressBar_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)progressBarSlider,
                                               0);
      if ( !progressBarSlider )
        goto LABEL_154;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressBarSlider, 0, 0);
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressLoadCancelButton;
      if ( !progressBarSlider )
        goto LABEL_154;
      progressBarSlider = (UIProgressBar_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)progressBarSlider,
                                               0);
      if ( !progressBarSlider )
        goto LABEL_154;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressBarSlider, 0, 0);
      v22 = _4__this->fields.mode;
    }
    if ( v22 > 9 || ((1 << v22) & 0x2A0) == 0 )
    {
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.loadCancelButton;
      if ( !progressBarSlider )
        goto LABEL_154;
      progressBarSlider = (UIProgressBar_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)progressBarSlider,
                                               0);
      if ( !progressBarSlider )
        goto LABEL_154;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)progressBarSlider,
        this->fields._isUseCancel_5__2,
        0);
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.loadCancelButton;
      if ( !progressBarSlider )
        goto LABEL_154;
      ((void (__fastcall *)(UIProgressBar_o *, __int64, const MethodInfo *))progressBarSlider->klass->vtable._5_OnStart.methodPtr)(
        progressBarSlider,
        1,
        progressBarSlider->klass->vtable._5_OnStart.method);
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.loadCancelButton;
      if ( !progressBarSlider )
        goto LABEL_154;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)progressBarSlider, 0, 0);
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.loadCancelButton;
      if ( !progressBarSlider )
        goto LABEL_154;
      goto LABEL_117;
    }
LABEL_112:
    progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressLoadCancelButton;
    if ( !progressBarSlider )
      goto LABEL_154;
    progressBarSlider = (UIProgressBar_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)progressBarSlider,
                                             0);
    if ( !progressBarSlider )
      goto LABEL_154;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressBarSlider, this->fields._isUseCancel_5__2, 0);
    progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressLoadCancelButton;
    if ( !progressBarSlider )
      goto LABEL_154;
    ((void (__fastcall *)(UIProgressBar_o *, __int64, const MethodInfo *))progressBarSlider->klass->vtable._5_OnStart.methodPtr)(
      progressBarSlider,
      1,
      progressBarSlider->klass->vtable._5_OnStart.method);
    progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressLoadCancelButton;
    if ( !progressBarSlider )
      goto LABEL_154;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)progressBarSlider, _4__this->fields.mode == 9, 0);
    progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressLoadCancelButton;
    if ( !progressBarSlider )
      goto LABEL_154;
LABEL_117:
    ((void (__fastcall *)(UIProgressBar_o *, _QWORD, _QWORD, void *))progressBarSlider->klass[1]._1.generic_class)(
      progressBarSlider,
      0,
      0,
      progressBarSlider->klass[1]._1.typeMetadataHandle);
    v67 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v67, 0);
    this->fields.__2__current = (Il2CppObject *)v67;
    v68 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v68, (int32_t)v67, v69, v70, v71, v72, v73, v74);
    LOBYTE(progressBarSlider) = 1;
    *((_DWORD *)v68 - 2) = 1;
    return (char)progressBarSlider;
  }
  if ( _1__state <= 6 )
  {
    if ( _1__state != 5 )
    {
      this->fields.__1__state = -1;
LABEL_128:
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      progressBarSlider = (UIProgressBar_o *)AssetManager__getDownloadSize(0);
      this->fields._size_5__6 = (int64_t)progressBarSlider;
      if ( (__int64)progressBarSlider < 1 )
      {
        v85 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v85, 0);
        this->fields.__2__current = (Il2CppObject *)v85;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v85, v86, v87, v88, v89, v90, v91);
        v49 = 7;
        goto LABEL_151;
      }
      if ( !_4__this )
        goto LABEL_154;
      if ( !_4__this->fields.isLoadCancel )
      {
        v92 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v92, 0);
        this->fields.__2__current = (Il2CppObject *)v92;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v92, v93, v94, v95, v96, v97, v98);
        v49 = 4;
        goto LABEL_151;
      }
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      AssetManager__cancelDownloadAssetStorage(0);
      goto LABEL_136;
    }
    this->fields.__1__state = -1;
    v23 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v23, 0.1, 0);
    this->fields.__2__current = (Il2CppObject *)v23;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v30 = 6;
LABEL_76:
    this->fields.__1__state = v30;
LABEL_152:
    LOBYTE(progressBarSlider) = 1;
    return (char)progressBarSlider;
  }
  if ( _1__state == 7 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_154;
    v32 = _4__this->fields.mode;
    if ( v32 == 5 || v32 == 7 )
    {
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.miniProgressBarSlider;
      if ( !progressBarSlider )
        goto LABEL_154;
    }
    else
    {
      if ( v32 != 6 )
      {
LABEL_89:
        v50 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v50, 0);
        this->fields.__2__current = (Il2CppObject *)v50;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v50, v51, v52, v53, v54, v55, v56);
        v49 = 8;
        goto LABEL_151;
      }
      progressBarSlider = (UIProgressBar_o *)_4__this->fields.progressBarSlider;
      if ( !progressBarSlider )
        goto LABEL_154;
    }
    UIProgressBar__set_value(progressBarSlider, 1.0, 0);
    goto LABEL_89;
  }
  if ( _1__state == 8 )
  {
    this->fields.__1__state = -1;
    v33 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v33, 0.1, 0);
    this->fields.__2__current = (Il2CppObject *)v33;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v30 = 9;
    goto LABEL_76;
  }
  if ( _1__state != 9 )
    return (char)progressBarSlider;
  isUseDialog_5__3 = this->fields._isUseDialog_5__3;
  this->fields.__1__state = -1;
  if ( isUseDialog_5__3 )
  {
    if ( !_4__this )
      goto LABEL_154;
    progressBarSlider = (UIProgressBar_o *)_4__this->fields.markBase;
    _4__this->fields.isLoadPause = 1;
    if ( !progressBarSlider )
      goto LABEL_154;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressBarSlider, 0, 0);
    v11 = _4__this->fields.notificationDialog;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    v12 = &StringLiteral_3931/*"CONNECT_COMPLET_MESSAGE"*/;
    goto LABEL_96;
  }
LABEL_147:
  if ( !_4__this )
    goto LABEL_154;
  LOBYTE(progressBarSlider) = 0;
  _4__this->fields.isBusy = 0;
  return (char)progressBarSlider;
}


Il2CppObject *ConnectMark__ProgressBarCR_d__92__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ConnectMark__ProgressBarCR_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ConnectMark__ProgressBarCR_d__92__System_Collections_IEnumerator_Reset(
        ConnectMark__ProgressBarCR_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ConnectMark__ProgressBarCR_d__92_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ConnectMark__ProgressBarCR_d__92__System_Collections_IEnumerator_get_Current(
        ConnectMark__ProgressBarCR_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ConnectMark__ProgressBarCR_d__92__System_IDisposable_Dispose(
        ConnectMark__ProgressBarCR_d__92_o *this,
        const MethodInfo *method)
{
  ;
}


void ConnectMark___c__DisplayClass103_0___ctor(ConnectMark___c__DisplayClass103_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass103_0___LoadOtherMark_b__0(
        ConnectMark___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  ConnectMark___c__DisplayClass103_0_o *v2; // x19
  struct ConnectMark_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__object__o *eventAnimationIconDictionary; // x0
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  ConnectMark_o *v7; // x8
  Il2CppObject *v8; // x20
  System_Collections_Generic_Dictionary_object__object__o *EventUIAtlasDictionary; // x0
  int32_t animationId; // [xsp+8h] [xbp-28h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_596FBF2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__);
    this = (ConnectMark___c__DisplayClass103_0_o *)sub_2213A60(&StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_596FBF2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  eventAnimationIconDictionary = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.eventAnimationIconDictionary;
  if ( !eventAnimationIconDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          eventAnimationIconDictionary,
          v2->fields.eventId,
          (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__) )
  {
    eventId = v2->fields.eventId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &eventId);
    animationId = v2->fields.animationId;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &animationId);
    this = (ConnectMark___c__DisplayClass103_0_o *)System_String__Format_75697880(
                                                     (System_String_o *)StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/,
                                                     v5,
                                                     v6,
                                                     0);
    v7 = v2->fields.__4__this;
    if ( v7 )
    {
      v8 = (Il2CppObject *)this;
      EventUIAtlasDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.EventUIAtlasDictionary;
      if ( !EventUIAtlasDictionary )
        goto LABEL_10;
      this = (ConnectMark___c__DisplayClass103_0_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                       EventUIAtlasDictionary,
                                                       v8,
                                                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v7 = v2->fields.__4__this;
      if ( v7 )
      {
LABEL_10:
        ConnectMark__LoadAtlas(v7, (System_String_o *)v8, v2->fields.eventId, 0, 0);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(this, method);
  }
}


void ConnectMark___c__DisplayClass104_0___ctor(ConnectMark___c__DisplayClass104_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass104_0___LoadEventAnimationIcon_b__0(
        ConnectMark___c__DisplayClass104_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  ConnectMark___c__DisplayClass104_0_o *v4; // x19
  struct ConnectMark_o *_4__this; // x8
  struct ConnectMark_o *v6; // x8
  __int64 v7; // x1
  Il2CppObject *Item; // x21
  __int64 v9; // x1
  Il2CppObject *Object_object__58532980; // x20
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  struct ConnectMark_o *v13; // x8
  struct ConnectMark_o *v14; // x8
  struct ConnectMark_o *v15; // x8
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  struct ConnectMark_o *v18; // x8
  __int64 v19; // x1
  UnityEngine_Object_o *gameObject; // x21
  struct ConnectMark_o *v21; // x8

  v4 = this;
  if ( (byte_596FBF3 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&ConnectMark_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__set_Item__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_AnimationLoadingIcon___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ConnectMark___c__DisplayClass104_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FBF3 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_44;
  this = (ConnectMark___c__DisplayClass104_0_o *)_4__this->fields.eventAnimationIconDictionary;
  if ( !this )
    goto LABEL_44;
  this = (ConnectMark___c__DisplayClass104_0_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                   (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                   v4->fields.eventId,
                                                   (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_47;
  v6 = v4->fields.__4__this;
  if ( !v6 )
    goto LABEL_44;
  this = (ConnectMark___c__DisplayClass104_0_o *)v6->fields.eventAnimationIconDictionary;
  if ( !this )
    goto LABEL_44;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v4->fields.eventId,
           (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
  {
LABEL_47:
    this = (ConnectMark___c__DisplayClass104_0_o *)ConnectMark_TypeInfo;
    if ( !*(&ConnectMark_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ConnectMark_TypeInfo, prefabData);
    if ( !prefabData )
      goto LABEL_44;
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                prefabData,
                                ConnectMark_TypeInfo->static_fields->ANIMATION_ICON_PREFAB,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      this = (ConnectMark___c__DisplayClass104_0_o *)UnityEngine_Object__Instantiate_object_(
                                                       Object_object__58532980,
                                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_44;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_AnimationLoadingIcon___);
      this = (ConnectMark___c__DisplayClass104_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( Component_object )
        {
          this = (ConnectMark___c__DisplayClass104_0_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)Component_object,
                                                           0);
          v13 = v4->fields.__4__this;
          if ( v13 )
          {
            GameObjectExtensions__SafeSetParent_42897308((UnityEngine_GameObject_o *)this, v13->fields.iconBase, 0);
            v14 = v4->fields.__4__this;
            if ( v14 )
            {
              this = (ConnectMark___c__DisplayClass104_0_o *)v14->fields.eventAnimationIconDictionary;
              if ( this )
              {
                this = (ConnectMark___c__DisplayClass104_0_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                 v4->fields.eventId,
                                                                 (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
                v15 = v4->fields.__4__this;
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v15 )
                  {
                    this = (ConnectMark___c__DisplayClass104_0_o *)v15->fields.eventAnimationIconDictionary;
                    if ( this )
                    {
                      v17 = System_Collections_Generic_Dictionary_int__object___get_Item(
                              (System_Collections_Generic_Dictionary_int__object__o *)this,
                              v4->fields.eventId,
                              (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
                      this = (ConnectMark___c__DisplayClass104_0_o *)UnityEngine_Object__op_Inequality(
                                                                       (UnityEngine_Object_o *)v17,
                                                                       0,
                                                                       0);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v18 = v4->fields.__4__this;
                        if ( !v18 )
                          goto LABEL_44;
                        this = (ConnectMark___c__DisplayClass104_0_o *)v18->fields.eventAnimationIconDictionary;
                        if ( !this )
                          goto LABEL_44;
                        this = (ConnectMark___c__DisplayClass104_0_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v4->fields.eventId,
                                                                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__get_Item__);
                        if ( !this )
                          goto LABEL_44;
                        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
                        UnityEngine_Object__Destroy_83459800(gameObject, 0);
                      }
                      v21 = v4->fields.__4__this;
                      if ( v21 )
                      {
                        this = (ConnectMark___c__DisplayClass104_0_o *)v21->fields.eventAnimationIconDictionary;
                        if ( this )
                        {
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v4->fields.eventId,
                            Component_object,
                            (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__set_Item__);
                          goto LABEL_43;
                        }
                      }
                    }
                  }
                }
                else if ( v15 )
                {
                  this = (ConnectMark___c__DisplayClass104_0_o *)v15->fields.eventAnimationIconDictionary;
                  if ( this )
                  {
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)this,
                      v4->fields.eventId,
                      Component_object,
                      (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__Add__);
                    goto LABEL_43;
                  }
                }
              }
            }
          }
        }
LABEL_44:
        sub_2213CDC(this, prefabData);
      }
    }
  }
LABEL_43:
  ActionExtensions__Call(v4->fields.callback, 0);
}


void ConnectMark___c__DisplayClass105_0___ctor(ConnectMark___c__DisplayClass105_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass105_0___LoadAtlas_b__0(
        ConnectMark___c__DisplayClass105_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  ConnectMark___c__DisplayClass105_0_o *v4; // x19
  __int64 v5; // x1
  Il2CppObject *Object_object__58532980; // x20
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  struct ConnectMark_o *_4__this; // x8

  v4 = this;
  if ( (byte_596FBF4 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__Add__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (ConnectMark___c__DisplayClass105_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FBF4 = 1;
  }
  if ( !prefabData )
    goto LABEL_15;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              prefabData,
                              v4->fields.atlasName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  this = (ConnectMark___c__DisplayClass105_0_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Object_object__58532980,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__58532980 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__58532980,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    this = (ConnectMark___c__DisplayClass105_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this = v4->fields.__4__this;
      if ( _4__this )
      {
        this = (ConnectMark___c__DisplayClass105_0_o *)_4__this->fields.EventUIAtlasDictionary;
        if ( this )
        {
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (Il2CppObject *)v4->fields.atlasName,
            Component_object,
            (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__Add__);
          goto LABEL_14;
        }
      }
LABEL_15:
      sub_2213CDC(this, prefabData);
    }
  }
LABEL_14:
  ActionExtensions__Call(v4->fields.callback, 0);
}


void ConnectMark___c__DisplayClass106_0___ctor(ConnectMark___c__DisplayClass106_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass106_0___SetOtherMark_b__0(
        ConnectMark___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  ConnectMark___c__DisplayClass106_0_o *v2; // x19
  struct ConnectMark_o *_4__this; // x8
  Il2CppObject *v4; // x20
  Il2CppObject *v5; // x0
  struct ConnectMark_o *v6; // x21
  ConnectMark___c__DisplayClass106_0_o *v7; // x20
  System_Action_o *_9__1; // x23
  int32_t v9; // w22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t animationId; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_596FBF5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__);
    sub_2213A60(&Method_ConnectMark___c__DisplayClass106_0__SetOtherMark_b__1__);
    this = (ConnectMark___c__DisplayClass106_0_o *)sub_2213A60(&StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_596FBF5 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (ConnectMark___c__DisplayClass106_0_o *)_4__this->fields.eventAnimationIconDictionary;
  if ( !this )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)this,
         v2->fields.eventId,
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__AnimationLoadingIcon__ContainsKey__) )
  {
    this = (ConnectMark___c__DisplayClass106_0_o *)v2->fields.__4__this;
    if ( this )
    {
      ConnectMark__SetOtherMarkAfterLoad((ConnectMark_o *)this, v2->fields.eventId, v2->fields.animationId, 0);
      return;
    }
LABEL_17:
    sub_2213CDC(this, method);
  }
  eventId = v2->fields.eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &eventId);
  animationId = v2->fields.animationId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &animationId);
  this = (ConnectMark___c__DisplayClass106_0_o *)System_String__Format_75697880(
                                                   (System_String_o *)StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/,
                                                   v4,
                                                   v5,
                                                   0);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_17;
  v7 = this;
  this = (ConnectMark___c__DisplayClass106_0_o *)v6->fields.EventUIAtlasDictionary;
  if ( this
    && (this = (ConnectMark___c__DisplayClass106_0_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                         (Il2CppObject *)v7,
                                                         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__UIAtlas__ContainsKey__),
        v6 = v2->fields.__4__this,
        ((unsigned __int8)this & 1) != 0) )
  {
    if ( !v6 )
      goto LABEL_17;
    ConnectMark__SetOtherMarkAfterLoad(v2->fields.__4__this, v2->fields.eventId, v2->fields.animationId, 0);
  }
  else
  {
    _9__1 = v2->fields.__9__1;
    v9 = v2->fields.eventId;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__1, (Il2CppObject *)v2, Method_ConnectMark___c__DisplayClass106_0__SetOtherMark_b__1__, 0);
      v2->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
    }
    if ( !v6 )
      goto LABEL_17;
    ConnectMark__LoadAtlas(v6, (System_String_o *)v7, v9, _9__1, 0);
  }
}


void ConnectMark___c__DisplayClass106_0___SetOtherMark_b__1(
        ConnectMark___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  ConnectMark_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  ConnectMark__SetOtherMarkAfterLoad(_4__this, this->fields.eventId, this->fields.animationId, 0);
}


void ConnectMark___c__DisplayClass111_0___ctor(ConnectMark___c__DisplayClass111_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ConnectMark___c__DisplayClass111_0___GetStartProfileServantCommentEntity_b__0(
        ConnectMark___c__DisplayClass111_0_o *this,
        ConnectMark_ProfilePushData_o *a,
        const MethodInfo *method)
{
  struct ConnectMark_ProfilePushData_o *mainData; // x8

  if ( !a || (mainData = this->fields.mainData) == 0 )
    sub_2213CDC(this, a);
  return a->fields.svtId == mainData->fields.svtId
      && a->fields.idx == mainData->fields.idx
      && a->fields.priority == mainData->fields.priority;
}


void ConnectMark___c__DisplayClass95_0___ctor(ConnectMark___c__DisplayClass95_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass95_0___OnClickCancel_b__0(
        ConnectMark___c__DisplayClass95_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x0
  CommonUI_o *commonUI; // x19
  System_Action_o *v16; // x20

  if ( (byte_596FBF6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ConnectMark___c__DisplayClass95_1__OnClickCancel_b__1__);
    sub_2213A60(&ConnectMark___c__DisplayClass95_1_TypeInfo);
    byte_596FBF6 = 1;
  }
  v5 = sub_2213CCC(ConnectMark___c__DisplayClass95_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = System_Action_TypeInfo,
        commonUI = this->fields.commonUI,
        *(_BYTE *)(v5 + 16) = isDecide,
        v16 = (System_Action_o *)sub_2213CCC(v14),
        System_Action___ctor(v16, (Il2CppObject *)v5, Method_ConnectMark___c__DisplayClass95_1__OnClickCancel_b__1__, 0),
        !commonUI) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37373868(commonUI, v16, 0);
}


void ConnectMark___c__DisplayClass95_1___ctor(ConnectMark___c__DisplayClass95_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ConnectMark___c__DisplayClass95_1___OnClickCancel_b__1(
        ConnectMark___c__DisplayClass95_1_o *this,
        const MethodInfo *method)
{
  struct ConnectMark___c__DisplayClass95_0_o *CS___8__locals1; // x9
  ConnectMark_o *_4__this; // x8
  struct CommonUI_o *commonUI; // x9
  struct MovieFileMerge_o *MovieFileMerge_k__BackingField; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  if ( _4__this->fields.mode != 9 )
    goto LABEL_7;
  commonUI = CS___8__locals1->fields.commonUI;
  if ( !commonUI || (MovieFileMerge_k__BackingField = commonUI->fields._MovieFileMerge_k__BackingField) == 0 )
LABEL_10:
    sub_2213CDC(this, method);
  MovieFileMerge_k__BackingField->fields.isDownloadPause = 0;
LABEL_7:
  if ( this->fields.isDecide )
    ConnectMark__DownloadCancel(_4__this, 0);
}