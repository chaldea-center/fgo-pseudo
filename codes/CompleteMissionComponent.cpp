void CompleteMissionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C25DE2 & 1) == 0 )
  {
    sub_1C2D490(&CompleteMissionComponent_TypeInfo);
    byte_4C25DE2 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C25DE1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_4C25DE1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.completeMissionList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4C25DDD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CompleteMissionComponent__AcceptReward_b__33_0__);
    byte_4C25DDD = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0),
        missionListViewManager = this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0),
        !missionListViewManager) )
  {
    sub_1C2D6EC(titleInfo, method);
  }
  CompleteMissionListViewManager__AcceptReward(missionListViewManager, v5, v6);
}


void CompleteMissionComponent__CheckRewardAcceptable(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1C2D6EC(0, method);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewManager_o *missionListViewManager; // x0

  if ( (byte_4C25DDF & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C25DDF = 1;
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
    sub_1C2D6EC(missionListViewManager, v3);
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

  if ( (byte_4C25DDE & 1) == 0 )
  {
    sub_1C2D490(&Method_CompleteMissionComponent_OnClickBack__);
    byte_4C25DDE = 1;
  }
  v3 = Method_CompleteMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CompleteMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CompleteMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C25DD5 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25DD5 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_1C2D6EC(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_titleInfo = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_titleInfo, 0, v8, v9);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_int__o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  TitleInfoControl_o *v23; // x21
  TitleInfoControl_o *v24; // x20
  System_Action_o *v25; // x21
  struct MstMissionEntity_array *Entitys; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  System_Collections_Generic_List_object__o *v35; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x20
  int32_t klass; // w2
  System_String_o *monitor; // x20
  System_Action_o *v39; // x20
  Il2CppObject *v40; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C25DD6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_CompleteMissionComponent_LoadNotificationEnd__);
    sub_1C2D490(&Method_CompleteMissionComponent_OnClickBack__);
    sub_1C2D490(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_MstMissionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_EventMissionEntity___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&MyRoomControl_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C25DD6 = 1;
  }
  entity = 0;
  v40 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  this->fields.reDispAction = redisp_act;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.reDispAction, (int32_t)redisp_act, v12, v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentEventIdList, (int32_t)v14, v15, v16);
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
                 (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_46;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v21, v22);
    v23 = this->fields.titleInfo;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v23 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v23, (UnityEngine_Transform_o *)Instance, 0);
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
    TitleInfoControl__changeTitleInfo_39625124((TitleInfoControl_o *)Instance, 1, 85, 0, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
    v24 = this->fields.titleInfo;
    v25 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, (intptr_t)Method_CompleteMissionComponent_OnClickBack__, 0);
    if ( !v24 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v24, v25, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entitys = (struct MstMissionEntity_array *)DataMasterBase_object__object__int___getEntitys(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                               (const MethodInfo_338701C *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
  this->fields.mstMissionList = Entitys;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mstMissionList, (int32_t)Entitys, v27, v28);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v29);
  this->fields.completeMissionList = VaildCompleteMissionData;
  p_completeMissionList = &this->fields.completeMissionList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.completeMissionList, (int32_t)VaildCompleteMissionData, v32, v33);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v35 = (System_Collections_Generic_List_object__o *)*p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_46;
    v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 v35,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !Instance || !v36 )
      goto LABEL_46;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v36,
           &entity,
           *((_DWORD *)Instance + 7),
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_46;
      klass = (int32_t)entity[2].klass;
      if ( klass >= 1 )
      {
        if ( !Instance )
          goto LABEL_46;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &v40,
                             klass,
                             (const MethodInfo_3387DE4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v40 )
          {
            monitor = (System_String_o *)v40[1].monitor;
            if ( monitor )
              goto LABEL_41;
            goto LABEL_38;
          }
LABEL_46:
          sub_1C2D6EC(Instance, v9);
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
  v39 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v39, 0);
}


void CompleteMissionComponent__RequestMissionReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4C25DDB & 1) == 0 )
  {
    sub_1C2D490(&Method_CompleteMissionComponent_missionRewardCallback__);
    sub_1C2D490(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C25DDB = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0
    || !Request_object )
  {
    sub_1C2D6EC(Request_object, v5);
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
    sub_1C2D6EC(0, method);
  CompleteMissionListViewManager__setAfterAction(missionListViewManager, method);
}


void CompleteMissionComponent__SetBtnEnable(CompleteMissionComponent_o *this, bool isEnable, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C2D6EC(0, isEnable);
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
    sub_1C2D6EC(missionListViewManager, method);
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

  if ( (byte_4C25DDA & 1) == 0 )
  {
    sub_1C2D490(&CompleteMissionComponent_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C25DDA = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_9;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1C2D6EC(currentEventIdList, method);
  MissionListViewManager__SetMode_46853480(v8, 1, CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void CompleteMissionComponent__UnAcceptableRewardDlg(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1C2D6EC(0, method);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void CompleteMissionComponent___AcceptReward_b__33_0(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C2D6EC(0, method);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0);
}


void CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C25DE3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5431/*"END_DISP"*/);
    byte_4C25DE3 = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5431/*"END_DISP"*/, 0);
}


void CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
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
  __int64 v19; // x8
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21
  int v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C25DD7 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__);
    sub_1C2D490(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
    sub_1C2D490(&StringLiteral_4622/*"CompleteMission/{0}/asset"*/);
    byte_4C25DD7 = 1;
  }
  v3 = sub_1C2D6DC(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_16;
  AchivePanelNum = EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, completeMissionList, 0);
  *(_QWORD *)(v3 + 24) = AchivePanelNum;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)AchivePanelNum, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v11 = this->fields.completeMissionList;
  if ( !v11
    || (v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v11,
                      0,
                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0)
    || !v12
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v12,
                   HIDWORD(Instance[1].monitor),
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v3 + 32) = Entity,
        sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)Entity, v14, v15),
        v19 = *(_QWORD *)(v3 + 32),
        *(_DWORD *)(v3 + 40) = 0,
        !v19) )
  {
LABEL_16:
    sub_1C2D6EC(Instance, completeMissionList);
  }
  v23 = *(_DWORD *)(v19 + 20);
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v16, v17, v18);
  v21 = System_String__Format((System_String_o *)StringLiteral_4622/*"CompleteMission/{0}/asset"*/, v20, 0);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v3,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v21, v22, 1, 0);
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
  __int64 v7; // x2
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v10; // w24
  Il2CppClass **v11; // x8
  Il2CppClass *v12; // x22
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int size; // w8
  int32_t v17; // w23
  int32_t v18; // w21

  v2 = this;
  if ( (byte_4C25DD8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    this = (CompleteMissionComponent_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C25DD8 = 1;
  }
  currentEventIdList = v2->fields.currentEventIdList;
  v2->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_34;
  v4 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v4;
  this = (CompleteMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v2->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_34;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2D6F4(this, method, v7);
      v11 = &mstMissionList->obj.klass + (int)v10;
      v12 = v11[4];
      if ( !v12 )
        break;
      this = (CompleteMissionComponent_o *)MstMissionEntity__isActiveNow((MstMissionEntity_o *)v11[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (CompleteMissionComponent_o *)EventMissionMaster__getCompleteMissionList(
                                               (EventMissionMaster_o *)MasterData_object,
                                               HIDWORD(v12->_1.name),
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
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (CompleteMissionComponent_o *)v2->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v12->_1.name);
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
              (int32_t)method,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_21;
    }
LABEL_34:
    sub_1C2D6EC(this, method);
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
                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_34;
          if ( v17 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                   v6,
                                                   v18,
                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  struct UnityEngine_Transform_o *completeMissionPanel; // x8

  v4 = this;
  if ( (byte_4C25DDC & 1) == 0 )
  {
    sub_1C2D490(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11077/*"REQUEST_OK"*/);
    sub_1C2D490(&StringLiteral_11075/*"REQUEST_NG"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    this = (CompleteMissionComponent_o *)sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C25DDC = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( !System_String__Equals_63493168(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
  {
    v6 = (Il2CppObject *)System_String__Concat_63496112(
                           (System_String_o *)StringLiteral_15801/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16055/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                           v6,
                                           (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1C2D6F4(this, result, v7);
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
            v8);
          this = (CompleteMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v5 = &StringLiteral_11077/*"REQUEST_OK"*/;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    sub_1C2D6EC(this, result);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_16;
  v5 = &StringLiteral_11075/*"REQUEST_NG"*/;
LABEL_15:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void CompleteMissionComponent__setMissionCompleteNum(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w23
  int32_t compMissionNum; // w22
  UserEventMissionMaster_o *v11; // x20
  int32_t v12; // w21
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C25DD9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_25133/*"{0}/{1}"*/);
    byte_4C25DD9 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_14;
  size = currentEventIdList->fields._size;
  if ( size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v11 = (UserEventMissionMaster_o *)Instance;
    v12 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    currentEventIdList,
                                    v12,
                                    (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v11 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v11, (int32_t)Instance, 0);
      ++v12;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v12 )
        goto LABEL_12;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_14:
    sub_1C2D6EC(Instance, v4);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_12:
  eventMissionTxt = this->fields.eventMissionTxt;
  v20 = compMissionNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v5, v6, v7);
  totalMissionNum = this->fields.totalMissionNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum, v15, v16, v17);
  Instance = (DataManager_o *)System_String__Format_63499156((System_String_o *)StringLiteral_25133/*"{0}/{1}"*/, v14, v18, 0);
  if ( !eventMissionTxt )
    goto LABEL_14;
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0);
}


void CompleteMissionComponent__setRecieveModifyItem(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_4C25DE0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__);
    byte_4C25DE0 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v4 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0),
        !v4) )
  {
    sub_1C2D6EC(missionListViewManager, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A70F78;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A70F30;
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
  if ( (byte_4C25DE4 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C25DE4 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t current; // w21
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  struct CompleteMissionComponent_o *v18; // x8
  UnityEngine_Transform_o *completeMissionPanel; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v21; // x1
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  struct CompleteMissionComponent_o *v28; // x8
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Transform_o *v30; // x0
  __int64 v31; // x1
  UnityEngine_Component_o *v32; // x0
  __int64 v33; // x1
  Il2CppObject *Component_object; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x2
  System_String_o *v48; // x21
  AssetLoader_LoadEndDataHandler_o *v49; // x22
  struct CompleteMissionComponent_o *v50; // x8
  struct CompleteMissionComponent_o *v51; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v54; // x4
  struct CompleteMissionComponent_o *v55; // x8
  int v56; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v58; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C25DE5 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__);
    sub_1C2D490(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    sub_1C2D490(&StringLiteral_4624/*"CompleteMissionPanel"*/);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_1C2D490(&StringLiteral_4623/*"CompleteMission/{0}/{1}"*/);
    byte_4C25DE5 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( !frontPanel )
    goto LABEL_50;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              frontPanel,
                              (System_String_o *)StringLiteral_4624/*"CompleteMissionPanel"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object__51752420(
                                                               Object_object__51051712,
                                                               transform,
                                                               (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
  if ( !this )
    goto LABEL_50;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.completeMissionPanel, (int32_t)this, v8, v9);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v4->fields.achiveList;
  if ( !this )
    goto LABEL_50;
  if ( !LODWORD(this->fields.achiveList) )
  {
    v50 = v4->fields.__4__this;
    if ( v50 )
    {
      this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v50->fields.titleInfo;
      if ( this )
      {
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0);
        v51 = v4->fields.__4__this;
        if ( v51 )
        {
          completeMissionList = (System_Collections_Generic_List_object__o *)v51->fields.completeMissionList;
          if ( !completeMissionList )
            return;
          completeMissionSprite = v51->fields.completeMissionSprite;
          this = (CompleteMissionComponent___c__DisplayClass23_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       completeMissionList,
                                                                       0,
                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( this )
          {
            v55 = v4->fields.__4__this;
            if ( v55 )
            {
              if ( completeMissionSprite )
              {
                CompleteMissionSprite__InitPanel(
                  completeMissionSprite,
                  HIDWORD(this->fields.achiveList),
                  v55->fields.completeMissionListBgSprite,
                  16,
                  v54);
                return;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C2D6EC(this, frontPanel);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v58 = v57;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v58,
            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v58.fields._current;
    v11 = sub_1C2D6DC(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    if ( !v11 )
      sub_1C2D6EC(v12, v13);
    *(_QWORD *)(v11 + 32) = v4;
    sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v4, v14, v15);
    v17 = (unsigned int)(current - 2);
    *(_DWORD *)(v11 + 24) = v17;
    v18 = v4->fields.__4__this;
    if ( !v18 )
      sub_1C2D6EC(v16, v17);
    completeMissionPanel = v18->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_1C2D6EC(0, v17);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, v17, 0);
    if ( !Child )
      sub_1C2D6EC(0, v21);
    v22 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0);
    if ( !v22 )
      sub_1C2D6EC(0, v23);
    gameObject = UnityEngine_Component__get_gameObject(v22, 0);
    if ( !gameObject )
      sub_1C2D6EC(0, v25);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v28 = v4->fields.__4__this;
    if ( !v28 )
      sub_1C2D6EC(v26, v27);
    v29 = v28->fields.completeMissionPanel;
    if ( !v29 )
      sub_1C2D6EC(0, v27);
    v30 = UnityEngine_Transform__GetChild(v29, *(_DWORD *)(v11 + 24), 0);
    if ( !v30 )
      sub_1C2D6EC(0, v31);
    v32 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v30, 1, 0);
    if ( !v32 )
      sub_1C2D6EC(0, v33);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v32,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v11 + 16) = Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Component_object, v35, v36);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_1C2D6EC(v37, v38);
    LODWORD(v57.fields._list) = completeMissionEnt->fields.objectId;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v39, v40, v41);
    v56 = *(_DWORD *)(v11 + 24);
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v44, v45, v46);
    v48 = System_String__Format_63499156((System_String_o *)StringLiteral_4623/*"CompleteMission/{0}/{1}"*/, v43, v47, 0);
    v49 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v49,
      (Il2CppObject *)v11,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v48, v49, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v58,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  struct UITexture_o *tex; // x21
  Il2CppObject *v8; // x0
  void *Object_object__51051712; // x0
  __int64 v10; // x1
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x10
  int v13; // w9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v15; // x8
  struct CompleteMissionComponent_o *v16; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v19; // x4
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v20; // x8
  struct CompleteMissionComponent_o *v21; // x8
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C25DE6 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C2D490(&StringLiteral_25078/*"{0}"*/);
    byte_4C25DE6 = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx, method, v3, v4);
  Object_object__51051712 = System_String__Format((System_String_o *)StringLiteral_25078/*"{0}"*/, v8, 0);
  if ( !backPanel )
    goto LABEL_19;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              backPanel,
                              (System_String_o *)Object_object__51051712,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !tex )
    goto LABEL_19;
  Object_object__51051712 = (void *)((__int64 (__fastcall *)(struct UITexture_o *, void *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
                                      tex,
                                      Object_object__51051712,
                                      tex->klass->vtable._27_set_mainTexture.method);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_19;
  achiveList = CS___8__locals1->fields.achiveList;
  v13 = CS___8__locals1->fields.loadAssetCount + 1;
  CS___8__locals1->fields.loadAssetCount = v13;
  if ( !achiveList )
    goto LABEL_19;
  if ( v13 != achiveList->fields._size )
    return;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  Object_object__51051712 = _4__this->fields.titleInfo;
  if ( !Object_object__51051712 )
    goto LABEL_19;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_object__51051712, 1, 0);
  v15 = this->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_19;
  v16 = v15->fields.__4__this;
  if ( !v16 )
    goto LABEL_19;
  completeMissionList = (System_Collections_Generic_List_object__o *)v16->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v16->fields.completeMissionSprite;
  Object_object__51051712 = System_Collections_Generic_List_object___get_Item(
                              completeMissionList,
                              0,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
  if ( !Object_object__51051712
    || (v20 = this->fields.CS___8__locals1) == 0
    || (v21 = v20->fields.__4__this) == 0
    || !completeMissionSprite )
  {
LABEL_19:
    sub_1C2D6EC(Object_object__51051712, v10);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    *((_DWORD *)Object_object__51051712 + 7),
    v21->fields.completeMissionListBgSprite,
    16,
    v19);
}


void CompleteMissionComponent_resData___ctor(CompleteMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}