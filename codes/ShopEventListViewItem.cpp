void ShopEventListViewItem___ctor(
        ShopEventListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  struct EventEntity_o **p_eventEntity; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x22
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  bool v15; // w0
  System_Func_object__bool__o *v16; // x24
  Il2CppObject *v17; // x21
  _BOOL4 isFinished; // w9
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB24F8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_All_ShopEntity___);
    sub_1C6BA08(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TitleInfoControl_TypeInfo);
    sub_1C6BA08(&Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__);
    sub_1C6BA08(&ShopEventListViewItem___c__DisplayClass8_0_TypeInfo);
    byte_4CB24F8 = 1;
  }
  entity = 0;
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_37;
  v9 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         eventId,
         (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEntity = (struct EventEntity_o *)v9;
  p_eventEntity = &this->fields.eventEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventEntity, (int32_t)v9, v11, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
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
    v13 = (Il2CppObject *)sub_1C6BC54(ShopEventListViewItem___c__DisplayClass8_0_TypeInfo);
    System_Object___ctor(v13, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !Instance )
      goto LABEL_37;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              this->fields.eventId,
                                                                              0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !v13 )
      goto LABEL_37;
    v13[1].klass = (Il2CppClass *)Instance;
    if ( !*p_eventEntity )
      goto LABEL_37;
    if ( (__int64)Instance <= (*p_eventEntity)->fields.finishedAt )
    {
      v16 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ShopEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(v16, v13, Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__, 0);
      v15 = System_Linq_Enumerable__All_object_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v16,
              (const MethodInfo_3145818 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v15 = 1;
    }
    this->fields.isFinished = v15;
  }
  Instance = (DataManager_o *)*p_eventEntity;
  if ( !*p_eventEntity )
    goto LABEL_37;
  this->fields.closeValue = EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0);
  this->fields.isLocked = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_37;
    if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)entity, 0) )
    {
      v17 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      if ( !TitleInfoControl__IsEnableEventShopButton_40140312((EventDetailEntity_o *)v17, 0) )
        this->fields.isLocked = 1;
    }
  }
  this->fields.isClosedLimit = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
LABEL_37:
    sub_1C6BC60(Instance, v8);
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
  bool result; // w0

  eventEntity = this->fields.eventEntity;
  this->fields.sortValue0 = this->fields.closeValue;
  if ( !eventEntity )
    sub_1C6BC60(this, sort);
  bannerPriority = eventEntity->fields.bannerPriority;
  index = this->fields.index;
  this->fields.sortValue1B = 0;
  this->fields.sortValue2 = index;
  this->fields.sortValue2B = 0;
  this->fields.sortValue1 = -bannerPriority;
  result = 1;
  *(_WORD *)&this->fields.isTermination = 0;
  return result;
}


System_String_o *ShopEventListViewItem__ToString(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *NameText; // x0

  if ( (byte_4CB24FB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8129/*"Item "*/);
    byte_4CB24FB = 1;
  }
  NameText = ShopEventListViewItem__get_NameText(this, method);
  return System_String__Concat_63966792((System_String_o *)StringLiteral_8129/*"Item "*/, NameText, 0);
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
  struct EventEntity_o *eventEntity; // x8
  System_String_o **p_detail; // x8
  LocalizationManager_c *v5; // x0

  if ( (byte_4CB24FA & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB24FA = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
  {
    p_detail = &eventEntity->fields.detail;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4CB159D )
    {
      sub_1C6BA08(&LocalizationManager_TypeInfo);
      byte_4CB159D = 1;
    }
    v5 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager_TypeInfo;
    }
    p_detail = &v5->static_fields->unknownNameText;
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

  if ( (byte_4CB24F9 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19118/*"error"*/);
    byte_4CB24F9 = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return EventEntity__getEventName(eventEntity, 0);
  else
    return (System_String_o *)StringLiteral_19118/*"error"*/;
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
    sub_1C6BC60(this, 0);
  return x->fields.closedAt < this->fields.nowTime;
}