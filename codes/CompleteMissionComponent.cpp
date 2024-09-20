void __fastcall CompleteMissionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A59FA9 & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionComponent_TypeInfo);
    byte_4A59FA9 = 1;
  }
  LODWORD(CompleteMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME) = (struct CompleteMissionComponent_StaticFields)1036831949;
}


void __fastcall CompleteMissionComponent___ctor(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A59FA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_4A59FA8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  this->fields.completeMissionList = (struct System_Collections_Generic_List_EventMissionEntity__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.completeMissionList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CompleteMissionComponent__AcceptReward(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  CompleteMissionListViewManager_o *missionListViewManager; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4A59FA4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionComponent__AcceptReward_b__33_0__);
    byte_4A59FA4 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL),
        missionListViewManager = this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionComponent__AcceptReward_b__33_0__, 0LL),
        !missionListViewManager) )
  {
    sub_1B8880C(titleInfo, method);
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
    sub_1B8880C(0LL, method);
  CompleteMissionListViewManager__checkAcceptable(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent__Close(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewManager_o *missionListViewManager; // x0

  if ( (byte_4A59FA6 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A59FA6 = 1;
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
    sub_1B8880C(missionListViewManager, v3);
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

  if ( (byte_4A59FA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_CompleteMissionComponent_OnClickBack__);
    byte_4A59FA5 = 1;
  }
  v3 = Method_CompleteMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_CompleteMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CompleteMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A59F9C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59F9C = 1;
  }
  titleInfo = this->fields.titleInfo;
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  v4 = (UnityEngine_Object_o *)titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1B8880C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_titleInfo, 0, v8, v9);
  }
}


void __fastcall CompleteMissionComponent__Open(
        CompleteMissionComponent_o *this,
        CompleteMissionComponent_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        int32_t typeIndex,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_int__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  TitleInfoControl_o *v23; // x21
  TitleInfoControl_o *v24; // x20
  System_Action_o *v25; // x21
  struct MstMissionEntity_array *Entitys_object__object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1
  struct System_Collections_Generic_List_EventMissionEntity__o *VaildCompleteMissionData; // x0
  struct System_Collections_Generic_List_EventMissionEntity__o **p_completeMissionList; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x0
  System_Collections_Generic_List_object__o *v35; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x20
  int32_t klass; // w2
  System_String_o *monitor; // x20
  System_Action_o *v39; // x20
  Il2CppObject *v40; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A59F9D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionComponent_LoadNotificationEnd__);
    sub_1B885B0(&Method_CompleteMissionComponent_OnClickBack__);
    sub_1B885B0(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_1B885B0(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_EventMissionEntity___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&MyRoomControl_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A59F9D = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  this->fields.reDispAction = redisp_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.reDispAction, (int32_t)redisp_act, v12, v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentEventIdList, (int32_t)v14, v15, v16);
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
                 (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_43;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v21, v22);
    v23 = this->fields.titleInfo;
    Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v23 )
      goto LABEL_43;
    TitleInfoControl__SetParent(v23, (UnityEngine_Transform_o *)Instance, 0LL);
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
    TitleInfoControl__changeTitleInfo_37188552((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = *p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_43;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v24 = this->fields.titleInfo;
    v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, (intptr_t)Method_CompleteMissionComponent_OnClickBack__, 0LL);
    if ( !v24 )
      goto LABEL_43;
    TitleInfoControl__SetBackBtnAct(v24, v25, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Entitys_object__object = (struct MstMissionEntity_array *)DataManager__getEntitys_object__object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2E7FB68 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_object__object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mstMissionList,
    (int32_t)Entitys_object__object,
    v27,
    v28);
  VaildCompleteMissionData = CompleteMissionComponent__getVaildCompleteMissionData(this, v29);
  this->fields.completeMissionList = VaildCompleteMissionData;
  p_completeMissionList = &this->fields.completeMissionList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.completeMissionList,
    (int32_t)VaildCompleteMissionData,
    v32,
    v33);
  completeMissionList = this->fields.completeMissionList;
  if ( completeMissionList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)completeMissionList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_EventMissionEntity___) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
    v35 = (System_Collections_Generic_List_object__o *)*p_completeMissionList;
    if ( !*p_completeMissionList )
      goto LABEL_43;
    v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 v35,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !Instance || !v36 )
      goto LABEL_43;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v36,
           &entity,
           *((_DWORD *)Instance + 7),
           (const MethodInfo_311D988 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !entity )
        goto LABEL_43;
      klass = (int32_t)entity[2].klass;
      if ( klass >= 1 )
      {
        if ( !Instance )
          goto LABEL_43;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &v40,
                             klass,
                             (const MethodInfo_311D988 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v40 )
          {
            monitor = (System_String_o *)v40[1].monitor;
            if ( monitor )
              goto LABEL_38;
            goto LABEL_35;
          }
LABEL_43:
          sub_1B8880C(Instance, v9);
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
  v39 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_CompleteMissionComponent_LoadNotificationEnd__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v39, 0LL);
}


void __fastcall CompleteMissionComponent__RequestMissionReward(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1
  struct CompleteMissionListViewManager_o *missionListViewManager; // x8
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4A59FA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_CompleteMissionComponent_missionRewardCallback__);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A59FA2 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionComponent_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (missionToRecieve = missionListViewManager->fields.missionToRecieve) == 0LL
    || !Request_object )
  {
    sub_1B8880C(Request_object, v5);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, isEnable);
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
    sub_1B8880C(missionListViewManager, method);
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

  if ( (byte_4A59FA1 & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A59FA1 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_9;
  missionListViewManager = this->fields.missionListViewManager;
  completeMissionList = this->fields.completeMissionList;
  currentEventIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                   currentEventIdList,
                                                                   (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1B8880C(currentEventIdList, method);
  MissionListViewManager__SetMode_44271816(
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
    sub_1B8880C(0LL, method);
  CompleteMissionListViewManager__unAcceptableDlg(missionListViewManager, method);
}


void __fastcall CompleteMissionComponent___AcceptReward_b__33_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B8880C(0LL, method);
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
}


void __fastcall CompleteMissionComponent___setRecieveModifyItem_b__37_0(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A59FAA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5473/*"END_DISP"*/);
    byte_4A59FAA = 1;
  }
  CompleteMissionComponent__setMissionCompleteNum(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5473/*"END_DISP"*/, 0LL);
}


void __fastcall CompleteMissionComponent__createPanel(CompleteMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_EventMissionEntity__o *completeMissionList; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_List_int__o *AchivePanelNum; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Collections_Generic_List_EventMissionEntity__o *v11; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  Il2CppObject *Entity; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x8
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21
  int v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A59F9E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__);
    sub_1B885B0(&CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
    sub_1B885B0(&StringLiteral_4659/*"CompleteMission/{0}/asset"*/);
    byte_4A59F9E = 1;
  }
  v3 = sub_1B887FC(CompleteMissionComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  completeMissionList = this->fields.completeMissionList;
  if ( !completeMissionList )
    return;
  if ( !Instance )
    goto LABEL_16;
  AchivePanelNum = EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, completeMissionList, 0LL);
  *(_QWORD *)(v3 + 24) = AchivePanelNum;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)AchivePanelNum, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v11 = this->fields.completeMissionList;
  if ( !v11
    || (v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v11,
                      0,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__)) == 0LL)
    || !v12
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v12,
                   HIDWORD(Instance[1].monitor),
                   (const MethodInfo_311D934 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__),
        *(_QWORD *)(v3 + 32) = Entity,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)Entity, v14, v15),
        v19 = *(_QWORD *)(v3 + 32),
        *(_DWORD *)(v3 + 40) = 0,
        !v19) )
  {
LABEL_16:
    sub_1B8880C(Instance, completeMissionList);
  }
  v23 = *(_DWORD *)(v19 + 20);
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v16, v17, v18);
  v21 = System_String__Format((System_String_o *)StringLiteral_4659/*"CompleteMission/{0}/asset"*/, v20, 0LL);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v3,
    Method_CompleteMissionComponent___c__DisplayClass23_0__createPanel_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v21, v22, 1, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall CompleteMissionComponent__getVaildCompleteMissionData(
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
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int size; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v17; // w21

  v2 = this;
  if ( (byte_4A59F9F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    this = (CompleteMissionComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59F9F = 1;
  }
  currentEventIdList = v2->fields.currentEventIdList;
  v2->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_34;
  v4 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v4;
  this = (CompleteMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
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
        sub_1B88814(this, method);
      v10 = &mstMissionList->obj.klass + (int)v9;
      v11 = v10[4];
      if ( !v11 )
        break;
      this = (CompleteMissionComponent_o *)MstMissionEntity__isActiveNow((MstMissionEntity_o *)v10[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (CompleteMissionComponent_o *)EventMissionMaster__getCompleteMissionList(
                                               (EventMissionMaster_o *)MasterData_object,
                                               HIDWORD(v11->_1.name),
                                               0LL);
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
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (CompleteMissionComponent_o *)v2->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v11->_1.name);
          v12 = *(_QWORD *)&this->fields.m_CachedPtr;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v12 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v12 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v12 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_21;
    }
LABEL_34:
    sub_1B8880C(this, method);
  }
LABEL_21:
  if ( v6 )
  {
    size = v6->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      v2->fields.totalMissionNum = size;
      this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v6,
                                             0,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_34;
      m_CachedPtr = this->fields.m_CachedPtr;
      if ( v6->fields._size >= 1 )
      {
        v17 = 0;
        do
        {
          this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v6,
                                                 v17,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_34;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (CompleteMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                   v6,
                                                   v17,
                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_34;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v17 < v6->fields._size );
      }
      v2->fields.currentMissionId = m_CachedPtr;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v6;
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
  struct UnityEngine_Transform_o *completeMissionPanel; // x8

  v4 = this;
  if ( (byte_4A59FA3 & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    this = (CompleteMissionComponent_o *)sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A59FA3 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( !System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    v6 = (Il2CppObject *)System_String__Concat_61718292(
                           (System_String_o *)StringLiteral_15812/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16069/*"]"*/,
                           0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (CompleteMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                           v6,
                                           (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_CompleteMissionComponent_resData___);
    if ( this )
    {
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1B88814(this, result);
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
            v7);
          this = (CompleteMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v5 = &StringLiteral_11060/*"REQUEST_OK"*/;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    sub_1B8880C(this, result);
  }
  this = (CompleteMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_16;
  v5 = &StringLiteral_11058/*"REQUEST_NG"*/;
LABEL_15:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall CompleteMissionComponent__setMissionCompleteNum(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w23
  int compMissionNum; // w22
  UserEventMissionMaster_o *v11; // x20
  int32_t v12; // w21
  UILabel_o *eventMissionTxt; // x20
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A59FA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_25054/*"{0}/{1}"*/);
    byte_4A59FA0 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
                                    (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v11 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v11, (int32_t)Instance, 0LL);
      ++v12;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v12 )
        goto LABEL_12;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_14:
    sub_1B8880C(Instance, v4);
  }
  compMissionNum = this->fields.compMissionNum;
LABEL_12:
  eventMissionTxt = this->fields.eventMissionTxt;
  v20 = compMissionNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v5, v6, v7);
  totalMissionNum = this->fields.totalMissionNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum, v15, v16, v17);
  Instance = (DataManager_o *)System_String__Format_61721404((System_String_o *)StringLiteral_25054/*"{0}/{1}"*/, v14, v18, 0LL);
  if ( !eventMissionTxt )
    goto LABEL_14;
  UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
}


void __fastcall CompleteMissionComponent__setRecieveModifyItem(
        CompleteMissionComponent_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *missionListViewManager; // x0
  MissionListViewManager_o *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_4A59FA7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__);
    byte_4A59FA7 = 1;
  }
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager
    || (CompleteMissionListViewManager__ModifyItem(missionListViewManager, method),
        v4 = (MissionListViewManager_o *)this->fields.missionListViewManager,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CompleteMissionComponent__setRecieveModifyItem_b__37_0__,
          0LL),
        !v4) )
  {
    sub_1B8880C(missionListViewManager, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CDE60;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CDE18;
}


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
  if ( (byte_4A59FAB & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A59FAB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall CompleteMissionComponent_ClickDelegate__EndInvoke(
        CompleteMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_Transform_o *transform; // x21
  struct CompleteMissionComponent_o *_4__this; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t current; // w21
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
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
  int32_t v36; // w3
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
  if ( (byte_4A59FAC & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__);
    sub_1B885B0(&CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    sub_1B885B0(&StringLiteral_4661/*"CompleteMissionPanel"*/);
    this = (CompleteMissionComponent___c__DisplayClass23_0_o *)sub_1B885B0(&StringLiteral_4660/*"CompleteMission/{0}/{1}"*/);
    byte_4A59FAC = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( !frontPanel )
    goto LABEL_50;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              frontPanel,
                              (System_String_o *)StringLiteral_4661/*"CompleteMissionPanel"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object__49297800(
                                                               Object_object__48635516,
                                                               transform,
                                                               (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  if ( !this )
    goto LABEL_50;
  _4__this = v4->fields.__4__this;
  this = (CompleteMissionComponent___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.completeMissionPanel = (struct UnityEngine_Transform_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.completeMissionPanel, (int32_t)this, v8, v9);
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
        TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
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
                                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
    sub_1B8880C(this, frontPanel);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v58 = v57;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v58,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v58.fields._current;
    v11 = sub_1B887FC(CompleteMissionComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
    if ( !v11 )
      sub_1B8880C(v12, v13);
    *(_QWORD *)(v11 + 32) = v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v4, v14, v15);
    v17 = (unsigned int)(current - 2);
    *(_DWORD *)(v11 + 24) = v17;
    v18 = v4->fields.__4__this;
    if ( !v18 )
      sub_1B8880C(v16, v17);
    completeMissionPanel = v18->fields.completeMissionPanel;
    if ( !completeMissionPanel )
      sub_1B8880C(0LL, v17);
    Child = UnityEngine_Transform__GetChild(completeMissionPanel, v17, 0LL);
    if ( !Child )
      sub_1B8880C(0LL, v21);
    v22 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
    if ( !v22 )
      sub_1B8880C(0LL, v23);
    gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !gameObject )
      sub_1B8880C(0LL, v25);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v28 = v4->fields.__4__this;
    if ( !v28 )
      sub_1B8880C(v26, v27);
    v29 = v28->fields.completeMissionPanel;
    if ( !v29 )
      sub_1B8880C(0LL, v27);
    v30 = UnityEngine_Transform__GetChild(v29, *(_DWORD *)(v11 + 24), 0LL);
    if ( !v30 )
      sub_1B8880C(0LL, v31);
    v32 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v30, 1, 0LL);
    if ( !v32 )
      sub_1B8880C(0LL, v33);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v32,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITexture___);
    *(_QWORD *)(v11 + 16) = Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)Component_object, v35, v36);
    completeMissionEnt = v4->fields.completeMissionEnt;
    if ( !completeMissionEnt )
      sub_1B8880C(v37, v38);
    LODWORD(v57.fields._list) = completeMissionEnt->fields.objectId;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v39, v40, v41);
    v56 = *(_DWORD *)(v11 + 24);
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v44, v45, v46);
    v48 = System_String__Format_61721404((System_String_o *)StringLiteral_4660/*"CompleteMission/{0}/{1}"*/, v43, v47, 0LL);
    v49 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v49,
      (Il2CppObject *)v11,
      Method_CompleteMissionComponent___c__DisplayClass23_1__createPanel_b__1__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v48, v49, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v58,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  struct UITexture_o *tex; // x21
  Il2CppObject *v8; // x0
  void *Object_object__48635516; // x0
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

  if ( (byte_4A59FAD & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A59FAD = 1;
  }
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx, method, v3, v4);
  Object_object__48635516 = System_String__Format((System_String_o *)StringLiteral_24983/*"{0}"*/, v8, 0LL);
  if ( !backPanel )
    goto LABEL_19;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              backPanel,
                              (System_String_o *)Object_object__48635516,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !tex )
    goto LABEL_19;
  Object_object__48635516 = (void *)((__int64 (__fastcall *)(struct UITexture_o *, void *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
                                      tex,
                                      Object_object__48635516,
                                      tex->klass->vtable._28_get_shader.methodPtr);
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
  Object_object__48635516 = _4__this->fields.titleInfo;
  if ( !Object_object__48635516 )
    goto LABEL_19;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Object_object__48635516, 1, 0LL);
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
  Object_object__48635516 = System_Collections_Generic_List_object___get_Item(
                              completeMissionList,
                              0,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
  if ( !Object_object__48635516
    || (v20 = this->fields.CS___8__locals1) == 0LL
    || (v21 = v20->fields.__4__this) == 0LL
    || !completeMissionSprite )
  {
LABEL_19:
    sub_1B8880C(Object_object__48635516, v10);
  }
  CompleteMissionSprite__InitPanel(
    completeMissionSprite,
    *((_DWORD *)Object_object__48635516 + 7),
    v21->fields.completeMissionListBgSprite,
    16,
    v19);
}


void __fastcall CompleteMissionComponent_resData___ctor(
        CompleteMissionComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}