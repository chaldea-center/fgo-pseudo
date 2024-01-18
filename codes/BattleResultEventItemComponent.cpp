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

  if ( (byte_4187EBA & 1) == 0 )
  {
    sub_B2C35C(&BattleResultEventItemComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19433/*"img_bg_ep"*/, v8);
    sub_B2C35C(&StringLiteral_2475/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v9);
    sub_B2C35C(&StringLiteral_19732/*"img_txt_reward"*/, v10);
    sub_B2C35C(&StringLiteral_19434/*"img_bg_events"*/, v11);
    byte_4187EBA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultEventItemComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2475/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2475/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_B2C2F8(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19732/*"img_txt_reward"*/;
  v14->EVENT_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_19732/*"img_txt_reward"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->EVENT_POINT_REWARD_TITLE_NAME, v15, v16, v17, v18, v19, v20, v21);
  v22 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19434/*"img_bg_events"*/;
  v22->EVENT_POINT_REWARD_BG_NAME = (struct System_String_o *)StringLiteral_19434/*"img_bg_events"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v22->EVENT_POINT_REWARD_BG_NAME, v23, v24, v25, v26, v27, v28, v29);
  v30 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_19433/*"img_bg_ep"*/;
  v30->EVENT_POINT_BG_TITLE_NAME = (struct System_String_o *)StringLiteral_19433/*"img_bg_ep"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->EVENT_POINT_BG_TITLE_NAME, v31, v32, v33, v34, v35, v36, v37);
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

  if ( (byte_4187EB9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Color___TypeInfo, method);
    byte_4187EB9 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_B2C374(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_B2C2F8(
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
  __int64 v6; // x1
  PlayMakerFSM_o *myFsm; // x0
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  BattleDropItem_array *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1

  if ( (byte_4187EB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__, v3);
    sub_B2C35C(&StringLiteral_9751/*"OPEN"*/, v4);
    sub_B2C35C(&StringLiteral_9298/*"NEXT"*/, v5);
    byte_4187EB3 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9751/*"OPEN"*/, 0LL);
      dropInfoList = this->fields.dropInfoList;
      if ( dropInfoList )
      {
        currentGroupIndex = this->fields.currentGroupIndex;
        if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        myFsm = (PlayMakerFSM_o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
        if ( myFsm )
        {
          v10 = (BattleDropItem_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFsm,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
          BattleResultEventItemComponent__SetItemWindow_25644588(this, v10, v11);
          BattleResultEventItemComponent__SetUi(this, this->fields.currentEventId, v12);
          BattleResultEventItemComponent__Open(this, v13);
          return;
        }
      }
    }
LABEL_13:
    sub_B2C434(myFsm, v6);
  }
  myFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !myFsm )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9298/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Close(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v7; // x21
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x20
  __int64 currentGroupIndex; // x21
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x1
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // x19

  if ( (byte_4187EB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultEventItemComponent_endClose__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__, v4);
    byte_4187EB1 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_13;
  BattleViewItemlistComponent__setHide(itemWindow, 0LL);
  window = this->fields.window;
  v7 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v7, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endClose__, 0LL);
  if ( !window )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v7,
    window->klass->vtable._13_CompClose.methodPtr);
  itemWindow = (BattleViewItemlistComponent_o *)BattleResultEventItemComponent__isGetItems(this, v8);
  if ( ((unsigned __int8)itemWindow & 1) != 0 )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      goto LABEL_13;
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    newDroplist = dropInfoList->fields._items->m_Items[currentGroupIndex].fields.newDroplist;
  }
  else
  {
    newDroplist = 0LL;
  }
  this->fields.newDroplist = newDroplist;
  p_newDroplist = &this->fields.newDroplist;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_newDroplist,
    (System_Int32_array **)newDroplist,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  itemWindow = (BattleViewItemlistComponent_o *)*(p_newDroplist - 10);
  ++*((_DWORD *)p_newDroplist + 9);
  if ( !itemWindow )
LABEL_13:
    sub_B2C434(itemWindow, method);
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
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4187EA3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, flg);
    sub_B2C35C(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4187EA3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B2C434(v8, v9);
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
}


void __fastcall BattleResultEventItemComponent__EndCloseDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187EA4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3089/*"CLOSE"*/, method);
    byte_4187EA4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3089/*"CLOSE"*/, 0LL);
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
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4187E94 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__,
      method);
    sub_B2C35C(&System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_2475/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v6);
    sub_B2C35C(&StringLiteral_2479/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, v7);
    sub_B2C35C(&StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v8);
    byte_4187E94 = 1;
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
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2479/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_33;
  v10 = (System_String_o *)window;
  if ( !System_String__Equals_44292872((System_String_o *)window, (System_String_o *)StringLiteral_2479/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL) )
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
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2475/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0LL);
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
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2473/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( v14 )
    {
      UILabel__set_text(v14, (System_String_o *)window, 0LL);
      goto LABEL_31;
    }
LABEL_33:
    sub_B2C434(window, method);
  }
LABEL_31:
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  this->fields.currentGroupIndex = 0;
  if ( !window )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  v15 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)sub_B2C42C(System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo____ctor(
    v15,
    (const MethodInfo_2E9E95C *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
  this->fields.dropInfoList = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dropInfoList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall BattleResultEventItemComponent__OnClickSwitchShowMode(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4187EB4 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187EB4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isShowPossessionNum ^= 1u;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v3);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_B2C434(0LL, v4);
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
  if ( (byte_4187E97 & 1) == 0 )
  {
    this = (BattleResultEventItemComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
                                                 method);
    byte_4187E97 = 1;
  }
  dropInfoList = v2->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_16;
  currentGroupIndex = v2->fields.currentGroupIndex;
  if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (BattleResultEventItemComponent_o *)((__int64 (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, void *))v2->klass->vtable._6_SetTitleSprite.method)(
                                               v2,
                                               (unsigned int)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.groupId,
                                               v2->klass[1]._1.image);
  v5 = v2->fields.dropInfoList;
  if ( !v5 )
    goto LABEL_16;
  v6 = v2->fields.currentGroupIndex;
  if ( v5->fields._size <= (unsigned int)v6 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, method);
  v8 = v2->fields.currentGroupIndex;
  if ( v7->fields._size <= (unsigned int)v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  BattleWindowComponent_EndCall_o *v8; // x21
  const MethodInfo *v9; // x1

  if ( (byte_4187EB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultEventItemComponent_endOpen__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_5492/*"END_OPEN"*/, v4);
    byte_4187EB8 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  this->fields.isShowPossessionNum = 0;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v6);
  touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !touchNextRoot
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5492/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v8 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v8,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_endOpen__,
          0LL),
        !window) )
  {
LABEL_7:
    sub_B2C434(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v8,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultEventItemComponent__SetCondensedScale(this, v9);
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

  if ( (byte_4187EB7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      method);
    byte_4187EB7 = 1;
  }
  Items = BattleResultEventItemComponent__isGetItems(this, method);
  if ( Items )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      sub_B2C434(Items, v4);
    currentGroupIndex = this->fields.currentGroupIndex;
    if ( dropInfoList->fields._size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v15; // x1
  struct UISprite_o *eventPointAtSprite; // x8
  System_String_o *v17; // x20
  BattleResultEventItemComponent_c *v18; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x20
  System_String_o *v20; // x0
  struct UISprite_o *v21; // x8
  BattleResultEventItemComponent_c *v22; // x0
  int32_t v24; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v25; // [xsp+8h] [xbp-38h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  v26 = eventId;
  if ( (byte_4187E9C & 1) == 0 )
  {
    sub_B2C35C(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_BetterList_string__Contains__, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_16215/*"_{0}_{1}"*/, v9);
    byte_4187E9C = 1;
  }
  v10 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v10 = BattleResultEventItemComponent_TypeInfo;
  }
  v11 = System_String__Concat_44305532(
          v10->static_fields->EVENT_POINT_BG_TITLE_NAME,
          (System_String_o *)StringLiteral_16215/*"_{0}_{1}"*/,
          0LL);
  v25 = eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = groupId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  mAtlas = (UIAtlas_o *)System_String__Format_44301068(v11, v12, v13, 0LL);
  eventPointAtSprite = this->fields.eventPointAtSprite;
  if ( !eventPointAtSprite )
    goto LABEL_22;
  v17 = (System_String_o *)mAtlas;
  mAtlas = eventPointAtSprite->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_22;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_22;
  if ( BetterList_UILabel___Contains(
         (BetterList_UILabel__o *)mAtlas,
         (UILabel_o *)v17,
         (const MethodInfo_2D62918 *)Method_BetterList_string__Contains__) )
  {
    return v17;
  }
  v18 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v18 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_BG_TITLE_NAME = v18->static_fields->EVENT_POINT_BG_TITLE_NAME;
  v20 = System_Int32__ToString((int32_t)&v26, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_44305532(EVENT_POINT_BG_TITLE_NAME, v20, 0LL);
  v21 = this->fields.eventPointAtSprite;
  if ( !v21
    || (v17 = (System_String_o *)mAtlas, (mAtlas = v21->fields.mAtlas) == 0LL)
    || (mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL)) == 0LL )
  {
LABEL_22:
    sub_B2C434(mAtlas, v15);
  }
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          (UILabel_o *)v17,
          (const MethodInfo_2D62918 *)Method_BetterList_string__Contains__) )
  {
    v22 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v22 = BattleResultEventItemComponent_TypeInfo;
    }
    return v22->static_fields->EVENT_POINT_BG_TITLE_NAME;
  }
  return v17;
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
  __int64 v10; // x1
  struct UISprite_o *bgSp; // x8
  UILabel_o *v12; // x20
  BattleResultEventItemComponent_c *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = imageId;
  if ( (byte_4187E9F & 1) == 0 )
  {
    sub_B2C35C(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&imageId);
    sub_B2C35C(&Method_BetterList_string__Contains__, v4);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v5);
    byte_4187E9F = 1;
  }
  v6 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v6 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_BG_NAME = v6->static_fields->EVENT_POINT_REWARD_BG_NAME;
  v8 = System_Int32__ToString((int32_t)&v14, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_44307816(
                          EVENT_POINT_REWARD_BG_NAME,
                          (System_String_o *)StringLiteral_15905/*"_"*/,
                          v8,
                          0LL);
  bgSp = this->fields.bgSp;
  if ( !bgSp )
    goto LABEL_17;
  v12 = (UILabel_o *)mAtlas;
  mAtlas = bgSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_17;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_17;
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          v12,
          (const MethodInfo_2D62918 *)Method_BetterList_string__Contains__) )
  {
    v13 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v13 = BattleResultEventItemComponent_TypeInfo;
    }
    v12 = (UILabel_o *)v13->static_fields->EVENT_POINT_REWARD_BG_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.bgSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v12, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.bgSp) == 0LL) )
  {
LABEL_17:
    sub_B2C434(mAtlas, v10);
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

  if ( (byte_4187EB6 & 1) == 0 )
  {
    sub_B2C35C(&BattleResultEventItemComponent_TypeInfo, method);
    byte_4187EB6 = 1;
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
    sub_B2C434(nextItemLabel, method);
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
    sub_B2C434(0LL, itemArray);
  BattleViewItemlistComponent__setEventResultCount(itemWindow, boostItemManaCount, rewardInfos, 0LL);
  BattleResultEventItemComponent__SetItemWindow_25644588(this, itemArray, v8);
}


void __fastcall BattleResultEventItemComponent__SetItemWindow_25644588(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleViewItemlistComponent_o *itemWindow; // x22
  int32_t currentEventId; // w21
  BattleDropItemComponent_ClickDelegate_o *v8; // x23
  BattleViewItemlistComponent_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4187E99 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultEventItemComponent_setShowConf__, itemArray);
    sub_B2C35C(&BattleDropItemComponent_ClickDelegate_TypeInfo, v5);
    byte_4187E99 = 1;
  }
  itemWindow = this->fields.itemWindow;
  currentEventId = this->fields.currentEventId;
  v8 = (BattleDropItemComponent_ClickDelegate_o *)sub_B2C42C(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow
    || (BattleViewItemlistComponent__setListDataCustomColumn_24691564(
          itemWindow,
          itemArray,
          currentEventId,
          v8,
          this->fields.itemColumnCount,
          0LL),
        (v9 = this->fields.itemWindow) == 0LL) )
  {
    sub_B2C434(v9, v10);
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
  __int64 v17; // x1
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v20; // x0
  Il2CppObject *v21; // x2
  Il2CppObject *v22; // x1
  UILabel_o *v23; // x20
  int64_t v24; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4187E9D & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, userEventPoint);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_B2C35C(&StringLiteral_2476/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_B2C35C(&StringLiteral_2477/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v10);
    sub_B2C35C(&StringLiteral_2474/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4187E9D = 1;
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
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
    v24 = eventRewardENt->fields.point - userEventPoint;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24);
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
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2477/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
        v21 = (Il2CppObject *)countText;
        v22 = (Il2CppObject *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2477/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
        v21 = (Il2CppObject *)countText;
        v22 = (Il2CppObject *)nameText;
      }
      v16 = System_String__Format_44301068(v20, v22, v21, 0LL);
      if ( nextItemLabel )
        goto LABEL_24;
    }
LABEL_18:
    sub_B2C434(v16, v17);
  }
  v23 = this->fields.atLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2476/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
  if ( !v23 )
    goto LABEL_18;
  UILabel__set_text(v23, v16, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2474/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
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
  __int64 v14; // x1
  System_String_o *v15; // x1
  BattleResultEventItemComponent_c *v16; // x0
  System_String_o *EVENT_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v18; // x0
  struct UISprite_o *v19; // x8
  struct UISprite_o *titleSp; // t1
  UILabel_o *v21; // x20
  BattleResultEventItemComponent_c *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187EA0 & 1) == 0 )
  {
    sub_B2C35C(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    sub_B2C35C(&Method_BetterList_string__Contains__, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_19733/*"img_txt_reward_{0}_{1}"*/, v7);
    byte_4187EA0 = 1;
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
    mAtlas = (UIAtlas_o *)System_String__Concat_44305532(EVENT_POINT_REWARD_TITLE_NAME, v18, 0LL);
    titleSp = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v19 = titleSp;
    if ( !titleSp )
      goto LABEL_21;
    v21 = (UILabel_o *)mAtlas;
    mAtlas = v19->fields.mAtlas;
    if ( !mAtlas )
      goto LABEL_21;
    mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
    if ( !mAtlas )
      goto LABEL_21;
    if ( !BetterList_UILabel___Contains(
            (BetterList_UILabel__o *)mAtlas,
            v21,
            (const MethodInfo_2D62918 *)Method_BetterList_string__Contains__) )
    {
      v22 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v22 = BattleResultEventItemComponent_TypeInfo;
      }
      v21 = (UILabel_o *)v22->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    }
    mAtlas = (UIAtlas_o *)*p_titleSp;
    if ( !*p_titleSp )
LABEL_21:
      sub_B2C434(mAtlas, v14);
    v15 = (System_String_o *)v21;
  }
  else
  {
    v10 = this->fields.titleSp;
    p_titleSp = &this->fields.titleSp;
    v9 = v10;
    v24 = *((_DWORD *)p_titleSp + 4);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = currentGroup;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    mAtlas = (UIAtlas_o *)System_String__Format_44301068((System_String_o *)StringLiteral_19733/*"img_txt_reward_{0}_{1}"*/, v11, v12, 0LL);
    if ( !v10 )
      goto LABEL_21;
    v15 = (System_String_o *)mAtlas;
    mAtlas = (UIAtlas_o *)v9;
  }
  UISprite__set_spriteName((UISprite_o *)mAtlas, v15, 0LL);
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
  __int64 v19; // x1
  EventRewardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x8
  int64_t v22; // x23
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v23; // x26
  __int64 currentGroupIndex; // x27
  EventPointGroupEntity_o *v25; // x23
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v26; // x25
  __int64 v27; // x26
  int64_t userId; // x22
  int64_t v29; // x22
  UISprite_o *v30; // x24
  int32_t iconId; // w23
  const MethodInfo *v32; // x3
  int64_t v33; // x22
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UISprite_o *eventIconSprite; // x24
  int32_t v36; // w21
  EventRewardEntity_o *v37; // x20
  BattleResultEventItemComponent_c *v38; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x21
  System_String_o *v40; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  UILabel_o *v42; // x21
  BattleResultEventItemComponent_c *v43; // x0
  const MethodInfo *v44; // x3
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v45; // x25
  UISprite_o *v46; // x23
  __int64 v47; // x26
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v48; // x23
  __int64 v49; // x24
  EventRewardEntity_o *NextEventRewardEntity_18991924; // x0
  const MethodInfo *v51; // x3
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v52; // x22
  __int64 v53; // x23
  System_String_o *v54; // x20
  System_String_o *v55; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x20
  BattleResultEventItemComponent_c *v57; // x0
  UILabel_o *titleAtLabel; // x19
  __int128 v59; // [xsp+10h] [xbp-60h] BYREF
  UserEventEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4187E9B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&BattleResultEventItemComponent_TypeInfo, v5);
    sub_B2C35C(&Method_BetterList_string__Contains__, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4187E9B = 1;
  }
  entity = 0LL;
  v59 = 0u;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !SelfUserGame || !Instance )
    goto LABEL_78;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)Instance, &entity, SelfUserGame->fields.userId, eventId, 0LL) )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        eventId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_78;
  if ( dropInfoList->fields._size < 1 )
    return;
  v22 = Instance;
  if ( !Instance )
LABEL_78:
    sub_B2C434(Instance, v19);
  if ( !EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Instance, 0LL) )
  {
    Instance = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( MasterData_WarQuestSelectionMaster )
    {
      v33 = Instance;
      NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                MasterData_WarQuestSelectionMaster,
                                eventId,
                                Instance,
                                0LL);
      eventIconSprite = this->fields.eventIconSprite;
      v36 = *(_DWORD *)(v22 + 44);
      v37 = NextEventRewardEntity;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(eventIconSprite, v36, 0LL);
      v38 = BattleResultEventItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v38 = BattleResultEventItemComponent_TypeInfo;
      }
      EVENT_POINT_BG_TITLE_NAME = v38->static_fields->EVENT_POINT_BG_TITLE_NAME;
      v40 = System_Int32__ToString((int)this + 160, 0LL);
      Instance = (int64_t)System_String__Concat_44305532(EVENT_POINT_BG_TITLE_NAME, v40, 0LL);
      eventPointAtSprite = this->fields.eventPointAtSprite;
      if ( eventPointAtSprite )
      {
        v42 = (UILabel_o *)Instance;
        Instance = (int64_t)eventPointAtSprite->fields.mAtlas;
        if ( Instance )
        {
          Instance = (int64_t)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
          if ( Instance )
          {
            if ( !BetterList_UILabel___Contains(
                    (BetterList_UILabel__o *)Instance,
                    v42,
                    (const MethodInfo_2D62918 *)Method_BetterList_string__Contains__) )
            {
              v43 = BattleResultEventItemComponent_TypeInfo;
              if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
                v43 = BattleResultEventItemComponent_TypeInfo;
              }
              v42 = (UILabel_o *)v43->static_fields->EVENT_POINT_BG_TITLE_NAME;
            }
            Instance = (int64_t)this->fields.eventPointAtSprite;
            if ( Instance )
            {
              UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v42, 0LL);
              BattleResultEventItemComponent__SetNextItemLabel(this, v33, v37, v44);
              return;
            }
          }
        }
      }
    }
    goto LABEL_78;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  v23 = this->fields.dropInfoList;
  if ( !v23 )
    goto LABEL_78;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( v23->fields._size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  if ( !Instance )
    goto LABEL_78;
  v25 = EventPointGroupMaster__GetEntity(
          (EventPointGroupMaster_o *)Instance,
          this->fields.currentEventId,
          v23->fields._items->m_Items[currentGroupIndex].fields.groupId,
          0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  v26 = this->fields.dropInfoList;
  if ( !v26 )
    goto LABEL_78;
  v27 = this->fields.currentGroupIndex;
  userId = SelfUserGame->fields.userId;
  if ( v26->fields._size <= (unsigned int)v27 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  if ( !Instance )
    goto LABEL_78;
  Instance = (int64_t)UserEventPointMaster__GetEntity(
                        (UserEventPointMaster_o *)Instance,
                        userId,
                        eventId,
                        v26->fields._items->m_Items[v27].fields.groupId,
                        0LL);
  if ( !this->fields.eventIconSprite )
    goto LABEL_78;
  v29 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.eventIconSprite,
                        0LL);
  if ( !Instance )
    goto LABEL_78;
  if ( v25 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v30 = this->fields.eventIconSprite;
    iconId = v25->fields.iconId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetItem(v30, iconId, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  v45 = this->fields.dropInfoList;
  if ( !v45 )
    goto LABEL_78;
  v46 = this->fields.eventPointAtSprite;
  v47 = this->fields.currentGroupIndex;
  if ( v45->fields._size <= (unsigned int)v47 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  Instance = (int64_t)BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
                        this,
                        this->fields.currentEventId,
                        v45->fields._items->m_Items[v47].fields.groupId,
                        v32);
  if ( !v46 )
    goto LABEL_78;
  UISprite__set_spriteName(v46, (System_String_o *)Instance, 0LL);
  v48 = this->fields.dropInfoList;
  if ( !v48 )
    goto LABEL_78;
  v49 = this->fields.currentGroupIndex;
  if ( v48->fields._size <= (unsigned int)v49 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  if ( !v29 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_78;
  NextEventRewardEntity_18991924 = EventRewardMaster__GetNextEventRewardEntity_18991924(
                                     MasterData_WarQuestSelectionMaster,
                                     eventId,
                                     v48->fields._items->m_Items[v49].fields.groupId,
                                     *(_QWORD *)(v29 + 32),
                                     0LL);
  BattleResultEventItemComponent__SetNextItemLabel(this, *(_QWORD *)(v29 + 32), NextEventRewardEntity_18991924, v51);
  Instance = (int64_t)BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    Instance = (int64_t)BattleResultEventItemComponent_TypeInfo;
  }
  v52 = this->fields.dropInfoList;
  if ( !v52 )
    goto LABEL_78;
  v53 = this->fields.currentGroupIndex;
  v54 = **(System_String_o ***)(Instance + 184);
  if ( v52->fields._size <= (unsigned int)v53 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v59 = *(_OWORD *)&v52->fields._items->m_Items[v53].fields.newDroplist;
  v55 = System_Int32__ToString((int32_t)&v59 + 8, 0LL);
  EVENT_POINT_REWARD_AT = System_String__Concat_44305532(v54, v55, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(EVENT_POINT_REWARD_AT, 0LL) )
  {
    v57 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v57 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_AT = v57->static_fields->EVENT_POINT_REWARD_AT;
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

  if ( (byte_4187EB5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16965/*"btn_bg_20"*/, method);
    sub_B2C35C(&StringLiteral_16966/*"btn_bg_21"*/, v3);
    byte_4187EB5 = 1;
  }
  showModeChangeButton = this->fields.showModeChangeButton;
  if ( !showModeChangeButton )
    goto LABEL_14;
  v5 = (System_String_o **)(this->fields.isShowPossessionNum ? &StringLiteral_16966/*"btn_bg_21"*/ : &StringLiteral_16965/*"btn_bg_20"*/);
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
      v12 = sub_B2C460(showModeChangeButton);
      sub_B2C400(v12, 0LL);
    }
    p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
    p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
    p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
    p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
    if ( showModeChangeButton )
      goto LABEL_11;
LABEL_14:
    sub_B2C434(showModeChangeButton, method);
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
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4187EAB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, flg);
    sub_B2C35C(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4187EAB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_B2C434(v8, v9);
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
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
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x8
  int v31; // w9
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **v32; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v33; // x23
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *v34; // x26
  System_Collections_Generic_List_T__o *dropInfoList; // x25
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x26
  BattleBuffData_BuffData_array *v46; // x25
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_T__o *v53; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x26
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct System_Collections_Generic_List_BattleDropItem__o *itemList; // x25
  BattleResultEventItemComponent___c_c *v62; // x0
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__42_2; // x26
  Il2CppObject *v65; // x27
  struct BattleResultEventItemComponent___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x0
  BattleResultEventItemComponent_EventDropItemInfo_o v80; // [xsp+20h] [xbp-90h] BYREF
  BattleResultEventItemComponent_EventDropItemInfo_o v81; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4187E9E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindAll_BattleDropItem___, drop);
    sub_B2C35C(&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___, v5);
    sub_B2C35C(&Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__, v6);
    sub_B2C35C(&System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v13);
    sub_B2C35C(&Method_System_Predicate_BattleDropItem___ctor__, v14);
    sub_B2C35C(&System_Predicate_BattleDropItem__TypeInfo, v15);
    sub_B2C35C(&Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__, v16);
    sub_B2C35C(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__, v17);
    sub_B2C35C(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__, v18);
    sub_B2C35C(&BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, v19);
    sub_B2C35C(&BattleResultEventItemComponent___c_TypeInfo, v20);
    byte_4187E9E = 1;
  }
  memset(&v80, 0, sizeof(v80));
  v21 = sub_B2C42C(BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo);
  BattleResultEventItemComponent___c__DisplayClass42_0___ctor(
    (BattleResultEventItemComponent___c__DisplayClass42_0_o *)v21,
    0LL);
  if ( !v21 )
LABEL_30:
    sub_B2C434(All_BattleBuffData_BuffData, v23);
  *(_QWORD *)(v21 + 16) = drop;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)drop, v24, v25, v26, v27, v28, v29);
  v30 = *(_QWORD *)(v21 + 16);
  if ( v30 )
  {
    *(_DWORD *)(v21 + 24) = 0;
    v31 = 0;
    v32 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **)(v21 + 32);
    v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v21 + 40);
    while ( v31 < *(_DWORD *)(v30 + 24) )
    {
      v34 = *v32;
      dropInfoList = (System_Collections_Generic_List_T__o *)this->fields.dropInfoList;
      if ( !*v32 )
      {
        v34 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *)sub_B2C42C(System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo);
        System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool____ctor(
          v34,
          (Il2CppObject *)v21,
          Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__,
          (const MethodInfo_271A660 *)Method_System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool___ctor__);
        *(_QWORD *)(v21 + 32) = v34;
        sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)v34, v36, v37, v38, v39, v40, v41);
      }
      All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
                                                                                     dropInfoList,
                                                                                     (System_Func_T__bool__o *)v34,
                                                                                     (const MethodInfo_17267FC *)Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
      if ( ((unsigned __int8)All_BattleBuffData_BuffData & 1) == 0 )
      {
        memset(&v80, 0, sizeof(v80));
        v42 = *(_QWORD *)(v21 + 16);
        if ( !v42 )
          goto LABEL_30;
        v43 = *(int *)(v21 + 24);
        if ( (unsigned int)v43 >= *(_DWORD *)(v42 + 24) )
        {
          v79 = sub_B2C460(All_BattleBuffData_BuffData);
          sub_B2C400(v79, 0LL);
        }
        v44 = *(_QWORD *)(v42 + 8 * v43 + 32);
        if ( !v44 )
          goto LABEL_30;
        v80.fields.groupId = *(_DWORD *)(v44 + 56);
        v45 = *v33;
        v46 = *(BattleBuffData_BuffData_array **)(v21 + 16);
        if ( !*v33 )
        {
          v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v45,
            (Il2CppObject *)v21,
            Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleDropItem___ctor__);
          *(_QWORD *)(v21 + 40) = v45;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v21 + 40),
            (System_Int32_array **)v45,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
        }
        All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                                       v46,
                                                                                       (System_Predicate_T__o *)v45,
                                                                                       (const MethodInfo_1FFC4EC *)Method_System_Array_FindAll_BattleDropItem___);
        if ( All_BattleBuffData_BuffData )
        {
          v53 = All_BattleBuffData_BuffData;
          v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleDropItem__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v54,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
          v80.fields.itemList = (struct System_Collections_Generic_List_BattleDropItem__o *)v54;
          sub_B2C2F8((BattleServantConfConponent_o *)&v80, (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
          All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)v80.fields.itemList;
          if ( !v80.fields.itemList )
            goto LABEL_30;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v80.fields.itemList,
            v53,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
        }
        itemList = v80.fields.itemList;
        if ( !v80.fields.itemList )
          goto LABEL_30;
        v80.fields.itemCount = v80.fields.itemList->fields._size;
        v62 = BattleResultEventItemComponent___c_TypeInfo;
        if ( (BYTE3(BattleResultEventItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleResultEventItemComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent___c_TypeInfo);
          v62 = BattleResultEventItemComponent___c_TypeInfo;
        }
        static_fields = v62->static_fields;
        _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__42_2;
        if ( !_9__42_2 )
        {
          if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v62);
            static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          }
          v65 = (Il2CppObject *)static_fields->__9;
          _9__42_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__42_2,
            v65,
            Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleDropItem___ctor__);
          v66 = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          v66->__9__42_2 = (struct System_Predicate_BattleDropItem__o *)_9__42_2;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v66->__9__42_2,
            (System_Int32_array **)_9__42_2,
            v67,
            v68,
            v69,
            v70,
            v71,
            v72);
        }
        v80.fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                                                                                               (System_Predicate_T__o *)_9__42_2,
                                                                                               (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v80.fields.newDroplist,
          (System_Int32_array **)v80.fields.newDroplist,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
        All_BattleBuffData_BuffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dropInfoList;
        if ( !All_BattleBuffData_BuffData )
          goto LABEL_30;
        v81 = v80;
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___Add(
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)All_BattleBuffData_BuffData,
          &v81,
          (const MethodInfo_2E9F73C *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__);
      }
      v30 = *(_QWORD *)(v21 + 16);
      v31 = *(_DWORD *)(v21 + 24) + 1;
      *(_DWORD *)(v21 + 24) = v31;
      if ( !v30 )
        goto LABEL_30;
    }
  }
}


void __fastcall BattleResultEventItemComponent__endClose(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187EB2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4187EB2 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endCommandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187EAC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3089/*"CLOSE"*/, method);
    byte_4187EAC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3089/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endEventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187EB0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3089/*"CLOSE"*/, method);
    byte_4187EB0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3089/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endItemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187EA8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3089/*"CLOSE"*/, method);
    byte_4187EA8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3089/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endOpen(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187E98 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9298/*"NEXT"*/, method);
    byte_4187E98 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9298/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_B2C434(myFsm, method);
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
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4187EAF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, flg);
    sub_B2C35C(&Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4187EAF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__,
    0LL);
  if ( !itemDialog )
    sub_B2C434(v8, v9);
  ItemDetailInfoComponent__Close_27388112(itemDialog, v7, 0LL);
}


BattleDropItem_o *__fastcall BattleResultEventItemComponent__getNewDrop(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *newDroplist; // x0
  BattleDropItem_o *v6; // x19

  if ( (byte_4187E96 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v4);
    byte_4187E96 = 1;
  }
  newDroplist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  v6 = (BattleDropItem_o *)newDroplist->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    newDroplist,
    0,
    (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
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
  if ( (byte_4187E95 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      method);
    this = (BattleResultEventItemComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
                                                 v3);
    byte_4187E95 = 1;
  }
  currentGroupIndex = v2->fields.currentGroupIndex;
  if ( (currentGroupIndex & 0x80000000) != 0 )
    return 0;
  dropInfoList = v2->fields.dropInfoList;
  if ( !dropInfoList )
    sub_B2C434(this, method);
  size = dropInfoList->fields._size;
  if ( size <= (int)currentGroupIndex )
    return 0;
  if ( size <= (unsigned int)currentGroupIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4187EA7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, flg);
    sub_B2C35C(&Method_BattleResultEventItemComponent_endItemDialogCallBack__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4187EA7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_B2C434(v8, v9);
  ItemDetailInfoComponent__Close_27388112(itemDialog, v7, 0LL);
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
  __int64 v19; // x1
  signed int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x24
  unsigned int v22; // w25
  int32_t v23; // w22
  QuestRewardInfo_o *v24; // x27
  BattleResultEventItemComponent_c *v25; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x23
  System_String_o *v27; // x0
  System_String_o *v28; // x23
  BattleResultEventItemComponent_c *v29; // x0
  UILabel_o *titleAtLabel; // x24
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x21
  int size; // w8
  __int64 currentGroupIndex; // x23
  const MethodInfo *v36; // x2
  __int64 v37; // x0
  int32_t eventIda; // [xsp+Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4187E9A & 1) == 0 )
  {
    sub_B2C35C(&BattleDropItem___TypeInfo, drop);
    sub_B2C35C(&BattleResultEventItemComponent_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4187E9A = 1;
  }
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !resultBoostItemRewardInfos )
    goto LABEL_41;
  max_length = resultBoostItemRewardInfos->max_length;
  if ( max_length >= 1 )
  {
    v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
      {
        v37 = sub_B2C460(Instance);
        sub_B2C400(v37, 0LL);
      }
      v24 = resultBoostItemRewardInfos->m_Items[v22];
      if ( !v24 )
        goto LABEL_41;
      if ( v24->fields.type == 2 )
      {
        if ( !v21 )
          goto LABEL_41;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v21,
                                      v24->fields.objectId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( Instance && LODWORD(Instance->fields.saveNameList) == 5 )
          v23 += v24->fields.num;
      }
      max_length = resultBoostItemRewardInfos->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_19;
    }
  }
  v23 = 0;
LABEL_19:
  v25 = BattleResultEventItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v25 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_AT = v25->static_fields->EVENT_POINT_REWARD_AT;
  v27 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v28 = System_String__Concat_44305532(EVENT_POINT_REWARD_AT, v27, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !LocalizationManager__ContainsKey(v28, 0LL) )
  {
    v29 = BattleResultEventItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v29 = BattleResultEventItemComponent_TypeInfo;
    }
    v28 = v29->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v28, 0LL);
  if ( !titleAtLabel
    || (UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0LL),
        this->fields.currentEventId = eventIda,
        BattleResultEventItemComponent__createDropInfo(this, drop, v31),
        Instance = (DataManager_o *)sub_B2C374(BattleDropItem___TypeInfo, 0LL),
        (dropInfoList = this->fields.dropInfoList) == 0LL) )
  {
LABEL_41:
    sub_B2C434(Instance, v19);
  }
  size = dropInfoList->fields._size;
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( size > (int)currentGroupIndex )
  {
    if ( size <= (unsigned int)currentGroupIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    Instance = (DataManager_o *)dropInfoList->fields._items->m_Items[currentGroupIndex].fields.itemList;
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  }
  BattleResultEventItemComponent__SetItemWindow(this, (BattleDropItem_array *)Instance, v23, rewardInfos, v32);
  BattleResultEventItemComponent__SetUi(this, eventIda, v36);
}


void __fastcall BattleResultEventItemComponent__setShowCommandCodeConf(
        BattleResultEventItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187EA9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9758/*"OPEN_COMMANDCODE"*/, commandCodeId);
    byte_4187EA9 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_B2C434(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9758/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_B2C434(this, 0LL);
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

  if ( (byte_4187EAD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9759/*"OPEN_EVENTPOINTBUFF"*/, eventPointBuffId);
    byte_4187EAD = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_eventPointBuffId = eventPointBuffId;
  if ( !myFsm )
    sub_B2C434(0LL, eventPointBuffId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9759/*"OPEN_EVENTPOINTBUFF"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__setShowItemConf(
        BattleResultEventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187EA5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9764/*"OPEN_ITEM"*/, *(_QWORD *)&itemId);
    byte_4187EA5 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_B2C434(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9764/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__setShowServantConf(
        BattleResultEventItemComponent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4187EA1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9772/*"OPEN_SERVANT"*/, userSvtId);
    byte_4187EA1 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_userSvtId = userSvtId;
  if ( !myFsm )
    sub_B2C434(0LL, userSvtId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9772/*"OPEN_SERVANT"*/, 0LL);
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
  __int64 v9; // x1
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_4187EAA & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultEventItemComponent_commandCodeDialogCallBack__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4187EAA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v11 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v11) )
  {
    sub_B2C434(Instance, v9);
  }
  CommonUI__OpenServantStatusDialog_17984316(v11, 0, (UserCommandCodeEntity_o *)Entity, v12, 0LL, 0LL);
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
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_String_o *lookup; // x21
  System_String_o *masterDataBytes; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v12; // x23

  if ( (byte_4187EAE & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__, method);
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187EAE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.tmp_eventPointBuffId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || (itemDialog = this->fields.itemDialog,
        lookup = (System_String_o *)Instance->fields.lookup,
        masterDataBytes = (System_String_o *)Instance->fields.masterDataBytes,
        v12 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B2C434(Instance, v8);
  }
  ItemDetailInfoComponent__OpenItemMsgInfo(itemDialog, lookup, masterDataBytes, v12, 0LL);
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
  __int64 v8; // x1
  WarEntity_o *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v11; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v12; // x22

  if ( (byte_4187EA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultEventItemComponent_itemDialogCallBack__, method);
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187EA6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v11 = (ItemEntity_o *)Entity,
        v12 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_B2C434(Instance, v8);
  }
  ItemDetailInfoComponent__Open(itemDialog, v11, v12, 50, 0LL);
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
  ServantStatusDialog_EndDelegate_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4187EA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleResultEventItemComponent_DialogCallBack__, method);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4187EA2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  tmp_userSvtId = this->fields.tmp_userSvtId;
  v7 = (CommonUI_o *)Instance;
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_DialogCallBack__,
    0LL);
  if ( !v7 )
    sub_B2C434(v9, v10);
  CommonUI__OpenServantStatusDialog_17980832(v7, 0, tmp_userSvtId, v8, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4185093 & 1) == 0 )
  {
    sub_B2C35C(&BattleResultEventItemComponent___c_TypeInfo, v1);
    byte_4185093 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleResultEventItemComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultEventItemComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_27324084(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_27324480(s->fields.type, 0LL);
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
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_5:
    sub_B2C434(this, d);
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
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_B2C434(this, item);
  return item->fields.eventGroupId == v5->fields.eventGroupId;
}