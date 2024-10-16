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
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  UILabel_o *title; // x25
  UILabel_o *subTitle; // x25
  System_String_o *v35; // x26
  Il2CppObject *v36; // x0
  UILabel_o *needItemLabel; // x25
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v39; // x29
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v42; // x25
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v45; // w23
  __int64 v46; // x1
  EventDelegate_Callback_o *v47; // x24
  EventDelegate_o *v48; // x23
  int32_t v49; // w2
  int32_t v50; // w3
  struct UICommonButton_o *useNeedItemButton; // x8
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  Il2CppObject *Entity; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  UILabel_o *eventItemLabel; // x23
  System_String_o *v60; // x24
  Il2CppObject *v61; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x23
  struct System_Int32_array *v63; // x8
  struct System_Int32_array *v64; // x9
  _BOOL4 v65; // w20
  __int64 v66; // x1
  EventDelegate_Callback_o *v67; // x21
  EventDelegate_o *v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  struct UICommonButton_o *useEventItemButton; // x8
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8

  if ( (byte_4AB9823 & 1) == 0 )
  {
    sub_1BAB41C(&EventDelegate_Callback_TypeInfo, combineCostumeEnt);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_1BAB41C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14);
    sub_1BAB41C(&EventDelegate_TypeInfo, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v17);
    sub_1BAB41C(&NetworkManager_TypeInfo, v18);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BAB41C(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__, v20);
    sub_1BAB41C(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__, v21);
    sub_1BAB41C(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo, v22);
    sub_1BAB41C(&StringLiteral_3825/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v23);
    sub_1BAB41C(&StringLiteral_5574/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, v24);
    sub_1BAB41C(&StringLiteral_5575/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, v25);
    sub_1BAB41C(&StringLiteral_5576/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, v26);
    sub_1BAB41C(&StringLiteral_5569/*"EVENT_COMBINE_COSTUME_ITEM"*/, v27);
    byte_4AB9823 = 1;
  }
  v28 = sub_1BAB668(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_63;
  *(_QWORD *)(v28 + 16) = callBack;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)callBack, v31, v32);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3825/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_63;
  UILabel__set_text(title, (System_String_o *)UserId, 0LL);
  subTitle = this->fields.subTitle;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5574/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v36 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5569/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = (int64_t)System_String__Format(v35, v36, 0LL);
  if ( !subTitle )
    goto LABEL_63;
  UILabel__set_text(subTitle, (System_String_o *)UserId, 0LL);
  needItemLabel = this->fields.needItemLabel;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5576/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
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
    v47 = (EventDelegate_Callback_o *)sub_1BAB668(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v47,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v48 = (EventDelegate_o *)sub_1BAB668(EventDelegate_TypeInfo);
    EventDelegate___ctor_47033092(v48, v47, 0LL);
    useNeedItemButton = this->fields.useNeedItemButton;
    if ( !useNeedItemButton )
      goto LABEL_63;
    UserId = (int64_t)useNeedItemButton->fields.onClick;
    if ( !UserId )
      goto LABEL_63;
    v52 = *(_QWORD *)(UserId + 16);
    v53 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++*(_DWORD *)(UserId + 28);
    if ( !v52 )
      goto LABEL_63;
    v54 = *(int *)(UserId + 24);
    if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UserId,
        (Il2CppObject *)v48,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = v52 + 8 * v54;
      *(_DWORD *)(UserId + 24) = v54 + 1;
      *(_QWORD *)(v55 + 32) = v48;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)v48, v49, v50);
    }
  }
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_63;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !UserId )
    goto LABEL_63;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_3163D90 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.eventEnt, (int32_t)Entity, v57, v58);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_5575/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v61 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5569/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = (int64_t)System_String__Format(v60, v61, 0LL);
  if ( !eventItemLabel )
    goto LABEL_63;
  UILabel__set_text(eventItemLabel, (System_String_o *)UserId, 0LL);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v63 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v63 )
    goto LABEL_63;
  if ( !v63->max_length )
    goto LABEL_64;
  v64 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v64 )
    goto LABEL_63;
  if ( !v64->max_length )
LABEL_64:
    sub_1BAB680(UserId, v30);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(eventItemIcon, UserId, v63->m_Items[1], v64->m_Items[1], 0LL),
        (UserId = (int64_t)this->fields.useEventItemButton) == 0)
    || ((*(void (__fastcall **)(int64_t, bool, _QWORD))(*(_QWORD *)UserId + 392LL))(
          UserId,
          !isShortEvemtItem,
          *(_QWORD *)(*(_QWORD *)UserId + 400LL)),
        (UserId = (int64_t)this->fields.useEventItemButton) == 0) )
  {
LABEL_63:
    sub_1BAB678(UserId, v30);
  }
  v65 = isShortEvemtItem;
  if ( v65 )
    v66 = 3LL;
  else
    v66 = 0LL;
  (*(void (__fastcall **)(int64_t, __int64, __int64, _QWORD))(*(_QWORD *)UserId + 536LL))(
    UserId,
    v66,
    1LL,
    *(_QWORD *)(*(_QWORD *)UserId + 544LL));
  if ( !v65 )
  {
    v67 = (EventDelegate_Callback_o *)sub_1BAB668(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v67,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v68 = (EventDelegate_o *)sub_1BAB668(EventDelegate_TypeInfo);
    EventDelegate___ctor_47033092(v68, v67, 0LL);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      UserId = (int64_t)useEventItemButton->fields.onClick;
      if ( UserId )
      {
        v72 = *(_QWORD *)(UserId + 16);
        v73 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++*(_DWORD *)(UserId + 28);
        if ( v72 )
        {
          v74 = *(int *)(UserId + 24);
          if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)UserId,
              (Il2CppObject *)v68,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = v72 + 8 * v74;
            *(_DWORD *)(UserId + 24) = v74 + 1;
            *(_QWORD *)(v75 + 32) = v68;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v68, v69, v70);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    1LL,
    *(_QWORD *)&callBack->fields.extra_arg);
}