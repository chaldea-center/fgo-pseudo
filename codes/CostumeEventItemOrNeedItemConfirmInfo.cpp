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
  System_String_o *useNeedItemButton; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UILabel_o *title; // x23
  UILabel_o *subTitle; // x23
  System_String_o *v24; // x26
  Il2CppObject *v25; // x0
  UILabel_o *needItemLabel; // x23
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v28; // x27
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v31; // x26
  struct System_Int32_array *v32; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v34; // w24
  __int64 v35; // x1
  EventDelegate_Callback_o *v36; // x25
  EventDelegate_o *v37; // x24
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct UICommonButton_o *v44; // x8
  System_String_Fields fields; // x8
  _QWORD *v46; // x9
  __int64 klass_low; // x10
  __int64 v48; // x8
  Il2CppObject *Entity; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
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
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct UICommonButton_o *useEventItemButton; // x8
  System_String_Fields v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8

  if ( (byte_4BE019B & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__);
    sub_1C21E38(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__);
    sub_1C21E38(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
    sub_1C21E38(&StringLiteral_3885/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C21E38(&StringLiteral_5688/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_5689/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/);
    sub_1C21E38(&StringLiteral_5690/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/);
    sub_1C21E38(&StringLiteral_5683/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4BE019B = 1;
  }
  v13 = sub_1C22084(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_71;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)callBack, v16, v17, v18, v19, v20, v21);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_3885/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_71;
  UILabel__set_text(title, useNeedItemButton, 0LL);
  subTitle = this->fields.subTitle;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v25 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5683/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  useNeedItemButton = System_String__Format(v24, v25, 0LL);
  if ( !subTitle )
    goto LABEL_71;
  UILabel__set_text(subTitle, useNeedItemButton, 0LL);
  needItemLabel = this->fields.needItemLabel;
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_5690/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
  if ( !needItemLabel )
    goto LABEL_71;
  UILabel__set_text(needItemLabel, useNeedItemButton, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_71;
  v28 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v28 >= (int)max_length )
      break;
    if ( v28 >= max_length )
      goto LABEL_72;
    if ( !combineCostumeEnt )
      goto LABEL_71;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_71;
    if ( (__int64)v28 < (int)itemIds->max_length )
    {
      v31 = limitItemList->m_Items[v28];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
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
      if ( v28 >= v32->max_length )
        goto LABEL_72;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_71;
      if ( v28 >= itemNums->max_length )
        goto LABEL_72;
      if ( !v31 )
        goto LABEL_71;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v31,
        *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
        v32->m_Items[v28 + 1],
        itemNums->m_Items[v28 + 1],
        0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v28;
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
  v34 = isShortNeedItemOrQp;
  if ( v34 )
    v35 = 3LL;
  else
    v35 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    useNeedItemButton,
    v35,
    1LL,
    useNeedItemButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  if ( !v34 )
  {
    v36 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v36,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v37 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
    EventDelegate___ctor_47961380(v37, v36, 0LL);
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
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(useNeedItemButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v48 + 32) = v37;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 32), (int64_t)v37, v38, v39, v40, v41, v42, v43);
    }
  }
  useNeedItemButton = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !useNeedItemButton )
    goto LABEL_71;
  useNeedItemButton = (System_String_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)useNeedItemButton,
                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !useNeedItemButton )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)useNeedItemButton,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventEnt, (int64_t)Entity, v50, v51, v52, v53, v54, v55);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v58 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5683/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  useNeedItemButton = System_String__Format(v57, v58, 0LL);
  if ( !eventItemLabel )
    goto LABEL_71;
  UILabel__set_text(eventItemLabel, useNeedItemButton, 0LL);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
  if ( !v60->max_length )
    goto LABEL_72;
  v61 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v61 )
    goto LABEL_71;
  if ( !v61->max_length )
LABEL_72:
    sub_1C2209C(useNeedItemButton, v15);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
          v60->m_Items[1],
          v61->m_Items[1],
          0LL),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0LL)
    || (((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
          useNeedItemButton,
          !isShortEvemtItem,
          useNeedItemButton->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0LL) )
  {
LABEL_71:
    sub_1C22094(useNeedItemButton, v15);
  }
  v62 = isShortEvemtItem;
  if ( v62 )
    v63 = 3LL;
  else
    v63 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    useNeedItemButton,
    v63,
    1LL,
    useNeedItemButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  if ( !v62 )
  {
    v64 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v64,
      (Il2CppObject *)v13,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v65 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
    EventDelegate___ctor_47961380(v65, v64, 0LL);
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
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = *(_QWORD *)&v73 + 8 * v75;
            LODWORD(useNeedItemButton[1].klass) = v75 + 1;
            *(_QWORD *)(v76 + 32) = v65;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v76 + 32), (int64_t)v65, v66, v67, v68, v69, v70, v71);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    1LL,
    *(_QWORD *)&callBack->fields.extra_arg);
}