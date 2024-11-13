void __fastcall SupportSelectListViewManager___ctor(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewManager__CreateList(
        SupportSelectListViewManager_o *this,
        SupportServantData_array *supportServantData,
        int32_t mainDeckIdx,
        SupportSelectMenu_CallbackFunc_o *callback,
        SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  __int64 v26; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x8
  unsigned __int64 v51; // x27
  char v52; // w26
  int32_t v53; // w22
  SupportServantData_o *v54; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v56; // x24
  const MethodInfo *v57; // x4
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  const MethodInfo *v68; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v74; // x20
  System_Action_o *v75; // x22
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  TimeOverChecker_o *v79; // x23
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v90; // x21
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  TimeOverChecker_o *v94; // x22
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int32_t selectIndex; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B12B22 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, supportServantData, *(_QWORD *)&mainDeckIdx);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&SupportSelectListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__, v19, v20);
    sub_1BCA7E0(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__, v21, v22);
    sub_1BCA7E0(&TimeOverChecker_TypeInfo, v23, v24);
    byte_4B12B22 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v34, v35, v36, v37, v38, v39);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dragSwapCallbackFunc,
    (int64_t)dragSwapCallbackFunc,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !supportServantData || (v50 = *(_QWORD *)&supportServantData->max_length, (int)v50 <= 0) )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, mainDeckIdx, 0, -1, 0LL);
    return;
  }
  selectIndex = mainDeckIdx;
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  do
  {
    if ( v51 >= (unsigned int)v50 )
      sub_1BCAA44(v46, v47);
    v54 = supportServantData->m_Items[v51];
    if ( v54 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v56 = (SupportSelectListViewItem_o *)sub_1BCAA2C(SupportSelectListViewItem_TypeInfo, v47, v48, v49);
      SupportSelectListViewItem___ctor(v56, v53, v54, eventFriendPoints, v57);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_27;
      v64 = *(_QWORD *)(Instance + 16);
      v65 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v64 )
        goto LABEL_27;
      v66 = *(int *)(Instance + 24);
      if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v56,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = v64 + 8 * v66;
        *(_DWORD *)(Instance + 24) = v66 + 1;
        *(_QWORD *)(v67 + 32) = v56;
        sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 32), (int64_t)v56, v58, v59, v60, v61, v62, v63);
      }
      LODWORD(v50) = supportServantData->max_length;
      ++v53;
      if ( !v54->fields.isFriendInfo )
        v52 = 1;
    }
    ++v51;
  }
  while ( (__int64)v51 < (int)v50 );
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0LL);
  if ( (v52 & 1) != 0 )
  {
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v68);
    timeOverChecker = this->fields.timeOverChecker;
    v74 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v75 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v70, v71, v72),
          System_Action___ctor(
            v75,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0LL),
          v79 = (TimeOverChecker_o *)sub_1BCAA2C(TimeOverChecker_TypeInfo, v76, v77, v78),
          TimeOverChecker___ctor(v79, v75, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v79,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.timeOverChecker,
            (int64_t)v79,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v74, 0LL);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
LABEL_26:
        TimeOverChecker__Start(eventStartChecker, Instance, 0LL);
        return;
      }
      v90 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v86, v87, v88);
      System_Action___ctor(
        v90,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0LL);
      v94 = (TimeOverChecker_o *)sub_1BCAA2C(TimeOverChecker_TypeInfo, v91, v92, v93);
      TimeOverChecker___ctor(v94, v90, (UnityEngine_MonoBehaviour_o *)this, 0LL);
      this->fields.eventStartChecker = v94;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.eventStartChecker,
        (int64_t)v94,
        v95,
        v96,
        v97,
        v98,
        v99,
        v100);
      eventStartChecker = this->fields.eventStartChecker;
      Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
      if ( eventStartChecker )
        goto LABEL_26;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v26);
  }
}


void __fastcall SupportSelectListViewManager__DestroyList(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


bool __fastcall SupportSelectListViewManager__GetAbleToSwapDrag(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.ableToSwapDragObj;
}


int64_t __fastcall SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  __int64 v12; // x22
  void *monitor; // x20
  int max_length; // w9
  EventCampaignEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12B28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12B28 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(Instance, v9);
  }
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = 0LL;
  monitor = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v12 >= max_length )
      return (int64_t)monitor;
    if ( (unsigned int)v12 >= max_length )
      sub_1BCAA44(Instance, v9);
    v15 = eventFriendPoints->m_Items[v12];
    if ( v15 && v11 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v11,
                                   &entity,
                                   v15->fields.eventId,
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_19;
        if ( monitor )
        {
          if ( (__int64)entity[6].monitor < (__int64)monitor )
            monitor = entity[6].monitor;
        }
        else
        {
          monitor = entity[6].monitor;
        }
      }
      eventFriendPoints = this->fields.eventFriendPoints;
      ++v12;
      if ( eventFriendPoints )
        continue;
    }
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
SupportSelectListViewItem_o *__fastcall SupportSelectListViewManager__GetItem(
        SupportSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SupportSelectListViewItem_o *result; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 methodPtr_low; // x10

  if ( (byte_4B12B25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&SupportSelectListViewItem_TypeInfo, v7, v8);
    byte_4B12B25 = 1;
  }
  result = 0LL;
  if ( (index & 0x80000000) == 0 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      if ( itemList->fields._size <= index )
        return 0LL;
      result = (SupportSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this->fields.itemList,
                                                index,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !result )
        return result;
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (SupportSelectListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportSelectListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewManager__MoveCenterItem(
        SupportSelectListViewManager_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UIScrollView_o *v12; // x19

  if ( (byte_4B12B27 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index, isAnimation);
    byte_4B12B27 = 1;
  }
  if ( this->fields.callbackCount <= 0 )
  {
    ListViewManager__MoveCenterItem((ListViewManager_o *)this, index, isAnimation, 0, 0.0, 0LL);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( (v9 & 1) != 0 )
    {
      v12 = this->fields.scrollView;
      if ( !byte_4B109C1 )
      {
        v9 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v11);
        byte_4B109C1 = 1;
      }
      if ( !v12 )
        sub_1BCAA3C(v9, v10);
      UIScrollView__set_currentMomentum(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
  }
}


void __fastcall SupportSelectListViewManager__OnSwapEquip(
        SupportSelectListViewManager_o *this,
        int32_t kind,
        int32_t classPos1,
        UserServantLeaderEntity_o *leader1,
        int32_t classPos2,
        UserServantLeaderEntity_o *leader2,
        const MethodInfo *method)
{
  struct SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc; // x8

  dragSwapCallbackFunc = this->fields.dragSwapCallbackFunc;
  if ( dragSwapCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, UserServantLeaderEntity_o *, int32_t, UserServantLeaderEntity_o *, _QWORD))dragSwapCallbackFunc->fields.m_target)(
      dragSwapCallbackFunc->fields.original_method_info,
      kind,
      classPos1,
      leader1,
      classPos2,
      leader2,
      *(_QWORD *)&dragSwapCallbackFunc->fields.extra_arg);
}


void __fastcall SupportSelectListViewManager__ResetEventCampaignListViewObjects(
        SupportSelectListViewManager_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Instance; // x0
  const MethodInfo *v17; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w21
  Il2CppObject *Item; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  int64_t v35; // x1
  int32_t v36; // w20
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4B12B23 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&SupportSelectListViewItem_TypeInfo, v14, v15);
    byte_4B12B23 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v26 = 0;
  while ( v26 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v26,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        v35 = (int64_t)*p_eventFriendPoints;
        Item[7].monitor = *p_eventFriendPoints;
        sub_1BCA784((PartyOrganizationUtility_o *)&Item[7].monitor, v35, v28, v29, v30, v31, v32, v33);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v26;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v17);
  if ( !Instance )
    goto LABEL_23;
  v36 = 0;
  while ( v36 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v17);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v36,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v37);
        ++v36;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v38);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v17);
  if ( !timeOverChecker )
LABEL_23:
    sub_1BCAA3C(Instance, v17);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


void __fastcall SupportSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportSelectListViewManager_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Instance; // x0
  const MethodInfo *v17; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w21
  Il2CppObject *Item; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  int64_t v35; // x1
  int32_t v36; // w20
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_4B12B24 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&SupportServantListViewItem_TypeInfo, v14, v15);
    byte_4B12B24 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v26 = 0;
  while ( v26 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v26,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewItem_TypeInfo )
      {
        v35 = (int64_t)*p_eventFriendPoints;
        Item[16].klass = (Il2CppClass *)*p_eventFriendPoints;
        sub_1BCA784((PartyOrganizationUtility_o *)&Item[16], v35, v28, v29, v30, v31, v32, v33);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v26;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v17);
  if ( !Instance )
    goto LABEL_23;
  v36 = 0;
  while ( v36 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v17);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v36,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v37);
        ++v36;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v38);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  eventStartChecker = this->fields.eventStartChecker;
  Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  if ( !eventStartChecker )
LABEL_23:
    sub_1BCAA3C(Instance, v17);
  TimeOverChecker__Start(eventStartChecker, Instance, 0LL);
}


void __fastcall SupportSelectListViewManager__SetAbleToSwapDrag(
        SupportSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  bool v3; // w1
  const MethodInfo *v5; // x2

  v3 = flag;
  this->fields.ableToSwapDragObj = v3;
  SupportSelectListViewManager__UpdateExplanationText(this, v3, method);
  SupportSelectListViewManager__SetActiveDragSwapGuide(this, this->fields.ableToSwapDragObj, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewManager__SetActiveDragSwapGuide(
        SupportSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  bool v10; // w21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_4B12B2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, flag, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5, v6);
    byte_4B12B2B = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_9:
    sub_1BCAA3C(ObjectList, v8);
  v9 = 0;
  v10 = flag;
  while ( v9 < ObjectList->fields._size )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v8);
    if ( ObjectList )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( ObjectList )
      {
        SupportSelectListViewObject__SetActiveDragSwapGuide((SupportSelectListViewObject_o *)ObjectList, v10, v11);
        ++v9;
        ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                                    this,
                                                                    v12);
        if ( ObjectList )
          continue;
      }
    }
    goto LABEL_9;
  }
}


void __fastcall SupportSelectListViewManager__SetLoopFlag(
        SupportSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isLoop = flag;
}


void __fastcall SupportSelectListViewManager__SetObjectItem(
        SupportSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportSelectListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 methodPtr_low; // x10
  const MethodInfo *v10; // x2
  __int64 v11; // x10

  v6 = this;
  if ( (byte_4B12B26 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectListViewItem_TypeInfo, obj, item);
    this = (SupportSelectListViewManager_o *)sub_1BCA7E0(&SupportSelectListViewObject_TypeInfo, v7, v8);
    byte_4B12B26 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SupportSelectListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportSelectListViewObject_TypeInfo
    || (SupportSelectListViewObject__SetDragPrefab(
          (SupportSelectListViewObject_o *)obj,
          v6->fields.dropDragPrefab,
          v6,
          method),
        !item)
    || (v11 = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11)
    || (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[v11 - 1] != SupportSelectListViewItem_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  SupportSelectListViewItem__setuplistObj(
    (SupportSelectListViewItem_o *)item,
    (SupportSelectListViewObject_o *)obj,
    v10);
}


void __fastcall SupportSelectListViewManager__SetSurface(
        SupportSelectListViewManager_o *this,
        SupportSelectListViewItem_o *item,
        const MethodInfo *method)
{
  SupportSelectListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct SupportSelectListViewObject_o *listObj_k__BackingField; // x8
  struct SupportSelectListViewDropObject_array *dropObjectList; // x22
  unsigned __int64 v13; // x20
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x10
  Il2CppObject *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1

  v4 = this;
  if ( (byte_4B12B29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__, item, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (SupportSelectListViewManager_o *)sub_1BCA7E0(&SupportSelectUIDragDropListViewSurface_TypeInfo, v9, v10);
    byte_4B12B29 = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (this = (SupportSelectListViewManager_o *)v4->fields.dropList) == 0LL )
LABEL_22:
      sub_1BCAA3C(this, item);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v13 = 0LL;
    while ( (__int64)v13 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      v14 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this,
              v13,
              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
      if ( v14
        && (methodPtr_low = LOBYTE(SupportSelectUIDragDropListViewSurface_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v14->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (SupportSelectUIDragDropListViewSurface_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectUIDragDropListViewSurface_TypeInfo )
          v17 = v14;
        else
          v17 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !dropObjectList )
          goto LABEL_22;
        if ( v13 >= dropObjectList->max_length )
          sub_1BCAA44(this, item);
        if ( !v17 )
          goto LABEL_22;
        v24 = (int64_t)dropObjectList->m_Items[v13];
        v17[2].klass = (Il2CppClass *)v24;
        sub_1BCA784((PartyOrganizationUtility_o *)&v17[2], v24, v18, v19, v20, v21, v22, v23);
      }
      this = (SupportSelectListViewManager_o *)v4->fields.dropList;
      ++v13;
      if ( !this )
        goto LABEL_22;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewManager__UpdateExplanationText(
        SupportSelectListViewManager_o *this,
        bool ableToSwapDragObj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  bool v10; // w21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_4B12B2A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__,
      ableToSwapDragObj,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5, v6);
    byte_4B12B2A = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_9:
    sub_1BCAA3C(ObjectList, v8);
  v9 = 0;
  v10 = ableToSwapDragObj;
  while ( v9 < ObjectList->fields._size )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v8);
    if ( ObjectList )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( ObjectList )
      {
        SupportSelectListViewObject__UpdateExplanationLabel((SupportSelectListViewObject_o *)ObjectList, v10, v11);
        ++v9;
        ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                                    this,
                                                                    v12);
        if ( ObjectList )
          continue;
      }
    }
    goto LABEL_9;
  }
}


void __fastcall SupportSelectListViewManager__add_callbackFunc(
        SupportSelectListViewManager_o *this,
        SupportSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SupportSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportSelectListViewManager_o *v10; // x0
  SupportSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B12B19 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12B19 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v7->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  SupportSelectListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__add_dragSwapCallbackFunc(
        SupportSelectListViewManager_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *dragSwapCallbackFunc; // x21
  struct SupportSelectMenu_DragSwapCallbackFunc_o **p_dragSwapCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportSelectListViewManager_o *v10; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B12B1B & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value, method);
    byte_4B12B1B = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(dragSwapCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v7->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  SupportSelectListViewManager__remove_dragSwapCallbackFunc(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__callbackFuncObj(
        SupportSelectListViewManager_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      d,
      n,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportSelectListViewManager__clearItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v11; // w20
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4B12B20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&SupportSelectListViewItem_TypeInfo, v8, v9);
    byte_4B12B20 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BCAA3C(itemList, method);
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v12 = itemList;
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)itemList[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v12[3].monitor;
          if ( !itemList )
            goto LABEL_15;
          SupportSelectListViewObject__clearItemObj((SupportSelectListViewObject_o *)itemList, method);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v11;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
}


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ClippingObjectList(
        SupportSelectListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B12B1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B12B1E = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(
                                 (SupportSelectListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v21;
}


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ObjectList(
        SupportSelectListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12B1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B12B1D = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v21;
}


void __fastcall SupportSelectListViewManager__reDisp(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v11; // w20
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v15; // x2

  if ( (byte_4B12B21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&SupportSelectListViewItem_TypeInfo, v8, v9);
    byte_4B12B21 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BCAA3C(itemList, method);
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v12 = itemList;
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)itemList[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v12[3].monitor;
          if ( !itemList )
            goto LABEL_15;
          SupportSelectListViewObject__setDisp((SupportSelectListViewObject_o *)itemList, 1, v15);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v11;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
}


void __fastcall SupportSelectListViewManager__remove_callbackFunc(
        SupportSelectListViewManager_o *this,
        SupportSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SupportSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportSelectListViewManager_o *v10; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B12B1A & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12B1A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v7->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  SupportSelectListViewManager__add_dragSwapCallbackFunc(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__remove_dragSwapCallbackFunc(
        SupportSelectListViewManager_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *dragSwapCallbackFunc; // x21
  struct SupportSelectMenu_DragSwapCallbackFunc_o **p_dragSwapCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportSelectListViewManager_o *v10; // x0
  bool v11; // w1
  const MethodInfo *v12; // x2

  if ( (byte_4B12B1C & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value, method);
    byte_4B12B1C = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(dragSwapCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v7->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  SupportSelectListViewManager__SetLoopFlag(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__setItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v11; // w20
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  ListViewObject_o *v15; // x21
  int32_t Index; // w0
  const MethodInfo *v17; // x2

  if ( (byte_4B12B1F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&SupportSelectListViewItem_TypeInfo, v8, v9);
    byte_4B12B1F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1BCAA3C(itemList, method);
  v11 = 0;
  while ( v11 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v11,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v12 = itemList;
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)itemList[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          v15 = (ListViewObject_o *)v12[3].monitor;
          if ( !v15 )
            goto LABEL_15;
          Index = ListViewObject__get_Index(v15, 0LL);
          SupportSelectListViewObject__setItemObj((SupportSelectListViewObject_o *)v15, Index, v17);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v11;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
}