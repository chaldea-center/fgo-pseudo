void ShopEventListViewItem___ctor(
        ShopEventListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v7; // x0
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  struct EventEntity_o **p_eventEntity; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  struct EventEntity_o *v22; // x8
  bool v23; // w0
  System_Func_object__bool__o *v24; // x24
  bool IsOpen; // w0
  const MethodInfo_47A29F8 *v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x21
  const MethodInfo_47A29F8 *v30; // x0
  _BOOL4 isFinished; // w9
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596C838 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_All_ShopEntity___);
    sub_2213A60(&System_Func_ShopEntity__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TitleInfoControl_TypeInfo);
    sub_2213A60(&Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__);
    sub_2213A60(&ShopEventListViewItem___c__DisplayClass8_0_TypeInfo);
    byte_596C838 = 1;
  }
  entity = 0;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v7 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v7);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_37;
  v10 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          eventId,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEntity = (struct EventEntity_o *)v10;
  p_eventEntity = &this->fields.eventEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventEntity, (int32_t)v10, v12, v13, v14, v15, v16, v17);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_37;
  ShopMaster__GetEnableEventPeriod((ShopMaster_o *)Instance, &this->fields.openedAt, &this->fields.closedAt, eventId, 0);
  if ( this->fields.closedAt < 1 )
    goto LABEL_10;
  Instance = (DataManager_o *)*p_eventEntity;
  if ( !*p_eventEntity )
    goto LABEL_37;
  if ( EventEntity__isPurchaseEventOpen((EventEntity_o *)Instance, 0) )
  {
LABEL_10:
    this->fields.isFinished = 0;
  }
  else
  {
    v18 = (Il2CppObject *)sub_2213CCC(ShopEventListViewItem___c__DisplayClass8_0_TypeInfo);
    System_Object___ctor(v18, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !Instance )
      goto LABEL_37;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              this->fields.eventId,
                                                                              0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v20);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !v18 )
      goto LABEL_37;
    v22 = *p_eventEntity;
    v18[1].klass = (Il2CppClass *)Instance;
    if ( !v22 )
      goto LABEL_37;
    if ( (__int64)Instance <= v22->fields.finishedAt )
    {
      v24 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ShopEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(v24, v18, Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__, 0);
      v23 = System_Linq_Enumerable__All_object_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v24,
              (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v23 = 1;
    }
    this->fields.isFinished = v23;
  }
  Instance = (DataManager_o *)*p_eventEntity;
  if ( !*p_eventEntity )
    goto LABEL_37;
  IsOpen = EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0);
  v26 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isLocked = 0;
  this->fields.closeValue = IsOpen;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v26);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_37;
    if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)entity, 0) )
    {
      v29 = entity;
      if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v27, v28);
      if ( !TitleInfoControl__IsEnableEventShopButton_46934560((EventDetailEntity_o *)v29, 0) )
        this->fields.isLocked = 1;
    }
  }
  v30 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isClosedLimit = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v30);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
LABEL_37:
    sub_2213CDC(Instance, v9);
  }
  if ( ShopMaster__CloseLimitEventShop((ShopMaster_o *)Instance, eventId, 0) )
  {
    isFinished = this->fields.isFinished;
    this->fields.isLocked = 1;
    if ( !isFinished )
      this->fields.isClosedLimit = 1;
  }
}


bool ShopEventListViewItem__SetSortValue(ShopEventListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x9
  int32_t bannerPriority; // w9
  int64_t index; // x10

  eventEntity = this->fields.eventEntity;
  this->fields.sortValue0 = this->fields.closeValue;
  if ( !eventEntity )
    sub_2213CDC(this, sort);
  bannerPriority = eventEntity->fields.bannerPriority;
  index = this->fields.index;
  this->fields.sortValue1B = 0;
  this->fields.sortValue2 = index;
  this->fields.sortValue2B = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -bannerPriority;
  return 1;
}


int64_t ShopEventListViewItem__get_ChangeEndedAt(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.closedAt;
}


int64_t ShopEventListViewItem__get_ChangeStartedAt(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.openedAt;
}


System_String_o *ShopEventListViewItem__get_DetailText(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventEntity_o *eventEntity; // x8
  System_String_o **p_detail; // x8
  LocalizationManager_c *v6; // x0

  if ( (byte_596C83A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596C83A = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
  {
    p_detail = &eventEntity->fields.detail;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v6 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
      v6 = LocalizationManager_TypeInfo;
    }
    p_detail = &v6->static_fields->unknownNameText;
  }
  return *p_detail;
}


int64_t ShopEventListViewItem__get_EventEndedAt(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x8

  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return eventEntity->fields.endedAt;
  else
    return 0;
}


int32_t ShopEventListViewItem__get_EventId(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int64_t ShopEventListViewItem__get_EventStartedAt(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x8

  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return eventEntity->fields.startedAt;
  else
    return 0;
}


bool ShopEventListViewItem__get_IsClosed(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFinished || this->fields.isLocked;
}


bool ShopEventListViewItem__get_IsClosedLimit(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isClosedLimit;
}


bool ShopEventListViewItem__get_IsFinished(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFinished;
}


bool ShopEventListViewItem__get_IsLocked(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLocked;
}


System_String_o *ShopEventListViewItem__get_NameText(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  EventEntity_o *eventEntity; // x0

  if ( (byte_596C839 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19957/*"error"*/);
    byte_596C839 = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return EventEntity__getEventName(eventEntity, 0);
  else
    return (System_String_o *)StringLiteral_19957/*"error"*/;
}


void ShopEventListViewItem___c__DisplayClass8_0___ctor(
        ShopEventListViewItem___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopEventListViewItem___c__DisplayClass8_0____ctor_b__0(
        ShopEventListViewItem___c__DisplayClass8_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.closedAt < this->fields.nowTime;
}