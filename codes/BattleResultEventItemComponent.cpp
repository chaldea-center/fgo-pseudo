void __fastcall BattleResultEventItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v13; // x1
  struct BattleResultEventItemComponent_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct BattleResultEventItemComponent_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct BattleResultEventItemComponent_StaticFields *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  BattleResultEventItemComponent_c *v38; // x8

  if ( (byte_40FA39B & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventItemComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19359/*"img_bg_ep"*/, v8);
    sub_B16FFC(&StringLiteral_2465/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v9);
    sub_B16FFC(&StringLiteral_19658/*"img_txt_reward"*/, v10);
    sub_B16FFC(&StringLiteral_19360/*"img_bg_events"*/, v11);
    byte_40FA39B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultEventItemComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2465/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2465/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B16F98(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19658/*"img_txt_reward"*/;
  v14->EVENT_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_19658/*"img_txt_reward"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v14->EVENT_POINT_REWARD_TITLE_NAME, v15, v16, v17, v18, v19, v20, v21);
  v22 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19360/*"img_bg_events"*/;
  v22->EVENT_POINT_REWARD_BG_NAME = (struct System_String_o *)StringLiteral_19360/*"img_bg_events"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v22->EVENT_POINT_REWARD_BG_NAME, v23, v24, v25, v26, v27, v28, v29);
  v30 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_19359/*"img_bg_ep"*/;
  v30->EVENT_POINT_BG_TITLE_NAME = (struct System_String_o *)StringLiteral_19359/*"img_bg_ep"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v30->EVENT_POINT_BG_TITLE_NAME, v31, v32, v33, v34, v35, v36, v37);
  v38 = BattleResultEventItemComponent_TypeInfo;
  BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH = 315;
  v38->static_fields->NEXT_ITEM_LABEL_MAX_WIDTH = 414;
}


void __fastcall BattleResultEventItemComponent___ctor(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Color_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FA39A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Color___TypeInfo, method);
    byte_40FA39A = 1;
  }
  v4 = (struct UnityEngine_Color_array *)sub_B17014(UnityEngine_Color___TypeInfo, 2LL, v2);
  this->fields.showModeChanButtonLabelEffectColors = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultEventItemComponent__CheckNextGroup(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *itemList; // x0
  BattleDropItem_array *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *v15; // x0

  if ( (byte_40FA394 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__, v3);
    sub_B16FFC(&StringLiteral_9721/*"OPEN"*/, v4);
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, v5);
    byte_40FA394 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9721/*"OPEN"*/, 0LL);
      dropInfoList = this->fields.dropInfoList;
      if ( dropInfoList )
      {
        currentGroupIndex = this->fields.currentGroupIndex;
        if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        itemList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
        if ( itemList )
        {
          v10 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          itemList,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
          BattleResultEventItemComponent__SetItemWindow_25634268(this, v10, v11);
          BattleResultEventItemComponent__SetUi(this, this->fields.currentEventId, v12);
          BattleResultEventItemComponent__Open(this, v13);
          return;
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v15 = this->fields.myFsm;
  if ( !v15 )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(v15, (System_String_o *)StringLiteral_9268/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Close(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleWindowComponent_EndCall_o *v11; // x21
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x1
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // x19
  BattleViewItemlistComponent_o *v23; // x0

  if ( (byte_40FA392 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultEventItemComponent_endClose__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__, v4);
    byte_40FA392 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_13;
  BattleViewItemlistComponent__setHide(itemWindow, 0LL);
  window = this->fields.window;
  v11 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v7, v8, v9, v10);
  BattleWindowComponent_EndCall___ctor(v11, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endClose__, 0LL);
  if ( !window )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v11,
    window->klass->vtable._13_CompClose.methodPtr);
  if ( BattleResultEventItemComponent__isGetItems(this, v12) )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      goto LABEL_13;
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    newDroplist = dropInfoList->fields._items->m_Items[currentGroupIndex].fields.newDroplist;
  }
  else
  {
    newDroplist = 0LL;
  }
  this->fields.newDroplist = newDroplist;
  p_newDroplist = &this->fields.newDroplist;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_newDroplist,
    (System_Int32_array **)newDroplist,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (BattleViewItemlistComponent_o *)*(p_newDroplist - 10);
  ++*((_DWORD *)p_newDroplist + 9);
  if ( !v23 )
LABEL_13:
    sub_B170D4();
  BattleViewItemlistComponent__ClearObj(v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__DialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FA384 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FA384 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
}


void __fastcall BattleResultEventItemComponent__EndCloseDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA385 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, method);
    byte_40FA385 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Init(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleWindowComponent_o *window; // x0
  struct BattleWindowComponent_o *v10; // x0
  ItemDetailInfoComponent_o *itemDialog; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  UILabel_o *titleConfLabel; // x0
  UnityEngine_Object_o *titleAtLabel; // x20
  UILabel_o *v16; // x20
  System_String_o *v17; // x0
  UnityEngine_Object_o *titleNextItemLabel; // x20
  UILabel_o *v19; // x20
  System_String_o *v20; // x0
  UnityEngine_GameObject_o *touchNextRoot; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FA375 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__,
      method);
    sub_B16FFC(&System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2465/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v6);
    sub_B16FFC(&StringLiteral_2469/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, v7);
    sub_B16FFC(&StringLiteral_2463/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v8);
    byte_40FA375 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  v10 = this->fields.window;
  if ( !v10 )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v10->klass->vtable._9_setClose.method)(
    v10,
    v10->klass->vtable._10_Open.methodPtr);
  itemDialog = this->fields.itemDialog;
  if ( !itemDialog )
    goto LABEL_33;
  ItemDetailInfoComponent__Init(itemDialog, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2469/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL);
  if ( !v12 )
    goto LABEL_33;
  v13 = v12;
  if ( !System_String__Equals_43731072(v12, (System_String_o *)StringLiteral_2469/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL) )
  {
    titleConfLabel = this->fields.titleConfLabel;
    if ( !titleConfLabel )
      goto LABEL_33;
    UILabel__set_text(titleConfLabel, v13, 0LL);
  }
  titleAtLabel = (UnityEngine_Object_o *)this->fields.titleAtLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleAtLabel, 0LL, 0LL) )
  {
    v16 = this->fields.titleAtLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2465/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0LL);
    if ( !v16 )
      goto LABEL_33;
    UILabel__set_text(v16, v17, 0LL);
  }
  titleNextItemLabel = (UnityEngine_Object_o *)this->fields.titleNextItemLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleNextItemLabel, 0LL, 0LL) )
  {
    v19 = this->fields.titleNextItemLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2463/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( v19 )
    {
      UILabel__set_text(v19, v20, 0LL);
      goto LABEL_31;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_31:
  touchNextRoot = this->fields.touchNextRoot;
  this->fields.currentGroupIndex = 0;
  if ( !touchNextRoot )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(touchNextRoot, 0, 0LL);
  v26 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo,
                                                                                                 v22,
                                                                                                 v23,
                                                                                                 v24,
                                                                                                 v25);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo____ctor(
    v26,
    (const MethodInfo_2E63480 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
  this->fields.dropInfoList = v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dropInfoList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void __fastcall BattleResultEventItemComponent__OnClickSwitchShowMode(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_40FA395 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA395 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isShowPossessionNum ^= 1u;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v3);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_B170D4();
  BattleViewItemlistComponent__SwitchShowNumMode(itemWindow, this->fields.isShowPossessionNum, 0LL);
}


void __fastcall BattleResultEventItemComponent__Open(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v5; // x20
  __int64 v6; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v7; // x20
  __int64 v8; // x21
  const MethodInfo *v9; // x1

  if ( (byte_40FA378 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      method);
    byte_40FA378 = 1;
  }
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_16;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, void *))this->klass->vtable._6_SetTitleSprite.method)(
    this,
    (unsigned int)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.groupId,
    this->klass[1]._1.image);
  v5 = this->fields.dropInfoList;
  if ( !v5 )
    goto LABEL_16;
  v6 = this->fields.currentGroupIndex;
  if ( v5->fields._size <= (unsigned int)v6 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( v5->fields._items->m_Items[v6].fields.groupId < 1 )
  {
    ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_SetBgSprite.method)(
      this,
      (unsigned int)this->fields.currentEventId,
      this->klass->vtable._6_SetTitleSprite.methodPtr);
    goto LABEL_15;
  }
  v7 = this->fields.dropInfoList;
  if ( !v7 )
LABEL_16:
    sub_B170D4();
  v8 = this->fields.currentGroupIndex;
  if ( v7->fields._size <= (unsigned int)v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_SetBgSprite.method)(
    this,
    (unsigned int)v7->fields._items->m_Items[v8].fields.groupId,
    this->klass->vtable._6_SetTitleSprite.methodPtr);
LABEL_15:
  BattleResultEventItemComponent__OpenCommonProcess(this, v9);
}


void __fastcall BattleResultEventItemComponent__OpenCommonProcess(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *touchNextRoot; // x0
  const MethodInfo *v6; // x1
  PlayMakerFSM_o *myFsm; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleWindowComponent_EndCall_o *v13; // x21
  const MethodInfo *v14; // x1

  if ( (byte_40FA399 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultEventItemComponent_endOpen__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5477/*"END_OPEN"*/, v4);
    byte_40FA399 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  this->fields.isShowPossessionNum = 0;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v6);
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5477/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v13 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v9, v10, v11, v12),
        BattleWindowComponent_EndCall___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_endOpen__,
          0LL),
        !window) )
  {
LABEL_7:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v13,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultEventItemComponent__SetCondensedScale(this, v14);
}


void __fastcall BattleResultEventItemComponent__OpenEventFortification(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  const MethodInfo *v5; // x1

  if ( (byte_40FA398 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      method);
    byte_40FA398 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      sub_B170D4();
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, void *))this->klass->vtable._6_SetTitleSprite.method)(
      this,
      (unsigned int)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.groupId,
      this->klass[1]._1.image);
  }
  else
  {
    ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, void *))this->klass->vtable._6_SetTitleSprite.method)(
      this,
      0LL,
      this->klass[1]._1.image);
  }
  BattleResultEventItemComponent__OpenCommonProcess(this, v5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
        BattleResultEventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleResultEventItemComponent_c *v10; // x0
  System_String_o *v11; // x22
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  System_String_o *v16; // x20
  UIAtlas_o *mAtlas; // x0
  BetterList_string__o *ListOfSprites; // x0
  BattleResultEventItemComponent_c *v19; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct UISprite_o *v23; // x8
  UIAtlas_o *v24; // x0
  BetterList_string__o *v25; // x0
  BattleResultEventItemComponent_c *v26; // x0
  int32_t v28; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  v30 = eventId;
  if ( (byte_40FA37D & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_BetterList_string__Contains__, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_16150/*"_{0}_{1}"*/, v9);
    byte_40FA37D = 1;
  }
  v10 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v10 = BattleResultEventItemComponent_TypeInfo;
  }
  v11 = System_String__Concat_43743732(
          v10->static_fields->EVENT_POINT_BG_TITLE_NAME,
          (System_String_o *)StringLiteral_16150/*"_{0}_{1}"*/,
          0LL);
  v29 = eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v28 = groupId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v14 = System_String__Format_43739268(v11, v12, v13, 0LL);
  eventPointAtSprite = this->fields.eventPointAtSprite;
  if ( !eventPointAtSprite )
    goto LABEL_22;
  v16 = v14;
  mAtlas = eventPointAtSprite->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_22;
  ListOfSprites = UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !ListOfSprites )
    goto LABEL_22;
  if ( BetterList_string___Contains(
         ListOfSprites,
         v16,
         (const MethodInfo_2D367D8 *)Method_BetterList_string__Contains__) )
  {
    return v16;
  }
  v19 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v19 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_BG_TITLE_NAME = v19->static_fields->EVENT_POINT_BG_TITLE_NAME;
  v21 = System_Int32__ToString((int32_t)&v30, 0LL);
  v22 = System_String__Concat_43743732(EVENT_POINT_BG_TITLE_NAME, v21, 0LL);
  v23 = this->fields.eventPointAtSprite;
  if ( !v23 || (v16 = v22, (v24 = v23->fields.mAtlas) == 0LL) || (v25 = UIAtlas__GetListOfSprites(v24, 0LL)) == 0LL )
LABEL_22:
    sub_B170D4();
  if ( !BetterList_string___Contains(v25, v16, (const MethodInfo_2D367D8 *)Method_BetterList_string__Contains__) )
  {
    v26 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v26 = BattleResultEventItemComponent_TypeInfo;
    }
    return v26->static_fields->EVENT_POINT_BG_TITLE_NAME;
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__SetBgSprite(
        BattleResultEventItemComponent_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  BattleResultEventItemComponent_c *v6; // x0
  System_String_o *EVENT_POINT_REWARD_BG_NAME; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  struct UISprite_o *bgSp; // x8
  System_String_o *v11; // x20
  UIAtlas_o *mAtlas; // x0
  BetterList_string__o *ListOfSprites; // x0
  BattleResultEventItemComponent_c *v14; // x0
  UISprite_o *v15; // x0
  struct UISprite_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  v17 = imageId;
  if ( (byte_40FA380 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&imageId);
    sub_B16FFC(&Method_BetterList_string__Contains__, v4);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v5);
    byte_40FA380 = 1;
  }
  v6 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v6 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_BG_NAME = v6->static_fields->EVENT_POINT_REWARD_BG_NAME;
  v8 = System_Int32__ToString((int32_t)&v17, 0LL);
  v9 = System_String__Concat_43746016(EVENT_POINT_REWARD_BG_NAME, (System_String_o *)StringLiteral_15842/*"_"*/, v8, 0LL);
  bgSp = this->fields.bgSp;
  if ( !bgSp )
    goto LABEL_17;
  v11 = v9;
  mAtlas = bgSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_17;
  ListOfSprites = UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !ListOfSprites )
    goto LABEL_17;
  if ( !BetterList_string___Contains(
          ListOfSprites,
          v11,
          (const MethodInfo_2D367D8 *)Method_BetterList_string__Contains__) )
  {
    v14 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v14 = BattleResultEventItemComponent_TypeInfo;
    }
    v11 = v14->static_fields->EVENT_POINT_REWARD_BG_NAME;
  }
  v15 = this->fields.bgSp;
  if ( !v15 || (UISprite__set_spriteName(v15, v11, 0LL), (v16 = this->fields.bgSp) == 0LL) )
LABEL_17:
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
    v16,
    v16->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall BattleResultEventItemComponent__SetCondensedScale(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleAtLabel; // x20
  UILabel_o *nextItemLabel; // x0

  if ( (byte_40FA397 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventItemComponent_TypeInfo, method);
    byte_40FA397 = 1;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  }
  if ( !titleAtLabel
    || (UILabel__SetCondensedScale(
          titleAtLabel,
          BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH,
          0LL),
        (nextItemLabel = this->fields.nextItemLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__SetCondensedScale(
    nextItemLabel,
    BattleResultEventItemComponent_TypeInfo->static_fields->NEXT_ITEM_LABEL_MAX_WIDTH,
    0LL);
}


void __fastcall BattleResultEventItemComponent__SetItemWindow(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        int32_t boostItemManaCount,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  const MethodInfo *v8; // x2

  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_B170D4();
  BattleViewItemlistComponent__setEventResultCount(itemWindow, boostItemManaCount, rewardInfos, 0LL);
  BattleResultEventItemComponent__SetItemWindow_25634268(this, itemArray, v8);
}


void __fastcall BattleResultEventItemComponent__SetItemWindow_25634268(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  BattleViewItemlistComponent_o *itemWindow; // x22
  int32_t currentEventId; // w21
  BattleDropItemComponent_ClickDelegate_o *v10; // x23
  BattleViewItemlistComponent_o *v11; // x0

  if ( (byte_40FA37A & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultEventItemComponent_setShowConf__, itemArray);
    sub_B16FFC(&BattleDropItemComponent_ClickDelegate_TypeInfo, v7);
    byte_40FA37A = 1;
  }
  itemWindow = this->fields.itemWindow;
  currentEventId = this->fields.currentEventId;
  v10 = (BattleDropItemComponent_ClickDelegate_o *)sub_B170CC(
                                                     BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                     itemArray,
                                                     method,
                                                     v3,
                                                     v4);
  BattleDropItemComponent_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow
    || (BattleViewItemlistComponent__setListDataCustomColumn_23378520(
          itemWindow,
          itemArray,
          currentEventId,
          v10,
          this->fields.itemColumnCount,
          0LL),
        (v11 = this->fields.itemWindow) == 0LL) )
  {
    sub_B170D4();
  }
  BattleViewItemlistComponent__setHide(v11, 0LL);
}


void __fastcall BattleResultEventItemComponent__SetNextItemLabel(
        BattleResultEventItemComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardENt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *atLabel; // x22
  System_String_o *v14; // x23
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v19; // x0
  Il2CppObject *v20; // x2
  Il2CppObject *v21; // x1
  UILabel_o *v22; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int64_t v25; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40FA37E & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, userEventPoint);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B16FFC(&StringLiteral_2466/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B16FFC(&StringLiteral_2467/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v10);
    sub_B16FFC(&StringLiteral_2464/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40FA37E = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( eventRewardENt )
  {
    EventRewardEntity__GetInfo(eventRewardENt, &nameText, &countText, 0LL);
    atLabel = this->fields.atLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
    v25 = eventRewardENt->fields.point - userEventPoint;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25);
    v16 = System_String__Format(v14, v15, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v16, 0LL);
      isQp = EventRewardEntity__isQp(eventRewardENt, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      if ( isQp )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2467/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
        v20 = (Il2CppObject *)countText;
        v21 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2467/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
        v20 = (Il2CppObject *)countText;
        v21 = (Il2CppObject *)nameText;
      }
      v24 = System_String__Format_43739268(v19, v21, v20, 0LL);
      if ( nextItemLabel )
        goto LABEL_24;
    }
LABEL_18:
    sub_B170D4();
  }
  v22 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2466/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
  if ( !v22 )
    goto LABEL_18;
  UILabel__set_text(v22, v23, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2464/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
  if ( !nextItemLabel )
    goto LABEL_18;
LABEL_24:
  UILabel__set_text(nextItemLabel, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__SetTitleSprite(
        BattleResultEventItemComponent_o *this,
        int32_t currentGroup,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UISprite_o **p_titleSp; // x19
  UISprite_o *v9; // x21
  struct UISprite_o *v10; // t1
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x1
  UISprite_o *v15; // x0
  BattleResultEventItemComponent_c *v16; // x0
  System_String_o *EVENT_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  struct UISprite_o *v20; // x8
  struct UISprite_o *titleSp; // t1
  System_String_o *v22; // x20
  UIAtlas_o *mAtlas; // x0
  BetterList_string__o *ListOfSprites; // x0
  BattleResultEventItemComponent_c *v25; // x0
  int32_t v26; // [xsp+8h] [xbp-28h] BYREF
  int v27; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA381 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    sub_B16FFC(&Method_BetterList_string__Contains__, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_19659/*"img_txt_reward_{0}_{1}"*/, v7);
    byte_40FA381 = 1;
  }
  if ( currentGroup < 1 )
  {
    v16 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v16 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_TITLE_NAME = v16->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v18 = System_Int32__ToString((int)this + 160, 0LL);
    v19 = System_String__Concat_43743732(EVENT_POINT_REWARD_TITLE_NAME, v18, 0LL);
    titleSp = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v20 = titleSp;
    if ( !titleSp )
      goto LABEL_21;
    v22 = v19;
    mAtlas = v20->fields.mAtlas;
    if ( !mAtlas )
      goto LABEL_21;
    ListOfSprites = UIAtlas__GetListOfSprites(mAtlas, 0LL);
    if ( !ListOfSprites )
      goto LABEL_21;
    if ( !BetterList_string___Contains(
            ListOfSprites,
            v22,
            (const MethodInfo_2D367D8 *)Method_BetterList_string__Contains__) )
    {
      v25 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v25 = BattleResultEventItemComponent_TypeInfo;
      }
      v22 = v25->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    }
    v15 = *p_titleSp;
    if ( !*p_titleSp )
LABEL_21:
      sub_B170D4();
    v14 = v22;
  }
  else
  {
    v10 = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v9 = v10;
    v27 = *((_DWORD *)p_titleSp + 4);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v26 = currentGroup;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    v13 = System_String__Format_43739268((System_String_o *)StringLiteral_19659/*"img_txt_reward_{0}_{1}"*/, v11, v12, 0LL);
    if ( !v10 )
      goto LABEL_21;
    v14 = v13;
    v15 = v9;
  }
  UISprite__set_spriteName(v15, v14, 0LL);
  if ( !*p_titleSp )
    goto LABEL_21;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))(*p_titleSp)->klass->vtable._33_MakePixelPerfect.method)(
    *p_titleSp,
    (*p_titleSp)->klass->vtable._34_get_minWidth.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__SetUi(
        BattleResultEventItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UserGameEntity_o *SelfUserGame; // x22
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v20; // x0
  EventRewardMaster_o *v21; // x21
  WebViewManager_o *v22; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x0
  EventDetailEntity_o *v24; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x8
  EventDetailEntity_o *v26; // x23
  WebViewManager_o *v27; // x0
  EventPointGroupMaster_o *v28; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v29; // x26
  __int64 currentGroupIndex; // x27
  EventPointGroupEntity_o *v31; // x23
  WebViewManager_o *v32; // x0
  UserEventPointMaster_o *v33; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v34; // x25
  __int64 v35; // x26
  int64_t userId; // x22
  UserEventPointEntity_o *v37; // x0
  UserEventPointEntity_o *v38; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v40; // x24
  int32_t iconId; // w23
  const MethodInfo *v42; // x3
  int64_t EventPointNoGroup; // x0
  int64_t v44; // x22
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UISprite_o *eventIconSprite; // x24
  int32_t pointImageId; // w21
  EventRewardEntity_o *v48; // x20
  BattleResultEventItemComponent_c *v49; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x21
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  System_String_o *v54; // x21
  UIAtlas_o *mAtlas; // x0
  BetterList_string__o *ListOfSprites; // x0
  BattleResultEventItemComponent_c *v57; // x0
  UISprite_o *v58; // x0
  const MethodInfo *v59; // x3
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v60; // x25
  UISprite_o *v61; // x23
  __int64 v62; // x26
  System_String_o *v63; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v64; // x23
  __int64 v65; // x24
  EventRewardEntity_o *NextEventRewardEntity_17515188; // x0
  const MethodInfo *v67; // x3
  BattleResultEventItemComponent_c *v68; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v69; // x22
  __int64 v70; // x23
  System_String_o *EVENT_POINT_REWARD_AT; // x20
  System_String_o *v72; // x0
  System_String_o *v73; // x20
  BattleResultEventItemComponent_c *v74; // x0
  UILabel_o *titleAtLabel; // x19
  System_String_o *v76; // x0
  __int128 v77; // [xsp+10h] [xbp-60h] BYREF
  UserEventEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_40FA37C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&BattleResultEventItemComponent_TypeInfo, v5);
    sub_B16FFC(&Method_BetterList_string__Contains__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FA37C = 1;
  }
  entity = 0LL;
  v77 = 0u;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !SelfUserGame || !MasterData_WarQuestSelectionMaster )
    goto LABEL_78;
  if ( !UserEventMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          SelfUserGame->fields.userId,
          eventId,
          0LL) )
    return;
  v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v20 )
    goto LABEL_78;
  v21 = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v20,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v22 )
    goto LABEL_78;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v22,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v23 )
    goto LABEL_78;
  v24 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v23,
                                 eventId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_78;
  if ( dropInfoList->fields._size < 1 )
    return;
  v26 = v24;
  if ( !v24 )
LABEL_78:
    sub_B170D4();
  if ( !EventDetailEntity__IsGroupPoint(v24, 0LL) )
  {
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( v21 )
    {
      v44 = EventPointNoGroup;
      NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(v21, eventId, EventPointNoGroup, 0LL);
      eventIconSprite = this->fields.eventIconSprite;
      pointImageId = v26->fields.pointImageId;
      v48 = NextEventRewardEntity;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(eventIconSprite, pointImageId, 0LL);
      v49 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v49 = BattleResultEventItemComponent_TypeInfo;
      }
      EVENT_POINT_BG_TITLE_NAME = v49->static_fields->EVENT_POINT_BG_TITLE_NAME;
      v51 = System_Int32__ToString((int)this + 160, 0LL);
      v52 = System_String__Concat_43743732(EVENT_POINT_BG_TITLE_NAME, v51, 0LL);
      eventPointAtSprite = this->fields.eventPointAtSprite;
      if ( eventPointAtSprite )
      {
        v54 = v52;
        mAtlas = eventPointAtSprite->fields.mAtlas;
        if ( mAtlas )
        {
          ListOfSprites = UIAtlas__GetListOfSprites(mAtlas, 0LL);
          if ( ListOfSprites )
          {
            if ( !BetterList_string___Contains(
                    ListOfSprites,
                    v54,
                    (const MethodInfo_2D367D8 *)Method_BetterList_string__Contains__) )
            {
              v57 = BattleResultEventItemComponent_TypeInfo;
              if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
                v57 = BattleResultEventItemComponent_TypeInfo;
              }
              v54 = v57->static_fields->EVENT_POINT_BG_TITLE_NAME;
            }
            v58 = this->fields.eventPointAtSprite;
            if ( v58 )
            {
              UISprite__set_spriteName(v58, v54, 0LL);
              BattleResultEventItemComponent__SetNextItemLabel(this, v44, v48, v59);
              return;
            }
          }
        }
      }
    }
    goto LABEL_78;
  }
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_78;
  v28 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v27,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  v29 = this->fields.dropInfoList;
  if ( !v29 )
    goto LABEL_78;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( v29->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !v28 )
    goto LABEL_78;
  v31 = EventPointGroupMaster__GetEntity(
          v28,
          this->fields.currentEventId,
          v29->fields._items->m_Items[currentGroupIndex].fields.groupId,
          0LL);
  v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v32 )
    goto LABEL_78;
  v33 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v32,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  v34 = this->fields.dropInfoList;
  if ( !v34 )
    goto LABEL_78;
  v35 = this->fields.currentGroupIndex;
  userId = SelfUserGame->fields.userId;
  if ( v34->fields._size <= (unsigned int)v35 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !v33 )
    goto LABEL_78;
  v37 = UserEventPointMaster__GetEntity(v33, userId, eventId, v34->fields._items->m_Items[v35].fields.groupId, 0LL);
  if ( !this->fields.eventIconSprite )
    goto LABEL_78;
  v38 = v37;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.eventIconSprite, 0LL);
  if ( !gameObject )
    goto LABEL_78;
  if ( v31 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v40 = this->fields.eventIconSprite;
    iconId = v31->fields.iconId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(v40, iconId, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  v60 = this->fields.dropInfoList;
  if ( !v60 )
    goto LABEL_78;
  v61 = this->fields.eventPointAtSprite;
  v62 = this->fields.currentGroupIndex;
  if ( v60->fields._size <= (unsigned int)v62 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v63 = BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
          this,
          this->fields.currentEventId,
          v60->fields._items->m_Items[v62].fields.groupId,
          v42);
  if ( !v61 )
    goto LABEL_78;
  UISprite__set_spriteName(v61, v63, 0LL);
  v64 = this->fields.dropInfoList;
  if ( !v64 )
    goto LABEL_78;
  v65 = this->fields.currentGroupIndex;
  if ( v64->fields._size <= (unsigned int)v65 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !v38 || !v21 )
    goto LABEL_78;
  NextEventRewardEntity_17515188 = EventRewardMaster__GetNextEventRewardEntity_17515188(
                                     v21,
                                     eventId,
                                     v64->fields._items->m_Items[v65].fields.groupId,
                                     v38->fields.value,
                                     0LL);
  BattleResultEventItemComponent__SetNextItemLabel(this, v38->fields.value, NextEventRewardEntity_17515188, v67);
  v68 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v68 = BattleResultEventItemComponent_TypeInfo;
  }
  v69 = this->fields.dropInfoList;
  if ( !v69 )
    goto LABEL_78;
  v70 = this->fields.currentGroupIndex;
  EVENT_POINT_REWARD_AT = v68->static_fields->EVENT_POINT_REWARD_AT;
  if ( v69->fields._size <= (unsigned int)v70 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v77 = *(_OWORD *)&v69->fields._items->m_Items[v70].fields.newDroplist;
  v72 = System_Int32__ToString((int32_t)&v77 + 8, 0LL);
  v73 = System_String__Concat_43743732(EVENT_POINT_REWARD_AT, v72, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v73, 0LL) )
  {
    v74 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v74 = BattleResultEventItemComponent_TypeInfo;
    }
    v73 = v74->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v76 = LocalizationManager__Get(v73, 0LL);
  if ( !titleAtLabel )
    goto LABEL_78;
  UILabel__set_text(titleAtLabel, v76, 0LL);
}


void __fastcall BattleResultEventItemComponent__UpdateShowModeChangeButton(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *showModeChangeButton; // x0
  System_String_o **v5; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  UILabel_o *showModeChangeButtonLabel; // x0
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA396 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16899/*"btn_bg_20"*/, method);
    sub_B16FFC(&StringLiteral_16900/*"btn_bg_21"*/, v3);
    byte_40FA396 = 1;
  }
  showModeChangeButton = this->fields.showModeChangeButton;
  if ( !showModeChangeButton )
    goto LABEL_14;
  v5 = (System_String_o **)(this->fields.isShowPossessionNum ? &StringLiteral_16900/*"btn_bg_21"*/ : &StringLiteral_16899/*"btn_bg_20"*/);
  UIButton__set_normalSprite(showModeChangeButton, *v5, 0LL);
  showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors;
  if ( !showModeChanButtonLabelEffectColors )
    goto LABEL_14;
  showModeChangeButtonLabel = this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !max_length )
    {
LABEL_15:
      sub_B17100(showModeChangeButtonLabel, v6, v7);
      sub_B170A0();
    }
    p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
    p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
    p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
    p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
    if ( showModeChangeButtonLabel )
      goto LABEL_11;
LABEL_14:
    sub_B170D4();
  }
  if ( max_length <= 1 )
    goto LABEL_15;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !showModeChangeButtonLabel )
    goto LABEL_14;
LABEL_11:
  v15.fields.b = *p_a;
  v15.fields.g = *p_b;
  v15.fields.r = *p_g;
  v15.fields.a = *p_r;
  UILabel__set_effectColor(showModeChangeButtonLabel, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__commandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FA38C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FA38C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
}


void __fastcall BattleResultEventItemComponent__createDropInfo(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x8
  int v35; // w9
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **v36; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v37; // x23
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *v38; // x26
  System_Collections_Generic_List_T__o *dropInfoList; // x25
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  _BOOL8 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  __int64 v49; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v50; // x26
  BattleBuffData_BuffData_array *v51; // x25
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  BattleBuffData_BuffData_array *All_BattleBuffData_BuffData; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Collections_Generic_IEnumerable_T__o *v63; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x26
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct System_Collections_Generic_List_BattleDropItem__o *itemList; // x25
  BattleResultEventItemComponent___c_c *v72; // x0
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__42_2; // x26
  Il2CppObject *v75; // x27
  struct BattleResultEventItemComponent___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v89; // x0
  BattleResultEventItemComponent_EventDropItemInfo_o v90; // [xsp+20h] [xbp-90h] BYREF
  BattleResultEventItemComponent_EventDropItemInfo_o v91; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40FA37F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_BattleDropItem___, drop);
    sub_B16FFC(&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___, v7);
    sub_B16FFC(&Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__, v8);
    sub_B16FFC(&System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v15);
    sub_B16FFC(&Method_System_Predicate_BattleDropItem___ctor__, v16);
    sub_B16FFC(&System_Predicate_BattleDropItem__TypeInfo, v17);
    sub_B16FFC(&Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__, v18);
    sub_B16FFC(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__, v19);
    sub_B16FFC(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__, v20);
    sub_B16FFC(&BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, v21);
    sub_B16FFC(&BattleResultEventItemComponent___c_TypeInfo, v22);
    byte_40FA37F = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v23 = sub_B170CC(BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, drop, method, v3, v4);
  BattleResultEventItemComponent___c__DisplayClass42_0___ctor(
    (BattleResultEventItemComponent___c__DisplayClass42_0_o *)v23,
    0LL);
  if ( !v23 )
LABEL_30:
    sub_B170D4();
  *(_QWORD *)(v23 + 16) = drop;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)drop, v24, v25, v26, v27, v28, v29);
  v34 = *(_QWORD *)(v23 + 16);
  if ( v34 )
  {
    *(_DWORD *)(v23 + 24) = 0;
    v35 = 0;
    v36 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **)(v23 + 32);
    v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v23 + 40);
    while ( v35 < *(_DWORD *)(v34 + 24) )
    {
      v38 = *v36;
      dropInfoList = (System_Collections_Generic_List_T__o *)this->fields.dropInfoList;
      if ( !*v36 )
      {
        v38 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *)sub_B170CC(
                                                                                         System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo,
                                                                                         v30,
                                                                                         v31,
                                                                                         v32,
                                                                                         v33);
        System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool____ctor(
          v38,
          (Il2CppObject *)v23,
          Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__,
          (const MethodInfo_2B7359C *)Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__);
        *(_QWORD *)(v23 + 32) = v38;
        sub_B16F98((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)v38, v40, v41, v42, v43, v44, v45);
      }
      v46 = BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
              dropInfoList,
              (System_Func_T__bool__o *)v38,
              (const MethodInfo_18B6118 *)Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
      if ( !v46 )
      {
        memset(&v90, 0, sizeof(v90));
        v47 = *(_QWORD *)(v23 + 16);
        if ( !v47 )
          goto LABEL_30;
        v48 = *(int *)(v23 + 24);
        if ( (unsigned int)v48 >= *(_DWORD *)(v47 + 24) )
        {
          sub_B17100(v46, v30, v31);
          sub_B170A0();
        }
        v49 = *(_QWORD *)(v47 + 8 * v48 + 32);
        if ( !v49 )
          goto LABEL_30;
        v90.fields.groupId = *(_DWORD *)(v49 + 56);
        v50 = *v37;
        v51 = *(BattleBuffData_BuffData_array **)(v23 + 16);
        if ( !*v37 )
        {
          v50 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleDropItem__TypeInfo,
                                                                           v30,
                                                                           v31,
                                                                           v32,
                                                                           v33);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v50,
            (Il2CppObject *)v23,
            Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleDropItem___ctor__);
          *(_QWORD *)(v23 + 40) = v50;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v23 + 40),
            (System_Int32_array **)v50,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57);
        }
        All_BattleBuffData_BuffData = System_Array__FindAll_BattleBuffData_BuffData_(
                                        v51,
                                        (System_Predicate_T__o *)v50,
                                        (const MethodInfo_2044520 *)Method_System_Array_FindAll_BattleDropItem___);
        if ( All_BattleBuffData_BuffData )
        {
          v63 = (System_Collections_Generic_IEnumerable_T__o *)All_BattleBuffData_BuffData;
          v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_BattleDropItem__TypeInfo, v59, v60, v61, v62);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v64,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
          v90.fields.itemList = (struct System_Collections_Generic_List_BattleDropItem__o *)v64;
          sub_B16F98((BattleServantConfConponent_o *)&v90, (System_Int32_array **)v64, v65, v66, v67, v68, v69, v70);
          if ( !v90.fields.itemList )
            goto LABEL_30;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v90.fields.itemList,
            v63,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
        }
        itemList = v90.fields.itemList;
        if ( !v90.fields.itemList )
          goto LABEL_30;
        v90.fields.itemCount = v90.fields.itemList->fields._size;
        v72 = BattleResultEventItemComponent___c_TypeInfo;
        if ( (BYTE3(BattleResultEventItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleResultEventItemComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent___c_TypeInfo);
          v72 = BattleResultEventItemComponent___c_TypeInfo;
        }
        static_fields = v72->static_fields;
        _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__42_2;
        if ( !_9__42_2 )
        {
          if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v72);
            static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          }
          v75 = (Il2CppObject *)static_fields->__9;
          _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                                System_Predicate_BattleDropItem__TypeInfo,
                                                                                v59,
                                                                                v60,
                                                                                v61,
                                                                                v62);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__42_2,
            v75,
            Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleDropItem___ctor__);
          v76 = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          v76->__9__42_2 = (struct System_Predicate_BattleDropItem__o *)_9__42_2;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v76->__9__42_2,
            (System_Int32_array **)_9__42_2,
            v77,
            v78,
            v79,
            v80,
            v81,
            v82);
        }
        v90.fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                                                                                               (System_Predicate_T__o *)_9__42_2,
                                                                                               (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
        sub_B16F98(
          (BattleServantConfConponent_o *)&v90.fields.newDroplist,
          (System_Int32_array **)v90.fields.newDroplist,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88);
        v89 = this->fields.dropInfoList;
        if ( !v89 )
          goto LABEL_30;
        v91 = v90;
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___Add(
          v89,
          &v91,
          (const MethodInfo_2E64260 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__);
      }
      v34 = *(_QWORD *)(v23 + 16);
      v35 = *(_DWORD *)(v23 + 24) + 1;
      *(_DWORD *)(v23 + 24) = v35;
      if ( !v34 )
        goto LABEL_30;
    }
  }
}


void __fastcall BattleResultEventItemComponent__endClose(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA393 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA393 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endCommandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA38D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, method);
    byte_40FA38D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endEventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA391 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, method);
    byte_40FA391 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endItemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA389 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, method);
    byte_40FA389 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endOpen(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_40FA379 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, method);
    byte_40FA379 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268/*"NEXT"*/, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL) )
  {
    sub_B170D4();
  }
  BattleViewItemlistComponent__setShow(itemWindow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__eventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  ItemDetailInfoComponent_o *itemDialog; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FA390 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FA390 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__,
    0LL);
  if ( !itemDialog )
    sub_B170D4();
  ItemDetailInfoComponent__Close_28918100(itemDialog, v11, 0LL);
}


BattleDropItem_o *__fastcall BattleResultEventItemComponent__getNewDrop(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *newDroplist; // x0
  BattleDropItem_o *v6; // x19

  if ( (byte_40FA377 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v4);
    byte_40FA377 = 1;
  }
  newDroplist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  v6 = (BattleDropItem_o *)newDroplist->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    newDroplist,
    0,
    (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v6;
}


bool __fastcall BattleResultEventItemComponent__isGetItems(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 currentGroupIndex; // x20
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x19
  int size; // w8

  if ( (byte_40FA376 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__, v3);
    byte_40FA376 = 1;
  }
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( (currentGroupIndex & 0x80000000) != 0 )
    return 0;
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    sub_B170D4();
  size = dropInfoList->fields._size;
  if ( size <= (int)currentGroupIndex )
    return 0;
  if ( size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemCount > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__itemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  ItemDetailInfoComponent_o *itemDialog; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FA388 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&Method_BattleResultEventItemComponent_endItemDialogCallBack__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FA388 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_B170D4();
  ItemDetailInfoComponent__Close_28918100(itemDialog, v11, 0LL);
}


void __fastcall BattleResultEventItemComponent__setResultData(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t eventId,
        QuestRewardInfo_array *resultBoostItemRewardInfos,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  signed int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x24
  unsigned int v24; // w25
  int32_t v25; // w22
  QuestRewardInfo_o *v26; // x27
  BattleResultEventItemComponent_c *v27; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x23
  BattleResultEventItemComponent_c *v31; // x0
  UILabel_o *titleAtLabel; // x24
  System_String_o *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x2
  BattleDropItem_array *v36; // x0
  const MethodInfo *v37; // x4
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x21
  int size; // w8
  __int64 currentGroupIndex; // x23
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *itemList; // x0
  const MethodInfo *v42; // x2
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_40FA37B & 1) == 0 )
  {
    sub_B16FFC(&BattleDropItem___TypeInfo, drop);
    sub_B16FFC(&BattleResultEventItemComponent_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FA37B = 1;
  }
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !resultBoostItemRewardInfos )
    goto LABEL_41;
  max_length = resultBoostItemRewardInfos->max_length;
  if ( max_length >= 1 )
  {
    v23 = MasterData_WarQuestSelectionMaster;
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v20, v21);
        sub_B170A0();
      }
      v26 = resultBoostItemRewardInfos->m_Items[v24];
      if ( !v26 )
        goto LABEL_41;
      if ( v26->fields.type == 2 )
      {
        if ( !v23 )
          goto LABEL_41;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                              v23,
                                                                                              v26->fields.objectId,
                                                                                              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( MasterData_WarQuestSelectionMaster && LODWORD(MasterData_WarQuestSelectionMaster->fields.seriazlier) == 5 )
          v25 += v26->fields.num;
      }
      max_length = resultBoostItemRewardInfos->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_19;
    }
  }
  v25 = 0;
LABEL_19:
  v27 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v27 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_AT = v27->static_fields->EVENT_POINT_REWARD_AT;
  v29 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v30 = System_String__Concat_43743732(EVENT_POINT_REWARD_AT, v29, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v30, 0LL) )
  {
    v31 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v31 = BattleResultEventItemComponent_TypeInfo;
    }
    v30 = v31->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get(v30, 0LL);
  if ( !titleAtLabel
    || (UILabel__set_text(titleAtLabel, v33, 0LL),
        this->fields.currentEventId = eventIda,
        BattleResultEventItemComponent__createDropInfo(this, drop, v34),
        v36 = (BattleDropItem_array *)sub_B17014(BattleDropItem___TypeInfo, 0LL, v35),
        (dropInfoList = this->fields.dropInfoList) == 0LL) )
  {
LABEL_41:
    sub_B170D4();
  }
  size = dropInfoList->fields._size;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( size > (int)currentGroupIndex )
  {
    if ( size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    itemList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
    if ( !itemList )
      goto LABEL_41;
    v36 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    itemList,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  }
  BattleResultEventItemComponent__SetItemWindow(this, v36, v25, rewardInfos, v37);
  BattleResultEventItemComponent__SetUi(this, eventIda, v42);
}


void __fastcall BattleResultEventItemComponent__setShowCommandCodeConf(
        BattleResultEventItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA38A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9728/*"OPEN_COMMANDCODE"*/, commandCodeId);
    byte_40FA38A = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9728/*"OPEN_COMMANDCODE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__setShowConf(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  int32_t type; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( !item )
    sub_B170D4();
  type = item->fields.type;
  if ( Gift__IsServant(type, 0LL) )
  {
    BattleResultEventItemComponent__setShowServantConf(this, item->fields.userSvtId, v6);
  }
  else if ( Gift__IsItem(type, 0LL) )
  {
    BattleResultEventItemComponent__setShowItemConf(this, item->fields.objectId, v7);
  }
  else if ( Gift__IsCommandCode(type, 0LL) )
  {
    BattleResultEventItemComponent__setShowCommandCodeConf(this, item->fields.userSvtId, v8);
  }
  else if ( Gift__IsEventPointBuff(type, 0LL) )
  {
    BattleResultEventItemComponent__setShowEventPointBuffConf(this, item->fields.objectId, v9);
  }
}


void __fastcall BattleResultEventItemComponent__setShowEventPointBuffConf(
        BattleResultEventItemComponent_o *this,
        int64_t eventPointBuffId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA38E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9729/*"OPEN_EVENTPOINTBUFF"*/, eventPointBuffId);
    byte_40FA38E = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_eventPointBuffId = eventPointBuffId;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9729/*"OPEN_EVENTPOINTBUFF"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__setShowItemConf(
        BattleResultEventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA386 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9734/*"OPEN_ITEM"*/, *(_QWORD *)&itemId);
    byte_40FA386 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9734/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__setShowServantConf(
        BattleResultEventItemComponent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA382 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9742/*"OPEN_SERVANT"*/, userSvtId);
    byte_40FA382 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_userSvtId = userSvtId;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9742/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__showCommandCodeDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ServantStatusDialog_EndDelegate_o *v16; // x22

  if ( (byte_40FA38B & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultEventItemComponent_commandCodeDialogCallBack__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FA38B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v11 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v16 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v12,
                                                     v13,
                                                     v14,
                                                     v15),
        ServantStatusDialog_EndDelegate___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v11) )
  {
    sub_B170D4();
  }
  CommonUI__OpenServantStatusDialog_18250552(v11, 0, (UserCommandCodeEntity_o *)Entity, v16, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent__showEventPointBuffDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_String_o *name; // x21
  System_String_o *longName; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x23

  if ( (byte_40FA38F & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__, method);
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA38F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   this->fields.tmp_eventPointBuffId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || (itemDialog = this->fields.itemDialog,
        name = Entity->fields.name,
        longName = Entity->fields.longName,
        v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v10,
                                                          v11,
                                                          v12,
                                                          v13),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B170D4();
  }
  ItemDetailInfoComponent__OpenItemMsgInfo(itemDialog, name, longName, v17, 0LL);
}


void __fastcall BattleResultEventItemComponent__showItemDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v16; // x22

  if ( (byte_40FA387 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultEventItemComponent_itemDialogCallBack__, method);
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA387 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   this->fields.tmp_itemId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v11 = (ItemEntity_o *)Entity,
        v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v12,
                                                          v13,
                                                          v14,
                                                          v15),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B170D4();
  }
  ItemDetailInfoComponent__Open(itemDialog, v11, v16, 50, 0LL);
}


void __fastcall BattleResultEventItemComponent__showServantDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  int64_t tmp_userSvtId; // x20
  CommonUI_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_40FA383 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultEventItemComponent_DialogCallBack__, method);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FA383 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  tmp_userSvtId = this->fields.tmp_userSvtId;
  v7 = (CommonUI_o *)Instance;
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v8, v9, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_DialogCallBack__,
    0LL);
  if ( !v7 )
    sub_B170D4();
  CommonUI__OpenServantStatusDialog_18247068(v7, 0, tmp_userSvtId, v12, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F7189 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventItemComponent___c_TypeInfo, v1);
    byte_40F7189 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleResultEventItemComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultEventItemComponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleResultEventItemComponent___c___ctor(
        BattleResultEventItemComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultEventItemComponent___c___createDropInfo_b__42_2(
        BattleResultEventItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_28854740(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_28855136(s->fields.type, 0LL);
}


void __fastcall BattleResultEventItemComponent___c__DisplayClass42_0___ctor(
        BattleResultEventItemComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultEventItemComponent___c__DisplayClass42_0___createDropInfo_b__0(
        BattleResultEventItemComponent___c__DisplayClass42_0_o *this,
        BattleResultEventItemComponent_EventDropItemInfo_o *d,
        const MethodInfo *method)
{
  struct BattleDropItem_array *drop; // x8
  __int64 i; // x9
  BattleDropItem_o *v5; // x8

  drop = this->fields.drop;
  if ( !drop )
    goto LABEL_5;
  i = this->fields.i;
  if ( (unsigned int)i >= drop->max_length )
  {
    sub_B17100(this, d, method);
    sub_B170A0();
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  return d->fields.groupId == v5->fields.eventGroupId;
}


bool __fastcall BattleResultEventItemComponent___c__DisplayClass42_0___createDropInfo_b__1(
        BattleResultEventItemComponent___c__DisplayClass42_0_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  struct BattleDropItem_array *drop; // x8
  __int64 i; // x9
  BattleDropItem_o *v5; // x8

  if ( !item )
    goto LABEL_6;
  drop = this->fields.drop;
  if ( !drop )
    goto LABEL_6;
  i = this->fields.i;
  if ( (unsigned int)i >= drop->max_length )
  {
    sub_B17100(this, item, method);
    sub_B170A0();
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_B170D4();
  return item->fields.eventGroupId == v5->fields.eventGroupId;
}