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

  if ( (byte_42148DA & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultEventItemComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19495/*"img_bg_ep"*/, v8);
    sub_B0D8A4(&StringLiteral_2486/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v9);
    sub_B0D8A4(&StringLiteral_19794/*"img_txt_reward"*/, v10);
    sub_B0D8A4(&StringLiteral_19496/*"img_bg_events"*/, v11);
    byte_42148DA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultEventItemComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2486/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2486/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B0D840(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19794/*"img_txt_reward"*/;
  v14->EVENT_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_19794/*"img_txt_reward"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v14->EVENT_POINT_REWARD_TITLE_NAME, v15, v16, v17, v18, v19, v20, v21);
  v22 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19496/*"img_bg_events"*/;
  v22->EVENT_POINT_REWARD_BG_NAME = (struct System_String_o *)StringLiteral_19496/*"img_bg_events"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v22->EVENT_POINT_REWARD_BG_NAME, v23, v24, v25, v26, v27, v28, v29);
  v30 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_19495/*"img_bg_ep"*/;
  v30->EVENT_POINT_BG_TITLE_NAME = (struct System_String_o *)StringLiteral_19495/*"img_bg_ep"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v30->EVENT_POINT_BG_TITLE_NAME, v31, v32, v33, v34, v35, v36, v37);
  v38 = BattleResultEventItemComponent_TypeInfo;
  BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH = 315;
  v38->static_fields->NEXT_ITEM_LABEL_MAX_WIDTH = 414;
}


void __fastcall BattleResultEventItemComponent___ctor(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42148D9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Color___TypeInfo, method);
    byte_42148D9 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_B0D8BC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  BattleDropItem_array *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_42148D3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__, v3);
    sub_B0D8A4(&StringLiteral_9775/*"OPEN"*/, v4);
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, v5);
    byte_42148D3 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9775/*"OPEN"*/, 0LL);
      dropInfoList = this->fields.dropInfoList;
      if ( dropInfoList )
      {
        currentGroupIndex = this->fields.currentGroupIndex;
        if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        myFsm = (PlayMakerFSM_o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
        if ( myFsm )
        {
          v9 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFsm,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
          BattleResultEventItemComponent__SetItemWindow_24795380(this, v9, v10);
          BattleResultEventItemComponent__SetUi(this, this->fields.currentEventId, v11);
          BattleResultEventItemComponent__Open(this, v12);
          return;
        }
      }
    }
LABEL_13:
    sub_B0D97C(myFsm);
  }
  myFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !myFsm )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Close(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  BattleWindowComponent_EndCall_o *v9; // x21
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x1
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // x19

  if ( (byte_42148D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultEventItemComponent_endClose__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__, v4);
    byte_42148D1 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_13;
  BattleViewItemlistComponent__setHide(itemWindow, 0LL);
  window = this->fields.window;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v7, v8);
  BattleWindowComponent_EndCall___ctor(v9, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endClose__, 0LL);
  if ( !window )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v9,
    window->klass->vtable._13_CompClose.methodPtr);
  itemWindow = (BattleViewItemlistComponent_o *)BattleResultEventItemComponent__isGetItems(this, v10);
  if ( ((unsigned __int8)itemWindow & 1) != 0 )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      goto LABEL_13;
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    newDroplist = dropInfoList->fields._items->m_Items[currentGroupIndex].fields.newDroplist;
  }
  else
  {
    newDroplist = 0LL;
  }
  this->fields.newDroplist = newDroplist;
  p_newDroplist = &this->fields.newDroplist;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_newDroplist,
    (System_Int32_array **)newDroplist,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  itemWindow = (BattleViewItemlistComponent_o *)*(p_newDroplist - 10);
  ++*((_DWORD *)p_newDroplist + 9);
  if ( !itemWindow )
LABEL_13:
    sub_B0D97C(itemWindow);
  BattleViewItemlistComponent__ClearObj(itemWindow, 0LL);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_42148C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42148C3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B0D97C(v10);
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
}


void __fastcall BattleResultEventItemComponent__EndCloseDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148C4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_42148C4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
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
  System_String_o *v10; // x20
  UnityEngine_Object_o *titleAtLabel; // x20
  UILabel_o *v12; // x20
  UnityEngine_Object_o *titleNextItemLabel; // x20
  UILabel_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42148B4 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__,
      method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_2486/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v6);
    sub_B0D8A4(&StringLiteral_2490/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, v7);
    sub_B0D8A4(&StringLiteral_2484/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v8);
    byte_42148B4 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = (BattleWindowComponent_o *)this->fields.itemDialog;
  if ( !window )
    goto LABEL_33;
  ItemDetailInfoComponent__Init((ItemDetailInfoComponent_o *)window, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2490/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v10 = (System_String_o *)window;
  if ( !System_String__Equals_43837244((System_String_o *)window, (System_String_o *)StringLiteral_2490/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v10, 0LL);
  }
  titleAtLabel = (UnityEngine_Object_o *)this->fields.titleAtLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleAtLabel, 0LL, 0LL) )
  {
    v12 = this->fields.titleAtLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2486/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0LL);
    if ( !v12 )
      goto LABEL_33;
    UILabel__set_text(v12, (System_String_o *)window, 0LL);
  }
  titleNextItemLabel = (UnityEngine_Object_o *)this->fields.titleNextItemLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleNextItemLabel, 0LL, 0LL) )
  {
    v14 = this->fields.titleNextItemLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2484/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( v14 )
    {
      UILabel__set_text(v14, (System_String_o *)window, 0LL);
      goto LABEL_31;
    }
LABEL_33:
    sub_B0D97C(window);
  }
LABEL_31:
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  this->fields.currentGroupIndex = 0;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  v17 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo,
                                                                                                 v15,
                                                                                                 v16);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo____ctor(
    v17,
    (const MethodInfo_2EECC74 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
  this->fields.dropInfoList = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dropInfoList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall BattleResultEventItemComponent__OnClickSwitchShowMode(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42148D4 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42148D4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isShowPossessionNum ^= 1u;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v3);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_B0D97C(0LL);
  BattleViewItemlistComponent__SwitchShowNumMode(itemWindow, this->fields.isShowPossessionNum, 0LL);
}


void __fastcall BattleResultEventItemComponent__Open(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  BattleResultEventItemComponent_o *v2; // x19
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v5; // x20
  __int64 v6; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v7; // x20
  __int64 v8; // x21
  const MethodInfo *v9; // x1

  v2 = this;
  if ( (byte_42148B7 & 1) == 0 )
  {
    this = (BattleResultEventItemComponent_o *)sub_B0D8A4(
                                                 &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
                                                 method);
    byte_42148B7 = 1;
  }
  dropInfoList = v2->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_16;
  currentGroupIndex = v2->fields.currentGroupIndex;
  if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (BattleResultEventItemComponent_o *)((__int64 (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, void *))v2->klass->vtable._6_SetTitleSprite.method)(
                                               v2,
                                               (unsigned int)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.groupId,
                                               v2->klass[1]._1.image);
  v5 = v2->fields.dropInfoList;
  if ( !v5 )
    goto LABEL_16;
  v6 = v2->fields.currentGroupIndex;
  if ( v5->fields._size <= (unsigned int)v6 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( v5->fields._items->m_Items[v6].fields.groupId < 1 )
  {
    ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, Il2CppMethodPointer))v2->klass->vtable._5_SetBgSprite.method)(
      v2,
      (unsigned int)v2->fields.currentEventId,
      v2->klass->vtable._6_SetTitleSprite.methodPtr);
    goto LABEL_15;
  }
  v7 = v2->fields.dropInfoList;
  if ( !v7 )
LABEL_16:
    sub_B0D97C(this);
  v8 = v2->fields.currentGroupIndex;
  if ( v7->fields._size <= (unsigned int)v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, Il2CppMethodPointer))v2->klass->vtable._5_SetBgSprite.method)(
    v2,
    (unsigned int)v7->fields._items->m_Items[v8].fields.groupId,
    v2->klass->vtable._6_SetTitleSprite.methodPtr);
LABEL_15:
  BattleResultEventItemComponent__OpenCommonProcess(v2, v9);
}


void __fastcall BattleResultEventItemComponent__OpenCommonProcess(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *touchNextRoot; // x0
  const MethodInfo *v6; // x1
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  BattleWindowComponent_EndCall_o *v10; // x21
  const MethodInfo *v11; // x1

  if ( (byte_42148D8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultEventItemComponent_endOpen__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_5508/*"END_OPEN"*/, v4);
    byte_42148D8 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  this->fields.isShowPossessionNum = 0;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v6);
  touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !touchNextRoot
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5508/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v8, v9),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_endOpen__,
          0LL),
        !window) )
  {
LABEL_7:
    sub_B0D97C(touchNextRoot);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v10,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultEventItemComponent__SetCondensedScale(this, v11);
}


void __fastcall BattleResultEventItemComponent__OpenEventFortification(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  _BOOL8 Items; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  const MethodInfo *v6; // x1

  if ( (byte_42148D7 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      method);
    byte_42148D7 = 1;
  }
  Items = BattleResultEventItemComponent__isGetItems(this, method);
  if ( Items )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      sub_B0D97C(Items);
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  BattleResultEventItemComponent__OpenCommonProcess(this, v6);
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
  UIAtlas_o *mAtlas; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  System_String_o *v16; // x20
  BattleResultEventItemComponent_c *v17; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x20
  System_String_o *v19; // x0
  struct UISprite_o *v20; // x8
  BattleResultEventItemComponent_c *v21; // x0
  int32_t v23; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  v25 = eventId;
  if ( (byte_42148BC & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_BetterList_string__Contains__, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_16263/*"_{0}_{1}"*/, v9);
    byte_42148BC = 1;
  }
  v10 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v10 = BattleResultEventItemComponent_TypeInfo;
  }
  v11 = System_String__Concat_43849904(
          v10->static_fields->EVENT_POINT_BG_TITLE_NAME,
          (System_String_o *)StringLiteral_16263/*"_{0}_{1}"*/,
          0LL);
  v24 = eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = groupId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  mAtlas = (UIAtlas_o *)System_String__Format_43845440(v11, v12, v13, 0LL);
  eventPointAtSprite = this->fields.eventPointAtSprite;
  if ( !eventPointAtSprite )
    goto LABEL_22;
  v16 = (System_String_o *)mAtlas;
  mAtlas = eventPointAtSprite->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_22;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_22;
  if ( BetterList_UILabel___Contains(
         (BetterList_UILabel__o *)mAtlas,
         (UILabel_o *)v16,
         (const MethodInfo_2D5776C *)Method_BetterList_string__Contains__) )
  {
    return v16;
  }
  v17 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v17 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_BG_TITLE_NAME = v17->static_fields->EVENT_POINT_BG_TITLE_NAME;
  v19 = System_Int32__ToString((int32_t)&v25, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_43849904(EVENT_POINT_BG_TITLE_NAME, v19, 0LL);
  v20 = this->fields.eventPointAtSprite;
  if ( !v20
    || (v16 = (System_String_o *)mAtlas, (mAtlas = v20->fields.mAtlas) == 0LL)
    || (mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL)) == 0LL )
  {
LABEL_22:
    sub_B0D97C(mAtlas);
  }
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          (UILabel_o *)v16,
          (const MethodInfo_2D5776C *)Method_BetterList_string__Contains__) )
  {
    v21 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v21 = BattleResultEventItemComponent_TypeInfo;
    }
    return v21->static_fields->EVENT_POINT_BG_TITLE_NAME;
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
  UIAtlas_o *mAtlas; // x0
  struct UISprite_o *bgSp; // x8
  UILabel_o *v11; // x20
  BattleResultEventItemComponent_c *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = imageId;
  if ( (byte_42148BF & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&imageId);
    sub_B0D8A4(&Method_BetterList_string__Contains__, v4);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v5);
    byte_42148BF = 1;
  }
  v6 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v6 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_BG_NAME = v6->static_fields->EVENT_POINT_REWARD_BG_NAME;
  v8 = System_Int32__ToString((int32_t)&v13, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_43852188(
                          EVENT_POINT_REWARD_BG_NAME,
                          (System_String_o *)StringLiteral_15952/*"_"*/,
                          v8,
                          0LL);
  bgSp = this->fields.bgSp;
  if ( !bgSp )
    goto LABEL_17;
  v11 = (UILabel_o *)mAtlas;
  mAtlas = bgSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_17;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_17;
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          v11,
          (const MethodInfo_2D5776C *)Method_BetterList_string__Contains__) )
  {
    v12 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v12 = BattleResultEventItemComponent_TypeInfo;
    }
    v11 = (UILabel_o *)v12->static_fields->EVENT_POINT_REWARD_BG_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.bgSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v11, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.bgSp) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(mAtlas);
  }
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.typeMetadataHandle)(
    mAtlas,
    mAtlas->klass[2]._1.interopData);
}


void __fastcall BattleResultEventItemComponent__SetCondensedScale(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleAtLabel; // x20
  UILabel_o *nextItemLabel; // x0

  if ( (byte_42148D6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultEventItemComponent_TypeInfo, method);
    byte_42148D6 = 1;
  }
  titleAtLabel = this->fields.titleAtLabel;
  nextItemLabel = (UILabel_o *)BattleResultEventItemComponent_TypeInfo;
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
    sub_B0D97C(nextItemLabel);
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
    sub_B0D97C(0LL);
  BattleViewItemlistComponent__setEventResultCount(itemWindow, boostItemManaCount, rewardInfos, 0LL);
  BattleResultEventItemComponent__SetItemWindow_24795380(this, itemArray, v8);
}


void __fastcall BattleResultEventItemComponent__SetItemWindow_24795380(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleViewItemlistComponent_o *itemWindow; // x22
  int32_t currentEventId; // w21
  BattleDropItemComponent_ClickDelegate_o *v8; // x23
  BattleViewItemlistComponent_o *v9; // x0

  if ( (byte_42148B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultEventItemComponent_setShowConf__, itemArray);
    sub_B0D8A4(&BattleDropItemComponent_ClickDelegate_TypeInfo, v5);
    byte_42148B9 = 1;
  }
  itemWindow = this->fields.itemWindow;
  currentEventId = this->fields.currentEventId;
  v8 = (BattleDropItemComponent_ClickDelegate_o *)sub_B0D974(
                                                    BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                    itemArray,
                                                    method);
  BattleDropItemComponent_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow
    || (BattleViewItemlistComponent__setListDataCustomColumn_23830428(
          itemWindow,
          itemArray,
          currentEventId,
          v8,
          this->fields.itemColumnCount,
          0LL),
        (v9 = this->fields.itemWindow) == 0LL) )
  {
    sub_B0D97C(v9);
  }
  BattleViewItemlistComponent__setHide(v9, 0LL);
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
  int64_t v23; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42148BD & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, userEventPoint);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B0D8A4(&StringLiteral_2487/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B0D8A4(&StringLiteral_2488/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v10);
    sub_B0D8A4(&StringLiteral_2485/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_42148BD = 1;
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
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
    v23 = eventRewardENt->fields.point - userEventPoint;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
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
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2488/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
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
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2488/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
        v20 = (Il2CppObject *)countText;
        v21 = (Il2CppObject *)nameText;
      }
      v16 = System_String__Format_43845440(v19, v21, v20, 0LL);
      if ( nextItemLabel )
        goto LABEL_24;
    }
LABEL_18:
    sub_B0D97C(v16);
  }
  v22 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2487/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
  if ( !v22 )
    goto LABEL_18;
  UILabel__set_text(v22, v16, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2485/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
  if ( !nextItemLabel )
    goto LABEL_18;
LABEL_24:
  UILabel__set_text(nextItemLabel, v16, 0LL);
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
  struct UISprite_o *v9; // x21
  struct UISprite_o *v10; // t1
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  UIAtlas_o *mAtlas; // x0
  System_String_o *v14; // x1
  BattleResultEventItemComponent_c *v15; // x0
  System_String_o *EVENT_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v17; // x0
  struct UISprite_o *v18; // x8
  struct UISprite_o *titleSp; // t1
  UILabel_o *v20; // x20
  BattleResultEventItemComponent_c *v21; // x0
  int32_t v22; // [xsp+8h] [xbp-28h] BYREF
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42148C0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    sub_B0D8A4(&Method_BetterList_string__Contains__, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_19795/*"img_txt_reward_{0}_{1}"*/, v7);
    byte_42148C0 = 1;
  }
  if ( currentGroup < 1 )
  {
    v15 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v15 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_TITLE_NAME = v15->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v17 = System_Int32__ToString((int)this + 160, 0LL);
    mAtlas = (UIAtlas_o *)System_String__Concat_43849904(EVENT_POINT_REWARD_TITLE_NAME, v17, 0LL);
    titleSp = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v18 = titleSp;
    if ( !titleSp )
      goto LABEL_21;
    v20 = (UILabel_o *)mAtlas;
    mAtlas = v18->fields.mAtlas;
    if ( !mAtlas )
      goto LABEL_21;
    mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
    if ( !mAtlas )
      goto LABEL_21;
    if ( !BetterList_UILabel___Contains(
            (BetterList_UILabel__o *)mAtlas,
            v20,
            (const MethodInfo_2D5776C *)Method_BetterList_string__Contains__) )
    {
      v21 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v21 = BattleResultEventItemComponent_TypeInfo;
      }
      v20 = (UILabel_o *)v21->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    }
    mAtlas = (UIAtlas_o *)*p_titleSp;
    if ( !*p_titleSp )
LABEL_21:
      sub_B0D97C(mAtlas);
    v14 = (System_String_o *)v20;
  }
  else
  {
    v10 = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v9 = v10;
    v23 = *((_DWORD *)p_titleSp + 4);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v22 = currentGroup;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    mAtlas = (UIAtlas_o *)System_String__Format_43845440((System_String_o *)StringLiteral_19795/*"img_txt_reward_{0}_{1}"*/, v11, v12, 0LL);
    if ( !v10 )
      goto LABEL_21;
    v14 = (System_String_o *)mAtlas;
    mAtlas = (UIAtlas_o *)v9;
  }
  UISprite__set_spriteName((UISprite_o *)mAtlas, v14, 0LL);
  mAtlas = (UIAtlas_o *)*p_titleSp;
  if ( !*p_titleSp )
    goto LABEL_21;
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.typeMetadataHandle)(
    mAtlas,
    mAtlas->klass[2]._1.interopData);
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
  int64_t Instance; // x0
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x8
  int64_t v21; // x23
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v22; // x26
  __int64 currentGroupIndex; // x27
  EventPointGroupEntity_o *v24; // x23
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v25; // x25
  __int64 v26; // x26
  int64_t userId; // x22
  int64_t v28; // x22
  UISprite_o *v29; // x24
  int32_t iconId; // w23
  const MethodInfo *v31; // x3
  int64_t v32; // x22
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UISprite_o *eventIconSprite; // x24
  int32_t v35; // w21
  EventRewardEntity_o *v36; // x20
  BattleResultEventItemComponent_c *v37; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x21
  System_String_o *v39; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  UILabel_o *v41; // x21
  BattleResultEventItemComponent_c *v42; // x0
  const MethodInfo *v43; // x3
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v44; // x25
  UISprite_o *v45; // x23
  __int64 v46; // x26
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v47; // x23
  __int64 v48; // x24
  EventRewardEntity_o *NextEventRewardEntity_18300256; // x0
  const MethodInfo *v50; // x3
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v51; // x22
  __int64 v52; // x23
  System_String_o *v53; // x20
  System_String_o *v54; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x20
  BattleResultEventItemComponent_c *v56; // x0
  UILabel_o *titleAtLabel; // x19
  __int128 v58; // [xsp+10h] [xbp-60h] BYREF
  UserEventEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_42148BB & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&BattleResultEventItemComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_BetterList_string__Contains__, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRewardMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_42148BB = 1;
  }
  entity = 0LL;
  v58 = 0u;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !SelfUserGame || !Instance )
    goto LABEL_78;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)Instance, &entity, SelfUserGame->fields.userId, eventId, 0LL) )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        eventId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_78;
  if ( dropInfoList->fields._size < 1 )
    return;
  v21 = Instance;
  if ( !Instance )
LABEL_78:
    sub_B0D97C(Instance);
  if ( !EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Instance, 0LL) )
  {
    Instance = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( MasterData_WarQuestSelectionMaster )
    {
      v32 = Instance;
      NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                MasterData_WarQuestSelectionMaster,
                                eventId,
                                Instance,
                                0LL);
      eventIconSprite = this->fields.eventIconSprite;
      v35 = *(_DWORD *)(v21 + 44);
      v36 = NextEventRewardEntity;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(eventIconSprite, v35, 0LL);
      v37 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v37 = BattleResultEventItemComponent_TypeInfo;
      }
      EVENT_POINT_BG_TITLE_NAME = v37->static_fields->EVENT_POINT_BG_TITLE_NAME;
      v39 = System_Int32__ToString((int)this + 160, 0LL);
      Instance = (int64_t)System_String__Concat_43849904(EVENT_POINT_BG_TITLE_NAME, v39, 0LL);
      eventPointAtSprite = this->fields.eventPointAtSprite;
      if ( eventPointAtSprite )
      {
        v41 = (UILabel_o *)Instance;
        Instance = (int64_t)eventPointAtSprite->fields.mAtlas;
        if ( Instance )
        {
          Instance = (int64_t)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
          if ( Instance )
          {
            if ( !BetterList_UILabel___Contains(
                    (BetterList_UILabel__o *)Instance,
                    v41,
                    (const MethodInfo_2D5776C *)Method_BetterList_string__Contains__) )
            {
              v42 = BattleResultEventItemComponent_TypeInfo;
              if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
                v42 = BattleResultEventItemComponent_TypeInfo;
              }
              v41 = (UILabel_o *)v42->static_fields->EVENT_POINT_BG_TITLE_NAME;
            }
            Instance = (int64_t)this->fields.eventPointAtSprite;
            if ( Instance )
            {
              UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v41, 0LL);
              BattleResultEventItemComponent__SetNextItemLabel(this, v32, v36, v43);
              return;
            }
          }
        }
      }
    }
    goto LABEL_78;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  v22 = this->fields.dropInfoList;
  if ( !v22 )
    goto LABEL_78;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( v22->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !Instance )
    goto LABEL_78;
  v24 = EventPointGroupMaster__GetEntity(
          (EventPointGroupMaster_o *)Instance,
          this->fields.currentEventId,
          v22->fields._items->m_Items[currentGroupIndex].fields.groupId,
          0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  v25 = this->fields.dropInfoList;
  if ( !v25 )
    goto LABEL_78;
  v26 = this->fields.currentGroupIndex;
  userId = SelfUserGame->fields.userId;
  if ( v25->fields._size <= (unsigned int)v26 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)UserEventPointMaster__GetEntity(
                        (UserEventPointMaster_o *)Instance,
                        userId,
                        eventId,
                        v25->fields._items->m_Items[v26].fields.groupId,
                        0LL);
  if ( !this->fields.eventIconSprite )
    goto LABEL_78;
  v28 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.eventIconSprite,
                        0LL);
  if ( !Instance )
    goto LABEL_78;
  if ( v24 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v29 = this->fields.eventIconSprite;
    iconId = v24->fields.iconId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetItem(v29, iconId, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  v44 = this->fields.dropInfoList;
  if ( !v44 )
    goto LABEL_78;
  v45 = this->fields.eventPointAtSprite;
  v46 = this->fields.currentGroupIndex;
  if ( v44->fields._size <= (unsigned int)v46 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  Instance = (int64_t)BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
                        this,
                        this->fields.currentEventId,
                        v44->fields._items->m_Items[v46].fields.groupId,
                        v31);
  if ( !v45 )
    goto LABEL_78;
  UISprite__set_spriteName(v45, (System_String_o *)Instance, 0LL);
  v47 = this->fields.dropInfoList;
  if ( !v47 )
    goto LABEL_78;
  v48 = this->fields.currentGroupIndex;
  if ( v47->fields._size <= (unsigned int)v48 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !v28 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_78;
  NextEventRewardEntity_18300256 = EventRewardMaster__GetNextEventRewardEntity_18300256(
                                     MasterData_WarQuestSelectionMaster,
                                     eventId,
                                     v47->fields._items->m_Items[v48].fields.groupId,
                                     *(_QWORD *)(v28 + 32),
                                     0LL);
  BattleResultEventItemComponent__SetNextItemLabel(this, *(_QWORD *)(v28 + 32), NextEventRewardEntity_18300256, v50);
  Instance = (int64_t)BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    Instance = (int64_t)BattleResultEventItemComponent_TypeInfo;
  }
  v51 = this->fields.dropInfoList;
  if ( !v51 )
    goto LABEL_78;
  v52 = this->fields.currentGroupIndex;
  v53 = **(System_String_o ***)(Instance + 184);
  if ( v51->fields._size <= (unsigned int)v52 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v58 = *(_OWORD *)&v51->fields._items->m_Items[v52].fields.newDroplist;
  v54 = System_Int32__ToString((int32_t)&v58 + 8, 0LL);
  EVENT_POINT_REWARD_AT = System_String__Concat_43849904(v53, v54, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(EVENT_POINT_REWARD_AT, 0LL) )
  {
    v56 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v56 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_AT = v56->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get(EVENT_POINT_REWARD_AT, 0LL);
  if ( !titleAtLabel )
    goto LABEL_78;
  UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall BattleResultEventItemComponent__UpdateShowModeChangeButton(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *showModeChangeButton; // x0
  System_String_o **v5; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  __int64 v12; // x0
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42148D5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17016/*"btn_bg_20"*/, method);
    sub_B0D8A4(&StringLiteral_17017/*"btn_bg_21"*/, v3);
    byte_42148D5 = 1;
  }
  showModeChangeButton = this->fields.showModeChangeButton;
  if ( !showModeChangeButton )
    goto LABEL_14;
  v5 = (System_String_o **)(this->fields.isShowPossessionNum ? &StringLiteral_17017/*"btn_bg_21"*/ : &StringLiteral_17016/*"btn_bg_20"*/);
  UIButton__set_normalSprite(showModeChangeButton, *v5, 0LL);
  showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors;
  if ( !showModeChanButtonLabelEffectColors )
    goto LABEL_14;
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !max_length )
    {
LABEL_15:
      v12 = sub_B0D9A8(showModeChangeButton);
      sub_B0D948(v12, 0LL);
    }
    p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
    p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
    p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
    p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
    if ( showModeChangeButton )
      goto LABEL_11;
LABEL_14:
    sub_B0D97C(showModeChangeButton);
  }
  if ( max_length <= 1 )
    goto LABEL_15;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !showModeChangeButton )
    goto LABEL_14;
LABEL_11:
  v13.fields.b = *p_a;
  v13.fields.g = *p_b;
  v13.fields.r = *p_g;
  v13.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v13, 0LL);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_42148CB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42148CB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B0D97C(v10);
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
}


void __fastcall BattleResultEventItemComponent__createDropInfo(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x20
  System_Collections_Generic_IEnumerable_T__o *All_BattleBuffData_BuffData; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x8
  int v32; // w9
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **v33; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v34; // x23
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *v35; // x26
  System_Collections_Generic_List_T__o *dropInfoList; // x25
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x8
  __int64 v44; // x9
  __int64 v45; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v46; // x26
  BattleBuffData_BuffData_array *v47; // x25
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_IEnumerable_T__o *v56; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x26
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct System_Collections_Generic_List_BattleDropItem__o *itemList; // x25
  BattleResultEventItemComponent___c_c *v65; // x0
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__42_2; // x26
  Il2CppObject *v68; // x27
  struct BattleResultEventItemComponent___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x0
  BattleResultEventItemComponent_EventDropItemInfo_o v83; // [xsp+20h] [xbp-90h] BYREF
  BattleResultEventItemComponent_EventDropItemInfo_o v84; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42148BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindAll_BattleDropItem___, drop);
    sub_B0D8A4(&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___, v5);
    sub_B0D8A4(&Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Predicate_BattleDropItem___ctor__, v14);
    sub_B0D8A4(&System_Predicate_BattleDropItem__TypeInfo, v15);
    sub_B0D8A4(&Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__, v16);
    sub_B0D8A4(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__, v17);
    sub_B0D8A4(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__, v18);
    sub_B0D8A4(&BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, v19);
    sub_B0D8A4(&BattleResultEventItemComponent___c_TypeInfo, v20);
    byte_42148BE = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v21 = sub_B0D974(BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, drop, method);
  BattleResultEventItemComponent___c__DisplayClass42_0___ctor(
    (BattleResultEventItemComponent___c__DisplayClass42_0_o *)v21,
    0LL);
  if ( !v21 )
LABEL_30:
    sub_B0D97C(All_BattleBuffData_BuffData);
  *(_QWORD *)(v21 + 16) = drop;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)drop, v23, v24, v25, v26, v27, v28);
  v31 = *(_QWORD *)(v21 + 16);
  if ( v31 )
  {
    *(_DWORD *)(v21 + 24) = 0;
    v32 = 0;
    v33 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **)(v21 + 32);
    v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v21 + 40);
    while ( v32 < *(_DWORD *)(v31 + 24) )
    {
      v35 = *v33;
      dropInfoList = (System_Collections_Generic_List_T__o *)this->fields.dropInfoList;
      if ( !*v33 )
      {
        v35 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *)sub_B0D974(
                                                                                         System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo,
                                                                                         v29,
                                                                                         v30);
        System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool____ctor(
          v35,
          (Il2CppObject *)v21,
          Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__,
          (const MethodInfo_2621414 *)Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__);
        *(_QWORD *)(v21 + 32) = v35;
        sub_B0D840((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
      }
      All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
                                                                                     dropInfoList,
                                                                                     (System_Func_T__bool__o *)v35,
                                                                                     (const MethodInfo_1707288 *)Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
      if ( ((unsigned __int8)All_BattleBuffData_BuffData & 1) == 0 )
      {
        memset(&v83, 0, sizeof(v83));
        v43 = *(_QWORD *)(v21 + 16);
        if ( !v43 )
          goto LABEL_30;
        v44 = *(int *)(v21 + 24);
        if ( (unsigned int)v44 >= *(_DWORD *)(v43 + 24) )
        {
          v82 = sub_B0D9A8(All_BattleBuffData_BuffData);
          sub_B0D948(v82, 0LL);
        }
        v45 = *(_QWORD *)(v43 + 8 * v44 + 32);
        if ( !v45 )
          goto LABEL_30;
        v83.fields.groupId = *(_DWORD *)(v45 + 56);
        v46 = *v34;
        v47 = *(BattleBuffData_BuffData_array **)(v21 + 16);
        if ( !*v34 )
        {
          v46 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleDropItem__TypeInfo,
                                                                           v29,
                                                                           v30);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v46,
            (Il2CppObject *)v21,
            Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleDropItem___ctor__);
          *(_QWORD *)(v21 + 40) = v46;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v21 + 40),
            (System_Int32_array **)v46,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
        }
        All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                                       v47,
                                                                                       (System_Predicate_T__o *)v46,
                                                                                       (const MethodInfo_1F68AE0 *)Method_System_Array_FindAll_BattleDropItem___);
        if ( All_BattleBuffData_BuffData )
        {
          v56 = All_BattleBuffData_BuffData;
          v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_BattleDropItem__TypeInfo, v54, v55);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v57,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
          v83.fields.itemList = (struct System_Collections_Generic_List_BattleDropItem__o *)v57;
          sub_B0D840((BattleServantConfConponent_o *)&v83, (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
          All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)v83.fields.itemList;
          if ( !v83.fields.itemList )
            goto LABEL_30;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v83.fields.itemList,
            v56,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
        }
        itemList = v83.fields.itemList;
        if ( !v83.fields.itemList )
          goto LABEL_30;
        v83.fields.itemCount = v83.fields.itemList->fields._size;
        v65 = BattleResultEventItemComponent___c_TypeInfo;
        if ( (BYTE3(BattleResultEventItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleResultEventItemComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent___c_TypeInfo);
          v65 = BattleResultEventItemComponent___c_TypeInfo;
        }
        static_fields = v65->static_fields;
        _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__42_2;
        if ( !_9__42_2 )
        {
          if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v65);
            static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          }
          v68 = (Il2CppObject *)static_fields->__9;
          _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                System_Predicate_BattleDropItem__TypeInfo,
                                                                                v54,
                                                                                v55);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__42_2,
            v68,
            Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleDropItem___ctor__);
          v69 = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          v69->__9__42_2 = (struct System_Predicate_BattleDropItem__o *)_9__42_2;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v69->__9__42_2,
            (System_Int32_array **)_9__42_2,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75);
        }
        v83.fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                                                                                               (System_Predicate_T__o *)_9__42_2,
                                                                                               (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
        sub_B0D840(
          (BattleServantConfConponent_o *)&v83.fields.newDroplist,
          (System_Int32_array **)v83.fields.newDroplist,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81);
        All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dropInfoList;
        if ( !All_BattleBuffData_BuffData )
          goto LABEL_30;
        v84 = v83;
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___Add(
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)All_BattleBuffData_BuffData,
          &v84,
          (const MethodInfo_2EEDA54 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__);
      }
      v31 = *(_QWORD *)(v21 + 16);
      v32 = *(_DWORD *)(v21 + 24) + 1;
      *(_DWORD *)(v21 + 24) = v32;
      if ( !v31 )
        goto LABEL_30;
    }
  }
}


void __fastcall BattleResultEventItemComponent__endClose(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148D2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42148D2 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endCommandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148CC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_42148CC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endEventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148D0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_42148D0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endItemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148C8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_42148C8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endOpen(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148B8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, method);
    byte_42148B8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_B0D97C(myFsm);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_42148CF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_42148CF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__,
    0LL);
  if ( !itemDialog )
    sub_B0D97C(v10);
  ItemDetailInfoComponent__Close_26849360(itemDialog, v9, 0LL);
}


BattleDropItem_o *__fastcall BattleResultEventItemComponent__getNewDrop(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *newDroplist; // x0
  BattleDropItem_o *v6; // x19

  if ( (byte_42148B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v4);
    byte_42148B6 = 1;
  }
  newDroplist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  v6 = (BattleDropItem_o *)newDroplist->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    newDroplist,
    0,
    (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v6;
}


bool __fastcall BattleResultEventItemComponent__isGetItems(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  BattleResultEventItemComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 currentGroupIndex; // x20
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x19
  int size; // w8

  v2 = this;
  if ( (byte_42148B5 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      method);
    this = (BattleResultEventItemComponent_o *)sub_B0D8A4(
                                                 &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
                                                 v3);
    byte_42148B5 = 1;
  }
  currentGroupIndex = v2->fields.currentGroupIndex;
  if ( (currentGroupIndex & 0x80000000) != 0 )
    return 0;
  dropInfoList = v2->fields.dropInfoList;
  if ( !dropInfoList )
    sub_B0D97C(this);
  size = dropInfoList->fields._size;
  if ( size <= (int)currentGroupIndex )
    return 0;
  if ( size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_42148C7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&Method_BattleResultEventItemComponent_endItemDialogCallBack__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_42148C7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_B0D97C(v10);
  ItemDetailInfoComponent__Close_26849360(itemDialog, v9, 0LL);
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
  DataManager_o *Instance; // x0
  signed int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x24
  unsigned int v21; // w25
  int32_t v22; // w22
  QuestRewardInfo_o *v23; // x27
  BattleResultEventItemComponent_c *v24; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x23
  System_String_o *v26; // x0
  System_String_o *v27; // x23
  BattleResultEventItemComponent_c *v28; // x0
  UILabel_o *titleAtLabel; // x24
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x4
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x21
  int size; // w8
  __int64 currentGroupIndex; // x23
  const MethodInfo *v35; // x2
  __int64 v36; // x0
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_42148BA & 1) == 0 )
  {
    sub_B0D8A4(&BattleDropItem___TypeInfo, drop);
    sub_B0D8A4(&BattleResultEventItemComponent_TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_42148BA = 1;
  }
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !resultBoostItemRewardInfos )
    goto LABEL_41;
  max_length = resultBoostItemRewardInfos->max_length;
  if ( max_length >= 1 )
  {
    v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v36 = sub_B0D9A8(Instance);
        sub_B0D948(v36, 0LL);
      }
      v23 = resultBoostItemRewardInfos->m_Items[v21];
      if ( !v23 )
        goto LABEL_41;
      if ( v23->fields.type == 2 )
      {
        if ( !v20 )
          goto LABEL_41;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v20,
                                      v23->fields.objectId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( Instance && LODWORD(Instance->fields.saveNameList) == 5 )
          v22 += v23->fields.num;
      }
      max_length = resultBoostItemRewardInfos->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_19;
    }
  }
  v22 = 0;
LABEL_19:
  v24 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v24 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_AT = v24->static_fields->EVENT_POINT_REWARD_AT;
  v26 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v27 = System_String__Concat_43849904(EVENT_POINT_REWARD_AT, v26, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v27, 0LL) )
  {
    v28 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v28 = BattleResultEventItemComponent_TypeInfo;
    }
    v27 = v28->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v27, 0LL);
  if ( !titleAtLabel
    || (UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0LL),
        this->fields.currentEventId = eventIda,
        BattleResultEventItemComponent__createDropInfo(this, drop, v30),
        Instance = (DataManager_o *)sub_B0D8BC(BattleDropItem___TypeInfo, 0LL),
        (dropInfoList = this->fields.dropInfoList) == 0LL) )
  {
LABEL_41:
    sub_B0D97C(Instance);
  }
  size = dropInfoList->fields._size;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( size > (int)currentGroupIndex )
  {
    if ( size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    Instance = (DataManager_o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  }
  BattleResultEventItemComponent__SetItemWindow(this, (BattleDropItem_array *)Instance, v22, rewardInfos, v31);
  BattleResultEventItemComponent__SetUi(this, eventIda, v35);
}


void __fastcall BattleResultEventItemComponent__setShowCommandCodeConf(
        BattleResultEventItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148C9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9782/*"OPEN_COMMANDCODE"*/, commandCodeId);
    byte_42148C9 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9782/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_B0D97C(this);
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

  if ( (byte_42148CD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9783/*"OPEN_EVENTPOINTBUFF"*/, eventPointBuffId);
    byte_42148CD = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_eventPointBuffId = eventPointBuffId;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9783/*"OPEN_EVENTPOINTBUFF"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__setShowItemConf(
        BattleResultEventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148C5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9788/*"OPEN_ITEM"*/, *(_QWORD *)&itemId);
    byte_42148C5 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9788/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__setShowServantConf(
        BattleResultEventItemComponent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148C1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9796/*"OPEN_SERVANT"*/, userSvtId);
    byte_42148C1 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_userSvtId = userSvtId;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9796/*"OPEN_SERVANT"*/, 0LL);
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
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_42148CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultEventItemComponent_commandCodeDialogCallBack__, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_42148CA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v10 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12),
        ServantStatusDialog_EndDelegate___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v10) )
  {
    sub_B0D97C(Instance);
  }
  CommonUI__OpenServantStatusDialog_17030008(v10, 0, (UserCommandCodeEntity_o *)Entity, v13, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent__showEventPointBuffDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_String_o *lookup; // x21
  System_String_o *masterDataBytes; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x23

  if ( (byte_42148CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__, method);
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_42148CE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.tmp_eventPointBuffId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || (itemDialog = this->fields.itemDialog,
        lookup = (System_String_o *)Instance->fields.lookup,
        masterDataBytes = (System_String_o *)Instance->fields.masterDataBytes,
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v8,
                                                          v9),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B0D97C(Instance);
  }
  ItemDetailInfoComponent__OpenItemMsgInfo(itemDialog, lookup, masterDataBytes, v13, 0LL);
}


void __fastcall BattleResultEventItemComponent__showItemDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  WarEntity_o *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22

  if ( (byte_42148C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultEventItemComponent_itemDialogCallBack__, method);
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_42148C6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v10 = (ItemEntity_o *)Entity,
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v11,
                                                          v12),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B0D97C(Instance);
  }
  ItemDetailInfoComponent__Open(itemDialog, v10, v13, 50, 0LL);
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
  ServantStatusDialog_EndDelegate_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_42148C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultEventItemComponent_DialogCallBack__, method);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_42148C2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  tmp_userSvtId = this->fields.tmp_userSvtId;
  v7 = (CommonUI_o *)Instance;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v8, v9);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_DialogCallBack__,
    0LL);
  if ( !v7 )
    sub_B0D97C(v11);
  CommonUI__OpenServantStatusDialog_17026436(v7, 0, tmp_userSvtId, v10, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211EBF & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultEventItemComponent___c_TypeInfo, v1);
    byte_4211EBF = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleResultEventItemComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultEventItemComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_26783204(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_26783600(s->fields.type, 0LL);
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
  __int64 v7; // x0

  drop = this->fields.drop;
  if ( !drop )
    goto LABEL_5;
  i = this->fields.i;
  if ( (unsigned int)i >= drop->max_length )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_5:
    sub_B0D97C(this);
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
  __int64 v7; // x0

  if ( !item )
    goto LABEL_6;
  drop = this->fields.drop;
  if ( !drop )
    goto LABEL_6;
  i = this->fields.i;
  if ( (unsigned int)i >= drop->max_length )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_B0D97C(this);
  return item->fields.eventGroupId == v5->fields.eventGroupId;
}