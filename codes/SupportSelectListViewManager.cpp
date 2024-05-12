void __fastcall SupportSelectListViewManager___ctor(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportSelectListViewManager__CreateList(
        SupportSelectListViewManager_o *this,
        SupportServantData_array *supportServantData,
        int32_t mainDeckIdx,
        SupportSelectMenu_CallbackFunc_o *callback,
        SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x27
  char v35; // w26
  int32_t v36; // w22
  SupportServantData_o *v37; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v39; // x24
  const MethodInfo *v40; // x4
  const MethodInfo *v41; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v44; // x20
  System_Action_o *v45; // x22
  TimeOverChecker_o *v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v54; // x21
  TimeOverChecker_o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x0
  int32_t selectIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_438E06A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SupportSelectListViewItem_TypeInfo);
    sub_B775C4(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_B775C4(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__);
    sub_B775C4(&TimeOverChecker_TypeInfo);
    byte_438E06A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_24;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dragSwapCallbackFunc,
    (System_Int32_array **)dragSwapCallbackFunc,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !supportServantData || (v33 = *(_QWORD *)&supportServantData->max_length, (int)v33 <= 0) )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, mainDeckIdx, 0, -1, 0LL);
    return;
  }
  selectIndex = mainDeckIdx;
  v34 = 0LL;
  v35 = 0;
  v36 = 0;
  do
  {
    if ( v34 >= (unsigned int)v33 )
    {
      v62 = sub_B776C8(v32);
      sub_B77668(v62, 0LL);
    }
    v37 = supportServantData->m_Items[v34];
    if ( v37 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v39 = (SupportSelectListViewItem_o *)sub_B77694(SupportSelectListViewItem_TypeInfo);
      SupportSelectListViewItem___ctor(v39, v36, v37, eventFriendPoints, v40);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_24;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v33) = supportServantData->max_length;
      ++v36;
      if ( !v37->fields.isFriendInfo )
        v35 = 1;
    }
    ++v34;
  }
  while ( (__int64)v34 < (int)v33 );
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0LL);
  if ( (v35 & 1) != 0 )
  {
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v41);
    timeOverChecker = this->fields.timeOverChecker;
    v44 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v45 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
          System_Action___ctor(
            v45,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0LL),
          v46 = (TimeOverChecker_o *)sub_B77694(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v46, v45, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v46,
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.timeOverChecker,
            (System_Int32_array **)v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v44, 0LL);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
LABEL_22:
        TimeOverChecker__Start(eventStartChecker, (int64_t)Instance, 0LL);
        return;
      }
      v54 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0LL);
      v55 = (TimeOverChecker_o *)sub_B77694(TimeOverChecker_TypeInfo);
      TimeOverChecker___ctor(v55, v54, (UnityEngine_MonoBehaviour_o *)this, 0LL);
      this->fields.eventStartChecker = v55;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.eventStartChecker,
        (System_Int32_array **)v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      eventStartChecker = this->fields.eventStartChecker;
      Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
      if ( eventStartChecker )
        goto LABEL_22;
    }
LABEL_24:
    sub_B7769C(Instance, v12);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x21
  __int64 v7; // x22
  struct System_Single_array *coordinate; // x20
  int max_length; // w9
  EventCampaignEntity_o *v10; // x8
  __int64 v12; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E070 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E070 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_B7769C(Instance, v4);
  }
  v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v7 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v7 >= max_length )
      return (int64_t)coordinate;
    if ( (unsigned int)v7 >= max_length )
    {
      v12 = sub_B776C8(Instance);
      sub_B77668(v12, 0LL);
    }
    v10 = eventFriendPoints->m_Items[v7];
    if ( v10 && v6 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v6,
                                    &entity,
                                    v10->fields.eventId,
                                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_19;
        if ( coordinate )
        {
          if ( (__int64)entity->fields.coordinate < (__int64)coordinate )
            coordinate = entity->fields.coordinate;
        }
        else
        {
          coordinate = entity->fields.coordinate;
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


SupportSelectListViewItem_o *__fastcall SupportSelectListViewManager__GetItem(
        SupportSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SupportSelectListViewItem_o *result; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int32_t size; // w8
  ListViewItem_o *v8; // x8
  __int64 v9; // x11

  if ( (byte_438E06D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&SupportSelectListViewItem_TypeInfo);
    byte_438E06D = 1;
  }
  result = 0LL;
  if ( (index & 0x80000000) == 0 )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      size = itemList->fields._size;
      if ( size <= index )
        return 0LL;
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v8 = itemList->fields._items->m_Items[index];
      if ( v8
        && (v9 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
      {
        if ( (SupportSelectListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == SupportSelectListViewItem_TypeInfo )
          return (SupportSelectListViewItem_o *)itemList->fields._items->m_Items[index];
        else
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
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  int v11; // s0

  if ( (byte_438E06F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E06F = 1;
  }
  if ( this->fields.callbackCount <= 0 )
  {
    ListViewManager__MoveCenterItem((ListViewManager_o *)this, index, isAnimation, 0, 0.0, 0LL);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      v8 = this->fields.scrollView;
      *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v8 )
        sub_B7769C(v9, v10);
      UIScrollView__set_currentMomentum(v8, *(UnityEngine_Vector3_o *)&v11, 0LL);
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
  SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc; // x0

  dragSwapCallbackFunc = this->fields.dragSwapCallbackFunc;
  if ( dragSwapCallbackFunc )
    SupportSelectMenu_DragSwapCallbackFunc__Invoke(
      dragSwapCallbackFunc,
      kind,
      classPos1,
      leader1,
      classPos2,
      leader2,
      0LL);
}


void __fastcall SupportSelectListViewManager__ResetEventCampaignListViewObjects(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v20; // x21
  __int64 v21; // x10
  System_Int32_array **v22; // x1
  __int64 v23; // x21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_438E06B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SupportSelectListViewItem_TypeInfo);
    byte_438E06B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v20 = 0LL;
  while ( (__int64)v20 < itemList->fields._size )
  {
    if ( v20 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    Instance = (int64_t)itemList->fields._items->m_Items[v20];
    if ( Instance )
    {
      v21 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v21
        && *(SupportSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v21 - 8) == SupportSelectListViewItem_TypeInfo )
      {
        v22 = (System_Int32_array **)*p_eventFriendPoints;
        *(_QWORD *)(Instance + 120) = *p_eventFriendPoints;
        sub_B77560((BattleServantConfConponent_o *)(Instance + 120), v22, v13, v14, v15, v16, v17, v18);
      }
    }
    itemList = this->fields.itemList;
    ++v20;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
  if ( !Instance )
    goto LABEL_27;
  v23 = 0LL;
  while ( (int)v23 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v23 + 32);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v24);
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v25);
        ++v23;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_27;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v4);
  if ( !timeOverChecker )
LABEL_27:
    sub_B7769C(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


void __fastcall SupportSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v20; // x21
  ListViewItem_o *v21; // x8
  __int64 v22; // x11
  System_Int32_array **v23; // x1
  __int64 v24; // x21
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_438E06C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SupportServantListViewItem_TypeInfo);
    byte_438E06C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v20 = 0LL;
  while ( (__int64)v20 < itemList->fields._size )
  {
    if ( v20 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v21 = itemList->fields._items->m_Items[v20];
    if ( v21 )
    {
      v22 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (SupportServantListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v23 = (System_Int32_array **)*p_eventFriendPoints;
        v21[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B77560((BattleServantConfConponent_o *)&v21[2].fields.sortValue0, v23, v13, v14, v15, v16, v17, v18);
      }
    }
    itemList = this->fields.itemList;
    ++v20;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
  if ( !Instance )
    goto LABEL_27;
  v24 = 0LL;
  while ( (int)v24 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v24 + 32);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v25);
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v26);
        ++v24;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_27;
  }
  eventStartChecker = this->fields.eventStartChecker;
  Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  if ( !eventStartChecker )
LABEL_27:
    sub_B7769C(Instance, v4);
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
  System_Collections_Generic_List_SupportSelectListViewObject__o *ObjectList; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x22
  bool v8; // w20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_438E073 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_438E073 = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_11:
    sub_B7769C(ObjectList, v6);
  v7 = 0LL;
  v8 = flag;
  while ( (int)v7 < ObjectList->fields._size )
  {
    ObjectList = SupportSelectListViewManager__get_ObjectList(this, v6);
    if ( ObjectList )
    {
      if ( ObjectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      ObjectList = (System_Collections_Generic_List_SupportSelectListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( ObjectList )
      {
        SupportSelectListViewObject__SetActiveDragSwapGuide((SupportSelectListViewObject_o *)ObjectList, v8, v9);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v10);
        ++v7;
        if ( ObjectList )
          continue;
      }
    }
    goto LABEL_11;
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
  __int64 v7; // x10
  const MethodInfo *v8; // x2
  __int64 v9; // x10

  v6 = this;
  if ( (byte_438E06E & 1) == 0 )
  {
    sub_B775C4(&SupportSelectListViewItem_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_B775C4(&SupportSelectListViewObject_TypeInfo);
    byte_438E06E = 1;
  }
  if ( !obj
    || (v7 = *(&SupportSelectListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (SupportSelectListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != SupportSelectListViewObject_TypeInfo
    || (SupportSelectListViewObject__SetDragPrefab(
          (SupportSelectListViewObject_o *)obj,
          v6->fields.dropDragPrefab,
          v6,
          method),
        !item)
    || (v9 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[v9 - 1] != SupportSelectListViewItem_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  SupportSelectListViewItem__setuplistObj((SupportSelectListViewItem_o *)item, (SupportSelectListViewObject_o *)obj, v8);
}


void __fastcall SupportSelectListViewManager__SetSurface(
        SupportSelectListViewManager_o *this,
        SupportSelectListViewItem_o *item,
        const MethodInfo *method)
{
  SupportSelectListViewManager_o *v4; // x19
  struct SupportSelectListViewObject_o *listObj_k__BackingField; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x20
  struct SupportSelectListViewDropObject_array *dropObjectList; // x21
  __int64 v8; // x22
  unsigned __int64 v9; // x25
  __int64 v10; // x8
  __int64 v11; // x11
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  __int64 v20; // x0

  v4 = this;
  if ( (byte_438E071 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_B775C4(&SupportSelectUIDragDropListViewSurface_TypeInfo);
    byte_438E071 = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (dropList = v4->fields.dropList) == 0LL )
LABEL_25:
      sub_B7769C(this, item);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v8 = 4LL;
    while ( 1 )
    {
      v9 = v8 - 4;
      if ( v8 - 4 >= dropList->fields._size )
        break;
      if ( v9 >= (unsigned int)dropList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v10 = *((_QWORD *)&dropList->fields._items->obj.klass + v8);
      if ( v10
        && (v11 = *(&SupportSelectUIDragDropListViewSurface_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)v10 + 300LL) >= (unsigned int)v11) )
      {
        if ( *(SupportSelectUIDragDropListViewSurface_c **)(*(_QWORD *)(*(_QWORD *)v10 + 200LL) + 8 * v11 - 8) == SupportSelectUIDragDropListViewSurface_TypeInfo )
          v12 = *((_QWORD *)&dropList->fields._items->obj.klass + v8);
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !dropObjectList )
          goto LABEL_25;
        if ( v9 >= dropObjectList->max_length )
        {
          v20 = sub_B776C8(this);
          sub_B77668(v20, 0LL);
        }
        if ( !v12 )
          goto LABEL_25;
        v19 = (System_Int32_array **)*((_QWORD *)&dropObjectList->obj.klass + v8);
        *(_QWORD *)(v12 + 24) = v19;
        sub_B77560((BattleServantConfConponent_o *)(v12 + 24), v19, v13, v14, v15, v16, v17, v18);
      }
      dropList = v4->fields.dropList;
      ++v8;
      if ( !dropList )
        goto LABEL_25;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewManager__UpdateExplanationText(
        SupportSelectListViewManager_o *this,
        bool ableToSwapDragObj,
        const MethodInfo *method)
{
  System_Collections_Generic_List_SupportSelectListViewObject__o *ObjectList; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x22
  bool v8; // w20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_438E072 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_438E072 = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_11:
    sub_B7769C(ObjectList, v6);
  v7 = 0LL;
  v8 = ableToSwapDragObj;
  while ( (int)v7 < ObjectList->fields._size )
  {
    ObjectList = SupportSelectListViewManager__get_ObjectList(this, v6);
    if ( ObjectList )
    {
      if ( ObjectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      ObjectList = (System_Collections_Generic_List_SupportSelectListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( ObjectList )
      {
        SupportSelectListViewObject__UpdateExplanationLabel((SupportSelectListViewObject_o *)ObjectList, v8, v9);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v10);
        ++v7;
        if ( ObjectList )
          continue;
      }
    }
    goto LABEL_11;
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

  if ( (byte_438E061 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_438E061 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438E063 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_438E063 = 1;
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
    v8 = sub_B6BFDC(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SupportSelectListViewManager__remove_dragSwapCallbackFunc(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__callbackFuncObj(
        SupportSelectListViewManager_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportSelectMenu_CallbackFunc__Invoke(callbackFunc, result, d, n, 0LL);
}


void __fastcall SupportSelectListViewManager__clearItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  SupportSelectListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v4; // x21
  SupportSelectListViewManager_o **v5; // x24
  __int64 v6; // x10
  UnityEngine_Object_o *v7; // x20

  v2 = this;
  if ( (byte_438E068 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_B775C4(&SupportSelectListViewItem_TypeInfo);
    byte_438E068 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B7769C(this, method);
  v4 = 0LL;
  while ( (__int64)v4 < itemList->fields._size )
  {
    if ( v4 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v5 = (SupportSelectListViewManager_o **)itemList->fields._items->m_Items[v4];
    if ( v5 )
    {
      v6 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v5)->fields.oldScrollPosition.fields.y) >= (unsigned int)v6
        && *((SupportSelectListViewItem_c **)(*v5)->fields.objectList + v6 - 1) == SupportSelectListViewItem_TypeInfo )
      {
        v7 = (UnityEngine_Object_o *)v5[16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v5[16];
          if ( !this )
            goto LABEL_18;
          SupportSelectListViewObject__clearItemObj((SupportSelectListViewObject_o *)this, method);
        }
        itemList = v2->fields.itemList;
        ++v4;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_18;
  }
}


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ClippingObjectList(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  SupportSelectListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438E066 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E066 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (SupportSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ObjectList(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438E065 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E065 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v3;
}


void __fastcall SupportSelectListViewManager__reDisp(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  SupportSelectListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v4; // x21
  SupportSelectListViewManager_o **v5; // x24
  __int64 v6; // x10
  UnityEngine_Object_o *v7; // x20
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_438E069 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_B775C4(&SupportSelectListViewItem_TypeInfo);
    byte_438E069 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B7769C(this, method);
  v4 = 0LL;
  while ( (__int64)v4 < itemList->fields._size )
  {
    if ( v4 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v5 = (SupportSelectListViewManager_o **)itemList->fields._items->m_Items[v4];
    if ( v5 )
    {
      v6 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v5)->fields.oldScrollPosition.fields.y) >= (unsigned int)v6
        && *((SupportSelectListViewItem_c **)(*v5)->fields.objectList + v6 - 1) == SupportSelectListViewItem_TypeInfo )
      {
        v7 = (UnityEngine_Object_o *)v5[16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v5[16];
          if ( !this )
            goto LABEL_18;
          SupportSelectListViewObject__setDisp((SupportSelectListViewObject_o *)this, 1, v8);
        }
        itemList = v2->fields.itemList;
        ++v4;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_18;
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

  if ( (byte_438E062 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_438E062 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438E064 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_438E064 = 1;
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
    v8 = sub_B6BFDC(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SupportSelectListViewManager__SetLoopFlag(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__setItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  SupportSelectListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v4; // x21
  ListViewObject_o **v5; // x24
  __int64 v6; // x10
  UnityEngine_Object_o *v7; // x20
  SupportSelectListViewObject_o *v8; // x20
  int32_t Index; // w0
  const MethodInfo *v10; // x2

  v2 = this;
  if ( (byte_438E067 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_B775C4(&SupportSelectListViewItem_TypeInfo);
    byte_438E067 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B7769C(this, method);
  v4 = 0LL;
  while ( (__int64)v4 < itemList->fields._size )
  {
    if ( v4 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v5 = (ListViewObject_o **)itemList->fields._items->m_Items[v4];
    if ( v5 )
    {
      v6 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v5)[2].fields.baseParent) >= (unsigned int)v6
        && *(SupportSelectListViewItem_c **)(*(_QWORD *)&(*v5)[1].fields.basePosition.fields.z + 8 * v6 - 8) == SupportSelectListViewItem_TypeInfo )
      {
        v7 = (UnityEngine_Object_o *)v5[16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v8 = (SupportSelectListViewObject_o *)v5[16];
          if ( !v8 )
            goto LABEL_18;
          Index = ListViewObject__get_Index(v5[16], 0LL);
          SupportSelectListViewObject__setItemObj(v8, Index, v10);
        }
        itemList = v2->fields.itemList;
        ++v4;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_18;
  }
}