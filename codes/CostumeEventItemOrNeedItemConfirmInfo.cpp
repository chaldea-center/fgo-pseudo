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
  if ( (byte_4D2662A & 1) == 0 )
  {
    this = (CostumeEventItemOrNeedItemConfirmInfo_o *)sub_1C94098(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4D2662A = 1;
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
    sub_1C942F0(this, method);
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
  Il2CppObject *v13; // x22
  System_String_o *useNeedItemButton; // x0
  __int64 v15; // x1
  UILabel_o *title; // x23
  UILabel_o *subTitle; // x23
  System_String_o *v18; // x26
  Il2CppObject *v19; // x0
  UILabel_o *needItemLabel; // x23
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v22; // x27
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v25; // x26
  struct System_Int32_array *v26; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v28; // w24
  __int64 v29; // x1
  EventDelegate_Callback_o *v30; // x25
  EventDelegate_o *v31; // x24
  struct UICommonButton_o *v32; // x8
  System_String_Fields fields; // x8
  _QWORD *v34; // x9
  __int64 klass_low; // x10
  __int64 v36; // x8
  Il2CppObject *Entity; // x0
  UILabel_o *eventItemLabel; // x24
  System_String_o *v39; // x25
  Il2CppObject *v40; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x24
  struct System_Int32_array *v42; // x8
  struct System_Int32_array *v43; // x9
  _BOOL4 v44; // w20
  __int64 v45; // x1
  EventDelegate_Callback_o *v46; // x21
  EventDelegate_o *v47; // x20
  struct UICommonButton_o *useEventItemButton; // x8
  System_String_Fields v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8

  if ( (byte_4D26629 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__);
    sub_1C94098(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__);
    sub_1C94098(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
    sub_1C94098(&StringLiteral_3772/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C94098(&StringLiteral_5552/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1C94098(&StringLiteral_5553/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/);
    sub_1C94098(&StringLiteral_5554/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/);
    sub_1C94098(&StringLiteral_5547/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4D26629 = 1;
  }
  v13 = (Il2CppObject *)sub_1C942E4(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_71;
  v13[1].klass = (Il2CppClass *)callBack;
  sub_1C9403C(&v13[1], callBack);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_3772/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !title )
    goto LABEL_71;
  UILabel__set_text(title, useNeedItemButton, 0);
  subTitle = this->fields.subTitle;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5552/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0);
  v19 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5547/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v18, v19, 0);
  if ( !subTitle )
    goto LABEL_71;
  UILabel__set_text(subTitle, useNeedItemButton, 0);
  needItemLabel = this->fields.needItemLabel;
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_5554/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0);
  if ( !needItemLabel )
    goto LABEL_71;
  UILabel__set_text(needItemLabel, useNeedItemButton, 0);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_71;
  v22 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(limitItemList->max_length);
    if ( (__int64)v22 >= (int)max_length_low )
      break;
    if ( v22 >= max_length_low )
      goto LABEL_72;
    if ( !combineCostumeEnt )
      goto LABEL_71;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_71;
    if ( (__int64)v22 < SLODWORD(itemIds->max_length) )
    {
      v25 = limitItemList->m_Items[v22];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      }
      v26 = combineCostumeEnt->fields.itemIds;
      if ( !v26 )
        goto LABEL_71;
      if ( v22 >= LODWORD(v26->max_length) )
        goto LABEL_72;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_71;
      if ( v22 >= LODWORD(itemNums->max_length) )
        goto LABEL_72;
      if ( !v25 )
        goto LABEL_71;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v25,
        *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
        v26->m_Items[v22],
        itemNums->m_Items[v22],
        0);
      limitItemList = this->fields.limitItemList;
    }
    ++v22;
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
  v28 = isShortNeedItemOrQp;
  if ( v28 )
    v29 = 3;
  else
    v29 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v29,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v28 )
  {
    v30 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v30,
      v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0);
    v31 = (EventDelegate_o *)sub_1C942E4(EventDelegate_TypeInfo);
    EventDelegate___ctor_49964596(v31, v30, 0);
    v32 = this->fields.useNeedItemButton;
    if ( !v32 )
      goto LABEL_71;
    useNeedItemButton = (System_String_o *)v32->fields.onClick;
    if ( !useNeedItemButton )
      goto LABEL_71;
    fields = useNeedItemButton->fields;
    v34 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(useNeedItemButton[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_71;
    klass_low = SLODWORD(useNeedItemButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)useNeedItemButton,
        (Il2CppObject *)v31,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(useNeedItemButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v36 + 32) = v31;
      sub_1C9403C(v36 + 32, v31);
    }
  }
  useNeedItemButton = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !useNeedItemButton )
    goto LABEL_71;
  useNeedItemButton = (System_String_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)useNeedItemButton,
                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !useNeedItemButton )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)useNeedItemButton,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1C9403C(&this->fields.eventEnt, Entity);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5553/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0);
  v40 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5547/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v39, v40, 0);
  if ( !eventItemLabel )
    goto LABEL_71;
  UILabel__set_text(eventItemLabel, useNeedItemButton, 0);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  }
  v42 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v42 )
    goto LABEL_71;
  if ( !LODWORD(v42->max_length) )
    goto LABEL_72;
  v43 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v43 )
    goto LABEL_71;
  if ( !LODWORD(v43->max_length) )
LABEL_72:
    sub_1C942F8(useNeedItemButton);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
          v42->m_Items[0],
          v43->m_Items[0],
          0),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0)
    || (((void (__fastcall *)(System_String_o *, bool, const MethodInfo *))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
          useNeedItemButton,
          !isShortEvemtItem,
          useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0) )
  {
LABEL_71:
    sub_1C942F0(useNeedItemButton, v15);
  }
  v44 = isShortEvemtItem;
  if ( v44 )
    v45 = 3;
  else
    v45 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v45,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v44 )
  {
    v46 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v46,
      v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0);
    v47 = (EventDelegate_o *)sub_1C942E4(EventDelegate_TypeInfo);
    EventDelegate___ctor_49964596(v47, v46, 0);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      useNeedItemButton = (System_String_o *)useEventItemButton->fields.onClick;
      if ( useNeedItemButton )
      {
        v49 = useNeedItemButton->fields;
        v50 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(useNeedItemButton[1].klass);
        if ( v49 )
        {
          v51 = SLODWORD(useNeedItemButton[1].klass);
          if ( (unsigned int)v51 >= *(_DWORD *)(*(_QWORD *)&v49 + 24LL) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)useNeedItemButton,
              (Il2CppObject *)v47,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = *(_QWORD *)&v49 + 8 * v51;
            LODWORD(useNeedItemButton[1].klass) = v51 + 1;
            *(_QWORD *)(v52 + 32) = v47;
            sub_1C9403C(v52 + 32, v47);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    1,
    callBack->fields.method);
}