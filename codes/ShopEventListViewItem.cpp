void __fastcall ShopEventListViewItem___ctor(
        ShopEventListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  DataManager_o *Instance; // x0
  __int64 v44; // x1
  struct EventEntity_o *v45; // x0
  struct EventEntity_o **p_eventEntity; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  char v53; // w8
  EventDetailEntity_o *v54; // x21
  _BOOL4 isFinished; // w9
  ShopEventListViewItem___c__DisplayClass8_0_o *v56; // x22
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EE5CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, index, eventId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_ShopEntity___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Func_ShopEntity__bool___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Func_ShopEntity__bool__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&NetworkManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&TitleInfoControl_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__, v37, v38, v39);
    sub_B5D5C4(&ShopEventListViewItem___c__DisplayClass8_0_TypeInfo, v40, v41, v42);
    byte_42EE5CA = 1;
  }
  entity = 0LL;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_38;
  v45 = (struct EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  eventId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEntity = v45;
  p_eventEntity = &this->fields.eventEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventEntity,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
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
    v53 = 0;
  }
  else
  {
    v56 = (ShopEventListViewItem___c__DisplayClass8_0_o *)sub_B5D694(ShopEventListViewItem___c__DisplayClass8_0_TypeInfo);
    ShopEventListViewItem___c__DisplayClass8_0___ctor(v56, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
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
    if ( !v56 )
      goto LABEL_38;
    v56->fields.nowTime = (int64_t)Instance;
    if ( !*p_eventEntity )
      goto LABEL_38;
    if ( (__int64)Instance <= (*p_eventEntity)->fields.finishedAt )
    {
      v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ShopEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v58,
        (Il2CppObject *)v56,
        Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_ShopEntity__bool___ctor__);
      v53 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v58,
              (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v53 = 1;
    }
  }
  Instance = (DataManager_o *)this->fields.eventEntity;
  this->fields.isFinished = v53;
  if ( !Instance )
    goto LABEL_38;
  this->fields.closeValue = EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL);
  this->fields.isLocked = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_38;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_38;
    if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)entity, 0LL) )
    {
      v54 = (EventDetailEntity_o *)entity;
      if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      }
      if ( !TitleInfoControl__IsEnableEventShopButton_18442432(v54, 0LL) )
        this->fields.isLocked = 1;
    }
  }
  this->fields.isClosedLimit = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
LABEL_38:
    sub_B5D69C(Instance, v44);
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
    sub_B5D69C(this, sort);
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
  int v2; // w2
  __int64 v3; // x3
  System_String_o *NameText; // x0

  if ( (byte_42EE5CD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8341/*"Item "*/, (_DWORD)method, v2, v3);
    byte_42EE5CD = 1;
  }
  NameText = ShopEventListViewItem__get_NameText(this, method);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_8341/*"Item "*/, NameText, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct EventEntity_o *eventEntity; // x8
  System_String_o **p_detail; // x8
  LocalizationManager_c *v7; // x0

  if ( (byte_42EE5CC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE5CC = 1;
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
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E6772 = 1;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
    }
    p_detail = &v7->static_fields->unknownNameText;
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
  int v2; // w2
  __int64 v3; // x3
  EventEntity_o *eventEntity; // x0

  if ( (byte_42EE5CB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)method, v2, v3);
    byte_42EE5CB = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return EventEntity__getEventName(eventEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_18624/*"error"*/;
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
    sub_B5D69C(this, 0LL);
  return x->fields.closedAt < this->fields.nowTime;
}