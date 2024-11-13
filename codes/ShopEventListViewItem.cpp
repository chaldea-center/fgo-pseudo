// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewItem___ctor(
        ShopEventListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x0
  struct EventEntity_o **p_eventEntity; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x2
  __int64 v40; // x3
  Il2CppObject *v41; // x22
  __int64 v42; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  __int64 v44; // x2
  __int64 v45; // x3
  bool v46; // w0
  System_Func_object__bool__o *v47; // x24
  __int64 v48; // x1
  Il2CppObject *v49; // x21
  _BOOL4 isFinished; // w9
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12712 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&index, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_ShopEntity___, v15, v16);
    sub_1BCA7E0(&System_Func_ShopEntity__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__, v25, v26);
    sub_1BCA7E0(&ShopEventListViewItem___c__DisplayClass8_0_TypeInfo, v27, v28);
    byte_4B12712 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_37;
  v31 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          eventId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEntity = (struct EventEntity_o *)v31;
  p_eventEntity = &this->fields.eventEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventEntity, (int64_t)v31, v33, v34, v35, v36, v37, v38);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_37;
  ShopMaster__GetEnableEventPeriod(
    (ShopMaster_o *)Instance,
    &this->fields.openedAt,
    &this->fields.closedAt,
    eventId,
    0LL);
  if ( this->fields.closedAt < 1 )
    goto LABEL_10;
  Instance = (DataManager_o *)*p_eventEntity;
  if ( !*p_eventEntity )
    goto LABEL_37;
  if ( EventEntity__isPurchaseEventOpen((EventEntity_o *)Instance, 0LL) )
  {
LABEL_10:
    this->fields.isFinished = 0;
  }
  else
  {
    v41 = (Il2CppObject *)sub_1BCAA2C(ShopEventListViewItem___c__DisplayClass8_0_TypeInfo, v30, v39, v40);
    System_Object___ctor(v41, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !Instance )
      goto LABEL_37;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              this->fields.eventId,
                                                                              0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !v41 )
      goto LABEL_37;
    v41[1].klass = (Il2CppClass *)Instance;
    if ( !*p_eventEntity )
      goto LABEL_37;
    if ( (__int64)Instance <= (*p_eventEntity)->fields.finishedAt )
    {
      v47 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ShopEntity__bool__TypeInfo, v30, v44, v45);
      System_Func_object__bool____ctor(v47, v41, Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__, 0LL);
      v46 = System_Linq_Enumerable__All_object_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v47,
              (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v46 = 1;
    }
    this->fields.isFinished = v46;
  }
  Instance = (DataManager_o *)*p_eventEntity;
  if ( !*p_eventEntity )
    goto LABEL_37;
  this->fields.closeValue = EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL);
  this->fields.isLocked = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_37;
    if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)entity, 0LL) )
    {
      v49 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v48);
      if ( !TitleInfoControl__IsEnableEventShopButton_37955824((EventDetailEntity_o *)v49, 0LL) )
        this->fields.isLocked = 1;
    }
  }
  this->fields.isClosedLimit = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
LABEL_37:
    sub_1BCAA3C(Instance, v30);
  }
  if ( ShopMaster__CloseLimitEventShop((ShopMaster_o *)Instance, eventId, 0LL) )
  {
    isFinished = this->fields.isFinished;
    this->fields.isLocked = 1;
    if ( !isFinished )
      this->fields.isClosedLimit = 1;
  }
}


bool __fastcall ShopEventListViewItem__SetSortValue(
        ShopEventListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x9
  int32_t bannerPriority; // w9
  int64_t index; // x10
  bool result; // w0

  eventEntity = this->fields.eventEntity;
  this->fields.sortValue0 = this->fields.closeValue;
  if ( !eventEntity )
    sub_1BCAA3C(this, sort);
  bannerPriority = eventEntity->fields.bannerPriority;
  index = this->fields.index;
  this->fields.sortValue1B = 0LL;
  this->fields.sortValue2 = index;
  this->fields.sortValue2B = 0LL;
  this->fields.sortValue1 = -bannerPriority;
  result = 1;
  *(_WORD *)&this->fields.isTermination = 0;
  return result;
}


System_String_o *__fastcall ShopEventListViewItem__ToString(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *NameText; // x0

  if ( (byte_4B12715 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8230/*"Item "*/, method, v2);
    byte_4B12715 = 1;
  }
  NameText = ShopEventListViewItem__get_NameText(this, method);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_8230/*"Item "*/, NameText, 0LL);
}


int64_t __fastcall ShopEventListViewItem__get_ChangeEndedAt(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.closedAt;
}


int64_t __fastcall ShopEventListViewItem__get_ChangeStartedAt(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.openedAt;
}


System_String_o *__fastcall ShopEventListViewItem__get_DetailText(
        ShopEventListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventEntity_o *eventEntity; // x8
  System_String_o **p_detail; // x8
  LocalizationManager_c *v6; // x0

  if ( (byte_4B12714 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B12714 = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
  {
    p_detail = &eventEntity->fields.detail;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( !byte_4B1194D )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
      byte_4B1194D = 1;
    }
    v6 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v6 = LocalizationManager_TypeInfo;
    }
    p_detail = &v6->static_fields->unknownNameText;
  }
  return *p_detail;
}


int64_t __fastcall ShopEventListViewItem__get_EventEndedAt(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x8

  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return eventEntity->fields.endedAt;
  else
    return 0LL;
}


int32_t __fastcall ShopEventListViewItem__get_EventId(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int64_t __fastcall ShopEventListViewItem__get_EventStartedAt(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x8

  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return eventEntity->fields.startedAt;
  else
    return 0LL;
}


bool __fastcall ShopEventListViewItem__get_IsClosed(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFinished || this->fields.isLocked;
}


bool __fastcall ShopEventListViewItem__get_IsClosedLimit(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isClosedLimit;
}


bool __fastcall ShopEventListViewItem__get_IsFinished(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFinished;
}


bool __fastcall ShopEventListViewItem__get_IsLocked(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLocked;
}


System_String_o *__fastcall ShopEventListViewItem__get_NameText(
        ShopEventListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventEntity_o *eventEntity; // x0

  if ( (byte_4B12713 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, method, v2);
    byte_4B12713 = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return EventEntity__getEventName(eventEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_19249/*"error"*/;
}


void __fastcall ShopEventListViewItem___c__DisplayClass8_0___ctor(
        ShopEventListViewItem___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopEventListViewItem___c__DisplayClass8_0____ctor_b__0(
        ShopEventListViewItem___c__DisplayClass8_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.closedAt < this->fields.nowTime;
}