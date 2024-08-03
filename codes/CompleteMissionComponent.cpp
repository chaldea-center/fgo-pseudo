void __fastcall CompleteMissionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FB279 & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionComponent_TypeInfo, v1);
    byte_49FB279 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void __fastcall CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB278 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v4);
    byte_49FB278 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.completeMissionList, (int32_t)v5, v6, v7);
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

  if ( (byte_49FB274 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CompleteMissionComponent__AcceptReward_b__33_0__, v3);
    byte_49FB274 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL),
        missionListViewManager = this->fields.missionListViewManager,
        v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0LL),
        !missionListViewManager) )
  {
    sub_1B64324(titleInfo);
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
    sub_1B64324(0LL);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  ListViewManager_o *missionListViewManager; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49FB276 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    byte_49FB276 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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
    sub_1B64324(missionListViewManager);
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

  if ( (byte_49FB275 & 1) == 0 )
  {
    sub_1B640C8(&Method_CompleteMissionComponent_OnClickBack__, method);
    byte_49FB275 = 1;
  }
  v3 = Method_CompleteMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CompleteMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CompleteMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FB26C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB26C = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_titleInfo, 0, v7, v8);
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
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_int__o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  TitleInfoControl_o *v44; // x21
  TitleInfoControl_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  System_Action_o *v48; // x21
  struct MstMissionEntity_array *Entitys_object__object; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  const MethodInfo *v52; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  System_Collections_Generic_List_object__o *v58; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x20
  int32_t klass; // w2
  System_String_o *monitor; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  System_Action_o *v64; // x20
  Il2CppObject *v65; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49FB26D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&AtlasManager_TypeInfo, v8);
    sub_1B640C8(&Method_CompleteMissionComponent_LoadNotificationEnd__, v9);
    sub_1B640C8(&Method_CompleteMissionComponent_OnClickBack__, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_BgmMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_CompleteMissionMaster___, v12);
    sub_1B640C8(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v13);
    sub_1B640C8(&DataManager_TypeInfo, v14);
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v15);
    sub_1B640C8(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__, v16);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_EventMissionEntity___, v17);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B640C8(&MyRoomControl_TypeInfo, v22);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v23);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B640C8(&SoundManager_TypeInfo, v27);
    byte_49FB26D = 1;
  }
  entity = 0LL;
  v65 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v29, v30);
  this->fields.reDispAction = redisp_act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.reDispAction, (int32_t)redisp_act, v31, v32);
  v35 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v33, v34);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentEventIdList, (int32_t)v35, v36, v37);
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
                 (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_43;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v42, v43);
    v44 = this->fields.titleInfo;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v44 )
      goto LABEL_43;
    TitleInfoControl__SetParent(v44, (UnityEngine_Transform_o *)Instance, 0LL);
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
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, 0LL, 82, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_43;
    TitleInfoControl__changeTitleInfo_36879176((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_43;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v45 = this->fields.titleInfo;
    v48 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v46, v47);
    System_Action___ctor(v48, (Il2CppObject *)this, (intptr_t)Method_CompleteMissionComponent_OnClickBack__, 0LL);
    if ( !v45 )
      goto LABEL_43;
    TitleInfoControl__SetBackBtnAct(v45, v48, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Entitys_object__object = (struct MstMissionEntity_array *)DataManager__getEntitys_object__object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2E3964C *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_object__object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mstMissionList,
    (int32_t)Entitys_object__object,
    v50,
    v51);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v52);
  this->fields.completeMissionList = VaildCompleteMissionData;
  p_completeMissionList = &this->fields.completeMissionList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.completeMissionList,
    (int32_t)VaildCompleteMissionData,
    v55,
    v56);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v58 = (System_Collections_Generic_List_object__o *)*p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_43;
    v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 v58,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !Instance || !v59 )
      goto LABEL_43;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v59,
           &entity,
           *((_DWORD *)Instance + 7),
           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_43;
      klass = (int32_t)entity[2].klass;
      if ( klass >= 1 )
      {
        if ( !Instance )
          goto LABEL_43;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &v65,
                             klass,
                             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v65 )
          {
            monitor = (System_String_o *)v65[1].monitor;
            if ( monitor )
              goto LABEL_38;
            goto LABEL_35;
          }
LABEL_43:
          sub_1B64324(Instance);
        }
      }
    }
  }
LABEL_35:
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  monitor = MyRoomControl__getChangeMyRoomBgm(0LL);
LABEL_38:
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(monitor, 0LL);
  v64 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v62, v63);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v64, 0LL);
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
  Il2CppObject *Request_object; // x0
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_49FB272 & 1) == 0 )
  {
    sub_1B640C8(&Method_CompleteMissionComponent_missionRewardCallback__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_49FB272 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0LL
    || !Request_object )
  {
    sub_1B64324(Request_object);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(missionListViewManager);
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

  if ( (byte_49FB271 & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionComponent_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    byte_49FB271 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_9;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1B64324(currentEventIdList);
  MissionListViewManager__SetMode_44011092(
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
    sub_1B64324(0LL);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent___AcceptReward_b__33_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B64324(0LL);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
}


void __fastcall CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FB27A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5447/*"END_DISP"*/, method);
    byte_49FB27A = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5447/*"END_DISP"*/, 0LL);
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
  Il2CppObject *Instance; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  System_Collections_Generic_List_int__o *AchivePanelNum; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Collections_Generic_List_EventMissionEntity__o *v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x20
  Il2CppObject *Entity; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  Il2CppObject *v28; // x0
  System_String_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB26E & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v8);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__, v11);
    sub_1B640C8(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_4636/*"CompleteMission/{0}/asset"*/, v13);
    byte_49FB26E = 1;
  }
  v14 = sub_1B64314(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_16;
  AchivePanelNum = EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, completeMissionList, 0LL);
  *(_QWORD *)(v14 + 24) = AchivePanelNum;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)AchivePanelNum, v20, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v22 = this->fields.completeMissionList;
  if ( !v22
    || (v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v22,
                      0,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0LL)
    || !v23
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v23,
                   HIDWORD(Instance[1].monitor),
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v14 + 32) = Entity,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)Entity, v25, v26),
        v27 = *(_QWORD *)(v14 + 32),
        *(_DWORD *)(v14 + 40) = 0,
        !v27) )
  {
LABEL_16:
    sub_1B64324(Instance);
  }
  v33 = *(_DWORD *)(v27 + 20);
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v29 = System_String__Format((System_String_o *)StringLiteral_4636/*"CompleteMission/{0}/asset"*/, v28, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v14,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v29, v32, 1, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  CompleteMissionComponent_o *name_high; // x1
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v20; // w24
  Il2CppClass **v21; // x8
  Il2CppClass *v22; // x22
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int size; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v28; // w21

  v2 = this;
  if ( (byte_49FB26F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    this = (CompleteMissionComponent_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FB26F = 1;
  }
  currentEventIdList = v2->fields.currentEventIdList;
  v2->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_34;
  v12 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v12;
  this = (CompleteMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v2->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_34;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1B6432C(this, name_high);
      v21 = &mstMissionList->obj.klass + (int)v20;
      v22 = v21[4];
      if ( !v22 )
        break;
      this = (CompleteMissionComponent_o *)MstMissionEntity__isActiveNow((MstMissionEntity_o *)v21[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (CompleteMissionComponent_o *)EventMissionMaster__getCompleteMissionList(
                                               (EventMissionMaster_o *)MasterData_object,
                                               HIDWORD(v22->_1.name),
                                               0LL);
        if ( !this )
          break;
        name_high = this;
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v16,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (CompleteMissionComponent_o *)v2->fields.currentEventIdList;
          if ( !this )
            break;
          name_high = (CompleteMissionComponent_o *)HIDWORD(v22->_1.name);
          v23 = *(_QWORD *)&this->fields.m_CachedPtr;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v23 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)name_high,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v23 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)name_high;
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_21;
    }
LABEL_34:
    sub_1B64324(this);
  }
LABEL_21:
  if ( v16 )
  {
    size = v16->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      v2->fields.totalMissionNum = size;
      this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v16,
                                             0,
                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_34;
      m_CachedPtr = this->fields.m_CachedPtr;
      if ( v16->fields._size >= 1 )
      {
        v28 = 0;
        do
        {
          this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v16,
                                                 v28,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_34;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                   v16,
                                                   v28,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_34;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v28 < v16->fields._size );
      }
      v2->fields.currentMissionId = m_CachedPtr;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v16;
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
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  struct UnityEngine_Transform_o *completeMissionPanel; // x8

  v4 = this;
  if ( (byte_49FB273 & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___, result);
    sub_1B640C8(&JsonManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v6);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v7);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v8);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v9);
    this = (CompleteMissionComponent_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v10);
    byte_49FB273 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( !System_String__Equals_61383712(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_61386656(
                            (System_String_o *)StringLiteral_15744/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16000/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                           v12,
                                           (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1B6432C(this, v13);
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
            v14);
          this = (CompleteMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v11 = &StringLiteral_11006/*"REQUEST_OK"*/;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    sub_1B64324(this);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_16;
  v11 = &StringLiteral_11004/*"REQUEST_NG"*/;
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
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w23
  int compMissionNum; // w22
  UserEventMissionMaster_o *v12; // x20
  int32_t v13; // w21
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB270 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, v7);
    byte_49FB270 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_14;
  size = currentEventIdList->fields._size;
  if ( size > 0 )
  {
    compMissionNum = this->fields.compMissionNum;
    v12 = (UserEventMissionMaster_o *)Instance;
    v13 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    currentEventIdList,
                                    v13,
                                    (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v12 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v12, (int32_t)Instance, 0LL);
      ++v13;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v13 )
        goto LABEL_12;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_14:
    sub_1B64324(Instance);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_12:
  eventMissionTxt = this->fields.eventMissionTxt;
  v18 = compMissionNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  totalMissionNum = this->fields.totalMissionNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
  Instance = (DataManager_o *)System_String__Format_61389768((System_String_o *)StringLiteral_24954/*"{0}/{1}"*/, v15, v16, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21

  if ( (byte_49FB277 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__, v3);
    byte_49FB277 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v5 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0LL),
        !v5) )
  {
    sub_1B64324(missionListViewManager);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AB66C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AB624;
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
  if ( (byte_49FB27B & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isDecide);
    byte_49FB27B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t current; // w21
  __int64 v30; // x20
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x0
  struct CompleteMissionComponent_o *v35; // x8
  UnityEngine_Transform_o *completeMissionPanel; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v40; // x0
  struct CompleteMissionComponent_o *v41; // x8
  UnityEngine_Transform_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Component_o *v44; // x0
  Il2CppObject *Component_object; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  struct CompleteMissionEntity_o *completeMissionEnt; // x8
  Il2CppObject *v50; // x21
  Il2CppObject *v51; // x2
  System_String_o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
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
  if ( (byte_49FB27C & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, frontPanel);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v13);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B640C8(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__, v18);
    sub_1B640C8(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_4638/*"CompleteMissionPanel"*/, v20);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_1B640C8(&StringLiteral_4637/*"CompleteMission/{0}/{1}"*/, v21);
    byte_49FB27C = 1;
  }
  memset(&v64, 0, sizeof(v64));
  if ( !frontPanel )
    goto LABEL_50;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              frontPanel,
                              (System_String_o *)StringLiteral_4638/*"CompleteMissionPanel"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_50;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)this[28].fields.completeMissionEnt;
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
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object__49003980(
                                                               Object_object__48347676,
                                                               transform,
                                                               (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  if ( !this )
    goto LABEL_50;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.completeMissionPanel, (int32_t)this, v25, v26);
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
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
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
                                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
    sub_1B64324(this);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v64 = v63;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v64,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v64.fields._current;
    v30 = sub_1B64314(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo, v27, v28);
    System_Object___ctor((Il2CppObject *)v30, 0LL);
    if ( !v30 )
      sub_1B64324(v31);
    *(_QWORD *)(v30 + 32) = v4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v4, v32, v33);
    *(_DWORD *)(v30 + 24) = current - 2;
    v35 = v4->fields.__4__this;
    if ( !v35 )
      sub_1B64324(v34);
    completeMissionPanel = v35->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_1B64324(0LL);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, current - 2, 0LL);
    if ( !Child )
      sub_1B64324(0LL);
    v38 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
    if ( !v38 )
      sub_1B64324(0LL);
    gameObject = UnityEngine_Component__get_gameObject(v38, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v41 = v4->fields.__4__this;
    if ( !v41 )
      sub_1B64324(v40);
    v42 = v41->fields.completeMissionPanel;
    if ( !v42 )
      sub_1B64324(0LL);
    v43 = UnityEngine_Transform__GetChild(v42, *(_DWORD *)(v30 + 24), 0LL);
    if ( !v43 )
      sub_1B64324(0LL);
    v44 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v43, 1, 0LL);
    if ( !v44 )
      sub_1B64324(0LL);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v44,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v30 + 16) = Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 16), (int32_t)Component_object, v46, v47);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_1B64324(v48);
    LODWORD(v63.fields._list) = completeMissionEnt->fields.objectId;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
    v62 = *(_DWORD *)(v30 + 24);
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
    v52 = System_String__Format_61389768((System_String_o *)StringLiteral_4637/*"CompleteMission/{0}/{1}"*/, v50, v51, 0LL);
    v55 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v53, v54);
    AssetLoader_LoadEndDataHandler___ctor(
      v55,
      (Il2CppObject *)v30,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v52, v55, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v64,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  void *Object_object__48347676; // x0
  struct CompleteMissionComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct System_Collections_Generic_List_int__o *achiveList; // x10
  int v14; // w9
  struct CompleteMissionComponent_o *_4__this; // x8
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v16; // x8
  struct CompleteMissionComponent_o *v17; // x8
  System_Collections_Generic_List_object__o *completeMissionList; // x0
  CompleteMissionSprite_o *completeMissionSprite; // x20
  const MethodInfo *v20; // x4
  struct CompleteMissionComponent___c__DisplayClass23_0_o *v21; // x8
  struct CompleteMissionComponent_o *v22; // x8
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB27D & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, backPanel);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v8);
    byte_49FB27D = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx);
  Object_object__48347676 = System_String__Format((System_String_o *)StringLiteral_24883/*"{0}"*/, v10, 0LL);
  if ( !backPanel )
    goto LABEL_19;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              backPanel,
                              (System_String_o *)Object_object__48347676,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !tex )
    goto LABEL_19;
  Object_object__48347676 = (void *)((__int64 (__fastcall *)(struct UITexture_o *, void *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
                                      tex,
                                      Object_object__48347676,
                                      tex->klass->vtable._28_get_shader.methodPtr);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_19;
  achiveList = CS___8__locals1->fields.achiveList;
  v14 = CS___8__locals1->fields.loadAssetCount + 1;
  CS___8__locals1->fields.loadAssetCount = v14;
  if ( !achiveList )
    goto LABEL_19;
  if ( v14 != achiveList->fields._size )
    return;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  Object_object__48347676 = _4__this->fields.titleInfo;
  if ( !Object_object__48347676 )
    goto LABEL_19;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_object__48347676, 1, 0LL);
  v16 = this->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_19;
  v17 = v16->fields.__4__this;
  if ( !v17 )
    goto LABEL_19;
  completeMissionList = (System_Collections_Generic_List_object__o *)v17->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  completeMissionSprite = v17->fields.completeMissionSprite;
  Object_object__48347676 = System_Collections_Generic_List_object___get_Item(
                              completeMissionList,
                              0,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
  if ( !Object_object__48347676
    || (v21 = this->fields.CS___8__locals1) == 0LL
    || (v22 = v21->fields.__4__this) == 0LL
    || !completeMissionSprite )
  {
LABEL_19:
    sub_1B64324(Object_object__48347676);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    *((_DWORD *)Object_object__48347676 + 7),
    v22->fields.completeMissionListBgSprite,
    16,
    v20);
}


void __fastcall CompleteMissionComponent_resData___ctor(
        CompleteMissionComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}