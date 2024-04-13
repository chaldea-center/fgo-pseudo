void __fastcall CostumeEventItemOrNeedItemConfirmInfo___ctor(
        CostumeEventItemOrNeedItemConfirmInfo_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CostumeEventItemOrNeedItemConfirmInfo__Set(
        CostumeEventItemOrNeedItemConfirmInfo_o *this,
        CombineCostumeEntity_o *combineCostumeEnt,
        EventCombineCostumeEntity_o *eventCombineCostumeEnt,
        bool isShortNeedItemOrQp,
        bool isShortEvemtItem,
        System_Action_bool__o *callBack,
        const MethodInfo *method)
{
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
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  __int64 v58; // x22
  System_String_o *UserId; // x0
  __int64 v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UILabel_o *title; // x25
  UILabel_o *subTitle; // x25
  System_String_o *v69; // x26
  Il2CppObject *v70; // x0
  UILabel_o *needItemLabel; // x25
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v73; // x27
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v76; // x25
  struct System_Int32_array *v77; // x8
  struct System_Int32_array *itemNums; // x9
  __int64 v79; // x1
  EventDelegate_Callback_o *v80; // x24
  EventDelegate_o *v81; // x23
  struct UICommonButton_o *useNeedItemButton; // x8
  struct EventEntity_o *Entity; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UILabel_o *eventItemLabel; // x23
  System_String_o *v91; // x24
  Il2CppObject *v92; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x23
  struct System_Int32_array *v94; // x8
  struct System_Int32_array *v95; // x9
  __int64 v96; // x1
  EventDelegate_Callback_o *v97; // x21
  EventDelegate_o *v98; // x20
  struct UICommonButton_o *useEventItemButton; // x8
  __int64 v100; // x0

  if ( (byte_42EA7B4 & 1) == 0 )
  {
    sub_B5D5C4(
      &EventDelegate_Callback_TypeInfo,
      (_DWORD)combineCostumeEnt,
      (_DWORD)eventCombineCostumeEnt,
      isShortNeedItemOrQp);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&EventDelegate_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&NetworkManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__, v34, v35, v36);
    sub_B5D5C4(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__, v37, v38, v39);
    sub_B5D5C4(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_3396/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_5657/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_5658/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_5659/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, v55, v56, v57);
    byte_42EA7B4 = 1;
  }
  v58 = sub_B5D694(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___ctor(
    (CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *)v58,
    0LL);
  if ( !v58 )
    goto LABEL_61;
  *(_QWORD *)(v58 + 16) = callBack;
  sub_B5D560((BattleServantConfConponent_o *)(v58 + 16), (System_Int32_array **)callBack, v61, v62, v63, v64, v65, v66);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UserId = LocalizationManager__Get((System_String_o *)StringLiteral_3396/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_61;
  UILabel__set_text(title, UserId, 0LL);
  subTitle = this->fields.subTitle;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_5657/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v70 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = System_String__Format(v69, v70, 0LL);
  if ( !subTitle )
    goto LABEL_61;
  UILabel__set_text(subTitle, UserId, 0LL);
  needItemLabel = this->fields.needItemLabel;
  UserId = LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
  if ( !needItemLabel )
    goto LABEL_61;
  UILabel__set_text(needItemLabel, UserId, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_61;
  v73 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v73 >= (int)max_length )
      break;
    if ( v73 >= max_length )
      goto LABEL_62;
    if ( !combineCostumeEnt )
      goto LABEL_61;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_61;
    if ( (__int64)v73 < (int)itemIds->max_length )
    {
      v76 = limitItemList->m_Items[v73];
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = (System_String_o *)NetworkManager__get_UserId(0LL);
      v77 = combineCostumeEnt->fields.itemIds;
      if ( !v77 )
        goto LABEL_61;
      if ( v73 >= v77->max_length )
        goto LABEL_62;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_61;
      if ( v73 >= itemNums->max_length )
        goto LABEL_62;
      if ( !v76 )
        goto LABEL_61;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v76,
        (int64_t)UserId,
        v77->m_Items[v73 + 1],
        itemNums->m_Items[v73 + 1],
        0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v73;
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
    v79 = 3LL;
  else
    v79 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))UserId->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    UserId,
    v79,
    1LL,
    UserId->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  if ( !isShortNeedItemOrQp )
  {
    v80 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v80,
      (Il2CppObject *)v58,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v81 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
    EventDelegate___ctor_29822308(v81, v80, 0LL);
    useNeedItemButton = this->fields.useNeedItemButton;
    if ( !useNeedItemButton )
      goto LABEL_61;
    UserId = (System_String_o *)useNeedItemButton->fields.onClick;
    if ( !UserId )
      goto LABEL_61;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  UserId = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_61;
  UserId = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)UserId,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !UserId )
    goto LABEL_61;
  Entity = (struct EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)UserId,
                                     eventCombineCostumeEnt->fields.eventId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventEnt,
    (System_Int32_array **)Entity,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  eventItemLabel = this->fields.eventItemLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_5658/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v92 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = System_String__Format(v91, v92, 0LL);
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
  v94 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v94 )
    goto LABEL_61;
  if ( !v94->max_length )
    goto LABEL_62;
  v95 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v95 )
    goto LABEL_61;
  if ( !v95->max_length )
  {
LABEL_62:
    v100 = sub_B5D6C8(UserId);
    sub_B5D668(v100, 0LL);
  }
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          (int64_t)UserId,
          v94->m_Items[1],
          v95->m_Items[1],
          0LL),
        (UserId = (System_String_o *)this->fields.useEventItemButton) == 0LL)
    || (((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))UserId->klass->vtable._5_Clone.method)(
          UserId,
          !isShortEvemtItem,
          UserId->klass->vtable._6_GetTypeCode.methodPtr),
        (UserId = (System_String_o *)this->fields.useEventItemButton) == 0LL) )
  {
LABEL_61:
    sub_B5D69C(UserId, v60);
  }
  if ( isShortEvemtItem )
    v96 = 3LL;
  else
    v96 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))UserId->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    UserId,
    v96,
    1LL,
    UserId->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  if ( !isShortEvemtItem )
  {
    v97 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v97,
      (Il2CppObject *)v58,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v98 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
    EventDelegate___ctor_29822308(v98, v97, 0LL);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      UserId = (System_String_o *)useEventItemButton->fields.onClick;
      if ( UserId )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v98,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
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
  int v2; // w2
  __int64 v3; // x3
  System_Action_bool__o *callBack; // x0

  if ( (byte_42E6D4B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__Invoke__, (_DWORD)method, v2, v3);
    byte_42E6D4B = 1;
  }
  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B5D69C(0LL, method);
  System_Action_bool___Invoke(callBack, 0, (const MethodInfo_25873EC *)Method_System_Action_bool__Invoke__);
}


void __fastcall CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___Set_b__1(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_bool__o *callBack; // x0

  if ( (byte_42E6D4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__Invoke__, (_DWORD)method, v2, v3);
    byte_42E6D4C = 1;
  }
  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B5D69C(0LL, method);
  System_Action_bool___Invoke(callBack, 1, (const MethodInfo_25873EC *)Method_System_Action_bool__Invoke__);
}