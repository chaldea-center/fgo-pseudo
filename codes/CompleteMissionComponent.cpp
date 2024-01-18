void __fastcall CompleteMissionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4187F43 & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionComponent_TypeInfo, v1);
    byte_4187F43 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void __fastcall CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4187F42 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v3);
    byte_4187F42 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.completeMissionList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4187F3E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CompleteMissionComponent__AcceptReward_b__33_0__, v3);
    byte_4187F3E = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL),
        missionListViewManager = this->fields.missionListViewManager,
        v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0LL),
        !missionListViewManager) )
  {
    sub_B2C434(titleInfo, method);
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
    sub_B2C434(0LL, method);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewManager_o *missionListViewManager; // x0

  if ( (byte_4187F40 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    byte_4187F40 = 1;
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
    sub_B2C434(missionListViewManager, v3);
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

  if ( (byte_4187F3F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187F3F = 1;
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

  if ( (byte_4187F36 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187F36 = 1;
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
      sub_B2C434(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_titleInfo, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_int__o *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  struct UnityEngine_GameObject_o *titlePrefab; // x21
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  TitleInfoControl_o *v59; // x21
  TitleInfoControl_o *v60; // x20
  System_Action_o *v61; // x21
  struct MstMissionEntity_array *Entitys_WarMaster__WarEntity; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o *v79; // x22
  EventMissionEntity_o *v80; // x8
  int32_t name; // w2
  System_String_o *age; // x20
  System_Action_o *v83; // x20
  WarEntity_o *v84; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187F37 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AtlasManager_TypeInfo, v8);
    sub_B2C35C(&Method_CompleteMissionComponent_LoadNotificationEnd__, v9);
    sub_B2C35C(&Method_CompleteMissionComponent_OnClickBack__, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_BgmMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_CompleteMissionMaster___, v12);
    sub_B2C35C(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__, v15);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v16);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_EventMissionEntity___, v17);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B2C35C(&MyRoomControl_TypeInfo, v22);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v23);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26);
    sub_B2C35C(&SoundManager_TypeInfo, v27);
    byte_4187F37 = 1;
  }
  v84 = 0LL;
  entity = 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.reDispAction = redisp_act;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.reDispAction,
    (System_Int32_array **)redisp_act,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v42;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentEventIdList,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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
                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_52;
    Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.titleInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    v59 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v59 )
      goto LABEL_52;
    TitleInfoControl__SetParent(v59, (UnityEngine_Transform_o *)Instance, 0LL);
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
    TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v60 = this->fields.titleInfo;
    v61 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_CompleteMissionComponent_OnClickBack__, 0LL);
    if ( !v60 )
      goto LABEL_52;
    TitleInfoControl__SetBackBtnAct(v60, v61, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Entitys_WarMaster__WarEntity = (struct MstMissionEntity_array *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1733C80 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_WarMaster__WarEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mstMissionList,
    (System_Int32_array **)Entitys_WarMaster__WarEntity,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v69);
  p_completeMissionList = &this->fields.completeMissionList;
  this->fields.completeMissionList = VaildCompleteMissionData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.completeMissionList,
    (System_Int32_array **)VaildCompleteMissionData,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v79 = *p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_52;
    if ( !v79->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v80 = v79->fields._items->m_Items[0];
    if ( !v80 || !Instance )
      goto LABEL_52;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           v80->fields.missionTargetId,
           (const MethodInfo_24E412C *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_52;
      name = (int32_t)entity->fields.name;
      if ( name >= 1 )
      {
        if ( !Instance )
          goto LABEL_52;
        Instance = (CommonUI_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                   &v84,
                                   name,
                                   (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v84 )
          {
            age = v84->fields.age;
            if ( age )
              goto LABEL_45;
            goto LABEL_41;
          }
LABEL_52:
          sub_B2C434(Instance, v29);
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
  v83 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v83, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v83, 0LL);
}


void __fastcall CompleteMissionComponent__RequestMissionReward(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v8; // x1
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4187F3C & 1) == 0 )
  {
    sub_B2C35C(&Method_CompleteMissionComponent_missionRewardCallback__, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4187F3C = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v6,
                                                                            (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0LL
    || !Request_WarBoardWallAttackRequest )
  {
    sub_B2C434(Request_WarBoardWallAttackRequest, v8);
  }
  EventMissionClearRewardRequest__beginRequest(Request_WarBoardWallAttackRequest, missionToRecieve->fields.id, 0LL);
}


void __fastcall CompleteMissionComponent__SetAfterAction(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, isEnable);
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
    sub_B2C434(missionListViewManager, method);
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

  if ( (byte_4187F3B & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionComponent_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    byte_4187F3B = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_10;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B2C434(currentEventIdList, method);
  MissionListViewManager__SetMode_24421264(
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
    sub_B2C434(0LL, method);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent___AcceptReward_b__33_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, method);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
}


void __fastcall CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187F44 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5481/*"END_DISP"*/, method);
    byte_4187F44 = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481/*"END_DISP"*/, 0LL);
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
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **AchivePanelNum; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Collections_Generic_List_EventMissionEntity__o *v29; // x21
  EventMissionEntity_o *v30; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x8
  Il2CppObject *v39; // x0
  System_String_o *v40; // x20
  AssetLoader_LoadEndDataHandler_o *v41; // x21
  int v42; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187F38 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__, v10);
    sub_B2C35C(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_4203/*"CompleteMission/{0}/asset"*/, v12);
    byte_4187F38 = 1;
  }
  v13 = sub_B2C42C(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
  CompleteMissionComponent___c__DisplayClass23_0___ctor((CompleteMissionComponent___c__DisplayClass23_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_19;
  AchivePanelNum = (System_Int32_array **)EventMissionMaster__getAchivePanelNum(
                                            (EventMissionMaster_o *)Instance,
                                            completeMissionList,
                                            0LL);
  *(_QWORD *)(v13 + 24) = AchivePanelNum;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), AchivePanelNum, v23, v24, v25, v26, v27, v28);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v29 = this->fields.completeMissionList;
  if ( !v29 )
    goto LABEL_19;
  if ( !v29->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v30 = v29->fields._items->m_Items[0];
  if ( !v30
    || !Instance
    || (Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          v30->fields.missionTargetId,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v13 + 32) = Entity,
        sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), Entity, v32, v33, v34, v35, v36, v37),
        v38 = *(_QWORD *)(v13 + 32),
        *(_DWORD *)(v13 + 40) = 0,
        !v38) )
  {
LABEL_19:
    sub_B2C434(Instance, completeMissionList);
  }
  v42 = *(_DWORD *)(v38 + 20);
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v40 = System_String__Format((System_String_o *)StringLiteral_4203/*"CompleteMission/{0}/asset"*/, v39, 0LL);
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v41,
    (Il2CppObject *)v13,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v40, v41, 1, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v16; // w24
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x22
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x10
  int v22; // w9
  int32_t missionTargetId; // w22
  __int64 v24; // x21
  __int64 v25; // x9
  __int64 v26; // x9
  __int64 v28; // x0

  if ( (byte_4187F39 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4187F39 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_37;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_37;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v28 = sub_B2C460(currentEventIdList);
        sub_B2C400(v28, 0LL);
      }
      v17 = &mstMissionList->obj.klass + (int)v16;
      v18 = v17[4];
      if ( !v18 )
        break;
      currentEventIdList = (System_Collections_Generic_List_int__o *)MstMissionEntity__isActiveNow(
                                                                       (MstMissionEntity_o *)v17[4],
                                                                       0LL);
      if ( ((unsigned __int8)currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (System_Collections_Generic_List_int__o *)EventMissionMaster__getCompleteMissionList(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         HIDWORD(v18->_1.name),
                                                                         0LL);
        if ( !currentEventIdList )
          break;
        method = (const MethodInfo *)currentEventIdList;
        if ( *(_QWORD *)&currentEventIdList->fields._size )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
            (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            currentEventIdList,
            HIDWORD(v18->_1.name),
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_18;
    }
LABEL_37:
    sub_B2C434(currentEventIdList, method);
  }
LABEL_18:
  if ( v13 )
  {
    size = v13->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v13->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      items = v13->fields._items;
      v21 = items->m_Items[0];
      if ( !v21 )
        goto LABEL_37;
      v22 = v13->fields._size;
      missionTargetId = v21->fields.missionTargetId;
      if ( v22 >= 1 )
      {
        v24 = 4LL;
        do
        {
          if ( v22 <= (unsigned int)(v24 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v25 = *((_QWORD *)&items->obj.klass + v24);
          if ( !v25 )
            goto LABEL_37;
          if ( missionTargetId > *(_DWORD *)(v25 + 16) )
          {
            if ( v13->fields._size <= (unsigned int)(v24 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v26 = *((_QWORD *)&items->obj.klass + v24);
            if ( !v26 )
              goto LABEL_37;
            missionTargetId = *(_DWORD *)(v26 + 16);
          }
          v22 = v13->fields._size;
        }
        while ( (int)++v24 - 4 < v22 );
      }
      this->fields.currentMissionId = missionTargetId;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v13;
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
  if ( (byte_4187F3D & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___, result);
    sub_B2C35C(&JsonManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v6);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v9);
    this = (CompleteMissionComponent_o *)sub_B2C35C(&StringLiteral_15870/*"]"*/, v10);
    byte_4187F3D = 1;
  }
  if ( !result )
    goto LABEL_17;
  if ( !System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_44307816(
                            (System_String_o *)StringLiteral_15634/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15870/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                           v12,
                                           (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.completeMissionPanel) )
      {
        v15 = sub_B2C460(this);
        sub_B2C400(v15, 0LL);
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
            v11 = &StringLiteral_11079/*"REQUEST_OK"*/;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_17:
    sub_B2C434(this, result);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_17;
  v11 = &StringLiteral_11077/*"REQUEST_NG"*/;
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
  __int64 v9; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x24
  signed __int64 size; // x22
  int compMissionNum; // w21
  UserEventMissionMaster_o *v13; // x20
  unsigned __int64 v14; // x23
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4187F3A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, v7);
    byte_4187F3A = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_16;
  size = currentEventIdList->fields._size;
  if ( (int)size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v13 = (UserEventMissionMaster_o *)Instance;
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)currentEventIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v13 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(
                                    v13,
                                    currentEventIdList->fields._items->m_Items[++v14],
                                    0LL);
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( (__int64)v14 >= size )
        goto LABEL_14;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_16:
    sub_B2C434(Instance, v9);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_14:
  eventMissionTxt = this->fields.eventMissionTxt;
  v19 = compMissionNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  totalMissionNum = this->fields.totalMissionNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
  Instance = (DataManager_o *)System_String__Format_44301068((System_String_o *)StringLiteral_23610/*"{0}/{1}"*/, v16, v17, 0LL);
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
  System_Action_o *v6; // x21

  if ( (byte_4187F41 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__, v3);
    byte_4187F41 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v5 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0LL),
        !v5) )
  {
    sub_B2C434(missionListViewManager, method);
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
  sub_B2C2F8(
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
  if ( (byte_418647E & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_418647E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CompleteMissionComponent_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CompleteMissionComponent_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
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
  int32_t current; // w21
  __int64 v32; // x20
  __int64 v33; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x1
  struct CompleteMissionComponent_o *v43; // x8
  UnityEngine_Transform_o *completeMissionPanel; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v46; // x1
  UnityEngine_Component_o *v47; // x0
  __int64 v48; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x1
  __int64 v51; // x0
  __int64 v52; // x1
  struct CompleteMissionComponent_o *v53; // x8
  UnityEngine_Transform_o *v54; // x0
  UnityEngine_Transform_o *v55; // x0
  __int64 v56; // x1
  UnityEngine_Component_o *v57; // x0
  __int64 v58; // x1
  System_Int32_array **Component_WebViewObject; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x0
  __int64 v67; // x1
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v69; // x21
  Il2CppObject *v70; // x2
  System_String_o *v71; // x21
  AssetLoader_LoadEndDataHandler_o *v72; // x22
  struct CompleteMissionComponent_o *v73; // x8
  struct CompleteMissionComponent_o *v74; // x8
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  CompleteMissionSprite_o *completeMissionSprite; // x20
  EventMissionEntity_o *v77; // x8
  struct CompleteMissionComponent_o *v78; // x9
  int v79; // [xsp+4h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v80; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v81; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_418647C & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, frontPanel);
    sub_B2C35C(&AssetManager_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v13);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B2C35C(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__, v18);
    sub_B2C35C(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_4205/*"CompleteMissionPanel"*/, v20);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_B2C35C(&StringLiteral_4204/*"CompleteMission/{0}/{1}"*/, v21);
    byte_418647C = 1;
  }
  memset(&v81, 0, sizeof(v81));
  if ( !frontPanel )
    goto LABEL_54;
  Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                  frontPanel,
                                                  (System_String_o *)StringLiteral_4205/*"CompleteMissionPanel"*/,
                                                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                               (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  if ( !this )
    goto LABEL_54;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !_4__this )
    goto LABEL_54;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_B2C2F8(
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
    v73 = v4->fields.__4__this;
    if ( v73 )
    {
      this = (CompleteMissionComponent___c__DisplayClass23_0_o *)v73->fields.titleInfo;
      if ( this )
      {
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
        v74 = v4->fields.__4__this;
        if ( v74 )
        {
          completeMissionList = v74->fields.completeMissionList;
          if ( !completeMissionList )
            return;
          completeMissionSprite = v74->fields.completeMissionSprite;
          if ( !completeMissionList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v77 = completeMissionList->fields._items->m_Items[0];
          if ( v77 )
          {
            v78 = v4->fields.__4__this;
            if ( v78 )
            {
              if ( completeMissionSprite )
              {
                CompleteMissionSprite__InitPanel(
                  completeMissionSprite,
                  v77->fields.missionTargetId,
                  v78->fields.completeMissionListBgSprite,
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
    sub_B2C434(this, frontPanel);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v81 = v80;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v81,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v81.fields.current;
    v32 = sub_B2C42C(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0LL);
    if ( !v32 )
      sub_B2C434(v33, v34);
    *(_QWORD *)(v32 + 32) = v4;
    sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 32), (System_Int32_array **)v4, v35, v36, v37, v38, v39, v40);
    v42 = (unsigned int)(current - 2);
    *(_DWORD *)(v32 + 24) = v42;
    v43 = v4->fields.__4__this;
    if ( !v43 )
      sub_B2C434(v41, v42);
    completeMissionPanel = v43->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_B2C434(0LL, v42);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, v42, 0LL);
    if ( !Child )
      sub_B2C434(0LL, v46);
    v47 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
    if ( !v47 )
      sub_B2C434(0LL, v48);
    gameObject = UnityEngine_Component__get_gameObject(v47, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v50);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v53 = v4->fields.__4__this;
    if ( !v53 )
      sub_B2C434(v51, v52);
    v54 = v53->fields.completeMissionPanel;
    if ( !v54 )
      sub_B2C434(0LL, v52);
    v55 = UnityEngine_Transform__GetChild(v54, *(_DWORD *)(v32 + 24), 0LL);
    if ( !v55 )
      sub_B2C434(0LL, v56);
    v57 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v55, 1, 0LL);
    if ( !v57 )
      sub_B2C434(0LL, v58);
    Component_WebViewObject = (System_Int32_array **)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       v57,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v32 + 16) = Component_WebViewObject;
    sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 16), Component_WebViewObject, v60, v61, v62, v63, v64, v65);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_B2C434(v66, v67);
    LODWORD(v80.fields.list) = completeMissionEnt->fields.objectId;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
    v79 = *(_DWORD *)(v32 + 24);
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
    v71 = System_String__Format_44301068((System_String_o *)StringLiteral_4204/*"CompleteMission/{0}/{1}"*/, v69, v70, 0LL);
    v72 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v72,
      (Il2CppObject *)v32,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v71, v72, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v81,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v12; // x1
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v14; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v17; // x8
  struct CompleteMissionComponent_o *v18; // x8
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x21
  CompleteMissionSprite_o *completeMissionSprite; // x20
  EventMissionEntity_o *v21; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v22; // x9
  struct CompleteMissionComponent_o *v23; // x9
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418647D & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, backPanel);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v8);
    byte_418647D = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Object_WarBoardWaitTimeSetting = System_String__Format((System_String_o *)StringLiteral_23539/*"{0}"*/, v10, 0LL);
  if ( !backPanel )
    goto LABEL_22;
  Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        backPanel,
                                                        Object_WarBoardWaitTimeSetting,
                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
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
  v14 = this->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_22;
  achiveList = v14->fields.achiveList;
  if ( !achiveList )
    goto LABEL_22;
  if ( v14->fields.loadAssetCount != achiveList->fields._size )
    return;
  _4__this = v14->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  Object_WarBoardWaitTimeSetting = (System_String_o *)_4__this->fields.titleInfo;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_22;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_WarBoardWaitTimeSetting, 1, 0LL);
  v17 = this->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_22;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_22;
  completeMissionList = v18->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v18->fields.completeMissionSprite;
  if ( !completeMissionList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v21 = completeMissionList->fields._items->m_Items[0];
  if ( !v21
    || (v22 = this->fields.CS___8__locals1) == 0LL
    || (v23 = v22->fields.__4__this) == 0LL
    || !completeMissionSprite )
  {
LABEL_22:
    sub_B2C434(Object_WarBoardWaitTimeSetting, v12);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    v21->fields.missionTargetId,
    v23->fields.completeMissionListBgSprite,
    16,
    0LL);
}


void __fastcall CompleteMissionComponent_resData___ctor(
        CompleteMissionComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}