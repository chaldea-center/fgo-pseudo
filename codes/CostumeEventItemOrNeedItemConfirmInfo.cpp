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
  int64_t UserId; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  UILabel_o *title; // x25
  UILabel_o *subTitle; // x25
  System_String_o *v34; // x26
  Il2CppObject *v35; // x0
  UILabel_o *needItemLabel; // x25
  __int64 v37; // x1
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v39; // x29
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v42; // x25
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v45; // w23
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x2
  EventDelegate_Callback_o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  EventDelegate_o *v52; // x23
  int32_t v53; // w2
  int32_t v54; // w3
  struct UICommonButton_o *useNeedItemButton; // x8
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8
  Il2CppObject *Entity; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  UILabel_o *eventItemLabel; // x23
  System_String_o *v64; // x24
  Il2CppObject *v65; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x23
  struct System_Int32_array *v67; // x8
  struct System_Int32_array *v68; // x9
  _BOOL4 v69; // w20
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x2
  EventDelegate_Callback_o *v73; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  EventDelegate_o *v76; // x20
  int32_t v77; // w2
  int32_t v78; // w3
  struct UICommonButton_o *useEventItemButton; // x8
  __int64 v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  __int64 v83; // x8

  if ( (byte_49FFD43 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, combineCostumeEnt);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14);
    sub_1B640C8(&EventDelegate_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&NetworkManager_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__, v20);
    sub_1B640C8(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__, v21);
    sub_1B640C8(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_3804/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v23);
    sub_1B640C8(&StringLiteral_5546/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, v24);
    sub_1B640C8(&StringLiteral_5547/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, v25);
    sub_1B640C8(&StringLiteral_5548/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, v26);
    sub_1B640C8(&StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, v27);
    byte_49FFD43 = 1;
  }
  v28 = sub_1B64314(
          CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo,
          combineCostumeEnt,
          eventCombineCostumeEnt);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_63;
  *(_QWORD *)(v28 + 16) = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)callBack, v30, v31);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_63;
  UILabel__set_text(title, (System_String_o *)UserId, 0LL);
  subTitle = this->fields.subTitle;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5546/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v35 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = (int64_t)System_String__Format(v34, v35, 0LL);
  if ( !subTitle )
    goto LABEL_63;
  UILabel__set_text(subTitle, (System_String_o *)UserId, 0LL);
  needItemLabel = this->fields.needItemLabel;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5548/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
  if ( !needItemLabel )
    goto LABEL_63;
  UILabel__set_text(needItemLabel, (System_String_o *)UserId, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_63;
  v39 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v39 >= (int)max_length )
      break;
    if ( v39 >= max_length )
      goto LABEL_64;
    if ( !combineCostumeEnt )
      goto LABEL_63;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_63;
    if ( (__int64)v39 < (int)itemIds->max_length )
    {
      v42 = limitItemList->m_Items[v39];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v43 = combineCostumeEnt->fields.itemIds;
      if ( !v43 )
        goto LABEL_63;
      if ( v39 >= v43->max_length )
        goto LABEL_64;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_63;
      if ( v39 >= itemNums->max_length )
        goto LABEL_64;
      if ( !v42 )
        goto LABEL_63;
      LimitCntUpItemComponent__setLimitUpItemInfo(v42, UserId, v43->m_Items[v39 + 1], itemNums->m_Items[v39 + 1], 0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v39;
    if ( !limitItemList )
      goto LABEL_63;
  }
  UserId = (int64_t)this->fields.useNeedItemButton;
  if ( !UserId )
    goto LABEL_63;
  (*(void (__fastcall **)(int64_t, bool, _QWORD))(*(_QWORD *)UserId + 392LL))(
    UserId,
    !isShortNeedItemOrQp,
    *(_QWORD *)(*(_QWORD *)UserId + 400LL));
  UserId = (int64_t)this->fields.useNeedItemButton;
  if ( !UserId )
    goto LABEL_63;
  v45 = isShortNeedItemOrQp;
  if ( v45 )
    v46 = 3LL;
  else
    v46 = 0LL;
  (*(void (__fastcall **)(int64_t, __int64, __int64, _QWORD))(*(_QWORD *)UserId + 536LL))(
    UserId,
    v46,
    1LL,
    *(_QWORD *)(*(_QWORD *)UserId + 544LL));
  if ( !v45 )
  {
    v49 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v47, v48);
    EventDelegate_Callback___ctor(
      v49,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v52 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v50, v51);
    EventDelegate___ctor_46508544(v52, v49, 0LL);
    useNeedItemButton = this->fields.useNeedItemButton;
    if ( !useNeedItemButton )
      goto LABEL_63;
    UserId = (int64_t)useNeedItemButton->fields.onClick;
    if ( !UserId )
      goto LABEL_63;
    v56 = *(_QWORD *)(UserId + 16);
    v57 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++*(_DWORD *)(UserId + 28);
    if ( !v56 )
      goto LABEL_63;
    v58 = *(int *)(UserId + 24);
    if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UserId,
        (Il2CppObject *)v52,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = v56 + 8 * v58;
      *(_DWORD *)(UserId + 24) = v58 + 1;
      *(_QWORD *)(v59 + 32) = v52;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 32), (int32_t)v52, v53, v54);
    }
  }
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_63;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !UserId )
    goto LABEL_63;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventEnt, (int32_t)Entity, v61, v62);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_5547/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v65 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = (int64_t)System_String__Format(v64, v65, 0LL);
  if ( !eventItemLabel )
    goto LABEL_63;
  UILabel__set_text(eventItemLabel, (System_String_o *)UserId, 0LL);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v67 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v67 )
    goto LABEL_63;
  if ( !v67->max_length )
    goto LABEL_64;
  v68 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v68 )
    goto LABEL_63;
  if ( !v68->max_length )
LABEL_64:
    sub_1B6432C(UserId, v37);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(eventItemIcon, UserId, v67->m_Items[1], v68->m_Items[1], 0LL),
        (UserId = (int64_t)this->fields.useEventItemButton) == 0)
    || ((*(void (__fastcall **)(int64_t, bool, _QWORD))(*(_QWORD *)UserId + 392LL))(
          UserId,
          !isShortEvemtItem,
          *(_QWORD *)(*(_QWORD *)UserId + 400LL)),
        (UserId = (int64_t)this->fields.useEventItemButton) == 0) )
  {
LABEL_63:
    sub_1B64324(UserId);
  }
  v69 = isShortEvemtItem;
  if ( v69 )
    v70 = 3LL;
  else
    v70 = 0LL;
  (*(void (__fastcall **)(int64_t, __int64, __int64, _QWORD))(*(_QWORD *)UserId + 536LL))(
    UserId,
    v70,
    1LL,
    *(_QWORD *)(*(_QWORD *)UserId + 544LL));
  if ( !v69 )
  {
    v73 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v71, v72);
    EventDelegate_Callback___ctor(
      v73,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v76 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v74, v75);
    EventDelegate___ctor_46508544(v76, v73, 0LL);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      UserId = (int64_t)useEventItemButton->fields.onClick;
      if ( UserId )
      {
        v80 = *(_QWORD *)(UserId + 16);
        v81 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++*(_DWORD *)(UserId + 28);
        if ( v80 )
        {
          v82 = *(int *)(UserId + 24);
          if ( (unsigned int)v82 >= *(_DWORD *)(v80 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)UserId,
              (Il2CppObject *)v76,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
          }
          else
          {
            v83 = v80 + 8 * v82;
            *(_DWORD *)(UserId + 24) = v82 + 1;
            *(_QWORD *)(v83 + 32) = v76;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 32), (int32_t)v76, v77, v78);
          }
          return;
        }
      }
    }
    goto LABEL_63;
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    1LL,
    *(_QWORD *)&callBack->fields.extra_arg);
}