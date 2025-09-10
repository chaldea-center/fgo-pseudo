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
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x27
  char v25; // w26
  int32_t v26; // w22
  SupportServantData_o *v27; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v29; // x24
  const MethodInfo *v30; // x4
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  const MethodInfo *v37; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v40; // x20
  System_Action_o *v41; // x22
  TimeOverChecker_o *v42; // x23
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x0
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v47; // x21
  TimeOverChecker_o *v48; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x0
  int32_t selectIndex; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C239AF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SupportSelectListViewItem_TypeInfo);
    sub_1C2D490(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_1C2D490(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__);
    sub_1C2D490(&TimeOverChecker_TypeInfo);
    byte_4C239AF = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v14, v15);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v16, v17);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragSwapCallbackFunc, (int32_t)dragSwapCallbackFunc, v18, v19);
  if ( !supportServantData || (max_length = supportServantData->max_length, (int)max_length <= 0) )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, mainDeckIdx, 0, -1, 0);
    return;
  }
  selectIndex = mainDeckIdx;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  do
  {
    if ( v24 >= (unsigned int)max_length )
      sub_1C2D6F4(v20, v21, v22);
    v27 = supportServantData->m_Items[v24];
    if ( v27 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v29 = (SupportSelectListViewItem_o *)sub_1C2D6DC(SupportSelectListViewItem_TypeInfo);
      SupportSelectListViewItem___ctor(v29, v26, v27, eventFriendPoints, v30);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_27;
      v33 = *(_QWORD *)(Instance + 16);
      v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v33 )
        goto LABEL_27;
      v35 = *(int *)(Instance + 24);
      if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v29,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = v33 + 8 * v35;
        *(_DWORD *)(Instance + 24) = v35 + 1;
        *(_QWORD *)(v36 + 32) = v29;
        sub_1C2D434((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v29, v31, v32);
      }
      LODWORD(max_length) = supportServantData->max_length;
      ++v26;
      if ( !v27->fields.isFriendInfo )
        v25 = 1;
    }
    ++v24;
  }
  while ( (__int64)v24 < (int)max_length );
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0);
  if ( (v25 & 1) != 0 )
  {
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v37);
    timeOverChecker = this->fields.timeOverChecker;
    v40 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v41 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
          System_Action___ctor(
            v41,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0),
          v42 = (TimeOverChecker_o *)sub_1C2D6DC(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v42, v41, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.timeOverChecker = v42,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.timeOverChecker, (int32_t)v42, v43, v44),
          (timeOverChecker = this->fields.timeOverChecker) != 0) )
    {
      TimeOverChecker__Start(timeOverChecker, v40, 0);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(v45);
LABEL_26:
        TimeOverChecker__Start(eventStartChecker, Instance, 0);
        return;
      }
      v47 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v47,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0);
      v48 = (TimeOverChecker_o *)sub_1C2D6DC(TimeOverChecker_TypeInfo);
      TimeOverChecker___ctor(v48, v47, (UnityEngine_MonoBehaviour_o *)this, 0);
      this->fields.eventStartChecker = v48;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventStartChecker, (int32_t)v48, v49, v50);
      eventStartChecker = this->fields.eventStartChecker;
      Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(v51);
      if ( eventStartChecker )
        goto LABEL_26;
    }
LABEL_27:
    sub_1C2D6EC(Instance, v12);
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
  __int64 v5; // x2
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  __int64 v8; // x22
  void *monitor; // x20
  int max_length; // w9
  EventCampaignEntity_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C239B5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C239B5 = 1;
  }
  entity = 0;
  if ( !this->fields.eventFriendPoints )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0) )
  {
LABEL_19:
    sub_1C2D6EC(Instance, v4);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = 0;
  monitor = 0;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v8 >= max_length )
      return (int64_t)monitor;
    if ( (unsigned int)v8 >= max_length )
      sub_1C2D6F4(Instance, v4, v5);
    v11 = eventFriendPoints->m_Items[v8];
    if ( v11 && v7 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v7,
                                   &entity,
                                   v11->fields.eventId,
                                   (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v8;
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

  if ( (byte_4C239B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&SupportSelectListViewItem_TypeInfo);
    byte_4C239B2 = 1;
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
                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C239B4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C239B4 = 1;
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
      if ( !byte_4C20DA1 )
      {
        v8 = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v10 )
        sub_1C2D6EC(v8, v9);
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
  const MethodInfo *v8; // x3
  int32_t v9; // w21
  Il2CppObject *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *v14; // x1
  int32_t v15; // w20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4C239B0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SupportSelectListViewItem_TypeInfo);
    byte_4C239B0 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v7, v8);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v9 = 0;
  while ( v9 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v9,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportSelectListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
      {
        v14 = *p_eventFriendPoints;
        Item[8].klass = (Il2CppClass *)*p_eventFriendPoints;
        sub_1C2D434((CGThumbnailListItem_o *)&Item[8], (int32_t)v14, v11, v12);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v9;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
  if ( !Instance )
    goto LABEL_23;
  v15 = 0;
  while ( v15 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v15,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v16);
        ++v15;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v17);
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
    sub_1C2D6EC(Instance, v4);
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
  const MethodInfo *v8; // x3
  int32_t v9; // w21
  Il2CppObject *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 naturalAligment; // x10
  struct EventCampaignEntity_array *v14; // x1
  int32_t v15; // w20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_4C239B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SupportServantListViewItem_TypeInfo);
    byte_4C239B1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)FriendPointCampaigns, v7, v8);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v9 = 0;
  while ( v9 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v9,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      naturalAligment = SupportServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewItem_TypeInfo )
      {
        v14 = *p_eventFriendPoints;
        Item[17].monitor = *p_eventFriendPoints;
        sub_1C2D434((CGThumbnailListItem_o *)&Item[17].monitor, (int32_t)v14, v11, v12);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v9;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
  if ( !Instance )
    goto LABEL_23;
  v15 = 0;
  while ( v15 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v4);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v15,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v16);
        ++v15;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v17);
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
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C239B8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_4C239B8 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_9:
    sub_1C2D6EC(ObjectList, v6);
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
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
  if ( (byte_4C239B3 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectListViewItem_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_1C2D490(&SupportSelectListViewObject_TypeInfo);
    byte_4C239B3 = 1;
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
    sub_1C2D6EC(this, obj);
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
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  Il2CppClass *v13; // x1

  v4 = this;
  if ( (byte_4C239B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_1C2D490(&SupportSelectUIDragDropListViewSurface_TypeInfo);
    byte_4C239B6 = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (this = (SupportSelectListViewManager_o *)v4->fields.dropList) == 0 )
LABEL_22:
      sub_1C2D6EC(this, item);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v7 = 0;
    while ( (__int64)v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      v8 = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v7,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
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
          sub_1C2D6F4(this, item, v11);
        if ( !v10 )
          goto LABEL_22;
        v13 = (Il2CppClass *)dropObjectList->m_Items[v7];
        v10[2].klass = v13;
        sub_1C2D434((CGThumbnailListItem_o *)&v10[2], (int32_t)v13, v11, v12);
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

  if ( (byte_4C239B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_4C239B7 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_9:
    sub_1C2D6EC(ObjectList, v6);
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
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

  if ( (byte_4C239A6 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4C239A6 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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

  if ( (byte_4C239A8 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_4C239A8 = 1;
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
    v8 = sub_1C676E8(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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

  if ( (byte_4C239AD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SupportSelectListViewItem_TypeInfo);
    byte_4C239AD = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C2D6EC(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C239AB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C239AB = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(
                                 (SupportSelectListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C239AA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C239AA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C239AE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SupportSelectListViewItem_TypeInfo);
    byte_4C239AE = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C2D6EC(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4C239A7 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4C239A7 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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

  if ( (byte_4C239A9 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_4C239A9 = 1;
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
    v8 = sub_1C676E8(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
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

  if ( (byte_4C239AC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SupportSelectListViewItem_TypeInfo);
    byte_4C239AC = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C2D6EC(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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