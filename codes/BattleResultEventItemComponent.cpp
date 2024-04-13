void __fastcall BattleResultEventItemComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v21; // x1
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
  struct BattleResultEventItemComponent_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  BattleResultEventItemComponent_c *v46; // x8

  if ( (byte_42E88FE & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventItemComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19678/*"img_bg_ep"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2528/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19981/*"img_txt_reward"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19679/*"img_bg_events"*/, v17, v18, v19);
    byte_42E88FE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultEventItemComponent_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_2528/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2528/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B5D560(static_fields, v21, v2, v3, v4, v5, v6, v7);
  v22 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19981/*"img_txt_reward"*/;
  v22->EVENT_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_19981/*"img_txt_reward"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->EVENT_POINT_REWARD_TITLE_NAME, v23, v24, v25, v26, v27, v28, v29);
  v30 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_19679/*"img_bg_events"*/;
  v30->EVENT_POINT_REWARD_BG_NAME = (struct System_String_o *)StringLiteral_19679/*"img_bg_events"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v30->EVENT_POINT_REWARD_BG_NAME, v31, v32, v33, v34, v35, v36, v37);
  v38 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_19678/*"img_bg_ep"*/;
  v38->EVENT_POINT_BG_TITLE_NAME = (struct System_String_o *)StringLiteral_19678/*"img_bg_ep"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v38->EVENT_POINT_BG_TITLE_NAME, v39, v40, v41, v42, v43, v44, v45);
  v46 = BattleResultEventItemComponent_TypeInfo;
  BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH = 315;
  v46->static_fields->NEXT_ITEM_LABEL_MAX_WIDTH = 414;
}


void __fastcall BattleResultEventItemComponent___ctor(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_Color_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E88FD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E88FD = 1;
  }
  v5 = (struct UnityEngine_Color_array *)sub_B5D5DC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultEventItemComponent__CheckNextGroup(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  PlayMakerFSM_o *myFsm; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  BattleDropItem_array *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1

  if ( (byte_42E88F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&StringLiteral_9849/*"OPEN"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, v11, v12, v13);
    byte_42E88F7 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9849/*"OPEN"*/, 0LL);
      dropInfoList = this->fields.dropInfoList;
      if ( dropInfoList )
      {
        currentGroupIndex = this->fields.currentGroupIndex;
        if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        myFsm = (PlayMakerFSM_o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
        if ( myFsm )
        {
          v18 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFsm,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
          BattleResultEventItemComponent__SetItemWindow_25221252(this, v18, v19);
          BattleResultEventItemComponent__SetUi(this, this->fields.currentEventId, v20);
          BattleResultEventItemComponent__Open(this, v21);
          return;
        }
      }
    }
LABEL_13:
    sub_B5D69C(myFsm, v14);
  }
  myFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !myFsm )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Close(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v13; // x21
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x1
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // x19

  if ( (byte_42E88F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultEventItemComponent_endClose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v8,
      v9,
      v10);
    byte_42E88F5 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_13;
  BattleViewItemlistComponent__setHide(itemWindow, 0LL);
  window = this->fields.window;
  v13 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v13, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endClose__, 0LL);
  if ( !window )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v13,
    window->klass->vtable._13_CompClose.methodPtr);
  itemWindow = (BattleViewItemlistComponent_o *)BattleResultEventItemComponent__isGetItems(this, v14);
  if ( ((unsigned __int8)itemWindow & 1) != 0 )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      goto LABEL_13;
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    newDroplist = dropInfoList->fields._items->m_Items[currentGroupIndex].fields.newDroplist;
  }
  else
  {
    newDroplist = 0LL;
  }
  this->fields.newDroplist = newDroplist;
  p_newDroplist = &this->fields.newDroplist;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_newDroplist,
    (System_Int32_array **)newDroplist,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  itemWindow = (BattleViewItemlistComponent_o *)*(p_newDroplist - 10);
  ++*((_DWORD *)p_newDroplist + 9);
  if ( !itemWindow )
LABEL_13:
    sub_B5D69C(itemWindow, method);
  BattleViewItemlistComponent__ClearObj(itemWindow, 0LL);
}


void __fastcall BattleResultEventItemComponent__DialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E88E7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E88E7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


void __fastcall BattleResultEventItemComponent__EndCloseDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88E8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E88E8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Init(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleWindowComponent_o *window; // x0
  System_String_o *v24; // x20
  UnityEngine_Object_o *titleAtLabel; // x20
  UILabel_o *v26; // x20
  UnityEngine_Object_o *titleNextItemLabel; // x20
  UILabel_o *v28; // x20
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42E88D8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2528/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2532/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2526/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v20, v21, v22);
    byte_42E88D8 = 1;
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2532/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v24 = (System_String_o *)window;
  if ( !System_String__Equals_44565128((System_String_o *)window, (System_String_o *)StringLiteral_2532/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)window, v24, 0LL);
  }
  titleAtLabel = (UnityEngine_Object_o *)this->fields.titleAtLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleAtLabel, 0LL, 0LL) )
  {
    v26 = this->fields.titleAtLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2528/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0LL);
    if ( !v26 )
      goto LABEL_33;
    UILabel__set_text(v26, (System_String_o *)window, 0LL);
  }
  titleNextItemLabel = (UnityEngine_Object_o *)this->fields.titleNextItemLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleNextItemLabel, 0LL, 0LL) )
  {
    v28 = this->fields.titleNextItemLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2526/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( v28 )
    {
      UILabel__set_text(v28, (System_String_o *)window, 0LL);
      goto LABEL_31;
    }
LABEL_33:
    sub_B5D69C(window, method);
  }
LABEL_31:
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  this->fields.currentGroupIndex = 0;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  v29 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)sub_B5D694(System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo____ctor(
    v29,
    (const MethodInfo_2F9F818 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
  this->fields.dropInfoList = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dropInfoList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall BattleResultEventItemComponent__OnClickSwitchShowMode(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42E88F8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E88F8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isShowPossessionNum ^= 1u;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v5);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_B5D69C(0LL, v6);
  BattleViewItemlistComponent__SwitchShowNumMode(itemWindow, this->fields.isShowPossessionNum, 0LL);
}


void __fastcall BattleResultEventItemComponent__Open(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultEventItemComponent_o *v4; // x19
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v7; // x20
  __int64 v8; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v9; // x20
  __int64 v10; // x21
  const MethodInfo *v11; // x1

  v4 = this;
  if ( (byte_42E88DB & 1) == 0 )
  {
    this = (BattleResultEventItemComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
                                                 (_DWORD)method,
                                                 v2,
                                                 v3);
    byte_42E88DB = 1;
  }
  dropInfoList = v4->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_16;
  currentGroupIndex = v4->fields.currentGroupIndex;
  if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (BattleResultEventItemComponent_o *)((__int64 (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, void *))v4->klass->vtable._6_SetTitleSprite.method)(
                                               v4,
                                               (unsigned int)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.groupId,
                                               v4->klass[1]._1.image);
  v7 = v4->fields.dropInfoList;
  if ( !v7 )
    goto LABEL_16;
  v8 = v4->fields.currentGroupIndex;
  if ( v7->fields._size <= (unsigned int)v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( v7->fields._items->m_Items[v8].fields.groupId < 1 )
  {
    ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._5_SetBgSprite.method)(
      v4,
      (unsigned int)v4->fields.currentEventId,
      v4->klass->vtable._6_SetTitleSprite.methodPtr);
    goto LABEL_15;
  }
  v9 = v4->fields.dropInfoList;
  if ( !v9 )
LABEL_16:
    sub_B5D69C(this, method);
  v10 = v4->fields.currentGroupIndex;
  if ( v9->fields._size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._5_SetBgSprite.method)(
    v4,
    (unsigned int)v9->fields._items->m_Items[v10].fields.groupId,
    v4->klass->vtable._6_SetTitleSprite.methodPtr);
LABEL_15:
  BattleResultEventItemComponent__OpenCommonProcess(v4, v11);
}


void __fastcall BattleResultEventItemComponent__OpenCommonProcess(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *touchNextRoot; // x0
  const MethodInfo *v12; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_42E88FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultEventItemComponent_endOpen__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, v8, v9, v10);
    byte_42E88FC = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  this->fields.isShowPossessionNum = 0;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v12);
  touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !touchNextRoot
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v14 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_endOpen__,
          0LL),
        !window) )
  {
LABEL_7:
    sub_B5D69C(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v14,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultEventItemComponent__SetCondensedScale(this, v15);
}


void __fastcall BattleResultEventItemComponent__OpenEventFortification(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL8 Items; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  const MethodInfo *v9; // x1

  if ( (byte_42E88FB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E88FB = 1;
  }
  Items = BattleResultEventItemComponent__isGetItems(this, method);
  if ( Items )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      sub_B5D69C(Items, v6);
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
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
  BattleResultEventItemComponent__OpenCommonProcess(this, v9);
}


System_String_o *__fastcall BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
        BattleResultEventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  BattleResultEventItemComponent_c *v16; // x0
  System_String_o *v17; // x22
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v21; // x1
  struct UISprite_o *eventPointAtSprite; // x8
  System_String_o *v23; // x20
  BattleResultEventItemComponent_c *v24; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x20
  System_String_o *v26; // x0
  struct UISprite_o *v27; // x8
  BattleResultEventItemComponent_c *v28; // x0
  int32_t v30; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  v32 = eventId;
  if ( (byte_42E88E0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventItemComponent_TypeInfo, eventId, groupId, method);
    sub_B5D5C4(&Method_BetterList_string__Contains__, v7, v8, v9);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_16409/*"_{0}_{1}"*/, v13, v14, v15);
    byte_42E88E0 = 1;
  }
  v16 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v16 = BattleResultEventItemComponent_TypeInfo;
  }
  v17 = System_String__Concat_44577788(
          v16->static_fields->EVENT_POINT_BG_TITLE_NAME,
          (System_String_o *)StringLiteral_16409/*"_{0}_{1}"*/,
          0LL);
  v31 = eventId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v30 = groupId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  mAtlas = (UIAtlas_o *)System_String__Format_44573324(v17, v18, v19, 0LL);
  eventPointAtSprite = this->fields.eventPointAtSprite;
  if ( !eventPointAtSprite )
    goto LABEL_22;
  v23 = (System_String_o *)mAtlas;
  mAtlas = eventPointAtSprite->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_22;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_22;
  if ( BetterList_UILabel___Contains(
         (BetterList_UILabel__o *)mAtlas,
         (UILabel_o *)v23,
         (const MethodInfo_2BA4698 *)Method_BetterList_string__Contains__) )
  {
    return v23;
  }
  v24 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v24 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_BG_TITLE_NAME = v24->static_fields->EVENT_POINT_BG_TITLE_NAME;
  v26 = System_Int32__ToString((int32_t)&v32, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_44577788(EVENT_POINT_BG_TITLE_NAME, v26, 0LL);
  v27 = this->fields.eventPointAtSprite;
  if ( !v27
    || (v23 = (System_String_o *)mAtlas, (mAtlas = v27->fields.mAtlas) == 0LL)
    || (mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(mAtlas, v21);
  }
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          (UILabel_o *)v23,
          (const MethodInfo_2BA4698 *)Method_BetterList_string__Contains__) )
  {
    v28 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v28 = BattleResultEventItemComponent_TypeInfo;
    }
    return v28->static_fields->EVENT_POINT_BG_TITLE_NAME;
  }
  return v23;
}


void __fastcall BattleResultEventItemComponent__SetBgSprite(
        BattleResultEventItemComponent_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleResultEventItemComponent_c *v11; // x0
  System_String_o *EVENT_POINT_REWARD_BG_NAME; // x20
  System_String_o *v13; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v15; // x1
  struct UISprite_o *bgSp; // x8
  UILabel_o *v17; // x20
  BattleResultEventItemComponent_c *v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-14h] BYREF

  v19 = imageId;
  if ( (byte_42E88E3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventItemComponent_TypeInfo, imageId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BetterList_string__Contains__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v8, v9, v10);
    byte_42E88E3 = 1;
  }
  v11 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v11 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_BG_NAME = v11->static_fields->EVENT_POINT_REWARD_BG_NAME;
  v13 = System_Int32__ToString((int32_t)&v19, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_44580072(
                          EVENT_POINT_REWARD_BG_NAME,
                          (System_String_o *)StringLiteral_16096/*"_"*/,
                          v13,
                          0LL);
  bgSp = this->fields.bgSp;
  if ( !bgSp )
    goto LABEL_17;
  v17 = (UILabel_o *)mAtlas;
  mAtlas = bgSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_17;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_17;
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          v17,
          (const MethodInfo_2BA4698 *)Method_BetterList_string__Contains__) )
  {
    v18 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v18 = BattleResultEventItemComponent_TypeInfo;
    }
    v17 = (UILabel_o *)v18->static_fields->EVENT_POINT_REWARD_BG_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.bgSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v17, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.bgSp) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(mAtlas, v15);
  }
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.typeMetadataHandle)(
    mAtlas,
    mAtlas->klass[2]._1.interopData);
}


void __fastcall BattleResultEventItemComponent__SetCondensedScale(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleAtLabel; // x20
  UILabel_o *nextItemLabel; // x0

  if ( (byte_42E88FA & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventItemComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E88FA = 1;
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
    sub_B5D69C(nextItemLabel, method);
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
    sub_B5D69C(0LL, itemArray);
  BattleViewItemlistComponent__setEventResultCount(itemWindow, boostItemManaCount, rewardInfos, 0LL);
  BattleResultEventItemComponent__SetItemWindow_25221252(this, itemArray, v8);
}


void __fastcall BattleResultEventItemComponent__SetItemWindow_25221252(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleViewItemlistComponent_o *itemWindow; // x22
  int32_t currentEventId; // w21
  BattleDropItemComponent_ClickDelegate_o *v11; // x23
  BattleViewItemlistComponent_o *v12; // x0
  __int64 v13; // x1

  if ( (byte_42E88DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultEventItemComponent_setShowConf__, (_DWORD)itemArray, (_DWORD)method, v3);
    sub_B5D5C4(&BattleDropItemComponent_ClickDelegate_TypeInfo, v6, v7, v8);
    byte_42E88DD = 1;
  }
  itemWindow = this->fields.itemWindow;
  currentEventId = this->fields.currentEventId;
  v11 = (BattleDropItemComponent_ClickDelegate_o *)sub_B5D694(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow
    || (BattleViewItemlistComponent__setListDataCustomColumn_23944100(
          itemWindow,
          itemArray,
          currentEventId,
          v11,
          this->fields.itemColumnCount,
          0LL),
        (v12 = this->fields.itemWindow) == 0LL) )
  {
    sub_B5D69C(v12, v13);
  }
  BattleViewItemlistComponent__setHide(v12, 0LL);
}


void __fastcall BattleResultEventItemComponent__SetNextItemLabel(
        BattleResultEventItemComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardENt,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UILabel_o *atLabel; // x22
  System_String_o *v26; // x23
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v32; // x0
  Il2CppObject *v33; // x2
  Il2CppObject *v34; // x1
  UILabel_o *v35; // x20
  int64_t v36; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E88E1 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, userEventPoint, (_DWORD)eventRewardENt, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2529/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_2530/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_2527/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42E88E1 = 1;
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
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
    v36 = eventRewardENt->fields.point - userEventPoint;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36);
    v28 = System_String__Format(v26, v27, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v28, 0LL);
      isQp = EventRewardEntity__isQp(eventRewardENt, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      if ( isQp )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2530/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
        v33 = (Il2CppObject *)countText;
        v34 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2530/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
        v33 = (Il2CppObject *)countText;
        v34 = (Il2CppObject *)nameText;
      }
      v28 = System_String__Format_44573324(v32, v34, v33, 0LL);
      if ( nextItemLabel )
        goto LABEL_24;
    }
LABEL_18:
    sub_B5D69C(v28, v29);
  }
  v35 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2529/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
  if ( !v35 )
    goto LABEL_18;
  UILabel__set_text(v35, v28, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2527/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
  if ( !nextItemLabel )
    goto LABEL_18;
LABEL_24:
  UILabel__set_text(nextItemLabel, v28, 0LL);
}


void __fastcall BattleResultEventItemComponent__SetTitleSprite(
        BattleResultEventItemComponent_o *this,
        int32_t currentGroup,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct UISprite_o **p_titleSp; // x19
  struct UISprite_o *v16; // x21
  struct UISprite_o *v17; // t1
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v21; // x1
  System_String_o *v22; // x1
  BattleResultEventItemComponent_c *v23; // x0
  System_String_o *EVENT_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v25; // x0
  struct UISprite_o *v26; // x8
  struct UISprite_o *titleSp; // t1
  UILabel_o *v28; // x20
  BattleResultEventItemComponent_c *v29; // x0
  int32_t v30; // [xsp+8h] [xbp-28h] BYREF
  int v31; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E88E4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventItemComponent_TypeInfo, currentGroup, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BetterList_string__Contains__, v6, v7, v8);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19982/*"img_txt_reward_{0}_{1}"*/, v12, v13, v14);
    byte_42E88E4 = 1;
  }
  if ( currentGroup < 1 )
  {
    v23 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v23 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_TITLE_NAME = v23->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v25 = System_Int32__ToString((int)this + 160, 0LL);
    mAtlas = (UIAtlas_o *)System_String__Concat_44577788(EVENT_POINT_REWARD_TITLE_NAME, v25, 0LL);
    titleSp = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v26 = titleSp;
    if ( !titleSp )
      goto LABEL_21;
    v28 = (UILabel_o *)mAtlas;
    mAtlas = v26->fields.mAtlas;
    if ( !mAtlas )
      goto LABEL_21;
    mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
    if ( !mAtlas )
      goto LABEL_21;
    if ( !BetterList_UILabel___Contains(
            (BetterList_UILabel__o *)mAtlas,
            v28,
            (const MethodInfo_2BA4698 *)Method_BetterList_string__Contains__) )
    {
      v29 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v29 = BattleResultEventItemComponent_TypeInfo;
      }
      v28 = (UILabel_o *)v29->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    }
    mAtlas = (UIAtlas_o *)*p_titleSp;
    if ( !*p_titleSp )
LABEL_21:
      sub_B5D69C(mAtlas, v21);
    v22 = (System_String_o *)v28;
  }
  else
  {
    v17 = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v16 = v17;
    v31 = *((_DWORD *)p_titleSp + 4);
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v30 = currentGroup;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    mAtlas = (UIAtlas_o *)System_String__Format_44573324((System_String_o *)StringLiteral_19982/*"img_txt_reward_{0}_{1}"*/, v18, v19, 0LL);
    if ( !v17 )
      goto LABEL_21;
    v22 = (System_String_o *)mAtlas;
    mAtlas = (UIAtlas_o *)v16;
  }
  UISprite__set_spriteName((UISprite_o *)mAtlas, v22, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  UserGameEntity_o *SelfUserGame; // x22
  int64_t Instance; // x0
  __int64 v44; // x1
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x8
  int64_t v47; // x23
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v48; // x26
  __int64 currentGroupIndex; // x27
  EventPointGroupEntity_o *v50; // x23
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v51; // x25
  __int64 v52; // x26
  int64_t userId; // x22
  int64_t v54; // x22
  UISprite_o *v55; // x24
  int32_t iconId; // w23
  const MethodInfo *v57; // x3
  int64_t v58; // x22
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UISprite_o *eventIconSprite; // x24
  int32_t v61; // w21
  EventRewardEntity_o *v62; // x20
  BattleResultEventItemComponent_c *v63; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x21
  System_String_o *v65; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  UILabel_o *v67; // x21
  BattleResultEventItemComponent_c *v68; // x0
  const MethodInfo *v69; // x3
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v70; // x25
  UISprite_o *v71; // x23
  __int64 v72; // x26
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v73; // x23
  __int64 v74; // x24
  EventRewardEntity_o *NextEventRewardEntity_19090948; // x0
  const MethodInfo *v76; // x3
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v77; // x22
  __int64 v78; // x23
  System_String_o *v79; // x20
  System_String_o *v80; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x20
  BattleResultEventItemComponent_c *v82; // x0
  UILabel_o *titleAtLabel; // x19
  __int128 v84; // [xsp+10h] [xbp-60h] BYREF
  UserEventEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_42E88DF & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&BattleResultEventItemComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BetterList_string__Contains__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v33,
      v34,
      v35);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    byte_42E88DF = 1;
  }
  entity = 0LL;
  v84 = 0u;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !SelfUserGame || !Instance )
    goto LABEL_78;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)Instance, &entity, SelfUserGame->fields.userId, eventId, 0LL) )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        eventId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_78;
  if ( dropInfoList->fields._size < 1 )
    return;
  v47 = Instance;
  if ( !Instance )
LABEL_78:
    sub_B5D69C(Instance, v44);
  if ( !EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Instance, 0LL) )
  {
    Instance = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( MasterData_WarQuestSelectionMaster )
    {
      v58 = Instance;
      NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                MasterData_WarQuestSelectionMaster,
                                eventId,
                                Instance,
                                0LL);
      eventIconSprite = this->fields.eventIconSprite;
      v61 = *(_DWORD *)(v47 + 44);
      v62 = NextEventRewardEntity;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(eventIconSprite, v61, 0LL);
      v63 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v63 = BattleResultEventItemComponent_TypeInfo;
      }
      EVENT_POINT_BG_TITLE_NAME = v63->static_fields->EVENT_POINT_BG_TITLE_NAME;
      v65 = System_Int32__ToString((int)this + 160, 0LL);
      Instance = (int64_t)System_String__Concat_44577788(EVENT_POINT_BG_TITLE_NAME, v65, 0LL);
      eventPointAtSprite = this->fields.eventPointAtSprite;
      if ( eventPointAtSprite )
      {
        v67 = (UILabel_o *)Instance;
        Instance = (int64_t)eventPointAtSprite->fields.mAtlas;
        if ( Instance )
        {
          Instance = (int64_t)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
          if ( Instance )
          {
            if ( !BetterList_UILabel___Contains(
                    (BetterList_UILabel__o *)Instance,
                    v67,
                    (const MethodInfo_2BA4698 *)Method_BetterList_string__Contains__) )
            {
              v68 = BattleResultEventItemComponent_TypeInfo;
              if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
                v68 = BattleResultEventItemComponent_TypeInfo;
              }
              v67 = (UILabel_o *)v68->static_fields->EVENT_POINT_BG_TITLE_NAME;
            }
            Instance = (int64_t)this->fields.eventPointAtSprite;
            if ( Instance )
            {
              UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v67, 0LL);
              BattleResultEventItemComponent__SetNextItemLabel(this, v58, v62, v69);
              return;
            }
          }
        }
      }
    }
    goto LABEL_78;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  v48 = this->fields.dropInfoList;
  if ( !v48 )
    goto LABEL_78;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( v48->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !Instance )
    goto LABEL_78;
  v50 = EventPointGroupMaster__GetEntity(
          (EventPointGroupMaster_o *)Instance,
          this->fields.currentEventId,
          v48->fields._items->m_Items[currentGroupIndex].fields.groupId,
          0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  v51 = this->fields.dropInfoList;
  if ( !v51 )
    goto LABEL_78;
  v52 = this->fields.currentGroupIndex;
  userId = SelfUserGame->fields.userId;
  if ( v51->fields._size <= (unsigned int)v52 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)UserEventPointMaster__GetEntity(
                        (UserEventPointMaster_o *)Instance,
                        userId,
                        eventId,
                        v51->fields._items->m_Items[v52].fields.groupId,
                        0LL);
  if ( !this->fields.eventIconSprite )
    goto LABEL_78;
  v54 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.eventIconSprite,
                        0LL);
  if ( !Instance )
    goto LABEL_78;
  if ( v50 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v55 = this->fields.eventIconSprite;
    iconId = v50->fields.iconId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetItem(v55, iconId, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  v70 = this->fields.dropInfoList;
  if ( !v70 )
    goto LABEL_78;
  v71 = this->fields.eventPointAtSprite;
  v72 = this->fields.currentGroupIndex;
  if ( v70->fields._size <= (unsigned int)v72 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  Instance = (int64_t)BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
                        this,
                        this->fields.currentEventId,
                        v70->fields._items->m_Items[v72].fields.groupId,
                        v57);
  if ( !v71 )
    goto LABEL_78;
  UISprite__set_spriteName(v71, (System_String_o *)Instance, 0LL);
  v73 = this->fields.dropInfoList;
  if ( !v73 )
    goto LABEL_78;
  v74 = this->fields.currentGroupIndex;
  if ( v73->fields._size <= (unsigned int)v74 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !v54 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_78;
  NextEventRewardEntity_19090948 = EventRewardMaster__GetNextEventRewardEntity_19090948(
                                     MasterData_WarQuestSelectionMaster,
                                     eventId,
                                     v73->fields._items->m_Items[v74].fields.groupId,
                                     *(_QWORD *)(v54 + 32),
                                     0LL);
  BattleResultEventItemComponent__SetNextItemLabel(this, *(_QWORD *)(v54 + 32), NextEventRewardEntity_19090948, v76);
  Instance = (int64_t)BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    Instance = (int64_t)BattleResultEventItemComponent_TypeInfo;
  }
  v77 = this->fields.dropInfoList;
  if ( !v77 )
    goto LABEL_78;
  v78 = this->fields.currentGroupIndex;
  v79 = **(System_String_o ***)(Instance + 184);
  if ( v77->fields._size <= (unsigned int)v78 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v84 = *(_OWORD *)&v77->fields._items->m_Items[v78].fields.newDroplist;
  v80 = System_Int32__ToString((int32_t)&v84 + 8, 0LL);
  EVENT_POINT_REWARD_AT = System_String__Concat_44577788(v79, v80, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(EVENT_POINT_REWARD_AT, 0LL) )
  {
    v82 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v82 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_AT = v82->static_fields->EVENT_POINT_REWARD_AT;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UIButton_o *showModeChangeButton; // x0
  System_String_o **v9; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  __int64 v16; // x0
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E88F9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v5, v6, v7);
    byte_42E88F9 = 1;
  }
  showModeChangeButton = this->fields.showModeChangeButton;
  if ( !showModeChangeButton )
    goto LABEL_14;
  v9 = (System_String_o **)(this->fields.isShowPossessionNum ? &StringLiteral_17175/*"btn_bg_21"*/ : &StringLiteral_17174/*"btn_bg_20"*/);
  UIButton__set_normalSprite(showModeChangeButton, *v9, 0LL);
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
      v16 = sub_B5D6C8(showModeChangeButton);
      sub_B5D668(v16, 0LL);
    }
    p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
    p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
    p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
    p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
    if ( showModeChangeButton )
      goto LABEL_11;
LABEL_14:
    sub_B5D69C(showModeChangeButton, method);
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
  v17.fields.b = *p_a;
  v17.fields.g = *p_b;
  v17.fields.r = *p_g;
  v17.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v17, 0LL);
}


void __fastcall BattleResultEventItemComponent__commandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E88EF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E88EF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


void __fastcall BattleResultEventItemComponent__createDropInfo(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x20
  System_Collections_Generic_IEnumerable_T__o *All_BattleBuffData_BuffData; // x0
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x8
  int v64; // w9
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **v65; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v66; // x23
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *v67; // x26
  System_Collections_Generic_List_T__o *dropInfoList; // x25
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x8
  __int64 v76; // x9
  __int64 v77; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v78; // x26
  BattleBuffData_BuffData_array *v79; // x25
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Collections_Generic_IEnumerable_T__o *v86; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v87; // x26
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct System_Collections_Generic_List_BattleDropItem__o *itemList; // x25
  BattleResultEventItemComponent___c_c *v95; // x0
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__42_2; // x26
  Il2CppObject *v98; // x27
  struct BattleResultEventItemComponent___c_StaticFields *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x0
  BattleResultEventItemComponent_EventDropItemInfo_o v113; // [xsp+20h] [xbp-90h] BYREF
  BattleResultEventItemComponent_EventDropItemInfo_o v114; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42E88E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_BattleDropItem___, (_DWORD)drop, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Predicate_BattleDropItem___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Predicate_BattleDropItem__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__, v39, v40, v41);
    sub_B5D5C4(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__, v42, v43, v44);
    sub_B5D5C4(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__, v45, v46, v47);
    sub_B5D5C4(&BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&BattleResultEventItemComponent___c_TypeInfo, v51, v52, v53);
    byte_42E88E2 = 1;
  }
  memset(&v113, 0, sizeof(v113));
  v54 = sub_B5D694(BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo);
  BattleResultEventItemComponent___c__DisplayClass42_0___ctor(
    (BattleResultEventItemComponent___c__DisplayClass42_0_o *)v54,
    0LL);
  if ( !v54 )
LABEL_30:
    sub_B5D69C(All_BattleBuffData_BuffData, v56);
  *(_QWORD *)(v54 + 16) = drop;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)drop, v57, v58, v59, v60, v61, v62);
  v63 = *(_QWORD *)(v54 + 16);
  if ( v63 )
  {
    *(_DWORD *)(v54 + 24) = 0;
    v64 = 0;
    v65 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **)(v54 + 32);
    v66 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v54 + 40);
    while ( v64 < *(_DWORD *)(v63 + 24) )
    {
      v67 = *v65;
      dropInfoList = (System_Collections_Generic_List_T__o *)this->fields.dropInfoList;
      if ( !*v65 )
      {
        v67 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *)sub_B5D694(System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo);
        System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool____ctor(
          v67,
          (Il2CppObject *)v54,
          Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__,
          (const MethodInfo_2C3772C *)Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__);
        *(_QWORD *)(v54 + 32) = v67;
        sub_B5D560((BattleServantConfConponent_o *)(v54 + 32), (System_Int32_array **)v67, v69, v70, v71, v72, v73, v74);
      }
      All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
                                                                                     dropInfoList,
                                                                                     (System_Func_T__bool__o *)v67,
                                                                                     (const MethodInfo_1AD6E84 *)Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
      if ( ((unsigned __int8)All_BattleBuffData_BuffData & 1) == 0 )
      {
        memset(&v113, 0, sizeof(v113));
        v75 = *(_QWORD *)(v54 + 16);
        if ( !v75 )
          goto LABEL_30;
        v76 = *(int *)(v54 + 24);
        if ( (unsigned int)v76 >= *(_DWORD *)(v75 + 24) )
        {
          v112 = sub_B5D6C8(All_BattleBuffData_BuffData);
          sub_B5D668(v112, 0LL);
        }
        v77 = *(_QWORD *)(v75 + 8 * v76 + 32);
        if ( !v77 )
          goto LABEL_30;
        v113.fields.groupId = *(_DWORD *)(v77 + 56);
        v78 = *v66;
        v79 = *(BattleBuffData_BuffData_array **)(v54 + 16);
        if ( !*v66 )
        {
          v78 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v78,
            (Il2CppObject *)v54,
            Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_BattleDropItem___ctor__);
          *(_QWORD *)(v54 + 40) = v78;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v54 + 40),
            (System_Int32_array **)v78,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
        }
        All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                                       v79,
                                                                                       (System_Predicate_T__o *)v78,
                                                                                       (const MethodInfo_1FC072C *)Method_System_Array_FindAll_BattleDropItem___);
        if ( All_BattleBuffData_BuffData )
        {
          v86 = All_BattleBuffData_BuffData;
          v87 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleDropItem__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v87,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
          v113.fields.itemList = (struct System_Collections_Generic_List_BattleDropItem__o *)v87;
          sub_B5D560((BattleServantConfConponent_o *)&v113, (System_Int32_array **)v87, v88, v89, v90, v91, v92, v93);
          All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)v113.fields.itemList;
          if ( !v113.fields.itemList )
            goto LABEL_30;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v113.fields.itemList,
            v86,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
        }
        itemList = v113.fields.itemList;
        if ( !v113.fields.itemList )
          goto LABEL_30;
        v113.fields.itemCount = v113.fields.itemList->fields._size;
        v95 = BattleResultEventItemComponent___c_TypeInfo;
        if ( (BYTE3(BattleResultEventItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleResultEventItemComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent___c_TypeInfo);
          v95 = BattleResultEventItemComponent___c_TypeInfo;
        }
        static_fields = v95->static_fields;
        _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__42_2;
        if ( !_9__42_2 )
        {
          if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v95);
            static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          }
          v98 = (Il2CppObject *)static_fields->__9;
          _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__42_2,
            v98,
            Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_BattleDropItem___ctor__);
          v99 = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          v99->__9__42_2 = (struct System_Predicate_BattleDropItem__o *)_9__42_2;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v99->__9__42_2,
            (System_Int32_array **)_9__42_2,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105);
        }
        v113.fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                                                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                                                                                                (System_Predicate_T__o *)_9__42_2,
                                                                                                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
        sub_B5D560(
          (BattleServantConfConponent_o *)&v113.fields.newDroplist,
          (System_Int32_array **)v113.fields.newDroplist,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111);
        All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dropInfoList;
        if ( !All_BattleBuffData_BuffData )
          goto LABEL_30;
        v114 = v113;
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___Add(
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)All_BattleBuffData_BuffData,
          &v114,
          (const MethodInfo_2FA05F8 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__);
      }
      v63 = *(_QWORD *)(v54 + 16);
      v64 = *(_DWORD *)(v54 + 24) + 1;
      *(_DWORD *)(v54 + 24) = v64;
      if ( !v63 )
        goto LABEL_30;
    }
  }
}


void __fastcall BattleResultEventItemComponent__endClose(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88F6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E88F6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endCommandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88F0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E88F0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endEventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88F4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E88F4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endItemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88EC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E88EC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endOpen(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88DC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E88DC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_B5D69C(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
}


void __fastcall BattleResultEventItemComponent__eventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E88F3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E88F3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__,
    0LL);
  if ( !itemDialog )
    sub_B5D69C(v13, v14);
  ItemDetailInfoComponent__Close_28491116(itemDialog, v12, 0LL);
}


BattleDropItem_o *__fastcall BattleResultEventItemComponent__getNewDrop(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *newDroplist; // x0
  BattleDropItem_o *v12; // x19

  if ( (byte_42E88DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v8, v9, v10);
    byte_42E88DA = 1;
  }
  newDroplist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  v12 = (BattleDropItem_o *)newDroplist->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    newDroplist,
    0,
    (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v12;
}


bool __fastcall BattleResultEventItemComponent__isGetItems(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultEventItemComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 currentGroupIndex; // x20
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x19
  int size; // w8

  v4 = this;
  if ( (byte_42E88D9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    this = (BattleResultEventItemComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
                                                 v5,
                                                 v6,
                                                 v7);
    byte_42E88D9 = 1;
  }
  currentGroupIndex = v4->fields.currentGroupIndex;
  if ( (currentGroupIndex & 0x80000000) != 0 )
    return 0;
  dropInfoList = v4->fields.dropInfoList;
  if ( !dropInfoList )
    sub_B5D69C(this, method);
  size = dropInfoList->fields._size;
  if ( size <= (int)currentGroupIndex )
    return 0;
  if ( size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemCount > 0;
}


void __fastcall BattleResultEventItemComponent__itemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E88EB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleResultEventItemComponent_endItemDialogCallBack__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E88EB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_B5D69C(v13, v14);
  ItemDetailInfoComponent__Close_28491116(itemDialog, v12, 0LL);
}


void __fastcall BattleResultEventItemComponent__setResultData(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t eventId,
        QuestRewardInfo_array *resultBoostItemRewardInfos,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  signed int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x24
  unsigned int v38; // w25
  int32_t v39; // w22
  QuestRewardInfo_o *v40; // x27
  BattleResultEventItemComponent_c *v41; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x23
  System_String_o *v43; // x0
  System_String_o *v44; // x23
  BattleResultEventItemComponent_c *v45; // x0
  UILabel_o *titleAtLabel; // x24
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x4
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x21
  int size; // w8
  __int64 currentGroupIndex; // x23
  const MethodInfo *v52; // x2
  __int64 v53; // x0
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_42E88DE & 1) == 0 )
  {
    sub_B5D5C4(&BattleDropItem___TypeInfo, (_DWORD)drop, eventId, resultBoostItemRewardInfos);
    sub_B5D5C4(&BattleResultEventItemComponent_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v19, v20, v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v25,
      v26,
      v27);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    byte_42E88DE = 1;
  }
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !resultBoostItemRewardInfos )
    goto LABEL_41;
  max_length = resultBoostItemRewardInfos->max_length;
  if ( max_length >= 1 )
  {
    v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v38 = 0;
    v39 = 0;
    while ( 1 )
    {
      if ( v38 >= max_length )
      {
        v53 = sub_B5D6C8(Instance);
        sub_B5D668(v53, 0LL);
      }
      v40 = resultBoostItemRewardInfos->m_Items[v38];
      if ( !v40 )
        goto LABEL_41;
      if ( v40->fields.type == 2 )
      {
        if ( !v37 )
          goto LABEL_41;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v37,
                                      v40->fields.objectId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( Instance && LODWORD(Instance->fields.saveNameList) == 5 )
          v39 += v40->fields.num;
      }
      max_length = resultBoostItemRewardInfos->max_length;
      if ( (int)++v38 >= max_length )
        goto LABEL_19;
    }
  }
  v39 = 0;
LABEL_19:
  v41 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v41 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_AT = v41->static_fields->EVENT_POINT_REWARD_AT;
  v43 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v44 = System_String__Concat_44577788(EVENT_POINT_REWARD_AT, v43, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v44, 0LL) )
  {
    v45 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v45 = BattleResultEventItemComponent_TypeInfo;
    }
    v44 = v45->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v44, 0LL);
  if ( !titleAtLabel
    || (UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0LL),
        this->fields.currentEventId = eventIda,
        BattleResultEventItemComponent__createDropInfo(this, drop, v47),
        Instance = (DataManager_o *)sub_B5D5DC(BattleDropItem___TypeInfo, 0LL),
        (dropInfoList = this->fields.dropInfoList) == 0LL) )
  {
LABEL_41:
    sub_B5D69C(Instance, v35);
  }
  size = dropInfoList->fields._size;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( size > (int)currentGroupIndex )
  {
    if ( size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    Instance = (DataManager_o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  }
  BattleResultEventItemComponent__SetItemWindow(this, (BattleDropItem_array *)Instance, v39, rewardInfos, v48);
  BattleResultEventItemComponent__SetUi(this, eventIda, v52);
}


void __fastcall BattleResultEventItemComponent__setShowCommandCodeConf(
        BattleResultEventItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88ED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9856/*"OPEN_COMMANDCODE"*/, commandCodeId, (_DWORD)method, v3);
    byte_42E88ED = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_B5D69C(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9856/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88F1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9857/*"OPEN_EVENTPOINTBUFF"*/, eventPointBuffId, (_DWORD)method, v3);
    byte_42E88F1 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_eventPointBuffId = eventPointBuffId;
  if ( !myFsm )
    sub_B5D69C(0LL, eventPointBuffId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9857/*"OPEN_EVENTPOINTBUFF"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__setShowItemConf(
        BattleResultEventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88E9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9863/*"OPEN_ITEM"*/, itemId, (_DWORD)method, v3);
    byte_42E88E9 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_B5D69C(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9863/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__setShowServantConf(
        BattleResultEventItemComponent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E88E5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9871/*"OPEN_SERVANT"*/, userSvtId, (_DWORD)method, v3);
    byte_42E88E5 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_userSvtId = userSvtId;
  if ( !myFsm )
    sub_B5D69C(0LL, userSvtId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9871/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__showCommandCodeDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v23; // x21
  ServantStatusDialog_EndDelegate_o *v24; // x22

  if ( (byte_42E88EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultEventItemComponent_commandCodeDialogCallBack__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    byte_42E88EE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v24 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v24,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v23) )
  {
    sub_B5D69C(Instance, v21);
  }
  CommonUI__OpenServantStatusDialog_18215196(v23, 0, (UserCommandCodeEntity_o *)Entity, v24, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent__showEventPointBuffDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_String_o *lookup; // x21
  System_String_o *masterDataBytes; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v22; // x23

  if ( (byte_42E88F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E88F2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.tmp_eventPointBuffId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || (itemDialog = this->fields.itemDialog,
        lookup = (System_String_o *)Instance->fields.lookup,
        masterDataBytes = (System_String_o *)Instance->fields.masterDataBytes,
        v22 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v22,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B5D69C(Instance, v18);
  }
  ItemDetailInfoComponent__OpenItemMsgInfo(itemDialog, lookup, masterDataBytes, v22, 0LL);
}


void __fastcall BattleResultEventItemComponent__showItemDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  WarEntity_o *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v21; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v22; // x22

  if ( (byte_42E88EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultEventItemComponent_itemDialogCallBack__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E88EA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v21 = (ItemEntity_o *)Entity,
        v22 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v22,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B5D69C(Instance, v18);
  }
  ItemDetailInfoComponent__Open(itemDialog, v21, v22, 50, 0LL);
}


void __fastcall BattleResultEventItemComponent__showServantDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  int64_t tmp_userSvtId; // x20
  CommonUI_o *v13; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E88E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultEventItemComponent_DialogCallBack__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E88E6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  tmp_userSvtId = this->fields.tmp_userSvtId;
  v13 = (CommonUI_o *)Instance;
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_DialogCallBack__,
    0LL);
  if ( !v13 )
    sub_B5D69C(v15, v16);
  CommonUI__OpenServantStatusDialog_18211624(v13, 0, tmp_userSvtId, v14, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E60AB & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventItemComponent___c_TypeInfo, v1, v2, v3);
    byte_42E60AB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleResultEventItemComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultEventItemComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_28424960(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_28425356(s->fields.type, 0LL);
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
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_5:
    sub_B5D69C(this, d);
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
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_B5D69C(this, item);
  return item->fields.eventGroupId == v5->fields.eventGroupId;
}