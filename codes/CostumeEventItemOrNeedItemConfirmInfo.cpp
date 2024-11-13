void __fastcall CostumeEventItemOrNeedItemConfirmInfo___ctor(
        CostumeEventItemOrNeedItemConfirmInfo_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x22
  int64_t UserId; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  UILabel_o *title; // x25
  UILabel_o *subTitle; // x25
  System_String_o *v55; // x26
  Il2CppObject *v56; // x0
  UILabel_o *needItemLabel; // x25
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v59; // x29
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v62; // x25
  struct System_Int32_array *v63; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v65; // w23
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  EventDelegate_Callback_o *v70; // x24
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  EventDelegate_o *v74; // x23
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct UICommonButton_o *useNeedItemButton; // x8
  __int64 v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  __int64 v85; // x8
  Il2CppObject *Entity; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 v93; // x1
  UILabel_o *eventItemLabel; // x23
  System_String_o *v95; // x24
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  LimitCntUpItemComponent_o *eventItemIcon; // x23
  struct System_Int32_array *v99; // x8
  struct System_Int32_array *v100; // x9
  _BOOL4 v101; // w20
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  EventDelegate_Callback_o *v106; // x21
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  EventDelegate_o *v110; // x20
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct UICommonButton_o *useEventItemButton; // x8
  __int64 v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  __int64 v121; // x8

  if ( (byte_4B19D4F & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, combineCostumeEnt, eventCombineCostumeEnt);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__, v27, v28);
    sub_1BCA7E0(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__, v29, v30);
    sub_1BCA7E0(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_3860/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_5649/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_5650/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_5651/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, v41, v42);
    byte_4B19D4F = 1;
  }
  v43 = sub_1BCAA2C(
          CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo,
          combineCostumeEnt,
          eventCombineCostumeEnt,
          isShortNeedItemOrQp);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !v43 )
    goto LABEL_63;
  *(_QWORD *)(v43 + 16) = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 16), (int64_t)callBack, v46, v47, v48, v49, v50, v51);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3860/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_63;
  UILabel__set_text(title, (System_String_o *)UserId, 0LL);
  subTitle = this->fields.subTitle;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_5649/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v56 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = (int64_t)System_String__Format(v55, v56, 0LL);
  if ( !subTitle )
    goto LABEL_63;
  UILabel__set_text(subTitle, (System_String_o *)UserId, 0LL);
  needItemLabel = this->fields.needItemLabel;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
  if ( !needItemLabel )
    goto LABEL_63;
  UILabel__set_text(needItemLabel, (System_String_o *)UserId, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_63;
  v59 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v59 >= (int)max_length )
      break;
    if ( v59 >= max_length )
      goto LABEL_64;
    if ( !combineCostumeEnt )
      goto LABEL_63;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_63;
    if ( (__int64)v59 < (int)itemIds->max_length )
    {
      v62 = limitItemList->m_Items[v59];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45);
      UserId = NetworkManager__get_UserId(0LL);
      v63 = combineCostumeEnt->fields.itemIds;
      if ( !v63 )
        goto LABEL_63;
      if ( v59 >= v63->max_length )
        goto LABEL_64;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_63;
      if ( v59 >= itemNums->max_length )
        goto LABEL_64;
      if ( !v62 )
        goto LABEL_63;
      LimitCntUpItemComponent__setLimitUpItemInfo(v62, UserId, v63->m_Items[v59 + 1], itemNums->m_Items[v59 + 1], 0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v59;
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
  v65 = isShortNeedItemOrQp;
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
    v70 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v67, v68, v69);
    EventDelegate_Callback___ctor(
      v70,
      (Il2CppObject *)v43,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v74 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v71, v72, v73);
    EventDelegate___ctor_47348668(v74, v70, 0LL);
    useNeedItemButton = this->fields.useNeedItemButton;
    if ( !useNeedItemButton )
      goto LABEL_63;
    UserId = (int64_t)useNeedItemButton->fields.onClick;
    if ( !UserId )
      goto LABEL_63;
    v82 = *(_QWORD *)(UserId + 16);
    v83 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++*(_DWORD *)(UserId + 28);
    if ( !v82 )
      goto LABEL_63;
    v84 = *(int *)(UserId + 24);
    if ( (unsigned int)v84 >= *(_DWORD *)(v82 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UserId,
        (Il2CppObject *)v74,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = v82 + 8 * v84;
      *(_DWORD *)(UserId + 24) = v84 + 1;
      *(_QWORD *)(v85 + 32) = v74;
      sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 32), (int64_t)v74, v75, v76, v77, v78, v79, v80);
    }
  }
  UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserId )
    goto LABEL_63;
  UserId = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)UserId,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !UserId )
    goto LABEL_63;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)UserId,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventEnt, (int64_t)Entity, v87, v88, v89, v90, v91, v92);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93);
  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_5650/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v96 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  UserId = (int64_t)System_String__Format(v95, v96, 0LL);
  if ( !eventItemLabel )
    goto LABEL_63;
  UILabel__set_text(eventItemLabel, (System_String_o *)UserId, 0LL);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v97);
  UserId = NetworkManager__get_UserId(0LL);
  v99 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v99 )
    goto LABEL_63;
  if ( !v99->max_length )
    goto LABEL_64;
  v100 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v100 )
    goto LABEL_63;
  if ( !v100->max_length )
LABEL_64:
    sub_1BCAA44(UserId, v45);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(eventItemIcon, UserId, v99->m_Items[1], v100->m_Items[1], 0LL),
        (UserId = (int64_t)this->fields.useEventItemButton) == 0)
    || ((*(void (__fastcall **)(int64_t, bool, _QWORD))(*(_QWORD *)UserId + 392LL))(
          UserId,
          !isShortEvemtItem,
          *(_QWORD *)(*(_QWORD *)UserId + 400LL)),
        (UserId = (int64_t)this->fields.useEventItemButton) == 0) )
  {
LABEL_63:
    sub_1BCAA3C(UserId, v45);
  }
  v101 = isShortEvemtItem;
  if ( v101 )
    v102 = 3LL;
  else
    v102 = 0LL;
  (*(void (__fastcall **)(int64_t, __int64, __int64, _QWORD))(*(_QWORD *)UserId + 536LL))(
    UserId,
    v102,
    1LL,
    *(_QWORD *)(*(_QWORD *)UserId + 544LL));
  if ( !v101 )
  {
    v106 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v103, v104, v105);
    EventDelegate_Callback___ctor(
      v106,
      (Il2CppObject *)v43,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v110 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v107, v108, v109);
    EventDelegate___ctor_47348668(v110, v106, 0LL);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      UserId = (int64_t)useEventItemButton->fields.onClick;
      if ( UserId )
      {
        v118 = *(_QWORD *)(UserId + 16);
        v119 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++*(_DWORD *)(UserId + 28);
        if ( v118 )
        {
          v120 = *(int *)(UserId + 24);
          if ( (unsigned int)v120 >= *(_DWORD *)(v118 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)UserId,
              (Il2CppObject *)v110,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
          }
          else
          {
            v121 = v118 + 8 * v120;
            *(_DWORD *)(UserId + 24) = v120 + 1;
            *(_QWORD *)(v121 + 32) = v110;
            sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 32), (int64_t)v110, v111, v112, v113, v114, v115, v116);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    1LL,
    *(_QWORD *)&callBack->fields.extra_arg);
}