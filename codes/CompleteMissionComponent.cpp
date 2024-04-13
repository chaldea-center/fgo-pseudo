void __fastcall CompleteMissionComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8EE5 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionComponent_TypeInfo, v1, v2, v3);
    byte_42E8EE5 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void __fastcall CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8EE4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v5, v6, v7);
    byte_42E8EE4 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.completeMissionList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_42E8EE0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CompleteMissionComponent__AcceptReward_b__33_0__, v5, v6, v7);
    byte_42E8EE0 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL),
        missionListViewManager = this->fields.missionListViewManager,
        v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0LL),
        !missionListViewManager) )
  {
    sub_B5D69C(titleInfo, method);
  }
  CompleteMissionListViewManager__AcceptReward(missionListViewManager, v10, v11);
}


void __fastcall CompleteMissionComponent__CheckRewardAcceptable(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_B5D69C(0LL, method);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  ListViewManager_o *missionListViewManager; // x0

  if ( (byte_42E8EE2 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EE2 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
  missionListViewManager = (ListViewManager_o *)this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (ListViewManager__DestroyList(missionListViewManager, 0LL),
        EventRewardSaveData__SaveAllMissionData(0LL),
        (missionListViewManager = (ListViewManager_o *)this->fields.completeMissionSprite) == 0LL)
    || (CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)missionListViewManager, v5),
        (missionListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL)) == 0LL) )
  {
    sub_B5D69C(missionListViewManager, v5);
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
  int v2; // w2
  __int64 v3; // x3
  CompleteMissionComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_42E8EE1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EE1 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v6; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E8ED8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8ED8 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v6 = (UnityEngine_Object_o *)titleInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_B5D69C(0LL, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_titleInfo, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionComponent__Open(
        CompleteMissionComponent_o *this,
        CompleteMissionComponent_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        int32_t typeIndex,
        const MethodInfo *method)
{
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  CommonUI_o *Instance; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Collections_Generic_List_int__o *v82; // x20
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  struct UnityEngine_GameObject_o *titlePrefab; // x21
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  TitleInfoControl_o *v99; // x21
  TitleInfoControl_o *v100; // x20
  System_Action_o *v101; // x21
  struct MstMissionEntity_array *Entitys_WarMaster__WarEntity; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  const MethodInfo *v109; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o *v119; // x22
  EventMissionEntity_o *v120; // x8
  int32_t name; // w2
  System_String_o *age; // x20
  System_Action_o *v123; // x20
  WarEntity_o *v124; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8ED9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)redisp_act, *(_QWORD *)&typeIndex);
    sub_B5D5C4(&AtlasManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_CompleteMissionComponent_LoadNotificationEnd__, v11, v12, v13);
    sub_B5D5C4(&Method_CompleteMissionComponent_OnClickBack__, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_CompleteMissionMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_EventMissionEntity___, v35, v36, v37);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v53, v54, v55);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59, v60, v61);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v62, v63, v64);
    sub_B5D5C4(&SoundManager_TypeInfo, v65, v66, v67);
    byte_42E8ED9 = 1;
  }
  v124 = 0LL;
  entity = 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields.reDispAction = redisp_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reDispAction,
    (System_Int32_array **)redisp_act,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v82,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.currentEventIdList = v82;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentEventIdList,
    (System_Int32_array **)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
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
                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_52;
    Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.titleInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    v99 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v99 )
      goto LABEL_52;
    TitleInfoControl__SetParent(v99, (UnityEngine_Transform_o *)Instance, 0LL);
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
    TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v100 = this->fields.titleInfo;
    v101 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v101, (Il2CppObject *)this, Method_CompleteMissionComponent_OnClickBack__, 0LL);
    if ( !v100 )
      goto LABEL_52;
    TitleInfoControl__SetBackBtnAct(v100, v101, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Entitys_WarMaster__WarEntity = (struct MstMissionEntity_array *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1AE44E0 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_WarMaster__WarEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mstMissionList,
    (System_Int32_array **)Entitys_WarMaster__WarEntity,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v109);
  p_completeMissionList = &this->fields.completeMissionList;
  this->fields.completeMissionList = VaildCompleteMissionData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.completeMissionList,
    (System_Int32_array **)VaildCompleteMissionData,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v119 = *p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_52;
    if ( !v119->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v120 = v119->fields._items->m_Items[0];
    if ( !v120 || !Instance )
      goto LABEL_52;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           v120->fields.missionTargetId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_52;
      name = (int32_t)entity->fields.name;
      if ( name >= 1 )
      {
        if ( !Instance )
          goto LABEL_52;
        Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   &v124,
                                   name,
                                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v124 )
          {
            age = v124->fields.age;
            if ( age )
              goto LABEL_45;
            goto LABEL_41;
          }
LABEL_52:
          sub_B5D69C(Instance, v69);
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
  v123 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v123, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v123, 0LL);
}


void __fastcall CompleteMissionComponent__RequestMissionReward(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
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
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_42E8EDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_CompleteMissionComponent_missionRewardCallback__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    byte_42E8EDE = 1;
  }
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v14,
                                                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0LL
    || !Request_WarBoardWallAttackRequest )
  {
    sub_B5D69C(Request_WarBoardWallAttackRequest, v16);
  }
  EventMissionClearRewardRequest__beginRequest(Request_WarBoardWallAttackRequest, missionToRecieve->fields.id, 0LL);
}


void __fastcall CompleteMissionComponent__SetAfterAction(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, isEnable);
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
    sub_B5D69C(missionListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionListViewManager, 1, 0LL);
  CompleteMissionComponent__SetUpMissionListView(this, v4);
  CompleteMissionComponent__setMissionCompleteNum(this, v5);
}


void __fastcall CompleteMissionComponent__SetUpMissionListView(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x5
  MissionListViewManager_o *v13; // x19

  if ( (byte_42E8EDD & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    byte_42E8EDD = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_10;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !missionListViewManager )
    goto LABEL_10;
  CompleteMissionListViewManager__CreateList(
    missionListViewManager,
    completeMissionList,
    v11,
    0,
    this->fields.reDispAction,
    v12);
  v13 = (MissionListViewManager_o *)this->fields.missionListViewManager;
  currentEventIdList = (System_Collections_Generic_List_int__o *)CompleteMissionComponent_TypeInfo;
  if ( (BYTE3(CompleteMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionComponent_TypeInfo);
  }
  if ( !v13 )
LABEL_10:
    sub_B5D69C(currentEventIdList, method);
  MissionListViewManager__SetMode_25051420(
    v13,
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
    sub_B5D69C(0LL, method);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent___AcceptReward_b__33_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, method);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
}


void __fastcall CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8EE6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5558/*"END_DISP"*/, (_DWORD)method, v2, v3);
    byte_42E8EE6 = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5558/*"END_DISP"*/, 0LL);
}


void __fastcall CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x19
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **AchivePanelNum; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *v51; // x21
  EventMissionEntity_o *v52; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x8
  Il2CppObject *v61; // x0
  System_String_o *v62; // x20
  AssetLoader_LoadEndDataHandler_o *v63; // x21
  int v64; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8EDA & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v17, v18, v19);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__, v26, v27, v28);
    sub_B5D5C4(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_4274/*"CompleteMission/{0}/asset"*/, v32, v33, v34);
    byte_42E8EDA = 1;
  }
  v35 = sub_B5D694(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
  CompleteMissionComponent___c__DisplayClass23_0___ctor((CompleteMissionComponent___c__DisplayClass23_0_o *)v35, 0LL);
  if ( !v35 )
    goto LABEL_19;
  *(_QWORD *)(v35 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 16), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_19;
  AchivePanelNum = (System_Int32_array **)EventMissionMaster__getAchivePanelNum(
                                            (EventMissionMaster_o *)Instance,
                                            completeMissionList,
                                            0LL);
  *(_QWORD *)(v35 + 24) = AchivePanelNum;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 24), AchivePanelNum, v45, v46, v47, v48, v49, v50);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v51 = this->fields.completeMissionList;
  if ( !v51 )
    goto LABEL_19;
  if ( !v51->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v52 = v51->fields._items->m_Items[0];
  if ( !v52
    || !Instance
    || (Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          v52->fields.missionTargetId,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v35 + 32) = Entity,
        sub_B5D560((BattleServantConfConponent_o *)(v35 + 32), Entity, v54, v55, v56, v57, v58, v59),
        v60 = *(_QWORD *)(v35 + 32),
        *(_DWORD *)(v35 + 40) = 0,
        !v60) )
  {
LABEL_19:
    sub_B5D69C(Instance, completeMissionList);
  }
  v64 = *(_DWORD *)(v60 + 20);
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
  v62 = System_String__Format((System_String_o *)StringLiteral_4274/*"CompleteMission/{0}/asset"*/, v61, 0LL);
  v63 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v63,
    (Il2CppObject *)v35,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v62, v63, 1, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall CompleteMissionComponent__getVaildCompleteMissionData(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v34; // w24
  Il2CppClass **v35; // x8
  Il2CppClass *v36; // x22
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x10
  int v40; // w9
  int32_t missionTargetId; // w22
  __int64 v42; // x21
  __int64 v43; // x9
  __int64 v44; // x9
  __int64 v46; // x0

  if ( (byte_42E8EDB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42E8EDB = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_37;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_37;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= max_length )
      {
        v46 = sub_B5D6C8(currentEventIdList);
        sub_B5D668(v46, 0LL);
      }
      v35 = &mstMissionList->obj.klass + (int)v34;
      v36 = v35[4];
      if ( !v36 )
        break;
      currentEventIdList = (System_Collections_Generic_List_int__o *)MstMissionEntity__isActiveNow(
                                                                       (MstMissionEntity_o *)v35[4],
                                                                       0LL);
      if ( ((unsigned __int8)currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (System_Collections_Generic_List_int__o *)EventMissionMaster__getCompleteMissionList(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         HIDWORD(v36->_1.name),
                                                                         0LL);
        if ( !currentEventIdList )
          break;
        method = (const MethodInfo *)currentEventIdList;
        if ( *(_QWORD *)&currentEventIdList->fields._size )
        {
          if ( !v31 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v31,
            (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            currentEventIdList,
            HIDWORD(v36->_1.name),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_18;
    }
LABEL_37:
    sub_B5D69C(currentEventIdList, method);
  }
LABEL_18:
  if ( v31 )
  {
    size = v31->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v31->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      items = v31->fields._items;
      v39 = items->m_Items[0];
      if ( !v39 )
        goto LABEL_37;
      v40 = v31->fields._size;
      missionTargetId = v39->fields.missionTargetId;
      if ( v40 >= 1 )
      {
        v42 = 4LL;
        do
        {
          if ( v40 <= (unsigned int)(v42 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v43 = *((_QWORD *)&items->obj.klass + v42);
          if ( !v43 )
            goto LABEL_37;
          if ( missionTargetId > *(_DWORD *)(v43 + 16) )
          {
            if ( v31->fields._size <= (unsigned int)(v42 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v44 = *((_QWORD *)&items->obj.klass + v42);
            if ( !v44 )
              goto LABEL_37;
            missionTargetId = *(_DWORD *)(v44 + 16);
          }
          v40 = v31->fields._size;
        }
        while ( (int)++v42 - 4 < v40 );
      }
      this->fields.currentMissionId = missionTargetId;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v31;
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
  __int64 v3; // x3
  CompleteMissionComponent_o *v5; // x19
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
  __int64 *v24; // x8
  Il2CppObject *v25; // x20
  const MethodInfo *v26; // x3
  struct PlayMakerFSM_o *myFsm; // x8
  __int64 v28; // x0

  v5 = this;
  if ( (byte_42E8EDF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___,
      (_DWORD)result,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v18, v19, v20);
    this = (CompleteMissionComponent_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v21, v22, v23);
    byte_42E8EDF = 1;
  }
  if ( !result )
    goto LABEL_17;
  if ( !System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    v25 = (Il2CppObject *)System_String__Concat_44580072(
                            (System_String_o *)StringLiteral_15824/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16061/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                           v25,
                                           (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.completeMissionPanel) )
      {
        v28 = sub_B5D6C8(this);
        sub_B5D668(v28, 0LL);
      }
      myFsm = this->fields.myFsm;
      if ( myFsm )
      {
        this = (CompleteMissionComponent_o *)v5->fields.missionListViewManager;
        if ( this )
        {
          CompleteMissionListViewManager__SetResultData(
            (CompleteMissionListViewManager_o *)this,
            *(GetSvts_array **)&myFsm->fields.m_CachedPtr,
            (GetCommandCodes_array *)myFsm->fields.fsm,
            v26);
          this = (CompleteMissionComponent_o *)v5->fields.myFsm;
          if ( this )
          {
            v24 = &StringLiteral_11212/*"REQUEST_OK"*/;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_17:
    sub_B5D69C(this, result);
  }
  this = (CompleteMissionComponent_o *)v5->fields.myFsm;
  if ( !this )
    goto LABEL_17;
  v24 = &StringLiteral_11210/*"REQUEST_NG"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v24, 0LL);
}


void __fastcall CompleteMissionComponent__setMissionCompleteNum(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x24
  signed __int64 size; // x22
  int compMissionNum; // w21
  UserEventMissionMaster_o *v25; // x20
  unsigned __int64 v26; // x23
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E8EDC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, v17, v18, v19);
    byte_42E8EDC = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_16;
  size = currentEventIdList->fields._size;
  if ( (int)size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v25 = (UserEventMissionMaster_o *)Instance;
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)currentEventIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v25 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(
                                    v25,
                                    currentEventIdList->fields._items->m_Items[++v26],
                                    0LL);
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( (__int64)v26 >= size )
        goto LABEL_14;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_16:
    sub_B5D69C(Instance, v21);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_14:
  eventMissionTxt = this->fields.eventMissionTxt;
  v31 = compMissionNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  totalMissionNum = this->fields.totalMissionNum;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
  Instance = (DataManager_o *)System_String__Format_44573324((System_String_o *)StringLiteral_23922/*"{0}/{1}"*/, v28, v29, 0LL);
  if ( !eventMissionTxt )
    goto LABEL_16;
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
}


void __fastcall CompleteMissionComponent__setRecieveModifyItem(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v9; // x20
  System_Action_o *v10; // x21

  if ( (byte_42E8EE3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__, v5, v6, v7);
    byte_42E8EE3 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v9 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0LL),
        !v9) )
  {
    sub_B5D69C(missionListViewManager, method);
  }
  MissionListViewManager__SetMode(v9, 3, v10, 0LL);
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
  sub_B5D560(
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
  if ( (byte_42E6D22 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E6D22 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CompleteMissionComponent_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  __int64 v3; // x3
  CompleteMissionComponent___c__DisplayClass23_0_o *v5; // x19
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
  UILabel_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int32_t current; // w21
  __int64 v67; // x20
  __int64 v68; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x0
  __int64 v77; // x1
  struct CompleteMissionComponent_o *v78; // x8
  UnityEngine_Transform_o *completeMissionPanel; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v81; // x1
  UnityEngine_Component_o *v82; // x0
  __int64 v83; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v85; // x1
  __int64 v86; // x0
  __int64 v87; // x1
  struct CompleteMissionComponent_o *v88; // x8
  UnityEngine_Transform_o *v89; // x0
  UnityEngine_Transform_o *v90; // x0
  __int64 v91; // x1
  UnityEngine_Component_o *v92; // x0
  __int64 v93; // x1
  System_Int32_array **Component_WebViewObject; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 v101; // x0
  __int64 v102; // x1
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v104; // x21
  Il2CppObject *v105; // x2
  System_String_o *v106; // x21
  AssetLoader_LoadEndDataHandler_o *v107; // x22
  struct CompleteMissionComponent_o *v108; // x8
  struct CompleteMissionComponent_o *v109; // x8
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  CompleteMissionSprite_o *completeMissionSprite; // x20
  EventMissionEntity_o *v112; // x8
  struct CompleteMissionComponent_o *v113; // x9
  int v114; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v115; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v116; // [xsp+20h] [xbp-70h] BYREF

  v5 = this;
  if ( (byte_42E6D20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)frontPanel, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UITexture___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v30, v31, v32);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v36, v37, v38);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__, v45, v46, v47);
    sub_B5D5C4(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_4276/*"CompleteMissionPanel"*/, v51, v52, v53);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_B5D5C4(&StringLiteral_4275/*"CompleteMission/{0}/{1}"*/, v54, v55, v56);
    byte_42E6D20 = 1;
  }
  memset(&v116, 0, sizeof(v116));
  if ( !frontPanel )
    goto LABEL_54;
  Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                  frontPanel,
                                                  (System_String_o *)StringLiteral_4276/*"CompleteMissionPanel"*/,
                                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                               (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  if ( !this )
    goto LABEL_54;
  _4__this = v5->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !_4__this )
    goto LABEL_54;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&_4__this->fields.completeMissionPanel,
    (System_Int32_array **)this,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v5->fields.achiveList;
  if ( !this )
    goto LABEL_54;
  if ( !LODWORD(this->fields.achiveList) )
  {
    v108 = v5->fields.__4__this;
    if ( v108 )
    {
      this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v108->fields.titleInfo;
      if ( this )
      {
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
        v109 = v5->fields.__4__this;
        if ( v109 )
        {
          completeMissionList = v109->fields.completeMissionList;
          if ( !completeMissionList )
            return;
          completeMissionSprite = v109->fields.completeMissionSprite;
          if ( !completeMissionList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v112 = completeMissionList->fields._items->m_Items[0];
          if ( v112 )
          {
            v113 = v5->fields.__4__this;
            if ( v113 )
            {
              if ( completeMissionSprite )
              {
                CompleteMissionSprite__InitPanel(
                  completeMissionSprite,
                  v112->fields.missionTargetId,
                  v113->fields.completeMissionListBgSprite,
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
    sub_B5D69C(this, frontPanel);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v116 = v115;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v116,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v116.fields.current;
    v67 = sub_B5D694(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v67, 0LL);
    if ( !v67 )
      sub_B5D69C(v68, v69);
    *(_QWORD *)(v67 + 32) = v5;
    sub_B5D560((BattleServantConfConponent_o *)(v67 + 32), (System_Int32_array **)v5, v70, v71, v72, v73, v74, v75);
    v77 = (unsigned int)(current - 2);
    *(_DWORD *)(v67 + 24) = v77;
    v78 = v5->fields.__4__this;
    if ( !v78 )
      sub_B5D69C(v76, v77);
    completeMissionPanel = v78->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_B5D69C(0LL, v77);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, v77, 0LL);
    if ( !Child )
      sub_B5D69C(0LL, v81);
    v82 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
    if ( !v82 )
      sub_B5D69C(0LL, v83);
    gameObject = UnityEngine_Component__get_gameObject(v82, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v85);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v88 = v5->fields.__4__this;
    if ( !v88 )
      sub_B5D69C(v86, v87);
    v89 = v88->fields.completeMissionPanel;
    if ( !v89 )
      sub_B5D69C(0LL, v87);
    v90 = UnityEngine_Transform__GetChild(v89, *(_DWORD *)(v67 + 24), 0LL);
    if ( !v90 )
      sub_B5D69C(0LL, v91);
    v92 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v90, 1, 0LL);
    if ( !v92 )
      sub_B5D69C(0LL, v93);
    Component_WebViewObject = (System_Int32_array **)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       v92,
                                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v67 + 16) = Component_WebViewObject;
    sub_B5D560((BattleServantConfConponent_o *)(v67 + 16), Component_WebViewObject, v95, v96, v97, v98, v99, v100);
    completeMissionEnt = v5->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_B5D69C(v101, v102);
    LODWORD(v115.fields.list) = completeMissionEnt->fields.objectId;
    v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115);
    v114 = *(_DWORD *)(v67 + 24);
    v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114);
    v106 = System_String__Format_44573324((System_String_o *)StringLiteral_4275/*"CompleteMission/{0}/{1}"*/, v104, v105, 0LL);
    v107 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v107,
      (Il2CppObject *)v67,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v106, v107, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v116,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  struct UITexture_o *tex; // x21
  Il2CppObject *v19; // x0
  System_String_o *Object_WarBoardWaitTimeSetting; // x0
  __int64 v21; // x1
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v23; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v26; // x8
  struct CompleteMissionComponent_o *v27; // x8
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  CompleteMissionSprite_o *completeMissionSprite; // x20
  EventMissionEntity_o *v30; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v31; // x9
  struct CompleteMissionComponent_o *v32; // x9
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E6D21 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)backPanel, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v15, v16, v17);
    byte_42E6D21 = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Object_WarBoardWaitTimeSetting = System_String__Format((System_String_o *)StringLiteral_23850/*"{0}"*/, v19, 0LL);
  if ( !backPanel )
    goto LABEL_22;
  Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        backPanel,
                                                        Object_WarBoardWaitTimeSetting,
                                                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
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
  v23 = this->fields.CS___8__locals1;
  if ( !v23 )
    goto LABEL_22;
  achiveList = v23->fields.achiveList;
  if ( !achiveList )
    goto LABEL_22;
  if ( v23->fields.loadAssetCount != achiveList->fields._size )
    return;
  _4__this = v23->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  Object_WarBoardWaitTimeSetting = (System_String_o *)_4__this->fields.titleInfo;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_22;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_WarBoardWaitTimeSetting, 1, 0LL);
  v26 = this->fields.CS___8__locals1;
  if ( !v26 )
    goto LABEL_22;
  v27 = v26->fields.__4__this;
  if ( !v27 )
    goto LABEL_22;
  completeMissionList = v27->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v27->fields.completeMissionSprite;
  if ( !completeMissionList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v30 = completeMissionList->fields._items->m_Items[0];
  if ( !v30
    || (v31 = this->fields.CS___8__locals1) == 0LL
    || (v32 = v31->fields.__4__this) == 0LL
    || !completeMissionSprite )
  {
LABEL_22:
    sub_B5D69C(Object_WarBoardWaitTimeSetting, v21);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    v30->fields.missionTargetId,
    v32->fields.completeMissionListBgSprite,
    16,
    0LL);
}


void __fastcall CompleteMissionComponent_resData___ctor(
        CompleteMissionComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}