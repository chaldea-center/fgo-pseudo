void __fastcall CostumeEventItemOrNeedItemConfirmInfo___ctor(
        CostumeEventItemOrNeedItemConfirmInfo_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CostumeEventItemOrNeedItemConfirmInfo__Set(
        CostumeEventItemOrNeedItemConfirmInfo_o *this,
        CombineCostumeEntity_o *combineCostumeEnt,
        EventCombineCostumeEntity_o *eventCombineCostumeEnt,
        bool isShortNeedItemOrQp,
        bool isShortEvemtItem,
        System_Action_bool__o *callBack,
        const MethodInfo *method)
{
  __int64 v13; // x22
  System_String_o *UserId; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UILabel_o *title; // x25
  UILabel_o *subTitle; // x25
  System_String_o *v24; // x26
  Il2CppObject *v25; // x0
  UILabel_o *needItemLabel; // x25
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v28; // x27
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v31; // x25
  struct System_Int32_array *v32; // x8
  struct System_Int32_array *itemNums; // x9
  __int64 v34; // x1
  EventDelegate_Callback_o *v35; // x24
  EventDelegate_o *v36; // x23
  struct UICommonButton_o *useNeedItemButton; // x8
  struct EventEntity_o *Entity; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UILabel_o *eventItemLabel; // x23
  System_String_o *v46; // x24
  Il2CppObject *v47; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x23
  struct System_Int32_array *v49; // x8
  struct System_Int32_array *v50; // x9
  __int64 v51; // x1
  EventDelegate_Callback_o *v52; // x21
  EventDelegate_o *v53; // x20
  struct UICommonButton_o *useEventItemButton; // x8
  __int64 v55; // x0

  if ( (byte_438CD19 & 1) == 0 )
  {
    sub_B775C4(&EventDelegate_Callback_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&EventDelegate_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__);
    sub_B775C4(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__);
    sub_B775C4(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
    sub_B775C4(&StringLiteral_3456/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_B775C4(&StringLiteral_5723/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_B775C4(&StringLiteral_5724/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/);
    sub_B775C4(&StringLiteral_5725/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/);
    sub_B775C4(&StringLiteral_5718/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_438CD19 = 1;
  }
  v13 = sub_B77694(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___ctor(
    (CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_61;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)callBack, v16, v17, v18, v19, v20, v21);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = LocalizationManager__Get((System_String_o *)StringLiteral_3456/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_61;
  UILabel__set_text(title, UserId, 0LL);
  subTitle = this->fields.subTitle;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5723/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v25 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5718/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = System_String__Format(v24, v25, 0LL);
  if ( !subTitle )
    goto LABEL_61;
  UILabel__set_text(subTitle, UserId, 0LL);
  needItemLabel = this->fields.needItemLabel;
  UserId = LocalizationManager__Get((System_String_o *)StringLiteral_5725/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
  if ( !needItemLabel )
    goto LABEL_61;
  UILabel__set_text(needItemLabel, UserId, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_61;
  v28 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v28 >= (int)max_length )
      break;
    if ( v28 >= max_length )
      goto LABEL_62;
    if ( !combineCostumeEnt )
      goto LABEL_61;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_61;
    if ( (__int64)v28 < (int)itemIds->max_length )
    {
      v31 = limitItemList->m_Items[v28];
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = (System_String_o *)NetworkManager__get_UserId(0LL);
      v32 = combineCostumeEnt->fields.itemIds;
      if ( !v32 )
        goto LABEL_61;
      if ( v28 >= v32->max_length )
        goto LABEL_62;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_61;
      if ( v28 >= itemNums->max_length )
        goto LABEL_62;
      if ( !v31 )
        goto LABEL_61;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v31,
        (int64_t)UserId,
        v32->m_Items[v28 + 1],
        itemNums->m_Items[v28 + 1],
        0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v28;
    if ( !limitItemList )
      goto LABEL_61;
  }
  UserId = (System_String_o *)this->fields.useNeedItemButton;
  if ( !UserId )
    goto LABEL_61;
  ((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))UserId->klass->vtable._5_Clone.method)(
    UserId,
    !isShortNeedItemOrQp,
    UserId->klass->vtable._6_GetTypeCode.methodPtr);
  UserId = (System_String_o *)this->fields.useNeedItemButton;
  if ( !UserId )
    goto LABEL_61;
  if ( isShortNeedItemOrQp )
    v34 = 3LL;
  else
    v34 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))UserId->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    UserId,
    v34,
    1LL,
    UserId->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  if ( !isShortNeedItemOrQp )
  {
    v35 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v35,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v36 = (EventDelegate_o *)sub_B77694(EventDelegate_TypeInfo);
    EventDelegate___ctor_30345520(v36, v35, 0LL);
    useNeedItemButton = this->fields.useNeedItemButton;
    if ( !useNeedItemButton )
      goto LABEL_61;
    UserId = (System_String_o *)useNeedItemButton->fields.onClick;
    if ( !UserId )
      goto LABEL_61;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  UserId = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_61;
  UserId = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)UserId,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !UserId )
    goto LABEL_61;
  Entity = (struct EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
                                     eventCombineCostumeEnt->fields.eventId,
                                     (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = Entity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventEnt,
    (System_Int32_array **)Entity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  eventItemLabel = this->fields.eventItemLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v47 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5718/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = System_String__Format(v46, v47, 0LL);
  if ( !eventItemLabel )
    goto LABEL_61;
  UILabel__set_text(eventItemLabel, UserId, 0LL);
  eventItemIcon = this->fields.eventItemIcon;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (System_String_o *)NetworkManager__get_UserId(0LL);
  v49 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v49 )
    goto LABEL_61;
  if ( !v49->max_length )
    goto LABEL_62;
  v50 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v50 )
    goto LABEL_61;
  if ( !v50->max_length )
  {
LABEL_62:
    v55 = sub_B776C8(UserId);
    sub_B77668(v55, 0LL);
  }
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          (int64_t)UserId,
          v49->m_Items[1],
          v50->m_Items[1],
          0LL),
        (UserId = (System_String_o *)this->fields.useEventItemButton) == 0LL)
    || (((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))UserId->klass->vtable._5_Clone.method)(
          UserId,
          !isShortEvemtItem,
          UserId->klass->vtable._6_GetTypeCode.methodPtr),
        (UserId = (System_String_o *)this->fields.useEventItemButton) == 0LL) )
  {
LABEL_61:
    sub_B7769C(UserId, v15);
  }
  if ( isShortEvemtItem )
    v51 = 3LL;
  else
    v51 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))UserId->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    UserId,
    v51,
    1LL,
    UserId->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  if ( !isShortEvemtItem )
  {
    v52 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v52,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v53 = (EventDelegate_o *)sub_B77694(EventDelegate_TypeInfo);
    EventDelegate___ctor_30345520(v53, v52, 0LL);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      UserId = (System_String_o *)useEventItemButton->fields.onClick;
      if ( UserId )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        return;
      }
    }
    goto LABEL_61;
  }
}


void __fastcall CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___ctor(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___Set_b__0(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Action_bool__o *callBack; // x0

  if ( (byte_43890F7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool__Invoke__);
    byte_43890F7 = 1;
  }
  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B7769C(0LL, method);
  System_Action_bool___Invoke(callBack, 0, (const MethodInfo_269C934 *)Method_System_Action_bool__Invoke__);
}


void __fastcall CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___Set_b__1(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Action_bool__o *callBack; // x0

  if ( (byte_43890F8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool__Invoke__);
    byte_43890F8 = 1;
  }
  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B7769C(0LL, method);
  System_Action_bool___Invoke(callBack, 1, (const MethodInfo_269C934 *)Method_System_Action_bool__Invoke__);
}