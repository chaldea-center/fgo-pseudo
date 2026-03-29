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
  if ( (byte_4D34CB5 & 1) == 0 )
  {
    this = (CostumeEventItemOrNeedItemConfirmInfo_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4D34CB5 = 1;
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
    sub_1C93D2C(this, method);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UILabel_o *title; // x23
  UILabel_o *subTitle; // x23
  System_String_o *v24; // x26
  Il2CppObject *v25; // x0
  UILabel_o *needItemLabel; // x23
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v28; // x27
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v31; // x26
  struct System_Int32_array *v32; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v34; // w24
  __int64 v35; // x1
  EventDelegate_Callback_o *v36; // x25
  EventDelegate_o *v37; // x24
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct UICommonButton_o *v44; // x8
  System_String_Fields fields; // x8
  _QWORD *v46; // x9
  __int64 klass_low; // x10
  __int64 v48; // x8
  Il2CppObject *Entity; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  UILabel_o *eventItemLabel; // x24
  System_String_o *v57; // x25
  Il2CppObject *v58; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x24
  struct System_Int32_array *v60; // x8
  struct System_Int32_array *v61; // x9
  _BOOL4 v62; // w20
  __int64 v63; // x1
  EventDelegate_Callback_o *v64; // x21
  EventDelegate_o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct UICommonButton_o *useEventItemButton; // x8
  System_String_Fields v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8

  if ( (byte_4D34CB4 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__);
    sub_1C93AD4(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__);
    sub_1C93AD4(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_3789/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C93AD4(&StringLiteral_5572/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_5573/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/);
    sub_1C93AD4(&StringLiteral_5574/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/);
    sub_1C93AD4(&StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4D34CB4 = 1;
  }
  v13 = sub_1C93D20(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_71;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)callBack, v16, v17, v18, v19, v20, v21);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !title )
    goto LABEL_71;
  UILabel__set_text(title, useNeedItemButton, 0);
  subTitle = this->fields.subTitle;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5572/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0);
  v25 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v24, v25, 0);
  if ( !subTitle )
    goto LABEL_71;
  UILabel__set_text(subTitle, useNeedItemButton, 0);
  needItemLabel = this->fields.needItemLabel;
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_5574/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0);
  if ( !needItemLabel )
    goto LABEL_71;
  UILabel__set_text(needItemLabel, useNeedItemButton, 0);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_71;
  v28 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(limitItemList->max_length);
    if ( (__int64)v28 >= (int)max_length_low )
      break;
    if ( v28 >= max_length_low )
      goto LABEL_72;
    if ( !combineCostumeEnt )
      goto LABEL_71;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_71;
    if ( (__int64)v28 < SLODWORD(itemIds->max_length) )
    {
      v31 = limitItemList->m_Items[v28];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      }
      v32 = combineCostumeEnt->fields.itemIds;
      if ( !v32 )
        goto LABEL_71;
      if ( v28 >= LODWORD(v32->max_length) )
        goto LABEL_72;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_71;
      if ( v28 >= LODWORD(itemNums->max_length) )
        goto LABEL_72;
      if ( !v31 )
        goto LABEL_71;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v31,
        *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
        v32->m_Items[v28],
        itemNums->m_Items[v28],
        0);
      limitItemList = this->fields.limitItemList;
    }
    ++v28;
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
  v34 = isShortNeedItemOrQp;
  if ( v34 )
    v35 = 3;
  else
    v35 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v35,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v34 )
  {
    v36 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v36,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0);
    v37 = (EventDelegate_o *)sub_1C93D20(EventDelegate_TypeInfo);
    EventDelegate___ctor_49997180(v37, v36, 0);
    v44 = this->fields.useNeedItemButton;
    if ( !v44 )
      goto LABEL_71;
    useNeedItemButton = (System_String_o *)v44->fields.onClick;
    if ( !useNeedItemButton )
      goto LABEL_71;
    fields = useNeedItemButton->fields;
    v46 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(useNeedItemButton[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_71;
    klass_low = SLODWORD(useNeedItemButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)useNeedItemButton,
        (Il2CppObject *)v37,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(useNeedItemButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v48 + 32) = v37;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 32), (int32_t)v37, v38, v39, v40, v41, v42, v43);
    }
  }
  useNeedItemButton = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !useNeedItemButton )
    goto LABEL_71;
  useNeedItemButton = (System_String_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)useNeedItemButton,
                                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !useNeedItemButton )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)useNeedItemButton,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventEnt, (int32_t)Entity, v50, v51, v52, v53, v54, v55);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_5573/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0);
  v58 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  useNeedItemButton = System_String__Format(v57, v58, 0);
  if ( !eventItemLabel )
    goto LABEL_71;
  UILabel__set_text(eventItemLabel, useNeedItemButton, 0);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  }
  v60 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v60 )
    goto LABEL_71;
  if ( !LODWORD(v60->max_length) )
    goto LABEL_72;
  v61 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v61 )
    goto LABEL_71;
  if ( !LODWORD(v61->max_length) )
LABEL_72:
    sub_1C93D34(useNeedItemButton);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
          v60->m_Items[0],
          v61->m_Items[0],
          0),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0)
    || (((void (__fastcall *)(System_String_o *, bool, const MethodInfo *))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
          useNeedItemButton,
          !isShortEvemtItem,
          useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0) )
  {
LABEL_71:
    sub_1C93D2C(useNeedItemButton, v15);
  }
  v62 = isShortEvemtItem;
  if ( v62 )
    v63 = 3;
  else
    v63 = 0;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    useNeedItemButton,
    v63,
    1,
    useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  if ( !v62 )
  {
    v64 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v64,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0);
    v65 = (EventDelegate_o *)sub_1C93D20(EventDelegate_TypeInfo);
    EventDelegate___ctor_49997180(v65, v64, 0);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      useNeedItemButton = (System_String_o *)useEventItemButton->fields.onClick;
      if ( useNeedItemButton )
      {
        v73 = useNeedItemButton->fields;
        v74 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(useNeedItemButton[1].klass);
        if ( v73 )
        {
          v75 = SLODWORD(useNeedItemButton[1].klass);
          if ( (unsigned int)v75 >= *(_DWORD *)(*(_QWORD *)&v73 + 24LL) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)useNeedItemButton,
              (Il2CppObject *)v65,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = *(_QWORD *)&v73 + 8 * v75;
            LODWORD(useNeedItemButton[1].klass) = v75 + 1;
            *(_QWORD *)(v76 + 32) = v65;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v76 + 32), (int32_t)v65, v66, v67, v68, v69, v70, v71);
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
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    1,
    callBack->fields.method);
}