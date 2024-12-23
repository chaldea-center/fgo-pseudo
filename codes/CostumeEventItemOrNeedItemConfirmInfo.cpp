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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UILabel_o *title; // x23
  UILabel_o *subTitle; // x23
  System_String_o *v39; // x26
  Il2CppObject *v40; // x0
  UILabel_o *needItemLabel; // x23
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v43; // x27
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v46; // x26
  struct System_Int32_array *v47; // x8
  struct System_Int32_array *itemNums; // x9
  _BOOL4 v49; // w24
  __int64 v50; // x1
  EventDelegate_Callback_o *v51; // x25
  EventDelegate_o *v52; // x24
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct UICommonButton_o *v59; // x8
  System_String_Fields fields; // x8
  _QWORD *v61; // x9
  __int64 klass_low; // x10
  __int64 v63; // x8
  Il2CppObject *Entity; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  UILabel_o *eventItemLabel; // x24
  System_String_o *v72; // x25
  Il2CppObject *v73; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x24
  struct System_Int32_array *v75; // x8
  struct System_Int32_array *v76; // x9
  _BOOL4 v77; // w20
  __int64 v78; // x1
  EventDelegate_Callback_o *v79; // x21
  EventDelegate_o *v80; // x20
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct UICommonButton_o *useEventItemButton; // x8
  System_String_Fields v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8

  if ( (byte_4B6A7D8 & 1) == 0 )
  {
    sub_1BE4ACC(&EventDelegate_Callback_TypeInfo, combineCostumeEnt);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14);
    sub_1BE4ACC(&EventDelegate_TypeInfo, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v17);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BE4ACC(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__, v20);
    sub_1BE4ACC(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__, v21);
    sub_1BE4ACC(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo, v22);
    sub_1BE4ACC(&StringLiteral_3870/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v23);
    sub_1BE4ACC(&StringLiteral_5661/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, v24);
    sub_1BE4ACC(&StringLiteral_5662/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, v25);
    sub_1BE4ACC(&StringLiteral_5663/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, v26);
    sub_1BE4ACC(&StringLiteral_5656/*"EVENT_COMBINE_COSTUME_ITEM"*/, v27);
    byte_4B6A7D8 = 1;
  }
  v28 = sub_1BE4D18(CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_71;
  *(_QWORD *)(v28 + 16) = callBack;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)callBack, v31, v32, v33, v34, v35, v36);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_3870/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_71;
  UILabel__set_text(title, useNeedItemButton, 0LL);
  subTitle = this->fields.subTitle;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5661/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v40 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5656/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  useNeedItemButton = System_String__Format(v39, v40, 0LL);
  if ( !subTitle )
    goto LABEL_71;
  UILabel__set_text(subTitle, useNeedItemButton, 0LL);
  needItemLabel = this->fields.needItemLabel;
  useNeedItemButton = LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_NEED_ITEM"*/, 0LL);
  if ( !needItemLabel )
    goto LABEL_71;
  UILabel__set_text(needItemLabel, useNeedItemButton, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_71;
  v43 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v43 >= (int)max_length )
      break;
    if ( v43 >= max_length )
      goto LABEL_72;
    if ( !combineCostumeEnt )
      goto LABEL_71;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_71;
    if ( (__int64)v43 < (int)itemIds->max_length )
    {
      v46 = limitItemList->m_Items[v43];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, v30);
        byte_4B61717 = 1;
      }
      useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
      }
      v47 = combineCostumeEnt->fields.itemIds;
      if ( !v47 )
        goto LABEL_71;
      if ( v43 >= v47->max_length )
        goto LABEL_72;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_71;
      if ( v43 >= itemNums->max_length )
        goto LABEL_72;
      if ( !v46 )
        goto LABEL_71;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v46,
        *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
        v47->m_Items[v43 + 1],
        itemNums->m_Items[v43 + 1],
        0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v43;
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
  v49 = isShortNeedItemOrQp;
  if ( v49 )
    v50 = 3LL;
  else
    v50 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    useNeedItemButton,
    v50,
    1LL,
    useNeedItemButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  if ( !v49 )
  {
    v51 = (EventDelegate_Callback_o *)sub_1BE4D18(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v51,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v52 = (EventDelegate_o *)sub_1BE4D18(EventDelegate_TypeInfo);
    EventDelegate___ctor_47636304(v52, v51, 0LL);
    v59 = this->fields.useNeedItemButton;
    if ( !v59 )
      goto LABEL_71;
    useNeedItemButton = (System_String_o *)v59->fields.onClick;
    if ( !useNeedItemButton )
      goto LABEL_71;
    fields = useNeedItemButton->fields;
    v61 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(useNeedItemButton[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_71;
    klass_low = SLODWORD(useNeedItemButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)useNeedItemButton,
        (Il2CppObject *)v52,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(useNeedItemButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v63 + 32) = v52;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v63 + 32), (int64_t)v52, v53, v54, v55, v56, v57, v58);
    }
  }
  useNeedItemButton = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !useNeedItemButton )
    goto LABEL_71;
  useNeedItemButton = (System_String_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)useNeedItemButton,
                                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !useNeedItemButton )
    goto LABEL_71;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)useNeedItemButton,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = (struct EventEntity_o *)Entity;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.eventEnt, (int64_t)Entity, v65, v66, v67, v68, v69, v70);
  eventItemLabel = this->fields.eventItemLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_5662/*"EVENT_COMBINE_COSTUME_ITEM_OR_NEED_ITEM_CONFIRM_DIALOG_USE_EVENT_ITEM"*/, 0LL);
  v73 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5656/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  useNeedItemButton = System_String__Format(v72, v73, 0LL);
  if ( !eventItemLabel )
    goto LABEL_71;
  UILabel__set_text(eventItemLabel, useNeedItemButton, 0LL);
  eventItemIcon = this->fields.eventItemIcon;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v30);
    byte_4B61717 = 1;
  }
  useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    useNeedItemButton = (System_String_o *)NetworkManager_TypeInfo;
  }
  v75 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v75 )
    goto LABEL_71;
  if ( !v75->max_length )
    goto LABEL_72;
  v76 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v76 )
    goto LABEL_71;
  if ( !v76->max_length )
LABEL_72:
    sub_1BE4D30(useNeedItemButton, v30);
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(
          eventItemIcon,
          *(_QWORD *)(*(_QWORD *)&useNeedItemButton[7].fields + 64LL),
          v75->m_Items[1],
          v76->m_Items[1],
          0LL),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0LL)
    || (((void (__fastcall *)(System_String_o *, bool, Il2CppMethodPointer))useNeedItemButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
          useNeedItemButton,
          !isShortEvemtItem,
          useNeedItemButton->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr),
        (useNeedItemButton = (System_String_o *)this->fields.useEventItemButton) == 0LL) )
  {
LABEL_71:
    sub_1BE4D28(useNeedItemButton, v30);
  }
  v77 = isShortEvemtItem;
  if ( v77 )
    v78 = 3LL;
  else
    v78 = 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))useNeedItemButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    useNeedItemButton,
    v78,
    1LL,
    useNeedItemButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  if ( !v77 )
  {
    v79 = (EventDelegate_Callback_o *)sub_1BE4D18(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v79,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v80 = (EventDelegate_o *)sub_1BE4D18(EventDelegate_TypeInfo);
    EventDelegate___ctor_47636304(v80, v79, 0LL);
    useEventItemButton = this->fields.useEventItemButton;
    if ( useEventItemButton )
    {
      useNeedItemButton = (System_String_o *)useEventItemButton->fields.onClick;
      if ( useNeedItemButton )
      {
        v88 = useNeedItemButton->fields;
        v89 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(useNeedItemButton[1].klass);
        if ( v88 )
        {
          v90 = SLODWORD(useNeedItemButton[1].klass);
          if ( (unsigned int)v90 >= *(_DWORD *)(*(_QWORD *)&v88 + 24LL) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)useNeedItemButton,
              (Il2CppObject *)v80,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
          }
          else
          {
            v91 = *(_QWORD *)&v88 + 8 * v90;
            LODWORD(useNeedItemButton[1].klass) = v90 + 1;
            *(_QWORD *)(v91 + 32) = v80;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v91 + 32), (int64_t)v80, v81, v82, v83, v84, v85, v86);
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
    sub_1BE4D28(this, method);
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
    sub_1BE4D28(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    1LL,
    *(_QWORD *)&callBack->fields.extra_arg);
}