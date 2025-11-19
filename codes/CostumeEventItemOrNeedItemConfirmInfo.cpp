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
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UILabel_o *title; // x23
  UILabel_o *subTitle; // x23
  System_String_o *v20; // x26
  Il2CppObject *v21; // x0
  UILabel_o *needItemLabel; // x23
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v24; // x27
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v27; // x26
  struct System_Int32_array *v28; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v30; // w24
  __int64 v31; // x1
  EventDelegate_Callback_o *v32; // x25
  EventDelegate_o *v33; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct UICommonButton_o *v36; // x8
  System_String_Fields fields; // x8
  _QWORD *v38; // x9
  __int64 klass_low; // x10
  __int64 v40; // x8
  Il2CppObject *Entity; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UILabel_o *eventItemLabel; // x24
  System_String_o *v45; // x25
  Il2CppObject *v46; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x24
  struct System_Int32_array *v48; // x8
  struct System_Int32_array *v49; // x9
  _BOOL4 v50; // w20
  __int64 v51; // x1
  EventDelegate_Callback_o *v52; // x21
  EventDelegate_o *v53; // x20
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct UICommonButton_o *useEventItemButton; // x8
  System_String_Fields v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8

  if ( (byte_4CBA507 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__);
    sub_1C6BA08(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__);
    sub_1C6BA08(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_3759/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C6BA08(&StringLiteral_5538/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_5539/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/);
    sub_1C6BA08(&StringLiteral_5540/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/);
    sub_1C6BA08(&StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4CBA507 = 1;
  }
  v13 = sub_1C6BC54(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_71;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)callBack, v16, v17);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !title )
    goto LABEL_71;
  UILabel__set_text(title, useNeedItemButton, 0);
  subTitle = this->fields.subTitle;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5538/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0);
  v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v20, v21, 0);
  if ( !subTitle )
    goto LABEL_71;
  UILabel__set_text(subTitle, useNeedItemButton, 0);
  needItemLabel = this->fields.needItemLabel;
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_5540/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0);
  if ( !needItemLabel )
    goto LABEL_71;
  UILabel__set_text(needItemLabel, useNeedItemButton, 0);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_71;
  v24 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(limitItemList->max_length);
    if ( (__int64)v24 >= (int)max_length_low )
      break;
    if ( v24 >= max_length_low )
      goto LABEL_72;
    if ( !combineCostumeEnt )
      goto LABEL_71;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_71;
    if ( (__int64)v24 < SLODWORD(itemIds->max_length) )
    {
      v27 = limitItemList->m_Items[v24];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      }
      v28 = combineCostumeEnt->fields.itemIds;
      if ( !v28 )
        goto LABEL_71;
      if ( v24 >= LODWORD(v28->max_length) )
        goto LABEL_72;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_71;
      if ( v24 >= LODWORD(itemNums->max_length) )
        goto LABEL_72;
      if ( !v27 )
        goto LABEL_71;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v27,
        *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
        v28->m_Items[v24],
        itemNums->m_Items[v24],
        0);
      limitItemList = this->fields.limitItemList;
    }
    ++v24;
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
  v30 = isShortNeedItemOrQp;
  if ( v30 )
    v31 = 3;
  else
    v31 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v31,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v30 )
  {
    v32 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v32,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0);
    v33 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
    EventDelegate___ctor_49576072(v33, v32, 0);
    v36 = this->fields.useNeedItemButton;
    if ( !v36 )
      goto LABEL_71;
    useNeedItemButton = (System_String_o *)v36->fields.onClick;
    if ( !useNeedItemButton )
      goto LABEL_71;
    fields = useNeedItemButton->fields;
    v38 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(useNeedItemButton[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_71;
    klass_low = SLODWORD(useNeedItemButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)useNeedItemButton,
        (Il2CppObject *)v33,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(useNeedItemButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v40 + 32) = v33;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 32), (int32_t)v33, v34, v35);
    }
  }
  useNeedItemButton = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !useNeedItemButton )
    goto LABEL_71;
  useNeedItemButton = (System_String_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)useNeedItemButton,
                                           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !useNeedItemButton )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)useNeedItemButton,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventEnt, (int32_t)Entity, v42, v43);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5539/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0);
  v46 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v45, v46, 0);
  if ( !eventItemLabel )
    goto LABEL_71;
  UILabel__set_text(eventItemLabel, useNeedItemButton, 0);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  }
  v48 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v48 )
    goto LABEL_71;
  if ( !LODWORD(v48->max_length) )
    goto LABEL_72;
  v49 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v49 )
    goto LABEL_71;
  if ( !LODWORD(v49->max_length) )
LABEL_72:
    sub_1C6BC68(useNeedItemButton);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
          v48->m_Items[0],
          v49->m_Items[0],
          0),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0)
    || (((void (__fastcall *)(System_String_o *, bool, const MethodInfo *))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
          useNeedItemButton,
          !isShortEvemtItem,
          useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0) )
  {
LABEL_71:
    sub_1C6BC60(useNeedItemButton, v15);
  }
  v50 = isShortEvemtItem;
  if ( v50 )
    v51 = 3;
  else
    v51 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v51,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v50 )
  {
    v52 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v52,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0);
    v53 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
    EventDelegate___ctor_49576072(v53, v52, 0);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      useNeedItemButton = (System_String_o *)useEventItemButton->fields.onClick;
      if ( useNeedItemButton )
      {
        v57 = useNeedItemButton->fields;
        v58 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(useNeedItemButton[1].klass);
        if ( v57 )
        {
          v59 = SLODWORD(useNeedItemButton[1].klass);
          if ( (unsigned int)v59 >= *(_DWORD *)(*(_QWORD *)&v57 + 24LL) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)useNeedItemButton,
              (Il2CppObject *)v53,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = *(_QWORD *)&v57 + 8 * v59;
            LODWORD(useNeedItemButton[1].klass) = v59 + 1;
            *(_QWORD *)(v60 + 32) = v53;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v60 + 32), (int32_t)v53, v54, v55);
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
    sub_1C6BC60(this, method);
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
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    1,
    callBack->fields.method);
}