void CostumeEventItemOrNeedItemConfirmInfo___ctor(
        CostumeEventItemOrNeedItemConfirmInfo_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CostumeEventItemOrNeedItemConfirmInfo__OnDisable(
        CostumeEventItemOrNeedItemConfirmInfo_o *this,
        const MethodInfo *method)
{
  CostumeEventItemOrNeedItemConfirmInfo_o *v2; // x19
  struct UICommonButton_o *useNeedItemButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x8
  int32_t size; // w2
  int v6; // w9
  struct UICommonButton_o *useEventItemButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v8; // x8
  int32_t v9; // w2
  int v10; // w9

  v2 = this;
  if ( (byte_596A24F & 1) == 0 )
  {
    this = (CostumeEventItemOrNeedItemConfirmInfo_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_596A24F = 1;
  }
  useNeedItemButton = v2->fields.useNeedItemButton;
  if ( !useNeedItemButton )
    goto LABEL_12;
  onClick = useNeedItemButton->fields.onClick;
  if ( !onClick )
    goto LABEL_12;
  size = onClick->fields._size;
  v6 = onClick->fields._version + 1;
  onClick->fields._size = 0;
  onClick->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
  useEventItemButton = v2->fields.useEventItemButton;
  if ( !useEventItemButton || (v8 = useEventItemButton->fields.onClick) == 0 )
LABEL_12:
    sub_2213CDC(this, method);
  v9 = v8->fields._size;
  v10 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v10;
  if ( v9 >= 1 )
    System_Array__Clear((System_Array_o *)v8->fields._items, 0, v9, 0);
}


void CostumeEventItemOrNeedItemConfirmInfo__Set(
        CostumeEventItemOrNeedItemConfirmInfo_o *this,
        CombineCostumeEntity_o *combineCostumeEnt,
        EventCombineCostumeEntity_o *eventCombineCostumeEnt,
        bool isShortNeedItemOrQp,
        bool isShortEvemtItem,
        System_Action_bool__o *callBack,
        const MethodInfo *method)
{
  __int64 v13; // x22
  System_String_o *useNeedItemButton; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *title; // x23
  UILabel_o *subTitle; // x23
  System_String_o *v26; // x26
  Il2CppObject *v27; // x0
  UILabel_o *needItemLabel; // x23
  __int64 v29; // x2
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v31; // x27
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v34; // x26
  struct System_Int32_array *v35; // x8
  struct System_Int32_array *itemNums; // x9
  EventDelegate_Callback_o *v37; // x25
  EventDelegate_o *v38; // x24
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct UICommonButton_o *v45; // x8
  System_String_Fields fields; // x8
  _QWORD *v47; // x9
  __int64 klass_low; // x10
  __int64 v49; // x8
  Il2CppObject *Entity; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x1
  __int64 v58; // x2
  UILabel_o *eventItemLabel; // x24
  System_String_o *v60; // x25
  Il2CppObject *v61; // x0
  __int64 v62; // x2
  LimitCntUpItemComponent_o *eventItemIcon; // x24
  struct System_Int32_array *v64; // x8
  struct System_Int32_array *v65; // x9
  EventDelegate_Callback_o *v66; // x21
  EventDelegate_o *v67; // x20
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct UICommonButton_o *useEventItemButton; // x8
  System_Collections_Generic_List_object__o *onClick; // x8
  struct System_Object_array *items; // x9
  _QWORD *v77; // x10
  __int64 size; // x11
  Il2CppClass **v79; // x0

  if ( (byte_596A24E & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__);
    sub_2213A60(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__);
    sub_2213A60(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
    sub_2213A60(&StringLiteral_3911/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_2213A60(&StringLiteral_5748/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_5749/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/);
    sub_2213A60(&StringLiteral_5750/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/);
    sub_2213A60(&StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_596A24E = 1;
  }
  v13 = sub_2213CCC(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_29;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)callBack, v16, v17, v18, v19, v20, v21);
  title = this->fields.title;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_3911/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !title )
    goto LABEL_29;
  UILabel__set_text(title, useNeedItemButton, 0);
  subTitle = this->fields.subTitle;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5748/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0);
  v27 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v26, v27, 0);
  if ( !subTitle )
    goto LABEL_29;
  UILabel__set_text(subTitle, useNeedItemButton, 0);
  needItemLabel = this->fields.needItemLabel;
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_5750/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0);
  if ( !needItemLabel )
    goto LABEL_29;
  UILabel__set_text(needItemLabel, useNeedItemButton, 0);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_29;
  v31 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(limitItemList->max_length);
    if ( (__int64)v31 >= (int)max_length_low )
      break;
    if ( v31 >= max_length_low )
      goto LABEL_65;
    if ( !combineCostumeEnt )
      goto LABEL_29;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_29;
    if ( (__int64)v31 < SLODWORD(itemIds->max_length) )
    {
      v34 = limitItemList->m_Items[v31];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v29);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v29);
        useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      }
      v35 = combineCostumeEnt->fields.itemIds;
      if ( !v35 )
        goto LABEL_29;
      if ( v31 >= LODWORD(v35->max_length) )
        goto LABEL_65;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_29;
      if ( v31 >= LODWORD(itemNums->max_length) )
        goto LABEL_65;
      if ( !v34 )
        goto LABEL_29;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v34,
        *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
        v35->m_Items[v31],
        itemNums->m_Items[v31],
        0);
      limitItemList = this->fields.limitItemList;
    }
    ++v31;
    if ( !limitItemList )
      goto LABEL_29;
  }
  useNeedItemButton = (System_String_o *)this->fields.useNeedItemButton;
  if ( !useNeedItemButton )
    goto LABEL_29;
  ((void (__fastcall *)(System_String_o *, bool, const MethodInfo *))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
    useNeedItemButton,
    !isShortNeedItemOrQp,
    useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
  useNeedItemButton = (System_String_o *)this->fields.useNeedItemButton;
  if ( !useNeedItemButton )
    goto LABEL_29;
  useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr();
  if ( !isShortNeedItemOrQp )
  {
    v37 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v37,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0);
    v38 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
    EventDelegate___ctor_56337280(v38, v37, 0);
    v45 = this->fields.useNeedItemButton;
    if ( !v45 )
      goto LABEL_29;
    useNeedItemButton = (System_String_o *)v45->fields.onClick;
    if ( !useNeedItemButton )
      goto LABEL_29;
    fields = useNeedItemButton->fields;
    v47 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(useNeedItemButton[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_29;
    klass_low = SLODWORD(useNeedItemButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)useNeedItemButton,
        (Il2CppObject *)v38,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(useNeedItemButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v49 + 32) = v38;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 32), (int32_t)v38, v39, v40, v41, v42, v43, v44);
    }
  }
  useNeedItemButton = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !useNeedItemButton )
    goto LABEL_29;
  useNeedItemButton = (System_String_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)useNeedItemButton,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !useNeedItemButton )
    goto LABEL_29;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)useNeedItemButton,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventEnt, (int32_t)Entity, v51, v52, v53, v54, v55, v56);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57, v58);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0);
  v61 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v60, v61, 0);
  if ( !eventItemLabel )
    goto LABEL_29;
  UILabel__set_text(eventItemLabel, useNeedItemButton, 0);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v62);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v62);
    useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  }
  v64 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v64 )
    goto LABEL_29;
  if ( !LODWORD(v64->max_length) )
    goto LABEL_65;
  v65 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v65 )
    goto LABEL_29;
  if ( !LODWORD(v65->max_length) )
LABEL_65:
    sub_2213CE4(useNeedItemButton);
  if ( !eventItemIcon )
    goto LABEL_29;
  LimitCntUpItemComponent__setLimitUpItemInfo(
    eventItemIcon,
    *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
    v64->m_Items[0],
    v65->m_Items[0],
    0);
  useNeedItemButton = (System_String_o *)this->fields.useEventItemButton;
  if ( !useNeedItemButton )
    goto LABEL_29;
  ((void (__fastcall *)(System_String_o *, bool, const MethodInfo *))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
    useNeedItemButton,
    !isShortEvemtItem,
    useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
  useNeedItemButton = (System_String_o *)this->fields.useEventItemButton;
  if ( !useNeedItemButton )
    goto LABEL_29;
  useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr();
  if ( isShortEvemtItem )
    return;
  v66 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v66,
    (Il2CppObject *)v13,
    Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
    0);
  v67 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337280(v67, v66, 0);
  useEventItemButton = this->fields.useEventItemButton;
  if ( !useEventItemButton
    || (onClick = (System_Collections_Generic_List_object__o *)useEventItemButton->fields.onClick) == 0
    || (items = onClick->fields._items,
        v77 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onClick->fields._version,
        !items) )
  {
LABEL_29:
    sub_2213CDC(useNeedItemButton, v15);
  }
  size = onClick->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onClick,
      (Il2CppObject *)v67,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v79 = &items->obj.klass + size;
    onClick->fields._size = size + 1;
    v79[4] = (Il2CppClass *)v67;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v79 + 4), (int32_t)v67, v68, v69, v70, v71, v72, v73);
  }
}


void CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___ctor(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___Set_b__0(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_bool__o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    0,
    callBack->fields.method);
}


void CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___Set_b__1(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_bool__o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    1,
    callBack->fields.method);
}