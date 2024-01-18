// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewItem___ctor(
        ShopEventListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  struct EventEntity_o *v21; // x0
  struct EventEntity_o **p_eventEntity; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  char v29; // w8
  EventDetailEntity_o *v30; // x21
  _BOOL4 isFinished; // w9
  ShopEventListViewItem___c__DisplayClass8_0_o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418D50A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_All_ShopEntity___, v11);
    sub_B2C35C(&Method_System_Func_ShopEntity__bool___ctor__, v12);
    sub_B2C35C(&System_Func_ShopEntity__bool__TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&TitleInfoControl_TypeInfo, v16);
    sub_B2C35C(&Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__, v17);
    sub_B2C35C(&ShopEventListViewItem___c__DisplayClass8_0_TypeInfo, v18);
    byte_418D50A = 1;
  }
  entity = 0LL;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_38;
  v21 = (struct EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  eventId,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEntity = v21;
  p_eventEntity = &this->fields.eventEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventEntity,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
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
    v29 = 0;
  }
  else
  {
    v32 = (ShopEventListViewItem___c__DisplayClass8_0_o *)sub_B2C42C(ShopEventListViewItem___c__DisplayClass8_0_TypeInfo);
    ShopEventListViewItem___c__DisplayClass8_0___ctor(v32, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
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
    if ( !v32 )
      goto LABEL_38;
    v32->fields.nowTime = (int64_t)Instance;
    if ( !*p_eventEntity )
      goto LABEL_38;
    if ( (__int64)Instance <= (*p_eventEntity)->fields.finishedAt )
    {
      v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ShopEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v34,
        (Il2CppObject *)v32,
        Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__,
        (const MethodInfo_2711C04 *)Method_System_Func_ShopEntity__bool___ctor__);
      v29 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v34,
              (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v29 = 1;
    }
  }
  Instance = (DataManager_o *)this->fields.eventEntity;
  this->fields.isFinished = v29;
  if ( !Instance )
    goto LABEL_38;
  this->fields.closeValue = EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL);
  this->fields.isLocked = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_38;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_38;
    if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)entity, 0LL) )
    {
      v30 = (EventDetailEntity_o *)entity;
      if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      }
      if ( !TitleInfoControl__IsEnableEventShopButton_19598560(v30, 0LL) )
        this->fields.isLocked = 1;
    }
  }
  this->fields.isClosedLimit = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
LABEL_38:
    sub_B2C434(Instance, v20);
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
    sub_B2C434(this, sort);
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

  if ( (byte_418D50D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8257/*"Item "*/, method);
    byte_418D50D = 1;
  }
  NameText = ShopEventListViewItem__get_NameText(this, method);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_8257/*"Item "*/, NameText, 0LL);
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

  if ( (byte_418D50C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_418D50C = 1;
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
    if ( !byte_4185BC0 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, method);
      byte_4185BC0 = 1;
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

  if ( (byte_418D50B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18395/*"error"*/, method);
    byte_418D50B = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return EventEntity__getEventName(eventEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_18395/*"error"*/;
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
    sub_B2C434(this, 0LL);
  return x->fields.closedAt < this->fields.nowTime;
}