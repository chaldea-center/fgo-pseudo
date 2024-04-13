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
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x0
  __int64 v54; // x8
  unsigned __int64 v55; // x27
  char v56; // w26
  int32_t v57; // w22
  SupportServantData_o *v58; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v60; // x24
  const MethodInfo *v61; // x4
  const MethodInfo *v62; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v65; // x20
  System_Action_o *v66; // x22
  TimeOverChecker_o *v67; // x23
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v75; // x21
  TimeOverChecker_o *v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x0
  int32_t selectIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_42EB3E1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)supportServantData, mainDeckIdx, callback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SupportSelectListViewItem_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__, v23, v24, v25);
    sub_B5D5C4(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__, v26, v27, v28);
    sub_B5D5C4(&TimeOverChecker_TypeInfo, v29, v30, v31);
    byte_42EB3E1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_24;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragSwapCallbackFunc,
    (System_Int32_array **)dragSwapCallbackFunc,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( !supportServantData || (v54 = *(_QWORD *)&supportServantData->max_length, (int)v54 <= 0) )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, mainDeckIdx, 0, -1, 0LL);
    return;
  }
  selectIndex = mainDeckIdx;
  v55 = 0LL;
  v56 = 0;
  v57 = 0;
  do
  {
    if ( v55 >= (unsigned int)v54 )
    {
      v83 = sub_B5D6C8(v53);
      sub_B5D668(v83, 0LL);
    }
    v58 = supportServantData->m_Items[v55];
    if ( v58 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v60 = (SupportSelectListViewItem_o *)sub_B5D694(SupportSelectListViewItem_TypeInfo);
      SupportSelectListViewItem___ctor(v60, v57, v58, eventFriendPoints, v61);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_24;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v54) = supportServantData->max_length;
      ++v57;
      if ( !v58->fields.isFriendInfo )
        v56 = 1;
    }
    ++v55;
  }
  while ( (__int64)v55 < (int)v54 );
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0LL);
  if ( (v56 & 1) != 0 )
  {
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v62);
    timeOverChecker = this->fields.timeOverChecker;
    v65 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v66 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(
            v66,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0LL),
          v67 = (TimeOverChecker_o *)sub_B5D694(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v67, v66, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v67,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.timeOverChecker,
            (System_Int32_array **)v67,
            v68,
            v69,
            v70,
            v71,
            v72,
            v73),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v65, 0LL);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
LABEL_22:
        TimeOverChecker__Start(eventStartChecker, (int64_t)Instance, 0LL);
        return;
      }
      v75 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v75,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0LL);
      v76 = (TimeOverChecker_o *)sub_B5D694(TimeOverChecker_TypeInfo);
      TimeOverChecker___ctor(v76, v75, (UnityEngine_MonoBehaviour_o *)this, 0LL);
      this->fields.eventStartChecker = v76;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.eventStartChecker,
        (System_Int32_array **)v76,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      eventStartChecker = this->fields.eventStartChecker;
      Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
      if ( eventStartChecker )
        goto LABEL_22;
    }
LABEL_24:
    sub_B5D69C(Instance, v33);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  __int64 v15; // x22
  struct System_Single_array *coordinate; // x20
  int max_length; // w9
  EventCampaignEntity_o *v18; // x8
  __int64 v20; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB3E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB3E7 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(Instance, v12);
  }
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v15 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v15 >= max_length )
      return (int64_t)coordinate;
    if ( (unsigned int)v15 >= max_length )
    {
      v20 = sub_B5D6C8(Instance);
      sub_B5D668(v20, 0LL);
    }
    v18 = eventFriendPoints->m_Items[v15];
    if ( v18 && v14 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v14,
                                    &entity,
                                    v18->fields.eventId,
                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v15;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SupportSelectListViewItem_o *result; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int32_t size; // w8
  ListViewItem_o *v15; // x8
  __int64 v16; // x11

  if ( (byte_42EB3E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    sub_B5D5C4(&SupportSelectListViewItem_TypeInfo, v9, v10, v11);
    byte_42EB3E4 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v15 = itemList->fields._items->m_Items[index];
      if ( v15
        && (v16 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16) )
      {
        if ( (SupportSelectListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == SupportSelectListViewItem_TypeInfo )
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

  if ( (byte_42EB3E6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, index, isAnimation, method);
    byte_42EB3E6 = 1;
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
        sub_B5D69C(v9, v10);
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
  int64_t Instance; // x0
  const MethodInfo *v24; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v40; // x21
  __int64 v41; // x10
  System_Int32_array **v42; // x1
  __int64 v43; // x21
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_42EB3E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SupportSelectListViewItem_TypeInfo, v20, v21, v22);
    byte_42EB3E2 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v40 = 0LL;
  while ( (__int64)v40 < itemList->fields._size )
  {
    if ( v40 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    Instance = (int64_t)itemList->fields._items->m_Items[v40];
    if ( Instance )
    {
      v41 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v41
        && *(SupportSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v41 - 8) == SupportSelectListViewItem_TypeInfo )
      {
        v42 = (System_Int32_array **)*p_eventFriendPoints;
        *(_QWORD *)(Instance + 120) = *p_eventFriendPoints;
        sub_B5D560((BattleServantConfConponent_o *)(Instance + 120), v42, v33, v34, v35, v36, v37, v38);
      }
    }
    itemList = this->fields.itemList;
    ++v40;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v24);
  if ( !Instance )
    goto LABEL_27;
  v43 = 0LL;
  while ( (int)v43 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v24);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v43 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v43 + 32);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v44);
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v45);
        ++v43;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_27;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v24);
  if ( !timeOverChecker )
LABEL_27:
    sub_B5D69C(Instance, v24);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


void __fastcall SupportSelectListViewManager__ResetEventCampaignListViewObjectsStart(
        SupportSelectListViewManager_o *this,
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
  int64_t Instance; // x0
  const MethodInfo *v24; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v40; // x21
  ListViewItem_o *v41; // x8
  __int64 v42; // x11
  System_Int32_array **v43; // x1
  __int64 v44; // x21
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_42EB3E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SupportServantListViewItem_TypeInfo, v20, v21, v22);
    byte_42EB3E3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v40 = 0LL;
  while ( (__int64)v40 < itemList->fields._size )
  {
    if ( v40 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v41 = itemList->fields._items->m_Items[v40];
    if ( v41 )
    {
      v42 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v42
        && (SupportServantListViewItem_c *)v41->klass->_2.typeHierarchy[v42 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v43 = (System_Int32_array **)*p_eventFriendPoints;
        v41[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B5D560((BattleServantConfConponent_o *)&v41[2].fields.sortValue0, v43, v33, v34, v35, v36, v37, v38);
      }
    }
    itemList = this->fields.itemList;
    ++v40;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v24);
  if ( !Instance )
    goto LABEL_27;
  v44 = 0LL;
  while ( (int)v44 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v24);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v44 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v44 + 32);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v45);
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v46);
        ++v44;
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
    sub_B5D69C(Instance, v24);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_SupportSelectListViewObject__o *ObjectList; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x22
  bool v12; // w20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1

  if ( (byte_42EB3EA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__,
      flag,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v6, v7, v8);
    byte_42EB3EA = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_11:
    sub_B5D69C(ObjectList, v10);
  v11 = 0LL;
  v12 = flag;
  while ( (int)v11 < ObjectList->fields._size )
  {
    ObjectList = SupportSelectListViewManager__get_ObjectList(this, v10);
    if ( ObjectList )
    {
      if ( ObjectList->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_SupportSelectListViewObject__o *)ObjectList->fields._items->m_Items[v11];
      if ( ObjectList )
      {
        SupportSelectListViewObject__SetActiveDragSwapGuide((SupportSelectListViewObject_o *)ObjectList, v12, v13);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v14);
        ++v11;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x10
  const MethodInfo *v11; // x2
  __int64 v12; // x10

  v6 = this;
  if ( (byte_42EB3E5 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectListViewItem_TypeInfo, (_DWORD)obj, (_DWORD)item, method);
    this = (SupportSelectListViewManager_o *)sub_B5D5C4(&SupportSelectListViewObject_TypeInfo, v7, v8, v9);
    byte_42EB3E5 = 1;
  }
  if ( !obj
    || (v10 = *(&SupportSelectListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (SupportSelectListViewObject_c *)obj->klass->_2.typeHierarchy[v10 - 1] != SupportSelectListViewObject_TypeInfo
    || (SupportSelectListViewObject__SetDragPrefab(
          (SupportSelectListViewObject_o *)obj,
          v6->fields.dropDragPrefab,
          v6,
          method),
        !item)
    || (v12 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[v12 - 1] != SupportSelectListViewItem_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  SupportSelectListViewItem__setuplistObj(
    (SupportSelectListViewItem_o *)item,
    (SupportSelectListViewObject_o *)obj,
    v11);
}


void __fastcall SupportSelectListViewManager__SetSurface(
        SupportSelectListViewManager_o *this,
        SupportSelectListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportSelectListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct SupportSelectListViewObject_o *listObj_k__BackingField; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x20
  struct SupportSelectListViewDropObject_array *dropObjectList; // x21
  __int64 v18; // x22
  unsigned __int64 v19; // x25
  __int64 v20; // x8
  __int64 v21; // x11
  __int64 v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  __int64 v30; // x0

  v5 = this;
  if ( (byte_42EB3E8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__,
      (_DWORD)item,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (SupportSelectListViewManager_o *)sub_B5D5C4(&SupportSelectUIDragDropListViewSurface_TypeInfo, v12, v13, v14);
    byte_42EB3E8 = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (dropList = v5->fields.dropList) == 0LL )
LABEL_25:
      sub_B5D69C(this, item);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v18 = 4LL;
    while ( 1 )
    {
      v19 = v18 - 4;
      if ( v18 - 4 >= dropList->fields._size )
        break;
      if ( v19 >= (unsigned int)dropList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v20 = *((_QWORD *)&dropList->fields._items->obj.klass + v18);
      if ( v20
        && (v21 = *(&SupportSelectUIDragDropListViewSurface_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) >= (unsigned int)v21) )
      {
        if ( *(SupportSelectUIDragDropListViewSurface_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v21 - 8) == SupportSelectUIDragDropListViewSurface_TypeInfo )
          v22 = *((_QWORD *)&dropList->fields._items->obj.klass + v18);
        else
          v22 = 0LL;
      }
      else
      {
        v22 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !dropObjectList )
          goto LABEL_25;
        if ( v19 >= dropObjectList->max_length )
        {
          v30 = sub_B5D6C8(this);
          sub_B5D668(v30, 0LL);
        }
        if ( !v22 )
          goto LABEL_25;
        v29 = (System_Int32_array **)*((_QWORD *)&dropObjectList->obj.klass + v18);
        *(_QWORD *)(v22 + 24) = v29;
        sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), v29, v23, v24, v25, v26, v27, v28);
      }
      dropList = v5->fields.dropList;
      ++v18;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_SupportSelectListViewObject__o *ObjectList; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x22
  bool v12; // w20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1

  if ( (byte_42EB3E9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__,
      ableToSwapDragObj,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v6, v7, v8);
    byte_42EB3E9 = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_11:
    sub_B5D69C(ObjectList, v10);
  v11 = 0LL;
  v12 = ableToSwapDragObj;
  while ( (int)v11 < ObjectList->fields._size )
  {
    ObjectList = SupportSelectListViewManager__get_ObjectList(this, v10);
    if ( ObjectList )
    {
      if ( ObjectList->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_SupportSelectListViewObject__o *)ObjectList->fields._items->m_Items[v11];
      if ( ObjectList )
      {
        SupportSelectListViewObject__UpdateExplanationLabel((SupportSelectListViewObject_o *)ObjectList, v12, v13);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v14);
        ++v11;
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SupportSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectListViewManager_o *v11; // x0
  SupportSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB3D8 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB3D8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v8->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportSelectListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportSelectListViewManager__add_dragSwapCallbackFunc(
        SupportSelectListViewManager_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *dragSwapCallbackFunc; // x21
  struct SupportSelectMenu_DragSwapCallbackFunc_o **p_dragSwapCallbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectListViewManager_o *v11; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB3DA & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB3DA = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(dragSwapCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v8->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_dragSwapCallbackFunc, v8, dragSwapCallbackFunc);
    v10 = dragSwapCallbackFunc == (System_Delegate_o *)v9;
    dragSwapCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportSelectListViewManager__remove_dragSwapCallbackFunc(v11, v12, v13);
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
  int v2; // w2
  __int64 v3; // x3
  SupportSelectListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v15; // x21
  SupportSelectListViewManager_o **v16; // x24
  __int64 v17; // x10
  UnityEngine_Object_o *v18; // x20

  v4 = this;
  if ( (byte_42EB3DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    this = (SupportSelectListViewManager_o *)sub_B5D5C4(&SupportSelectListViewItem_TypeInfo, v11, v12, v13);
    byte_42EB3DF = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B5D69C(this, method);
  v15 = 0LL;
  while ( (__int64)v15 < itemList->fields._size )
  {
    if ( v15 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v16 = (SupportSelectListViewManager_o **)itemList->fields._items->m_Items[v15];
    if ( v16 )
    {
      v17 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v16)->fields.oldScrollPosition.fields.y) >= (unsigned int)v17
        && *((SupportSelectListViewItem_c **)(*v16)->fields.objectList + v17 - 1) == SupportSelectListViewItem_TypeInfo )
      {
        v18 = (UnityEngine_Object_o *)v16[16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v16[16];
          if ( !this )
            goto LABEL_18;
          SupportSelectListViewObject__clearItemObj((SupportSelectListViewObject_o *)this, method);
        }
        itemList = v4->fields.itemList;
        ++v15;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  SupportSelectListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EB3DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB3DD = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (SupportSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v29;
}


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ObjectList(
        SupportSelectListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB3DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EB3DC = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v29;
}


void __fastcall SupportSelectListViewManager__reDisp(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SupportSelectListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v15; // x21
  SupportSelectListViewManager_o **v16; // x24
  __int64 v17; // x10
  UnityEngine_Object_o *v18; // x20
  const MethodInfo *v19; // x2

  v4 = this;
  if ( (byte_42EB3E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    this = (SupportSelectListViewManager_o *)sub_B5D5C4(&SupportSelectListViewItem_TypeInfo, v11, v12, v13);
    byte_42EB3E0 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B5D69C(this, method);
  v15 = 0LL;
  while ( (__int64)v15 < itemList->fields._size )
  {
    if ( v15 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v16 = (SupportSelectListViewManager_o **)itemList->fields._items->m_Items[v15];
    if ( v16 )
    {
      v17 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v16)->fields.oldScrollPosition.fields.y) >= (unsigned int)v17
        && *((SupportSelectListViewItem_c **)(*v16)->fields.objectList + v17 - 1) == SupportSelectListViewItem_TypeInfo )
      {
        v18 = (UnityEngine_Object_o *)v16[16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v16[16];
          if ( !this )
            goto LABEL_18;
          SupportSelectListViewObject__setDisp((SupportSelectListViewObject_o *)this, 1, v19);
        }
        itemList = v4->fields.itemList;
        ++v15;
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SupportSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectListViewManager_o *v11; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB3D9 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB3D9 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v8->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportSelectListViewManager__add_dragSwapCallbackFunc(v11, v12, v13);
}


void __fastcall SupportSelectListViewManager__remove_dragSwapCallbackFunc(
        SupportSelectListViewManager_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *dragSwapCallbackFunc; // x21
  struct SupportSelectMenu_DragSwapCallbackFunc_o **p_dragSwapCallbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectListViewManager_o *v11; // x0
  bool v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_42EB3DB & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB3DB = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(dragSwapCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v8->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_dragSwapCallbackFunc, v8, dragSwapCallbackFunc);
    v10 = dragSwapCallbackFunc == (System_Delegate_o *)v9;
    dragSwapCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportSelectListViewManager__SetLoopFlag(v11, v12, v13);
}


void __fastcall SupportSelectListViewManager__setItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SupportSelectListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v15; // x21
  ListViewObject_o **v16; // x24
  __int64 v17; // x10
  UnityEngine_Object_o *v18; // x20
  SupportSelectListViewObject_o *v19; // x20
  int32_t Index; // w0
  const MethodInfo *v21; // x2

  v4 = this;
  if ( (byte_42EB3DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    this = (SupportSelectListViewManager_o *)sub_B5D5C4(&SupportSelectListViewItem_TypeInfo, v11, v12, v13);
    byte_42EB3DE = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B5D69C(this, method);
  v15 = 0LL;
  while ( (__int64)v15 < itemList->fields._size )
  {
    if ( v15 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v16 = (ListViewObject_o **)itemList->fields._items->m_Items[v15];
    if ( v16 )
    {
      v17 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v16)[2].fields.baseParent) >= (unsigned int)v17
        && *(SupportSelectListViewItem_c **)(*(_QWORD *)&(*v16)[1].fields.basePosition.fields.z + 8 * v17 - 8) == SupportSelectListViewItem_TypeInfo )
      {
        v18 = (UnityEngine_Object_o *)v16[16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v19 = (SupportSelectListViewObject_o *)v16[16];
          if ( !v19 )
            goto LABEL_18;
          Index = ListViewObject__get_Index(v16[16], 0LL);
          SupportSelectListViewObject__setItemObj(v19, Index, v21);
        }
        itemList = v4->fields.itemList;
        ++v15;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_18;
  }
}