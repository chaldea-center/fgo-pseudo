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
  System_String_o *useNeedItemButton; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UILabel_o *title; // x23
  UILabel_o *subTitle; // x23
  System_String_o *v35; // x26
  Il2CppObject *v36; // x0
  UILabel_o *needItemLabel; // x23
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v39; // x27
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v42; // x26
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v45; // w24
  __int64 v46; // x1
  EventDelegate_Callback_o *v47; // x25
  EventDelegate_o *v48; // x24
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct UICommonButton_o *v51; // x8
  System_String_Fields fields; // x8
  _QWORD *v53; // x9
  __int64 klass_low; // x10
  __int64 v55; // x8
  Il2CppObject *Entity; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  UILabel_o *eventItemLabel; // x24
  System_String_o *v60; // x25
  Il2CppObject *v61; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x24
  struct System_Int32_array *v63; // x8
  struct System_Int32_array *v64; // x9
  _BOOL4 v65; // w20
  __int64 v66; // x1
  EventDelegate_Callback_o *v67; // x21
  EventDelegate_o *v68; // x20
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct UICommonButton_o *useEventItemButton; // x8
  System_String_Fields v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8

  if ( (byte_49BEBAD & 1) == 0 )
  {
    sub_1B4CF90(&EventDelegate_Callback_TypeInfo, combineCostumeEnt);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14);
    sub_1B4CF90(&EventDelegate_TypeInfo, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v17);
    sub_1B4CF90(&NetworkManager_TypeInfo, v18);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B4CF90(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__, v20);
    sub_1B4CF90(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__, v21);
    sub_1B4CF90(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo, v22);
    sub_1B4CF90(&StringLiteral_3732/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v23);
    sub_1B4CF90(&StringLiteral_5464/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, v24);
    sub_1B4CF90(&StringLiteral_5465/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, v25);
    sub_1B4CF90(&StringLiteral_5466/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, v26);
    sub_1B4CF90(&StringLiteral_5459/*"EVENT_COMBINE_COSTUME_ITEM"*/, v27);
    byte_49BEBAD = 1;
  }
  v28 = sub_1B4D1DC(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_71;
  *(_QWORD *)(v28 + 16) = callBack;
  sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 16), (int32_t)callBack, v31, v32);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_71;
  UILabel__set_text(title, useNeedItemButton, 0LL);
  subTitle = this->fields.subTitle;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5464/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v36 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5459/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  useNeedItemButton = System_String__Format(v35, v36, 0LL);
  if ( !subTitle )
    goto LABEL_71;
  UILabel__set_text(subTitle, useNeedItemButton, 0LL);
  needItemLabel = this->fields.needItemLabel;
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_5466/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
  if ( !needItemLabel )
    goto LABEL_71;
  UILabel__set_text(needItemLabel, useNeedItemButton, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_71;
  v39 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v39 >= (int)max_length )
      break;
    if ( v39 >= max_length )
      goto LABEL_72;
    if ( !combineCostumeEnt )
      goto LABEL_71;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_71;
    if ( (__int64)v39 < (int)itemIds->max_length )
    {
      v42 = limitItemList->m_Items[v39];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49B57A5 )
      {
        sub_1B4CF90(&NetworkManager_TypeInfo, v30);
        byte_49B57A5 = 1;
      }
      useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      }
      v43 = combineCostumeEnt->fields.itemIds;
      if ( !v43 )
        goto LABEL_71;
      if ( v39 >= v43->max_length )
        goto LABEL_72;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_71;
      if ( v39 >= itemNums->max_length )
        goto LABEL_72;
      if ( !v42 )
        goto LABEL_71;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v42,
        *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
        v43->m_Items[v39 + 1],
        itemNums->m_Items[v39 + 1],
        0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v39;
    if ( !limitItemList )
      goto LABEL_71;
  }
  useNeedItemButton = (System_String_o *)this->fields.useNeedItemButton;
  if ( !useNeedItemButton )
    goto LABEL_71;
  ((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
    useNeedItemButton,
    !isShortNeedItemOrQp,
    useNeedItemButton->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
  useNeedItemButton = (System_String_o *)this->fields.useNeedItemButton;
  if ( !useNeedItemButton )
    goto LABEL_71;
  v45 = isShortNeedItemOrQp;
  if ( v45 )
    v46 = 3LL;
  else
    v46 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    useNeedItemButton,
    v46,
    1LL,
    useNeedItemButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  if ( !v45 )
  {
    v47 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v47,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v48 = (EventDelegate_o *)sub_1B4D1DC(EventDelegate_TypeInfo);
    EventDelegate___ctor_47348588(v48, v47, 0LL);
    v51 = this->fields.useNeedItemButton;
    if ( !v51 )
      goto LABEL_71;
    useNeedItemButton = (System_String_o *)v51->fields.onClick;
    if ( !useNeedItemButton )
      goto LABEL_71;
    fields = useNeedItemButton->fields;
    v53 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(useNeedItemButton[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_71;
    klass_low = SLODWORD(useNeedItemButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)useNeedItemButton,
        (Il2CppObject *)v48,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(useNeedItemButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v55 + 32) = v48;
      sub_1B4CF34((CGThumbnailListItem_o *)(v55 + 32), (int32_t)v48, v49, v50);
    }
  }
  useNeedItemButton = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !useNeedItemButton )
    goto LABEL_71;
  useNeedItemButton = (System_String_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)useNeedItemButton,
                                           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !useNeedItemButton )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)useNeedItemButton,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.eventEnt, (int32_t)Entity, v57, v58);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_5465/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v61 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5459/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  useNeedItemButton = System_String__Format(v60, v61, 0LL);
  if ( !eventItemLabel )
    goto LABEL_71;
  UILabel__set_text(eventItemLabel, useNeedItemButton, 0LL);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v30);
    byte_49B57A5 = 1;
  }
  useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  }
  v63 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v63 )
    goto LABEL_71;
  if ( !v63->max_length )
    goto LABEL_72;
  v64 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v64 )
    goto LABEL_71;
  if ( !v64->max_length )
LABEL_72:
    sub_1B4D1F4(useNeedItemButton, v30);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
          v63->m_Items[1],
          v64->m_Items[1],
          0LL),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0LL)
    || (((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
          useNeedItemButton,
          !isShortEvemtItem,
          useNeedItemButton->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0LL) )
  {
LABEL_71:
    sub_1B4D1EC(useNeedItemButton, v30);
  }
  v65 = isShortEvemtItem;
  if ( v65 )
    v66 = 3LL;
  else
    v66 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    useNeedItemButton,
    v66,
    1LL,
    useNeedItemButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  if ( !v65 )
  {
    v67 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v67,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v68 = (EventDelegate_o *)sub_1B4D1DC(EventDelegate_TypeInfo);
    EventDelegate___ctor_47348588(v68, v67, 0LL);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      useNeedItemButton = (System_String_o *)useEventItemButton->fields.onClick;
      if ( useNeedItemButton )
      {
        v72 = useNeedItemButton->fields;
        v73 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(useNeedItemButton[1].klass);
        if ( v72 )
        {
          v74 = SLODWORD(useNeedItemButton[1].klass);
          if ( (unsigned int)v74 >= *(_DWORD *)(*(_QWORD *)&v72 + 24LL) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)useNeedItemButton,
              (Il2CppObject *)v68,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = *(_QWORD *)&v72 + 8 * v74;
            LODWORD(useNeedItemButton[1].klass) = v74 + 1;
            *(_QWORD *)(v75 + 32) = v68;
            sub_1B4CF34((CGThumbnailListItem_o *)(v75 + 32), (int32_t)v68, v69, v70);
          }
          return;
        }
      }
    }
    goto LABEL_71;
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
  struct System_Action_bool__o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1B4D1EC(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    0LL,
    *(_QWORD *)&callBack->fields.extra_arg);
}


void __fastcall CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___Set_b__1(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_bool__o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1B4D1EC(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    1LL,
    *(_QWORD *)&callBack->fields.extra_arg);
}