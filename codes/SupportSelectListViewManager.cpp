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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
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
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x8
  unsigned __int64 v45; // x27
  char v46; // w26
  int32_t v47; // w22
  SupportServantData_o *v48; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v50; // x24
  const MethodInfo *v51; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  const MethodInfo *v53; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v60; // x20
  System_Action_o *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  TimeOverChecker_o *v66; // x23
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  TimeOverChecker_o *eventStartChecker; // x20
  int64_t EventFriendCampaignStartedAt; // x0
  System_Action_o *v79; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  TimeOverChecker_o *v84; // x22
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  int32_t selectIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_40FD231 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, supportServantData);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&SupportSelectListViewItem_TypeInfo, v14);
    sub_B16FFC(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__, v15);
    sub_B16FFC(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__, v16);
    sub_B16FFC(&TimeOverChecker_TypeInfo, v17);
    byte_40FD231 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns(MasterData_WarQuestSelectionMaster, 0, 0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragSwapCallbackFunc,
    (System_Int32_array **)dragSwapCallbackFunc,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !supportServantData || (v44 = *(_QWORD *)&supportServantData->max_length, (int)v44 <= 0) )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, mainDeckIdx, 0, -1, 0LL);
    return;
  }
  selectIndex = mainDeckIdx;
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  do
  {
    if ( v45 >= (unsigned int)v44 )
    {
      sub_B17100(v39, v40, v41);
      sub_B170A0();
    }
    v48 = supportServantData->m_Items[v45];
    if ( v48 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v50 = (SupportSelectListViewItem_o *)sub_B170CC(SupportSelectListViewItem_TypeInfo, v40, v41, v42, v43);
      SupportSelectListViewItem___ctor(v50, v47, v48, eventFriendPoints, v51);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_24;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v44) = supportServantData->max_length;
      ++v47;
      if ( !v48->fields.isFriendInfo )
        v46 = 1;
    }
    ++v45;
  }
  while ( (__int64)v45 < (int)v44 );
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0LL);
  if ( (v46 & 1) != 0 )
  {
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v53);
    timeOverChecker = this->fields.timeOverChecker;
    v60 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58),
          System_Action___ctor(
            v61,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0LL),
          v66 = (TimeOverChecker_o *)sub_B170CC(TimeOverChecker_TypeInfo, v62, v63, v64, v65),
          TimeOverChecker___ctor(v66, v61, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v66,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.timeOverChecker,
            (System_Int32_array **)v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            v72),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v60, 0LL);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        EventFriendCampaignStartedAt = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
LABEL_22:
        TimeOverChecker__Start(eventStartChecker, EventFriendCampaignStartedAt, 0LL);
        return;
      }
      v79 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
      System_Action___ctor(
        v79,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0LL);
      v84 = (TimeOverChecker_o *)sub_B170CC(TimeOverChecker_TypeInfo, v80, v81, v82, v83);
      TimeOverChecker___ctor(v84, v79, (UnityEngine_MonoBehaviour_o *)this, 0LL);
      this->fields.eventStartChecker = v84;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.eventStartChecker,
        (System_Int32_array **)v84,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
      eventStartChecker = this->fields.eventStartChecker;
      EventFriendCampaignStartedAt = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
      if ( eventStartChecker )
        goto LABEL_22;
    }
LABEL_24:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  __int64 v11; // x22
  struct System_Single_array *coordinate; // x20
  int max_length; // w9
  EventCampaignEntity_o *v14; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD237 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD237 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v11 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v11 >= max_length )
      return (int64_t)coordinate;
    if ( (unsigned int)v11 >= max_length )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v7, v8);
      sub_B170A0();
    }
    v14 = eventFriendPoints->m_Items[v11];
    if ( v14 && v10 )
    {
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                          v10,
                                                                          &entity,
                                                                          v14->fields.eventId,
                                                                          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
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
      ++v11;
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

  if ( (byte_40FD234 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&SupportSelectListViewItem_TypeInfo, v6);
    byte_40FD234 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  int v9; // s0

  if ( (byte_40FD236 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40FD236 = 1;
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
      *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v8 )
        sub_B170D4();
      UIScrollView__set_currentMomentum(v8, *(UnityEngine_Vector3_o *)&v9, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v27; // x21
  ListViewItem_o *v28; // x0
  __int64 v29; // x10
  System_Int32_array **v30; // x1
  System_Collections_Generic_List_SupportSelectListViewObject__o *ObjectList; // x0
  const MethodInfo *v32; // x1
  __int64 v33; // x21
  System_Collections_Generic_List_SupportSelectListViewObject__o *v34; // x0
  const MethodInfo *v35; // x2
  SupportSelectListViewObject_o *v36; // x0
  const MethodInfo *v37; // x1
  TimeOverChecker_o *timeOverChecker; // x20
  int64_t EventFriendCampaignFinishedAt; // x0

  if ( (byte_40FD232 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&SupportSelectListViewItem_TypeInfo, v8);
    byte_40FD232 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns(MasterData_WarQuestSelectionMaster, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B16F98(
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
  v27 = 0LL;
  while ( (__int64)v27 < itemList->fields._size )
  {
    if ( v27 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v28 = itemList->fields._items->m_Items[v27];
    if ( v28 )
    {
      v29 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) >= (unsigned int)v29
        && (SupportSelectListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] == SupportSelectListViewItem_TypeInfo )
      {
        v30 = (System_Int32_array **)*p_eventFriendPoints;
        v28[1].monitor = *p_eventFriendPoints;
        sub_B16F98((BattleServantConfConponent_o *)&v28[1].monitor, v30, v20, v21, v22, v23, v24, v25);
      }
    }
    itemList = this->fields.itemList;
    ++v27;
    if ( !itemList )
      goto LABEL_27;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, v19);
  if ( !ObjectList )
    goto LABEL_27;
  v33 = 0LL;
  while ( (int)v33 < ObjectList->fields._size )
  {
    v34 = SupportSelectListViewManager__get_ObjectList(this, v32);
    if ( v34 )
    {
      if ( v34->fields._size <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v36 = v34->fields._items->m_Items[v33];
      if ( v36 )
      {
        SupportSelectListViewObject__ResetEventCampaign(v36, this->fields.eventFriendPoints, v35);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v37);
        ++v33;
        if ( ObjectList )
          continue;
      }
    }
    goto LABEL_27;
  }
  timeOverChecker = this->fields.timeOverChecker;
  EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v32);
  if ( !timeOverChecker )
LABEL_27:
    sub_B170D4();
  TimeOverChecker__Start(timeOverChecker, EventFriendCampaignFinishedAt, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v27; // x21
  ListViewItem_o *v28; // x8
  __int64 v29; // x11
  System_Int32_array **v30; // x1
  System_Collections_Generic_List_SupportSelectListViewObject__o *ObjectList; // x0
  const MethodInfo *v32; // x1
  __int64 v33; // x21
  System_Collections_Generic_List_SupportSelectListViewObject__o *v34; // x0
  const MethodInfo *v35; // x2
  SupportSelectListViewObject_o *v36; // x0
  const MethodInfo *v37; // x1
  TimeOverChecker_o *eventStartChecker; // x19
  int64_t EventFriendCampaignStartedAt; // x0

  if ( (byte_40FD233 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&SupportServantListViewItem_TypeInfo, v8);
    byte_40FD233 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns(MasterData_WarQuestSelectionMaster, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_B16F98(
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
  v27 = 0LL;
  while ( (__int64)v27 < itemList->fields._size )
  {
    if ( v27 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v28 = itemList->fields._items->m_Items[v27];
    if ( v28 )
    {
      v29 = *(&SupportServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) >= (unsigned int)v29
        && (SupportServantListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] == SupportServantListViewItem_TypeInfo )
      {
        v30 = (System_Int32_array **)*p_eventFriendPoints;
        v28[2].fields.sortValue0 = (int64_t)*p_eventFriendPoints;
        sub_B16F98((BattleServantConfConponent_o *)&v28[2].fields.sortValue0, v30, v20, v21, v22, v23, v24, v25);
      }
    }
    itemList = this->fields.itemList;
    ++v27;
    if ( !itemList )
      goto LABEL_27;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, v19);
  if ( !ObjectList )
    goto LABEL_27;
  v33 = 0LL;
  while ( (int)v33 < ObjectList->fields._size )
  {
    v34 = SupportSelectListViewManager__get_ObjectList(this, v32);
    if ( v34 )
    {
      if ( v34->fields._size <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v36 = v34->fields._items->m_Items[v33];
      if ( v36 )
      {
        SupportSelectListViewObject__ResetEventCampaign(v36, this->fields.eventFriendPoints, v35);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v37);
        ++v33;
        if ( ObjectList )
          continue;
      }
    }
    goto LABEL_27;
  }
  eventStartChecker = this->fields.eventStartChecker;
  EventFriendCampaignStartedAt = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(0LL);
  if ( !eventStartChecker )
LABEL_27:
    sub_B170D4();
  TimeOverChecker__Start(eventStartChecker, EventFriendCampaignStartedAt, 0LL);
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
  System_Collections_Generic_List_SupportSelectListViewObject__o *v10; // x0
  const MethodInfo *v11; // x2
  SupportSelectListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_40FD23A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, flag);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    byte_40FD23A = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_11:
    sub_B170D4();
  v8 = 0LL;
  v9 = flag;
  while ( (int)v8 < ObjectList->fields._size )
  {
    v10 = SupportSelectListViewManager__get_ObjectList(this, v7);
    if ( v10 )
    {
      if ( v10->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v12 = v10->fields._items->m_Items[v8];
      if ( v12 )
      {
        SupportSelectListViewObject__SetActiveDragSwapGuide(v12, v9, v11);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v13);
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
  __int64 v7; // x1
  __int64 v8; // x10
  const MethodInfo *v9; // x2
  __int64 v10; // x10

  if ( (byte_40FD235 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectListViewItem_TypeInfo, obj);
    sub_B16FFC(&SupportSelectListViewObject_TypeInfo, v7);
    byte_40FD235 = 1;
  }
  if ( !obj
    || (v8 = *(&SupportSelectListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v8)
    || (SupportSelectListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != SupportSelectListViewObject_TypeInfo
    || (SupportSelectListViewObject__SetDragPrefab(
          (SupportSelectListViewObject_o *)obj,
          this->fields.dropDragPrefab,
          this,
          method),
        !item)
    || (v10 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[v10 - 1] != SupportSelectListViewItem_TypeInfo )
  {
    sub_B170D4();
  }
  SupportSelectListViewItem__setuplistObj((SupportSelectListViewItem_o *)item, (SupportSelectListViewObject_o *)obj, v9);
}


void __fastcall SupportSelectListViewManager__SetSurface(
        SupportSelectListViewManager_o *this,
        SupportSelectListViewItem_o *item,
        const MethodInfo *method)
{
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1

  if ( (byte_40FD238 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&SupportSelectUIDragDropListViewSurface_TypeInfo, v7);
    byte_40FD238 = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (dropList = this->fields.dropList) == 0LL )
LABEL_25:
      sub_B170D4();
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v11 = 4LL;
    while ( 1 )
    {
      v12 = v11 - 4;
      if ( v11 - 4 >= dropList->fields._size )
        break;
      if ( v12 >= (unsigned int)dropList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( v16 )
      {
        if ( !dropObjectList )
          goto LABEL_25;
        if ( v12 >= dropObjectList->max_length )
        {
          sub_B17100(v16, v17, v18);
          sub_B170A0();
        }
        if ( !v15 )
          goto LABEL_25;
        v24 = (System_Int32_array **)*((_QWORD *)&dropObjectList->obj.klass + v11);
        *(_QWORD *)(v15 + 24) = v24;
        sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), v24, v18, v19, v20, v21, v22, v23);
      }
      dropList = this->fields.dropList;
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
  System_Collections_Generic_List_SupportSelectListViewObject__o *v10; // x0
  const MethodInfo *v11; // x2
  SupportSelectListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_40FD239 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, ableToSwapDragObj);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    byte_40FD239 = 1;
  }
  ObjectList = SupportSelectListViewManager__get_ObjectList(this, (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_11:
    sub_B170D4();
  v8 = 0LL;
  v9 = ableToSwapDragObj;
  while ( (int)v8 < ObjectList->fields._size )
  {
    v10 = SupportSelectListViewManager__get_ObjectList(this, v7);
    if ( v10 )
    {
      if ( v10->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v12 = v10->fields._items->m_Items[v8];
      if ( v12 )
      {
        SupportSelectListViewObject__UpdateExplanationLabel(v12, v9, v11);
        ObjectList = SupportSelectListViewManager__get_ObjectList(this, v13);
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

  if ( (byte_40FD228 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FD228 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD22A & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_40FD22A = 1;
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
    v8 = sub_B0BA14(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v7; // x21
  ListViewItem_o *v8; // x24
  __int64 v9; // x10
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x1
  SupportSelectListViewObject_o *v12; // x0

  if ( (byte_40FD22F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SupportSelectListViewItem_TypeInfo, v5);
    byte_40FD22F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B170D4();
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = itemList->fields._items->m_Items[v7];
    if ( v8 )
    {
      v9 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (SupportSelectListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == SupportSelectListViewItem_TypeInfo )
      {
        v10 = *(UnityEngine_Object_o **)&v8[1].fields.selectNum;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
        {
          v12 = *(SupportSelectListViewObject_o **)&v8[1].fields.selectNum;
          if ( !v12 )
            goto LABEL_18;
          SupportSelectListViewObject__clearItemObj(v12, v11);
        }
        itemList = this->fields.itemList;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  SupportSelectListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FD22D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FD22D = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (SupportSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v14;
}


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ObjectList(
        SupportSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FD22C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FD22C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v14;
}


void __fastcall SupportSelectListViewManager__reDisp(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  unsigned __int64 v7; // x21
  ListViewItem_o *v8; // x24
  __int64 v9; // x10
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x2
  SupportSelectListViewObject_o *v12; // x0

  if ( (byte_40FD230 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SupportSelectListViewItem_TypeInfo, v5);
    byte_40FD230 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B170D4();
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = itemList->fields._items->m_Items[v7];
    if ( v8 )
    {
      v9 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (SupportSelectListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == SupportSelectListViewItem_TypeInfo )
      {
        v10 = *(UnityEngine_Object_o **)&v8[1].fields.selectNum;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
        {
          v12 = *(SupportSelectListViewObject_o **)&v8[1].fields.selectNum;
          if ( !v12 )
            goto LABEL_18;
          SupportSelectListViewObject__setDisp(v12, 1, v11);
        }
        itemList = this->fields.itemList;
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

  if ( (byte_40FD229 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FD229 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD22B & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_40FD22B = 1;
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
    v8 = sub_B0BA14(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SupportSelectListViewManager__SetLoopFlag(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__setItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
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

  if ( (byte_40FD22E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SupportSelectListViewItem_TypeInfo, v5);
    byte_40FD22E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_18:
    sub_B170D4();
  v7 = 0LL;
  while ( (__int64)v7 < itemList->fields._size )
  {
    if ( v7 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
        if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
        {
          v11 = (SupportSelectListViewObject_o *)v8[16];
          if ( !v11 )
            goto LABEL_18;
          Index = ListViewObject__get_Index(v8[16], 0LL);
          SupportSelectListViewObject__setItemObj(v11, Index, v13);
        }
        itemList = this->fields.itemList;
        ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_18;
  }
}