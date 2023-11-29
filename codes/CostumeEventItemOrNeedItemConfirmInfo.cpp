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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UILabel_o *title; // x25
  System_String_o *v36; // x0
  UILabel_o *subTitle; // x25
  System_String_o *v38; // x26
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  UILabel_o *needItemLabel; // x25
  System_String_o *v42; // x0
  int64_t UserId; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  struct LimitCntUpItemComponent_array *limitItemList; // x8
  unsigned __int64 v47; // x27
  unsigned __int64 max_length; // x9
  struct System_Int32_array *itemIds; // x9
  LimitCntUpItemComponent_o *v50; // x25
  struct System_Int32_array *v51; // x8
  struct System_Int32_array *itemNums; // x9
  struct UICommonButton_o *useNeedItemButton; // x0
  struct UICommonButton_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  EventDelegate_Callback_o *v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  EventDelegate_o *v65; // x23
  struct UICommonButton_o *v66; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onClick; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct EventEntity_o *Entity; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  UILabel_o *eventItemLabel; // x23
  System_String_o *v78; // x24
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x23
  struct System_Int32_array *v82; // x8
  struct System_Int32_array *v83; // x9
  struct UICommonButton_o *useEventItemButton; // x0
  struct UICommonButton_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  EventDelegate_Callback_o *v91; // x21
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  EventDelegate_o *v96; // x20
  struct UICommonButton_o *v97; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v98; // x0

  if ( (byte_40FBDC1 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, combineCostumeEnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14);
    sub_B16FFC(&EventDelegate_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__, v20);
    sub_B16FFC(&Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__, v21);
    sub_B16FFC(&CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_3321, v23);
    sub_B16FFC(&StringLiteral_5565, v24);
    sub_B16FFC(&StringLiteral_5566, v25);
    sub_B16FFC(&StringLiteral_5567, v26);
    sub_B16FFC(&StringLiteral_5560, v27);
    byte_40FBDC1 = 1;
  }
  v28 = sub_B170CC(
          CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_TypeInfo,
          combineCostumeEnt,
          eventCombineCostumeEnt,
          isShortNeedItemOrQp,
          isShortEvemtItem);
  CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___ctor(
    (CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_61;
  *(_QWORD *)(v28 + 16) = callBack;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)callBack, v29, v30, v31, v32, v33, v34);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3321, 0LL);
  if ( !title )
    goto LABEL_61;
  UILabel__set_text(title, v36, 0LL);
  subTitle = this->fields.subTitle;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5565, 0LL);
  v39 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560, 0LL);
  v40 = System_String__Format(v38, v39, 0LL);
  if ( !subTitle )
    goto LABEL_61;
  UILabel__set_text(subTitle, v40, 0LL);
  needItemLabel = this->fields.needItemLabel;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_5567, 0LL);
  if ( !needItemLabel )
    goto LABEL_61;
  UILabel__set_text(needItemLabel, v42, 0LL);
  limitItemList = this->fields.limitItemList;
  if ( !limitItemList )
    goto LABEL_61;
  v47 = 0LL;
  while ( 1 )
  {
    max_length = limitItemList->max_length;
    if ( (__int64)v47 >= (int)max_length )
      break;
    if ( v47 >= max_length )
      goto LABEL_62;
    if ( !combineCostumeEnt )
      goto LABEL_61;
    itemIds = combineCostumeEnt->fields.itemIds;
    if ( !itemIds )
      goto LABEL_61;
    if ( (__int64)v47 < (int)itemIds->max_length )
    {
      v50 = limitItemList->m_Items[v47];
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v51 = combineCostumeEnt->fields.itemIds;
      if ( !v51 )
        goto LABEL_61;
      if ( v47 >= v51->max_length )
        goto LABEL_62;
      itemNums = combineCostumeEnt->fields.itemNums;
      if ( !itemNums )
        goto LABEL_61;
      if ( v47 >= itemNums->max_length )
        goto LABEL_62;
      if ( !v50 )
        goto LABEL_61;
      LimitCntUpItemComponent__setLimitUpItemInfo(v50, UserId, v51->m_Items[v47 + 1], itemNums->m_Items[v47 + 1], 0LL);
      limitItemList = this->fields.limitItemList;
    }
    ++v47;
    if ( !limitItemList )
      goto LABEL_61;
  }
  useNeedItemButton = this->fields.useNeedItemButton;
  if ( !useNeedItemButton )
    goto LABEL_61;
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))useNeedItemButton->klass->vtable._5_set_isEnabled.method)(
    useNeedItemButton,
    !isShortNeedItemOrQp,
    useNeedItemButton->klass->vtable._6_OnInit.methodPtr);
  v54 = this->fields.useNeedItemButton;
  if ( !v54 )
    goto LABEL_61;
  if ( isShortNeedItemOrQp )
    v55 = 3LL;
  else
    v55 = 0LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v54->klass->vtable._14_SetState.method)(
    v54,
    v55,
    1LL,
    v54->klass->vtable._15_OnPress.methodPtr);
  if ( !isShortNeedItemOrQp )
  {
    v60 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v56, v57, v58, v59);
    EventDelegate_Callback___ctor(
      v60,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__0__,
      0LL);
    v65 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v61, v62, v63, v64);
    EventDelegate___ctor_29412484(v65, v60, 0LL);
    v66 = this->fields.useNeedItemButton;
    if ( !v66 )
      goto LABEL_61;
    onClick = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v66->fields.onClick;
    if ( !onClick )
      goto LABEL_61;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onClick,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventCombineCostumeEnt || !MasterData_WarQuestSelectionMaster )
    goto LABEL_61;
  Entity = (struct EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     eventCombineCostumeEnt->fields.eventId,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  this->fields.eventEnt = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventEnt,
    (System_Int32_array **)Entity,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  eventItemLabel = this->fields.eventItemLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_5566, 0LL);
  v79 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560, 0LL);
  v80 = System_String__Format(v78, v79, 0LL);
  if ( !eventItemLabel )
    goto LABEL_61;
  UILabel__set_text(eventItemLabel, v80, 0LL);
  eventItemIcon = this->fields.eventItemIcon;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v82 = eventCombineCostumeEnt->fields.itemIds;
  if ( !v82 )
    goto LABEL_61;
  if ( !v82->max_length )
    goto LABEL_62;
  v83 = eventCombineCostumeEnt->fields.itemNums;
  if ( !v83 )
    goto LABEL_61;
  if ( !v83->max_length )
  {
LABEL_62:
    sub_B17100(UserId, v44, v45);
    sub_B170A0();
  }
  if ( !eventItemIcon
    || (LimitCntUpItemComponent__setLimitUpItemInfo(eventItemIcon, UserId, v82->m_Items[1], v83->m_Items[1], 0LL),
        (useEventItemButton = this->fields.useEventItemButton) == 0LL)
    || (((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))useEventItemButton->klass->vtable._5_set_isEnabled.method)(
          useEventItemButton,
          !isShortEvemtItem,
          useEventItemButton->klass->vtable._6_OnInit.methodPtr),
        (v85 = this->fields.useEventItemButton) == 0LL) )
  {
LABEL_61:
    sub_B170D4();
  }
  if ( isShortEvemtItem )
    v86 = 3LL;
  else
    v86 = 0LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v85->klass->vtable._14_SetState.method)(
    v85,
    v86,
    1LL,
    v85->klass->vtable._15_OnPress.methodPtr);
  if ( !isShortEvemtItem )
  {
    v91 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v87, v88, v89, v90);
    EventDelegate_Callback___ctor(
      v91,
      (Il2CppObject *)v28,
      Method_CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0__Set_b__1__,
      0LL);
    v96 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v92, v93, v94, v95);
    EventDelegate___ctor_29412484(v96, v91, 0LL);
    v97 = this->fields.useEventItemButton;
    if ( v97 )
    {
      v98 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v97->fields.onClick;
      if ( v98 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v98,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v96,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        return;
      }
    }
    goto LABEL_61;
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
  System_Action_bool__o *callBack; // x0

  if ( (byte_40F8B16 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, method);
    byte_40F8B16 = 1;
  }
  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B170D4();
  System_Action_bool___Invoke(callBack, 0, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
}


void __fastcall CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0___Set_b__1(
        CostumeEventItemOrNeedItemConfirmInfo___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Action_bool__o *callBack; // x0

  if ( (byte_40F8B17 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, method);
    byte_40F8B17 = 1;
  }
  callBack = this->fields.callBack;
  if ( !callBack )
    sub_B170D4();
  System_Action_bool___Invoke(callBack, 1, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
}