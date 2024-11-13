void __fastcall CompleteMissionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B14F22 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionComponent_TypeInfo, v1, v2);
    byte_4B14F22 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void __fastcall CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B14F21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v5, v6);
    byte_4B14F21 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.completeMissionList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4B14F1D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CompleteMissionComponent__AcceptReward_b__33_0__, v4, v5);
    byte_4B14F1D = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL),
        missionListViewManager = this->fields.missionListViewManager,
        v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0LL),
        !missionListViewManager) )
  {
    sub_1BCAA3C(titleInfo, method);
  }
  CompleteMissionListViewManager__AcceptReward(missionListViewManager, v11, v12);
}


void __fastcall CompleteMissionComponent__CheckRewardAcceptable(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1BCAA3C(0LL, method);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  ListViewManager_o *missionListViewManager; // x0

  if ( (byte_4B14F1F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    byte_4B14F1F = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
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
    sub_1BCAA3C(missionListViewManager, v4);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct CompleteMissionComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4B14F1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CompleteMissionComponent_OnClickBack__, method, v2);
    byte_4B14F1E = 1;
  }
  v4 = Method_CompleteMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CompleteMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CompleteMissionComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall CompleteMissionComponent__OnDestroy(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_titleInfo; // x19
  UnityEngine_Object_o *v5; // x20
  struct TitleInfoControl_o *titleInfo; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B14F15 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14F15 = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v5 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1BCAA3C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_titleInfo, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  void *Instance; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Collections_Generic_List_int__o *v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  __int64 v75; // x1
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  TitleInfoControl_o *v84; // x21
  TitleInfoControl_o *v85; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Action_o *v89; // x21
  struct MstMissionEntity_array *Entitys_object__object; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  const MethodInfo *v97; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  System_Collections_Generic_List_object__o *v107; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v108; // x20
  int32_t klass; // w2
  System_String_o *monitor; // x20
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  System_Action_o *v114; // x20
  __int64 v115; // x1
  Il2CppObject *v116; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B14F16 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, redisp_act);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_CompleteMissionComponent_LoadNotificationEnd__, v10, v11);
    sub_1BCA7E0(&Method_CompleteMissionComponent_OnClickBack__, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CompleteMissionMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v18, v19);
    sub_1BCA7E0(&DataManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v22, v23);
    sub_1BCA7E0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__, v24, v25);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_EventMissionEntity___, v26, v27);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v34, v35);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v38, v39);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42, v43);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45);
    sub_1BCA7E0(&SoundManager_TypeInfo, v46, v47);
    byte_4B14F16 = 1;
  }
  entity = 0LL;
  v116 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v50, v51, v52, v53, v54, v55);
  this->fields.reDispAction = redisp_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.reDispAction,
    (int64_t)redisp_act,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v65 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v62,
                                                    v63,
                                                    v64);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v65;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentEventIdList,
    (int64_t)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75);
    Instance = UnityEngine_Object__Instantiate_object_(
                 titlePrefab,
                 (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_43;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.titleInfo,
      (int64_t)Component_object,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    v84 = this->fields.titleInfo;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v84 )
      goto LABEL_43;
    TitleInfoControl__SetParent(v84, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_43;
    TitleInfoControl__setDepth((TitleInfoControl_o *)Instance, 20, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_43;
    TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 38, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_43;
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, 0LL, 83, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_43;
    TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)Instance, 1, 83, 0, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_43;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v85 = this->fields.titleInfo;
    v89 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v86, v87, v88);
    System_Action___ctor(v89, (Il2CppObject *)this, (intptr_t)Method_CompleteMissionComponent_OnClickBack__, 0LL);
    if ( !v85 )
      goto LABEL_43;
    TitleInfoControl__SetBackBtnAct(v85, v89, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Entitys_object__object = (struct MstMissionEntity_array *)DataManager__getEntitys_object__object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2F12EF0 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_object__object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mstMissionList,
    (int64_t)Entitys_object__object,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v97);
  this->fields.completeMissionList = VaildCompleteMissionData;
  p_completeMissionList = &this->fields.completeMissionList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.completeMissionList,
    (int64_t)VaildCompleteMissionData,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v49);
    Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v107 = (System_Collections_Generic_List_object__o *)*p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_43;
    v108 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 v107,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !Instance || !v108 )
      goto LABEL_43;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v108,
           &entity,
           *((_DWORD *)Instance + 7),
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v49);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_43;
      klass = (int32_t)entity[2].klass;
      if ( klass >= 1 )
      {
        if ( !Instance )
          goto LABEL_43;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &v116,
                             klass,
                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v116 )
          {
            monitor = (System_String_o *)v116[1].monitor;
            if ( monitor )
              goto LABEL_38;
            goto LABEL_35;
          }
LABEL_43:
          sub_1BCAA3C(Instance, v49);
        }
      }
    }
  }
LABEL_35:
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v49);
  monitor = MyRoomControl__getChangeMyRoomBgm(0LL);
LABEL_38:
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v49);
  SoundManager__playBgm(monitor, 0LL);
  v114 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v111, v112, v113);
  System_Action___ctor(v114, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v115);
  AtlasManager__LoadNotification(v114, 0LL);
}


void __fastcall CompleteMissionComponent__RequestMissionReward(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4B14F1B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CompleteMissionComponent_missionRewardCallback__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B14F1B = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0LL
    || !Request_object )
  {
    sub_1BCAA3C(Request_object, v14);
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
    sub_1BCAA3C(0LL, method);
  CompleteMissionListViewManager__setAfterAction(missionListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionComponent__SetBtnEnable(
        CompleteMissionComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, isEnable);
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
    sub_1BCAA3C(missionListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionListViewManager, 1, 0LL);
  CompleteMissionComponent__SetUpMissionListView(this, v4);
  CompleteMissionComponent__setMissionCompleteNum(this, v5);
}


void __fastcall CompleteMissionComponent__SetUpMissionListView(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x5
  MissionListViewManager_o *v11; // x19

  if ( (byte_4B14F1A & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v4, v5);
    byte_4B14F1A = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_9;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !missionListViewManager )
    goto LABEL_9;
  CompleteMissionListViewManager__CreateList(
    missionListViewManager,
    completeMissionList,
    v9,
    0,
    this->fields.reDispAction,
    v10);
  currentEventIdList = (System_Collections_Generic_List_int__o *)CompleteMissionComponent_TypeInfo;
  v11 = (MissionListViewManager_o *)this->fields.missionListViewManager;
  if ( !CompleteMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CompleteMissionComponent_TypeInfo, method);
  if ( !v11 )
LABEL_9:
    sub_1BCAA3C(currentEventIdList, method);
  MissionListViewManager__SetMode_44915468(
    v11,
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
    sub_1BCAA3C(0LL, method);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent___AcceptReward_b__33_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, method);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
}


void __fastcall CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B14F23 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5549/*"END_DISP"*/, method, v2);
    byte_4B14F23 = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5549/*"END_DISP"*/, 0LL);
}


void __fastcall CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x19
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_int__o *AchivePanelNum; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x20
  Il2CppObject *Entity; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x8
  Il2CppObject *v51; // x0
  System_String_o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  AssetLoader_LoadEndDataHandler_o *v56; // x21
  __int64 v57; // x1
  int v58; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14F17 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v13, v14);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__, v19, v20);
    sub_1BCA7E0(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_4727/*"CompleteMission/{0}/asset"*/, v23, v24);
    byte_4B14F17 = 1;
  }
  v25 = sub_1BCAA2C(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_16;
  *(_QWORD *)(v25 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)this, v28, v29, v30, v31, v32, v33);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_16;
  AchivePanelNum = EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, completeMissionList, 0LL);
  *(_QWORD *)(v25 + 24) = AchivePanelNum;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)AchivePanelNum, v35, v36, v37, v38, v39, v40);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v41 = this->fields.completeMissionList;
  if ( !v41
    || (v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v41,
                      0,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0LL)
    || !v42
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v42,
                   HIDWORD(Instance[1].monitor),
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v25 + 32) = Entity,
        sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)Entity, v44, v45, v46, v47, v48, v49),
        v50 = *(_QWORD *)(v25 + 32),
        *(_DWORD *)(v25 + 40) = 0,
        !v50) )
  {
LABEL_16:
    sub_1BCAA3C(Instance, completeMissionList);
  }
  v58 = *(_DWORD *)(v50 + 20);
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
  v52 = System_String__Format((System_String_o *)StringLiteral_4727/*"CompleteMission/{0}/asset"*/, v51, 0LL);
  v56 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v53, v54, v55);
  AssetLoader_LoadEndDataHandler___ctor(
    v56,
    (Il2CppObject *)v25,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v57);
  AssetManager__loadAssetStorage(v52, v56, 1, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall CompleteMissionComponent__getVaildCompleteMissionData(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CompleteMissionComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v21; // w9
  Il2CppObject *MasterData_object; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v29; // w24
  Il2CppClass **v30; // x8
  Il2CppClass *v31; // x22
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int size; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v37; // w21

  v3 = this;
  if ( (byte_4B14F18 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16, v17);
    this = (CompleteMissionComponent_o *)sub_1BCA7E0(
                                           &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                           v18,
                                           v19);
    byte_4B14F18 = 1;
  }
  currentEventIdList = v3->fields.currentEventIdList;
  v3->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_34;
  v21 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v21;
  this = (CompleteMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v3->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_34;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1BCAA44(this, method);
      v30 = &mstMissionList->obj.klass + (int)v29;
      v31 = v30[4];
      if ( !v31 )
        break;
      this = (CompleteMissionComponent_o *)MstMissionEntity__isActiveNow((MstMissionEntity_o *)v30[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (CompleteMissionComponent_o *)EventMissionMaster__getCompleteMissionList(
                                               (EventMissionMaster_o *)MasterData_object,
                                               HIDWORD(v31->_1.name),
                                               0LL);
        if ( !this )
          break;
        method = (const MethodInfo *)this;
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v26,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (CompleteMissionComponent_o *)v3->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v31->_1.name);
          v32 = *(_QWORD *)&this->fields.m_CachedPtr;
          v33 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v32 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v32 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v32 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_21;
    }
LABEL_34:
    sub_1BCAA3C(this, method);
  }
LABEL_21:
  if ( v26 )
  {
    size = v26->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      v3->fields.totalMissionNum = size;
      this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v26,
                                             0,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_34;
      m_CachedPtr = this->fields.m_CachedPtr;
      if ( v26->fields._size >= 1 )
      {
        v37 = 0;
        do
        {
          this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v26,
                                                 v37,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_34;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                   v26,
                                                   v37,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_34;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v37 < v26->fields._size );
      }
      v3->fields.currentMissionId = m_CachedPtr;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v26;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 *v17; // x8
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  const MethodInfo *v20; // x3
  struct UnityEngine_Transform_o *completeMissionPanel; // x8

  v4 = this;
  if ( (byte_4B14F1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___, result, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v13, v14);
    this = (CompleteMissionComponent_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v15, v16);
    byte_4B14F1C = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( !System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    v19 = (Il2CppObject *)System_String__Concat_62412480(
                            (System_String_o *)StringLiteral_15978/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16236/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                           v19,
                                           (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1BCAA44(this, result);
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
            v20);
          this = (CompleteMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v17 = &StringLiteral_11197/*"REQUEST_OK"*/;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(this, result);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_16;
  v17 = &StringLiteral_11195/*"REQUEST_NG"*/;
LABEL_15:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v17, 0LL);
}


void __fastcall CompleteMissionComponent__setMissionCompleteNum(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w23
  int compMissionNum; // w22
  UserEventMissionMaster_o *v19; // x20
  int32_t v20; // w21
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14F19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v12, v13);
    byte_4B14F19 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_14;
  size = currentEventIdList->fields._size;
  if ( size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v19 = (UserEventMissionMaster_o *)Instance;
    v20 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    currentEventIdList,
                                    v20,
                                    (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v19 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v19, (int32_t)Instance, 0LL);
      ++v20;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v20 )
        goto LABEL_12;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_14:
    sub_1BCAA3C(Instance, v15);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_12:
  eventMissionTxt = this->fields.eventMissionTxt;
  v25 = compMissionNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  totalMissionNum = this->fields.totalMissionNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
  Instance = (DataManager_o *)System_String__Format_62415592((System_String_o *)StringLiteral_25309/*"{0}/{1}"*/, v22, v23, 0LL);
  if ( !eventMissionTxt )
    goto LABEL_14;
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
}


void __fastcall CompleteMissionComponent__setRecieveModifyItem(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_o *v11; // x21

  if ( (byte_4B14F20 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__, v4, v5);
    byte_4B14F20 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v7 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0LL),
        !v7) )
  {
    sub_1BCAA3C(missionListViewManager, method);
  }
  MissionListViewManager__SetMode(v7, 3, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionComponent_ClickDelegate___ctor(
        CompleteMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0C0CC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C084;
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
  if ( (byte_4B14F24 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B14F24 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *Object_object__49237568; // x20
  __int64 v40; // x1
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  int32_t current; // w21
  __int64 v53; // x20
  __int64 v54; // x0
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x0
  __int64 v63; // x1
  struct CompleteMissionComponent_o *v64; // x8
  UnityEngine_Transform_o *completeMissionPanel; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v67; // x1
  UnityEngine_Component_o *v68; // x0
  __int64 v69; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v71; // x1
  __int64 v72; // x0
  __int64 v73; // x1
  struct CompleteMissionComponent_o *v74; // x8
  UnityEngine_Transform_o *v75; // x0
  UnityEngine_Transform_o *v76; // x0
  __int64 v77; // x1
  UnityEngine_Component_o *v78; // x0
  __int64 v79; // x1
  Il2CppObject *Component_object; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x0
  __int64 v88; // x1
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v90; // x21
  Il2CppObject *v91; // x2
  System_String_o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  AssetLoader_LoadEndDataHandler_o *v96; // x22
  __int64 v97; // x1
  struct CompleteMissionComponent_o *v98; // x8
  struct CompleteMissionComponent_o *v99; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v102; // x4
  struct CompleteMissionComponent_o *v103; // x8
  int v104; // [xsp+4h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v105; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v106; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4B14F25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, frontPanel, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v21, v22);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__, v31, v32);
    sub_1BCA7E0(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_4729/*"CompleteMissionPanel"*/, v35, v36);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_1BCA7E0(&StringLiteral_4728/*"CompleteMission/{0}/{1}"*/, v37, v38);
    byte_4B14F25 = 1;
  }
  memset(&v106, 0, sizeof(v106));
  if ( !frontPanel )
    goto LABEL_50;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              frontPanel,
                              (System_String_o *)StringLiteral_4729/*"CompleteMissionPanel"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                               Object_object__49237568,
                                                               transform,
                                                               (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !this )
    goto LABEL_50;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.completeMissionPanel,
    (int64_t)this,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v4->fields.achiveList;
  if ( !this )
    goto LABEL_50;
  if ( !LODWORD(this->fields.achiveList) )
  {
    v98 = v4->fields.__4__this;
    if ( v98 )
    {
      this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v98->fields.titleInfo;
      if ( this )
      {
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
        v99 = v4->fields.__4__this;
        if ( v99 )
        {
          completeMissionList = (System_Collections_Generic_List_object__o *)v99->fields.completeMissionList;
          if ( !completeMissionList )
            return;
          completeMissionSprite = v99->fields.completeMissionSprite;
          this = (CompleteMissionComponent___c__DisplayClass23_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       completeMissionList,
                                                                       0,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( this )
          {
            v103 = v4->fields.__4__this;
            if ( v103 )
            {
              if ( completeMissionSprite )
              {
                CompleteMissionSprite__InitPanel(
                  completeMissionSprite,
                  HIDWORD(this->fields.achiveList),
                  v103->fields.completeMissionListBgSprite,
                  16,
                  v102);
                return;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_1BCAA3C(this, frontPanel);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v105,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v106 = v105;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v106,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v106.fields._current;
    v53 = sub_1BCAA2C(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo, v49, v50, v51);
    System_Object___ctor((Il2CppObject *)v53, 0LL);
    if ( !v53 )
      sub_1BCAA3C(v54, v55);
    *(_QWORD *)(v53 + 32) = v4;
    sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 32), (int64_t)v4, v56, v57, v58, v59, v60, v61);
    v63 = (unsigned int)(current - 2);
    *(_DWORD *)(v53 + 24) = v63;
    v64 = v4->fields.__4__this;
    if ( !v64 )
      sub_1BCAA3C(v62, v63);
    completeMissionPanel = v64->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_1BCAA3C(0LL, v63);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, v63, 0LL);
    if ( !Child )
      sub_1BCAA3C(0LL, v67);
    v68 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
    if ( !v68 )
      sub_1BCAA3C(0LL, v69);
    gameObject = UnityEngine_Component__get_gameObject(v68, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v71);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v74 = v4->fields.__4__this;
    if ( !v74 )
      sub_1BCAA3C(v72, v73);
    v75 = v74->fields.completeMissionPanel;
    if ( !v75 )
      sub_1BCAA3C(0LL, v73);
    v76 = UnityEngine_Transform__GetChild(v75, *(_DWORD *)(v53 + 24), 0LL);
    if ( !v76 )
      sub_1BCAA3C(0LL, v77);
    v78 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v76, 1, 0LL);
    if ( !v78 )
      sub_1BCAA3C(0LL, v79);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v78,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v53 + 16) = Component_object;
    sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 16), (int64_t)Component_object, v81, v82, v83, v84, v85, v86);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_1BCAA3C(v87, v88);
    LODWORD(v105.fields._list) = completeMissionEnt->fields.objectId;
    v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
    v104 = *(_DWORD *)(v53 + 24);
    v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
    v92 = System_String__Format_62415592((System_String_o *)StringLiteral_4728/*"CompleteMission/{0}/{1}"*/, v90, v91, 0LL);
    v96 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v93, v94, v95);
    AssetLoader_LoadEndDataHandler___ctor(
      v96,
      (Il2CppObject *)v53,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v97);
    AssetManager__loadAssetStorage(v92, v96, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v106,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct UITexture_o *tex; // x21
  Il2CppObject *v14; // x0
  void *Object_object__49237568; // x0
  __int64 v16; // x1
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x10
  int v19; // w9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v21; // x8
  struct CompleteMissionComponent_o *v22; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v25; // x4
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v26; // x8
  struct CompleteMissionComponent_o *v27; // x8
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14F26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, backPanel, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v9, v10);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v11, v12);
    byte_4B14F26 = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Object_object__49237568 = System_String__Format((System_String_o *)StringLiteral_25238/*"{0}"*/, v14, 0LL);
  if ( !backPanel )
    goto LABEL_19;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              backPanel,
                              (System_String_o *)Object_object__49237568,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  if ( !tex )
    goto LABEL_19;
  Object_object__49237568 = (void *)((__int64 (__fastcall *)(struct UITexture_o *, void *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
                                      tex,
                                      Object_object__49237568,
                                      tex->klass->vtable._28_get_shader.methodPtr);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_19;
  achiveList = CS___8__locals1->fields.achiveList;
  v19 = CS___8__locals1->fields.loadAssetCount + 1;
  CS___8__locals1->fields.loadAssetCount = v19;
  if ( !achiveList )
    goto LABEL_19;
  if ( v19 != achiveList->fields._size )
    return;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  Object_object__49237568 = _4__this->fields.titleInfo;
  if ( !Object_object__49237568 )
    goto LABEL_19;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_object__49237568, 1, 0LL);
  v21 = this->fields.CS___8__locals1;
  if ( !v21 )
    goto LABEL_19;
  v22 = v21->fields.__4__this;
  if ( !v22 )
    goto LABEL_19;
  completeMissionList = (System_Collections_Generic_List_object__o *)v22->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v22->fields.completeMissionSprite;
  Object_object__49237568 = System_Collections_Generic_List_object___get_Item(
                              completeMissionList,
                              0,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
  if ( !Object_object__49237568
    || (v26 = this->fields.CS___8__locals1) == 0LL
    || (v27 = v26->fields.__4__this) == 0LL
    || !completeMissionSprite )
  {
LABEL_19:
    sub_1BCAA3C(Object_object__49237568, v16);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    *((_DWORD *)Object_object__49237568 + 7),
    v27->fields.completeMissionListBgSprite,
    16,
    v25);
}


void __fastcall CompleteMissionComponent_resData___ctor(
        CompleteMissionComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}