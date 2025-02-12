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
  int64_t Instance; // x0
  __int64 v19; // x1
  struct EventCampaignEntity_array *FriendPointCampaigns; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x8
  unsigned __int64 v42; // x27
  char v43; // w26
  int32_t v44; // w22
  SupportServantData_o *v45; // x23
  EventCampaignEntity_array *eventFriendPoints; // x25
  SupportSelectListViewItem_o *v47; // x24
  const MethodInfo *v48; // x4
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8
  const MethodInfo *v59; // x1
  int64_t EventFriendCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v62; // x20
  System_Action_o *v63; // x22
  TimeOverChecker_o *v64; // x23
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  const MethodInfo *v71; // x0
  TimeOverChecker_o *eventStartChecker; // x20
  System_Action_o *v73; // x21
  TimeOverChecker_o *v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  const MethodInfo *v81; // x0
  int32_t selectIndex; // [xsp+Ch] [xbp-64h]

  if ( (byte_4BC4367 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, supportServantData);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C1ABD4(&SupportSelectListViewItem_TypeInfo, v14);
    sub_1C1ABD4(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__, v15);
    sub_1C1ABD4(&Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__, v16);
    sub_1C1ABD4(&TimeOverChecker_TypeInfo, v17);
    byte_4BC4367 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_27;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v27, v28, v29, v30, v31, v32);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.dragSwapCallbackFunc,
    (int64_t)dragSwapCallbackFunc,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
      sub_1C1AE38(v39, v40);
    v45 = supportServantData->m_Items[v42];
    if ( v45 )
    {
      eventFriendPoints = this->fields.eventFriendPoints;
      v47 = (SupportSelectListViewItem_o *)sub_1C1AE20(SupportSelectListViewItem_TypeInfo);
      SupportSelectListViewItem___ctor(v47, v44, v45, eventFriendPoints, v48);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_27;
      v55 = *(_QWORD *)(Instance + 16);
      v56 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v55 )
        goto LABEL_27;
      v57 = *(int *)(Instance + 24);
      if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v47,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = v55 + 8 * v57;
        *(_DWORD *)(Instance + 24) = v57 + 1;
        *(_QWORD *)(v58 + 32) = v47;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v58 + 32), (int64_t)v47, v49, v50, v51, v52, v53, v54);
      }
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
    EventFriendCampaignFinishedAt = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v59);
    timeOverChecker = this->fields.timeOverChecker;
    v62 = EventFriendCampaignFinishedAt;
    if ( timeOverChecker
      || (v63 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo),
          System_Action___ctor(
            v63,
            (Il2CppObject *)this,
            Method_SupportSelectListViewManager_ResetEventCampaignListViewObjects__,
            0LL),
          v64 = (TimeOverChecker_o *)sub_1C1AE20(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v64, v63, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v64,
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.timeOverChecker,
            (int64_t)v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v62, 0LL);
      eventStartChecker = this->fields.eventStartChecker;
      if ( eventStartChecker )
      {
        Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(v71);
LABEL_26:
        TimeOverChecker__Start(eventStartChecker, Instance, 0LL);
        return;
      }
      v73 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v73,
        (Il2CppObject *)this,
        Method_SupportSelectListViewManager_ResetEventCampaignListViewObjectsStart__,
        0LL);
      v74 = (TimeOverChecker_o *)sub_1C1AE20(TimeOverChecker_TypeInfo);
      TimeOverChecker___ctor(v74, v73, (UnityEngine_MonoBehaviour_o *)this, 0LL);
      this->fields.eventStartChecker = v74;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.eventStartChecker,
        (int64_t)v74,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      eventStartChecker = this->fields.eventStartChecker;
      Instance = SupportSelectCommonFunction__GetEventFriendCampaignStartedAt(v81);
      if ( eventStartChecker )
        goto LABEL_26;
    }
LABEL_27:
    sub_1C1AE30(Instance, v19);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  __int64 v9; // x22
  void *monitor; // x20
  int max_length; // w9
  EventCampaignEntity_o *v12; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC436D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC436D = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventFriendPoints )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventFriendPoints = this->fields.eventFriendPoints) == 0LL) )
  {
LABEL_19:
    sub_1C1AE30(Instance, v6);
  }
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = 0LL;
  monitor = 0LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    if ( (int)v9 >= max_length )
      return (int64_t)monitor;
    if ( (unsigned int)v9 >= max_length )
      sub_1C1AE38(Instance, v6);
    v12 = eventFriendPoints->m_Items[v9];
    if ( v12 && v8 )
    {
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v8,
                                   &entity,
                                   v12->fields.eventId,
                                   (const MethodInfo_32486C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 methodPtr_low; // x10

  if ( (byte_4BC436A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&SupportSelectListViewItem_TypeInfo, v6);
    byte_4BC436A = 1;
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
                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  UIScrollView_o *v10; // x19

  if ( (byte_4BC436C & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4BC436C = 1;
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
      if ( !byte_4BC2141 )
      {
        v8 = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v9);
        byte_4BC2141 = 1;
      }
      if ( !v10 )
        sub_1C1AE30(v8, v9);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t v19; // w21
  Il2CppObject *Item; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 methodPtr_low; // x10
  int64_t v28; // x1
  int32_t v29; // w20
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_4BC4368 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&SupportSelectListViewItem_TypeInfo, v8);
    byte_4BC4368 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 0, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v19 = 0;
  while ( v19 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v19,
             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        v28 = (int64_t)*p_eventFriendPoints;
        Item[7].monitor = *p_eventFriendPoints;
        sub_1C1AB78((PartyOrganizationUtility_o *)&Item[7].monitor, v28, v21, v22, v23, v24, v25, v26);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v19;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v10);
  if ( !Instance )
    goto LABEL_23;
  v29 = 0;
  while ( v29 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v10);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v29,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v30);
        ++v29;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v31);
        if ( Instance )
          continue;
      }
    }
    goto LABEL_23;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = SupportSelectListViewManager__GetEventFriendCampaignFinishedAt(this, v10);
  if ( !timeOverChecker )
LABEL_23:
    sub_1C1AE30(Instance, v10);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t v19; // w21
  Il2CppObject *Item; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 methodPtr_low; // x10
  int64_t v28; // x1
  int32_t v29; // w20
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  TimeOverChecker_o *eventStartChecker; // x19

  if ( (byte_4BC4369 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&SupportServantListViewItem_TypeInfo, v8);
    byte_4BC4369 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_23;
  FriendPointCampaigns = EventCampaignMaster__GetFriendPointCampaigns((EventCampaignMaster_o *)Instance, 2, 0LL);
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  this->fields.eventFriendPoints = FriendPointCampaigns;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)FriendPointCampaigns,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = (int64_t)this->fields.itemList;
  if ( !Instance )
    goto LABEL_23;
  v19 = 0;
  while ( v19 < *(_DWORD *)(Instance + 24) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             v19,
             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(SupportServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewItem_TypeInfo )
      {
        v28 = (int64_t)*p_eventFriendPoints;
        Item[16].klass = (Il2CppClass *)*p_eventFriendPoints;
        sub_1C1AB78((PartyOrganizationUtility_o *)&Item[16], v28, v21, v22, v23, v24, v25, v26);
      }
    }
    Instance = (int64_t)this->fields.itemList;
    ++v19;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v10);
  if ( !Instance )
    goto LABEL_23;
  v29 = 0;
  while ( v29 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v10);
    if ( Instance )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v29,
                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( Instance )
      {
        SupportSelectListViewObject__ResetEventCampaign(
          (SupportSelectListViewObject_o *)Instance,
          this->fields.eventFriendPoints,
          v30);
        ++v29;
        Instance = (int64_t)SupportSelectListViewManager__get_ObjectList(this, v31);
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
    sub_1C1AE30(Instance, v10);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  bool v9; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_4BC4370 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, flag);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    byte_4BC4370 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)flag);
  if ( !ObjectList )
LABEL_9:
    sub_1C1AE30(ObjectList, v7);
  v8 = 0;
  v9 = flag;
  while ( v8 < ObjectList->fields._size )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v7);
    if ( ObjectList )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v8,
                                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( ObjectList )
      {
        SupportSelectListViewObject__SetActiveDragSwapGuide((SupportSelectListViewObject_o *)ObjectList, v9, v10);
        ++v8;
        ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                                    this,
                                                                    v11);
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
  __int64 methodPtr_low; // x10
  const MethodInfo *v9; // x2
  __int64 v10; // x10

  v6 = this;
  if ( (byte_4BC436B & 1) == 0 )
  {
    sub_1C1ABD4(&SupportSelectListViewItem_TypeInfo, obj);
    this = (SupportSelectListViewManager_o *)sub_1C1ABD4(&SupportSelectListViewObject_TypeInfo, v7);
    byte_4BC436B = 1;
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
    || (v10 = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10)
    || (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[v10 - 1] != SupportSelectListViewItem_TypeInfo )
  {
    sub_1C1AE30(this, obj);
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
  struct SupportSelectListViewDropObject_array *dropObjectList; // x22
  unsigned __int64 v10; // x20
  Il2CppObject *v11; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1

  v4 = this;
  if ( (byte_4BC436E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Count__, item);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    this = (SupportSelectListViewManager_o *)sub_1C1ABD4(&SupportSelectUIDragDropListViewSurface_TypeInfo, v7);
    byte_4BC436E = 1;
  }
  if ( item )
  {
    listObj_k__BackingField = item->fields._listObj_k__BackingField;
    if ( !listObj_k__BackingField || (this = (SupportSelectListViewManager_o *)v4->fields.dropList) == 0LL )
LABEL_22:
      sub_1C1AE30(this, item);
    dropObjectList = listObj_k__BackingField->fields.dropObjectList;
    v10 = 0LL;
    while ( (__int64)v10 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      v11 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this,
              v10,
              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__get_Item__);
      if ( v11
        && (methodPtr_low = LOBYTE(SupportSelectUIDragDropListViewSurface_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v11->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (SupportSelectUIDragDropListViewSurface_c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectUIDragDropListViewSurface_TypeInfo )
          v13 = v11;
        else
          v13 = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SupportSelectListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !dropObjectList )
          goto LABEL_22;
        if ( v10 >= dropObjectList->max_length )
          sub_1C1AE38(this, item);
        if ( !v13 )
          goto LABEL_22;
        v20 = (int64_t)dropObjectList->m_Items[v10];
        v13[2].klass = (Il2CppClass *)v20;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v13[2], v20, v14, v15, v16, v17, v18, v19);
      }
      this = (SupportSelectListViewManager_o *)v4->fields.dropList;
      ++v10;
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  bool v9; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_4BC436F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Count__, ableToSwapDragObj);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__, v5);
    byte_4BC436F = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)ableToSwapDragObj);
  if ( !ObjectList )
LABEL_9:
    sub_1C1AE30(ObjectList, v7);
  v8 = 0;
  v9 = ableToSwapDragObj;
  while ( v8 < ObjectList->fields._size )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(this, v7);
    if ( ObjectList )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v8,
                                                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SupportSelectListViewObject__get_Item__);
      if ( ObjectList )
      {
        SupportSelectListViewObject__UpdateExplanationLabel((SupportSelectListViewObject_o *)ObjectList, v9, v10);
        ++v8;
        ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectListViewManager__get_ObjectList(
                                                                    this,
                                                                    v11);
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

  if ( (byte_4BC435E & 1) == 0 )
  {
    sub_1C1ABD4(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BC435E = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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

  if ( (byte_4BC4360 & 1) == 0 )
  {
    sub_1C1ABD4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_4BC4360 = 1;
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
    v8 = sub_1C560C4(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v7; // w20
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4BC4365 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&SupportSelectListViewItem_TypeInfo, v5);
    byte_4BC4365 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C1AE30(itemList, method);
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v8 = itemList;
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)itemList[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v8[3].monitor;
          if ( !itemList )
            goto LABEL_15;
          SupportSelectListViewObject__clearItemObj((SupportSelectListViewObject_o *)itemList, method);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v7;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC4363 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC4363 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C1AE30(0LL, v18);
      Item = (ListViewItem_o *)SupportSelectListViewObject__GetItem(
                                 (SupportSelectListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C1AE30(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41959744((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C1AE30(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C1AE30(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C1AE30(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C1AE30(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC4362 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC4362 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SupportSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SupportSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C1AE30(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_SupportSelectListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C1AE30(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectListViewObject__o *)v11;
}


void __fastcall SupportSelectListViewManager__reDisp(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v7; // w20
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v11; // x2

  if ( (byte_4BC4366 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&SupportSelectListViewItem_TypeInfo, v5);
    byte_4BC4366 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C1AE30(itemList, method);
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v8 = itemList;
      methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SupportSelectListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)itemList[3].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)v8[3].monitor;
          if ( !itemList )
            goto LABEL_15;
          SupportSelectListViewObject__setDisp((SupportSelectListViewObject_o *)itemList, 1, v11);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v7;
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

  if ( (byte_4BC435F & 1) == 0 )
  {
    sub_1C1ABD4(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BC435F = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
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

  if ( (byte_4BC4361 & 1) == 0 )
  {
    sub_1C1ABD4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_4BC4361 = 1;
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
    v8 = sub_1C560C4(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C1B0F0(v7);
  SupportSelectListViewManager__SetLoopFlag(v10, v11, v12);
}


void __fastcall SupportSelectListViewManager__setItem(SupportSelectListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v7; // w20
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22
  ListViewObject_o *v11; // x21
  int32_t Index; // w0
  const MethodInfo *v13; // x2

  if ( (byte_4BC4364 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&SupportSelectListViewItem_TypeInfo, v5);
    byte_4BC4364 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_1C1AE30(itemList, method);
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v7,
                                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      v8 = itemList;
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
          v11 = (ListViewObject_o *)v8[3].monitor;
          if ( !v11 )
            goto LABEL_15;
          Index = ListViewObject__get_Index(v11, 0LL);
          SupportSelectListViewObject__setItemObj((SupportSelectListViewObject_o *)v11, Index, v13);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v7;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_15;
  }
}