void CompleteMissionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C364B9 & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionComponent_TypeInfo);
    byte_4C364B9 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C364B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_4C364B8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.completeMissionList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4C364B4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionComponent__AcceptReward_b__33_0__);
    byte_4C364B4 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0),
        missionListViewManager = this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0),
        !missionListViewManager) )
  {
    sub_1C32E7C(titleInfo);
  }
  CompleteMissionListViewManager__AcceptReward(missionListViewManager, v5, v6);
}


void CompleteMissionComponent__CheckRewardAcceptable(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1C32E7C(0);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  ListViewManager_o *missionListViewManager; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C364B6 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C364B6 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0);
  missionListViewManager = (ListViewManager_o *)this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (ListViewManager__DestroyList(missionListViewManager, 0),
        EventRewardSaveData__SaveAllMissionData(0),
        (missionListViewManager = (ListViewManager_o *)this->fields.completeMissionSprite) == 0)
    || (CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)missionListViewManager, v4),
        (missionListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0)) == 0) )
  {
    sub_1C32E7C(missionListViewManager);
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

  if ( (byte_4C364B5 & 1) == 0 )
  {
    sub_1C32C20(&Method_CompleteMissionComponent_OnClickBack__);
    byte_4C364B5 = 1;
  }
  v3 = Method_CompleteMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CompleteMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_CompleteMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C364AC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C364AC = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_titleInfo = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)p_titleInfo, 0, v7, v8);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_int__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  TitleInfoControl_o *v22; // x21
  TitleInfoControl_o *v23; // x20
  System_Action_o *v24; // x21
  struct MstMissionEntity_array *Entitys; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  System_Collections_Generic_List_object__o *v34; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x20
  int32_t klass; // w2
  System_String_o *monitor; // x20
  System_Action_o *v38; // x20
  Il2CppObject *v39; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C364AD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionComponent_LoadNotificationEnd__);
    sub_1C32C20(&Method_CompleteMissionComponent_OnClickBack__);
    sub_1C32C20(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_MstMissionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_EventMissionEntity___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&MyRoomControl_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C364AD = 1;
  }
  entity = 0;
  v39 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  this->fields.reDispAction = redisp_act;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.reDispAction, (int32_t)redisp_act, v11, v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentEventIdList, (int32_t)v13, v14, v15);
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
                 (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_46;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v20, v21);
    v22 = this->fields.titleInfo;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v22 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v22, (UnityEngine_Transform_o *)Instance, 0);
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
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, 0, 85, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__changeTitleInfo_39747676((TitleInfoControl_o *)Instance, 1, 85, 0, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
    v23 = this->fields.titleInfo;
    v24 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, (intptr_t)Method_CompleteMissionComponent_OnClickBack__, 0);
    if ( !v23 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v23, v24, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entitys = (struct MstMissionEntity_array *)DataMasterBase_object__object__int___getEntitys(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                               (const MethodInfo_3395ABC *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
  this->fields.mstMissionList = Entitys;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mstMissionList, (int32_t)Entitys, v26, v27);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v28);
  this->fields.completeMissionList = VaildCompleteMissionData;
  p_completeMissionList = &this->fields.completeMissionList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.completeMissionList, (int32_t)VaildCompleteMissionData, v31, v32);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v34 = (System_Collections_Generic_List_object__o *)*p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_46;
    v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 v34,
                 0,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !Instance || !v35 )
      goto LABEL_46;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v35,
           &entity,
           *((_DWORD *)Instance + 7),
           (const MethodInfo_3396884 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_46;
      klass = (int32_t)entity[2].klass;
      if ( klass >= 1 )
      {
        if ( !Instance )
          goto LABEL_46;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &v39,
                             klass,
                             (const MethodInfo_3396884 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v39 )
          {
            monitor = (System_String_o *)v39[1].monitor;
            if ( monitor )
              goto LABEL_41;
            goto LABEL_38;
          }
LABEL_46:
          sub_1C32E7C(Instance);
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
  v38 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v38, 0);
}


void CompleteMissionComponent__RequestMissionReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4C364B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_CompleteMissionComponent_missionRewardCallback__);
    sub_1C32C20(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C364B2 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0
    || !Request_object )
  {
    sub_1C32E7C(Request_object);
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
    sub_1C32E7C(0);
  CompleteMissionListViewManager__setAfterAction(missionListViewManager, method);
}


void CompleteMissionComponent__SetBtnEnable(CompleteMissionComponent_o *this, bool isEnable, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C32E7C(0);
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
    sub_1C32E7C(missionListViewManager);
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

  if ( (byte_4C364B1 & 1) == 0 )
  {
    sub_1C32C20(&CompleteMissionComponent_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C364B1 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_9;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1C32E7C(currentEventIdList);
  MissionListViewManager__SetMode_46976488(v8, 1, CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void CompleteMissionComponent__UnAcceptableRewardDlg(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1C32E7C(0);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void CompleteMissionComponent___AcceptReward_b__33_0(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C32E7C(0);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0);
}


void CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C364BA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5439/*"END_DISP"*/);
    byte_4C364BA = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5439/*"END_DISP"*/, 0);
}


void CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  System_Collections_Generic_List_int__o *AchivePanelNum; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_EventMissionEntity__o *v11; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  Il2CppObject *Entity; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  __int64 v22; // x8
  Il2CppObject *v23; // x0
  System_String_o *v24; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  int v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C364AE & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__);
    sub_1C32C20(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
    sub_1C32C20(&StringLiteral_4630/*"CompleteMission/{0}/asset"*/);
    byte_4C364AE = 1;
  }
  v3 = sub_1C32E6C(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_16;
  AchivePanelNum = EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, completeMissionList, 0);
  *(_QWORD *)(v3 + 24) = AchivePanelNum;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)AchivePanelNum, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v11 = this->fields.completeMissionList;
  if ( !v11
    || (v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v11,
                      0,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0)
    || !v12
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v12,
                   HIDWORD(Instance[1].monitor),
                   (const MethodInfo_3396838 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v3 + 32) = Entity,
        sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)Entity, v14, v15),
        v22 = *(_QWORD *)(v3 + 32),
        *(_DWORD *)(v3 + 40) = 0,
        !v22) )
  {
LABEL_16:
    sub_1C32E7C(Instance);
  }
  v26 = *(_DWORD *)(v22 + 20);
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v16, v17, v18, v19, v20, v21);
  v24 = System_String__Format((System_String_o *)StringLiteral_4630/*"CompleteMission/{0}/asset"*/, v23, 0);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v3,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v24, v25, 1, 0);
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
  int32_t name_high; // w1
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int size; // w8
  int32_t v17; // w23
  int32_t v18; // w21

  v2 = this;
  if ( (byte_4C364AF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    this = (CompleteMissionComponent_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C364AF = 1;
  }
  currentEventIdList = v2->fields.currentEventIdList;
  v2->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_34;
  v4 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v4;
  this = (CompleteMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
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
        sub_1C32E84(this);
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
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v6 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v6,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (CompleteMissionComponent_o *)v2->fields.currentEventIdList;
          if ( !this )
            break;
          name_high = HIDWORD(v11->_1.name);
          m_CachedPtr = this->fields.m_CachedPtr;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              name_high,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = name_high;
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_21;
    }
LABEL_34:
    sub_1C32E7C(this);
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
                                             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_34;
      v17 = this->fields.m_CachedPtr;
      if ( v6->fields._size >= 1 )
      {
        v18 = 0;
        do
        {
          this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v6,
                                                 v18,
                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_34;
          if ( v17 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                   v6,
                                                   v18,
                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_34;
            v17 = this->fields.m_CachedPtr;
          }
        }
        while ( ++v18 < v6->fields._size );
      }
      v2->fields.currentMissionId = v17;
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
  if ( (byte_4C364B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11083/*"REQUEST_OK"*/);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    this = (CompleteMissionComponent_o *)sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C364B3 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( !System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    v6 = (Il2CppObject *)System_String__Concat_63556792(
                           (System_String_o *)StringLiteral_15802/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16056/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                           v6,
                                           (const MethodInfo_314C85C *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1C32E84(this);
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
            v5 = &StringLiteral_11083/*"REQUEST_OK"*/;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    sub_1C32E7C(this);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_16;
  v5 = &StringLiteral_11081/*"REQUEST_NG"*/;
LABEL_15:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void CompleteMissionComponent__setMissionCompleteNum(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w23
  int32_t compMissionNum; // w22
  UserEventMissionMaster_o *v13; // x20
  int32_t v14; // w21
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C364B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_25151/*"{0}/{1}"*/);
    byte_4C364B0 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_14;
  size = currentEventIdList->fields._size;
  if ( size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v13 = (UserEventMissionMaster_o *)Instance;
    v14 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    currentEventIdList,
                                    v14,
                                    (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v13 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v13, (int32_t)Instance, 0);
      ++v14;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v14 )
        goto LABEL_12;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_14:
    sub_1C32E7C(Instance);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_12:
  eventMissionTxt = this->fields.eventMissionTxt;
  v25 = compMissionNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v4, v5, v6, v7, v8, v9);
  totalMissionNum = this->fields.totalMissionNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum, v17, v18, v19, v20, v21, v22);
  Instance = (DataManager_o *)System_String__Format_63559836((System_String_o *)StringLiteral_25151/*"{0}/{1}"*/, v16, v23, 0);
  if ( !eventMissionTxt )
    goto LABEL_14;
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0);
}


void CompleteMissionComponent__setRecieveModifyItem(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_4C364B7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__);
    byte_4C364B7 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v4 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0),
        !v4) )
  {
    sub_1C32E7C(missionListViewManager);
  }
  MissionListViewManager__SetMode(v4, 3, v5, 0);
}


void CompleteMissionComponent_ClickDelegate___ctor(
        CompleteMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A766A0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76658;
}


System_IAsyncResult_o *CompleteMissionComponent_ClickDelegate__BeginInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isDecide;
  if ( (byte_4C364BB & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C364BB = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  Il2CppObject *Object_object__51111776; // x20
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t current; // w21
  __int64 v11; // x20
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  struct CompleteMissionComponent_o *v16; // x8
  UnityEngine_Transform_o *completeMissionPanel; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x0
  struct CompleteMissionComponent_o *v22; // x8
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  UnityEngine_Component_o *v25; // x0
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x2
  System_String_o *v45; // x21
  AssetLoader_LoadEndDataHandler_o *v46; // x22
  struct CompleteMissionComponent_o *v47; // x8
  struct CompleteMissionComponent_o *v48; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v51; // x4
  struct CompleteMissionComponent_o *v52; // x8
  int v53; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v55; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C364BC & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__);
    sub_1C32C20(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    sub_1C32C20(&StringLiteral_4632/*"CompleteMissionPanel"*/);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_1C32C20(&StringLiteral_4631/*"CompleteMission/{0}/{1}"*/);
    byte_4C364BC = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( !frontPanel )
    goto LABEL_50;
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              frontPanel,
                              (System_String_o *)StringLiteral_4632/*"CompleteMissionPanel"*/,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_50;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)this[28].fields.completeMissionEnt;
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
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object__51812484(
                                                               Object_object__51111776,
                                                               transform,
                                                               (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
  if ( !this )
    goto LABEL_50;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.completeMissionPanel, (int32_t)this, v8, v9);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v4->fields.achiveList;
  if ( !this )
    goto LABEL_50;
  if ( !LODWORD(this->fields.achiveList) )
  {
    v47 = v4->fields.__4__this;
    if ( v47 )
    {
      this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v47->fields.titleInfo;
      if ( this )
      {
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0);
        v48 = v4->fields.__4__this;
        if ( v48 )
        {
          completeMissionList = (System_Collections_Generic_List_object__o *)v48->fields.completeMissionList;
          if ( !completeMissionList )
            return;
          completeMissionSprite = v48->fields.completeMissionSprite;
          this = (CompleteMissionComponent___c__DisplayClass23_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       completeMissionList,
                                                                       0,
                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( this )
          {
            v52 = v4->fields.__4__this;
            if ( v52 )
            {
              if ( completeMissionSprite )
              {
                CompleteMissionSprite__InitPanel(
                  completeMissionSprite,
                  HIDWORD(this->fields.achiveList),
                  v52->fields.completeMissionListBgSprite,
                  16,
                  v51);
                return;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C32E7C(this);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v55 = v54;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v55,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v55.fields._current;
    v11 = sub_1C32E6C(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    if ( !v11 )
      sub_1C32E7C(v12);
    *(_QWORD *)(v11 + 32) = v4;
    sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v4, v13, v14);
    *(_DWORD *)(v11 + 24) = current - 2;
    v16 = v4->fields.__4__this;
    if ( !v16 )
      sub_1C32E7C(v15);
    completeMissionPanel = v16->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_1C32E7C(0);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, current - 2, 0);
    if ( !Child )
      sub_1C32E7C(0);
    v19 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0);
    if ( !v19 )
      sub_1C32E7C(0);
    gameObject = UnityEngine_Component__get_gameObject(v19, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v22 = v4->fields.__4__this;
    if ( !v22 )
      sub_1C32E7C(v21);
    v23 = v22->fields.completeMissionPanel;
    if ( !v23 )
      sub_1C32E7C(0);
    v24 = UnityEngine_Transform__GetChild(v23, *(_DWORD *)(v11 + 24), 0);
    if ( !v24 )
      sub_1C32E7C(0);
    v25 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v24, 1, 0);
    if ( !v25 )
      sub_1C32E7C(0);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v25,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v11 + 16) = Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Component_object, v27, v28);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_1C32E7C(v29);
    LODWORD(v54.fields._list) = completeMissionEnt->fields.objectId;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v30, v31, v32, v33, v34, v35);
    v53 = *(_DWORD *)(v11 + 24);
    v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v38, v39, v40, v41, v42, v43);
    v45 = System_String__Format_63559836((System_String_o *)StringLiteral_4631/*"CompleteMission/{0}/{1}"*/, v37, v44, 0);
    v46 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v46,
      (Il2CppObject *)v11,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v45, v46, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v55,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  struct UITexture_o *tex; // x21
  Il2CppObject *v11; // x0
  void *Object_object__51111776; // x0
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x10
  int v15; // w9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v17; // x8
  struct CompleteMissionComponent_o *v18; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v21; // x4
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v22; // x8
  struct CompleteMissionComponent_o *v23; // x8
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C364BD & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    byte_4C364BD = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx, method, v3, v4, v5, v6, v7);
  Object_object__51111776 = System_String__Format((System_String_o *)StringLiteral_25096/*"{0}"*/, v11, 0);
  if ( !backPanel )
    goto LABEL_19;
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              backPanel,
                              (System_String_o *)Object_object__51111776,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !tex )
    goto LABEL_19;
  Object_object__51111776 = (void *)((__int64 (__fastcall *)(struct UITexture_o *, void *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
                                      tex,
                                      Object_object__51111776,
                                      tex->klass->vtable._27_set_mainTexture.method);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_19;
  achiveList = CS___8__locals1->fields.achiveList;
  v15 = CS___8__locals1->fields.loadAssetCount + 1;
  CS___8__locals1->fields.loadAssetCount = v15;
  if ( !achiveList )
    goto LABEL_19;
  if ( v15 != achiveList->fields._size )
    return;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  Object_object__51111776 = _4__this->fields.titleInfo;
  if ( !Object_object__51111776 )
    goto LABEL_19;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_object__51111776, 1, 0);
  v17 = this->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_19;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_19;
  completeMissionList = (System_Collections_Generic_List_object__o *)v18->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v18->fields.completeMissionSprite;
  Object_object__51111776 = System_Collections_Generic_List_object___get_Item(
                              completeMissionList,
                              0,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
  if ( !Object_object__51111776
    || (v22 = this->fields.CS___8__locals1) == 0
    || (v23 = v22->fields.__4__this) == 0
    || !completeMissionSprite )
  {
LABEL_19:
    sub_1C32E7C(Object_object__51111776);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    *((_DWORD *)Object_object__51111776 + 7),
    v23->fields.completeMissionListBgSprite,
    16,
    v21);
}


void CompleteMissionComponent_resData___ctor(CompleteMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}