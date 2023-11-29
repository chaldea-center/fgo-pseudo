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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct EventEntity_o *v21; // x0
  EventEntity_o **p_eventEntity; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  WebViewManager_o *v29; // x0
  ShopMaster_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  char v35; // w8
  EventEntity_o *eventEntity; // x0
  WebViewManager_o *v37; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x0
  EventDetailEntity_o *v39; // x21
  WebViewManager_o *v40; // x0
  ShopMaster_o *v41; // x0
  _BOOL4 isFinished; // w9
  ShopEventListViewItem___c__DisplayClass8_0_o *v43; // x22
  WebViewManager_o *v44; // x0
  ShopMaster_o *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  int64_t Time; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FF87B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_All_ShopEntity___, v11);
    sub_B16FFC(&Method_System_Func_ShopEntity__bool___ctor__, v12);
    sub_B16FFC(&System_Func_ShopEntity__bool__TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&TitleInfoControl_TypeInfo, v16);
    sub_B16FFC(&Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__, v17);
    sub_B16FFC(&ShopEventListViewItem___c__DisplayClass8_0_TypeInfo, v18);
    byte_40FF87B = 1;
  }
  entity = 0LL;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.eventId = eventId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  v21 = (struct EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  eventId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEntity = v21;
  p_eventEntity = &this->fields.eventEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventEntity,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v29 )
    goto LABEL_38;
  v30 = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v29,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !v30 )
    goto LABEL_38;
  ShopMaster__GetEnableEventPeriod(v30, &this->fields.openedAt, &this->fields.closedAt, eventId, 0LL);
  if ( this->fields.closedAt < 1 )
    goto LABEL_10;
  if ( !*p_eventEntity )
    goto LABEL_38;
  if ( EventEntity__isPurchaseEventOpen(*p_eventEntity, 0LL) )
  {
LABEL_10:
    v35 = 0;
  }
  else
  {
    v43 = (ShopEventListViewItem___c__DisplayClass8_0_o *)sub_B170CC(
                                                            ShopEventListViewItem___c__DisplayClass8_0_TypeInfo,
                                                            v31,
                                                            v32,
                                                            v33,
                                                            v34);
    ShopEventListViewItem___c__DisplayClass8_0___ctor(v43, 0LL);
    v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v44 )
      goto LABEL_38;
    v45 = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)v44,
                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !v45 )
      goto LABEL_38;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              v45,
                                                                              this->fields.eventId,
                                                                              0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( !v43 )
      goto LABEL_38;
    v43->fields.nowTime = Time;
    if ( !*p_eventEntity )
      goto LABEL_38;
    if ( Time <= (*p_eventEntity)->fields.finishedAt )
    {
      v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_ShopEntity__bool__TypeInfo,
                                                                                 v48,
                                                                                 v49,
                                                                                 v50,
                                                                                 v51);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v52,
        (Il2CppObject *)v43,
        Method_ShopEventListViewItem___c__DisplayClass8_0___ctor_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_ShopEntity__bool___ctor__);
      v35 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              EventEntitiyList,
              (System_Func_TSource__bool__o *)v52,
              (const MethodInfo_18C70D4 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v35 = 1;
    }
  }
  eventEntity = this->fields.eventEntity;
  this->fields.isFinished = v35;
  if ( !eventEntity )
    goto LABEL_38;
  this->fields.closeValue = EventEntity__IsOpen(eventEntity, 0, 0LL);
  this->fields.isLocked = 0;
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v37 )
    goto LABEL_38;
  v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v37,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v38 )
    goto LABEL_38;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v38,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_38;
    if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)entity, 0LL) )
    {
      v39 = (EventDetailEntity_o *)entity;
      if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      }
      if ( !TitleInfoControl__IsEnableEventShopButton_19677132(v39, 0LL) )
        this->fields.isLocked = 1;
    }
  }
  this->fields.isClosedLimit = 0;
  v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v40
    || (v41 = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v40,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
LABEL_38:
    sub_B170D4();
  }
  if ( ShopMaster__CloseLimitEventShop(v41, eventId, 0LL) )
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
    sub_B170D4();
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

  if ( (byte_40FF87E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8228, method);
    byte_40FF87E = 1;
  }
  NameText = ShopEventListViewItem__get_NameText(this, method);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_8228, NameText, 0LL);
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

  if ( (byte_40FF87D & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FF87D = 1;
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
    if ( !byte_40F87E5 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, method);
      byte_40F87E5 = 1;
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

  if ( (byte_40FF87C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326, method);
    byte_40FF87C = 1;
  }
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    return EventEntity__getEventName(eventEntity, 0LL);
  else
    return (System_String_o *)StringLiteral_18326;
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
    sub_B170D4();
  return x->fields.closedAt < this->fields.nowTime;
}