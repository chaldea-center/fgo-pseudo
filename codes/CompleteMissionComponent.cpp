void __fastcall CompleteMissionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4D098 & 1) == 0 )
  {
    sub_1B863B8(&CompleteMissionComponent_TypeInfo, v1);
    byte_4A4D098 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void __fastcall CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A4D097 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v3);
    byte_4A4D097 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.completeMissionList, (int32_t)v4, v5, v6);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4A4D093 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CompleteMissionComponent__AcceptReward_b__33_0__, v3);
    byte_4A4D093 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL),
        missionListViewManager = this->fields.missionListViewManager,
        v6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0LL),
        !missionListViewManager) )
  {
    sub_1B86614(titleInfo, method);
  }
  CompleteMissionListViewManager__AcceptReward(missionListViewManager, v6, v7);
}


void __fastcall CompleteMissionComponent__CheckRewardAcceptable(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1B86614(0LL, method);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewManager_o *missionListViewManager; // x0

  if ( (byte_4A4D095 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    byte_4A4D095 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
  missionListViewManager = (ListViewManager_o *)this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (ListViewManager__DestroyList(missionListViewManager, 0LL),
        EventRewardSaveData__SaveAllMissionData(0LL),
        (missionListViewManager = (ListViewManager_o *)this->fields.completeMissionSprite) == 0LL)
    || (CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)missionListViewManager, v3),
        (missionListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL)) == 0LL) )
  {
    sub_1B86614(missionListViewManager, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionListViewManager, 0, 0LL);
}


void __fastcall CompleteMissionComponent__LoadNotificationEnd(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  EventRewardSaveData__LoadCompleteMissionData(0LL);
  CompleteMissionComponent__SetMissionDisp(this, v3);
  CompleteMissionComponent__createPanel(this, v4);
}


void __fastcall CompleteMissionComponent__OnClickBack(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CompleteMissionComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4A4D094 & 1) == 0 )
  {
    sub_1B863B8(&Method_CompleteMissionComponent_OnClickBack__, method);
    byte_4A4D094 = 1;
  }
  v3 = Method_CompleteMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CompleteMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_CompleteMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall CompleteMissionComponent__OnDestroy(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A4D08B & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4D08B = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1B86614(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)p_titleInfo, 0, v8, v9);
  }
}


void __fastcall CompleteMissionComponent__Open(
        CompleteMissionComponent_o *this,
        CompleteMissionComponent_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        int32_t typeIndex,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_int__o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  TitleInfoControl_o *v43; // x21
  TitleInfoControl_o *v44; // x20
  System_Action_o *v45; // x21
  struct MstMissionEntity_array *Entitys; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  System_Collections_Generic_List_object__o *v55; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x20
  int32_t klass; // w2
  System_String_o *monitor; // x20
  System_Action_o *v59; // x20
  Il2CppObject *v60; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A4D08C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&AtlasManager_TypeInfo, v8);
    sub_1B863B8(&Method_CompleteMissionComponent_LoadNotificationEnd__, v9);
    sub_1B863B8(&Method_CompleteMissionComponent_OnClickBack__, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_BgmMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMaster_CompleteMissionMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_MstMissionMaster___, v13);
    sub_1B863B8(&DataManager_TypeInfo, v14);
    sub_1B863B8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v15);
    sub_1B863B8(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__, v16);
    sub_1B863B8(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__, v17);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_EventMissionEntity___, v18);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v21);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B863B8(&MyRoomControl_TypeInfo, v23);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v24);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v25);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26);
    sub_1B863B8(&SoundManager_TypeInfo, v27);
    byte_4A4D08C = 1;
  }
  entity = 0LL;
  v60 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v30, v31);
  this->fields.reDispAction = redisp_act;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.reDispAction, (int32_t)redisp_act, v32, v33);
  v34 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v34;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.currentEventIdList, (int32_t)v34, v35, v36);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__Instantiate_object_(
                 titlePrefab,
                 (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_46;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v41, v42);
    v43 = this->fields.titleInfo;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v43 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v43, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__SetActiveTitleName((TitleInfoControl_o *)Instance, 0, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setDepth((TitleInfoControl_o *)Instance, 20, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 38, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, 0LL, 83, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__changeTitleInfo_38093432((TitleInfoControl_o *)Instance, 1, 83, 0, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v44 = this->fields.titleInfo;
    v45 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, (intptr_t)Method_CompleteMissionComponent_OnClickBack__, 0LL);
    if ( !v44 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v44, v45, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entitys = (struct MstMissionEntity_array *)DataMasterBase_object__object__int___getEntitys(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                               (const MethodInfo_3213504 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
  this->fields.mstMissionList = Entitys;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mstMissionList, (int32_t)Entitys, v47, v48);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v49);
  this->fields.completeMissionList = VaildCompleteMissionData;
  p_completeMissionList = &this->fields.completeMissionList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.completeMissionList, (int32_t)VaildCompleteMissionData, v52, v53);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v55 = (System_Collections_Generic_List_object__o *)*p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_46;
    v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 v55,
                 0,
                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !Instance || !v56 )
      goto LABEL_46;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v56,
           &entity,
           *((_DWORD *)Instance + 7),
           (const MethodInfo_32142CC *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_46;
      klass = (int32_t)entity[2].klass;
      if ( klass >= 1 )
      {
        if ( !Instance )
          goto LABEL_46;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &v60,
                             klass,
                             (const MethodInfo_32142CC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v60 )
          {
            monitor = (System_String_o *)v60[1].monitor;
            if ( monitor )
              goto LABEL_41;
            goto LABEL_38;
          }
LABEL_46:
          sub_1B86614(Instance, v29);
        }
      }
    }
  }
LABEL_38:
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  monitor = MyRoomControl__getChangeMyRoomBgm(0LL);
LABEL_41:
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(monitor, 0LL);
  v59 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v59, 0LL);
}


void __fastcall CompleteMissionComponent__RequestMissionReward(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4A4D091 & 1) == 0 )
  {
    sub_1B863B8(&Method_CompleteMissionComponent_missionRewardCallback__, method);
    sub_1B863B8(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4A4D091 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0LL
    || !Request_object )
  {
    sub_1B86614(Request_object, v8);
  }
  EventMissionClearRewardRequest__beginRequest(
    (EventMissionClearRewardRequest_o *)Request_object,
    missionToRecieve->fields.id,
    0LL);
}


void __fastcall CompleteMissionComponent__SetAfterAction(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1B86614(0LL, method);
  CompleteMissionListViewManager__setAfterAction(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent__SetBtnEnable(
        CompleteMissionComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B86614(0LL, isEnable);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, isEnable, 0LL);
}


void __fastcall CompleteMissionComponent__SetMissionDisp(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *missionListViewManager; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  missionListViewManager = (UnityEngine_Component_o *)this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              missionListViewManager,
                                                              0LL)) == 0LL )
  {
    sub_1B86614(missionListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionListViewManager, 1, 0LL);
  CompleteMissionComponent__SetUpMissionListView(this, v4);
  CompleteMissionComponent__setMissionCompleteNum(this, v5);
}


void __fastcall CompleteMissionComponent__SetUpMissionListView(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  System_Int32_array *v7; // x2
  const MethodInfo *v8; // x5
  MissionListViewManager_o *v9; // x19

  if ( (byte_4A4D090 & 1) == 0 )
  {
    sub_1B863B8(&CompleteMissionComponent_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    byte_4A4D090 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_9;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !missionListViewManager )
    goto LABEL_9;
  CompleteMissionListViewManager__CreateList(
    missionListViewManager,
    completeMissionList,
    v7,
    0,
    this->fields.reDispAction,
    v8);
  currentEventIdList = (System_Collections_Generic_List_int__o *)CompleteMissionComponent_TypeInfo;
  v9 = (MissionListViewManager_o *)this->fields.missionListViewManager;
  if ( !CompleteMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CompleteMissionComponent_TypeInfo);
  if ( !v9 )
LABEL_9:
    sub_1B86614(currentEventIdList, method);
  MissionListViewManager__SetMode_45282200(
    v9,
    1,
    CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall CompleteMissionComponent__UnAcceptableRewardDlg(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1B86614(0LL, method);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent___AcceptReward_b__33_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B86614(0LL, method);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
}


void __fastcall CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A4D099 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_5403/*"END_DISP"*/, method);
    byte_4A4D099 = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B86614(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5403/*"END_DISP"*/, 0LL);
}


void __fastcall CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_int__o *AchivePanelNum; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_List_EventMissionEntity__o *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x8
  Il2CppObject *v30; // x0
  System_String_o *v31; // x20
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4D08D & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v5);
    sub_1B863B8(&int_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B863B8(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__, v10);
    sub_1B863B8(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo, v11);
    sub_1B863B8(&StringLiteral_4602/*"CompleteMission/{0}/asset"*/, v12);
    byte_4A4D08D = 1;
  }
  v13 = sub_1B86604(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_16;
  AchivePanelNum = EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, completeMissionList, 0LL);
  *(_QWORD *)(v13 + 24) = AchivePanelNum;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)AchivePanelNum, v19, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v21 = this->fields.completeMissionList;
  if ( !v21
    || (v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v21,
                      0,
                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0LL)
    || !v22
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v22,
                   HIDWORD(Instance[1].monitor),
                   (const MethodInfo_3214280 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v13 + 32) = Entity,
        sub_1B8635C((CGThumbnailListItem_o *)(v13 + 32), (int32_t)Entity, v24, v25),
        v29 = *(_QWORD *)(v13 + 32),
        *(_DWORD *)(v13 + 40) = 0,
        !v29) )
  {
LABEL_16:
    sub_1B86614(Instance, completeMissionList);
  }
  v33 = *(_DWORD *)(v29 + 20);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v26, v27, v28);
  v31 = System_String__Format((System_String_o *)StringLiteral_4602/*"CompleteMission/{0}/asset"*/, v30, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v31, v32, 1, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall CompleteMissionComponent__getVaildCompleteMissionData(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v12; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v17; // w24
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x22
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int size; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v25; // w21

  v2 = this;
  if ( (byte_4A4D08E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v8);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    this = (CompleteMissionComponent_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A4D08E = 1;
  }
  currentEventIdList = v2->fields.currentEventIdList;
  v2->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_34;
  v12 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v12;
  this = (CompleteMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v2->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_34;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1B8661C(this, method);
      v18 = &mstMissionList->obj.klass + (int)v17;
      v19 = v18[4];
      if ( !v19 )
        break;
      this = (CompleteMissionComponent_o *)MstMissionEntity__isActiveNow((MstMissionEntity_o *)v18[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (CompleteMissionComponent_o *)EventMissionMaster__getCompleteMissionList(
                                               (EventMissionMaster_o *)MasterData_object,
                                               HIDWORD(v19->_1.name),
                                               0LL);
        if ( !this )
          break;
        method = (const MethodInfo *)this;
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v14,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (CompleteMissionComponent_o *)v2->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v19->_1.name);
          v20 = *(_QWORD *)&this->fields.m_CachedPtr;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v20 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_35DF934 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v20 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_21;
    }
LABEL_34:
    sub_1B86614(this, method);
  }
LABEL_21:
  if ( v14 )
  {
    size = v14->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      v2->fields.totalMissionNum = size;
      this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v14,
                                             0,
                                             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_34;
      m_CachedPtr = this->fields.m_CachedPtr;
      if ( v14->fields._size >= 1 )
      {
        v25 = 0;
        do
        {
          this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v14,
                                                 v25,
                                                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_34;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                   v14,
                                                   v25,
                                                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_34;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v25 < v14->fields._size );
      }
      v2->fields.currentMissionId = m_CachedPtr;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v14;
}


CompleteMissionListViewManager_o *__fastcall CompleteMissionComponent__get_listViewManager(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.missionListViewManager;
}


void __fastcall CompleteMissionComponent__missionRewardCallback(
        CompleteMissionComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  CompleteMissionComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *v12; // x20
  const MethodInfo *v13; // x3
  struct UnityEngine_Transform_o *completeMissionPanel; // x8

  v4 = this;
  if ( (byte_4A4D092 & 1) == 0 )
  {
    sub_1B863B8(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___, result);
    sub_1B863B8(&JsonManager_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_10905/*"REQUEST_OK"*/, v6);
    sub_1B863B8(&StringLiteral_10903/*"REQUEST_NG"*/, v7);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v8);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v9);
    this = (CompleteMissionComponent_o *)sub_1B863B8(&StringLiteral_15836/*"]"*/, v10);
    byte_4A4D092 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( !System_String__Equals_61680480(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_61683424(
                            (System_String_o *)StringLiteral_15580/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15836/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                           v12,
                                           (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1B8661C(this, result);
      completeMissionPanel = this->fields.completeMissionPanel;
      if ( completeMissionPanel )
      {
        this = (CompleteMissionComponent_o *)v4->fields.missionListViewManager;
        if ( this )
        {
          CompleteMissionListViewManager__SetResultData(
            (CompleteMissionListViewManager_o *)this,
            *(GetSvts_array **)&completeMissionPanel->fields.m_CachedPtr,
            (GetCommandCodes_array *)completeMissionPanel[1].klass,
            v13);
          this = (CompleteMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v11 = &StringLiteral_10905/*"REQUEST_OK"*/;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    sub_1B86614(this, result);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_16;
  v11 = &StringLiteral_10903/*"REQUEST_NG"*/;
LABEL_15:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v11, 0LL);
}


void __fastcall CompleteMissionComponent__setMissionCompleteNum(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w23
  int compMissionNum; // w22
  UserEventMissionMaster_o *v16; // x20
  int32_t v17; // w21
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4D08F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1B863B8(&int_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_24886/*"{0}/{1}"*/, v7);
    byte_4A4D08F = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_14;
  size = currentEventIdList->fields._size;
  if ( size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v16 = (UserEventMissionMaster_o *)Instance;
    v17 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    currentEventIdList,
                                    v17,
                                    (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v16 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v16, (int32_t)Instance, 0LL);
      ++v17;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v17 )
        goto LABEL_12;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_14:
    sub_1B86614(Instance, v9);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_12:
  eventMissionTxt = this->fields.eventMissionTxt;
  v25 = compMissionNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v10, v11, v12);
  totalMissionNum = this->fields.totalMissionNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum, v20, v21, v22);
  Instance = (DataManager_o *)System_String__Format_61686468((System_String_o *)StringLiteral_24886/*"{0}/{1}"*/, v19, v23, 0LL);
  if ( !eventMissionTxt )
    goto LABEL_14;
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
}


void __fastcall CompleteMissionComponent__setRecieveModifyItem(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A4D096 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__, v3);
    byte_4A4D096 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v5 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0LL),
        !v5) )
  {
    sub_1B86614(missionListViewManager, method);
  }
  MissionListViewManager__SetMode(v5, 3, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionComponent_ClickDelegate___ctor(
        CompleteMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D1C28;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1BE0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CompleteMissionComponent_ClickDelegate__BeginInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4A4D09A & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, isDecide);
    byte_4A4D09A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall CompleteMissionComponent_ClickDelegate__Invoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CompleteMissionComponent___c__DisplayClass23_0___ctor(
        CompleteMissionComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionComponent___c__DisplayClass23_0___createPanel_b__0(
        CompleteMissionComponent___c__DisplayClass23_0_o *this,
        AssetData_o *frontPanel,
        const MethodInfo *method)
{
  CompleteMissionComponent___c__DisplayClass23_0_o *v4; // x19
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
  Il2CppObject *Object_object__49610244; // x20
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t current; // w21
  __int64 v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  __int64 v34; // x1
  struct CompleteMissionComponent_o *v35; // x8
  UnityEngine_Transform_o *completeMissionPanel; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v38; // x1
  UnityEngine_Component_o *v39; // x0
  __int64 v40; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1
  __int64 v43; // x0
  __int64 v44; // x1
  struct CompleteMissionComponent_o *v45; // x8
  UnityEngine_Transform_o *v46; // x0
  UnityEngine_Transform_o *v47; // x0
  __int64 v48; // x1
  UnityEngine_Component_o *v49; // x0
  __int64 v50; // x1
  Il2CppObject *Component_object; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v60; // x21
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  Il2CppObject *v64; // x2
  System_String_o *v65; // x21
  AssetLoader_LoadEndDataHandler_o *v66; // x22
  struct CompleteMissionComponent_o *v67; // x8
  struct CompleteMissionComponent_o *v68; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v71; // x4
  struct CompleteMissionComponent_o *v72; // x8
  int v73; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v74; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v75; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4A4D09B & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, frontPanel);
    sub_1B863B8(&AssetManager_TypeInfo, v5);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UITexture___, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1B863B8(&int_TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v13);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v15);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B863B8(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__, v18);
    sub_1B863B8(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo, v19);
    sub_1B863B8(&StringLiteral_4604/*"CompleteMissionPanel"*/, v20);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_1B863B8(&StringLiteral_4603/*"CompleteMission/{0}/{1}"*/, v21);
    byte_4A4D09B = 1;
  }
  memset(&v75, 0, sizeof(v75));
  if ( !frontPanel )
    goto LABEL_50;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              frontPanel,
                              (System_String_o *)StringLiteral_4604/*"CompleteMissionPanel"*/,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_50;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)this[28].monitor;
  if ( !this )
    goto LABEL_50;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_50;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                               Object_object__49610244,
                                                               transform,
                                                               (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
  if ( !this )
    goto LABEL_50;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.completeMissionPanel, (int32_t)this, v25, v26);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v4->fields.achiveList;
  if ( !this )
    goto LABEL_50;
  if ( !LODWORD(this->fields.achiveList) )
  {
    v67 = v4->fields.__4__this;
    if ( v67 )
    {
      this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v67->fields.titleInfo;
      if ( this )
      {
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
        v68 = v4->fields.__4__this;
        if ( v68 )
        {
          completeMissionList = (System_Collections_Generic_List_object__o *)v68->fields.completeMissionList;
          if ( !completeMissionList )
            return;
          completeMissionSprite = v68->fields.completeMissionSprite;
          this = (CompleteMissionComponent___c__DisplayClass23_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       completeMissionList,
                                                                       0,
                                                                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( this )
          {
            v72 = v4->fields.__4__this;
            if ( v72 )
            {
              if ( completeMissionSprite )
              {
                CompleteMissionSprite__InitPanel(
                  completeMissionSprite,
                  HIDWORD(this->fields.achiveList),
                  v72->fields.completeMissionListBgSprite,
                  16,
                  v71);
                return;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_1B86614(this, frontPanel);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_35E0408 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v75 = v74;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v75,
            (const MethodInfo_337C530 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v75.fields._current;
    v28 = sub_1B86604(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0LL);
    if ( !v28 )
      sub_1B86614(v29, v30);
    *(_QWORD *)(v28 + 32) = v4;
    sub_1B8635C((CGThumbnailListItem_o *)(v28 + 32), (int32_t)v4, v31, v32);
    v34 = (unsigned int)(current - 2);
    *(_DWORD *)(v28 + 24) = v34;
    v35 = v4->fields.__4__this;
    if ( !v35 )
      sub_1B86614(v33, v34);
    completeMissionPanel = v35->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_1B86614(0LL, v34);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, v34, 0LL);
    if ( !Child )
      sub_1B86614(0LL, v38);
    v39 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
    if ( !v39 )
      sub_1B86614(0LL, v40);
    gameObject = UnityEngine_Component__get_gameObject(v39, 0LL);
    if ( !gameObject )
      sub_1B86614(0LL, v42);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v45 = v4->fields.__4__this;
    if ( !v45 )
      sub_1B86614(v43, v44);
    v46 = v45->fields.completeMissionPanel;
    if ( !v46 )
      sub_1B86614(0LL, v44);
    v47 = UnityEngine_Transform__GetChild(v46, *(_DWORD *)(v28 + 24), 0LL);
    if ( !v47 )
      sub_1B86614(0LL, v48);
    v49 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v47, 1, 0LL);
    if ( !v49 )
      sub_1B86614(0LL, v50);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v49,
                         (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v28 + 16) = Component_object;
    sub_1B8635C((CGThumbnailListItem_o *)(v28 + 16), (int32_t)Component_object, v52, v53);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_1B86614(v54, v55);
    LODWORD(v74.fields._list) = completeMissionEnt->fields.objectId;
    v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, v56, v57, v58);
    v73 = *(_DWORD *)(v28 + 24);
    v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v61, v62, v63);
    v65 = System_String__Format_61686468((System_String_o *)StringLiteral_4603/*"CompleteMission/{0}/{1}"*/, v60, v64, 0LL);
    v66 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v66,
      (Il2CppObject *)v28,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v65, v66, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v75,
    (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall CompleteMissionComponent___c__DisplayClass23_1___ctor(
        CompleteMissionComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionComponent___c__DisplayClass23_1___createPanel_b__1(
        CompleteMissionComponent___c__DisplayClass23_1_o *this,
        AssetData_o *backPanel,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UITexture_o *tex; // x21
  Il2CppObject *v12; // x0
  void *Object_object__49610244; // x0
  __int64 v14; // x1
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x10
  int v17; // w9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v19; // x8
  struct CompleteMissionComponent_o *v20; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v23; // x4
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v24; // x8
  struct CompleteMissionComponent_o *v25; // x8
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4D09C & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_Texture2D____76085320, backPanel);
    sub_1B863B8(&int_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v9);
    sub_1B863B8(&StringLiteral_24817/*"{0}"*/, v10);
    byte_4A4D09C = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx, method, v3, v4);
  Object_object__49610244 = System_String__Format((System_String_o *)StringLiteral_24817/*"{0}"*/, v12, 0LL);
  if ( !backPanel )
    goto LABEL_19;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              backPanel,
                              (System_String_o *)Object_object__49610244,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_Texture2D____76085320);
  if ( !tex )
    goto LABEL_19;
  Object_object__49610244 = (void *)((__int64 (__fastcall *)(struct UITexture_o *, void *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
                                      tex,
                                      Object_object__49610244,
                                      tex->klass->vtable._28_get_shader.methodPtr);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_19;
  achiveList = CS___8__locals1->fields.achiveList;
  v17 = CS___8__locals1->fields.loadAssetCount + 1;
  CS___8__locals1->fields.loadAssetCount = v17;
  if ( !achiveList )
    goto LABEL_19;
  if ( v17 != achiveList->fields._size )
    return;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  Object_object__49610244 = _4__this->fields.titleInfo;
  if ( !Object_object__49610244 )
    goto LABEL_19;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_object__49610244, 1, 0LL);
  v19 = this->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_19;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_19;
  completeMissionList = (System_Collections_Generic_List_object__o *)v20->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v20->fields.completeMissionSprite;
  Object_object__49610244 = System_Collections_Generic_List_object___get_Item(
                              completeMissionList,
                              0,
                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
  if ( !Object_object__49610244
    || (v24 = this->fields.CS___8__locals1) == 0LL
    || (v25 = v24->fields.__4__this) == 0LL
    || !completeMissionSprite )
  {
LABEL_19:
    sub_1B86614(Object_object__49610244, v14);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    *((_DWORD *)Object_object__49610244 + 7),
    v25->fields.completeMissionListBgSprite,
    16,
    v23);
}


void __fastcall CompleteMissionComponent_resData___ctor(
        CompleteMissionComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}