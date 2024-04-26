void __fastcall CompleteMissionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4351475 & 1) == 0 )
  {
    sub_B70694(&CompleteMissionComponent_TypeInfo);
    byte_4351475 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void __fastcall CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4351474 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_4351474 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.completeMissionList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4351470 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CompleteMissionComponent__AcceptReward_b__33_0__);
    byte_4351470 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL),
        missionListViewManager = this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0LL),
        !missionListViewManager) )
  {
    sub_B7076C(titleInfo, method);
  }
  CompleteMissionListViewManager__AcceptReward(missionListViewManager, v5, v6);
}


void __fastcall CompleteMissionComponent__CheckRewardAcceptable(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_B7076C(0LL, method);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewManager_o *missionListViewManager; // x0

  if ( (byte_4351472 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    byte_4351472 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
    sub_B7076C(missionListViewManager, v3);
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
  CompleteMissionComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_4351471 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351471 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    CompleteMissionComponent_ClickDelegate__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall CompleteMissionComponent__OnDestroy(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v4; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4351468 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351468 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_B7076C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B70630((BattleServantConfConponent_o *)p_titleInfo, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall CompleteMissionComponent__Open(
        CompleteMissionComponent_o *this,
        CompleteMissionComponent_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        int32_t typeIndex,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_int__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  struct UnityEngine_GameObject_o *titlePrefab; // x21
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  TitleInfoControl_o *v39; // x21
  TitleInfoControl_o *v40; // x20
  System_Action_o *v41; // x21
  struct MstMissionEntity_array *Entitys_WarMaster__WarEntity; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo *v49; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o *v59; // x22
  EventMissionEntity_o *v60; // x8
  int32_t name; // w2
  System_String_o *age; // x20
  System_Action_o *v63; // x20
  WarEntity_o *v64; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351469 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_CompleteMissionComponent_LoadNotificationEnd__);
    sub_B70694(&Method_CompleteMissionComponent_OnClickBack__);
    sub_B70694(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B70694(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_B70694(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Any_EventMissionEntity___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&MyRoomControl_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351469 = 1;
  }
  v64 = 0LL;
  entity = 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.reDispAction = redisp_act;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.reDispAction,
    (System_Int32_array **)redisp_act,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v22;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentEventIdList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    titlePrefab = this->fields.titlePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (CommonUI_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                               (UnityEngine_UI_Dropdown_DropdownItem_o *)titlePrefab,
                               (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_52;
    Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.titleInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v39 )
      goto LABEL_52;
    TitleInfoControl__SetParent(v39, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setDepth((TitleInfoControl_o *)Instance, 20, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 38, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, 0LL, 82, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__changeTitleInfo_18518488((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v40 = this->fields.titleInfo;
    v41 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_CompleteMissionComponent_OnClickBack__, 0LL);
    if ( !v40 )
      goto LABEL_52;
    TitleInfoControl__SetBackBtnAct(v40, v41, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Entitys_WarMaster__WarEntity = (struct MstMissionEntity_array *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1CA3834 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_WarMaster__WarEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mstMissionList,
    (System_Int32_array **)Entitys_WarMaster__WarEntity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v49);
  p_completeMissionList = &this->fields.completeMissionList;
  this->fields.completeMissionList = VaildCompleteMissionData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.completeMissionList,
    (System_Int32_array **)VaildCompleteMissionData,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v59 = *p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_52;
    if ( !v59->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v60 = v59->fields._items->m_Items[0];
    if ( !v60 || !Instance )
      goto LABEL_52;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           v60->fields.missionTargetId,
           (const MethodInfo_21C049C *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_52;
      name = (int32_t)entity->fields.name;
      if ( name >= 1 )
      {
        if ( !Instance )
          goto LABEL_52;
        Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   &v64,
                                   name,
                                   (const MethodInfo_21C049C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v64 )
          {
            age = v64->fields.age;
            if ( age )
              goto LABEL_45;
            goto LABEL_41;
          }
LABEL_52:
          sub_B7076C(Instance, v9);
        }
      }
    }
  }
LABEL_41:
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  }
  age = MyRoomControl__getChangeMyRoomBgm(0LL);
LABEL_45:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(age, 0LL);
  v63 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v63, 0LL);
}


void __fastcall CompleteMissionComponent__RequestMissionReward(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_435146E & 1) == 0 )
  {
    sub_B70694(&Method_CompleteMissionComponent_missionRewardCallback__);
    sub_B70694(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_435146E = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v3,
                                                                            (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0LL
    || !Request_WarBoardWallAttackRequest )
  {
    sub_B7076C(Request_WarBoardWallAttackRequest, v5);
  }
  EventMissionClearRewardRequest__beginRequest(Request_WarBoardWallAttackRequest, missionToRecieve->fields.id, 0LL);
}


void __fastcall CompleteMissionComponent__SetAfterAction(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, isEnable);
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
    sub_B7076C(missionListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionListViewManager, 1, 0LL);
  CompleteMissionComponent__SetUpMissionListView(this, v4);
  CompleteMissionComponent__setMissionCompleteNum(this, v5);
}


void __fastcall CompleteMissionComponent__SetUpMissionListView(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x5
  MissionListViewManager_o *v8; // x19

  if ( (byte_435146D & 1) == 0 )
  {
    sub_B70694(&CompleteMissionComponent_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_435146D = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_10;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !missionListViewManager )
    goto LABEL_10;
  CompleteMissionListViewManager__CreateList(
    missionListViewManager,
    completeMissionList,
    v6,
    0,
    this->fields.reDispAction,
    v7);
  v8 = (MissionListViewManager_o *)this->fields.missionListViewManager;
  currentEventIdList = (System_Collections_Generic_List_int__o *)CompleteMissionComponent_TypeInfo;
  if ( (BYTE3(CompleteMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionComponent_TypeInfo);
  }
  if ( !v8 )
LABEL_10:
    sub_B7076C(currentEventIdList, method);
  MissionListViewManager__SetMode_22628500(
    v8,
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
    sub_B7076C(0LL, method);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent___AcceptReward_b__33_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B7076C(0LL, method);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
}


void __fastcall CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351476 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5569/*"END_DISP"*/);
    byte_4351476 = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5569/*"END_DISP"*/, 0LL);
}


void __fastcall CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **AchivePanelNum; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *v19; // x21
  EventMissionEntity_o *v20; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x2
  __int64 v29; // x8
  Il2CppObject *v30; // x0
  System_String_o *v31; // x20
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  int v33; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_435146A & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__);
    sub_B70694(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
    sub_B70694(&StringLiteral_4283/*"CompleteMission/{0}/asset"*/);
    byte_435146A = 1;
  }
  v3 = sub_B70764(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
  CompleteMissionComponent___c__DisplayClass23_0___ctor((CompleteMissionComponent___c__DisplayClass23_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_19;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_19;
  AchivePanelNum = (System_Int32_array **)EventMissionMaster__getAchivePanelNum(
                                            (EventMissionMaster_o *)Instance,
                                            completeMissionList,
                                            0LL);
  *(_QWORD *)(v3 + 24) = AchivePanelNum;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), AchivePanelNum, v13, v14, v15, v16, v17, v18);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v19 = this->fields.completeMissionList;
  if ( !v19 )
    goto LABEL_19;
  if ( !v19->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v20 = v19->fields._items->m_Items[0];
  if ( !v20
    || !Instance
    || (Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          v20->fields.missionTargetId,
                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v3 + 32) = Entity,
        sub_B70630((BattleServantConfConponent_o *)(v3 + 32), Entity, v22, v23, v24, v25, v26, v27),
        v29 = *(_QWORD *)(v3 + 32),
        *(_DWORD *)(v3 + 40) = 0,
        !v29) )
  {
LABEL_19:
    sub_B7076C(Instance, completeMissionList);
  }
  v33 = *(_DWORD *)(v29 + 20);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v28);
  v31 = System_String__Format((System_String_o *)StringLiteral_4283/*"CompleteMission/{0}/asset"*/, v30, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v3,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v31, v32, 1, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall CompleteMissionComponent__getVaildCompleteMissionData(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v8; // w24
  Il2CppClass **v9; // x8
  Il2CppClass *v10; // x22
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x10
  int v14; // w9
  int32_t missionTargetId; // w22
  __int64 v16; // x21
  __int64 v17; // x9
  __int64 v18; // x9
  __int64 v20; // x0

  if ( (byte_435146B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435146B = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_37;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_37;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v20 = sub_B70798(currentEventIdList);
        sub_B70738(v20, 0LL);
      }
      v9 = &mstMissionList->obj.klass + (int)v8;
      v10 = v9[4];
      if ( !v10 )
        break;
      currentEventIdList = (System_Collections_Generic_List_int__o *)MstMissionEntity__isActiveNow(
                                                                       (MstMissionEntity_o *)v9[4],
                                                                       0LL);
      if ( ((unsigned __int8)currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (System_Collections_Generic_List_int__o *)EventMissionMaster__getCompleteMissionList(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         HIDWORD(v10->_1.name),
                                                                         0LL);
        if ( !currentEventIdList )
          break;
        method = (const MethodInfo *)currentEventIdList;
        if ( *(_QWORD *)&currentEventIdList->fields._size )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
            (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            currentEventIdList,
            HIDWORD(v10->_1.name),
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_18;
    }
LABEL_37:
    sub_B7076C(currentEventIdList, method);
  }
LABEL_18:
  if ( v5 )
  {
    size = v5->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v5->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      items = v5->fields._items;
      v13 = items->m_Items[0];
      if ( !v13 )
        goto LABEL_37;
      v14 = v5->fields._size;
      missionTargetId = v13->fields.missionTargetId;
      if ( v14 >= 1 )
      {
        v16 = 4LL;
        do
        {
          if ( v14 <= (unsigned int)(v16 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v17 = *((_QWORD *)&items->obj.klass + v16);
          if ( !v17 )
            goto LABEL_37;
          if ( missionTargetId > *(_DWORD *)(v17 + 16) )
          {
            if ( v5->fields._size <= (unsigned int)(v16 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v18 = *((_QWORD *)&items->obj.klass + v16);
            if ( !v18 )
              goto LABEL_37;
            missionTargetId = *(_DWORD *)(v18 + 16);
          }
          v14 = v5->fields._size;
        }
        while ( (int)++v16 - 4 < v14 );
      }
      this->fields.currentMissionId = missionTargetId;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v5;
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
  __int64 *v5; // x8
  Il2CppObject *v6; // x20
  const MethodInfo *v7; // x3
  struct PlayMakerFSM_o *myFsm; // x8
  __int64 v9; // x0

  v4 = this;
  if ( (byte_435146F & 1) == 0 )
  {
    sub_B70694(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    this = (CompleteMissionComponent_o *)sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_435146F = 1;
  }
  if ( !result )
    goto LABEL_17;
  if ( !System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    v6 = (Il2CppObject *)System_String__Concat_44760452(
                           (System_String_o *)StringLiteral_15855/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16092/*"]"*/,
                           0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                           v6,
                                           (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.completeMissionPanel) )
      {
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
      }
      myFsm = this->fields.myFsm;
      if ( myFsm )
      {
        this = (CompleteMissionComponent_o *)v4->fields.missionListViewManager;
        if ( this )
        {
          CompleteMissionListViewManager__SetResultData(
            (CompleteMissionListViewManager_o *)this,
            *(GetSvts_array **)&myFsm->fields.m_CachedPtr,
            (GetCommandCodes_array *)myFsm->fields.fsm,
            v7);
          this = (CompleteMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v5 = &StringLiteral_11233/*"REQUEST_OK"*/;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_17:
    sub_B7076C(this, result);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_17;
  v5 = &StringLiteral_11231/*"REQUEST_NG"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall CompleteMissionComponent__setMissionCompleteNum(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x24
  signed __int64 size; // x22
  int compMissionNum; // w21
  UserEventMissionMaster_o *v9; // x20
  unsigned __int64 v10; // x23
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_435146C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_23994/*"{0}/{1}"*/);
    byte_435146C = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_16;
  size = currentEventIdList->fields._size;
  if ( (int)size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v9 = (UserEventMissionMaster_o *)Instance;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)currentEventIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( !v9 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(
                                    v9,
                                    currentEventIdList->fields._items->m_Items[++v10],
                                    0LL);
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( (__int64)v10 >= size )
        goto LABEL_14;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_16:
    sub_B7076C(Instance, v4);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_14:
  eventMissionTxt = this->fields.eventMissionTxt;
  v16 = compMissionNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v5);
  totalMissionNum = this->fields.totalMissionNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum, v13);
  Instance = (DataManager_o *)System_String__Format_44753704((System_String_o *)StringLiteral_23994/*"{0}/{1}"*/, v12, v14, 0LL);
  if ( !eventMissionTxt )
    goto LABEL_16;
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
}


void __fastcall CompleteMissionComponent__setRecieveModifyItem(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_4351473 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__);
    byte_4351473 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v4 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0LL),
        !v4) )
  {
    sub_B7076C(missionListViewManager, method);
  }
  MissionListViewManager__SetMode(v4, 3, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionComponent_ClickDelegate___ctor(
        CompleteMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CompleteMissionComponent_ClickDelegate__BeginInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_434FAD4 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434FAD4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionComponent_ClickDelegate__Invoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CompleteMissionComponent_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CompleteMissionComponent_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CompleteMissionComponent_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CompleteMissionComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
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
  UILabel_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t current; // w21
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
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
  System_Int32_array **Component_WebViewObject; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v53; // x21
  __int64 v54; // x2
  Il2CppObject *v55; // x2
  System_String_o *v56; // x21
  AssetLoader_LoadEndDataHandler_o *v57; // x22
  struct CompleteMissionComponent_o *v58; // x8
  struct CompleteMissionComponent_o *v59; // x8
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  CompleteMissionSprite_o *completeMissionSprite; // x20
  EventMissionEntity_o *v62; // x8
  struct CompleteMissionComponent_o *v63; // x9
  int v64; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v65; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v66; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_434FAD2 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__);
    sub_B70694(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    sub_B70694(&StringLiteral_4285/*"CompleteMissionPanel"*/);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_B70694(&StringLiteral_4284/*"CompleteMission/{0}/{1}"*/);
    byte_434FAD2 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  if ( !frontPanel )
    goto LABEL_54;
  Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                  frontPanel,
                                                  (System_String_o *)StringLiteral_4285/*"CompleteMissionPanel"*/,
                                                  (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_54;
  this = *(CompleteMissionComponent___c__DisplayClass23_0_o **)&this[25].fields.loadAssetCount;
  if ( !this )
    goto LABEL_54;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_54;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                               Object_WarBoardWaitTimeSetting,
                                                               transform,
                                                               (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  if ( !this )
    goto LABEL_54;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !_4__this )
    goto LABEL_54;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_B70630(
    (BattleServantConfConponent_o *)&_4__this->fields.completeMissionPanel,
    (System_Int32_array **)this,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v4->fields.achiveList;
  if ( !this )
    goto LABEL_54;
  if ( !LODWORD(this->fields.achiveList) )
  {
    v58 = v4->fields.__4__this;
    if ( v58 )
    {
      this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v58->fields.titleInfo;
      if ( this )
      {
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
        v59 = v4->fields.__4__this;
        if ( v59 )
        {
          completeMissionList = v59->fields.completeMissionList;
          if ( !completeMissionList )
            return;
          completeMissionSprite = v59->fields.completeMissionSprite;
          if ( !completeMissionList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v62 = completeMissionList->fields._items->m_Items[0];
          if ( v62 )
          {
            v63 = v4->fields.__4__this;
            if ( v63 )
            {
              if ( completeMissionSprite )
              {
                CompleteMissionSprite__InitPanel(
                  completeMissionSprite,
                  v62->fields.missionTargetId,
                  v63->fields.completeMissionListBgSprite,
                  16,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_54:
    sub_B7076C(this, frontPanel);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v66,
            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v66.fields.current;
    v15 = sub_B70764(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 )
      sub_B7076C(v16, v17);
    *(_QWORD *)(v15 + 32) = v4;
    sub_B70630((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)v4, v18, v19, v20, v21, v22, v23);
    v25 = (unsigned int)(current - 2);
    *(_DWORD *)(v15 + 24) = v25;
    v26 = v4->fields.__4__this;
    if ( !v26 )
      sub_B7076C(v24, v25);
    completeMissionPanel = v26->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_B7076C(0LL, v25);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, v25, 0LL);
    if ( !Child )
      sub_B7076C(0LL, v29);
    v30 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
    if ( !v30 )
      sub_B7076C(0LL, v31);
    gameObject = UnityEngine_Component__get_gameObject(v30, 0LL);
    if ( !gameObject )
      sub_B7076C(0LL, v33);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v36 = v4->fields.__4__this;
    if ( !v36 )
      sub_B7076C(v34, v35);
    v37 = v36->fields.completeMissionPanel;
    if ( !v37 )
      sub_B7076C(0LL, v35);
    v38 = UnityEngine_Transform__GetChild(v37, *(_DWORD *)(v15 + 24), 0LL);
    if ( !v38 )
      sub_B7076C(0LL, v39);
    v40 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v38, 1, 0LL);
    if ( !v40 )
      sub_B7076C(0LL, v41);
    Component_WebViewObject = (System_Int32_array **)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       v40,
                                                       (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v15 + 16) = Component_WebViewObject;
    sub_B70630((BattleServantConfConponent_o *)(v15 + 16), Component_WebViewObject, v43, v44, v45, v46, v47, v48);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_B7076C(v49, v50);
    LODWORD(v65.fields.list) = completeMissionEnt->fields.objectId;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v51);
    v64 = *(_DWORD *)(v15 + 24);
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v54);
    v56 = System_String__Format_44753704((System_String_o *)StringLiteral_4284/*"CompleteMission/{0}/{1}"*/, v53, v55, 0LL);
    v57 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v57,
      (Il2CppObject *)v15,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v56, v57, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v66,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  struct UITexture_o *tex; // x21
  Il2CppObject *v6; // x0
  System_String_o *Object_WarBoardWaitTimeSetting; // x0
  __int64 v8; // x1
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v10; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v13; // x8
  struct CompleteMissionComponent_o *v14; // x8
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  CompleteMissionSprite_o *completeMissionSprite; // x20
  EventMissionEntity_o *v17; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v18; // x9
  struct CompleteMissionComponent_o *v19; // x9
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434FAD3 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_Texture2D____69232744);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&StringLiteral_23922/*"{0}"*/);
    byte_434FAD3 = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx, method);
  Object_WarBoardWaitTimeSetting = System_String__Format((System_String_o *)StringLiteral_23922/*"{0}"*/, v6, 0LL);
  if ( !backPanel )
    goto LABEL_22;
  Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        backPanel,
                                                        Object_WarBoardWaitTimeSetting,
                                                        (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744);
  if ( !tex )
    goto LABEL_22;
  Object_WarBoardWaitTimeSetting = (System_String_o *)((__int64 (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
                                                        tex,
                                                        Object_WarBoardWaitTimeSetting,
                                                        tex->klass->vtable._28_get_shader.methodPtr);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_22;
  ++CS___8__locals1->fields.loadAssetCount;
  v10 = this->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_22;
  achiveList = v10->fields.achiveList;
  if ( !achiveList )
    goto LABEL_22;
  if ( v10->fields.loadAssetCount != achiveList->fields._size )
    return;
  _4__this = v10->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  Object_WarBoardWaitTimeSetting = (System_String_o *)_4__this->fields.titleInfo;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_22;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_WarBoardWaitTimeSetting, 1, 0LL);
  v13 = this->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_22;
  v14 = v13->fields.__4__this;
  if ( !v14 )
    goto LABEL_22;
  completeMissionList = v14->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v14->fields.completeMissionSprite;
  if ( !completeMissionList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v17 = completeMissionList->fields._items->m_Items[0];
  if ( !v17
    || (v18 = this->fields.CS___8__locals1) == 0LL
    || (v19 = v18->fields.__4__this) == 0LL
    || !completeMissionSprite )
  {
LABEL_22:
    sub_B7076C(Object_WarBoardWaitTimeSetting, v8);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    v17->fields.missionTargetId,
    v19->fields.completeMissionListBgSprite,
    16,
    0LL);
}


void __fastcall CompleteMissionComponent_resData___ctor(
        CompleteMissionComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}