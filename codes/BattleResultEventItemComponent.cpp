void BattleResultEventItemComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleResultEventItemComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct BattleResultEventItemComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct BattleResultEventItemComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_597449E & 1) == 0 )
  {
    sub_2213A60(&BattleResultEventItemComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21295/*"img_bg_ep"*/);
    sub_2213A60(&StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/);
    sub_2213A60(&StringLiteral_21705/*"img_txt_reward"*/);
    sub_2213A60(&StringLiteral_21296/*"img_bg_events"*/);
    byte_597449E = 1;
  }
  v7 = StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  BattleResultEventItemComponent_TypeInfo->static_fields->EVENT_POINT_REWARD_AT = (struct System_String_o *)StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleResultEventItemComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21705/*"img_txt_reward"*/;
  static_fields = BattleResultEventItemComponent_TypeInfo->static_fields;
  static_fields->EVENT_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_21705/*"img_txt_reward"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->EVENT_POINT_REWARD_TITLE_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_21296/*"img_bg_events"*/;
  v17 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v17->EVENT_POINT_REWARD_BG_NAME = (struct System_String_o *)StringLiteral_21296/*"img_bg_events"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->EVENT_POINT_REWARD_BG_NAME, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_21295/*"img_bg_ep"*/;
  v25 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v25->EVENT_POINT_BG_TITLE_NAME = (struct System_String_o *)StringLiteral_21295/*"img_bg_ep"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->EVENT_POINT_BG_TITLE_NAME, v24, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)&BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH = 0x19E0000013BLL;
}


void BattleResultEventItemComponent___ctor(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597449D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    byte_597449D = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_2213B20(UnityEngine_Color___TypeInfo, 2);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleResultEventItemComponent__CheckNextGroup(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0
  BattleDropItem_array *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v9; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_5974497 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    sub_2213A60(&StringLiteral_10026/*"OPEN"*/);
    sub_2213A60(&StringLiteral_9649/*"NEXT"*/);
    byte_5974497 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_10026/*"OPEN"*/, 0);
      myFsm = (PlayMakerFSM_o *)this->fields.dropInfoList;
      if ( myFsm )
      {
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
          &v9,
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)myFsm,
          this->fields.currentGroupIndex,
          (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
        myFsm = (PlayMakerFSM_o *)v9.fields.itemList;
        if ( v9.fields.itemList )
        {
          v5 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)v9.fields.itemList,
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
          BattleResultEventItemComponent__SetItemWindow_55102764(this, v5, v6);
          BattleResultEventItemComponent__SetUi(this, this->fields.currentEventId, v7);
          BattleResultEventItemComponent__Open(this, v8);
          return;
        }
      }
    }
LABEL_11:
    sub_2213CDC(myFsm, v3);
  }
  myFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !myFsm )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9649/*"NEXT"*/, 0);
}


void BattleResultEventItemComponent__Close(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x1
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // x19
  BattleResultEventItemComponent_EventDropItemInfo_o v15; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_5974495 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultEventItemComponent_endClose__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_5974495 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_11;
  BattleViewItemlistComponent__setHide(itemWindow, 0);
  window = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endClose__, 0);
  if ( !window )
    goto LABEL_11;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v5,
    window->klass->vtable._12_Close.method);
  if ( BattleResultEventItemComponent__isGetItems(this, v6) )
  {
    itemWindow = (BattleViewItemlistComponent_o *)this->fields.dropInfoList;
    if ( !itemWindow )
      goto LABEL_11;
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v15,
      (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)itemWindow,
      this->fields.currentGroupIndex,
      (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    newDroplist = v15.fields.newDroplist;
  }
  else
  {
    newDroplist = 0;
  }
  this->fields.newDroplist = newDroplist;
  p_newDroplist = &this->fields.newDroplist;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_newDroplist, (int32_t)newDroplist, v7, v8, v9, v10, v11, v12);
  itemWindow = (BattleViewItemlistComponent_o *)*(p_newDroplist - 10);
  ++*((_DWORD *)p_newDroplist + 9);
  if ( !itemWindow )
LABEL_11:
    sub_2213CDC(itemWindow, method);
  BattleViewItemlistComponent__ClearObj(itemWindow, 0);
}


void BattleResultEventItemComponent__DialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5974487 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974487 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultEventItemComponent__EndCloseDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974488 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    byte_5974488 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3639/*"CLOSE"*/, 0);
}


void BattleResultEventItemComponent__Init(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  __int64 v4; // x1
  System_String_o *v5; // x20
  UnityEngine_Object_o *titleAtLabel; // x20
  __int64 v7; // x1
  UILabel_o *v8; // x20
  UnityEngine_Object_o *titleNextItemLabel; // x20
  UILabel_o *v10; // x20
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5974478 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/);
    sub_2213A60(&StringLiteral_2942/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/);
    sub_2213A60(&StringLiteral_2936/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    byte_5974478 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_28;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.window;
  if ( !window )
    goto LABEL_28;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = (BattleWindowComponent_o *)this->fields.itemDialog;
  if ( !window )
    goto LABEL_28;
  ItemDetailInfoComponent__Init((ItemDetailInfoComponent_o *)window, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2942/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0);
  if ( !window )
    goto LABEL_28;
  v5 = (System_String_o *)window;
  if ( !System_String__Equals_75686512((System_String_o *)window, (System_String_o *)StringLiteral_2942/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_28;
    UILabel__set_text((UILabel_o *)window, v5, 0);
  }
  titleAtLabel = (UnityEngine_Object_o *)this->fields.titleAtLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(titleAtLabel, 0, 0) )
  {
    v8 = this->fields.titleAtLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0);
    if ( !v8 )
      goto LABEL_28;
    UILabel__set_text(v8, (System_String_o *)window, 0);
  }
  titleNextItemLabel = (UnityEngine_Object_o *)this->fields.titleNextItemLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(titleNextItemLabel, 0, 0) )
  {
    v10 = this->fields.titleNextItemLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2936/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
    if ( v10 )
    {
      UILabel__set_text(v10, (System_String_o *)window, 0);
      goto LABEL_26;
    }
LABEL_28:
    sub_2213CDC(window, method);
  }
LABEL_26:
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  this->fields.currentGroupIndex = 0;
  if ( !window )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  v11 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)sub_2213CCC(System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo____ctor(
    v11,
    (const MethodInfo_44F9078 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
  this->fields.dropInfoList = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dropInfoList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void BattleResultEventItemComponent__OnClickSwitchShowMode(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_5974498 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultEventItemComponent_OnClickSwitchShowMode__);
    byte_5974498 = 1;
  }
  v3 = Method_BattleResultEventItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BattleResultEventItemComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.isShowPossessionNum ^= 1u;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v5);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_2213CDC(0, v6);
  BattleViewItemlistComponent__SwitchShowNumMode(itemWindow, this->fields.isShowPossessionNum, 0);
}


void BattleResultEventItemComponent__Open(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  __int64 currentEventId; // x1
  const MethodInfo *v5; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v6; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_597447B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_597447B = 1;
  }
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_10;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v6,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._6_SetTitleSprite.methodPtr)(
    this,
    (unsigned int)v6.fields.groupId,
    this->klass->vtable._6_SetTitleSprite.method);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_10;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v6,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  if ( v6.fields.groupId < 1 )
  {
    currentEventId = (unsigned int)this->fields.currentEventId;
    goto LABEL_9;
  }
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
LABEL_10:
    sub_2213CDC(dropInfoList, method);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v6,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  currentEventId = (unsigned int)v6.fields.groupId;
LABEL_9:
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, __int64, const MethodInfo *))this->klass->vtable._5_SetBgSprite.methodPtr)(
    this,
    currentEventId,
    this->klass->vtable._5_SetBgSprite.method);
  BattleResultEventItemComponent__OpenCommonProcess(this, v5);
}


void BattleResultEventItemComponent__OpenCommonProcess(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchNextRoot; // x0
  const MethodInfo *v4; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  const MethodInfo *v7; // x1

  if ( (byte_597449C & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultEventItemComponent_endOpen__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_597449C = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0);
  this->fields.isShowPossessionNum = 0;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v4);
  touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !touchNextRoot
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0),
        window = this->fields.window,
        v6 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_endOpen__,
          0),
        !window) )
  {
LABEL_7:
    sub_2213CDC(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v6,
    window->klass->vtable._10_Open.method);
  BattleResultEventItemComponent__SetCondensedScale(this, v7);
}


void BattleResultEventItemComponent__OpenEventFortification(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_c *klass; // x8
  __int64 groupId; // x1
  BattleResultEventItemComponent_o *v7; // x0
  const MethodInfo *v8; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v9; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_597449B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_597449B = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      sub_2213CDC(0, v3);
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v9,
      dropInfoList,
      this->fields.currentGroupIndex,
      (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    klass = this->klass;
    groupId = (unsigned int)v9.fields.groupId;
    v7 = this;
  }
  else
  {
    klass = this->klass;
    v7 = this;
    groupId = 0;
  }
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, __int64, const MethodInfo *))klass->vtable._6_SetTitleSprite.methodPtr)(
    v7,
    groupId,
    klass->vtable._6_SetTitleSprite.method);
  BattleResultEventItemComponent__OpenCommonProcess(this, v8);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
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
  __int64 v15; // x1
  BattleResultEventItemComponent_c *v16; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x20
  System_String_o *v18; // x0
  struct UISprite_o *v19; // x8
  __int64 v20; // x1
  BattleResultEventItemComponent_c *v21; // x0
  int32_t v23; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v24; // [xsp+18h] [xbp-38h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-34h] BYREF

  v25 = eventId;
  if ( (byte_5974480 & 1) == 0 )
  {
    sub_2213A60(&BattleResultEventItemComponent_TypeInfo);
    sub_2213A60(&Method_BetterList_string__Contains__);
    sub_2213A60(&StringLiteral_17296/*"_{0}_{1}"*/);
    byte_5974480 = 1;
  }
  v7 = BattleResultEventItemComponent_TypeInfo;
  if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&eventId);
    v7 = BattleResultEventItemComponent_TypeInfo;
  }
  v8 = System_String__Concat_75651716(
         v7->static_fields->EVENT_POINT_BG_TITLE_NAME,
         (System_String_o *)StringLiteral_17296/*"_{0}_{1}"*/,
         0);
  v24 = eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
  v23 = groupId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
  mAtlas = (UIAtlas_o *)System_String__Format_75697880(v8, v9, v10, 0);
  eventPointAtSprite = this->fields.eventPointAtSprite;
  if ( !eventPointAtSprite )
    goto LABEL_19;
  v14 = (System_String_o *)mAtlas;
  mAtlas = eventPointAtSprite->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_19;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0);
  if ( !mAtlas )
    goto LABEL_19;
  if ( BetterList_object___Contains(
         (BetterList_T__o *)mAtlas,
         (Il2CppObject *)v14,
         (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
  {
    return v14;
  }
  v16 = BattleResultEventItemComponent_TypeInfo;
  if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v15);
    v16 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_BG_TITLE_NAME = v16->static_fields->EVENT_POINT_BG_TITLE_NAME;
  v18 = System_Int32__ToString((int32_t)&v25, 0);
  mAtlas = (UIAtlas_o *)System_String__Concat_75651716(EVENT_POINT_BG_TITLE_NAME, v18, 0);
  v19 = this->fields.eventPointAtSprite;
  if ( !v19
    || (v14 = (System_String_o *)mAtlas, (mAtlas = v19->fields.mAtlas) == 0)
    || (mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0)) == 0 )
  {
LABEL_19:
    sub_2213CDC(mAtlas, v12);
  }
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          (Il2CppObject *)v14,
          (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
  {
    v21 = BattleResultEventItemComponent_TypeInfo;
    if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v20);
      v21 = BattleResultEventItemComponent_TypeInfo;
    }
    return v21->static_fields->EVENT_POINT_BG_TITLE_NAME;
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
void BattleResultEventItemComponent__SetBgSprite(
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
  Il2CppObject *v10; // x20
  BattleResultEventItemComponent_c *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = imageId;
  if ( (byte_5974483 & 1) == 0 )
  {
    sub_2213A60(&BattleResultEventItemComponent_TypeInfo);
    sub_2213A60(&Method_BetterList_string__Contains__);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_5974483 = 1;
  }
  v4 = BattleResultEventItemComponent_TypeInfo;
  if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&imageId);
    v4 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_BG_NAME = v4->static_fields->EVENT_POINT_REWARD_BG_NAME;
  v6 = System_Int32__ToString((int32_t)&v12, 0);
  mAtlas = (UIAtlas_o *)System_String__Concat_75694928(
                          EVENT_POINT_REWARD_BG_NAME,
                          (System_String_o *)StringLiteral_16746/*"_"*/,
                          v6,
                          0);
  bgSp = this->fields.bgSp;
  if ( !bgSp )
    goto LABEL_15;
  v10 = (Il2CppObject *)mAtlas;
  mAtlas = bgSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_15;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0);
  if ( !mAtlas )
    goto LABEL_15;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v10,
          (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
  {
    v11 = BattleResultEventItemComponent_TypeInfo;
    if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v8);
      v11 = BattleResultEventItemComponent_TypeInfo;
    }
    v10 = (Il2CppObject *)v11->static_fields->EVENT_POINT_REWARD_BG_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.bgSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v10, 0),
        (mAtlas = (UIAtlas_o *)this->fields.bgSp) == 0) )
  {
LABEL_15:
    sub_2213CDC(mAtlas, v8);
  }
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.parent)(mAtlas, mAtlas->klass[2]._1.generic_class);
}


void BattleResultEventItemComponent__SetCondensedScale(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *nextItemLabel; // x0
  UILabel_o *titleAtLabel; // x20

  if ( (byte_597449A & 1) == 0 )
  {
    sub_2213A60(&BattleResultEventItemComponent_TypeInfo);
    byte_597449A = 1;
  }
  nextItemLabel = (UILabel_o *)BattleResultEventItemComponent_TypeInfo;
  titleAtLabel = this->fields.titleAtLabel;
  if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, method);
  if ( !titleAtLabel
    || (UILabel__SetCondensedScale(
          titleAtLabel,
          BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH,
          0,
          0),
        (nextItemLabel = this->fields.nextItemLabel) == 0) )
  {
    sub_2213CDC(nextItemLabel, method);
  }
  UILabel__SetCondensedScale(
    nextItemLabel,
    BattleResultEventItemComponent_TypeInfo->static_fields->NEXT_ITEM_LABEL_MAX_WIDTH,
    0,
    0);
}


void BattleResultEventItemComponent__SetItemWindow(
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
    sub_2213CDC(0, itemArray);
  BattleViewItemlistComponent__setEventResultCount(itemWindow, boostItemManaCount, rewardInfos, 0);
  BattleResultEventItemComponent__SetItemWindow_55102764(this, itemArray, v8);
}


void BattleResultEventItemComponent__SetItemWindow_55102764(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x22
  int32_t currentEventId; // w21
  BattleDropItemComponent_ClickDelegate_o *v7; // x23
  BattleViewItemlistComponent_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_597447D & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultEventItemComponent_setShowConf__);
    sub_2213A60(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_597447D = 1;
  }
  itemWindow = this->fields.itemWindow;
  currentEventId = this->fields.currentEventId;
  v7 = (BattleDropItemComponent_ClickDelegate_o *)sub_2213CCC(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_setShowConf__,
    0);
  if ( !itemWindow
    || (BattleViewItemlistComponent__setListDataCustomColumn_54891780(
          itemWindow,
          itemArray,
          currentEventId,
          v7,
          this->fields.itemColumnCount,
          0),
        (v8 = this->fields.itemWindow) == 0) )
  {
    sub_2213CDC(v8, v9);
  }
  BattleViewItemlistComponent__setHide(v8, 0);
}


void BattleResultEventItemComponent__SetNextItemLabel(
        BattleResultEventItemComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardENt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UILabel_o *v8; // x22
  System_String_o *v9; // x23
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  bool isQp; // w8
  UILabel_o *v15; // x19
  int v16; // w9
  System_String_o *v17; // x0
  Il2CppObject *v18; // x2
  Il2CppObject *v19; // x1
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x19
  int64_t v22; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5974481 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_2213A60(&StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_2213A60(&StringLiteral_2940/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/);
    sub_2213A60(&StringLiteral_2937/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974481 = 1;
  }
  nameText = 0;
  countText = 0;
  if ( !eventRewardENt )
  {
    atLabel = this->fields.atLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userEventPoint);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v11, 0);
      nextItemLabel = this->fields.nextItemLabel;
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2937/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, v11, 0);
        return;
      }
    }
LABEL_21:
    sub_2213CDC(v11, v12);
  }
  EventRewardEntity__GetInfo(eventRewardENt, &nameText, &countText, 0);
  v8 = this->fields.atLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v22 = eventRewardENt->fields.point - userEventPoint;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v22);
  v11 = System_String__Format(v9, v10, 0);
  if ( !v8 )
    goto LABEL_21;
  UILabel__set_text(v8, v11, 0);
  isQp = EventRewardEntity__isQp(eventRewardENt, 0);
  v15 = this->fields.nextItemLabel;
  v16 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isQp )
  {
    if ( !v16 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2940/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0);
    v18 = (Il2CppObject *)countText;
    v19 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !v16 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2940/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0);
    v19 = (Il2CppObject *)nameText;
    v18 = (Il2CppObject *)countText;
  }
  v11 = System_String__Format_75697880(v17, v19, v18, 0);
  if ( !v15 )
    goto LABEL_21;
  UILabel__set_text(v15, v11, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultEventItemComponent__SetTitleSprite(
        BattleResultEventItemComponent_o *this,
        int32_t currentGroup,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x22
  Il2CppObject *v6; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v8; // x1
  struct UISprite_o *v9; // x8
  Il2CppObject *v10; // x21
  System_String_o *v11; // x1
  BattleResultEventItemComponent_c *v12; // x0
  System_String_o *EVENT_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v14; // x0
  struct UISprite_o *titleSp; // x8
  Il2CppObject *v16; // x20
  BattleResultEventItemComponent_c *v17; // x0
  BattleResultEventItemComponent_c *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  struct UISprite_o *v21; // x8
  int32_t v22; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentEventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5974484 & 1) == 0 )
  {
    sub_2213A60(&BattleResultEventItemComponent_TypeInfo);
    sub_2213A60(&Method_BetterList_string__Contains__);
    sub_2213A60(&StringLiteral_21706/*"img_txt_reward_{0}_{1}"*/);
    byte_5974484 = 1;
  }
  if ( currentGroup < 1 )
  {
    v12 = BattleResultEventItemComponent_TypeInfo;
    if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
      v12 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_TITLE_NAME = v12->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v14 = System_Int32__ToString((int)this + 168, 0);
    mAtlas = (UIAtlas_o *)System_String__Concat_75651716(EVENT_POINT_REWARD_TITLE_NAME, v14, 0);
    titleSp = this->fields.titleSp;
    if ( titleSp )
    {
      v16 = (Il2CppObject *)mAtlas;
      mAtlas = titleSp->fields.mAtlas;
      if ( mAtlas )
      {
        mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0);
        if ( mAtlas )
        {
          if ( !BetterList_object___Contains(
                  (BetterList_T__o *)mAtlas,
                  v16,
                  (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
          {
            v17 = BattleResultEventItemComponent_TypeInfo;
            if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v8);
              v17 = BattleResultEventItemComponent_TypeInfo;
            }
            v16 = (Il2CppObject *)v17->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
          }
LABEL_25:
          mAtlas = (UIAtlas_o *)this->fields.titleSp;
          if ( !mAtlas )
            goto LABEL_30;
          v11 = (System_String_o *)v16;
          goto LABEL_27;
        }
      }
    }
LABEL_30:
    sub_2213CDC(mAtlas, v8);
  }
  currentEventId = this->fields.currentEventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &currentEventId);
  v22 = currentGroup;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v22);
  mAtlas = (UIAtlas_o *)System_String__Format_75697880((System_String_o *)StringLiteral_21706/*"img_txt_reward_{0}_{1}"*/, v5, v6, 0);
  v9 = this->fields.titleSp;
  if ( !v9 )
    goto LABEL_30;
  v10 = (Il2CppObject *)mAtlas;
  mAtlas = v9->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_30;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0);
  if ( !mAtlas )
    goto LABEL_30;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v10,
          (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
  {
    v18 = BattleResultEventItemComponent_TypeInfo;
    if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v8);
      v18 = BattleResultEventItemComponent_TypeInfo;
    }
    v19 = v18->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v20 = System_Int32__ToString((int)this + 168, 0);
    mAtlas = (UIAtlas_o *)System_String__Concat_75651716(v19, v20, 0);
    v21 = this->fields.titleSp;
    if ( v21 )
    {
      v16 = (Il2CppObject *)mAtlas;
      mAtlas = v21->fields.mAtlas;
      if ( mAtlas )
      {
        mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0);
        if ( mAtlas )
        {
          if ( !BetterList_object___Contains(
                  (BetterList_T__o *)mAtlas,
                  v16,
                  (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
            goto LABEL_28;
          goto LABEL_25;
        }
      }
    }
    goto LABEL_30;
  }
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas )
    goto LABEL_30;
  v11 = (System_String_o *)v10;
LABEL_27:
  UISprite__set_spriteName((UISprite_o *)mAtlas, v11, 0);
LABEL_28:
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas )
    goto LABEL_30;
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.parent)(mAtlas, mAtlas->klass[2]._1.generic_class);
}


void BattleResultEventItemComponent__SetUi(
        BattleResultEventItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x8
  EventDetailEntity_o *v10; // x23
  EventPointGroupMaster_o *v11; // x23
  int32_t currentEventId; // w24
  EventPointGroupEntity_o *v13; // x23
  UserEventPointMaster_o *v14; // x24
  int64_t userId; // x22
  struct UISprite_o *v16; // x8
  DataManager_o *v17; // x22
  __int64 v18; // x1
  UISprite_o *v19; // x24
  int32_t iconId; // w23
  int64_t v21; // x22
  __int64 v22; // x1
  EventRewardEntity_o *NextEventRewardEntity; // x20
  UISprite_o *eventIconSprite; // x21
  int32_t pointImageId; // w23
  __int64 v26; // x1
  BattleResultEventItemComponent_c *v27; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x21
  System_String_o *v29; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v31; // x21
  BattleResultEventItemComponent_c *v32; // x0
  const MethodInfo *v33; // x3
  int32_t v34; // w24
  UISprite_o *v35; // x23
  const MethodInfo *v36; // x3
  EventRewardEntity_o *NextEventRewardEntity_49114948; // x0
  const MethodInfo *v38; // x3
  System_String_o *EVENT_POINT_REWARD_AT; // x20
  System_String_o *v40; // x0
  __int64 v41; // x1
  System_String_o *v42; // x20
  __int64 v43; // x1
  BattleResultEventItemComponent_c *v44; // x0
  UILabel_o *titleAtLabel; // x19
  BattleResultEventItemComponent_EventDropItemInfo_o v46[2]; // [xsp+0h] [xbp-90h] BYREF
  UserEventEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_597447F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleResultEventItemComponent_TypeInfo);
    sub_2213A60(&Method_BetterList_string__Contains__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597447F = 1;
  }
  entity = 0;
  memset(&v46[1], 0, sizeof(BattleResultEventItemComponent_EventDropItemInfo_o));
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !SelfUserGame || !Instance )
    goto LABEL_67;
  if ( UserEventMaster__TryGetEntity((UserEventMaster_o *)Instance, &entity, SelfUserGame->fields.userId, eventId, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRewardMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_67;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  eventId,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      goto LABEL_67;
    if ( dropInfoList->fields._size >= 1 )
    {
      v10 = (EventDetailEntity_o *)Instance;
      if ( !Instance )
        goto LABEL_67;
      if ( EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Instance, 0)
        && EventDetailEntity__IsEventHappiness(v10, 0) )
      {
        Instance = (DataManager_o *)this->fields.dropInfoList;
        if ( !Instance )
          goto LABEL_67;
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
          v46,
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
          this->fields.currentGroupIndex,
          (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
        Instance = (DataManager_o *)UserEventPointMaster__GetEventPoint(eventId, v46[0].fields.groupId, 0);
        if ( !MasterData_object )
          goto LABEL_67;
LABEL_32:
        v21 = (int64_t)Instance;
        NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                  (EventRewardMaster_o *)MasterData_object,
                                  eventId,
                                  (int64_t)Instance,
                                  0);
        eventIconSprite = this->fields.eventIconSprite;
        pointImageId = v10->fields.pointImageId;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
        AtlasManager__SetItem(eventIconSprite, pointImageId, 0);
        v27 = BattleResultEventItemComponent_TypeInfo;
        if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v26);
          v27 = BattleResultEventItemComponent_TypeInfo;
        }
        EVENT_POINT_BG_TITLE_NAME = v27->static_fields->EVENT_POINT_BG_TITLE_NAME;
        v29 = System_Int32__ToString((int)this + 168, 0);
        Instance = (DataManager_o *)System_String__Concat_75651716(EVENT_POINT_BG_TITLE_NAME, v29, 0);
        eventPointAtSprite = this->fields.eventPointAtSprite;
        if ( eventPointAtSprite )
        {
          v31 = (Il2CppObject *)Instance;
          Instance = (DataManager_o *)eventPointAtSprite->fields.mAtlas;
          if ( Instance )
          {
            Instance = (DataManager_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0);
            if ( Instance )
            {
              if ( !BetterList_object___Contains(
                      (BetterList_T__o *)Instance,
                      v31,
                      (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
              {
                v32 = BattleResultEventItemComponent_TypeInfo;
                if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v7);
                  v32 = BattleResultEventItemComponent_TypeInfo;
                }
                v31 = (Il2CppObject *)v32->static_fields->EVENT_POINT_BG_TITLE_NAME;
              }
              Instance = (DataManager_o *)this->fields.eventPointAtSprite;
              if ( Instance )
              {
                UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v31, 0);
                BattleResultEventItemComponent__SetNextItemLabel(this, v21, NextEventRewardEntity, v33);
                return;
              }
            }
          }
        }
        goto LABEL_67;
      }
      if ( !EventDetailEntity__IsGroupPoint(v10, 0) )
      {
        Instance = (DataManager_o *)UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
        if ( !MasterData_object )
          goto LABEL_67;
        goto LABEL_32;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !this->fields.dropInfoList )
        goto LABEL_67;
      v11 = (EventPointGroupMaster_o *)Instance;
      currentEventId = this->fields.currentEventId;
      Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                    v46,
                                    this->fields.dropInfoList,
                                    this->fields.currentGroupIndex,
                                    (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      if ( !v11 )
        goto LABEL_67;
      v13 = EventPointGroupMaster__GetEntity(v11, currentEventId, v46[0].fields.groupId, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !this->fields.dropInfoList )
        goto LABEL_67;
      v14 = (UserEventPointMaster_o *)Instance;
      userId = SelfUserGame->fields.userId;
      Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                    v46,
                                    this->fields.dropInfoList,
                                    this->fields.currentGroupIndex,
                                    (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      if ( !v14 )
        goto LABEL_67;
      Instance = (DataManager_o *)UserEventPointMaster__GetEntity(v14, userId, eventId, v46[0].fields.groupId, 0);
      v16 = this->fields.eventIconSprite;
      v17 = Instance;
      if ( v13 )
      {
        if ( !v16 )
          goto LABEL_67;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)this->fields.eventIconSprite,
                                      0);
        if ( !Instance )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        v19 = this->fields.eventIconSprite;
        iconId = v13->fields.iconId;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
        AtlasManager__SetItem(v19, iconId, 0);
      }
      else
      {
        if ( !v16 )
          goto LABEL_67;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)this->fields.eventIconSprite,
                                      0);
        if ( !Instance )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      Instance = (DataManager_o *)this->fields.dropInfoList;
      if ( !Instance )
        goto LABEL_67;
      v34 = this->fields.currentEventId;
      v35 = this->fields.eventPointAtSprite;
      System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
        v46,
        (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
        this->fields.currentGroupIndex,
        (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      Instance = (DataManager_o *)BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
                                    this,
                                    v34,
                                    v46[0].fields.groupId,
                                    v36);
      if ( !v35 )
        goto LABEL_67;
      UISprite__set_spriteName(v35, (System_String_o *)Instance, 0);
      Instance = (DataManager_o *)this->fields.dropInfoList;
      if ( !Instance )
        goto LABEL_67;
      Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                    v46,
                                    (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
                                    this->fields.currentGroupIndex,
                                    (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      if ( !v17 || !MasterData_object )
        goto LABEL_67;
      NextEventRewardEntity_49114948 = EventRewardMaster__GetNextEventRewardEntity_49114948(
                                         (EventRewardMaster_o *)MasterData_object,
                                         eventId,
                                         v46[0].fields.groupId,
                                         *(_QWORD *)&v17->fields._DispLog,
                                         0);
      BattleResultEventItemComponent__SetNextItemLabel(
        this,
        *(_QWORD *)&v17->fields._DispLog,
        NextEventRewardEntity_49114948,
        v38);
      if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v7);
      Instance = (DataManager_o *)this->fields.dropInfoList;
      if ( !Instance )
        goto LABEL_67;
      EVENT_POINT_REWARD_AT = BattleResultEventItemComponent_TypeInfo->static_fields->EVENT_POINT_REWARD_AT;
      System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
        v46,
        (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
        this->fields.currentGroupIndex,
        (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      v46[1] = v46[0];
      v40 = System_Int32__ToString((int32_t)&v46[1].fields.groupId, 0);
      v42 = System_String__Concat_75651716(EVENT_POINT_REWARD_AT, v40, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
      if ( !LocalizationManager__ContainsKey(v42, 0) )
      {
        v44 = BattleResultEventItemComponent_TypeInfo;
        if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v43);
          v44 = BattleResultEventItemComponent_TypeInfo;
        }
        v42 = v44->static_fields->EVENT_POINT_REWARD_AT;
      }
      titleAtLabel = this->fields.titleAtLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
      Instance = (DataManager_o *)LocalizationManager__Get(v42, 0);
      if ( !titleAtLabel )
LABEL_67:
        sub_2213CDC(Instance, v7);
      UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0);
    }
  }
}


void BattleResultEventItemComponent__UpdateShowModeChangeButton(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  UIButton_o *showModeChangeButton; // x0
  __int64 *v4; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974499 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_5974499 = 1;
  }
  showModeChangeButton = this->fields.showModeChangeButton;
  if ( !showModeChangeButton )
LABEL_15:
    sub_2213CDC(showModeChangeButton, method);
  v4 = &StringLiteral_18209/*"btn_bg_20"*/;
  if ( this->fields.isShowPossessionNum )
    v4 = &StringLiteral_18211/*"btn_bg_21"*/;
  UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v4, 0);
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !showModeChanButtonLabelEffectColors )
      goto LABEL_15;
    if ( LODWORD(showModeChanButtonLabelEffectColors->max_length) )
    {
      p_r = &showModeChanButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !showModeChangeButton )
        goto LABEL_15;
      goto LABEL_14;
    }
LABEL_16:
    sub_2213CE4(showModeChangeButton);
  }
  if ( !showModeChanButtonLabelEffectColors )
    goto LABEL_15;
  if ( (showModeChanButtonLabelEffectColors->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_16;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !showModeChangeButton )
    goto LABEL_15;
LABEL_14:
  v10.fields.g = *p_g;
  v10.fields.r = *p_r;
  v10.fields.a = *p_a;
  v10.fields.b = *p_b;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v10, 0);
}


void BattleResultEventItemComponent__commandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_597448F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_597448F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultEventItemComponent__createDropInfo(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_IEnumerable_T__o *All_object; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  _QWORD *v14; // x21
  __int64 v15; // x8
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__c **v16; // x24
  intptr_t *v17; // x26
  const MethodInfo_38101F8 **v18; // x27
  const MethodInfo_39A9774 **v19; // x28
  const MethodInfo_448436C **v20; // x29
  int v21; // w9
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *v22; // x23
  System_Collections_Generic_List_T__o *dropInfoList; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x22
  __int64 v31; // x8
  __int64 v32; // x8
  System_Predicate_object__o *v33; // x23
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_IEnumerable_T__o *v40; // x22
  System_Collections_Generic_List_object__o *v41; // x23
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  MissionNaviTransitionBoardItem_c *klass; // x22
  BattleResultEventItemComponent___c_c *v49; // x0
  int v50; // w9
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__42_2; // x23
  _QWORD *v53; // x19
  const MethodInfo_38101F8 **v54; // x21
  const MethodInfo_448436C **v55; // x27
  const MethodInfo_39A9774 **v56; // x29
  intptr_t *v57; // x28
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__c **v58; // x26
  Il2CppObject *v59; // x24
  struct BattleResultEventItemComponent___c_StaticFields *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct BattleResultEventItemComponent_EventDropItemInfo_array *v79; // x8
  int v80; // w10
  __int64 monitor_low; // x10
  char *v82; // x8
  __int128 v83; // q0
  __int128 v84; // q1
  const MethodInfo_44F996C *v85; // x2
  BattleResultEventItemComponent_o *v86; // [xsp+8h] [xbp-C8h]
  MissionNaviTransitionBoardItem_o v87; // [xsp+10h] [xbp-C0h] BYREF

  if ( (byte_5974482 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindAll_BattleDropItem___);
    sub_2213A60(&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
    sub_2213A60(&System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_2213A60(&System_Predicate_BattleDropItem__TypeInfo);
    sub_2213A60(&Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__);
    sub_2213A60(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__);
    sub_2213A60(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__);
    sub_2213A60(&BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo);
    sub_2213A60(&BattleResultEventItemComponent___c_TypeInfo);
    byte_5974482 = 1;
  }
  memset(&v87, 0, 32);
  v5 = sub_2213CCC(BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
LABEL_31:
    sub_2213CDC(All_object, v7);
  *(_QWORD *)(v5 + 16) = drop;
  v14 = (_QWORD *)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)drop, v8, v9, v10, v11, v12, v13);
  v15 = *(_QWORD *)(v5 + 16);
  if ( v15 )
  {
    v16 = &System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo;
    v17 = &Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__;
    v18 = (const MethodInfo_38101F8 **)&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___;
    v19 = (const MethodInfo_39A9774 **)&Method_System_Array_FindAll_BattleDropItem___;
    v20 = (const MethodInfo_448436C **)&Method_System_Collections_Generic_List_BattleDropItem__FindAll__;
    v21 = 0;
    *(_DWORD *)(v5 + 24) = 0;
    v86 = this;
    while ( v21 < *(_DWORD *)(v15 + 24) )
    {
      v22 = *(System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **)(v5 + 32);
      dropInfoList = (System_Collections_Generic_List_T__o *)this->fields.dropInfoList;
      if ( !v22 )
      {
        v22 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *)sub_2213CCC(*v16);
        System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool____ctor(v22, (Il2CppObject *)v5, *v17, 0);
        *(_QWORD *)(v5 + 32) = v22;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v22, v24, v25, v26, v27, v28, v29);
      }
      All_object = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
                                                                    dropInfoList,
                                                                    (System_Func_T__bool__o *)v22,
                                                                    *v18);
      if ( ((unsigned __int8)All_object & 1) == 0 )
      {
        memset(&v87, 0, 32);
        v30 = *v14;
        if ( !*v14 )
          goto LABEL_31;
        v31 = *(int *)(v5 + 24);
        if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 24) )
          sub_2213CE4(All_object);
        v32 = *(_QWORD *)(v30 + 8 * v31 + 32);
        if ( !v32 )
          goto LABEL_31;
        v33 = *(System_Predicate_object__o **)(v5 + 40);
        v87.fields.sortIndex = *(_DWORD *)(v32 + 56);
        if ( !v33 )
        {
          v33 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_object____ctor(
            v33,
            (Il2CppObject *)v5,
            Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__,
            0);
          *(_QWORD *)(v5 + 40) = v33;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)v33, v34, v35, v36, v37, v38, v39);
        }
        All_object = (System_Collections_Generic_IEnumerable_T__o *)System_Array__FindAll_object_(
                                                                      (System_Object_array *)v30,
                                                                      (System_Predicate_T__o *)v33,
                                                                      *v19);
        if ( All_object )
        {
          v40 = All_object;
          v41 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleDropItem__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v41,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
          v87.klass = (MissionNaviTransitionBoardItem_c *)v41;
          sub_2213A04(&v87, (int32_t)v41, v42, v43, v44, v45, v46, v47);
          All_object = (System_Collections_Generic_IEnumerable_T__o *)v87.klass;
          if ( !v87.klass )
            goto LABEL_31;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v87.klass,
            v40,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
        }
        klass = v87.klass;
        if ( !v87.klass )
          goto LABEL_31;
        v49 = BattleResultEventItemComponent___c_TypeInfo;
        v50 = *(&BattleResultEventItemComponent___c_TypeInfo->_2.cctor_finished + 1);
        LODWORD(v87.monitor) = v87.klass->_1.namespaze;
        if ( !v50 )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent___c_TypeInfo, v7);
          v49 = BattleResultEventItemComponent___c_TypeInfo;
        }
        static_fields = v49->static_fields;
        _9__42_2 = (System_Predicate_object__o *)static_fields->__9__42_2;
        if ( !_9__42_2 )
        {
          v53 = v14;
          v54 = v18;
          v55 = v20;
          v56 = v19;
          v57 = v17;
          v58 = v16;
          if ( !*(&v49->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v49, v7);
            static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          }
          v59 = (Il2CppObject *)static_fields->__9;
          _9__42_2 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_object____ctor(
            _9__42_2,
            v59,
            Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__,
            0);
          v60 = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          v60->__9__42_2 = (struct System_Predicate_BattleDropItem__o *)_9__42_2;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v60->__9__42_2,
            (int32_t)_9__42_2,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66);
          v16 = v58;
          v17 = v57;
          v19 = v56;
          v20 = v55;
          v18 = v54;
          v14 = v53;
          this = v86;
        }
        *(_QWORD *)&v87.fields.selectNum = System_Collections_Generic_List_object___FindAll(
                                             (System_Collections_Generic_List_object__o *)klass,
                                             (System_Predicate_T__o *)_9__42_2,
                                             *v20);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v87.fields, v87.fields.selectNum, v67, v68, v69, v70, v71, v72);
        All_object = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dropInfoList;
        if ( !All_object )
          goto LABEL_31;
        v79 = (struct BattleResultEventItemComponent_EventDropItemInfo_array *)All_object[1].klass;
        v80 = HIDWORD(All_object[1].monitor) + 1;
        *(_OWORD *)&v87.fields.sortValue0 = *(_OWORD *)&v87.klass;
        *(_OWORD *)&v87.fields.sortValue1 = *(_OWORD *)&v87.fields.selectNum;
        HIDWORD(All_object[1].monitor) = v80;
        if ( !v79 )
          goto LABEL_31;
        monitor_low = SLODWORD(All_object[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(v79->max_length) )
        {
          v85 = *(const MethodInfo_44F996C **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__
                                                           + 4)
                                                         + 192LL)
                                             + 112LL);
          *(_OWORD *)&v87.fields.sortValue1B = *(_OWORD *)&v87.fields.sortValue0;
          *(_OWORD *)&v87.fields.sortValue2B = *(_OWORD *)&v87.fields.sortValue1;
          System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___AddWithResize(
            (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)All_object,
            (BattleResultEventItemComponent_EventDropItemInfo_o *)&v87.fields.sortValue1B,
            v85);
        }
        else
        {
          v82 = (char *)v79 + 32 * monitor_low;
          v83 = *(_OWORD *)&v87.fields.sortValue0;
          v84 = *(_OWORD *)&v87.fields.sortValue1;
          LODWORD(All_object[1].monitor) = monitor_low + 1;
          *((_OWORD *)v82 + 2) = v83;
          *((_OWORD *)v82 + 3) = v84;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v82 + 32), 0, v73, v74, v75, v76, v77, v78);
        }
      }
      v15 = *(_QWORD *)(v5 + 16);
      v21 = *(_DWORD *)(v5 + 24) + 1;
      *(_DWORD *)(v5 + 24) = v21;
      if ( !v15 )
        goto LABEL_31;
    }
  }
}


void BattleResultEventItemComponent__endClose(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974496 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5974496 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattleResultEventItemComponent__endCommandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974490 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    byte_5974490 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3639/*"CLOSE"*/, 0);
}


void BattleResultEventItemComponent__endEventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974494 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    byte_5974494 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3639/*"CLOSE"*/, 0);
}


void BattleResultEventItemComponent__endItemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_597448C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    byte_597448C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3639/*"CLOSE"*/, 0);
}


void BattleResultEventItemComponent__endOpen(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_597447C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9649/*"NEXT"*/);
    byte_597447C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9649/*"NEXT"*/, 0),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0) )
  {
    sub_2213CDC(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0);
}


void BattleResultEventItemComponent__eventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_5974493 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__);
    sub_2213A60(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__);
    byte_5974493 = 1;
  }
  v4 = Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__,
    0);
  if ( !itemDialog )
    sub_2213CDC(v8, v9);
  ItemDetailInfoComponent__Close_39909252(itemDialog, v7, 0);
}


BattleDropItem_o *BattleResultEventItemComponent__getNewDrop(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleDropItem__o *v6; // x8
  BattleDropItem_o *v7; // x19

  if ( (byte_597447A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_597447A = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v6 = this->fields.newDroplist;
  if ( !v6 )
    sub_2213CDC(Item, v5);
  v7 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v6,
    0,
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v7;
}


bool BattleResultEventItemComponent__isGetItems(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 currentGroupIndex; // x1
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_EventDropItemInfo_o v6; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_5974479 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_5974479 = 1;
  }
  currentGroupIndex = (unsigned int)this->fields.currentGroupIndex;
  if ( (currentGroupIndex & 0x80000000) != 0 )
    return 0;
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    sub_2213CDC(0, currentGroupIndex);
  if ( dropInfoList->fields._size <= (int)currentGroupIndex )
    return 0;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v6,
    dropInfoList,
    currentGroupIndex,
    (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  return v6.fields.itemCount > 0;
}


void BattleResultEventItemComponent__itemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_597448B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleResultEventItemComponent_endItemDialogCallBack__);
    sub_2213A60(&Method_BattleResultEventItemComponent_itemDialogCallBack__);
    byte_597448B = 1;
  }
  v4 = Method_BattleResultEventItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_BattleResultEventItemComponent_itemDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endItemDialogCallBack__, 0);
  if ( !itemDialog )
    sub_2213CDC(v8, v9);
  ItemDetailInfoComponent__Close_39909252(itemDialog, v7, 0);
}


void BattleResultEventItemComponent__setResultData(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t eventId,
        QuestRewardInfo_array *resultBoostItemRewardInfos,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x24
  unsigned int v14; // w25
  int32_t v15; // w22
  QuestRewardInfo_o *v16; // x27
  BattleResultEventItemComponent_c *v17; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x23
  System_String_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x23
  __int64 v22; // x1
  BattleResultEventItemComponent_c *v23; // x0
  UILabel_o *titleAtLabel; // x24
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x4
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x9
  int32_t currentGroupIndex; // w1
  BattleDropItem_array *v29; // x2
  const MethodInfo *v30; // x2
  BattleResultEventItemComponent_EventDropItemInfo_o v31; // [xsp+8h] [xbp-78h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_597447E & 1) == 0 )
  {
    sub_2213A60(&BattleDropItem___TypeInfo);
    sub_2213A60(&BattleResultEventItemComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597447E = 1;
  }
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !resultBoostItemRewardInfos )
    goto LABEL_35;
  max_length = resultBoostItemRewardInfos->max_length;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_2213CE4(Instance);
      v16 = resultBoostItemRewardInfos->m_Items[v14];
      if ( !v16 )
        goto LABEL_35;
      if ( v16->fields.type == 2 )
      {
        if ( !v13 )
          goto LABEL_35;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v13,
                                      v16->fields.objectId,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( Instance && LODWORD(Instance->fields.lookup) == 5 )
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
  if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v11);
    v17 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_AT = v17->static_fields->EVENT_POINT_REWARD_AT;
  v19 = System_Int32__ToString((int32_t)&eventIda, 0);
  v21 = System_String__Concat_75651716(EVENT_POINT_REWARD_AT, v19, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  if ( !LocalizationManager__ContainsKey(v21, 0) )
  {
    v23 = BattleResultEventItemComponent_TypeInfo;
    if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v22);
      v23 = BattleResultEventItemComponent_TypeInfo;
    }
    v21 = v23->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  Instance = (DataManager_o *)LocalizationManager__Get(v21, 0);
  if ( !titleAtLabel
    || (UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0),
        this->fields.currentEventId = eventIda,
        BattleResultEventItemComponent__createDropInfo(this, drop, v25),
        Instance = (DataManager_o *)sub_2213B20(BattleDropItem___TypeInfo, 0),
        (dropInfoList = this->fields.dropInfoList) == 0) )
  {
LABEL_35:
    sub_2213CDC(Instance, v11);
  }
  currentGroupIndex = this->fields.currentGroupIndex;
  v29 = (BattleDropItem_array *)Instance;
  if ( dropInfoList->fields._size > currentGroupIndex )
  {
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v31,
      this->fields.dropInfoList,
      currentGroupIndex,
      (const MethodInfo_44F9610 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    Instance = (DataManager_o *)v31.fields.itemList;
    if ( !v31.fields.itemList )
      goto LABEL_35;
    v29 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)v31.fields.itemList,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  }
  BattleResultEventItemComponent__SetItemWindow(this, v29, v15, rewardInfos, v26);
  BattleResultEventItemComponent__SetUi(this, eventIda, v30);
}


void BattleResultEventItemComponent__setShowCommandCodeConf(
        BattleResultEventItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_597448D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10035/*"OPEN_COMMANDCODE"*/);
    byte_597448D = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_2213CDC(0, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_10035/*"OPEN_COMMANDCODE"*/, 0);
}


void BattleResultEventItemComponent__setShowConf(
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
    sub_2213CDC(this, 0);
  type = item->fields.type;
  if ( Gift__IsServant(type, 0) )
  {
    BattleResultEventItemComponent__setShowServantConf(this, item->fields.userSvtId, v6);
  }
  else if ( Gift__IsItem(type, 0) )
  {
    BattleResultEventItemComponent__setShowItemConf(this, item->fields.objectId, v7);
  }
  else if ( Gift__IsCommandCode(type, 0) )
  {
    BattleResultEventItemComponent__setShowCommandCodeConf(this, item->fields.userSvtId, v8);
  }
  else if ( Gift__IsEventPointBuff(type, 0) )
  {
    BattleResultEventItemComponent__setShowEventPointBuffConf(this, item->fields.objectId, v9);
  }
}


void BattleResultEventItemComponent__setShowEventPointBuffConf(
        BattleResultEventItemComponent_o *this,
        int64_t eventPointBuffId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974491 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10036/*"OPEN_EVENTPOINTBUFF"*/);
    byte_5974491 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_eventPointBuffId = eventPointBuffId;
  if ( !myFsm )
    sub_2213CDC(0, eventPointBuffId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_10036/*"OPEN_EVENTPOINTBUFF"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultEventItemComponent__setShowItemConf(
        BattleResultEventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974489 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10042/*"OPEN_ITEM"*/);
    byte_5974489 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_2213CDC(0, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_10042/*"OPEN_ITEM"*/, 0);
}


void BattleResultEventItemComponent__setShowServantConf(
        BattleResultEventItemComponent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974485 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10050/*"OPEN_SERVANT"*/);
    byte_5974485 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_userSvtId = userSvtId;
  if ( !myFsm )
    sub_2213CDC(0, userSvtId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_10050/*"OPEN_SERVANT"*/, 0);
}


void BattleResultEventItemComponent__showCommandCodeDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v6; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22

  if ( (byte_597448E & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultEventItemComponent_commandCodeDialogCallBack__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597448E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_commandCodeDialogCallBack__,
          0),
        !v6) )
  {
    sub_2213CDC(Instance, v4);
  }
  CommonUI__OpenServantStatusDialog_37385832((CommonUI_o *)v6, 0, (UserCommandCodeEntity_o *)Entity, v7, 0, 0);
}


void BattleResultEventItemComponent__showEventPointBuffDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_String_o *klass; // x21
  System_String_o *monitor; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x23

  if ( (byte_5974492 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__);
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_2213A60(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974492 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.tmp_eventPointBuffId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0
    || (itemDialog = this->fields.itemDialog,
        klass = (System_String_o *)Instance[2].klass,
        monitor = (System_String_o *)Instance[2].monitor,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__,
          0),
        !itemDialog) )
  {
    sub_2213CDC(Instance, v4);
  }
  ItemDetailInfoComponent__OpenItemMsgInfo(itemDialog, klass, monitor, v8, 0);
}


void BattleResultEventItemComponent__showItemDialog(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v7; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x22

  if ( (byte_597448A & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultEventItemComponent_itemDialogCallBack__);
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597448A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v7 = (ItemEntity_o *)Entity,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultEventItemComponent_itemDialogCallBack__,
          0),
        !itemDialog) )
  {
    sub_2213CDC(Instance, v4);
  }
  ItemDetailInfoComponent__Open(itemDialog, v7, v8, 50, 0);
}


void BattleResultEventItemComponent__showServantDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int64_t tmp_userSvtId; // x20
  CommonUI_o *v5; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_5974486 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleResultEventItemComponent_DialogCallBack__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974486 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  tmp_userSvtId = this->fields.tmp_userSvtId;
  v5 = (CommonUI_o *)Instance;
  v6 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_DialogCallBack__,
    0);
  if ( !v5 )
    sub_2213CDC(v7, v8);
  CommonUI__OpenServantStatusDialog_37382644(v5, 0, tmp_userSvtId, v6, 0, 0);
}


void BattleResultEventItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59744A1 & 1) == 0 )
  {
    sub_2213A60(&BattleResultEventItemComponent___c_TypeInfo);
    byte_59744A1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleResultEventItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultEventItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultEventItemComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleResultEventItemComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleResultEventItemComponent___c___ctor(BattleResultEventItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultEventItemComponent___c___createDropInfo_b__42_2(
        BattleResultEventItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_47387968(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_47388336(s->fields.type, 0);
}


void BattleResultEventItemComponent___c__DisplayClass42_0___ctor(
        BattleResultEventItemComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultEventItemComponent___c__DisplayClass42_0___createDropInfo_b__0(
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
  if ( (unsigned int)i >= LODWORD(drop->max_length) )
    sub_2213CE4(this);
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_5:
    sub_2213CDC(this, d);
  return d->fields.groupId == v5->fields.eventGroupId;
}


bool BattleResultEventItemComponent___c__DisplayClass42_0___createDropInfo_b__1(
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
  if ( (unsigned int)i >= LODWORD(drop->max_length) )
    sub_2213CE4(this);
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_2213CDC(this, item);
  return item->fields.eventGroupId == v5->fields.eventGroupId;
}