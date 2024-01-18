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
  __int64 v19; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
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
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x27
  char v42; // w26
  int32_t v43; // w22
  SupportServantData_o *v44; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v46; // x24
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v51; // x20
  System_Action_o *v52; // x22
  TimeOverChecker_o *v53; // x23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v61; // x21
  TimeOverChecker_o *v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x0
  int32_t selectIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_418ABB3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, supportServantData);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&SupportSelectListViewItem_TypeInfo, v14);
    sub_B2C35C(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__, v15);
    sub_B2C35C(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__, v16);
    sub_B2C35C(&TimeOverChecker_TypeInfo, v17);
    byte_418ABB3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_24;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dragSwapCallbackFunc,
    (System_Int32_array **)dragSwapCallbackFunc,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !supportServantData || (v40 = *(_QWORD *)&supportServantData->max_length, (int)v40 <= 0) )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, mainDeckIdx, 0, -1, 0LL);
    return;
  }
  selectIndex = mainDeckIdx;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  do
  {
    if ( v41 >= (unsigned int)v40 )
    {
      v69 = sub_B2C460(v39);
      sub_B2C400(v69, 0LL);
    }
    v44 = supportServantData->m_Items[v41];
    if ( v44 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v46 = (SupportSelectListViewItem_o *)sub_B2C42C(SupportSelectListViewItem_TypeInfo);
      SupportSelectListViewItem___ctor(v46, v43, v44, eventFriendPoints, v47);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_24;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v40) = supportServantData->max_length;
      ++v43;
      if ( !v44->fields.isFriendInfo )
        v42 = 1;
    }
    ++v41;
  }
  while ( (__int64)v41 < (int)v40 );
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0LL);
  if ( (v42 & 1) != 0 )
  {
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v48);
    timeOverChecker = this->fields.timeOverChecker;
    v51 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v52 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
          System_Action___ctor(
            v52,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0LL),
          v53 = (TimeOverChecker_o *)sub_B2C42C(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v53, v52, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v53,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.timeOverChecker,
            (System_Int32_array **)v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v51, 0LL);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
LABEL_22:
        TimeOverChecker__Start(eventStartChecker, (int64_t)Instance, 0LL);
        return;
      }
      v61 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v61,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0LL);
      v62 = (TimeOverChecker_o *)sub_B2C42C(TimeOverChecker_TypeInfo);
      TimeOverChecker___ctor(v62, v61, (UnityEngine_MonoBehaviour_o *)this, 0LL);
      this->fields.eventStartChecker = v62;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.eventStartChecker,
        (System_Int32_array **)v62,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      eventStartChecker = this->fields.eventStartChecker;
      Instance = (DataManager_o *)SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
      if ( eventStartChecker )
        goto LABEL_22;
    }
LABEL_24:
    sub_B2C434(Instance, v19);
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
  __int64 v6; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x21
  __int64 v9; // x22
  struct System_Single_array *coordinate; // x20
  int max_length; // w9
  EventCampaignEntity_o *v12; // x8
  __int64 v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418ABB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418ABB9 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_B2C434(Instance, v6);
  }
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v9 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v9 >= max_length )
      return (int64_t)coordinate;
    if ( (unsigned int)v9 >= max_length )
    {
      v14 = sub_B2C460(Instance);
      sub_B2C400(v14, 0LL);
    }
    v12 = eventFriendPoints->m_Items[v9];
    if ( v12 && v8 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v8,
                                    &entity,
                                    v12->fields.eventId,
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v9;
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

  if ( (byte_418ABB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&SupportSelectListViewItem_TypeInfo, v6);
    byte_418ABB6 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v10; // x1
  int v11; // s0

  if ( (byte_418ABB8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_418ABB8 = 1;
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
        sub_B2C434(v9, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Instance; // x0
  const MethodInfo *v10; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
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
  __int64 v29; // x21
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_418ABB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&SupportSelectListViewItem_TypeInfo, v8);
    byte_418ABB4 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v26 = 0LL;
  while ( (__int64)v26 < itemList->fields._size )
  {
    if ( v26 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    Instance = (int64_t)itemList->fields._items->m_Items[v26];
    if ( Instance )
    {
      v27 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v27
        && *(SupportSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v27 - 8) == SupportSelectListViewItem_TypeInfo )
      {
        v28 = (System_Int32_array **)*p_eventFriendPoints;
        *(_QWORD *)(Instance + 120) = *p_eventFriendPoints;
        sub_B2C2F8((BattleServantConfConponent_o *)(Instance + 120), v28, v19, v20, v21, v22, v23, v24);
      }
    }
    itemList = this->fields.itemList;
    ++v26;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v10);
  if ( !Instance )
    goto LABEL_27;
  v29 = 0LL;
  while ( (int)v29 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v10);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v29 + 32);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v30);
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v31);
        ++v29;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_27;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v10);
  if ( !timeOverChecker )
LABEL_27:
    sub_B2C434(Instance, v10);
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
  const MethodInfo *v10; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
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
  __int64 v30; // x21
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_418ABB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&SupportServantListViewItem_TypeInfo, v8);
    byte_418ABB5 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)FriendPointCampaigns,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  v26 = 0LL;
  while ( (__int64)v26 < itemList->fields._size )
  {
    if ( v26 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v27 = itemList->fields._items->m_Items[v26];
    if ( v27 )
    {
      v28 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (SupportServantListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v29 = (System_Int32_array **)*p_eventFriendPoints;
        v27[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B2C2F8((BattleServantConfConponent_o *)&v27[2].fields.sortValue0, v29, v19, v20, v21, v22, v23, v24);
      }
    }
    itemList = this->fields.itemList;
    ++v26;
    if ( !itemList )
      goto LABEL_27;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v10);
  if ( !Instance )
    goto LABEL_27;
  v30 = 0LL;
  while ( (int)v30 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v10);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  eventStartChecker = this->fields.eventStartChecker;
  Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  if ( !eventStartChecker )
LABEL_27:
    sub_B2C434(Instance, v10);
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

  if ( (byte_418ABBC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, flag);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    byte_418ABBC = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_11:
    sub_B2C434(ObjectList, v7);
  v8 = 0LL;
  v9 = flag;
  while ( (int)v8 < ObjectList->fields._size )
  {
    ObjectList = SupportSelectListViewManager__get_ObjectList(this, v7);
    if ( ObjectList )
    {
      if ( ObjectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_418ABB7 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectListViewItem_TypeInfo, obj);
    this = (SupportSelectListViewManager_o *)sub_B2C35C(&SupportSelectListViewObject_TypeInfo, v7);
    byte_418ABB7 = 1;
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
    sub_B2C434(this, obj);
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
  if ( (byte_418ABBA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__, item);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (SupportSelectListViewManager_o *)sub_B2C35C(&SupportSelectUIDragDropListViewSurface_TypeInfo, v7);
    byte_418ABBA = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (dropList = v4->fields.dropList) == 0LL )
LABEL_25:
      sub_B2C434(this, item);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v11 = 4LL;
    while ( 1 )
    {
      v12 = v11 - 4;
      if ( v11 - 4 >= dropList->fields._size )
        break;
      if ( v12 >= (unsigned int)dropList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          v23 = sub_B2C460(this);
          sub_B2C400(v23, 0LL);
        }
        if ( !v15 )
          goto LABEL_25;
        v22 = (System_Int32_array **)*((_QWORD *)&dropObjectList->obj.klass + v11);
        *(_QWORD *)(v15 + 24) = v22;
        sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 24), v22, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_418ABBB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, ableToSwapDragObj);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    byte_418ABBB = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_11:
    sub_B2C434(ObjectList, v7);
  v8 = 0LL;
  v9 = ableToSwapDragObj;
  while ( (int)v8 < ObjectList->fields._size )
  {
    ObjectList = SupportSelectListViewManager__get_ObjectList(this, v7);
    if ( ObjectList )
    {
      if ( ObjectList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_418ABAA & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418ABAA = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418ABAC & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_418ABAC = 1;
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
    v8 = sub_B20D74(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  v2 = this;
  if ( (byte_418ABB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    this = (SupportSelectListViewManager_o *)sub_B2C35C(&SupportSelectListViewItem_TypeInfo, v5);
    byte_418ABB1 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B2C434(this, method);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          SupportSelectListViewObject__clearItemObj((SupportSelectListViewObject_o *)this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  SupportSelectListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418ABAF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418ABAF = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (SupportSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v11;
}


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ObjectList(
        SupportSelectListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418ABAE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418ABAE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v11;
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
  if ( (byte_418ABB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    this = (SupportSelectListViewManager_o *)sub_B2C35C(&SupportSelectListViewItem_TypeInfo, v5);
    byte_418ABB2 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B2C434(this, method);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_418ABAB & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418ABAB = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418ABAD & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_418ABAD = 1;
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
    v8 = sub_B20D74(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  if ( (byte_418ABB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    this = (SupportSelectListViewManager_o *)sub_B2C35C(&SupportSelectListViewItem_TypeInfo, v5);
    byte_418ABB0 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B2C434(this, method);
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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