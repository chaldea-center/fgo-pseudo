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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v34; // x27
  char v35; // w26
  int32_t v36; // w22
  SupportServantData_o *v37; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v39; // x24
  const MethodInfo *v40; // x4
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  const MethodInfo *v51; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v54; // x20
  System_Action_o *v55; // x21
  TimeOverChecker_o *v56; // x22
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  const MethodInfo *v63; // x0
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v65; // x20
  TimeOverChecker_o *v66; // x21
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  const MethodInfo *v73; // x0
  int32_t selectIndex; // [xsp+Ch] [xbp-64h]

  if ( (byte_596CC77 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SupportSelectListViewItem_TypeInfo);
    sub_2213A60(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_2213A60(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__);
    sub_2213A60(&TimeOverChecker_TypeInfo);
    byte_596CC77 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_26;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dragSwapCallbackFunc,
    (int32_t)dragSwapCallbackFunc,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !supportServantData || (max_length = supportServantData->max_length, (int)max_length < 1) )
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
      sub_2213CE4(v32);
    v37 = supportServantData->m_Items[v34];
    if ( v37 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v39 = (SupportSelectListViewItem_o *)sub_2213CCC(SupportSelectListViewItem_TypeInfo);
      SupportSelectListViewItem___ctor(v39, v36, v37, eventFriendPoints, v40);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_26;
      v47 = *(_QWORD *)(Instance + 16);
      v48 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v47 )
        goto LABEL_26;
      v49 = *(int *)(Instance + 24);
      if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v39,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = v47 + 8 * v49;
        *(_DWORD *)(Instance + 24) = v49 + 1;
        *(_QWORD *)(v50 + 32) = v39;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 32), (int32_t)v39, v41, v42, v43, v44, v45, v46);
      }
      ++v36;
      LODWORD(max_length) = supportServantData->max_length;
      v35 |= !v37->fields.isFriendInfo;
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
      || (v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
          System_Action___ctor(
            v55,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0),
          v56 = (TimeOverChecker_o *)sub_2213CCC(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v56, v55, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.timeOverChecker = v56,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.timeOverChecker,
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
LABEL_25:
        TimeOverChecker__Start(eventStartChecker, Instance, 0);
        return;
      }
      v65 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v65,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0);
      v66 = (TimeOverChecker_o *)sub_2213CCC(TimeOverChecker_TypeInfo);
      TimeOverChecker___ctor(v66, v65, (UnityEngine_MonoBehaviour_o *)this, 0);
      this->fields.eventStartChecker = v66;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.eventStartChecker,
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
        goto LABEL_25;
    }
LABEL_26:
    sub_2213CDC(Instance, v12);
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
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct EventCampaignEntity_array *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  void *monitor; // x21
  unsigned int v9; // w23
  unsigned int max_length; // w9
  EventCampaignEntity_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596CC7D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CC7D = 1;
  }
  eventFriendPoints = this->fields.eventFriendPoints;
  entity = 0;
  if ( !eventFriendPoints )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___),
        (v6 = this->fields.eventFriendPoints) == 0) )
  {
LABEL_20:
    sub_2213CDC(Instance, v5);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  monitor = 0;
  v9 = 0;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v9 >= (int)max_length )
      return (int64_t)monitor;
    if ( v9 >= max_length )
      sub_2213CE4(Instance);
    v11 = v6->m_Items[v9];
    if ( v11 && v7 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v7,
                                   &entity,
                                   v11->fields.eventId,
                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( monitor )
        {
          if ( !entity )
            goto LABEL_20;
          if ( (__int64)entity[6].monitor < (__int64)monitor )
            monitor = entity[6].monitor;
        }
        else
        {
          if ( !entity )
            goto LABEL_20;
          monitor = entity[6].monitor;
        }
      }
      v6 = this->fields.eventFriendPoints;
      ++v9;
      if ( v6 )
        continue;
    }
    goto LABEL_20;
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

  if ( (byte_596CC7A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&SupportSelectListViewItem_TypeInfo);
    byte_596CC7A = 1;
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
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  UIScrollView_o *v12; // x19

  if ( (byte_596CC7C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC7C = 1;
  }
  if ( this->fields.callbackCount <= 0 )
  {
    ListViewManager__MoveCenterItem((ListViewManager_o *)this, index, isAnimation, 0, 0.0, 1, 0);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    v10 = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( (v10 & 1) != 0 )
    {
      v12 = this->fields.scrollView;
      if ( !byte_5969AE0 )
      {
        v10 = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v12 )
        sub_2213CDC(v10, v11);
      UIScrollView__set_currentMomentum(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w20
  Il2CppObject *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *eventFriendPoints; // x1
  int32_t v22; // w20
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_596CC78 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SupportSelectListViewItem_TypeInfo);
    byte_596CC78 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  v12 = 0;
  while ( v12 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v12,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportSelectListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
      {
        eventFriendPoints = this->fields.eventFriendPoints;
        Item[8].klass = (Il2CppClass *)eventFriendPoints;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&Item[8],
          (int32_t)eventFriendPoints,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v12;
    if ( !Instance )
      goto LABEL_20;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
  if ( !Instance )
    goto LABEL_20;
  v22 = 0;
  while ( v22 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v22,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v23);
        ++v22;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v24);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_20;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v4);
  if ( !timeOverChecker )
LABEL_20:
    sub_2213CDC(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, Instance, 0);
}


void SupportSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w20
  Il2CppObject *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *eventFriendPoints; // x1
  int32_t v22; // w20
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_596CC79 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SupportServantListViewItem_TypeInfo);
    byte_596CC79 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_20;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_20;
  v12 = 0;
  while ( v12 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v12,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewItem_TypeInfo )
      {
        eventFriendPoints = this->fields.eventFriendPoints;
        Item[17].monitor = eventFriendPoints;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&Item[17].monitor,
          (int32_t)eventFriendPoints,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v12;
    if ( !Instance )
      goto LABEL_20;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
  if ( !Instance )
    goto LABEL_20;
  v22 = 0;
  while ( v22 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v22,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v23);
        ++v22;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v24);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_20;
  }
  eventStartChecker = this->fields.eventStartChecker;
  Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt((const MethodInfo *)Instance);
  if ( !eventStartChecker )
LABEL_20:
    sub_2213CDC(Instance, v4);
  TimeOverChecker__Start(eventStartChecker, Instance, 0);
}


void SupportSelectListViewManager__SetAbleToSwapDrag(
        SupportSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  this->fields.ableToSwapDragObj = flag;
  SupportSelectListViewManager__UpdateExplanationText(this, flag, method);
  SupportSelectListViewManager__SetActiveDragSwapGuide(this, this->fields.ableToSwapDragObj, v4);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectListViewManager__SetActiveDragSwapGuide(
        SupportSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_596CC80 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_596CC80 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_9:
    sub_2213CDC(ObjectList, v6);
  v7 = 0;
  while ( v7 < ObjectList->fields._size )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v6);
    if ( ObjectList )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v7,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( ObjectList )
      {
        SupportSelectListViewObject__SetActiveDragSwapGuide((SupportSelectListViewObject_o *)ObjectList, flag, v8);
        ++v7;
        ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v9);
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
  if ( (byte_596CC7B & 1) == 0 )
  {
    sub_2213A60(&SupportSelectListViewItem_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_2213A60(&SupportSelectListViewObject_TypeInfo);
    byte_596CC7B = 1;
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
    sub_2213CDC(this, obj);
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
  struct SupportSelectListViewDropObject_array *dropObjectList; // x24
  unsigned __int64 v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 naturalAligment; // x10
  Il2CppObject *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppClass *v19; // x1

  v4 = this;
  if ( (byte_596CC7E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_2213A60(&SupportSelectUIDragDropListViewSurface_TypeInfo);
    byte_596CC7E = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (this = (SupportSelectListViewManager_o *)v4->fields.dropList) == 0 )
LABEL_22:
      sub_2213CDC(this, item);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v7 = 0;
    while ( (__int64)v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      v8 = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v7,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
      if ( v8
        && (naturalAligment = SupportSelectUIDragDropListViewSurface_TypeInfo->_2.naturalAligment,
            v8->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (SupportSelectUIDragDropListViewSurface_c *)v8->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectUIDragDropListViewSurface_TypeInfo )
          v12 = v8;
        else
          v12 = 0;
      }
      else
      {
        v12 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !dropObjectList )
          goto LABEL_22;
        if ( v7 >= LODWORD(dropObjectList->max_length) )
          sub_2213CE4(this);
        if ( !v12 )
          goto LABEL_22;
        v19 = (Il2CppClass *)dropObjectList->m_Items[v7];
        v12[2].klass = v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[2], (int32_t)v19, v13, v14, v15, v16, v17, v18);
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
  int32_t v7; // w21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_596CC7F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_596CC7F = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_9:
    sub_2213CDC(ObjectList, v6);
  v7 = 0;
  while ( v7 < ObjectList->fields._size )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v6);
    if ( ObjectList )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v7,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( ObjectList )
      {
        SupportSelectListViewObject__UpdateExplanationLabel(
          (SupportSelectListViewObject_o *)ObjectList,
          ableToSwapDragObj,
          v8);
        ++v7;
        ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v9);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectListViewManager_o *v11; // x0
  SupportSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596CC6E & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_596CC6E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v6->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  SupportSelectListViewManager__remove_callbackFunc(v11, v12, v13);
}


void SupportSelectListViewManager__add_dragSwapCallbackFunc(
        SupportSelectListViewManager_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *dragSwapCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectListViewManager_o *v11; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596CC70 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_596CC70 = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(dragSwapCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v6->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.dragSwapCallbackFunc, v6, dragSwapCallbackFunc);
    v10 = v9 == (_QWORD)dragSwapCallbackFunc;
    dragSwapCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v7, v8);
  SupportSelectListViewManager__remove_dragSwapCallbackFunc(v11, v12, v13);
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
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *items; // x22

  if ( (byte_596CC75 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SupportSelectListViewItem_TypeInfo);
    byte_596CC75 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_2213CDC(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v6 = itemList;
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
      {
        items = (UnityEngine_Object_o *)itemList[3].fields._items;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v5);
        if ( UnityEngine_Object__op_Inequality(items, 0, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v6[3].fields._items;
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596CC73 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC73 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(
                                 (SupportSelectListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportSelectListViewObject__o *SupportSelectListViewManager__get_ObjectList(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596CC72 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC72 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v3;
}


void SupportSelectListViewManager__reDisp(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *items; // x22
  const MethodInfo *v9; // x2

  if ( (byte_596CC76 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SupportSelectListViewItem_TypeInfo);
    byte_596CC76 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_2213CDC(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v6 = itemList;
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
      {
        items = (UnityEngine_Object_o *)itemList[3].fields._items;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v5);
        if ( UnityEngine_Object__op_Inequality(items, 0, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v6[3].fields._items;
          if ( !itemList )
            goto LABEL_15;
          SupportSelectListViewObject__setDisp((SupportSelectListViewObject_o *)itemList, 1, v9);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectListViewManager_o *v11; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596CC6F & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_596CC6F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v6->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  SupportSelectListViewManager__add_dragSwapCallbackFunc(v11, v12, v13);
}


void SupportSelectListViewManager__remove_dragSwapCallbackFunc(
        SupportSelectListViewManager_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *dragSwapCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectListViewManager_o *v11; // x0
  bool v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_596CC71 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_596CC71 = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(dragSwapCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v6->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.dragSwapCallbackFunc, v6, dragSwapCallbackFunc);
    v10 = v9 == (_QWORD)dragSwapCallbackFunc;
    dragSwapCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v7, v8);
  SupportSelectListViewManager__SetLoopFlag(v11, v12, v13);
}


void SupportSelectListViewManager__setItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *items; // x22
  ListViewObject_o *v9; // x21
  int32_t Index; // w0
  const MethodInfo *v11; // x2

  if ( (byte_596CC74 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SupportSelectListViewItem_TypeInfo);
    byte_596CC74 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_2213CDC(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v6 = itemList;
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
      {
        items = (UnityEngine_Object_o *)itemList[3].fields._items;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v5);
        itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(items, 0, 0);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          v9 = (ListViewObject_o *)v6[3].fields._items;
          if ( !v9 )
            goto LABEL_15;
          Index = ListViewObject__get_Index(v9, 0);
          SupportSelectListViewObject__setItemObj((SupportSelectListViewObject_o *)v9, Index, v11);
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