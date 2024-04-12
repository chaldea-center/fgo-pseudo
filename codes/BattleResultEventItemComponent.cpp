void __fastcall BattleResultEventItemComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct BattleResultEventItemComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct BattleResultEventItemComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct BattleResultEventItemComponent_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleResultEventItemComponent_c *v33; // x8

  if ( (byte_42B0295 & 1) == 0 )
  {
    sub_B52984(&BattleResultEventItemComponent_TypeInfo);
    sub_B52984(&StringLiteral_19580/*"img_bg_ep"*/);
    sub_B52984(&StringLiteral_2507/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/);
    sub_B52984(&StringLiteral_19879/*"img_txt_reward"*/);
    sub_B52984(&StringLiteral_19581/*"img_bg_events"*/);
    byte_42B0295 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultEventItemComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2507/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2507/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19879/*"img_txt_reward"*/;
  v9->EVENT_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_19879/*"img_txt_reward"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->EVENT_POINT_REWARD_TITLE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19581/*"img_bg_events"*/;
  v17->EVENT_POINT_REWARD_BG_NAME = (struct System_String_o *)StringLiteral_19581/*"img_bg_events"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->EVENT_POINT_REWARD_BG_NAME, v18, v19, v20, v21, v22, v23, v24);
  v25 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_19580/*"img_bg_ep"*/;
  v25->EVENT_POINT_BG_TITLE_NAME = (struct System_String_o *)StringLiteral_19580/*"img_bg_ep"*/;
  sub_B52920((BattleServantConfConponent_o *)&v25->EVENT_POINT_BG_TITLE_NAME, v26, v27, v28, v29, v30, v31, v32);
  v33 = BattleResultEventItemComponent_TypeInfo;
  BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH = 315;
  v33->static_fields->NEXT_ITEM_LABEL_MAX_WIDTH = 414;
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

  if ( (byte_42B0294 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Color___TypeInfo);
    byte_42B0294 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_B5299C(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_B52920(
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
  PlayMakerFSM_o *myFsm; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  BattleDropItem_array *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_42B028E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    sub_B52984(&StringLiteral_9809/*"OPEN"*/);
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    byte_42B028E = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9809/*"OPEN"*/, 0LL);
      dropInfoList = this->fields.dropInfoList;
      if ( dropInfoList )
      {
        currentGroupIndex = this->fields.currentGroupIndex;
        if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        myFsm = (PlayMakerFSM_o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
        if ( myFsm )
        {
          v7 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFsm,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
          BattleResultEventItemComponent__SetItemWindow_25373496(this, v7, v8);
          BattleResultEventItemComponent__SetUi(this, this->fields.currentEventId, v9);
          BattleResultEventItemComponent__Open(this, v10);
          return;
        }
      }
    }
LABEL_13:
    sub_B52A5C(myFsm, v3);
  }
  myFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !myFsm )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9355/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Close(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x1
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // x19

  if ( (byte_42B028C & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultEventItemComponent_endClose__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_42B028C = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_13;
  BattleViewItemlistComponent__setHide(itemWindow, 0LL);
  window = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endClose__, 0LL);
  if ( !window )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v5,
    window->klass->vtable._13_CompClose.methodPtr);
  itemWindow = (BattleViewItemlistComponent_o *)BattleResultEventItemComponent__isGetItems(this, v6);
  if ( ((unsigned __int8)itemWindow & 1) != 0 )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      goto LABEL_13;
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    newDroplist = dropInfoList->fields._items->m_Items[currentGroupIndex].fields.newDroplist;
  }
  else
  {
    newDroplist = 0LL;
  }
  this->fields.newDroplist = newDroplist;
  p_newDroplist = &this->fields.newDroplist;
  sub_B52920(
    (BattleServantConfConponent_o *)p_newDroplist,
    (System_Int32_array **)newDroplist,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  itemWindow = (BattleViewItemlistComponent_o *)*(p_newDroplist - 10);
  ++*((_DWORD *)p_newDroplist + 9);
  if ( !itemWindow )
LABEL_13:
    sub_B52A5C(itemWindow, method);
  BattleViewItemlistComponent__ClearObj(itemWindow, 0LL);
}


void __fastcall BattleResultEventItemComponent__DialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42B027E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B027E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B52A5C(v6, v7);
  CommonUI__CloseServantStatusDialog(Instance, v5, 0LL);
}


void __fastcall BattleResultEventItemComponent__EndCloseDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B027F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3121/*"CLOSE"*/);
    byte_42B027F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3121/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Init(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_String_o *v4; // x20
  UnityEngine_Object_o *titleAtLabel; // x20
  UILabel_o *v6; // x20
  UnityEngine_Object_o *titleNextItemLabel; // x20
  UILabel_o *v8; // x20
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42B026F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2507/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/);
    sub_B52984(&StringLiteral_2511/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/);
    sub_B52984(&StringLiteral_2505/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    byte_42B026F = 1;
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2511/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v4 = (System_String_o *)window;
  if ( !System_String__Equals_44555656((System_String_o *)window, (System_String_o *)StringLiteral_2511/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v4, 0LL);
  }
  titleAtLabel = (UnityEngine_Object_o *)this->fields.titleAtLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleAtLabel, 0LL, 0LL) )
  {
    v6 = this->fields.titleAtLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2507/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0LL);
    if ( !v6 )
      goto LABEL_33;
    UILabel__set_text(v6, (System_String_o *)window, 0LL);
  }
  titleNextItemLabel = (UnityEngine_Object_o *)this->fields.titleNextItemLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleNextItemLabel, 0LL, 0LL) )
  {
    v8 = this->fields.titleNextItemLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2505/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( v8 )
    {
      UILabel__set_text(v8, (System_String_o *)window, 0LL);
      goto LABEL_31;
    }
LABEL_33:
    sub_B52A5C(window, method);
  }
LABEL_31:
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  this->fields.currentGroupIndex = 0;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  v9 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)sub_B52A54(System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo____ctor(
    v9,
    (const MethodInfo_2F7D2A4 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
  this->fields.dropInfoList = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dropInfoList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall BattleResultEventItemComponent__OnClickSwitchShowMode(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42B028F & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B028F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isShowPossessionNum ^= 1u;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v3);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_B52A5C(0LL, v4);
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
  if ( (byte_42B0272 & 1) == 0 )
  {
    this = (BattleResultEventItemComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_42B0272 = 1;
  }
  dropInfoList = v2->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_16;
  currentGroupIndex = v2->fields.currentGroupIndex;
  if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  this = (BattleResultEventItemComponent_o *)((__int64 (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, void *))v2->klass->vtable._6_SetTitleSprite.method)(
                                               v2,
                                               (unsigned int)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.groupId,
                                               v2->klass[1]._1.image);
  v5 = v2->fields.dropInfoList;
  if ( !v5 )
    goto LABEL_16;
  v6 = v2->fields.currentGroupIndex;
  if ( v5->fields._size <= (unsigned int)v6 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
    sub_B52A5C(this, method);
  v8 = v2->fields.currentGroupIndex;
  if ( v7->fields._size <= (unsigned int)v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
  UnityEngine_GameObject_o *touchNextRoot; // x0
  const MethodInfo *v4; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  const MethodInfo *v7; // x1

  if ( (byte_42B0293 & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultEventItemComponent_endOpen__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&StringLiteral_5534/*"END_OPEN"*/);
    byte_42B0293 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  this->fields.isShowPossessionNum = 0;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v4);
  touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !touchNextRoot
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5534/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v6 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_endOpen__,
          0LL),
        !window) )
  {
LABEL_7:
    sub_B52A5C(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v6,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultEventItemComponent__SetCondensedScale(this, v7);
}


void __fastcall BattleResultEventItemComponent__OpenEventFortification(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  _BOOL8 Items; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  const MethodInfo *v7; // x1

  if ( (byte_42B0292 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_42B0292 = 1;
  }
  Items = BattleResultEventItemComponent__isGetItems(this, method);
  if ( Items )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      sub_B52A5C(Items, v4);
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
  BattleResultEventItemComponent__OpenCommonProcess(this, v7);
}


System_String_o *__fastcall BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
        BattleResultEventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  BattleResultEventItemComponent_c *v7; // x0
  System_String_o *v8; // x22
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v12; // x1
  struct UISprite_o *eventPointAtSprite; // x8
  System_String_o *v14; // x20
  BattleResultEventItemComponent_c *v15; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x20
  System_String_o *v17; // x0
  struct UISprite_o *v18; // x8
  BattleResultEventItemComponent_c *v19; // x0
  int32_t v21; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  v23 = eventId;
  if ( (byte_42B0277 & 1) == 0 )
  {
    sub_B52984(&BattleResultEventItemComponent_TypeInfo);
    sub_B52984(&Method_BetterList_string__Contains__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_16324/*"_{0}_{1}"*/);
    byte_42B0277 = 1;
  }
  v7 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v7 = BattleResultEventItemComponent_TypeInfo;
  }
  v8 = System_String__Concat_44568316(
         v7->static_fields->EVENT_POINT_BG_TITLE_NAME,
         (System_String_o *)StringLiteral_16324/*"_{0}_{1}"*/,
         0LL);
  v22 = eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v21 = groupId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  mAtlas = (UIAtlas_o *)System_String__Format_44563852(v8, v9, v10, 0LL);
  eventPointAtSprite = this->fields.eventPointAtSprite;
  if ( !eventPointAtSprite )
    goto LABEL_22;
  v14 = (System_String_o *)mAtlas;
  mAtlas = eventPointAtSprite->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_22;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_22;
  if ( BetterList_UILabel___Contains(
         (BetterList_UILabel__o *)mAtlas,
         (UILabel_o *)v14,
         (const MethodInfo_2B8462C *)Method_BetterList_string__Contains__) )
  {
    return v14;
  }
  v15 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v15 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_BG_TITLE_NAME = v15->static_fields->EVENT_POINT_BG_TITLE_NAME;
  v17 = System_Int32__ToString((int32_t)&v23, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_44568316(EVENT_POINT_BG_TITLE_NAME, v17, 0LL);
  v18 = this->fields.eventPointAtSprite;
  if ( !v18
    || (v14 = (System_String_o *)mAtlas, (mAtlas = v18->fields.mAtlas) == 0LL)
    || (mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL)) == 0LL )
  {
LABEL_22:
    sub_B52A5C(mAtlas, v12);
  }
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          (UILabel_o *)v14,
          (const MethodInfo_2B8462C *)Method_BetterList_string__Contains__) )
  {
    v19 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v19 = BattleResultEventItemComponent_TypeInfo;
    }
    return v19->static_fields->EVENT_POINT_BG_TITLE_NAME;
  }
  return v14;
}


void __fastcall BattleResultEventItemComponent__SetBgSprite(
        BattleResultEventItemComponent_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  BattleResultEventItemComponent_c *v4; // x0
  System_String_o *EVENT_POINT_REWARD_BG_NAME; // x20
  System_String_o *v6; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v8; // x1
  struct UISprite_o *bgSp; // x8
  UILabel_o *v10; // x20
  BattleResultEventItemComponent_c *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = imageId;
  if ( (byte_42B027A & 1) == 0 )
  {
    sub_B52984(&BattleResultEventItemComponent_TypeInfo);
    sub_B52984(&Method_BetterList_string__Contains__);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B027A = 1;
  }
  v4 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v4 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_BG_NAME = v4->static_fields->EVENT_POINT_REWARD_BG_NAME;
  v6 = System_Int32__ToString((int32_t)&v12, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_44570600(
                          EVENT_POINT_REWARD_BG_NAME,
                          (System_String_o *)StringLiteral_16011/*"_"*/,
                          v6,
                          0LL);
  bgSp = this->fields.bgSp;
  if ( !bgSp )
    goto LABEL_17;
  v10 = (UILabel_o *)mAtlas;
  mAtlas = bgSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_17;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_17;
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          v10,
          (const MethodInfo_2B8462C *)Method_BetterList_string__Contains__) )
  {
    v11 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v11 = BattleResultEventItemComponent_TypeInfo;
    }
    v10 = (UILabel_o *)v11->static_fields->EVENT_POINT_REWARD_BG_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.bgSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v10, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.bgSp) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(mAtlas, v8);
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

  if ( (byte_42B0291 & 1) == 0 )
  {
    sub_B52984(&BattleResultEventItemComponent_TypeInfo);
    byte_42B0291 = 1;
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
    sub_B52A5C(nextItemLabel, method);
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
    sub_B52A5C(0LL, itemArray);
  BattleViewItemlistComponent__setEventResultCount(itemWindow, boostItemManaCount, rewardInfos, 0LL);
  BattleResultEventItemComponent__SetItemWindow_25373496(this, itemArray, v8);
}


void __fastcall BattleResultEventItemComponent__SetItemWindow_25373496(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x22
  int32_t currentEventId; // w21
  BattleDropItemComponent_ClickDelegate_o *v7; // x23
  BattleViewItemlistComponent_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42B0274 & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultEventItemComponent_setShowConf__);
    sub_B52984(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_42B0274 = 1;
  }
  itemWindow = this->fields.itemWindow;
  currentEventId = this->fields.currentEventId;
  v7 = (BattleDropItemComponent_ClickDelegate_o *)sub_B52A54(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow
    || (BattleViewItemlistComponent__setListDataCustomColumn_24784268(
          itemWindow,
          itemArray,
          currentEventId,
          v7,
          this->fields.itemColumnCount,
          0LL),
        (v8 = this->fields.itemWindow) == 0LL) )
  {
    sub_B52A5C(v8, v9);
  }
  BattleViewItemlistComponent__setHide(v8, 0LL);
}


void __fastcall BattleResultEventItemComponent__SetNextItemLabel(
        BattleResultEventItemComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardENt,
        const MethodInfo *method)
{
  UILabel_o *atLabel; // x22
  System_String_o *v8; // x23
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v14; // x0
  Il2CppObject *v15; // x2
  Il2CppObject *v16; // x1
  UILabel_o *v17; // x20
  int64_t v18; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42B0278 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B52984(&StringLiteral_2508/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_B52984(&StringLiteral_2509/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/);
    sub_B52984(&StringLiteral_2506/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0278 = 1;
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
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
    v18 = eventRewardENt->fields.point - userEventPoint;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v10 = System_String__Format(v8, v9, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v10, 0LL);
      isQp = EventRewardEntity__isQp(eventRewardENt, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      if ( isQp )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2509/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
        v15 = (Il2CppObject *)countText;
        v16 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2509/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
        v15 = (Il2CppObject *)countText;
        v16 = (Il2CppObject *)nameText;
      }
      v10 = System_String__Format_44563852(v14, v16, v15, 0LL);
      if ( nextItemLabel )
        goto LABEL_24;
    }
LABEL_18:
    sub_B52A5C(v10, v11);
  }
  v17 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2508/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
  if ( !v17 )
    goto LABEL_18;
  UILabel__set_text(v17, v10, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2506/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
  if ( !nextItemLabel )
    goto LABEL_18;
LABEL_24:
  UILabel__set_text(nextItemLabel, v10, 0LL);
}


void __fastcall BattleResultEventItemComponent__SetTitleSprite(
        BattleResultEventItemComponent_o *this,
        int32_t currentGroup,
        const MethodInfo *method)
{
  struct UISprite_o **p_titleSp; // x19
  struct UISprite_o *v6; // x21
  struct UISprite_o *v7; // t1
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v11; // x1
  System_String_o *v12; // x1
  BattleResultEventItemComponent_c *v13; // x0
  System_String_o *EVENT_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v15; // x0
  struct UISprite_o *v16; // x8
  struct UISprite_o *titleSp; // t1
  UILabel_o *v18; // x20
  BattleResultEventItemComponent_c *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B027B & 1) == 0 )
  {
    sub_B52984(&BattleResultEventItemComponent_TypeInfo);
    sub_B52984(&Method_BetterList_string__Contains__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_19880/*"img_txt_reward_{0}_{1}"*/);
    byte_42B027B = 1;
  }
  if ( currentGroup < 1 )
  {
    v13 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v13 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_TITLE_NAME = v13->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v15 = System_Int32__ToString((int)this + 160, 0LL);
    mAtlas = (UIAtlas_o *)System_String__Concat_44568316(EVENT_POINT_REWARD_TITLE_NAME, v15, 0LL);
    titleSp = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v16 = titleSp;
    if ( !titleSp )
      goto LABEL_21;
    v18 = (UILabel_o *)mAtlas;
    mAtlas = v16->fields.mAtlas;
    if ( !mAtlas )
      goto LABEL_21;
    mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
    if ( !mAtlas )
      goto LABEL_21;
    if ( !BetterList_UILabel___Contains(
            (BetterList_UILabel__o *)mAtlas,
            v18,
            (const MethodInfo_2B8462C *)Method_BetterList_string__Contains__) )
    {
      v19 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v19 = BattleResultEventItemComponent_TypeInfo;
      }
      v18 = (UILabel_o *)v19->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    }
    mAtlas = (UIAtlas_o *)*p_titleSp;
    if ( !*p_titleSp )
LABEL_21:
      sub_B52A5C(mAtlas, v11);
    v12 = (System_String_o *)v18;
  }
  else
  {
    v7 = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v6 = v7;
    v21 = *((_DWORD *)p_titleSp + 4);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v20 = currentGroup;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    mAtlas = (UIAtlas_o *)System_String__Format_44563852((System_String_o *)StringLiteral_19880/*"img_txt_reward_{0}_{1}"*/, v8, v9, 0LL);
    if ( !v7 )
      goto LABEL_21;
    v12 = (System_String_o *)mAtlas;
    mAtlas = (UIAtlas_o *)v6;
  }
  UISprite__set_spriteName((UISprite_o *)mAtlas, v12, 0LL);
  mAtlas = (UIAtlas_o *)*p_titleSp;
  if ( !*p_titleSp )
    goto LABEL_21;
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.typeMetadataHandle)(
    mAtlas,
    mAtlas->klass[2]._1.interopData);
}


void __fastcall BattleResultEventItemComponent__SetUi(
        BattleResultEventItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  int64_t Instance; // x0
  __int64 v7; // x1
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x8
  int64_t v10; // x23
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v11; // x26
  __int64 currentGroupIndex; // x27
  EventPointGroupEntity_o *v13; // x23
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v14; // x25
  __int64 v15; // x26
  int64_t userId; // x22
  int64_t v17; // x22
  UISprite_o *v18; // x24
  int32_t iconId; // w23
  const MethodInfo *v20; // x3
  int64_t v21; // x22
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UISprite_o *eventIconSprite; // x24
  int32_t v24; // w21
  EventRewardEntity_o *v25; // x20
  BattleResultEventItemComponent_c *v26; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x21
  System_String_o *v28; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  UILabel_o *v30; // x21
  BattleResultEventItemComponent_c *v31; // x0
  const MethodInfo *v32; // x3
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v33; // x25
  UISprite_o *v34; // x23
  __int64 v35; // x26
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v36; // x23
  __int64 v37; // x24
  EventRewardEntity_o *NextEventRewardEntity_18839704; // x0
  const MethodInfo *v39; // x3
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v40; // x22
  __int64 v41; // x23
  System_String_o *v42; // x20
  System_String_o *v43; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x20
  BattleResultEventItemComponent_c *v45; // x0
  UILabel_o *titleAtLabel; // x19
  __int128 v47; // [xsp+10h] [xbp-60h] BYREF
  UserEventEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_42B0276 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BattleResultEventItemComponent_TypeInfo);
    sub_B52984(&Method_BetterList_string__Contains__);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0276 = 1;
  }
  entity = 0LL;
  v47 = 0u;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !SelfUserGame || !Instance )
    goto LABEL_78;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)Instance, &entity, SelfUserGame->fields.userId, eventId, 0LL) )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        eventId,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_78;
  if ( dropInfoList->fields._size < 1 )
    return;
  v10 = Instance;
  if ( !Instance )
LABEL_78:
    sub_B52A5C(Instance, v7);
  if ( !EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Instance, 0LL) )
  {
    Instance = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( MasterData_WarQuestSelectionMaster )
    {
      v21 = Instance;
      NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                MasterData_WarQuestSelectionMaster,
                                eventId,
                                Instance,
                                0LL);
      eventIconSprite = this->fields.eventIconSprite;
      v24 = *(_DWORD *)(v10 + 44);
      v25 = NextEventRewardEntity;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(eventIconSprite, v24, 0LL);
      v26 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v26 = BattleResultEventItemComponent_TypeInfo;
      }
      EVENT_POINT_BG_TITLE_NAME = v26->static_fields->EVENT_POINT_BG_TITLE_NAME;
      v28 = System_Int32__ToString((int)this + 160, 0LL);
      Instance = (int64_t)System_String__Concat_44568316(EVENT_POINT_BG_TITLE_NAME, v28, 0LL);
      eventPointAtSprite = this->fields.eventPointAtSprite;
      if ( eventPointAtSprite )
      {
        v30 = (UILabel_o *)Instance;
        Instance = (int64_t)eventPointAtSprite->fields.mAtlas;
        if ( Instance )
        {
          Instance = (int64_t)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
          if ( Instance )
          {
            if ( !BetterList_UILabel___Contains(
                    (BetterList_UILabel__o *)Instance,
                    v30,
                    (const MethodInfo_2B8462C *)Method_BetterList_string__Contains__) )
            {
              v31 = BattleResultEventItemComponent_TypeInfo;
              if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
                v31 = BattleResultEventItemComponent_TypeInfo;
              }
              v30 = (UILabel_o *)v31->static_fields->EVENT_POINT_BG_TITLE_NAME;
            }
            Instance = (int64_t)this->fields.eventPointAtSprite;
            if ( Instance )
            {
              UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v30, 0LL);
              BattleResultEventItemComponent__SetNextItemLabel(this, v21, v25, v32);
              return;
            }
          }
        }
      }
    }
    goto LABEL_78;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  v11 = this->fields.dropInfoList;
  if ( !v11 )
    goto LABEL_78;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( v11->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  if ( !Instance )
    goto LABEL_78;
  v13 = EventPointGroupMaster__GetEntity(
          (EventPointGroupMaster_o *)Instance,
          this->fields.currentEventId,
          v11->fields._items->m_Items[currentGroupIndex].fields.groupId,
          0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  v14 = this->fields.dropInfoList;
  if ( !v14 )
    goto LABEL_78;
  v15 = this->fields.currentGroupIndex;
  userId = SelfUserGame->fields.userId;
  if ( v14->fields._size <= (unsigned int)v15 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)UserEventPointMaster__GetEntity(
                        (UserEventPointMaster_o *)Instance,
                        userId,
                        eventId,
                        v14->fields._items->m_Items[v15].fields.groupId,
                        0LL);
  if ( !this->fields.eventIconSprite )
    goto LABEL_78;
  v17 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.eventIconSprite,
                        0LL);
  if ( !Instance )
    goto LABEL_78;
  if ( v13 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v18 = this->fields.eventIconSprite;
    iconId = v13->fields.iconId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetItem(v18, iconId, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  v33 = this->fields.dropInfoList;
  if ( !v33 )
    goto LABEL_78;
  v34 = this->fields.eventPointAtSprite;
  v35 = this->fields.currentGroupIndex;
  if ( v33->fields._size <= (unsigned int)v35 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  Instance = (int64_t)BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
                        this,
                        this->fields.currentEventId,
                        v33->fields._items->m_Items[v35].fields.groupId,
                        v20);
  if ( !v34 )
    goto LABEL_78;
  UISprite__set_spriteName(v34, (System_String_o *)Instance, 0LL);
  v36 = this->fields.dropInfoList;
  if ( !v36 )
    goto LABEL_78;
  v37 = this->fields.currentGroupIndex;
  if ( v36->fields._size <= (unsigned int)v37 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  if ( !v17 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_78;
  NextEventRewardEntity_18839704 = EventRewardMaster__GetNextEventRewardEntity_18839704(
                                     MasterData_WarQuestSelectionMaster,
                                     eventId,
                                     v36->fields._items->m_Items[v37].fields.groupId,
                                     *(_QWORD *)(v17 + 32),
                                     0LL);
  BattleResultEventItemComponent__SetNextItemLabel(this, *(_QWORD *)(v17 + 32), NextEventRewardEntity_18839704, v39);
  Instance = (int64_t)BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    Instance = (int64_t)BattleResultEventItemComponent_TypeInfo;
  }
  v40 = this->fields.dropInfoList;
  if ( !v40 )
    goto LABEL_78;
  v41 = this->fields.currentGroupIndex;
  v42 = **(System_String_o ***)(Instance + 184);
  if ( v40->fields._size <= (unsigned int)v41 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v47 = *(_OWORD *)&v40->fields._items->m_Items[v41].fields.newDroplist;
  v43 = System_Int32__ToString((int32_t)&v47 + 8, 0LL);
  EVENT_POINT_REWARD_AT = System_String__Concat_44568316(v42, v43, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(EVENT_POINT_REWARD_AT, 0LL) )
  {
    v45 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v45 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_AT = v45->static_fields->EVENT_POINT_REWARD_AT;
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
  UIButton_o *showModeChangeButton; // x0
  System_String_o **v4; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  __int64 v11; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B0290 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17083/*"btn_bg_20"*/);
    sub_B52984(&StringLiteral_17084/*"btn_bg_21"*/);
    byte_42B0290 = 1;
  }
  showModeChangeButton = this->fields.showModeChangeButton;
  if ( !showModeChangeButton )
    goto LABEL_14;
  v4 = (System_String_o **)(this->fields.isShowPossessionNum ? &StringLiteral_17084/*"btn_bg_21"*/ : &StringLiteral_17083/*"btn_bg_20"*/);
  UIButton__set_normalSprite(showModeChangeButton, *v4, 0LL);
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
      v11 = sub_B52A88(showModeChangeButton);
      sub_B52A28(v11, 0LL);
    }
    p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
    p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
    p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
    p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
    if ( showModeChangeButton )
      goto LABEL_11;
LABEL_14:
    sub_B52A5C(showModeChangeButton, method);
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
  v12.fields.b = *p_a;
  v12.fields.g = *p_b;
  v12.fields.r = *p_g;
  v12.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v12, 0LL);
}


void __fastcall BattleResultEventItemComponent__commandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42B0286 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0286 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B52A5C(v6, v7);
  CommonUI__CloseServantStatusDialog(Instance, v5, 0LL);
}


void __fastcall BattleResultEventItemComponent__createDropInfo(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_IEnumerable_T__o *All_BattleBuffData_BuffData; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x8
  int v15; // w9
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **v16; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v17; // x23
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *v18; // x26
  System_Collections_Generic_List_T__o *dropInfoList; // x25
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x26
  BattleBuffData_BuffData_array *v30; // x25
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_T__o *v37; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x26
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Collections_Generic_List_BattleDropItem__o *itemList; // x25
  BattleResultEventItemComponent___c_c *v46; // x0
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__42_2; // x26
  Il2CppObject *v49; // x27
  struct BattleResultEventItemComponent___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x0
  BattleResultEventItemComponent_EventDropItemInfo_o v64; // [xsp+20h] [xbp-90h] BYREF
  BattleResultEventItemComponent_EventDropItemInfo_o v65; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42B0279 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_FindAll_BattleDropItem___);
    sub_B52984(&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
    sub_B52984(&Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__);
    sub_B52984(&System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_B52984(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_B52984(&Method_System_Predicate_BattleDropItem___ctor__);
    sub_B52984(&System_Predicate_BattleDropItem__TypeInfo);
    sub_B52984(&Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__);
    sub_B52984(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__);
    sub_B52984(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__);
    sub_B52984(&BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo);
    sub_B52984(&BattleResultEventItemComponent___c_TypeInfo);
    byte_42B0279 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v5 = sub_B52A54(BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo);
  BattleResultEventItemComponent___c__DisplayClass42_0___ctor(
    (BattleResultEventItemComponent___c__DisplayClass42_0_o *)v5,
    0LL);
  if ( !v5 )
LABEL_30:
    sub_B52A5C(All_BattleBuffData_BuffData, v7);
  *(_QWORD *)(v5 + 16) = drop;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)drop, v8, v9, v10, v11, v12, v13);
  v14 = *(_QWORD *)(v5 + 16);
  if ( v14 )
  {
    *(_DWORD *)(v5 + 24) = 0;
    v15 = 0;
    v16 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **)(v5 + 32);
    v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v5 + 40);
    while ( v15 < *(_DWORD *)(v14 + 24) )
    {
      v18 = *v16;
      dropInfoList = (System_Collections_Generic_List_T__o *)this->fields.dropInfoList;
      if ( !*v16 )
      {
        v18 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *)sub_B52A54(System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo);
        System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__,
          (const MethodInfo_2BD1B18 *)Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__);
        *(_QWORD *)(v5 + 32) = v18;
        sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
      }
      All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
                                                                                     dropInfoList,
                                                                                     (System_Func_T__bool__o *)v18,
                                                                                     (const MethodInfo_1A41DBC *)Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
      if ( ((unsigned __int8)All_BattleBuffData_BuffData & 1) == 0 )
      {
        memset(&v64, 0, sizeof(v64));
        v26 = *(_QWORD *)(v5 + 16);
        if ( !v26 )
          goto LABEL_30;
        v27 = *(int *)(v5 + 24);
        if ( (unsigned int)v27 >= *(_DWORD *)(v26 + 24) )
        {
          v63 = sub_B52A88(All_BattleBuffData_BuffData);
          sub_B52A28(v63, 0LL);
        }
        v28 = *(_QWORD *)(v26 + 8 * v27 + 32);
        if ( !v28 )
          goto LABEL_30;
        v64.fields.groupId = *(_DWORD *)(v28 + 56);
        v29 = *v17;
        v30 = *(BattleBuffData_BuffData_array **)(v5 + 16);
        if ( !*v17 )
        {
          v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v29,
            (Il2CppObject *)v5,
            Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__,
            (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleDropItem___ctor__);
          *(_QWORD *)(v5 + 40) = v29;
          sub_B52920(
            (BattleServantConfConponent_o *)(v5 + 40),
            (System_Int32_array **)v29,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
        All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                                       v30,
                                                                                       (System_Predicate_T__o *)v29,
                                                                                       (const MethodInfo_201AB88 *)Method_System_Array_FindAll_BattleDropItem___);
        if ( All_BattleBuffData_BuffData )
        {
          v37 = All_BattleBuffData_BuffData;
          v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleDropItem__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v38,
            (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
          v64.fields.itemList = (struct System_Collections_Generic_List_BattleDropItem__o *)v38;
          sub_B52920((BattleServantConfConponent_o *)&v64, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
          All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)v64.fields.itemList;
          if ( !v64.fields.itemList )
            goto LABEL_30;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64.fields.itemList,
            v37,
            (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
        }
        itemList = v64.fields.itemList;
        if ( !v64.fields.itemList )
          goto LABEL_30;
        v64.fields.itemCount = v64.fields.itemList->fields._size;
        v46 = BattleResultEventItemComponent___c_TypeInfo;
        if ( (BYTE3(BattleResultEventItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleResultEventItemComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent___c_TypeInfo);
          v46 = BattleResultEventItemComponent___c_TypeInfo;
        }
        static_fields = v46->static_fields;
        _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__42_2;
        if ( !_9__42_2 )
        {
          if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v46);
            static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          }
          v49 = (Il2CppObject *)static_fields->__9;
          _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__42_2,
            v49,
            Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__,
            (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleDropItem___ctor__);
          v50 = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          v50->__9__42_2 = (struct System_Predicate_BattleDropItem__o *)_9__42_2;
          sub_B52920(
            (BattleServantConfConponent_o *)&v50->__9__42_2,
            (System_Int32_array **)_9__42_2,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
        }
        v64.fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                                                                                               (System_Predicate_T__o *)_9__42_2,
                                                                                               (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
        sub_B52920(
          (BattleServantConfConponent_o *)&v64.fields.newDroplist,
          (System_Int32_array **)v64.fields.newDroplist,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
        All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dropInfoList;
        if ( !All_BattleBuffData_BuffData )
          goto LABEL_30;
        v65 = v64;
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___Add(
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)All_BattleBuffData_BuffData,
          &v65,
          (const MethodInfo_2F7E084 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__);
      }
      v14 = *(_QWORD *)(v5 + 16);
      v15 = *(_DWORD *)(v5 + 24) + 1;
      *(_DWORD *)(v5 + 24) = v15;
      if ( !v14 )
        goto LABEL_30;
    }
  }
}


void __fastcall BattleResultEventItemComponent__endClose(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B028D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B028D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endCommandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B0287 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3121/*"CLOSE"*/);
    byte_42B0287 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3121/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endEventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B028B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3121/*"CLOSE"*/);
    byte_42B028B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3121/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endItemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B0283 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3121/*"CLOSE"*/);
    byte_42B0283 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3121/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endOpen(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B0273 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    byte_42B0273 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9355/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_B52A5C(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
}


void __fastcall BattleResultEventItemComponent__eventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42B028A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B028A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__,
    0LL);
  if ( !itemDialog )
    sub_B52A5C(v6, v7);
  ItemDetailInfoComponent__Close_28302480(itemDialog, v5, 0LL);
}


BattleDropItem_o *__fastcall BattleResultEventItemComponent__getNewDrop(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *newDroplist; // x0
  BattleDropItem_o *v4; // x19

  if ( (byte_42B0271 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_42B0271 = 1;
  }
  newDroplist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  v4 = (BattleDropItem_o *)newDroplist->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    newDroplist,
    0,
    (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v4;
}


bool __fastcall BattleResultEventItemComponent__isGetItems(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  BattleResultEventItemComponent_o *v2; // x19
  __int64 currentGroupIndex; // x20
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x19
  int size; // w8

  v2 = this;
  if ( (byte_42B0270 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__);
    this = (BattleResultEventItemComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_42B0270 = 1;
  }
  currentGroupIndex = v2->fields.currentGroupIndex;
  if ( (currentGroupIndex & 0x80000000) != 0 )
    return 0;
  dropInfoList = v2->fields.dropInfoList;
  if ( !dropInfoList )
    sub_B52A5C(this, method);
  size = dropInfoList->fields._size;
  if ( size <= (int)currentGroupIndex )
    return 0;
  if ( size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  return dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemCount > 0;
}


void __fastcall BattleResultEventItemComponent__itemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42B0282 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultEventItemComponent_endItemDialogCallBack__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0282 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_B52A5C(v6, v7);
  ItemDetailInfoComponent__Close_28302480(itemDialog, v5, 0LL);
}


void __fastcall BattleResultEventItemComponent__setResultData(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t eventId,
        QuestRewardInfo_array *resultBoostItemRewardInfos,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  signed int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x24
  unsigned int v14; // w25
  int32_t v15; // w22
  QuestRewardInfo_o *v16; // x27
  BattleResultEventItemComponent_c *v17; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x23
  System_String_o *v19; // x0
  System_String_o *v20; // x23
  BattleResultEventItemComponent_c *v21; // x0
  UILabel_o *titleAtLabel; // x24
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x4
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x21
  int size; // w8
  __int64 currentGroupIndex; // x23
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_42B0275 & 1) == 0 )
  {
    sub_B52984(&BattleDropItem___TypeInfo);
    sub_B52984(&BattleResultEventItemComponent_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0275 = 1;
  }
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !resultBoostItemRewardInfos )
    goto LABEL_41;
  max_length = resultBoostItemRewardInfos->max_length;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v29 = sub_B52A88(Instance);
        sub_B52A28(v29, 0LL);
      }
      v16 = resultBoostItemRewardInfos->m_Items[v14];
      if ( !v16 )
        goto LABEL_41;
      if ( v16->fields.type == 2 )
      {
        if ( !v13 )
          goto LABEL_41;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v13,
                                      v16->fields.objectId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( Instance && LODWORD(Instance->fields.saveNameList) == 5 )
          v15 += v16->fields.num;
      }
      max_length = resultBoostItemRewardInfos->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_19;
    }
  }
  v15 = 0;
LABEL_19:
  v17 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v17 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_AT = v17->static_fields->EVENT_POINT_REWARD_AT;
  v19 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v20 = System_String__Concat_44568316(EVENT_POINT_REWARD_AT, v19, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v20, 0LL) )
  {
    v21 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v21 = BattleResultEventItemComponent_TypeInfo;
    }
    v20 = v21->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v20, 0LL);
  if ( !titleAtLabel
    || (UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0LL),
        this->fields.currentEventId = eventIda,
        BattleResultEventItemComponent__createDropInfo(this, drop, v23),
        Instance = (DataManager_o *)sub_B5299C(BattleDropItem___TypeInfo, 0LL),
        (dropInfoList = this->fields.dropInfoList) == 0LL) )
  {
LABEL_41:
    sub_B52A5C(Instance, v11);
  }
  size = dropInfoList->fields._size;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( size > (int)currentGroupIndex )
  {
    if ( size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    Instance = (DataManager_o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  }
  BattleResultEventItemComponent__SetItemWindow(this, (BattleDropItem_array *)Instance, v15, rewardInfos, v24);
  BattleResultEventItemComponent__SetUi(this, eventIda, v28);
}


void __fastcall BattleResultEventItemComponent__setShowCommandCodeConf(
        BattleResultEventItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B0284 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9816/*"OPEN_COMMANDCODE"*/);
    byte_42B0284 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_B52A5C(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9816/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42B0288 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9817/*"OPEN_EVENTPOINTBUFF"*/);
    byte_42B0288 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_eventPointBuffId = eventPointBuffId;
  if ( !myFsm )
    sub_B52A5C(0LL, eventPointBuffId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9817/*"OPEN_EVENTPOINTBUFF"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__setShowItemConf(
        BattleResultEventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B0280 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9822/*"OPEN_ITEM"*/);
    byte_42B0280 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_B52A5C(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9822/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__setShowServantConf(
        BattleResultEventItemComponent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B027C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9830/*"OPEN_SERVANT"*/);
    byte_42B027C = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_userSvtId = userSvtId;
  if ( !myFsm )
    sub_B52A5C(0LL, userSvtId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9830/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__showCommandCodeDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v6; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22

  if ( (byte_42B0285 & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultEventItemComponent_commandCodeDialogCallBack__);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0285 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v6 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v6) )
  {
    sub_B52A5C(Instance, v4);
  }
  CommonUI__OpenServantStatusDialog_18171260(v6, 0, (UserCommandCodeEntity_o *)Entity, v7, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent__showEventPointBuffDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_String_o *lookup; // x21
  System_String_o *masterDataBytes; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x23

  if ( (byte_42B0289 & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__);
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_B52984(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0289 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.tmp_eventPointBuffId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || (itemDialog = this->fields.itemDialog,
        lookup = (System_String_o *)Instance->fields.lookup,
        masterDataBytes = (System_String_o *)Instance->fields.masterDataBytes,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B52A5C(Instance, v4);
  }
  ItemDetailInfoComponent__OpenItemMsgInfo(itemDialog, lookup, masterDataBytes, v8, 0LL);
}


void __fastcall BattleResultEventItemComponent__showItemDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v7; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x22

  if ( (byte_42B0281 & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultEventItemComponent_itemDialogCallBack__);
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0281 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v7 = (ItemEntity_o *)Entity,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B52A5C(Instance, v4);
  }
  ItemDetailInfoComponent__Open(itemDialog, v7, v8, 50, 0LL);
}


void __fastcall BattleResultEventItemComponent__showServantDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  int64_t tmp_userSvtId; // x20
  CommonUI_o *v5; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B027D & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultEventItemComponent_DialogCallBack__);
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B027D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  tmp_userSvtId = this->fields.tmp_userSvtId;
  v5 = (CommonUI_o *)Instance;
  v6 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_DialogCallBack__,
    0LL);
  if ( !v5 )
    sub_B52A5C(v7, v8);
  CommonUI__OpenServantStatusDialog_18167688(v5, 0, tmp_userSvtId, v6, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD828 & 1) == 0 )
  {
    sub_B52984(&BattleResultEventItemComponent___c_TypeInfo);
    byte_42AD828 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleResultEventItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultEventItemComponent___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_28236324(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_28236720(s->fields.type, 0LL);
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
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_5:
    sub_B52A5C(this, d);
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
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_B52A5C(this, item);
  return item->fields.eventGroupId == v5->fields.eventGroupId;
}