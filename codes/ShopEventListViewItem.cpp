void __fastcall ShopEventListViewItem___ctor(
        ShopEventListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct EventEntity_o *v9; // x0
  struct EventEntity_o **p_eventEntity; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  char v17; // w8
  EventDetailEntity_o *v18; // x21
  _BOOL4 isFinished; // w9
  ShopEventListViewItem___c__DisplayClass8_0_o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4391081 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_All_ShopEntity___);
    sub_B775C4(&Method_System_Func_ShopEntity__bool___ctor__);
    sub_B775C4(&System_Func_ShopEntity__bool__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TitleInfoControl_TypeInfo);
    sub_B775C4(&Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__);
    sub_B775C4(&ShopEventListViewItem___c__DisplayClass8_0_TypeInfo);
    byte_4391081 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_38;
  v9 = (struct EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                 eventId,
                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEntity = v9;
  p_eventEntity = &this->fields.eventEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventEntity,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_38;
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
    goto LABEL_38;
  if ( EventEntity__isPurchaseEventOpen((EventEntity_o *)Instance, 0LL) )
  {
LABEL_10:
    v17 = 0;
  }
  else
  {
    v20 = (ShopEventListViewItem___c__DisplayClass8_0_o *)sub_B77694(ShopEventListViewItem___c__DisplayClass8_0_TypeInfo);
    ShopEventListViewItem___c__DisplayClass8_0___ctor(v20, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !Instance )
      goto LABEL_38;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              this->fields.eventId,
                                                                              0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !v20 )
      goto LABEL_38;
    v20->fields.nowTime = (int64_t)Instance;
    if ( !*p_eventEntity )
      goto LABEL_38;
    if ( (__int64)Instance <= (*p_eventEntity)->fields.finishedAt )
    {
      v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ShopEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v22,
        (Il2CppObject *)v20,
        Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_ShopEntity__bool___ctor__);
      v17 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v22,
              (const MethodInfo_1D1CBDC *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v17 = 1;
    }
  }
  Instance = (DataManager_o *)this->fields.eventEntity;
  this->fields.isFinished = v17;
  if ( !Instance )
    goto LABEL_38;
  this->fields.closeValue = EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL);
  this->fields.isLocked = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_38;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_38;
    if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)entity, 0LL) )
    {
      v18 = (EventDetailEntity_o *)entity;
      if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      }
      if ( !TitleInfoControl__IsEnableEventShopButton_18818336(v18, 0LL) )
        this->fields.isLocked = 1;
    }
  }
  this->fields.isClosedLimit = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
LABEL_38:
    sub_B7769C(Instance, v8);
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
    sub_B7769C(this, sort);
  bannerPriority = eventEntity->fields.bannerPriority;
  index = this->fields.index;
  this->fields.sortValue2B = 0LL;
  result = 1;
  this->fields.sortValue1B = 0LL;
  this->fields.sortValue2 = index;
  this->fields.sortValue1 = -bannerPriority;
  *(_WORD *)&this->fields.isTermination = 0;
  return result;
}


System_String_o *__fastcall ShopEventListViewItem__ToString(ShopEventListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *NameText; // x0

  if ( (byte_4391084 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_8412/*"Item "*/);
    byte_4391084 = 1;
  }
  NameText = ShopEventListViewItem__get_NameText(this, method);
  return System_String__Concat_44901936((System_String_o *)StringLiteral_8412/*"Item "*/, NameText, 0LL);
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
  struct EventEntity_o *eventEntity; // x8
  System_String_o **p_detail; // x8
  LocalizationManager_c *v5; // x0

  if ( (byte_4391083 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4391083 = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
  {
    p_detail = &eventEntity->fields.detail;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4388DC6 )
    {
      sub_B775C4(&LocalizationManager_TypeInfo);
      byte_4388DC6 = 1;
    }
    v5 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager_TypeInfo;
    }
    p_detail = &v5->static_fields->unknownNameText;
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
  EventEntity_o *eventEntity; // x0

  if ( (byte_4391082 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18762/*"error"*/);
    byte_4391082 = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return EventEntity__getEventName(eventEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_18762/*"error"*/;
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
    sub_B7769C(this, 0LL);
  return x->fields.closedAt < this->fields.nowTime;
}