void SupportSelectListViewManager___ctor(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SupportSelectListViewManager__CreateList(
        SupportSelectListViewManager_o *this,
        SupportServantData_array *supportServantData,
        int32_t mainDeckIdx,
        SupportSelectMenu_CallbackFunc_o *callback,
        SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v12; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v34; // x27
  char v35; // w26
  int32_t v36; // w22
  SupportServantData_o *v37; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v39; // x24
  const MethodInfo *v40; // x4
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  const MethodInfo *v51; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v54; // x20
  System_Action_o *v55; // x22
  TimeOverChecker_o *v56; // x23
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  const MethodInfo *v63; // x0
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v65; // x21
  TimeOverChecker_o *v66; // x22
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  const MethodInfo *v73; // x0
  int32_t selectIndex; // [xsp+Ch] [xbp-64h]

  if ( (byte_4CEAC04 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SupportSelectListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_1C7BAE8(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__);
    sub_1C7BAE8(&TimeOverChecker_TypeInfo);
    byte_4CEAC04 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.dragSwapCallbackFunc,
    (int32_t)dragSwapCallbackFunc,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !supportServantData || (max_length = supportServantData->max_length, (int)max_length <= 0) )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, mainDeckIdx, 0, -1, 0);
    return;
  }
  selectIndex = mainDeckIdx;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  do
  {
    if ( v34 >= (unsigned int)max_length )
      sub_1C7BD48(v32);
    v37 = supportServantData->m_Items[v34];
    if ( v37 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v39 = (SupportSelectListViewItem_o *)sub_1C7BD34(SupportSelectListViewItem_TypeInfo);
      SupportSelectListViewItem___ctor(v39, v36, v37, eventFriendPoints, v40);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_27;
      v47 = *(_QWORD *)(Instance + 16);
      v48 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v47 )
        goto LABEL_27;
      v49 = *(int *)(Instance + 24);
      if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v39,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = v47 + 8 * v49;
        *(_DWORD *)(Instance + 24) = v49 + 1;
        *(_QWORD *)(v50 + 32) = v39;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v50 + 32), (int32_t)v39, v41, v42, v43, v44, v45, v46);
      }
      LODWORD(max_length) = supportServantData->max_length;
      ++v36;
      if ( !v37->fields.isFriendInfo )
        v35 = 1;
    }
    ++v34;
  }
  while ( (__int64)v34 < (int)max_length );
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0);
  if ( (v35 & 1) != 0 )
  {
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v51);
    timeOverChecker = this->fields.timeOverChecker;
    v54 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v55 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
          System_Action___ctor(
            v55,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0),
          v56 = (TimeOverChecker_o *)sub_1C7BD34(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v56, v55, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.timeOverChecker = v56,
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.timeOverChecker,
            (int32_t)v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62),
          (timeOverChecker = this->fields.timeOverChecker) != 0) )
    {
      TimeOverChecker__Start(timeOverChecker, v54, 0);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(v63);
LABEL_26:
        TimeOverChecker__Start(eventStartChecker, Instance, 0);
        return;
      }
      v65 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v65,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0);
      v66 = (TimeOverChecker_o *)sub_1C7BD34(TimeOverChecker_TypeInfo);
      TimeOverChecker___ctor(v66, v65, (UnityEngine_MonoBehaviour_o *)this, 0);
      this->fields.eventStartChecker = v66;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.eventStartChecker,
        (int32_t)v66,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      eventStartChecker = this->fields.eventStartChecker;
      Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(v73);
      if ( eventStartChecker )
        goto LABEL_26;
    }
LABEL_27:
    sub_1C7BD40(Instance, v12);
  }
}


void SupportSelectListViewManager__DestroyList(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


bool SupportSelectListViewManager__GetAbleToSwapDrag(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.ableToSwapDragObj;
}


int64_t SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  __int64 v7; // x22
  void *monitor; // x20
  int max_length; // w9
  EventCampaignEntity_o *v10; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEAC0A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAC0A = 1;
  }
  entity = 0;
  if ( !this->fields.eventFriendPoints )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0) )
  {
LABEL_19:
    sub_1C7BD40(Instance, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v7 = 0;
  monitor = 0;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v7 >= max_length )
      return (int64_t)monitor;
    if ( (unsigned int)v7 >= max_length )
      sub_1C7BD48(Instance);
    v10 = eventFriendPoints->m_Items[v7];
    if ( v10 && v6 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v6,
                                   &entity,
                                   v10->fields.eventId,
                                   (const MethodInfo_342E348 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v7;
      if ( eventFriendPoints )
        continue;
    }
    goto LABEL_19;
  }
}


SupportSelectListViewItem_o *SupportSelectListViewManager__GetItem(
        SupportSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SupportSelectListViewItem_o *result; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 naturalAligment; // x10

  if ( (byte_4CEAC07 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&SupportSelectListViewItem_TypeInfo);
    byte_4CEAC07 = 1;
  }
  result = 0;
  if ( (index & 0x80000000) == 0 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      if ( itemList->fields._size <= index )
        return 0;
      result = (SupportSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this->fields.itemList,
                                                index,
                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !result )
        return result;
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (SupportSelectListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SupportSelectListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void SupportSelectListViewManager__MoveCenterItem(
        SupportSelectListViewManager_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  UIScrollView_o *v10; // x19

  if ( (byte_4CEAC09 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEAC09 = 1;
  }
  if ( this->fields.callbackCount <= 0 )
  {
    ListViewManager__MoveCenterItem((ListViewManager_o *)this, index, isAnimation, 0, 0.0, 0);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( (v8 & 1) != 0 )
    {
      v10 = this->fields.scrollView;
      if ( !byte_4CE7E59 )
      {
        v8 = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      if ( !v10 )
        sub_1C7BD40(v8, v9);
      UIScrollView__set_currentMomentum(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
  }
}


void SupportSelectListViewManager__OnSwapEquip(
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
    ((void (__fastcall *)(intptr_t, int32_t, int32_t, UserServantLeaderEntity_o *, int32_t, UserServantLeaderEntity_o *, intptr_t))dragSwapCallbackFunc->fields.invoke_impl)(
      dragSwapCallbackFunc->fields.method_code,
      kind,
      classPos1,
      leader1,
      classPos2,
      leader2,
      dragSwapCallbackFunc->fields.method);
}


void SupportSelectListViewManager__ResetEventCampaignListViewObjects(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w21
  Il2CppObject *Item; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *v22; // x1
  int32_t v23; // w20
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4CEAC05 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SupportSelectListViewItem_TypeInfo);
    byte_4CEAC05 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v13 = 0;
  while ( v13 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v13,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportSelectListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
      {
        v22 = *p_eventFriendPoints;
        Item[8].klass = (Il2CppClass *)*p_eventFriendPoints;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&Item[8], (int32_t)v22, v15, v16, v17, v18, v19, v20);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v13;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
  if ( !Instance )
    goto LABEL_23;
  v23 = 0;
  while ( v23 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v23,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v24);
        ++v23;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v25);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v4);
  if ( !timeOverChecker )
LABEL_23:
    sub_1C7BD40(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, Instance, 0);
}


void SupportSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w21
  Il2CppObject *Item; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *v22; // x1
  int32_t v23; // w20
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_4CEAC06 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SupportServantListViewItem_TypeInfo);
    byte_4CEAC06 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v13 = 0;
  while ( v13 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v13,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewItem_TypeInfo )
      {
        v22 = *p_eventFriendPoints;
        Item[17].monitor = *p_eventFriendPoints;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&Item[17].monitor, (int32_t)v22, v15, v16, v17, v18, v19, v20);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v13;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
  if ( !Instance )
    goto LABEL_23;
  v23 = 0;
  while ( v23 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v23,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v24);
        ++v23;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v25);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  eventStartChecker = this->fields.eventStartChecker;
  Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt((const MethodInfo *)Instance);
  if ( !eventStartChecker )
LABEL_23:
    sub_1C7BD40(Instance, v4);
  TimeOverChecker__Start(eventStartChecker, Instance, 0);
}


void SupportSelectListViewManager__SetAbleToSwapDrag(
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
void SupportSelectListViewManager__SetActiveDragSwapGuide(
        SupportSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  bool v8; // w21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_4CEAC0D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_4CEAC0D = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_9:
    sub_1C7BD40(ObjectList, v6);
  v7 = 0;
  v8 = flag;
  while ( v7 < ObjectList->fields._size )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v6);
    if ( ObjectList )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v7,
                                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( ObjectList )
      {
        SupportSelectListViewObject__SetActiveDragSwapGuide((SupportSelectListViewObject_o *)ObjectList, v8, v9);
        ++v7;
        ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                                    this,
                                                                    v10);
        if ( ObjectList )
          continue;
      }
    }
    goto LABEL_9;
  }
}


void SupportSelectListViewManager__SetLoopFlag(
        SupportSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isLoop = flag;
}


void SupportSelectListViewManager__SetObjectItem(
        SupportSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportSelectListViewManager_o *v6; // x21
  __int64 naturalAligment; // x10
  const MethodInfo *v8; // x2
  __int64 v9; // x10

  v6 = this;
  if ( (byte_4CEAC08 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportSelectListViewItem_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_1C7BAE8(&SupportSelectListViewObject_TypeInfo);
    byte_4CEAC08 = 1;
  }
  if ( !obj
    || (naturalAligment = SupportSelectListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SupportSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SupportSelectListViewObject_TypeInfo
    || (SupportSelectListViewObject__SetDragPrefab(
          (SupportSelectListViewObject_o *)obj,
          v6->fields.dropDragPrefab,
          v6,
          method),
        !item)
    || (v9 = SupportSelectListViewItem_TypeInfo->_2.naturalAligment, item->klass->_2.naturalAligment < (unsigned int)v9)
    || (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[v9 - 1] != SupportSelectListViewItem_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  SupportSelectListViewItem__setuplistObj((SupportSelectListViewItem_o *)item, (SupportSelectListViewObject_o *)obj, v8);
}


void SupportSelectListViewManager__SetSurface(
        SupportSelectListViewManager_o *this,
        SupportSelectListViewItem_o *item,
        const MethodInfo *method)
{
  SupportSelectListViewManager_o *v4; // x19
  struct SupportSelectListViewObject_o *listObj_k__BackingField; // x8
  struct SupportSelectListViewDropObject_array *dropObjectList; // x22
  unsigned __int64 v7; // x20
  Il2CppObject *v8; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppClass *v17; // x1

  v4 = this;
  if ( (byte_4CEAC0B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_1C7BAE8(&SupportSelectUIDragDropListViewSurface_TypeInfo);
    byte_4CEAC0B = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (this = (SupportSelectListViewManager_o *)v4->fields.dropList) == 0 )
LABEL_22:
      sub_1C7BD40(this, item);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v7 = 0;
    while ( (__int64)v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      v8 = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v7,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
      if ( v8
        && (naturalAligment = SupportSelectUIDragDropListViewSurface_TypeInfo->_2.naturalAligment,
            v8->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (SupportSelectUIDragDropListViewSurface_c *)v8->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectUIDragDropListViewSurface_TypeInfo )
          v10 = v8;
        else
          v10 = 0;
      }
      else
      {
        v10 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !dropObjectList )
          goto LABEL_22;
        if ( v7 >= LODWORD(dropObjectList->max_length) )
          sub_1C7BD48(this);
        if ( !v10 )
          goto LABEL_22;
        v17 = (Il2CppClass *)dropObjectList->m_Items[v7];
        v10[2].klass = v17;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10[2], (int32_t)v17, v11, v12, v13, v14, v15, v16);
      }
      this = (SupportSelectListViewManager_o *)v4->fields.dropList;
      ++v7;
      if ( !this )
        goto LABEL_22;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectListViewManager__UpdateExplanationText(
        SupportSelectListViewManager_o *this,
        bool ableToSwapDragObj,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  bool v8; // w21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_4CEAC0C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_4CEAC0C = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_9:
    sub_1C7BD40(ObjectList, v6);
  v7 = 0;
  v8 = ableToSwapDragObj;
  while ( v7 < ObjectList->fields._size )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v6);
    if ( ObjectList )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v7,
                                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( ObjectList )
      {
        SupportSelectListViewObject__UpdateExplanationLabel((SupportSelectListViewObject_o *)ObjectList, v8, v9);
        ++v7;
        ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                                    this,
                                                                    v10);
        if ( ObjectList )
          continue;
      }
    }
    goto LABEL_9;
  }
}


void SupportSelectListViewManager__add_callbackFunc(
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

  if ( (byte_4CEABFB & 1) == 0 )
  {
    sub_1C7BAE8(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4CEABFB = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v7->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SupportSelectListViewManager__remove_callbackFunc(v10, v11, v12);
}


void SupportSelectListViewManager__add_dragSwapCallbackFunc(
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

  if ( (byte_4CEABFD & 1) == 0 )
  {
    sub_1C7BAE8(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_4CEABFD = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(dragSwapCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v7->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SupportSelectListViewManager__remove_dragSwapCallbackFunc(v10, v11, v12);
}


void SupportSelectListViewManager__callbackFuncObj(
        SupportSelectListViewManager_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      d,
      n,
      callbackFunc->fields.method);
}


void SupportSelectListViewManager__clearItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *items; // x22

  if ( (byte_4CEAC02 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SupportSelectListViewItem_TypeInfo);
    byte_4CEAC02 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C7BD40(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v5 = itemList;
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
      {
        items = (UnityEngine_Object_o *)itemList[3].fields._items;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(items, 0, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v5[3].fields._items;
          if ( !itemList )
            goto LABEL_15;
          SupportSelectListViewObject__clearItemObj((SupportSelectListViewObject_o *)itemList, method);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v4;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
}


System_Collections_Generic_List_SupportSelectListViewObject__o *SupportSelectListViewManager__get_ClippingObjectList(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CEAC00 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEAC00 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C7BD40(0, v10);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(
                                 (SupportSelectListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C7BD40(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44341312((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C7BD40(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C7BD40(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C7BD40(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C7BD40(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportSelectListViewObject__o *SupportSelectListViewManager__get_ObjectList(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CEABFF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEABFF = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v3;
}


void SupportSelectListViewManager__reDisp(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *items; // x22
  const MethodInfo *v8; // x2

  if ( (byte_4CEAC03 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SupportSelectListViewItem_TypeInfo);
    byte_4CEAC03 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C7BD40(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v5 = itemList;
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
      {
        items = (UnityEngine_Object_o *)itemList[3].fields._items;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(items, 0, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v5[3].fields._items;
          if ( !itemList )
            goto LABEL_15;
          SupportSelectListViewObject__setDisp((SupportSelectListViewObject_o *)itemList, 1, v8);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v4;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
}


void SupportSelectListViewManager__remove_callbackFunc(
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

  if ( (byte_4CEABFC & 1) == 0 )
  {
    sub_1C7BAE8(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4CEABFC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v7->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SupportSelectListViewManager__add_dragSwapCallbackFunc(v10, v11, v12);
}


void SupportSelectListViewManager__remove_dragSwapCallbackFunc(
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

  if ( (byte_4CEABFE & 1) == 0 )
  {
    sub_1C7BAE8(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_4CEABFE = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(dragSwapCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v7->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SupportSelectListViewManager__SetLoopFlag(v10, v11, v12);
}


void SupportSelectListViewManager__setItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *items; // x22
  ListViewObject_o *v8; // x21
  int32_t Index; // w0
  const MethodInfo *v10; // x2

  if ( (byte_4CEAC01 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SupportSelectListViewItem_TypeInfo);
    byte_4CEAC01 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C7BD40(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v5 = itemList;
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
      {
        items = (UnityEngine_Object_o *)itemList[3].fields._items;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(items, 0, 0);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          v8 = (ListViewObject_o *)v5[3].fields._items;
          if ( !v8 )
            goto LABEL_15;
          Index = ListViewObject__get_Index(v8, 0);
          SupportSelectListViewObject__setItemObj((SupportSelectListViewObject_o *)v8, Index, v10);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v4;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
}