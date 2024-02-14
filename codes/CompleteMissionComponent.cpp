void __fastcall CompleteMissionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4214E5A & 1) == 0 )
  {
    sub_B0D8A4(&CompleteMissionComponent_TypeInfo, v1);
    byte_4214E5A = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void __fastcall CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4214E59 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v4);
    byte_4214E59 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.completeMissionList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4214E55 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CompleteMissionComponent__AcceptReward_b__33_0__, v3);
    byte_4214E55 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL),
        missionListViewManager = this->fields.missionListViewManager,
        v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0LL),
        !missionListViewManager) )
  {
    sub_B0D97C(titleInfo);
  }
  CompleteMissionListViewManager__AcceptReward(missionListViewManager, v8, v9);
}


void __fastcall CompleteMissionComponent__CheckRewardAcceptable(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_B0D97C(0LL);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  ListViewManager_o *missionListViewManager; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4214E57 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    byte_4214E57 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
  missionListViewManager = (ListViewManager_o *)this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (ListViewManager__DestroyList(missionListViewManager, 0LL),
        EventRewardSaveData__SaveAllMissionData(0LL),
        (missionListViewManager = (ListViewManager_o *)this->fields.completeMissionSprite) == 0LL)
    || (CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)missionListViewManager, v4),
        (missionListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL)) == 0LL) )
  {
    sub_B0D97C(missionListViewManager);
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

  if ( (byte_4214E56 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214E56 = 1;
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
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4214E4D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214E4D = 1;
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
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_titleInfo, 0LL, v7, v8, v9, v10, v11, v12);
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
  CommonUI_o *Instance; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_int__o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  struct UnityEngine_GameObject_o *titlePrefab; // x21
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  TitleInfoControl_o *v60; // x21
  TitleInfoControl_o *v61; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  System_Action_o *v64; // x21
  struct MstMissionEntity_array *Entitys_WarMaster__WarEntity; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o *v82; // x22
  EventMissionEntity_o *v83; // x8
  int32_t name; // w2
  System_String_o *age; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  System_Action_o *v88; // x20
  WarEntity_o *v89; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214E4E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&AtlasManager_TypeInfo, v8);
    sub_B0D8A4(&Method_CompleteMissionComponent_LoadNotificationEnd__, v9);
    sub_B0D8A4(&Method_CompleteMissionComponent_OnClickBack__, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_BgmMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_CompleteMissionMaster___, v12);
    sub_B0D8A4(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__, v15);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v16);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_EventMissionEntity___, v17);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v22);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v23);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26);
    sub_B0D8A4(&SoundManager_TypeInfo, v27);
    byte_4214E4E = 1;
  }
  v89 = 0LL;
  entity = 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.reDispAction = redisp_act;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.reDispAction,
    (System_Int32_array **)redisp_act,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v43 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v41, v42);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v43;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentEventIdList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_52;
    Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.titleInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    v60 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v60 )
      goto LABEL_52;
    TitleInfoControl__SetParent(v60, (UnityEngine_Transform_o *)Instance, 0LL);
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
    TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v61 = this->fields.titleInfo;
    v64 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v62, v63);
    System_Action___ctor(v64, (Il2CppObject *)this, Method_CompleteMissionComponent_OnClickBack__, 0LL);
    if ( !v61 )
      goto LABEL_52;
    TitleInfoControl__SetBackBtnAct(v61, v64, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Entitys_WarMaster__WarEntity = (struct MstMissionEntity_array *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_171483C *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_WarMaster__WarEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mstMissionList,
    (System_Int32_array **)Entitys_WarMaster__WarEntity,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v72);
  p_completeMissionList = &this->fields.completeMissionList;
  this->fields.completeMissionList = VaildCompleteMissionData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.completeMissionList,
    (System_Int32_array **)VaildCompleteMissionData,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v82 = *p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_52;
    if ( !v82->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v83 = v82->fields._items->m_Items[0];
    if ( !v83 || !Instance )
      goto LABEL_52;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           v83->fields.missionTargetId,
           (const MethodInfo_2669C30 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_52;
      name = (int32_t)entity->fields.name;
      if ( name >= 1 )
      {
        if ( !Instance )
          goto LABEL_52;
        Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   &v89,
                                   name,
                                   (const MethodInfo_2669C30 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v89 )
          {
            age = v89->fields.age;
            if ( age )
              goto LABEL_45;
            goto LABEL_41;
          }
LABEL_52:
          sub_B0D97C(Instance);
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
  v88 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v86, v87);
  System_Action___ctor(v88, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v88, 0LL);
}


void __fastcall CompleteMissionComponent__RequestMissionReward(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4214E53 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CompleteMissionComponent_missionRewardCallback__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4214E53 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v7,
                                                                            (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0LL
    || !Request_WarBoardWallAttackRequest )
  {
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  }
  EventMissionClearRewardRequest__beginRequest(Request_WarBoardWallAttackRequest, missionToRecieve->fields.id, 0LL);
}


void __fastcall CompleteMissionComponent__SetAfterAction(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(missionListViewManager);
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

  if ( (byte_4214E52 & 1) == 0 )
  {
    sub_B0D8A4(&CompleteMissionComponent_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    byte_4214E52 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_10;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !missionListViewManager )
    goto LABEL_10;
  CompleteMissionListViewManager__CreateList(
    missionListViewManager,
    completeMissionList,
    v7,
    0,
    this->fields.reDispAction,
    v8);
  v9 = (MissionListViewManager_o *)this->fields.missionListViewManager;
  currentEventIdList = (System_Collections_Generic_List_int__o *)CompleteMissionComponent_TypeInfo;
  if ( (BYTE3(CompleteMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionComponent_TypeInfo);
  }
  if ( !v9 )
LABEL_10:
    sub_B0D97C(currentEventIdList);
  MissionListViewManager__SetMode_24483840(
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
    sub_B0D97C(0LL);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent___AcceptReward_b__33_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B0D97C(0LL);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
}


void __fastcall CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4214E5B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5497/*"END_DISP"*/, method);
    byte_4214E5B = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5497/*"END_DISP"*/, 0LL);
}


void __fastcall CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  DataManager_o *Instance; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  System_Int32_array **AchivePanelNum; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *v30; // x21
  EventMissionEntity_o *v31; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x8
  Il2CppObject *v40; // x0
  System_String_o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  AssetLoader_LoadEndDataHandler_o *v44; // x21
  int v45; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4214E4F & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v8);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__, v11);
    sub_B0D8A4(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_4218/*"CompleteMission/{0}/asset"*/, v13);
    byte_4214E4F = 1;
  }
  v14 = sub_B0D974(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo, method, v2);
  CompleteMissionComponent___c__DisplayClass23_0___ctor((CompleteMissionComponent___c__DisplayClass23_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  *(_QWORD *)(v14 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_19;
  AchivePanelNum = (System_Int32_array **)EventMissionMaster__getAchivePanelNum(
                                            (EventMissionMaster_o *)Instance,
                                            completeMissionList,
                                            0LL);
  *(_QWORD *)(v14 + 24) = AchivePanelNum;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), AchivePanelNum, v24, v25, v26, v27, v28, v29);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v30 = this->fields.completeMissionList;
  if ( !v30 )
    goto LABEL_19;
  if ( !v30->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v31 = v30->fields._items->m_Items[0];
  if ( !v31
    || !Instance
    || (Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          v31->fields.missionTargetId,
                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v14 + 32) = Entity,
        sub_B0D840((BattleServantConfConponent_o *)(v14 + 32), Entity, v33, v34, v35, v36, v37, v38),
        v39 = *(_QWORD *)(v14 + 32),
        *(_DWORD *)(v14 + 40) = 0,
        !v39) )
  {
LABEL_19:
    sub_B0D97C(Instance);
  }
  v45 = *(_DWORD *)(v39 + 20);
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v41 = System_String__Format((System_String_o *)StringLiteral_4218/*"CompleteMission/{0}/asset"*/, v40, 0LL);
  v44 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v42, v43);
  AssetLoader_LoadEndDataHandler___ctor(
    v44,
    (Il2CppObject *)v14,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v41, v44, 1, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall CompleteMissionComponent__getVaildCompleteMissionData(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v18; // w24
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x22
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x10
  int v24; // w9
  int32_t missionTargetId; // w22
  __int64 v26; // x21
  __int64 v27; // x9
  __int64 v28; // x9
  __int64 v30; // x0

  if ( (byte_4214E50 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4214E50 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_37;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_37;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        v30 = sub_B0D9A8(currentEventIdList);
        sub_B0D948(v30, 0LL);
      }
      v19 = &mstMissionList->obj.klass + (int)v18;
      v20 = v19[4];
      if ( !v20 )
        break;
      currentEventIdList = (System_Collections_Generic_List_int__o *)MstMissionEntity__isActiveNow(
                                                                       (MstMissionEntity_o *)v19[4],
                                                                       0LL);
      if ( ((unsigned __int8)currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (System_Collections_Generic_List_int__o *)EventMissionMaster__getCompleteMissionList(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         HIDWORD(v20->_1.name),
                                                                         0LL);
        if ( !currentEventIdList )
          break;
        if ( *(_QWORD *)&currentEventIdList->fields._size )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
            (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            currentEventIdList,
            HIDWORD(v20->_1.name),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_18;
    }
LABEL_37:
    sub_B0D97C(currentEventIdList);
  }
LABEL_18:
  if ( v15 )
  {
    size = v15->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v15->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      items = v15->fields._items;
      v23 = items->m_Items[0];
      if ( !v23 )
        goto LABEL_37;
      v24 = v15->fields._size;
      missionTargetId = v23->fields.missionTargetId;
      if ( v24 >= 1 )
      {
        v26 = 4LL;
        do
        {
          if ( v24 <= (unsigned int)(v26 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v27 = *((_QWORD *)&items->obj.klass + v26);
          if ( !v27 )
            goto LABEL_37;
          if ( missionTargetId > *(_DWORD *)(v27 + 16) )
          {
            if ( v15->fields._size <= (unsigned int)(v26 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v28 = *((_QWORD *)&items->obj.klass + v26);
            if ( !v28 )
              goto LABEL_37;
            missionTargetId = *(_DWORD *)(v28 + 16);
          }
          v24 = v15->fields._size;
        }
        while ( (int)++v26 - 4 < v24 );
      }
      this->fields.currentMissionId = missionTargetId;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v15;
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
  struct PlayMakerFSM_o *myFsm; // x8
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4214E54 & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___, result);
    sub_B0D8A4(&JsonManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v6);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v7);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v8);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v9);
    this = (CompleteMissionComponent_o *)sub_B0D8A4(&StringLiteral_15917/*"]"*/, v10);
    byte_4214E54 = 1;
  }
  if ( !result )
    goto LABEL_17;
  if ( !System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_43852188(
                            (System_String_o *)StringLiteral_15681/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15917/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                           v12,
                                           (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.completeMissionPanel) )
      {
        v15 = sub_B0D9A8(this);
        sub_B0D948(v15, 0LL);
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
            v13);
          this = (CompleteMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v11 = &StringLiteral_11106/*"REQUEST_OK"*/;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_17:
    sub_B0D97C(this);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_17;
  v11 = &StringLiteral_11104/*"REQUEST_NG"*/;
LABEL_16:
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
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x24
  signed __int64 size; // x22
  int compMissionNum; // w21
  UserEventMissionMaster_o *v12; // x20
  unsigned __int64 v13; // x23
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4214E51 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, v7);
    byte_4214E51 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_16;
  size = currentEventIdList->fields._size;
  if ( (int)size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v12 = (UserEventMissionMaster_o *)Instance;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)currentEventIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v12 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(
                                    v12,
                                    currentEventIdList->fields._items->m_Items[++v13],
                                    0LL);
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( (__int64)v13 >= size )
        goto LABEL_14;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_16:
    sub_B0D97C(Instance);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_14:
  eventMissionTxt = this->fields.eventMissionTxt;
  v18 = compMissionNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  totalMissionNum = this->fields.totalMissionNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
  Instance = (DataManager_o *)System_String__Format_43845440((System_String_o *)StringLiteral_23688/*"{0}/{1}"*/, v15, v16, 0LL);
  if ( !eventMissionTxt )
    goto LABEL_16;
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
}


void __fastcall CompleteMissionComponent__setRecieveModifyItem(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21

  if ( (byte_4214E58 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__, v3);
    byte_4214E58 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v5 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0LL),
        !v5) )
  {
    sub_B0D97C(missionListViewManager);
  }
  MissionListViewManager__SetMode(v5, 3, v8, 0LL);
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
  sub_B0D840(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4213167 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isDecide);
    byte_4213167 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionComponent_ClickDelegate__Invoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CompleteMissionComponent_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CompleteMissionComponent_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  CompleteMissionComponent_ClickDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CompleteMissionComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
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
  UILabel_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t current; // w21
  __int64 v34; // x20
  __int64 v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0
  struct CompleteMissionComponent_o *v43; // x8
  UnityEngine_Transform_o *completeMissionPanel; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v48; // x0
  struct CompleteMissionComponent_o *v49; // x8
  UnityEngine_Transform_o *v50; // x0
  UnityEngine_Transform_o *v51; // x0
  UnityEngine_Component_o *v52; // x0
  System_Int32_array **Component_WebViewObject; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x0
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v62; // x21
  Il2CppObject *v63; // x2
  System_String_o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  AssetLoader_LoadEndDataHandler_o *v67; // x22
  struct CompleteMissionComponent_o *v68; // x8
  struct CompleteMissionComponent_o *v69; // x8
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  CompleteMissionSprite_o *completeMissionSprite; // x20
  EventMissionEntity_o *v72; // x8
  struct CompleteMissionComponent_o *v73; // x9
  int v74; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v75; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v76; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4213165 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, frontPanel);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v13);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B0D8A4(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__, v18);
    sub_B0D8A4(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_4220/*"CompleteMissionPanel"*/, v20);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_B0D8A4(&StringLiteral_4219/*"CompleteMission/{0}/{1}"*/, v21);
    byte_4213165 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  if ( !frontPanel )
    goto LABEL_54;
  Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                  frontPanel,
                                                  (System_String_o *)StringLiteral_4220/*"CompleteMissionPanel"*/,
                                                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                               (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  if ( !this )
    goto LABEL_54;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !_4__this )
    goto LABEL_54;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_B0D840(
    (BattleServantConfConponent_o *)&_4__this->fields.completeMissionPanel,
    (System_Int32_array **)this,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v4->fields.achiveList;
  if ( !this )
    goto LABEL_54;
  if ( !LODWORD(this->fields.achiveList) )
  {
    v68 = v4->fields.__4__this;
    if ( v68 )
    {
      this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v68->fields.titleInfo;
      if ( this )
      {
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
        v69 = v4->fields.__4__this;
        if ( v69 )
        {
          completeMissionList = v69->fields.completeMissionList;
          if ( !completeMissionList )
            return;
          completeMissionSprite = v69->fields.completeMissionSprite;
          if ( !completeMissionList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v72 = completeMissionList->fields._items->m_Items[0];
          if ( v72 )
          {
            v73 = v4->fields.__4__this;
            if ( v73 )
            {
              if ( completeMissionSprite )
              {
                CompleteMissionSprite__InitPanel(
                  completeMissionSprite,
                  v72->fields.missionTargetId,
                  v73->fields.completeMissionListBgSprite,
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
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v76 = v75;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v76,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v76.fields.current;
    v34 = sub_B0D974(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo, v31, v32);
    System_Object___ctor((Il2CppObject *)v34, 0LL);
    if ( !v34 )
      sub_B0D97C(v35);
    *(_QWORD *)(v34 + 32) = v4;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v4, v36, v37, v38, v39, v40, v41);
    *(_DWORD *)(v34 + 24) = current - 2;
    v43 = v4->fields.__4__this;
    if ( !v43 )
      sub_B0D97C(v42);
    completeMissionPanel = v43->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_B0D97C(0LL);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, current - 2, 0LL);
    if ( !Child )
      sub_B0D97C(0LL);
    v46 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
    if ( !v46 )
      sub_B0D97C(0LL);
    gameObject = UnityEngine_Component__get_gameObject(v46, 0LL);
    if ( !gameObject )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v49 = v4->fields.__4__this;
    if ( !v49 )
      sub_B0D97C(v48);
    v50 = v49->fields.completeMissionPanel;
    if ( !v50 )
      sub_B0D97C(0LL);
    v51 = UnityEngine_Transform__GetChild(v50, *(_DWORD *)(v34 + 24), 0LL);
    if ( !v51 )
      sub_B0D97C(0LL);
    v52 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v51, 1, 0LL);
    if ( !v52 )
      sub_B0D97C(0LL);
    Component_WebViewObject = (System_Int32_array **)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       v52,
                                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v34 + 16) = Component_WebViewObject;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 16), Component_WebViewObject, v54, v55, v56, v57, v58, v59);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_B0D97C(v60);
    LODWORD(v75.fields.list) = completeMissionEnt->fields.objectId;
    v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
    v74 = *(_DWORD *)(v34 + 24);
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
    v64 = System_String__Format_43845440((System_String_o *)StringLiteral_4219/*"CompleteMission/{0}/{1}"*/, v62, v63, 0LL);
    v67 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v65, v66);
    AssetLoader_LoadEndDataHandler___ctor(
      v67,
      (Il2CppObject *)v34,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v64, v67, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v76,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UITexture_o *tex; // x21
  Il2CppObject *v10; // x0
  System_String_o *Object_WarBoardWaitTimeSetting; // x0
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v13; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v16; // x8
  struct CompleteMissionComponent_o *v17; // x8
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  CompleteMissionSprite_o *completeMissionSprite; // x20
  EventMissionEntity_o *v20; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v21; // x9
  struct CompleteMissionComponent_o *v22; // x9
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4213166 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, backPanel);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v8);
    byte_4213166 = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Object_WarBoardWaitTimeSetting = System_String__Format((System_String_o *)StringLiteral_23617/*"{0}"*/, v10, 0LL);
  if ( !backPanel )
    goto LABEL_22;
  Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        backPanel,
                                                        Object_WarBoardWaitTimeSetting,
                                                        (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
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
  v13 = this->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_22;
  achiveList = v13->fields.achiveList;
  if ( !achiveList )
    goto LABEL_22;
  if ( v13->fields.loadAssetCount != achiveList->fields._size )
    return;
  _4__this = v13->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  Object_WarBoardWaitTimeSetting = (System_String_o *)_4__this->fields.titleInfo;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_22;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_WarBoardWaitTimeSetting, 1, 0LL);
  v16 = this->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_22;
  v17 = v16->fields.__4__this;
  if ( !v17 )
    goto LABEL_22;
  completeMissionList = v17->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v17->fields.completeMissionSprite;
  if ( !completeMissionList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v20 = completeMissionList->fields._items->m_Items[0];
  if ( !v20
    || (v21 = this->fields.CS___8__locals1) == 0LL
    || (v22 = v21->fields.__4__this) == 0LL
    || !completeMissionSprite )
  {
LABEL_22:
    sub_B0D97C(Object_WarBoardWaitTimeSetting);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    v20->fields.missionTargetId,
    v22->fields.completeMissionListBgSprite,
    16,
    0LL);
}


void __fastcall CompleteMissionComponent_resData___ctor(
        CompleteMissionComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}