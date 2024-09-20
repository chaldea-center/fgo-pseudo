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
  int64_t Instance; // x0
  __int64 v12; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  unsigned __int64 v23; // x27
  char v24; // w26
  int32_t v25; // w22
  SupportServantData_o *v26; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v28; // x24
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  const MethodInfo *v36; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v39; // x20
  System_Action_o *v40; // x22
  TimeOverChecker_o *v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  const MethodInfo *v44; // x0
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v46; // x21
  TimeOverChecker_o *v47; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  const MethodInfo *v50; // x0
  int32_t selectIndex; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A57B1F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SupportSelectListViewItem_TypeInfo);
    sub_1B885B0(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__);
    sub_1B885B0(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__);
    sub_1B885B0(&TimeOverChecker_TypeInfo);
    byte_4A57B1F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v14,
    v15);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v16, v17);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.dragSwapCallbackFunc,
    (int32_t)dragSwapCallbackFunc,
    v18,
    v19);
  if ( !supportServantData || (v22 = *(_QWORD *)&supportServantData->max_length, (int)v22 <= 0) )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, mainDeckIdx, 0, -1, 0LL);
    return;
  }
  selectIndex = mainDeckIdx;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  do
  {
    if ( v23 >= (unsigned int)v22 )
      sub_1B88814(v20, v21);
    v26 = supportServantData->m_Items[v23];
    if ( v26 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v28 = (SupportSelectListViewItem_o *)sub_1B887FC(SupportSelectListViewItem_TypeInfo);
      SupportSelectListViewItem___ctor(v28, v25, v26, eventFriendPoints, v29);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_27;
      v32 = *(_QWORD *)(Instance + 16);
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v32 )
        goto LABEL_27;
      v34 = *(int *)(Instance + 24);
      if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v28,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = v32 + 8 * v34;
        *(_DWORD *)(Instance + 24) = v34 + 1;
        *(_QWORD *)(v35 + 32) = v28;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 32), (int32_t)v28, v30, v31);
      }
      LODWORD(v22) = supportServantData->max_length;
      ++v25;
      if ( !v26->fields.isFriendInfo )
        v24 = 1;
    }
    ++v23;
  }
  while ( (__int64)v23 < (int)v22 );
  ListViewManager__SortItem((ListViewManager_o *)this, selectIndex, 0, -1, 0LL);
  if ( (v24 & 1) != 0 )
  {
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v36);
    timeOverChecker = this->fields.timeOverChecker;
    v39 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v40 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(
            v40,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0LL),
          v41 = (TimeOverChecker_o *)sub_1B887FC(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v41, v40, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v41,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.timeOverChecker, (int32_t)v41, v42, v43),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v39, 0LL);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(v44);
LABEL_26:
        TimeOverChecker__Start(eventStartChecker, Instance, 0LL);
        return;
      }
      v46 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0LL);
      v47 = (TimeOverChecker_o *)sub_1B887FC(TimeOverChecker_TypeInfo);
      TimeOverChecker___ctor(v47, v46, (UnityEngine_MonoBehaviour_o *)this, 0LL);
      this->fields.eventStartChecker = v47;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventStartChecker, (int32_t)v47, v48, v49);
      eventStartChecker = this->fields.eventStartChecker;
      Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(v50);
      if ( eventStartChecker )
        goto LABEL_26;
    }
LABEL_27:
    sub_1B8880C(Instance, v12);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  __int64 v7; // x22
  void *monitor; // x20
  int max_length; // w9
  EventCampaignEntity_o *v10; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57B25 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57B25 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_1B8880C(Instance, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v7 = 0LL;
  monitor = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v7 >= max_length )
      return (int64_t)monitor;
    if ( (unsigned int)v7 >= max_length )
      sub_1B88814(Instance, v4);
    v10 = eventFriendPoints->m_Items[v7];
    if ( v10 && v6 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v6,
                                   &entity,
                                   v10->fields.eventId,
                                   (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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


SupportSelectListViewItem_o *__fastcall SupportSelectListViewManager__GetItem(
        SupportSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SupportSelectListViewItem_o *result; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 methodPtr_low; // x10

  if ( (byte_4A57B22 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SupportSelectListViewItem_TypeInfo);
    byte_4A57B22 = 1;
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
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


void __fastcall SupportSelectListViewManager__MoveCenterItem(
        SupportSelectListViewManager_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  UIScrollView_o *v10; // x19

  if ( (byte_4A57B24 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57B24 = 1;
  }
  if ( this->fields.callbackCount <= 0 )
  {
    ListViewManager__MoveCenterItem((ListViewManager_o *)this, index, isAnimation, 0, 0.0, 0LL);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( (v8 & 1) != 0 )
    {
      v10 = this->fields.scrollView;
      if ( !byte_4A55CE1 )
      {
        v8 = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v10 )
        sub_1B8880C(v8, v9);
      UIScrollView__set_currentMomentum(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w21
  Il2CppObject *Item; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct EventCampaignEntity_array *v14; // x1
  int32_t v15; // w20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4A57B20 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SupportSelectListViewItem_TypeInfo);
    byte_4A57B20 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v7,
    v8);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v9 = 0;
  while ( v9 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v9,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        v14 = *p_eventFriendPoints;
        Item[7].monitor = *p_eventFriendPoints;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&Item[7].monitor, (int32_t)v14, v11, v12);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
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
    sub_1B8880C(Instance, v4);
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
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w21
  Il2CppObject *Item; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct EventCampaignEntity_array *v14; // x1
  int32_t v15; // w20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_4A57B21 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SupportServantListViewItem_TypeInfo);
    byte_4A57B21 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)FriendPointCampaigns,
    v7,
    v8);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v9 = 0;
  while ( v9 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v9,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewItem_TypeInfo )
      {
        v14 = *p_eventFriendPoints;
        Item[16].klass = (Il2CppClass *)*p_eventFriendPoints;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&Item[16], (int32_t)v14, v11, v12);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
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
    sub_1B8880C(Instance, v4);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  bool v8; // w21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_4A57B28 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_4A57B28 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_9:
    sub_1B8880C(ObjectList, v6);
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
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
  __int64 methodPtr_low; // x10
  const MethodInfo *v8; // x2
  __int64 v9; // x10

  v6 = this;
  if ( (byte_4A57B23 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectListViewItem_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_1B885B0(&SupportSelectListViewObject_TypeInfo);
    byte_4A57B23 = 1;
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
    || (v9 = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)v9)
    || (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[v9 - 1] != SupportSelectListViewItem_TypeInfo )
  {
    sub_1B8880C(this, obj);
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
  struct SupportSelectListViewDropObject_array *dropObjectList; // x22
  unsigned __int64 v7; // x20
  Il2CppObject *v8; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppClass *v13; // x1

  v4 = this;
  if ( (byte_4A57B26 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewManager_o *)sub_1B885B0(&SupportSelectUIDragDropListViewSurface_TypeInfo);
    byte_4A57B26 = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (this = (SupportSelectListViewManager_o *)v4->fields.dropList) == 0LL )
LABEL_22:
      sub_1B8880C(this, item);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v7 = 0LL;
    while ( (__int64)v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      v8 = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v7,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
      if ( v8
        && (methodPtr_low = LOBYTE(SupportSelectUIDragDropListViewSurface_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v8->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (SupportSelectUIDragDropListViewSurface_c *)v8->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectUIDragDropListViewSurface_TypeInfo )
          v10 = v8;
        else
          v10 = 0LL;
      }
      else
      {
        v10 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !dropObjectList )
          goto LABEL_22;
        if ( v7 >= dropObjectList->max_length )
          sub_1B88814(this, item);
        if ( !v10 )
          goto LABEL_22;
        v13 = (Il2CppClass *)dropObjectList->m_Items[v7];
        v10[2].klass = v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v10[2], (int32_t)v13, v11, v12);
      }
      this = (SupportSelectListViewManager_o *)v4->fields.dropList;
      ++v7;
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  bool v8; // w21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_4A57B27 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
    byte_4A57B27 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_9:
    sub_1B8880C(ObjectList, v6);
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
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

  if ( (byte_4A57B16 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4A57B16 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A57B18 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_4A57B18 = 1;
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
    v8 = sub_1BC3AA0(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4A57B1D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SupportSelectListViewItem_TypeInfo);
    byte_4A57B1D = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B8880C(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v5 = itemList;
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)itemList[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v5[3].monitor;
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


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ClippingObjectList(
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A57B1B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57B1B = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(
                                 (SupportSelectListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportSelectListViewObject__o *__fastcall SupportSelectListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57B1A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57B1A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v3;
}


void __fastcall SupportSelectListViewManager__reDisp(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v8; // x2

  if ( (byte_4A57B1E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SupportSelectListViewItem_TypeInfo);
    byte_4A57B1E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B8880C(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v5 = itemList;
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)itemList[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v5[3].monitor;
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

  if ( (byte_4A57B17 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4A57B17 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A57B19 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_4A57B19 = 1;
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
    v8 = sub_1BC3AA0(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  SupportSelectListViewManager__SetLoopFlag(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__setItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v4; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  ListViewObject_o *v8; // x21
  int32_t Index; // w0
  const MethodInfo *v10; // x2

  if ( (byte_4A57B1C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SupportSelectListViewItem_TypeInfo);
    byte_4A57B1C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1B8880C(itemList, method);
  v4 = 0;
  while ( v4 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v4,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v5 = itemList;
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)itemList[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          v8 = (ListViewObject_o *)v5[3].monitor;
          if ( !v8 )
            goto LABEL_15;
          Index = ListViewObject__get_Index(v8, 0LL);
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