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
  __int64 v23; // x2
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v25; // x27
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v28; // x26
  struct System_Int32_array *v29; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v31; // w24
  __int64 v32; // x1
  EventDelegate_Callback_o *v33; // x25
  EventDelegate_o *v34; // x24
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UICommonButton_o *v37; // x8
  System_String_Fields fields; // x8
  _QWORD *v39; // x9
  __int64 klass_low; // x10
  __int64 v41; // x8
  Il2CppObject *Entity; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UILabel_o *eventItemLabel; // x24
  System_String_o *v46; // x25
  Il2CppObject *v47; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x24
  struct System_Int32_array *v49; // x8
  struct System_Int32_array *v50; // x9
  _BOOL4 v51; // w20
  __int64 v52; // x1
  EventDelegate_Callback_o *v53; // x21
  EventDelegate_o *v54; // x20
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct UICommonButton_o *useEventItemButton; // x8
  System_String_Fields v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8

  if ( (byte_4C2B405 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__);
    sub_1C2D490(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__);
    sub_1C2D490(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
    sub_1C2D490(&StringLiteral_3760/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C2D490(&StringLiteral_5539/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_5540/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/);
    sub_1C2D490(&StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/);
    sub_1C2D490(&StringLiteral_5534/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4C2B405 = 1;
  }
  v13 = sub_1C2D6DC(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_71;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)callBack, v16, v17);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_3760/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !title )
    goto LABEL_71;
  UILabel__set_text(title, useNeedItemButton, 0);
  subTitle = this->fields.subTitle;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5539/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0);
  v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5534/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v20, v21, 0);
  if ( !subTitle )
    goto LABEL_71;
  UILabel__set_text(subTitle, useNeedItemButton, 0);
  needItemLabel = this->fields.needItemLabel;
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0);
  if ( !needItemLabel )
    goto LABEL_71;
  UILabel__set_text(needItemLabel, useNeedItemButton, 0);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_71;
  v25 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(limitItemList->max_length);
    if ( (__int64)v25 >= (int)max_length_low )
      break;
    if ( v25 >= max_length_low )
      goto LABEL_72;
    if ( !combineCostumeEnt )
      goto LABEL_71;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_71;
    if ( (__int64)v25 < SLODWORD(itemIds->max_length) )
    {
      v28 = limitItemList->m_Items[v25];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      }
      v29 = combineCostumeEnt->fields.itemIds;
      if ( !v29 )
        goto LABEL_71;
      if ( v25 >= LODWORD(v29->max_length) )
        goto LABEL_72;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_71;
      if ( v25 >= LODWORD(itemNums->max_length) )
        goto LABEL_72;
      if ( !v28 )
        goto LABEL_71;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v28,
        *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
        v29->m_Items[v25],
        itemNums->m_Items[v25],
        0);
      limitItemList = this->fields.limitItemList;
    }
    ++v25;
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
  v31 = isShortNeedItemOrQp;
  if ( v31 )
    v32 = 3;
  else
    v32 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v32,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v31 )
  {
    v33 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v33,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0);
    v34 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
    EventDelegate___ctor_49170772(v34, v33, 0);
    v37 = this->fields.useNeedItemButton;
    if ( !v37 )
      goto LABEL_71;
    useNeedItemButton = (System_String_o *)v37->fields.onClick;
    if ( !useNeedItemButton )
      goto LABEL_71;
    fields = useNeedItemButton->fields;
    v39 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(useNeedItemButton[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_71;
    klass_low = SLODWORD(useNeedItemButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)useNeedItemButton,
        (Il2CppObject *)v34,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(useNeedItemButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v41 + 32) = v34;
      sub_1C2D434((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v34, v35, v36);
    }
  }
  useNeedItemButton = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !useNeedItemButton )
    goto LABEL_71;
  useNeedItemButton = (System_String_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)useNeedItemButton,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !useNeedItemButton )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)useNeedItemButton,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventEnt, (int32_t)Entity, v43, v44);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5540/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0);
  v47 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5534/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v46, v47, 0);
  if ( !eventItemLabel )
    goto LABEL_71;
  UILabel__set_text(eventItemLabel, useNeedItemButton, 0);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  }
  v49 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v49 )
    goto LABEL_71;
  if ( !LODWORD(v49->max_length) )
    goto LABEL_72;
  v50 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v50 )
    goto LABEL_71;
  if ( !LODWORD(v50->max_length) )
LABEL_72:
    sub_1C2D6F4(useNeedItemButton, v15, v23);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
          v49->m_Items[0],
          v50->m_Items[0],
          0),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0)
    || (((void (__fastcall *)(System_String_o *, bool, const MethodInfo *))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
          useNeedItemButton,
          !isShortEvemtItem,
          useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0) )
  {
LABEL_71:
    sub_1C2D6EC(useNeedItemButton, v15);
  }
  v51 = isShortEvemtItem;
  if ( v51 )
    v52 = 3;
  else
    v52 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v52,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v51 )
  {
    v53 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v53,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0);
    v54 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
    EventDelegate___ctor_49170772(v54, v53, 0);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      useNeedItemButton = (System_String_o *)useEventItemButton->fields.onClick;
      if ( useNeedItemButton )
      {
        v58 = useNeedItemButton->fields;
        v59 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(useNeedItemButton[1].klass);
        if ( v58 )
        {
          v60 = SLODWORD(useNeedItemButton[1].klass);
          if ( (unsigned int)v60 >= *(_DWORD *)(*(_QWORD *)&v58 + 24LL) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)useNeedItemButton,
              (Il2CppObject *)v54,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v61 = *(_QWORD *)&v58 + 8 * v60;
            LODWORD(useNeedItemButton[1].klass) = v60 + 1;
            *(_QWORD *)(v61 + 32) = v54;
            sub_1C2D434((CGThumbnailListItem_o *)(v61 + 32), (int32_t)v54, v55, v56);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    1,
    callBack->fields.method);
}