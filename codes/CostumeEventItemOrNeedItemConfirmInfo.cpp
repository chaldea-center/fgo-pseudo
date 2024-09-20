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
  __int64 v13; // x22
  int64_t UserId; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  UILabel_o *title; // x25
  UILabel_o *subTitle; // x25
  System_String_o *v20; // x26
  Il2CppObject *v21; // x0
  UILabel_o *needItemLabel; // x25
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v24; // x29
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v27; // x25
  struct System_Int32_array *v28; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v30; // w23
  __int64 v31; // x1
  EventDelegate_Callback_o *v32; // x24
  EventDelegate_o *v33; // x23
  int32_t v34; // w2
  int32_t v35; // w3
  struct UICommonButton_o *useNeedItemButton; // x8
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  Il2CppObject *Entity; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  UILabel_o *eventItemLabel; // x23
  System_String_o *v45; // x24
  Il2CppObject *v46; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x23
  struct System_Int32_array *v48; // x8
  struct System_Int32_array *v49; // x9
  _BOOL4 v50; // w20
  __int64 v51; // x1
  EventDelegate_Callback_o *v52; // x21
  EventDelegate_o *v53; // x20
  int32_t v54; // w2
  int32_t v55; // w3
  struct UICommonButton_o *useEventItemButton; // x8
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8

  if ( (byte_4A5EB2C & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__);
    sub_1B885B0(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__);
    sub_1B885B0(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
    sub_1B885B0(&StringLiteral_3827/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1B885B0(&StringLiteral_5572/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_5573/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/);
    sub_1B885B0(&StringLiteral_5574/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/);
    sub_1B885B0(&StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4A5EB2C = 1;
  }
  v13 = sub_1B887FC(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_63;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)callBack, v16, v17);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_63;
  UILabel__set_text(title, (System_String_o *)UserId, 0LL);
  subTitle = this->fields.subTitle;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5572/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = (int64_t)System_String__Format(v20, v21, 0LL);
  if ( !subTitle )
    goto LABEL_63;
  UILabel__set_text(subTitle, (System_String_o *)UserId, 0LL);
  needItemLabel = this->fields.needItemLabel;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5574/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
  if ( !needItemLabel )
    goto LABEL_63;
  UILabel__set_text(needItemLabel, (System_String_o *)UserId, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_63;
  v24 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v24 >= (int)max_length )
      break;
    if ( v24 >= max_length )
      goto LABEL_64;
    if ( !combineCostumeEnt )
      goto LABEL_63;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_63;
    if ( (__int64)v24 < (int)itemIds->max_length )
    {
      v27 = limitItemList->m_Items[v24];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v28 = combineCostumeEnt->fields.itemIds;
      if ( !v28 )
        goto LABEL_63;
      if ( v24 >= v28->max_length )
        goto LABEL_64;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_63;
      if ( v24 >= itemNums->max_length )
        goto LABEL_64;
      if ( !v27 )
        goto LABEL_63;
      LimitCntUpItemComponent__setLimitUpItemInfo(v27, UserId, v28->m_Items[v24 + 1], itemNums->m_Items[v24 + 1], 0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v24;
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
  v30 = isShortNeedItemOrQp;
  if ( v30 )
    v31 = 3LL;
  else
    v31 = 0LL;
  (*(void (__fastcall **)(int64_t, __int64, __int64, _QWORD))(*(_QWORD *)UserId + 536LL))(
    UserId,
    v31,
    1LL,
    *(_QWORD *)(*(_QWORD *)UserId + 544LL));
  if ( !v30 )
  {
    v32 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v32,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v33 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46786736(v33, v32, 0LL);
    useNeedItemButton = this->fields.useNeedItemButton;
    if ( !useNeedItemButton )
      goto LABEL_63;
    UserId = (int64_t)useNeedItemButton->fields.onClick;
    if ( !UserId )
      goto LABEL_63;
    v37 = *(_QWORD *)(UserId + 16);
    v38 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++*(_DWORD *)(UserId + 28);
    if ( !v37 )
      goto LABEL_63;
    v39 = *(int *)(UserId + 24);
    if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UserId,
        (Il2CppObject *)v33,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = v37 + 8 * v39;
      *(_DWORD *)(UserId + 24) = v39 + 1;
      *(_QWORD *)(v40 + 32) = v33;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)v33, v34, v35);
    }
  }
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_63;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !UserId )
    goto LABEL_63;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventEnt, (int32_t)Entity, v42, v43);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5573/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v46 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = (int64_t)System_String__Format(v45, v46, 0LL);
  if ( !eventItemLabel )
    goto LABEL_63;
  UILabel__set_text(eventItemLabel, (System_String_o *)UserId, 0LL);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v48 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v48 )
    goto LABEL_63;
  if ( !v48->max_length )
    goto LABEL_64;
  v49 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v49 )
    goto LABEL_63;
  if ( !v49->max_length )
LABEL_64:
    sub_1B88814(UserId, v15);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(eventItemIcon, UserId, v48->m_Items[1], v49->m_Items[1], 0LL),
        (UserId = (int64_t)this->fields.useEventItemButton) == 0)
    || ((*(void (__fastcall **)(int64_t, bool, _QWORD))(*(_QWORD *)UserId + 392LL))(
          UserId,
          !isShortEvemtItem,
          *(_QWORD *)(*(_QWORD *)UserId + 400LL)),
        (UserId = (int64_t)this->fields.useEventItemButton) == 0) )
  {
LABEL_63:
    sub_1B8880C(UserId, v15);
  }
  v50 = isShortEvemtItem;
  if ( v50 )
    v51 = 3LL;
  else
    v51 = 0LL;
  (*(void (__fastcall **)(int64_t, __int64, __int64, _QWORD))(*(_QWORD *)UserId + 536LL))(
    UserId,
    v51,
    1LL,
    *(_QWORD *)(*(_QWORD *)UserId + 544LL));
  if ( !v50 )
  {
    v52 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v52,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v53 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46786736(v53, v52, 0LL);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      UserId = (int64_t)useEventItemButton->fields.onClick;
      if ( UserId )
      {
        v57 = *(_QWORD *)(UserId + 16);
        v58 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++*(_DWORD *)(UserId + 28);
        if ( v57 )
        {
          v59 = *(int *)(UserId + 24);
          if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)UserId,
              (Il2CppObject *)v53,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = v57 + 8 * v59;
            *(_DWORD *)(UserId + 24) = v59 + 1;
            *(_QWORD *)(v60 + 32) = v53;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 32), (int32_t)v53, v54, v55);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    1LL,
    *(_QWORD *)&callBack->fields.extra_arg);
}