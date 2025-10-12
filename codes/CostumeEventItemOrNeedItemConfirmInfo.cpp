void CostumeEventItemOrNeedItemConfirmInfo___ctor(
        CostumeEventItemOrNeedItemConfirmInfo_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UILabel_o *title; // x23
  UILabel_o *subTitle; // x23
  System_String_o *v19; // x26
  Il2CppObject *v20; // x0
  UILabel_o *needItemLabel; // x23
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v23; // x27
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v26; // x26
  struct System_Int32_array *v27; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v29; // w24
  __int64 v30; // x1
  EventDelegate_Callback_o *v31; // x25
  EventDelegate_o *v32; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UICommonButton_o *v35; // x8
  System_String_Fields fields; // x8
  _QWORD *v37; // x9
  __int64 klass_low; // x10
  __int64 v39; // x8
  Il2CppObject *Entity; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UILabel_o *eventItemLabel; // x24
  System_String_o *v44; // x25
  Il2CppObject *v45; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x24
  struct System_Int32_array *v47; // x8
  struct System_Int32_array *v48; // x9
  _BOOL4 v49; // w20
  __int64 v50; // x1
  EventDelegate_Callback_o *v51; // x21
  EventDelegate_o *v52; // x20
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct UICommonButton_o *useEventItemButton; // x8
  System_String_Fields v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8

  if ( (byte_4C3BB24 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__);
    sub_1C32C20(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__);
    sub_1C32C20(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
    sub_1C32C20(&StringLiteral_3767/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C32C20(&StringLiteral_5547/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_5548/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/);
    sub_1C32C20(&StringLiteral_5549/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/);
    sub_1C32C20(&StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4C3BB24 = 1;
  }
  v13 = sub_1C32E6C(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_71;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 16), (int32_t)callBack, v15, v16);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !title )
    goto LABEL_71;
  UILabel__set_text(title, useNeedItemButton, 0);
  subTitle = this->fields.subTitle;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5547/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0);
  v20 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v19, v20, 0);
  if ( !subTitle )
    goto LABEL_71;
  UILabel__set_text(subTitle, useNeedItemButton, 0);
  needItemLabel = this->fields.needItemLabel;
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_5549/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0);
  if ( !needItemLabel )
    goto LABEL_71;
  UILabel__set_text(needItemLabel, useNeedItemButton, 0);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_71;
  v23 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(limitItemList->max_length);
    if ( (__int64)v23 >= (int)max_length_low )
      break;
    if ( v23 >= max_length_low )
      goto LABEL_72;
    if ( !combineCostumeEnt )
      goto LABEL_71;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_71;
    if ( (__int64)v23 < SLODWORD(itemIds->max_length) )
    {
      v26 = limitItemList->m_Items[v23];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      }
      v27 = combineCostumeEnt->fields.itemIds;
      if ( !v27 )
        goto LABEL_71;
      if ( v23 >= LODWORD(v27->max_length) )
        goto LABEL_72;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_71;
      if ( v23 >= LODWORD(itemNums->max_length) )
        goto LABEL_72;
      if ( !v26 )
        goto LABEL_71;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v26,
        *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
        v27->m_Items[v23],
        itemNums->m_Items[v23],
        0);
      limitItemList = this->fields.limitItemList;
    }
    ++v23;
    if ( !limitItemList )
      goto LABEL_71;
  }
  useNeedItemButton = (System_String_o *)this->fields.useNeedItemButton;
  if ( !useNeedItemButton )
    goto LABEL_71;
  ((void (__fastcall *)(System_String_o *, bool, const MethodInfo *))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
    useNeedItemButton,
    !isShortNeedItemOrQp,
    useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
  useNeedItemButton = (System_String_o *)this->fields.useNeedItemButton;
  if ( !useNeedItemButton )
    goto LABEL_71;
  v29 = isShortNeedItemOrQp;
  if ( v29 )
    v30 = 3;
  else
    v30 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v30,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v29 )
  {
    v31 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v31,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0);
    v32 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
    EventDelegate___ctor_49230836(v32, v31, 0);
    v35 = this->fields.useNeedItemButton;
    if ( !v35 )
      goto LABEL_71;
    useNeedItemButton = (System_String_o *)v35->fields.onClick;
    if ( !useNeedItemButton )
      goto LABEL_71;
    fields = useNeedItemButton->fields;
    v37 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(useNeedItemButton[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_71;
    klass_low = SLODWORD(useNeedItemButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)useNeedItemButton,
        (Il2CppObject *)v32,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(useNeedItemButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v39 + 32) = v32;
      sub_1C32BC4((CGThumbnailListItem_o *)(v39 + 32), (int32_t)v32, v33, v34);
    }
  }
  useNeedItemButton = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !useNeedItemButton )
    goto LABEL_71;
  useNeedItemButton = (System_String_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)useNeedItemButton,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !useNeedItemButton )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)useNeedItemButton,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventEnt, (int32_t)Entity, v41, v42);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5548/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0);
  v45 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v44, v45, 0);
  if ( !eventItemLabel )
    goto LABEL_71;
  UILabel__set_text(eventItemLabel, useNeedItemButton, 0);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  }
  v47 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v47 )
    goto LABEL_71;
  if ( !LODWORD(v47->max_length) )
    goto LABEL_72;
  v48 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v48 )
    goto LABEL_71;
  if ( !LODWORD(v48->max_length) )
LABEL_72:
    sub_1C32E84(useNeedItemButton);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
          v47->m_Items[0],
          v48->m_Items[0],
          0),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0)
    || (((void (__fastcall *)(System_String_o *, bool, const MethodInfo *))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
          useNeedItemButton,
          !isShortEvemtItem,
          useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0) )
  {
LABEL_71:
    sub_1C32E7C(useNeedItemButton);
  }
  v49 = isShortEvemtItem;
  if ( v49 )
    v50 = 3;
  else
    v50 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v50,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v49 )
  {
    v51 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v51,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0);
    v52 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
    EventDelegate___ctor_49230836(v52, v51, 0);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      useNeedItemButton = (System_String_o *)useEventItemButton->fields.onClick;
      if ( useNeedItemButton )
      {
        v56 = useNeedItemButton->fields;
        v57 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(useNeedItemButton[1].klass);
        if ( v56 )
        {
          v58 = SLODWORD(useNeedItemButton[1].klass);
          if ( (unsigned int)v58 >= *(_DWORD *)(*(_QWORD *)&v56 + 24LL) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)useNeedItemButton,
              (Il2CppObject *)v52,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v59 = *(_QWORD *)&v56 + 8 * v58;
            LODWORD(useNeedItemButton[1].klass) = v58 + 1;
            *(_QWORD *)(v59 + 32) = v52;
            sub_1C32BC4((CGThumbnailListItem_o *)(v59 + 32), (int32_t)v52, v53, v54);
          }
          return;
        }
      }
    }
    goto LABEL_71;
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    1,
    callBack->fields.method);
}