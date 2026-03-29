void CompleteMissionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D2F3E5 & 1) == 0 )
  {
    sub_1C93AD4(&CompleteMissionComponent_TypeInfo);
    byte_4D2F3E5 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2F3E4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_4D2F3E4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.completeMissionList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4D2F3E0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CompleteMissionComponent__AcceptReward_b__33_0__);
    byte_4D2F3E0 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0),
        missionListViewManager = this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0),
        !missionListViewManager) )
  {
    sub_1C93D2C(titleInfo, method);
  }
  CompleteMissionListViewManager__AcceptReward(missionListViewManager, v5, v6);
}


void CompleteMissionComponent__CheckRewardAcceptable(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1C93D2C(0, method);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewManager_o *missionListViewManager; // x0

  if ( (byte_4D2F3E2 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    byte_4D2F3E2 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0);
  missionListViewManager = (ListViewManager_o *)this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (ListViewManager__DestroyList(missionListViewManager, 0),
        EventRewardSaveData__SaveAllMissionData(0),
        (missionListViewManager = (ListViewManager_o *)this->fields.completeMissionSprite) == 0)
    || (CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)missionListViewManager, v3),
        (missionListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0)) == 0) )
  {
    sub_1C93D2C(missionListViewManager, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionListViewManager, 0, 0);
}


void CompleteMissionComponent__LoadNotificationEnd(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  EventRewardSaveData__LoadCompleteMissionData(0);
  CompleteMissionComponent__SetMissionDisp(this, v3);
  CompleteMissionComponent__createPanel(this, v4);
}


void CompleteMissionComponent__OnClickBack(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CompleteMissionComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4D2F3E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CompleteMissionComponent_OnClickBack__);
    byte_4D2F3E1 = 1;
  }
  v3 = Method_CompleteMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CompleteMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_CompleteMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      callbackFunc->fields.method);
}


void CompleteMissionComponent__OnDestroy(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2F3D8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F3D8 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_1C93D2C(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    *p_titleInfo = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_titleInfo, 0, v8, v9, v10, v11, v12, v13);
  }
}


void CompleteMissionComponent__Open(
        CompleteMissionComponent_o *this,
        CompleteMissionComponent_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        int32_t typeIndex,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_int__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  TitleInfoControl_o *v39; // x21
  TitleInfoControl_o *v40; // x20
  System_Action_o *v41; // x21
  struct MstMissionEntity_array *Entitys; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  const MethodInfo *v49; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  System_Collections_Generic_List_object__o *v59; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x20
  int32_t klass; // w2
  System_String_o *monitor; // x20
  System_Action_o *v63; // x20
  Il2CppObject *v64; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D2F3D9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_CompleteMissionComponent_LoadNotificationEnd__);
    sub_1C93AD4(&Method_CompleteMissionComponent_OnClickBack__);
    sub_1C93AD4(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_MstMissionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_EventMissionEntity___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&MyRoomControl_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2F3D9 = 1;
  }
  entity = 0;
  v64 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.reDispAction = redisp_act;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.reDispAction,
    (int32_t)redisp_act,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v22;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentEventIdList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  EventRewardSaveData__LoadMstMissionIndex(0);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0, 0) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__Instantiate_object_(
                 titlePrefab,
                 (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_46;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.titleInfo,
      (int32_t)Component_object,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = this->fields.titleInfo;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v39 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v39, (UnityEngine_Transform_o *)Instance, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__SetActiveTitleName((TitleInfoControl_o *)Instance, 0, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setDepth((TitleInfoControl_o *)Instance, 20, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 38, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, 0, 86, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__changeTitleInfo_40624832((TitleInfoControl_o *)Instance, 1, 86, 0, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
    v40 = this->fields.titleInfo;
    v41 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v41, (Il2CppObject *)this, (intptr_t)Method_CompleteMissionComponent_OnClickBack__, 0);
    if ( !v40 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v40, v41, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entitys = (struct MstMissionEntity_array *)DataMasterBase_object__object__int___getEntitys(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                               (const MethodInfo_34624F8 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
  this->fields.mstMissionList = Entitys;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mstMissionList,
    (int32_t)Entitys,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v49);
  this->fields.completeMissionList = VaildCompleteMissionData;
  p_completeMissionList = &this->fields.completeMissionList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.completeMissionList,
    (int32_t)VaildCompleteMissionData,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v59 = (System_Collections_Generic_List_object__o *)*p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_46;
    v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 v59,
                 0,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !Instance || !v60 )
      goto LABEL_46;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v60,
           &entity,
           *((_DWORD *)Instance + 7),
           (const MethodInfo_34632C0 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_46;
      klass = (int32_t)entity[2].klass;
      if ( klass >= 1 )
      {
        if ( !Instance )
          goto LABEL_46;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &v64,
                             klass,
                             (const MethodInfo_34632C0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v64 )
          {
            monitor = (System_String_o *)v64[1].monitor;
            if ( monitor )
              goto LABEL_41;
            goto LABEL_38;
          }
LABEL_46:
          sub_1C93D2C(Instance, v9);
        }
      }
    }
  }
LABEL_38:
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  monitor = MyRoomControl__getChangeMyRoomBgm(0);
LABEL_41:
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(monitor, 0);
  v63 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v63, 0);
}


void CompleteMissionComponent__RequestMissionReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4D2F3DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_CompleteMissionComponent_missionRewardCallback__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2F3DE = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0
    || !Request_object )
  {
    sub_1C93D2C(Request_object, v5);
  }
  EventMissionClearRewardRequest__beginRequest(
    (EventMissionClearRewardRequest_o *)Request_object,
    missionToRecieve->fields.id,
    0);
}


void CompleteMissionComponent__SetAfterAction(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1C93D2C(0, method);
  CompleteMissionListViewManager__setAfterAction(missionListViewManager, method);
}


void CompleteMissionComponent__SetBtnEnable(CompleteMissionComponent_o *this, bool isEnable, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C93D2C(0, isEnable);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, isEnable, 0);
}


void CompleteMissionComponent__SetMissionDisp(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *missionListViewManager; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  missionListViewManager = (UnityEngine_Component_o *)this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              missionListViewManager,
                                                              0)) == 0 )
  {
    sub_1C93D2C(missionListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionListViewManager, 1, 0);
  CompleteMissionComponent__SetUpMissionListView(this, v4);
  CompleteMissionComponent__setMissionCompleteNum(this, v5);
}


void CompleteMissionComponent__SetUpMissionListView(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x5
  MissionListViewManager_o *v8; // x19

  if ( (byte_4D2F3DD & 1) == 0 )
  {
    sub_1C93AD4(&CompleteMissionComponent_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4D2F3DD = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_9;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !missionListViewManager )
    goto LABEL_9;
  CompleteMissionListViewManager__CreateList(
    missionListViewManager,
    completeMissionList,
    v6,
    0,
    this->fields.reDispAction,
    v7);
  currentEventIdList = (System_Collections_Generic_List_int__o *)CompleteMissionComponent_TypeInfo;
  v8 = (MissionListViewManager_o *)this->fields.missionListViewManager;
  if ( !CompleteMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CompleteMissionComponent_TypeInfo);
  if ( !v8 )
LABEL_9:
    sub_1C93D2C(currentEventIdList, method);
  MissionListViewManager__SetMode_48620100(v8, 1, CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void CompleteMissionComponent__UnAcceptableRewardDlg(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1C93D2C(0, method);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void CompleteMissionComponent___AcceptReward_b__33_0(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C93D2C(0, method);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0);
}


void CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D2F3E6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5464/*"END_DISP"*/);
    byte_4D2F3E6 = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5464/*"END_DISP"*/, 0);
}


void CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_int__o *AchivePanelNum; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *v19; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x20
  Il2CppObject *Entity; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  Il2CppObject *v29; // x0
  System_String_o *v30; // x20
  AssetLoader_LoadEndDataHandler_o *v31; // x21
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2F3DA & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C93AD4(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__);
    sub_1C93AD4(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_4650/*"CompleteMission/{0}/asset"*/);
    byte_4D2F3DA = 1;
  }
  v3 = sub_1C93D20(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_16;
  AchivePanelNum = EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, completeMissionList, 0);
  *(_QWORD *)(v3 + 24) = AchivePanelNum;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)AchivePanelNum, v13, v14, v15, v16, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v19 = this->fields.completeMissionList;
  if ( !v19
    || (v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v19,
                      0,
                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0)
    || !v20
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v20,
                   HIDWORD(Instance[1].monitor),
                   (const MethodInfo_3463274 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v3 + 32) = Entity,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)Entity, v22, v23, v24, v25, v26, v27),
        v28 = *(_QWORD *)(v3 + 32),
        *(_DWORD *)(v3 + 40) = 0,
        !v28) )
  {
LABEL_16:
    sub_1C93D2C(Instance, completeMissionList);
  }
  v32 = *(_DWORD *)(v28 + 20);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v30 = System_String__Format((System_String_o *)StringLiteral_4650/*"CompleteMission/{0}/asset"*/, v29, 0);
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v3,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v30, v31, 1, 0);
}


System_Collections_Generic_List_EventMissionEntity__o *CompleteMissionComponent__getVaildCompleteMissionData(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionComponent_o *v2; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v4; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v9; // w24
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x22
  intptr_t m_CachedPtr; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int size; // w8
  int32_t v16; // w23
  int32_t v17; // w21

  v2 = this;
  if ( (byte_4D2F3DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    this = (CompleteMissionComponent_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2F3DB = 1;
  }
  currentEventIdList = v2->fields.currentEventIdList;
  v2->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_34;
  v4 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v4;
  this = (CompleteMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v2->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_34;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C93D34(this);
      v10 = &mstMissionList->obj.klass + (int)v9;
      v11 = v10[4];
      if ( !v11 )
        break;
      this = (CompleteMissionComponent_o *)MstMissionEntity__isActiveNow((MstMissionEntity_o *)v10[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (CompleteMissionComponent_o *)EventMissionMaster__getCompleteMissionList(
                                               (EventMissionMaster_o *)MasterData_object,
                                               HIDWORD(v11->_1.name),
                                               0);
        if ( !this )
          break;
        method = (const MethodInfo *)this;
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v6 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v6,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (CompleteMissionComponent_o *)v2->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v11->_1.name);
          m_CachedPtr = this->fields.m_CachedPtr;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_21;
    }
LABEL_34:
    sub_1C93D2C(this, method);
  }
LABEL_21:
  if ( v6 )
  {
    size = v6->fields._size;
    if ( size < 1 )
    {
      return 0;
    }
    else
    {
      v2->fields.totalMissionNum = size;
      this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v6,
                                             0,
                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_34;
      v16 = this->fields.m_CachedPtr;
      if ( v6->fields._size >= 1 )
      {
        v17 = 0;
        do
        {
          this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v6,
                                                 v17,
                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_34;
          if ( v16 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                   v6,
                                                   v17,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_34;
            v16 = this->fields.m_CachedPtr;
          }
        }
        while ( ++v17 < v6->fields._size );
      }
      v2->fields.currentMissionId = v16;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v6;
}


CompleteMissionListViewManager_o *CompleteMissionComponent__get_listViewManager(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.missionListViewManager;
}


void CompleteMissionComponent__missionRewardCallback(
        CompleteMissionComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  CompleteMissionComponent_o *v4; // x19
  __int64 *v5; // x8
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct UnityEngine_Transform_o *completeMissionPanel; // x8

  v4 = this;
  if ( (byte_4D2F3DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    this = (CompleteMissionComponent_o *)sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D2F3DF = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( !System_String__Equals_64461044(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    v6 = (Il2CppObject *)System_String__Concat_64463988(
                           (System_String_o *)StringLiteral_15904/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16156/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                           v6,
                                           (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1C93D34(this);
      completeMissionPanel = this->fields.completeMissionPanel;
      if ( completeMissionPanel )
      {
        this = (CompleteMissionComponent_o *)v4->fields.missionListViewManager;
        if ( this )
        {
          CompleteMissionListViewManager__SetResultData(
            (CompleteMissionListViewManager_o *)this,
            (GetSvts_array *)completeMissionPanel->fields.m_CachedPtr,
            (GetCommandCodes_array *)completeMissionPanel[1].klass,
            v7);
          this = (CompleteMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v5 = &StringLiteral_11163/*"REQUEST_OK"*/;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    sub_1C93D2C(this, result);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_16;
  v5 = &StringLiteral_11161/*"REQUEST_NG"*/;
LABEL_15:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void CompleteMissionComponent__setMissionCompleteNum(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w23
  int32_t compMissionNum; // w22
  UserEventMissionMaster_o *v8; // x20
  int32_t v9; // w21
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2F3DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_25481/*"{0}/{1}"*/);
    byte_4D2F3DC = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_14;
  size = currentEventIdList->fields._size;
  if ( size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v8 = (UserEventMissionMaster_o *)Instance;
    v9 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    currentEventIdList,
                                    v9,
                                    (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v8 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v8, (int32_t)Instance, 0);
      ++v9;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v9 )
        goto LABEL_12;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_14:
    sub_1C93D2C(Instance, v4);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_12:
  eventMissionTxt = this->fields.eventMissionTxt;
  v14 = compMissionNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  totalMissionNum = this->fields.totalMissionNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
  Instance = (DataManager_o *)System_String__Format_64467032((System_String_o *)StringLiteral_25481/*"{0}/{1}"*/, v11, v12, 0);
  if ( !eventMissionTxt )
    goto LABEL_14;
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0);
}


void CompleteMissionComponent__setRecieveModifyItem(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_4D2F3E3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__);
    byte_4D2F3E3 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v4 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0),
        !v4) )
  {
    sub_1C93D2C(missionListViewManager, method);
  }
  MissionListViewManager__SetMode(v4, 3, v5, 0);
}


void CompleteMissionComponent_ClickDelegate___ctor(
        CompleteMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC7D48;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC7D00;
}


System_IAsyncResult_o *CompleteMissionComponent_ClickDelegate__BeginInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4D2F3E7 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2F3E7 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void CompleteMissionComponent_ClickDelegate__Invoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void CompleteMissionComponent___c__DisplayClass23_0___ctor(
        CompleteMissionComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionComponent___c__DisplayClass23_0___createPanel_b__0(
        CompleteMissionComponent___c__DisplayClass23_0_o *this,
        AssetData_o *frontPanel,
        const MethodInfo *method)
{
  CompleteMissionComponent___c__DisplayClass23_0_o *v4; // x19
  Il2CppObject *Object_object__51927708; // x20
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t current; // w21
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x1
  struct CompleteMissionComponent_o *v26; // x8
  UnityEngine_Transform_o *completeMissionPanel; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v29; // x1
  UnityEngine_Component_o *v30; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  struct CompleteMissionComponent_o *v36; // x8
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Transform_o *v38; // x0
  __int64 v39; // x1
  UnityEngine_Component_o *v40; // x0
  __int64 v41; // x1
  Il2CppObject *Component_object; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x1
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v52; // x21
  Il2CppObject *v53; // x2
  System_String_o *v54; // x21
  AssetLoader_LoadEndDataHandler_o *v55; // x22
  struct CompleteMissionComponent_o *v56; // x8
  struct CompleteMissionComponent_o *v57; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v60; // x4
  struct CompleteMissionComponent_o *v61; // x8
  int v62; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v64; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4D2F3E8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__);
    sub_1C93AD4(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    sub_1C93AD4(&StringLiteral_4652/*"CompleteMissionPanel"*/);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_1C93AD4(&StringLiteral_4651/*"CompleteMission/{0}/{1}"*/);
    byte_4D2F3E8 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  if ( !frontPanel )
    goto LABEL_50;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              frontPanel,
                              (System_String_o *)StringLiteral_4652/*"CompleteMissionPanel"*/,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_50;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)*((_QWORD *)this + 169);
  if ( !this )
    goto LABEL_50;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_50;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object__52629400(
                                                               Object_object__51927708,
                                                               transform,
                                                               (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
  if ( !this )
    goto LABEL_50;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.completeMissionPanel,
    (int32_t)this,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v4->fields.achiveList;
  if ( !this )
    goto LABEL_50;
  if ( !LODWORD(this->fields.achiveList) )
  {
    v56 = v4->fields.__4__this;
    if ( v56 )
    {
      this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v56->fields.titleInfo;
      if ( this )
      {
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0);
        v57 = v4->fields.__4__this;
        if ( v57 )
        {
          completeMissionList = (System_Collections_Generic_List_object__o *)v57->fields.completeMissionList;
          if ( !completeMissionList )
            return;
          completeMissionSprite = v57->fields.completeMissionSprite;
          this = (CompleteMissionComponent___c__DisplayClass23_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       completeMissionList,
                                                                       0,
                                                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( this )
          {
            v61 = v4->fields.__4__this;
            if ( v61 )
            {
              if ( completeMissionSprite )
              {
                CompleteMissionSprite__InitPanel(
                  completeMissionSprite,
                  HIDWORD(this->fields.achiveList),
                  v61->fields.completeMissionListBgSprite,
                  16,
                  v60);
                return;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C93D2C(this, frontPanel);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v64 = v63;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v64,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v64.fields._current;
    v15 = sub_1C93D20(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    if ( !v15 )
      sub_1C93D2C(v16, v17);
    *(_QWORD *)(v15 + 32) = v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 32), (int32_t)v4, v18, v19, v20, v21, v22, v23);
    v25 = (unsigned int)(current - 2);
    *(_DWORD *)(v15 + 24) = v25;
    v26 = v4->fields.__4__this;
    if ( !v26 )
      sub_1C93D2C(v24, v25);
    completeMissionPanel = v26->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_1C93D2C(0, v25);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, v25, 0);
    if ( !Child )
      sub_1C93D2C(0, v29);
    v30 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0);
    if ( !v30 )
      sub_1C93D2C(0, v31);
    gameObject = UnityEngine_Component__get_gameObject(v30, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v33);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v36 = v4->fields.__4__this;
    if ( !v36 )
      sub_1C93D2C(v34, v35);
    v37 = v36->fields.completeMissionPanel;
    if ( !v37 )
      sub_1C93D2C(0, v35);
    v38 = UnityEngine_Transform__GetChild(v37, *(_DWORD *)(v15 + 24), 0);
    if ( !v38 )
      sub_1C93D2C(0, v39);
    v40 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v38, 1, 0);
    if ( !v40 )
      sub_1C93D2C(0, v41);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v40,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v15 + 16) = Component_object;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)Component_object, v43, v44, v45, v46, v47, v48);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_1C93D2C(v49, v50);
    LODWORD(v63.fields._list) = completeMissionEnt->fields.objectId;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
    v62 = *(_DWORD *)(v15 + 24);
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
    v54 = System_String__Format_64467032((System_String_o *)StringLiteral_4651/*"CompleteMission/{0}/{1}"*/, v52, v53, 0);
    v55 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v55,
      (Il2CppObject *)v15,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v54, v55, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v64,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void CompleteMissionComponent___c__DisplayClass23_1___ctor(
        CompleteMissionComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionComponent___c__DisplayClass23_1___createPanel_b__1(
        CompleteMissionComponent___c__DisplayClass23_1_o *this,
        AssetData_o *backPanel,
        const MethodInfo *method)
{
  struct UITexture_o *tex; // x21
  Il2CppObject *v6; // x0
  void *Object_object__51927708; // x0
  __int64 v8; // x1
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x10
  int v11; // w9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v13; // x8
  struct CompleteMissionComponent_o *v14; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v17; // x4
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v18; // x8
  struct CompleteMissionComponent_o *v19; // x8
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2F3E9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    byte_4D2F3E9 = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Object_object__51927708 = System_String__Format((System_String_o *)StringLiteral_25426/*"{0}"*/, v6, 0);
  if ( !backPanel )
    goto LABEL_19;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              backPanel,
                              (System_String_o *)Object_object__51927708,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !tex )
    goto LABEL_19;
  Object_object__51927708 = (void *)((__int64 (__fastcall *)(struct UITexture_o *, void *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
                                      tex,
                                      Object_object__51927708,
                                      tex->klass->vtable._27_set_mainTexture.method);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_19;
  achiveList = CS___8__locals1->fields.achiveList;
  v11 = CS___8__locals1->fields.loadAssetCount + 1;
  CS___8__locals1->fields.loadAssetCount = v11;
  if ( !achiveList )
    goto LABEL_19;
  if ( v11 != achiveList->fields._size )
    return;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  Object_object__51927708 = _4__this->fields.titleInfo;
  if ( !Object_object__51927708 )
    goto LABEL_19;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_object__51927708, 1, 0);
  v13 = this->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_19;
  v14 = v13->fields.__4__this;
  if ( !v14 )
    goto LABEL_19;
  completeMissionList = (System_Collections_Generic_List_object__o *)v14->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v14->fields.completeMissionSprite;
  Object_object__51927708 = System_Collections_Generic_List_object___get_Item(
                              completeMissionList,
                              0,
                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
  if ( !Object_object__51927708
    || (v18 = this->fields.CS___8__locals1) == 0
    || (v19 = v18->fields.__4__this) == 0
    || !completeMissionSprite )
  {
LABEL_19:
    sub_1C93D2C(Object_object__51927708, v8);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    *((_DWORD *)Object_object__51927708 + 7),
    v19->fields.completeMissionListBgSprite,
    16,
    v17);
}


void CompleteMissionComponent_resData___ctor(CompleteMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}