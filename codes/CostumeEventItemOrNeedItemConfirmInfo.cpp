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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x22
  System_String_o *UserId; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UILabel_o *title; // x25
  UILabel_o *subTitle; // x25
  System_String_o *v38; // x26
  Il2CppObject *v39; // x0
  UILabel_o *needItemLabel; // x25
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v42; // x27
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v45; // x25
  struct System_Int32_array *v46; // x8
  struct System_Int32_array *itemNums; // x9
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x2
  EventDelegate_Callback_o *v51; // x24
  __int64 v52; // x1
  __int64 v53; // x2
  EventDelegate_o *v54; // x23
  struct UICommonButton_o *useNeedItemButton; // x8
  struct EventEntity_o *Entity; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UILabel_o *eventItemLabel; // x23
  System_String_o *v64; // x24
  Il2CppObject *v65; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x23
  struct System_Int32_array *v67; // x8
  struct System_Int32_array *v68; // x9
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x2
  EventDelegate_Callback_o *v72; // x21
  __int64 v73; // x1
  __int64 v74; // x2
  EventDelegate_o *v75; // x20
  struct UICommonButton_o *useEventItemButton; // x8
  __int64 v77; // x0

  if ( (byte_42164D1 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, combineCostumeEnt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14);
    sub_B0D8A4(&EventDelegate_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&NetworkManager_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__, v20);
    sub_B0D8A4(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__, v21);
    sub_B0D8A4(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_3343/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v23);
    sub_B0D8A4(&StringLiteral_5596/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, v24);
    sub_B0D8A4(&StringLiteral_5597/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, v25);
    sub_B0D8A4(&StringLiteral_5598/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, v26);
    sub_B0D8A4(&StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, v27);
    byte_42164D1 = 1;
  }
  v28 = sub_B0D974(
          CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo,
          combineCostumeEnt,
          eventCombineCostumeEnt);
  CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___ctor(
    (CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_61;
  *(_QWORD *)(v28 + 16) = callBack;
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)callBack, v30, v31, v32, v33, v34, v35);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = LocalizationManager__Get((System_String_o *)StringLiteral_3343/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_61;
  UILabel__set_text(title, UserId, 0LL);
  subTitle = this->fields.subTitle;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5596/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v39 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = System_String__Format(v38, v39, 0LL);
  if ( !subTitle )
    goto LABEL_61;
  UILabel__set_text(subTitle, UserId, 0LL);
  needItemLabel = this->fields.needItemLabel;
  UserId = LocalizationManager__Get((System_String_o *)StringLiteral_5598/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
  if ( !needItemLabel )
    goto LABEL_61;
  UILabel__set_text(needItemLabel, UserId, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_61;
  v42 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v42 >= (int)max_length )
      break;
    if ( v42 >= max_length )
      goto LABEL_62;
    if ( !combineCostumeEnt )
      goto LABEL_61;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_61;
    if ( (__int64)v42 < (int)itemIds->max_length )
    {
      v45 = limitItemList->m_Items[v42];
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = (System_String_o *)NetworkManager__get_UserId(0LL);
      v46 = combineCostumeEnt->fields.itemIds;
      if ( !v46 )
        goto LABEL_61;
      if ( v42 >= v46->max_length )
        goto LABEL_62;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_61;
      if ( v42 >= itemNums->max_length )
        goto LABEL_62;
      if ( !v45 )
        goto LABEL_61;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v45,
        (int64_t)UserId,
        v46->m_Items[v42 + 1],
        itemNums->m_Items[v42 + 1],
        0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v42;
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
    v48 = 3LL;
  else
    v48 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))UserId->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    UserId,
    v48,
    1LL,
    UserId->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  if ( !isShortNeedItemOrQp )
  {
    v51 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v49, v50);
    EventDelegate_Callback___ctor(
      v51,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v54 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v52, v53);
    EventDelegate___ctor_28889248(v54, v51, 0LL);
    useNeedItemButton = this->fields.useNeedItemButton;
    if ( !useNeedItemButton )
      goto LABEL_61;
    UserId = (System_String_o *)useNeedItemButton->fields.onClick;
    if ( !UserId )
      goto LABEL_61;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  UserId = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_61;
  UserId = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)UserId,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !UserId )
    goto LABEL_61;
  Entity = (struct EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
                                     eventCombineCostumeEnt->fields.eventId,
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventEnt,
    (System_Int32_array **)Entity,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  eventItemLabel = this->fields.eventItemLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_5597/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v65 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = System_String__Format(v64, v65, 0LL);
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
  v67 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v67 )
    goto LABEL_61;
  if ( !v67->max_length )
    goto LABEL_62;
  v68 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v68 )
    goto LABEL_61;
  if ( !v68->max_length )
  {
LABEL_62:
    v77 = sub_B0D9A8(UserId);
    sub_B0D948(v77, 0LL);
  }
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          (int64_t)UserId,
          v67->m_Items[1],
          v68->m_Items[1],
          0LL),
        (UserId = (System_String_o *)this->fields.useEventItemButton) == 0LL)
    || (((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))UserId->klass->vtable._5_Clone.method)(
          UserId,
          !isShortEvemtItem,
          UserId->klass->vtable._6_GetTypeCode.methodPtr),
        (UserId = (System_String_o *)this->fields.useEventItemButton) == 0LL) )
  {
LABEL_61:
    sub_B0D97C(UserId);
  }
  if ( isShortEvemtItem )
    v69 = 3LL;
  else
    v69 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))UserId->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    UserId,
    v69,
    1LL,
    UserId->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  if ( !isShortEvemtItem )
  {
    v72 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v70, v71);
    EventDelegate_Callback___ctor(
      v72,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v75 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v73, v74);
    EventDelegate___ctor_28889248(v75, v72, 0LL);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      UserId = (System_String_o *)useEventItemButton->fields.onClick;
      if ( UserId )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
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

  if ( (byte_4213190 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__Invoke__, method);
    byte_4213190 = 1;
  }
  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B0D97C(0LL);
  System_Action_bool___Invoke(callBack, 0, (const MethodInfo_246AB08 *)Method_System_Action_bool__Invoke__);
}


void __fastcall CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___Set_b__1(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Action_bool__o *callBack; // x0

  if ( (byte_4213191 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__Invoke__, method);
    byte_4213191 = 1;
  }
  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B0D97C(0LL);
  System_Action_bool___Invoke(callBack, 1, (const MethodInfo_246AB08 *)Method_System_Action_bool__Invoke__);
}