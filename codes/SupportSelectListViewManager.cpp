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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x8
  unsigned __int64 v42; // x27
  char v43; // w26
  int32_t v44; // w22
  SupportServantData_o *v45; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v47; // x24
  const MethodInfo *v48; // x4
  const MethodInfo *v49; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v54; // x20
  System_Action_o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  TimeOverChecker_o *v58; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v68; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  TimeOverChecker_o *v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x0
  int32_t selectIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_42170B7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, supportServantData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&SupportSelectListViewItem_TypeInfo, v14);
    sub_B0D8A4(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__, v15);
    sub_B0D8A4(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__, v16);
    sub_B0D8A4(&TimeOverChecker_TypeInfo, v17);
    byte_42170B7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_24;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dragSwapCallbackFunc,
    (System_Int32_array **)dragSwapCallbackFunc,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !supportServantData || (v41 = *(_QWORD *)&supportServantData->max_length, (int)v41 <= 0) )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, mainDeckIdx, 0, -1, 0LL);
    return;
  }
  selectIndex = mainDeckIdx;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  do
  {
    if ( v42 >= (unsigned int)v41 )
    {
      v78 = sub_B0D9A8(v38);
      sub_B0D948(v78, 0LL);
    }
    v45 = supportServantData->m_Items[v42];
    if ( v45 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v47 = (SupportSelectListViewItem_o *)sub_B0D974(SupportSelectListViewItem_TypeInfo, v39, v40);
      SupportSelectListViewItem___ctor(v47, v44, v45, eventFriendPoints, v48);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_24;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v41) = supportServantData->max_length;
      ++v44;
      if ( !v45->fields.isFriendInfo )
        v43 = 1;
    }
    ++v42;
  }
  while ( (__int64)v42 < (int)v41 );
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0LL);
  if ( (v43 & 1) != 0 )
  {
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v49);
    timeOverChecker = this->fields.timeOverChecker;
    v54 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v55 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v51, v52),
          System_Action___ctor(
            v55,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0LL),
          v58 = (TimeOverChecker_o *)sub_B0D974(TimeOverChecker_TypeInfo, v56, v57),
          TimeOverChecker___ctor(v58, v55, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v58,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.timeOverChecker,
            (System_Int32_array **)v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v54, 0LL);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
LABEL_22:
        TimeOverChecker__Start(eventStartChecker, (int64_t)Instance, 0LL);
        return;
      }
      v68 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v65, v66);
      System_Action___ctor(
        v68,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0LL);
      v71 = (TimeOverChecker_o *)sub_B0D974(TimeOverChecker_TypeInfo, v69, v70);
      TimeOverChecker___ctor(v71, v68, (UnityEngine_MonoBehaviour_o *)this, 0LL);
      this->fields.eventStartChecker = v71;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.eventStartChecker,
        (System_Int32_array **)v71,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      eventStartChecker = this->fields.eventStartChecker;
      Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
      if ( eventStartChecker )
        goto LABEL_22;
    }
LABEL_24:
    sub_B0D97C(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x21
  __int64 v8; // x22
  struct System_Single_array *coordinate; // x20
  int max_length; // w9
  EventCampaignEntity_o *v11; // x8
  __int64 v13; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42170BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42170BD = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(Instance);
  }
  v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v8 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v8 >= max_length )
      return (int64_t)coordinate;
    if ( (unsigned int)v8 >= max_length )
    {
      v13 = sub_B0D9A8(Instance);
      sub_B0D948(v13, 0LL);
    }
    v11 = eventFriendPoints->m_Items[v8];
    if ( v11 && v7 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v7,
                                    &entity,
                                    v11->fields.eventId,
                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v8;
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
  __int64 v6; // x1
  SupportSelectListViewItem_o *result; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int32_t size; // w8
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42170BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B0D8A4(&SupportSelectListViewItem_TypeInfo, v6);
    byte_42170BA = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v10 = itemList->fields._items->m_Items[index];
      if ( v10
        && (v11 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
      {
        if ( (SupportSelectListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == SupportSelectListViewItem_TypeInfo )
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
  int v10; // s0

  if ( (byte_42170BC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_42170BC = 1;
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
      *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v8 )
        sub_B0D97C(v9);
      UIScrollView__set_currentMomentum(v8, *(UnityEngine_Vector3_o *)&v10, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Instance; // x0
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v26; // x21
  __int64 v27; // x10
  System_Int32_array **v28; // x1
  const MethodInfo *v29; // x1
  __int64 v30; // x21
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_42170B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&SupportSelectListViewItem_TypeInfo, v8);
    byte_42170B8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v26 = 0LL;
  while ( (__int64)v26 < itemList->fields._size )
  {
    if ( v26 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    Instance = (int64_t)itemList->fields._items->m_Items[v26];
    if ( Instance )
    {
      v27 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v27
        && *(SupportSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v27 - 8) == SupportSelectListViewItem_TypeInfo )
      {
        v28 = (System_Int32_array **)*p_eventFriendPoints;
        *(_QWORD *)(Instance + 120) = *p_eventFriendPoints;
        sub_B0D840((BattleServantConfConponent_o *)(Instance + 120), v28, v19, v20, v21, v22, v23, v24);
      }
    }
    itemList = this->fields.itemList;
    ++v26;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v18);
  if ( !Instance )
    goto LABEL_27;
  v30 = 0LL;
  while ( (int)v30 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v29);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v30 + 32);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v31);
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v32);
        ++v30;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_27;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v29);
  if ( !timeOverChecker )
LABEL_27:
    sub_B0D97C(Instance);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


void __fastcall SupportSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Instance; // x0
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v26; // x21
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  System_Int32_array **v29; // x1
  const MethodInfo *v30; // x1
  __int64 v31; // x21
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_42170B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&SupportServantListViewItem_TypeInfo, v8);
    byte_42170B9 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v26 = 0LL;
  while ( (__int64)v26 < itemList->fields._size )
  {
    if ( v26 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v27 = itemList->fields._items->m_Items[v26];
    if ( v27 )
    {
      v28 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (SupportServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v29 = (System_Int32_array **)*p_eventFriendPoints;
        v27[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B0D840((BattleServantConfConponent_o *)&v27[2].fields.sortValue0, v29, v19, v20, v21, v22, v23, v24);
      }
    }
    itemList = this->fields.itemList;
    ++v26;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v18);
  if ( !Instance )
    goto LABEL_27;
  v31 = 0LL;
  while ( (int)v31 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v30);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v31 + 32);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v32);
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v33);
        ++v31;
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
    sub_B0D97C(Instance);
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
  System_Collections_Generic_List_SupportSelectListViewObject__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x22
  bool v9; // w20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_42170C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, flag);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    byte_42170C0 = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_11:
    sub_B0D97C(ObjectList);
  v8 = 0LL;
  v9 = flag;
  while ( (int)v8 < ObjectList->fields._size )
  {
    ObjectList = SupportSelectListViewManager__get_ObjectList(this, v7);
    if ( ObjectList )
    {
      if ( ObjectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      ObjectList = (System_Collections_Generic_List_SupportSelectListViewObject__o *)ObjectList->fields._items->m_Items[v8];
      if ( ObjectList )
      {
        SupportSelectListViewObject__SetActiveDragSwapGuide((SupportSelectListViewObject_o *)ObjectList, v9, v10);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v11);
        ++v8;
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
  __int64 v7; // x1
  __int64 v8; // x10
  const MethodInfo *v9; // x2
  __int64 v10; // x10

  v6 = this;
  if ( (byte_42170BB & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectListViewItem_TypeInfo, obj);
    this = (SupportSelectListViewManager_o *)sub_B0D8A4(&SupportSelectListViewObject_TypeInfo, v7);
    byte_42170BB = 1;
  }
  if ( !obj
    || (v8 = *(&SupportSelectListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v8)
    || (SupportSelectListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != SupportSelectListViewObject_TypeInfo
    || (SupportSelectListViewObject__SetDragPrefab(
          (SupportSelectListViewObject_o *)obj,
          v6->fields.dropDragPrefab,
          v6,
          method),
        !item)
    || (v10 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[v10 - 1] != SupportSelectListViewItem_TypeInfo )
  {
    sub_B0D97C(this);
  }
  SupportSelectListViewItem__setuplistObj((SupportSelectListViewItem_o *)item, (SupportSelectListViewObject_o *)obj, v9);
}


void __fastcall SupportSelectListViewManager__SetSurface(
        SupportSelectListViewManager_o *this,
        SupportSelectListViewItem_o *item,
        const MethodInfo *method)
{
  SupportSelectListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct SupportSelectListViewObject_o *listObj_k__BackingField; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x20
  struct SupportSelectListViewDropObject_array *dropObjectList; // x21
  __int64 v11; // x22
  unsigned __int64 v12; // x25
  __int64 v13; // x8
  __int64 v14; // x11
  __int64 v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  __int64 v23; // x0

  v4 = this;
  if ( (byte_42170BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__, item);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    this = (SupportSelectListViewManager_o *)sub_B0D8A4(&SupportSelectUIDragDropListViewSurface_TypeInfo, v7);
    byte_42170BE = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (dropList = v4->fields.dropList) == 0LL )
LABEL_25:
      sub_B0D97C(this);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v11 = 4LL;
    while ( 1 )
    {
      v12 = v11 - 4;
      if ( v11 - 4 >= dropList->fields._size )
        break;
      if ( v12 >= (unsigned int)dropList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v13 = *((_QWORD *)&dropList->fields._items->obj.klass + v11);
      if ( v13
        && (v14 = *(&SupportSelectUIDragDropListViewSurface_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)v13 + 300LL) >= (unsigned int)v14) )
      {
        if ( *(SupportSelectUIDragDropListViewSurface_c **)(*(_QWORD *)(*(_QWORD *)v13 + 200LL) + 8 * v14 - 8) == SupportSelectUIDragDropListViewSurface_TypeInfo )
          v15 = *((_QWORD *)&dropList->fields._items->obj.klass + v11);
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !dropObjectList )
          goto LABEL_25;
        if ( v12 >= dropObjectList->max_length )
        {
          v23 = sub_B0D9A8(this);
          sub_B0D948(v23, 0LL);
        }
        if ( !v15 )
          goto LABEL_25;
        v22 = (System_Int32_array **)*((_QWORD *)&dropObjectList->obj.klass + v11);
        *(_QWORD *)(v15 + 24) = v22;
        sub_B0D840((BattleServantConfConponent_o *)(v15 + 24), v22, v16, v17, v18, v19, v20, v21);
      }
      dropList = v4->fields.dropList;
      ++v11;
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
  __int64 v5; // x1
  System_Collections_Generic_List_SupportSelectListViewObject__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x22
  bool v9; // w20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_42170BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, ableToSwapDragObj);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    byte_42170BF = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_11:
    sub_B0D97C(ObjectList);
  v8 = 0LL;
  v9 = ableToSwapDragObj;
  while ( (int)v8 < ObjectList->fields._size )
  {
    ObjectList = SupportSelectListViewManager__get_ObjectList(this, v7);
    if ( ObjectList )
    {
      if ( ObjectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      ObjectList = (System_Collections_Generic_List_SupportSelectListViewObject__o *)ObjectList->fields._items->m_Items[v8];
      if ( ObjectList )
      {
        SupportSelectListViewObject__UpdateExplanationLabel((SupportSelectListViewObject_o *)ObjectList, v9, v10);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v11);
        ++v8;
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

  if ( (byte_42170AE & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_42170AE = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_42170B0 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_42170B0 = 1;
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
    v8 = sub_B022BC(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v7; // x21
  SupportSelectListViewManager_o **v8; // x24
  __int64 v9; // x10
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x1

  v2 = this;
  if ( (byte_42170B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    this = (SupportSelectListViewManager_o *)sub_B0D8A4(&SupportSelectListViewItem_TypeInfo, v5);
    byte_42170B5 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B0D97C(this);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = (SupportSelectListViewManager_o **)itemList->fields._items->m_Items[v7];
    if ( v8 )
    {
      v9 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v8)->fields.oldScrollPosition.fields.y) >= (unsigned int)v9
        && *((SupportSelectListViewItem_c **)(*v8)->fields.objectList + v9 - 1) == SupportSelectListViewItem_TypeInfo )
      {
        v10 = (UnityEngine_Object_o *)v8[16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v8[16];
          if ( !this )
            goto LABEL_18;
          SupportSelectListViewObject__clearItemObj((SupportSelectListViewObject_o *)this, v11);
        }
        itemList = v2->fields.itemList;
        ++v7;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  SupportSelectListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42170B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_42170B3 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (SupportSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v12;
}


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ObjectList(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42170B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_42170B2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v12;
}


void __fastcall SupportSelectListViewManager__reDisp(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  SupportSelectListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v7; // x21
  SupportSelectListViewManager_o **v8; // x24
  __int64 v9; // x10
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_42170B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    this = (SupportSelectListViewManager_o *)sub_B0D8A4(&SupportSelectListViewItem_TypeInfo, v5);
    byte_42170B6 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B0D97C(this);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = (SupportSelectListViewManager_o **)itemList->fields._items->m_Items[v7];
    if ( v8 )
    {
      v9 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v8)->fields.oldScrollPosition.fields.y) >= (unsigned int)v9
        && *((SupportSelectListViewItem_c **)(*v8)->fields.objectList + v9 - 1) == SupportSelectListViewItem_TypeInfo )
      {
        v10 = (UnityEngine_Object_o *)v8[16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v8[16];
          if ( !this )
            goto LABEL_18;
          SupportSelectListViewObject__setDisp((SupportSelectListViewObject_o *)this, 1, v11);
        }
        itemList = v2->fields.itemList;
        ++v7;
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

  if ( (byte_42170AF & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_42170AF = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_42170B1 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_42170B1 = 1;
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
    v8 = sub_B022BC(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
  SupportSelectListViewManager__SetLoopFlag(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__setItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  SupportSelectListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v7; // x21
  ListViewObject_o **v8; // x24
  __int64 v9; // x10
  UnityEngine_Object_o *v10; // x20
  SupportSelectListViewObject_o *v11; // x20
  int32_t Index; // w0
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_42170B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    this = (SupportSelectListViewManager_o *)sub_B0D8A4(&SupportSelectListViewItem_TypeInfo, v5);
    byte_42170B4 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B0D97C(this);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = (ListViewObject_o **)itemList->fields._items->m_Items[v7];
    if ( v8 )
    {
      v9 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v8)[2].fields.baseParent) >= (unsigned int)v9
        && *(SupportSelectListViewItem_c **)(*(_QWORD *)&(*v8)[1].fields.basePosition.fields.z + 8 * v9 - 8) == SupportSelectListViewItem_TypeInfo )
      {
        v10 = (UnityEngine_Object_o *)v8[16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v11 = (SupportSelectListViewObject_o *)v8[16];
          if ( !v11 )
            goto LABEL_18;
          Index = ListViewObject__get_Index(v8[16], 0LL);
          SupportSelectListViewObject__setItemObj(v11, Index, v13);
        }
        itemList = v2->fields.itemList;
        ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_18;
  }
}