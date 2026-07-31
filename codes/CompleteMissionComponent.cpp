void CompleteMissionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5937030 & 1) == 0 )
  {
    sub_21FFC50(&CompleteMissionComponent_TypeInfo);
    byte_5937030 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593702F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_593702F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.completeMissionList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_593702B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionComponent__AcceptReward_b__38_0__);
    byte_593702B = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0),
        missionListViewManager = this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__38_0__, 0),
        !missionListViewManager) )
  {
    sub_21FFECC(titleInfo, method);
  }
  CompleteMissionListViewManager__AcceptReward(missionListViewManager, v5, v6);
}


void CompleteMissionComponent__CheckRewardAcceptable(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_21FFECC(0, method);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  ListViewManager_o *missionListViewManager; // x0

  if ( (byte_593702D & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_593702D = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
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
    sub_21FFECC(missionListViewManager, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionListViewManager, 0, 0);
}


void CompleteMissionComponent__InitPanelSprite(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  void *titleInfo; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v6; // x3

  if ( (byte_5937025 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    byte_5937025 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_9;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)titleInfo, 1, 0);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList )
  {
    completeMissionSprite = this->fields.completeMissionSprite;
    titleInfo = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)completeMissionList,
                  0,
                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( titleInfo && completeMissionSprite )
    {
      CompleteMissionSprite__InitPanel(
        completeMissionSprite,
        *((_DWORD *)titleInfo + 7),
        this->fields.completeMissionListBgSprite,
        v6);
      return;
    }
LABEL_9:
    sub_21FFECC(titleInfo, method);
  }
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

  if ( (byte_593702C & 1) == 0 )
  {
    sub_21FFC50(&Method_CompleteMissionComponent_OnClickBack__);
    byte_593702C = 1;
  }
  v3 = Method_CompleteMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CompleteMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CompleteMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  __int64 v2; // x2
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v5; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5937022 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937022 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v5 = (UnityEngine_Object_o *)titleInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_21FFECC(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_titleInfo = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_titleInfo, 0, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_int__o *v22; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  __int64 v30; // x2
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  TitleInfoControl_o *v43; // x21
  TitleInfoControl_o *v44; // x20
  System_Action_o *v45; // x21
  struct MstMissionEntity_array *Entitys; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  const MethodInfo *v53; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 klass_low; // x2
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  System_Collections_Generic_List_object__o *v64; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x20
  System_String_o *monitor; // x20
  System_Action_o *v67; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  Il2CppObject *v70; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5937023 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionComponent_LoadNotificationEnd__);
    sub_21FFC50(&Method_CompleteMissionComponent_OnClickBack__);
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_MstMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_EventMissionEntity___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&MyRoomControl_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5937023 = 1;
  }
  entity = 0;
  v70 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.reDispAction = redisp_act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.reDispAction,
    (int32_t)redisp_act,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v22;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentEventIdList,
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0, 0) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
    Instance = UnityEngine_Object__Instantiate_object_(
                 titlePrefab,
                 (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_46;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.titleInfo,
      (int32_t)Component_object,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    v43 = this->fields.titleInfo;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v43 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v43, (UnityEngine_Transform_o *)Instance, 0);
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
    TitleInfoControl__changeTitleInfo_46824800((TitleInfoControl_o *)Instance, 1, 86, 0, 0);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
    v44 = this->fields.titleInfo;
    v45 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, (intptr_t)Method_CompleteMissionComponent_OnClickBack__, 0);
    if ( !v44 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v44, v45, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33, v34);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entitys = (struct MstMissionEntity_array *)DataMasterBase_object__object__int___getEntitys(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                               (const MethodInfo_3EDC704 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
  this->fields.mstMissionList = Entitys;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mstMissionList,
    (int32_t)Entitys,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v53);
  this->fields.completeMissionList = VaildCompleteMissionData;
  p_completeMissionList = &this->fields.completeMissionList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.completeMissionList,
    (int32_t)VaildCompleteMissionData,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, klass_low);
    Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v64 = (System_Collections_Generic_List_object__o *)*p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_46;
    v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 v64,
                 0,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !Instance || !v65 )
      goto LABEL_46;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v65,
           &entity,
           *((_DWORD *)Instance + 7),
           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, klass_low);
      Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_46;
      klass_low = LODWORD(entity[2].klass);
      if ( (int)klass_low >= 1 )
      {
        if ( !Instance )
          goto LABEL_46;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &v70,
                             klass_low,
                             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v70 )
          {
            monitor = (System_String_o *)v70[1].monitor;
            if ( monitor )
              goto LABEL_41;
            goto LABEL_38;
          }
LABEL_46:
          sub_21FFECC(Instance, v9);
        }
      }
    }
  }
LABEL_38:
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v9, klass_low);
  monitor = MyRoomControl__getChangeMyRoomBgm(0);
LABEL_41:
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v9, klass_low);
  SoundManager__playBgm(monitor, 0);
  v67 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v68, v69);
  AtlasManager__LoadNotification(v67, 0);
}


void CompleteMissionComponent__RequestMissionReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_5937029 & 1) == 0 )
  {
    sub_21FFC50(&Method_CompleteMissionComponent_missionRewardCallback__);
    sub_21FFC50(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5937029 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0
    || !Request_object )
  {
    sub_21FFECC(Request_object, v7);
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
    sub_21FFECC(0, method);
  CompleteMissionListViewManager__setAfterAction(missionListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionComponent__SetBtnEnable(CompleteMissionComponent_o *this, bool isEnable, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_21FFECC(0, isEnable);
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
    sub_21FFECC(missionListViewManager, method);
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
  __int64 v8; // x2
  MissionListViewManager_o *v9; // x19

  if ( (byte_5937028 & 1) == 0 )
  {
    sub_21FFC50(&CompleteMissionComponent_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_5937028 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_9;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  v9 = (MissionListViewManager_o *)this->fields.missionListViewManager;
  if ( !*(&CompleteMissionComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CompleteMissionComponent_TypeInfo, method, v8);
  if ( !v9 )
LABEL_9:
    sub_21FFECC(currentEventIdList, method);
  MissionListViewManager__SetMode_54827444(v9, 1, CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void CompleteMissionComponent__UnAcceptableRewardDlg(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_21FFECC(0, method);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void CompleteMissionComponent___AcceptReward_b__38_0(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_21FFECC(0, method);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0);
}


void CompleteMissionComponent___setRecieveModifyItem_b__42_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5937031 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5629/*"END_DISP"*/);
    byte_5937031 = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5629/*"END_DISP"*/, 0);
}


void CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_int__o *AchivePanelNum; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_List_EventMissionEntity__o *v19; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x20
  Il2CppObject *Entity; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x8
  Il2CppObject *v29; // x0
  System_String_o *v30; // x20
  AssetLoader_LoadEndDataHandler_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  int v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937024 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_CompleteMissionComponent___c__DisplayClass27_0__createPanel_b__0__);
    sub_21FFC50(&CompleteMissionComponent___c__DisplayClass27_0_TypeInfo);
    sub_21FFC50(&StringLiteral_4800/*"CompleteMission/{0}/asset"*/);
    byte_5937024 = 1;
  }
  v3 = sub_21FFEBC(CompleteMissionComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_16;
  AchivePanelNum = EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, completeMissionList, 0);
  *(_QWORD *)(v3 + 24) = AchivePanelNum;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)AchivePanelNum, v13, v14, v15, v16, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v19 = this->fields.completeMissionList;
  if ( !v19
    || (v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v19,
                      0,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0)
    || !v20
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v20,
                   HIDWORD(Instance[1].monitor),
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v3 + 40) = Entity,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)Entity, v22, v23, v24, v25, v26, v27),
        v28 = *(_QWORD *)(v3 + 40),
        *(_DWORD *)(v3 + 32) = 0,
        !v28) )
  {
LABEL_16:
    sub_21FFECC(Instance, completeMissionList);
  }
  v34 = *(_DWORD *)(v28 + 20);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v34);
  v30 = System_String__Format((System_String_o *)StringLiteral_4800/*"CompleteMission/{0}/asset"*/, v29, 0);
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v3,
    Method_CompleteMissionComponent___c__DisplayClass27_0__createPanel_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v32, v33);
  AssetManager__loadAssetStorage(v30, v31, 1, 0, 0);
}


System_Collections_Generic_List_EventMissionEntity__o *CompleteMissionComponent__getVaildCompleteMissionData(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionComponent_o *v2; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v4; // w9
  const MethodInfo_476E8C0 *v5; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v10; // w26
  Il2CppClass **v11; // x8
  Il2CppClass *v12; // x22
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int size; // w8
  int32_t v17; // w23
  int32_t v18; // w21

  v2 = this;
  if ( (byte_5937026 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    this = (CompleteMissionComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937026 = 1;
  }
  currentEventIdList = v2->fields.currentEventIdList;
  v2->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_34;
  v4 = currentEventIdList->fields._version + 1;
  v5 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v4;
  this = (CompleteMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
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
        sub_21FFED4(this);
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
          if ( !v7 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (CompleteMissionComponent_o *)v2->fields.currentEventIdList;
          if ( !this )
            break;
          m_CachedPtr = this->fields.m_CachedPtr;
          method = (const MethodInfo *)HIDWORD(v12->_1.name);
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
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_21FFECC(this, method);
  }
LABEL_21:
  if ( v7 )
  {
    size = v7->fields._size;
    if ( size < 1 )
    {
      return 0;
    }
    else
    {
      v2->fields.totalMissionNum = size;
      this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v7,
                                             0,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_34;
      v17 = this->fields.m_CachedPtr;
      if ( v7->fields._size >= 1 )
      {
        v18 = 0;
        do
        {
          this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v7,
                                                 v18,
                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_34;
          if ( v17 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                   v7,
                                                   v18,
                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_34;
            v17 = this->fields.m_CachedPtr;
          }
        }
        while ( ++v18 < v7->fields._size );
      }
      v2->fields.currentMissionId = v17;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v7;
}


CompleteMissionPanelComponent_o *CompleteMissionComponent__get_CompleteMissionPanelComponent(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._CompleteMissionPanelComponent_k__BackingField;
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x20
  const MethodInfo *v9; // x3
  struct UnityEngine_Transform_o *completeMissionPanel; // x8

  v4 = this;
  if ( (byte_593702A & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    this = (CompleteMissionComponent_o *)sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_593702A = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( !System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    v8 = (Il2CppObject *)System_String__Concat_75481624(
                           (System_String_o *)StringLiteral_16395/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16659/*"]"*/,
                           0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6, v7);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                           v8,
                                           (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_21FFED4(this);
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
            v9);
          this = (CompleteMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v5 = &StringLiteral_11545/*"REQUEST_OK"*/;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    sub_21FFECC(this, result);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_16;
  v5 = &StringLiteral_11543/*"REQUEST_NG"*/;
LABEL_15:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void CompleteMissionComponent__setMissionCompleteNum(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v3; // x0
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserEventMissionMaster_o *v6; // x20
  int32_t AchiveMissionNum_50002396; // w0
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937027 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_26497/*"{0}/{1}"*/);
    byte_5937027 = 1;
  }
  v3 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v3);
  if ( !Instance )
    goto LABEL_8;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !this->fields.completeMissionList )
    goto LABEL_8;
  v6 = (UserEventMissionMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)this->fields.completeMissionList,
                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
  if ( !v6 )
    goto LABEL_8;
  AchiveMissionNum_50002396 = UserEventMissionMaster__getAchiveMissionNum_50002396(
                                v6,
                                (EventMissionEntity_array *)Instance,
                                0);
  this->fields.compMissionNum = AchiveMissionNum_50002396;
  eventMissionTxt = this->fields.eventMissionTxt;
  v12 = AchiveMissionNum_50002396;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
  totalMissionNum = this->fields.totalMissionNum;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &totalMissionNum);
  Instance = (DataManager_o *)System_String__Format_75484576((System_String_o *)StringLiteral_26497/*"{0}/{1}"*/, v9, v10, 0);
  if ( !eventMissionTxt )
LABEL_8:
    sub_21FFECC(Instance, v5);
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0);
}


void CompleteMissionComponent__setRecieveModifyItem(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_593702E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionComponent__setRecieveModifyItem_b__42_0__);
    byte_593702E = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v4 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__42_0__,
          0),
        !v4) )
  {
    sub_21FFECC(missionListViewManager, method);
  }
  MissionListViewManager__SetMode(v4, 3, v5, 0);
}


void CompleteMissionComponent__set_CompleteMissionPanelComponent(
        CompleteMissionComponent_o *this,
        CompleteMissionPanelComponent_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CompleteMissionPanelComponent_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CompleteMissionPanelComponent_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CompleteMissionComponent_ClickDelegate___ctor(
        CompleteMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF88E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF8898;
}


System_IAsyncResult_o *CompleteMissionComponent_ClickDelegate__BeginInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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


void CompleteMissionComponent___c__DisplayClass27_0___ctor(
        CompleteMissionComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionComponent___c__DisplayClass27_0___createPanel_b__0(
        CompleteMissionComponent___c__DisplayClass27_0_o *this,
        AssetData_o *frontPanel,
        const MethodInfo *method)
{
  CompleteMissionComponent___c__DisplayClass27_0_o *v4; // x19
  Il2CppObject *Object_object__58323140; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x21
  CompleteMissionComponent___c__DisplayClass27_0_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct CompleteMissionComponent_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Collections_Generic_List_int__o *achiveList; // x8
  __int64 v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_int__o *v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  struct CompleteMissionComponent_o *v42; // x8
  int32_t current; // w26
  UnityEngine_Object_o *CompleteMissionPanelComponent_k__BackingField; // x22
  _BOOL8 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x4
  struct CompleteMissionComponent_o *v48; // x8
  CompleteMissionPanelComponent_o *v49; // x0
  int32_t v50; // w22
  _BOOL8 PanelChildGameObject; // x0
  __int64 v52; // x1
  struct CompleteMissionComponent_o *v53; // x8
  CompleteMissionPanelComponent_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x1
  System_Collections_Generic_List_int__o *v57; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  __int64 v61; // x23
  __int64 v62; // x0
  __int64 v63; // x1
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  __int64 v70; // x22
  __int64 v71; // x0
  __int64 v72; // x1
  struct CompleteMissionComponent_o *v73; // x8
  CompleteMissionPanelComponent_o *v74; // x0
  _BOOL8 PanelChildComponent_object; // x0
  const MethodInfo *v76; // x1
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v78; // x24
  Il2CppObject *v79; // x2
  System_String_o *v80; // x24
  AssetLoader_LoadEndDataHandler_o *v81; // x25
  __int64 v82; // x1
  __int64 v83; // x2
  _BOOL8 AssetStorage; // x0
  int v85; // w8
  __int64 v86; // x9
  CompleteMissionComponent_o *v87; // x0
  int v88; // w8
  __int64 v89; // x9
  CompleteMissionComponent___c__DisplayClass27_0_o **v90; // [xsp+8h] [xbp-B8h]
  int v91; // [xsp+10h] [xbp-B0h] BYREF
  int32_t objectId; // [xsp+14h] [xbp-ACh] BYREF
  System_Collections_Generic_List_Enumerator_int__o v93; // [xsp+18h] [xbp-A8h] BYREF
  Il2CppObject *component; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_GameObject_o *childGameObject; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v96; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_5937032 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionPanelComponent_TryGetPanelChildComponent_UITexture___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionPanelComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&CompleteMissionComponent___c__DisplayClass27_1_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionComponent___c__DisplayClass27_2__createPanel_b__1__);
    sub_21FFC50(&CompleteMissionComponent___c__DisplayClass27_2_TypeInfo);
    sub_21FFC50(&StringLiteral_4802/*"CompleteMissionPanel"*/);
    this = (CompleteMissionComponent___c__DisplayClass27_0_o *)sub_21FFC50(&StringLiteral_4801/*"CompleteMission/{0}/{1}"*/);
    byte_5937032 = 1;
  }
  memset(&v96, 0, sizeof(v96));
  component = 0;
  childGameObject = 0;
  if ( !frontPanel )
    goto LABEL_66;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              frontPanel,
                              (System_String_o *)StringLiteral_4802/*"CompleteMissionPanel"*/,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  this = (CompleteMissionComponent___c__DisplayClass27_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_66;
  this = (CompleteMissionComponent___c__DisplayClass27_0_o *)this[28].fields.completeMissionEnt;
  if ( !this )
    goto LABEL_66;
  this = (CompleteMissionComponent___c__DisplayClass27_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_66;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  this = (CompleteMissionComponent___c__DisplayClass27_0_o *)UnityEngine_Object__Instantiate_object__59506996(
                                                               Object_object__58323140,
                                                               transform,
                                                               (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
  if ( !this )
    goto LABEL_66;
  _4__this = v4->fields.__4__this;
  v10 = this;
  this = (CompleteMissionComponent___c__DisplayClass27_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0);
  if ( !_4__this )
    goto LABEL_66;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.completeMissionPanel,
    (int32_t)this,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass27_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               (UnityEngine_GameObject_o *)v10,
                                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionPanelComponent___);
  if ( !v17 )
    goto LABEL_66;
  v17->fields._CompleteMissionPanelComponent_k__BackingField = (struct CompleteMissionPanelComponent_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v17->fields._CompleteMissionPanelComponent_k__BackingField,
    (int32_t)this,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  achiveList = v4->fields.achiveList;
  if ( !achiveList )
    goto LABEL_66;
  if ( !achiveList->fields._size )
  {
    this = (CompleteMissionComponent___c__DisplayClass27_0_o *)v4->fields.__4__this;
    if ( this )
    {
      CompleteMissionComponent__InitPanelSprite((CompleteMissionComponent_o *)this, (const MethodInfo *)frontPanel);
      return;
    }
    goto LABEL_66;
  }
  v25 = sub_21FFEBC(CompleteMissionComponent___c__DisplayClass27_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0);
  if ( !v25 )
    goto LABEL_66;
  *(_QWORD *)(v25 + 24) = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 24), (int32_t)v4, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v25 + 16) = v32;
  v90 = (CompleteMissionComponent___c__DisplayClass27_0_o **)(v25 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 16), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  this = (CompleteMissionComponent___c__DisplayClass27_0_o *)v4->fields.achiveList;
  if ( !this )
    goto LABEL_66;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v96 = v93;
  v93.fields._list = 0;
  *(_QWORD *)&v93.fields._index = &v96;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v96,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v39 )
      break;
    v42 = v4->fields.__4__this;
    if ( !v42 )
      sub_21FFECC(v39, v40);
    current = v96.fields._current;
    CompleteMissionPanelComponent_k__BackingField = (UnityEngine_Object_o *)v42->fields._CompleteMissionPanelComponent_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
    v45 = UnityEngine_Object__op_Equality(CompleteMissionPanelComponent_k__BackingField, 0, 0);
    if ( !v45 )
    {
      v48 = v4->fields.__4__this;
      if ( !v48 )
        sub_21FFECC(v45, v46);
      v49 = v48->fields._CompleteMissionPanelComponent_k__BackingField;
      if ( !v49 )
        sub_21FFECC(0, v46);
      v50 = current - 2;
      PanelChildGameObject = CompleteMissionPanelComponent__TryGetPanelChildGameObject(
                               v49,
                               current - 2,
                               0,
                               &childGameObject,
                               v47);
      if ( PanelChildGameObject )
      {
        v53 = v4->fields.__4__this;
        if ( !v53 )
          sub_21FFECC(PanelChildGameObject, v52);
        v54 = v53->fields._CompleteMissionPanelComponent_k__BackingField;
        if ( !v54 )
          sub_21FFECC(0, v52);
        if ( CompleteMissionPanelComponent__TryGetPanelChildComponent_object_(
               v54,
               v50,
               1,
               &component,
               (const MethodInfo_37ED578 *)Method_CompleteMissionPanelComponent_TryGetPanelChildComponent_UITexture___) )
        {
          if ( !childGameObject )
            sub_21FFECC(0, v55);
          UnityEngine_GameObject__SetActive(childGameObject, 0, 0);
          v57 = (System_Collections_Generic_List_int__o *)*v90;
          if ( !*v90
            || (items = v57->fields._items,
                v59 = Method_System_Collections_Generic_List_int__Add__,
                ++v57->fields._version,
                !items) )
          {
            sub_21FFECC(v57, v56);
          }
          size = v57->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v57,
              v50,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v57->fields._size = size + 1;
            items->m_Items[size] = v50;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v96,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  this = *v90;
  if ( !*v90 )
    goto LABEL_66;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v96 = v93;
  v93.fields._list = 0;
  *(_QWORD *)&v93.fields._index = &v96;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v96,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v61 = sub_21FFEBC(CompleteMissionComponent___c__DisplayClass27_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v61, 0);
    if ( !v61 )
      sub_21FFECC(v62, v63);
    *(_QWORD *)(v61 + 32) = v25;
    v70 = v61 + 32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v61 + 32), v25, v64, v65, v66, v67, v68, v69);
    v72 = (unsigned int)v96.fields._current;
    *(_DWORD *)(v61 + 16) = v96.fields._current;
    v73 = v4->fields.__4__this;
    if ( !v73 )
      sub_21FFECC(v71, v72);
    v74 = v73->fields._CompleteMissionPanelComponent_k__BackingField;
    if ( !v74 )
      sub_21FFECC(0, v72);
    PanelChildComponent_object = CompleteMissionPanelComponent__TryGetPanelChildComponent_object_(
                                   v74,
                                   v72,
                                   1,
                                   (Il2CppObject **)(v61 + 24),
                                   (const MethodInfo_37ED578 *)Method_CompleteMissionPanelComponent_TryGetPanelChildComponent_UITexture___);
    if ( PanelChildComponent_object )
    {
      completeMissionEnt = v4->fields.completeMissionEnt;
      if ( !completeMissionEnt )
        sub_21FFECC(PanelChildComponent_object, v76);
      objectId = completeMissionEnt->fields.objectId;
      v78 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &objectId);
      v91 = *(_DWORD *)(v61 + 16);
      v79 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v91);
      v80 = System_String__Format_75484576((System_String_o *)StringLiteral_4801/*"CompleteMission/{0}/{1}"*/, v78, v79, 0);
      v81 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v81,
        (Il2CppObject *)v61,
        Method_CompleteMissionComponent___c__DisplayClass27_2__createPanel_b__1__,
        0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v82, v83);
      AssetStorage = AssetManager__loadAssetStorage(v80, v81, 1, 0, 0);
      if ( !AssetStorage )
      {
        v85 = v4->fields.loadAssetCount + 1;
        v4->fields.loadAssetCount = v85;
        if ( !*(_QWORD *)v70 )
          sub_21FFECC(AssetStorage, v76);
        v86 = *(_QWORD *)(*(_QWORD *)v70 + 16LL);
        if ( !v86 )
          sub_21FFECC(AssetStorage, v76);
        if ( v85 == *(_DWORD *)(v86 + 24) )
        {
          v87 = v4->fields.__4__this;
          if ( !v87 )
            sub_21FFECC(0, v76);
          goto LABEL_49;
        }
      }
    }
    else
    {
      v88 = v4->fields.loadAssetCount + 1;
      v4->fields.loadAssetCount = v88;
      if ( !*(_QWORD *)v70 )
        sub_21FFECC(PanelChildComponent_object, v76);
      v89 = *(_QWORD *)(*(_QWORD *)v70 + 16LL);
      if ( !v89 )
        sub_21FFECC(PanelChildComponent_object, v76);
      if ( v88 == *(_DWORD *)(v89 + 24) )
      {
        v87 = v4->fields.__4__this;
        if ( !v87 )
          sub_21FFECC(0, v76);
LABEL_49:
        CompleteMissionComponent__InitPanelSprite(v87, v76);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v96,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !*v90 )
    goto LABEL_66;
  if ( LODWORD((*v90)->fields.achiveList) )
    return;
  this = (CompleteMissionComponent___c__DisplayClass27_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_66:
    sub_21FFECC(this, frontPanel);
  CompleteMissionComponent__InitPanelSprite((CompleteMissionComponent_o *)this, (const MethodInfo *)frontPanel);
}


void CompleteMissionComponent___c__DisplayClass27_1___ctor(
        CompleteMissionComponent___c__DisplayClass27_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionComponent___c__DisplayClass27_2___ctor(
        CompleteMissionComponent___c__DisplayClass27_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionComponent___c__DisplayClass27_2___createPanel_b__1(
        CompleteMissionComponent___c__DisplayClass27_2_o *this,
        AssetData_o *backPanel,
        const MethodInfo *method)
{
  CompleteMissionComponent___c__DisplayClass27_2_o *v4; // x19
  struct UITexture_o *tex; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  struct CompleteMissionComponent___c__DisplayClass27_1_o *CS___8__locals2; // x9
  struct CompleteMissionComponent___c__DisplayClass27_0_o *CS___8__locals1; // x8
  struct System_Collections_Generic_List_int__o *validOpenPanelIndexList; // x10
  int v11; // w9
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_5937033 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_Texture2D____91482152);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (CompleteMissionComponent___c__DisplayClass27_2_o *)sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    byte_5937033 = 1;
  }
  if ( backPanel )
  {
    tex = v4->fields.tex;
    completeMissionPanelChildIdx = v4->fields.completeMissionPanelChildIdx;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &completeMissionPanelChildIdx);
    v7 = System_String__Format((System_String_o *)StringLiteral_26433/*"{0}"*/, v6, 0);
    this = (CompleteMissionComponent___c__DisplayClass27_2_o *)AssetData__GetObject_object__58323140(
                                                                 backPanel,
                                                                 v7,
                                                                 (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
    if ( !tex )
      goto LABEL_13;
    this = (CompleteMissionComponent___c__DisplayClass27_2_o *)((__int64 (__fastcall *)(struct UITexture_o *, CompleteMissionComponent___c__DisplayClass27_2_o *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
                                                                 tex,
                                                                 this,
                                                                 tex->klass->vtable._27_set_mainTexture.method);
  }
  CS___8__locals2 = v4->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_13;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  validOpenPanelIndexList = CS___8__locals2->fields.validOpenPanelIndexList;
  v11 = CS___8__locals1->fields.loadAssetCount + 1;
  CS___8__locals1->fields.loadAssetCount = v11;
  if ( !validOpenPanelIndexList )
    goto LABEL_13;
  if ( v11 != validOpenPanelIndexList->fields._size )
    return;
  this = (CompleteMissionComponent___c__DisplayClass27_2_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_21FFECC(this, backPanel);
  CompleteMissionComponent__InitPanelSprite((CompleteMissionComponent_o *)this, (const MethodInfo *)backPanel);
}


void CompleteMissionComponent_resData___ctor(CompleteMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}