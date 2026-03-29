void BattleResultEventItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct BattleResultEventItemComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct BattleResultEventItemComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct BattleResultEventItemComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D3436B & 1) == 0 )
  {
    sub_1C93AD4(&BattleResultEventItemComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_20539/*"img_bg_ep"*/);
    sub_1C93AD4(&StringLiteral_2832/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/);
    sub_1C93AD4(&StringLiteral_20941/*"img_txt_reward"*/);
    sub_1C93AD4(&StringLiteral_20540/*"img_bg_events"*/);
    byte_4D3436B = 1;
  }
  BattleResultEventItemComponent_TypeInfo->static_fields->EVENT_POINT_REWARD_AT = (struct System_String_o *)StringLiteral_2832/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleResultEventItemComponent_TypeInfo->static_fields,
    StringLiteral_2832/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20941/*"img_txt_reward"*/;
  static_fields = BattleResultEventItemComponent_TypeInfo->static_fields;
  static_fields->EVENT_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_20941/*"img_txt_reward"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->EVENT_POINT_REWARD_TITLE_NAME,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_20540/*"img_bg_events"*/;
  v16 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v16->EVENT_POINT_REWARD_BG_NAME = (struct System_String_o *)StringLiteral_20540/*"img_bg_events"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->EVENT_POINT_REWARD_BG_NAME, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_20539/*"img_bg_ep"*/;
  v24 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v24->EVENT_POINT_BG_TITLE_NAME = (struct System_String_o *)StringLiteral_20539/*"img_bg_ep"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->EVENT_POINT_BG_TITLE_NAME, v23, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)&BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH = 0x19E0000013BLL;
}


void BattleResultEventItemComponent___ctor(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3436A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Color___TypeInfo);
    byte_4D3436A = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_1C93B7C(UnityEngine_Color___TypeInfo, 2);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.showModeChanButtonLabelEffectColors,
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

  if ( (byte_4D34364 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    sub_1C93AD4(&StringLiteral_9683/*"OPEN"*/);
    sub_1C93AD4(&StringLiteral_9318/*"NEXT"*/);
    byte_4D34364 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9683/*"OPEN"*/, 0);
      myFsm = (PlayMakerFSM_o *)this->fields.dropInfoList;
      if ( myFsm )
      {
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
          &v9,
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)myFsm,
          this->fields.currentGroupIndex,
          (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
        myFsm = (PlayMakerFSM_o *)v9.fields.itemList;
        if ( v9.fields.itemList )
        {
          v5 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)v9.fields.itemList,
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
          BattleResultEventItemComponent__SetItemWindow_48536156(this, v5, v6);
          BattleResultEventItemComponent__SetUi(this, this->fields.currentEventId, v7);
          BattleResultEventItemComponent__Open(this, v8);
          return;
        }
      }
    }
LABEL_11:
    sub_1C93D2C(myFsm, v3);
  }
  myFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !myFsm )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9318/*"NEXT"*/, 0);
}


void BattleResultEventItemComponent__Close(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x1
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // x19
  BattleResultEventItemComponent_EventDropItemInfo_o v15; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4D34362 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleResultEventItemComponent_endClose__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_4D34362 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_11;
  BattleViewItemlistComponent__setHide(itemWindow, 0);
  window = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo);
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
      (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    newDroplist = v15.fields.newDroplist;
  }
  else
  {
    newDroplist = 0;
  }
  this->fields.newDroplist = newDroplist;
  p_newDroplist = &this->fields.newDroplist;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_newDroplist, (int32_t)newDroplist, v7, v8, v9, v10, v11, v12);
  itemWindow = (BattleViewItemlistComponent_o *)*(p_newDroplist - 10);
  ++*((_DWORD *)p_newDroplist + 9);
  if ( !itemWindow )
LABEL_11:
    sub_1C93D2C(itemWindow, method);
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

  if ( (byte_4D34354 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34354 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_1C93D2C(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultEventItemComponent__EndCloseDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34355 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3518/*"CLOSE"*/);
    byte_4D34355 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3518/*"CLOSE"*/, 0);
}


void BattleResultEventItemComponent__Init(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_String_o *v4; // x20
  UnityEngine_Object_o *titleAtLabel; // x20
  UILabel_o *v6; // x20
  UnityEngine_Object_o *titleNextItemLabel; // x20
  UILabel_o *v8; // x20
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D34345 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_2832/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/);
    sub_1C93AD4(&StringLiteral_2836/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/);
    sub_1C93AD4(&StringLiteral_2830/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    byte_4D34345 = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2836/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0);
  if ( !window )
    goto LABEL_28;
  v4 = (System_String_o *)window;
  if ( !System_String__Equals_64461044((System_String_o *)window, (System_String_o *)StringLiteral_2836/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_28;
    UILabel__set_text((UILabel_o *)window, v4, 0);
  }
  titleAtLabel = (UnityEngine_Object_o *)this->fields.titleAtLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleAtLabel, 0, 0) )
  {
    v6 = this->fields.titleAtLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2832/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0);
    if ( !v6 )
      goto LABEL_28;
    UILabel__set_text(v6, (System_String_o *)window, 0);
  }
  titleNextItemLabel = (UnityEngine_Object_o *)this->fields.titleNextItemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleNextItemLabel, 0, 0) )
  {
    v8 = this->fields.titleNextItemLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2830/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
    if ( v8 )
    {
      UILabel__set_text(v8, (System_String_o *)window, 0);
      goto LABEL_26;
    }
LABEL_28:
    sub_1C93D2C(window, method);
  }
LABEL_26:
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  this->fields.currentGroupIndex = 0;
  if ( !window )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  v9 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)sub_1C93D20(System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo____ctor(
    v9,
    (const MethodInfo_390CBA0 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
  this->fields.dropInfoList = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dropInfoList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4D34365 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleResultEventItemComponent_OnClickSwitchShowMode__);
    byte_4D34365 = 1;
  }
  v3 = Method_BattleResultEventItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_BattleResultEventItemComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.isShowPossessionNum ^= 1u;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v5);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_1C93D2C(0, v6);
  BattleViewItemlistComponent__SwitchShowNumMode(itemWindow, this->fields.isShowPossessionNum, 0);
}


void BattleResultEventItemComponent__Open(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_c *klass; // x8
  __int64 currentEventId; // x1
  const MethodInfo *v6; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v7; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4D34348 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_4D34348 = 1;
  }
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_10;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v7,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._6_SetTitleSprite.methodPtr)(
    this,
    (unsigned int)v7.fields.groupId,
    this->klass->vtable._6_SetTitleSprite.method);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_10;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v7,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  if ( v7.fields.groupId < 1 )
  {
    klass = this->klass;
    currentEventId = (unsigned int)this->fields.currentEventId;
    goto LABEL_9;
  }
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
LABEL_10:
    sub_1C93D2C(dropInfoList, method);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v7,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  klass = this->klass;
  currentEventId = (unsigned int)v7.fields.groupId;
LABEL_9:
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, __int64, const MethodInfo *))klass->vtable._5_SetBgSprite.methodPtr)(
    this,
    currentEventId,
    klass->vtable._5_SetBgSprite.method);
  BattleResultEventItemComponent__OpenCommonProcess(this, v6);
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

  if ( (byte_4D34369 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleResultEventItemComponent_endOpen__);
    sub_1C93AD4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C93AD4(&StringLiteral_5475/*"END_OPEN"*/);
    byte_4D34369 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0);
  this->fields.isShowPossessionNum = 0;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v4);
  touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !touchNextRoot
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5475/*"END_OPEN"*/, 0),
        window = this->fields.window,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1C93D20(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_endOpen__,
          0),
        !window) )
  {
LABEL_7:
    sub_1C93D2C(touchNextRoot, method);
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

  if ( (byte_4D34368 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_4D34368 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      sub_1C93D2C(0, v3);
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v9,
      dropInfoList,
      this->fields.currentGroupIndex,
      (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
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
  BattleResultEventItemComponent_c *v15; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x20
  System_String_o *v17; // x0
  struct UISprite_o *v18; // x8
  BattleResultEventItemComponent_c *v19; // x0
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v22; // [xsp+18h] [xbp-38h] BYREF
  int32_t v23; // [xsp+1Ch] [xbp-34h] BYREF

  v23 = eventId;
  if ( (byte_4D3434D & 1) == 0 )
  {
    sub_1C93AD4(&BattleResultEventItemComponent_TypeInfo);
    sub_1C93AD4(&Method_BetterList_string__Contains__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_16725/*"_{0}_{1}"*/);
    byte_4D3434D = 1;
  }
  v7 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v7 = BattleResultEventItemComponent_TypeInfo;
  }
  v8 = System_String__Concat_64425724(
         v7->static_fields->EVENT_POINT_BG_TITLE_NAME,
         (System_String_o *)StringLiteral_16725/*"_{0}_{1}"*/,
         0);
  v22 = eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v21 = groupId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  mAtlas = (UIAtlas_o *)System_String__Format_64467032(v8, v9, v10, 0);
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
         (const MethodInfo_33DC0B4 *)Method_BetterList_string__Contains__) )
  {
    return v14;
  }
  v15 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v15 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_BG_TITLE_NAME = v15->static_fields->EVENT_POINT_BG_TITLE_NAME;
  v17 = System_Int32__ToString((int32_t)&v23, 0);
  mAtlas = (UIAtlas_o *)System_String__Concat_64425724(EVENT_POINT_BG_TITLE_NAME, v17, 0);
  v18 = this->fields.eventPointAtSprite;
  if ( !v18
    || (v14 = (System_String_o *)mAtlas, (mAtlas = v18->fields.mAtlas) == 0)
    || (mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0)) == 0 )
  {
LABEL_19:
    sub_1C93D2C(mAtlas, v12);
  }
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          (Il2CppObject *)v14,
          (const MethodInfo_33DC0B4 *)Method_BetterList_string__Contains__) )
  {
    v19 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v19 = BattleResultEventItemComponent_TypeInfo;
    }
    return v19->static_fields->EVENT_POINT_BG_TITLE_NAME;
  }
  return v14;
}


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
  if ( (byte_4D34350 & 1) == 0 )
  {
    sub_1C93AD4(&BattleResultEventItemComponent_TypeInfo);
    sub_1C93AD4(&Method_BetterList_string__Contains__);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D34350 = 1;
  }
  v4 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v4 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_BG_NAME = v4->static_fields->EVENT_POINT_REWARD_BG_NAME;
  v6 = System_Int32__ToString((int32_t)&v12, 0);
  mAtlas = (UIAtlas_o *)System_String__Concat_64463988(
                          EVENT_POINT_REWARD_BG_NAME,
                          (System_String_o *)StringLiteral_16207/*"_"*/,
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
          (const MethodInfo_33DC0B4 *)Method_BetterList_string__Contains__) )
  {
    v11 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
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
    sub_1C93D2C(mAtlas, v8);
  }
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.parent)(mAtlas, mAtlas->klass[2]._1.generic_class);
}


void BattleResultEventItemComponent__SetCondensedScale(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *nextItemLabel; // x0
  UILabel_o *titleAtLabel; // x20

  if ( (byte_4D34367 & 1) == 0 )
  {
    sub_1C93AD4(&BattleResultEventItemComponent_TypeInfo);
    byte_4D34367 = 1;
  }
  nextItemLabel = (UILabel_o *)BattleResultEventItemComponent_TypeInfo;
  titleAtLabel = this->fields.titleAtLabel;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  if ( !titleAtLabel
    || (UILabel__SetCondensedScale(
          titleAtLabel,
          BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH,
          0,
          0),
        (nextItemLabel = this->fields.nextItemLabel) == 0) )
  {
    sub_1C93D2C(nextItemLabel, method);
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
    sub_1C93D2C(0, itemArray);
  BattleViewItemlistComponent__setEventResultCount(itemWindow, boostItemManaCount, rewardInfos, 0);
  BattleResultEventItemComponent__SetItemWindow_48536156(this, itemArray, v8);
}


void BattleResultEventItemComponent__SetItemWindow_48536156(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x22
  int32_t currentEventId; // w21
  BattleDropItemComponent_ClickDelegate_o *v7; // x23
  BattleViewItemlistComponent_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4D3434A & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleResultEventItemComponent_setShowConf__);
    sub_1C93AD4(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_4D3434A = 1;
  }
  itemWindow = this->fields.itemWindow;
  currentEventId = this->fields.currentEventId;
  v7 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C93D20(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_setShowConf__,
    0);
  if ( !itemWindow
    || (BattleViewItemlistComponent__setListDataCustomColumn_48427096(
          itemWindow,
          itemArray,
          currentEventId,
          v7,
          this->fields.itemColumnCount,
          0),
        (v8 = this->fields.itemWindow) == 0) )
  {
    sub_1C93D2C(v8, v9);
  }
  BattleViewItemlistComponent__setHide(v8, 0);
}


void BattleResultEventItemComponent__SetNextItemLabel(
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
  bool v14; // w20
  System_String_o *v15; // x0
  Il2CppObject *v16; // x1
  UILabel_o *v17; // x20
  int64_t v18; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D3434E & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_2835/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C93AD4(&StringLiteral_2833/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C93AD4(&StringLiteral_2834/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/);
    sub_1C93AD4(&StringLiteral_2831/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3434E = 1;
  }
  countText = 0;
  nameText = 0;
  if ( eventRewardENt )
  {
    EventRewardEntity__GetInfo(eventRewardENt, &nameText, &countText, 0);
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2835/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
    v18 = eventRewardENt->fields.point - userEventPoint;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v10 = System_String__Format(v8, v9, 0);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v10, 0);
      isQp = EventRewardEntity__isQp(eventRewardENt, 0);
      nextItemLabel = this->fields.nextItemLabel;
      v14 = isQp;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2834/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0);
      v16 = v14 ? (Il2CppObject *)StringLiteral_1/*""*/ : (Il2CppObject *)nameText;
      v10 = System_String__Format_64467032(v15, v16, (Il2CppObject *)countText, 0);
      if ( nextItemLabel )
        goto LABEL_18;
    }
LABEL_15:
    sub_1C93D2C(v10, v11);
  }
  v17 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2833/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
  if ( !v17 )
    goto LABEL_15;
  UILabel__set_text(v17, v10, 0);
  nextItemLabel = this->fields.nextItemLabel;
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2831/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
  if ( !nextItemLabel )
    goto LABEL_15;
LABEL_18:
  UILabel__set_text(nextItemLabel, v10, 0);
}


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

  if ( (byte_4D34351 & 1) == 0 )
  {
    sub_1C93AD4(&BattleResultEventItemComponent_TypeInfo);
    sub_1C93AD4(&Method_BetterList_string__Contains__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_20942/*"img_txt_reward_{0}_{1}"*/);
    byte_4D34351 = 1;
  }
  if ( currentGroup < 1 )
  {
    v12 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v12 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_TITLE_NAME = v12->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v14 = System_Int32__ToString((int)this + 168, 0);
    mAtlas = (UIAtlas_o *)System_String__Concat_64425724(EVENT_POINT_REWARD_TITLE_NAME, v14, 0);
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
                  (const MethodInfo_33DC0B4 *)Method_BetterList_string__Contains__) )
          {
            v17 = BattleResultEventItemComponent_TypeInfo;
            if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
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
    sub_1C93D2C(mAtlas, v8);
  }
  currentEventId = this->fields.currentEventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
  v22 = currentGroup;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  mAtlas = (UIAtlas_o *)System_String__Format_64467032((System_String_o *)StringLiteral_20942/*"img_txt_reward_{0}_{1}"*/, v5, v6, 0);
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
          (const MethodInfo_33DC0B4 *)Method_BetterList_string__Contains__) )
  {
    v18 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v18 = BattleResultEventItemComponent_TypeInfo;
    }
    v19 = v18->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v20 = System_Int32__ToString((int)this + 168, 0);
    mAtlas = (UIAtlas_o *)System_String__Concat_64425724(v19, v20, 0);
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
                  (const MethodInfo_33DC0B4 *)Method_BetterList_string__Contains__) )
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
  int32_t currentEventId; // w24
  EventPointGroupMaster_o *v12; // x23
  EventPointGroupEntity_o *v13; // x23
  int64_t userId; // x22
  UserEventPointMaster_o *v15; // x24
  DataManager_o *v16; // x22
  UISprite_o *v17; // x24
  int32_t iconId; // w23
  int64_t v19; // x22
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UISprite_o *eventIconSprite; // x24
  int32_t pointImageId; // w21
  EventRewardEntity_o *v23; // x20
  BattleResultEventItemComponent_c *v24; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x21
  System_String_o *v26; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v28; // x21
  BattleResultEventItemComponent_c *v29; // x0
  const MethodInfo *v30; // x3
  int32_t v31; // w24
  UISprite_o *v32; // x23
  const MethodInfo *v33; // x3
  EventRewardEntity_o *NextEventRewardEntity_42825256; // x0
  const MethodInfo *v35; // x3
  System_String_o *EVENT_POINT_REWARD_AT; // x20
  System_String_o *v37; // x0
  System_String_o *v38; // x20
  BattleResultEventItemComponent_c *v39; // x0
  UILabel_o *titleAtLabel; // x19
  BattleResultEventItemComponent_EventDropItemInfo_o v41[2]; // [xsp+0h] [xbp-90h] BYREF
  UserEventEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4D3434C & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BattleResultEventItemComponent_TypeInfo);
    sub_1C93AD4(&Method_BetterList_string__Contains__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3434C = 1;
  }
  entity = 0;
  memset(&v41[1], 0, sizeof(BattleResultEventItemComponent_EventDropItemInfo_o));
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !SelfUserGame || !Instance )
    goto LABEL_65;
  if ( UserEventMaster__TryGetEntity((UserEventMaster_o *)Instance, &entity, SelfUserGame->fields.userId, eventId, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRewardMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_65;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  eventId,
                                  (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      goto LABEL_65;
    if ( dropInfoList->fields._size >= 1 )
    {
      v10 = (EventDetailEntity_o *)Instance;
      if ( !Instance )
        goto LABEL_65;
      if ( EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Instance, 0)
        && EventDetailEntity__IsEventHappiness(v10, 0) )
      {
        Instance = (DataManager_o *)this->fields.dropInfoList;
        if ( !Instance )
          goto LABEL_65;
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
          v41,
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
          this->fields.currentGroupIndex,
          (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
        Instance = (DataManager_o *)UserEventPointMaster__GetEventPoint(eventId, v41[0].fields.groupId, 0);
        if ( !MasterData_object )
          goto LABEL_65;
LABEL_32:
        v19 = (int64_t)Instance;
        NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                  (EventRewardMaster_o *)MasterData_object,
                                  eventId,
                                  (int64_t)Instance,
                                  0);
        eventIconSprite = this->fields.eventIconSprite;
        pointImageId = v10->fields.pointImageId;
        v23 = NextEventRewardEntity;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(eventIconSprite, pointImageId, 0);
        v24 = BattleResultEventItemComponent_TypeInfo;
        if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
          v24 = BattleResultEventItemComponent_TypeInfo;
        }
        EVENT_POINT_BG_TITLE_NAME = v24->static_fields->EVENT_POINT_BG_TITLE_NAME;
        v26 = System_Int32__ToString((int)this + 168, 0);
        Instance = (DataManager_o *)System_String__Concat_64425724(EVENT_POINT_BG_TITLE_NAME, v26, 0);
        eventPointAtSprite = this->fields.eventPointAtSprite;
        if ( eventPointAtSprite )
        {
          v28 = (Il2CppObject *)Instance;
          Instance = (DataManager_o *)eventPointAtSprite->fields.mAtlas;
          if ( Instance )
          {
            Instance = (DataManager_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0);
            if ( Instance )
            {
              if ( !BetterList_object___Contains(
                      (BetterList_T__o *)Instance,
                      v28,
                      (const MethodInfo_33DC0B4 *)Method_BetterList_string__Contains__) )
              {
                v29 = BattleResultEventItemComponent_TypeInfo;
                if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
                  v29 = BattleResultEventItemComponent_TypeInfo;
                }
                v28 = (Il2CppObject *)v29->static_fields->EVENT_POINT_BG_TITLE_NAME;
              }
              Instance = (DataManager_o *)this->fields.eventPointAtSprite;
              if ( Instance )
              {
                UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v28, 0);
                BattleResultEventItemComponent__SetNextItemLabel(this, v19, v23, v30);
                return;
              }
            }
          }
        }
LABEL_65:
        sub_1C93D2C(Instance, v7);
      }
      if ( !EventDetailEntity__IsGroupPoint(v10, 0) )
      {
        Instance = (DataManager_o *)UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
        if ( !MasterData_object )
          goto LABEL_65;
        goto LABEL_32;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !this->fields.dropInfoList )
        goto LABEL_65;
      currentEventId = this->fields.currentEventId;
      v12 = (EventPointGroupMaster_o *)Instance;
      Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                    v41,
                                    this->fields.dropInfoList,
                                    this->fields.currentGroupIndex,
                                    (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      if ( !v12 )
        goto LABEL_65;
      v13 = EventPointGroupMaster__GetEntity(v12, currentEventId, v41[0].fields.groupId, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !this->fields.dropInfoList )
        goto LABEL_65;
      userId = SelfUserGame->fields.userId;
      v15 = (UserEventPointMaster_o *)Instance;
      Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                    v41,
                                    this->fields.dropInfoList,
                                    this->fields.currentGroupIndex,
                                    (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      if ( !v15 )
        goto LABEL_65;
      Instance = (DataManager_o *)UserEventPointMaster__GetEntity(v15, userId, eventId, v41[0].fields.groupId, 0);
      if ( !this->fields.eventIconSprite )
        goto LABEL_65;
      v16 = Instance;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.eventIconSprite,
                                    0);
      if ( !Instance )
        goto LABEL_65;
      if ( v13 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        v17 = this->fields.eventIconSprite;
        iconId = v13->fields.iconId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v17, iconId, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      Instance = (DataManager_o *)this->fields.dropInfoList;
      if ( !Instance )
        goto LABEL_65;
      v31 = this->fields.currentEventId;
      v32 = this->fields.eventPointAtSprite;
      System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
        v41,
        (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
        this->fields.currentGroupIndex,
        (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      Instance = (DataManager_o *)BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
                                    this,
                                    v31,
                                    v41[0].fields.groupId,
                                    v33);
      if ( !v32 )
        goto LABEL_65;
      UISprite__set_spriteName(v32, (System_String_o *)Instance, 0);
      Instance = (DataManager_o *)this->fields.dropInfoList;
      if ( !Instance )
        goto LABEL_65;
      Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                    v41,
                                    (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
                                    this->fields.currentGroupIndex,
                                    (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      if ( !v16 || !MasterData_object )
        goto LABEL_65;
      NextEventRewardEntity_42825256 = EventRewardMaster__GetNextEventRewardEntity_42825256(
                                         (EventRewardMaster_o *)MasterData_object,
                                         eventId,
                                         v41[0].fields.groupId,
                                         *(_QWORD *)&v16->fields._DispLog,
                                         0);
      BattleResultEventItemComponent__SetNextItemLabel(
        this,
        *(_QWORD *)&v16->fields._DispLog,
        NextEventRewardEntity_42825256,
        v35);
      if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      Instance = (DataManager_o *)this->fields.dropInfoList;
      if ( !Instance )
        goto LABEL_65;
      EVENT_POINT_REWARD_AT = BattleResultEventItemComponent_TypeInfo->static_fields->EVENT_POINT_REWARD_AT;
      System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
        v41,
        (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
        this->fields.currentGroupIndex,
        (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      v41[1] = v41[0];
      v37 = System_Int32__ToString((int32_t)&v41[1].fields.groupId, 0);
      v38 = System_String__Concat_64425724(EVENT_POINT_REWARD_AT, v37, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !LocalizationManager__ContainsKey(v38, 0) )
      {
        v39 = BattleResultEventItemComponent_TypeInfo;
        if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
          v39 = BattleResultEventItemComponent_TypeInfo;
        }
        v38 = v39->static_fields->EVENT_POINT_REWARD_AT;
      }
      titleAtLabel = this->fields.titleAtLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get(v38, 0);
      if ( !titleAtLabel )
        goto LABEL_65;
      UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0);
    }
  }
}


void BattleResultEventItemComponent__UpdateShowModeChangeButton(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  UIButton_o *showModeChangeButton; // x0
  System_String_o **v4; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D34366 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17578/*"btn_bg_20"*/);
    sub_1C93AD4(&StringLiteral_17579/*"btn_bg_21"*/);
    byte_4D34366 = 1;
  }
  showModeChangeButton = this->fields.showModeChangeButton;
  if ( !showModeChangeButton )
    goto LABEL_14;
  v4 = (System_String_o **)(this->fields.isShowPossessionNum ? &StringLiteral_17579/*"btn_bg_21"*/ : &StringLiteral_17578/*"btn_bg_20"*/);
  UIButton__set_normalSprite(showModeChangeButton, *v4, 0);
  showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors;
  if ( !showModeChanButtonLabelEffectColors )
    goto LABEL_14;
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !max_length )
LABEL_15:
      sub_1C93D34(showModeChangeButton);
    p_r = &showModeChanButtonLabelEffectColors->m_Items[0].fields.r;
    p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
    p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
    p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
    if ( showModeChangeButton )
      goto LABEL_11;
LABEL_14:
    sub_1C93D2C(showModeChangeButton, method);
  }
  if ( max_length <= 1 )
    goto LABEL_15;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !showModeChangeButton )
    goto LABEL_14;
LABEL_11:
  v11.fields.a = *p_a;
  v11.fields.b = *p_b;
  v11.fields.g = *p_g;
  v11.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v11, 0);
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

  if ( (byte_4D3435C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3435C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_1C93D2C(v6, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x8
  int v15; // w9
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **v16; // x21
  System_Predicate_object__o **v17; // x22
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *v18; // x25
  System_Collections_Generic_List_T__o *dropInfoList; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x24
  __int64 v27; // x8
  __int64 v28; // x8
  System_Predicate_object__o *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_IEnumerable_T__o *v36; // x24
  System_Collections_Generic_List_object__o *v37; // x25
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  GrandQuestFolderBoardItem_c *klass; // x24
  BattleResultEventItemComponent___c_c *v45; // x0
  System_Predicate_object__o *_9__42_2; // x25
  Il2CppObject *v47; // x26
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  _QWORD *v67; // x10
  struct BattleResultEventItemComponent_EventDropItemInfo_array *v68; // x8
  __int64 monitor_low; // x9
  __int128 v70; // q0
  char *v71; // x8
  const MethodInfo_390D474 *v72; // x2
  GrandQuestFolderBoardItem_o v73; // [xsp+20h] [xbp-C0h] BYREF

  if ( (byte_4D3434F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindAll_BattleDropItem___);
    sub_1C93AD4(&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
    sub_1C93AD4(&System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_1C93AD4(&System_Predicate_BattleDropItem__TypeInfo);
    sub_1C93AD4(&Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__);
    sub_1C93AD4(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__);
    sub_1C93AD4(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__);
    sub_1C93AD4(&BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo);
    sub_1C93AD4(&BattleResultEventItemComponent___c_TypeInfo);
    byte_4D3434F = 1;
  }
  memset(&v73, 0, 32);
  v5 = sub_1C93D20(BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
LABEL_31:
    sub_1C93D2C(All_object, v7);
  *(_QWORD *)(v5 + 16) = drop;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)drop, v8, v9, v10, v11, v12, v13);
  v14 = *(_QWORD *)(v5 + 16);
  if ( v14 )
  {
    v15 = 0;
    *(_DWORD *)(v5 + 24) = 0;
    v16 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **)(v5 + 32);
    v17 = (System_Predicate_object__o **)(v5 + 40);
    while ( v15 < *(_DWORD *)(v14 + 24) )
    {
      v18 = *v16;
      dropInfoList = (System_Collections_Generic_List_T__o *)this->fields.dropInfoList;
      if ( !*v16 )
      {
        v18 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *)sub_1C93D20(System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo);
        System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v18;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v18, v20, v21, v22, v23, v24, v25);
      }
      All_object = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
                                                                    dropInfoList,
                                                                    (System_Func_T__bool__o *)v18,
                                                                    (const MethodInfo_318DF58 *)Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
      if ( ((unsigned __int8)All_object & 1) == 0 )
      {
        memset(&v73, 0, 32);
        v26 = *(_QWORD *)(v5 + 16);
        if ( !v26 )
          goto LABEL_31;
        v27 = *(int *)(v5 + 24);
        if ( (unsigned int)v27 >= *(_DWORD *)(v26 + 24) )
          sub_1C93D34(All_object);
        v28 = *(_QWORD *)(v26 + 8 * v27 + 32);
        if ( !v28 )
          goto LABEL_31;
        v73.fields.sortIndex = *(_DWORD *)(v28 + 56);
        v29 = *v17;
        if ( !*v17 )
        {
          v29 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_object____ctor(
            v29,
            (Il2CppObject *)v5,
            Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__,
            0);
          *(_QWORD *)(v5 + 40) = v29;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)v29, v30, v31, v32, v33, v34, v35);
        }
        All_object = (System_Collections_Generic_IEnumerable_T__o *)System_Array__FindAll_object_(
                                                                      (System_Object_array *)v26,
                                                                      (System_Predicate_T__o *)v29,
                                                                      (const MethodInfo_32A9748 *)Method_System_Array_FindAll_BattleDropItem___);
        if ( All_object )
        {
          v36 = All_object;
          v37 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleDropItem__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v37,
            (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
          v73.klass = (GrandQuestFolderBoardItem_c *)v37;
          sub_1C93A78(&v73, (int32_t)v37, v38, v39, v40, v41, v42, v43);
          All_object = (System_Collections_Generic_IEnumerable_T__o *)v73.klass;
          if ( !v73.klass )
            goto LABEL_31;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v73.klass,
            v36,
            (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
        }
        klass = v73.klass;
        if ( !v73.klass )
          goto LABEL_31;
        v45 = BattleResultEventItemComponent___c_TypeInfo;
        LODWORD(v73.monitor) = v73.klass->_1.namespaze;
        if ( !BattleResultEventItemComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent___c_TypeInfo);
          v45 = BattleResultEventItemComponent___c_TypeInfo;
        }
        _9__42_2 = (System_Predicate_object__o *)v45->static_fields->__9__42_2;
        if ( !_9__42_2 )
        {
          if ( !v45->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v45);
            v45 = BattleResultEventItemComponent___c_TypeInfo;
          }
          v47 = (Il2CppObject *)v45->static_fields->__9;
          _9__42_2 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_BattleDropItem__TypeInfo);
          System_Predicate_object____ctor(
            _9__42_2,
            v47,
            Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__,
            0);
          static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          static_fields->__9__42_2 = (struct System_Predicate_BattleDropItem__o *)_9__42_2;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__42_2,
            (int32_t)_9__42_2,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
        }
        *(_QWORD *)&v73.fields.selectNum = System_Collections_Generic_List_object___FindAll(
                                             (System_Collections_Generic_List_object__o *)klass,
                                             (System_Predicate_T__o *)_9__42_2,
                                             (const MethodInfo_387A0AC *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v73.fields, v73.fields.selectNum, v55, v56, v57, v58, v59, v60);
        All_object = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dropInfoList;
        if ( !All_object )
          goto LABEL_31;
        v67 = Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__;
        *(_OWORD *)&v73.fields.sortValue0 = *(_OWORD *)&v73.klass;
        *(_OWORD *)&v73.fields.sortValue1 = *(_OWORD *)&v73.fields.selectNum;
        v68 = (struct BattleResultEventItemComponent_EventDropItemInfo_array *)All_object[1].klass;
        ++HIDWORD(All_object[1].monitor);
        if ( !v68 )
          goto LABEL_31;
        monitor_low = SLODWORD(All_object[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(v68->max_length) )
        {
          v72 = *(const MethodInfo_390D474 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL);
          *(_OWORD *)&v73.fields.sortValue1B = *(_OWORD *)&v73.fields.sortValue0;
          *(_OWORD *)&v73.fields.sortValue2B = *(_OWORD *)&v73.fields.sortValue1;
          System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___AddWithResize(
            (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)All_object,
            (BattleResultEventItemComponent_EventDropItemInfo_o *)&v73.fields.sortValue1B,
            v72);
        }
        else
        {
          LODWORD(All_object[1].monitor) = monitor_low + 1;
          v70 = *(_OWORD *)&v73.fields.sortValue1;
          v71 = (char *)v68 + 32 * monitor_low;
          *((_OWORD *)v71 + 2) = *(_OWORD *)&v73.fields.sortValue0;
          *((_OWORD *)v71 + 3) = v70;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v71 + 32), 0, v61, v62, v63, v64, v65, v66);
        }
      }
      v14 = *(_QWORD *)(v5 + 16);
      v15 = *(_DWORD *)(v5 + 24) + 1;
      *(_DWORD *)(v5 + 24) = v15;
      if ( !v14 )
        goto LABEL_31;
    }
  }
}


void BattleResultEventItemComponent__endClose(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34363 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5480/*"END_PROC"*/);
    byte_4D34363 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5480/*"END_PROC"*/, 0);
}


void BattleResultEventItemComponent__endCommandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3435D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3518/*"CLOSE"*/);
    byte_4D3435D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3518/*"CLOSE"*/, 0);
}


void BattleResultEventItemComponent__endEventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34361 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3518/*"CLOSE"*/);
    byte_4D34361 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3518/*"CLOSE"*/, 0);
}


void BattleResultEventItemComponent__endItemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34359 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3518/*"CLOSE"*/);
    byte_4D34359 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C93D2C(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3518/*"CLOSE"*/, 0);
}


void BattleResultEventItemComponent__endOpen(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34349 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9318/*"NEXT"*/);
    byte_4D34349 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9318/*"NEXT"*/, 0),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0) )
  {
    sub_1C93D2C(myFsm, method);
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

  if ( (byte_4D34360 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__);
    sub_1C93AD4(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__);
    byte_4D34360 = 1;
  }
  v4 = Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__,
    0);
  if ( !itemDialog )
    sub_1C93D2C(v8, v9);
  ItemDetailInfoComponent__Close_33806860(itemDialog, v7, 0);
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

  if ( (byte_4D34347 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4D34347 = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v6 = this->fields.newDroplist;
  if ( !v6 )
    sub_1C93D2C(Item, v5);
  v7 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v6,
    0,
    (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v7;
}


bool BattleResultEventItemComponent__isGetItems(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 currentGroupIndex; // x1
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_EventDropItemInfo_o v6; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4D34346 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    byte_4D34346 = 1;
  }
  currentGroupIndex = (unsigned int)this->fields.currentGroupIndex;
  if ( (currentGroupIndex & 0x80000000) != 0 )
    return 0;
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    sub_1C93D2C(0, currentGroupIndex);
  if ( dropInfoList->fields._size <= (int)currentGroupIndex )
    return 0;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v6,
    dropInfoList,
    currentGroupIndex,
    (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
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

  if ( (byte_4D34358 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BattleResultEventItemComponent_endItemDialogCallBack__);
    sub_1C93AD4(&Method_BattleResultEventItemComponent_itemDialogCallBack__);
    byte_4D34358 = 1;
  }
  v4 = Method_BattleResultEventItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_BattleResultEventItemComponent_itemDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endItemDialogCallBack__, 0);
  if ( !itemDialog )
    sub_1C93D2C(v8, v9);
  ItemDetailInfoComponent__Close_33806860(itemDialog, v7, 0);
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
  System_String_o *v20; // x23
  BattleResultEventItemComponent_c *v21; // x0
  UILabel_o *titleAtLabel; // x24
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x4
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x9
  int32_t currentGroupIndex; // w1
  const MethodInfo *v27; // x2
  BattleResultEventItemComponent_EventDropItemInfo_o v28; // [xsp+8h] [xbp-78h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_4D3434B & 1) == 0 )
  {
    sub_1C93AD4(&BattleDropItem___TypeInfo);
    sub_1C93AD4(&BattleResultEventItemComponent_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3434B = 1;
  }
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_1C93D34(Instance);
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
                                      (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v17 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_AT = v17->static_fields->EVENT_POINT_REWARD_AT;
  v19 = System_Int32__ToString((int32_t)&eventIda, 0);
  v20 = System_String__Concat_64425724(EVENT_POINT_REWARD_AT, v19, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v20, 0) )
  {
    v21 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v21 = BattleResultEventItemComponent_TypeInfo;
    }
    v20 = v21->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v20, 0);
  if ( !titleAtLabel
    || (UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0),
        this->fields.currentEventId = eventIda,
        BattleResultEventItemComponent__createDropInfo(this, drop, v23),
        Instance = (DataManager_o *)sub_1C93B7C(BattleDropItem___TypeInfo, 0),
        (dropInfoList = this->fields.dropInfoList) == 0) )
  {
LABEL_35:
    sub_1C93D2C(Instance, v11);
  }
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( dropInfoList->fields._size > currentGroupIndex )
  {
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v28,
      this->fields.dropInfoList,
      currentGroupIndex,
      (const MethodInfo_390D104 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    Instance = (DataManager_o *)v28.fields.itemList;
    if ( !v28.fields.itemList )
      goto LABEL_35;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)v28.fields.itemList,
                                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  }
  BattleResultEventItemComponent__SetItemWindow(this, (BattleDropItem_array *)Instance, v15, rewardInfos, v24);
  BattleResultEventItemComponent__SetUi(this, eventIda, v27);
}


void BattleResultEventItemComponent__setShowCommandCodeConf(
        BattleResultEventItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D3435A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9692/*"OPEN_COMMANDCODE"*/);
    byte_4D3435A = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1C93D2C(0, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9692/*"OPEN_COMMANDCODE"*/, 0);
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
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D3435E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9693/*"OPEN_EVENTPOINTBUFF"*/);
    byte_4D3435E = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_eventPointBuffId = eventPointBuffId;
  if ( !myFsm )
    sub_1C93D2C(0, eventPointBuffId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9693/*"OPEN_EVENTPOINTBUFF"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultEventItemComponent__setShowItemConf(
        BattleResultEventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34356 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9699/*"OPEN_ITEM"*/);
    byte_4D34356 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1C93D2C(0, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9699/*"OPEN_ITEM"*/, 0);
}


void BattleResultEventItemComponent__setShowServantConf(
        BattleResultEventItemComponent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D34352 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9707/*"OPEN_SERVANT"*/);
    byte_4D34352 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_userSvtId = userSvtId;
  if ( !myFsm )
    sub_1C93D2C(0, userSvtId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9707/*"OPEN_SERVANT"*/, 0);
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

  if ( (byte_4D3435B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleResultEventItemComponent_commandCodeDialogCallBack__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3435B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_3465A24 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_commandCodeDialogCallBack__,
          0),
        !v6) )
  {
    sub_1C93D2C(Instance, v4);
  }
  CommonUI__OpenServantStatusDialog_31593176((CommonUI_o *)v6, 0, (UserCommandCodeEntity_o *)Entity, v7, 0, 0);
}


void BattleResultEventItemComponent__showEventPointBuffDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *klass; // x21
  System_String_o *monitor; // x22
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x23

  if ( (byte_4D3435F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__);
    sub_1C93AD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3435F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.tmp_eventPointBuffId,
                     (const MethodInfo_3463274 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0
    || (klass = (System_String_o *)Instance[2].klass,
        monitor = (System_String_o *)Instance[2].monitor,
        itemDialog = this->fields.itemDialog,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C93D20(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__,
          0),
        !itemDialog) )
  {
    sub_1C93D2C(Instance, v4);
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

  if ( (byte_4D34357 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleResultEventItemComponent_itemDialogCallBack__);
    sub_1C93AD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34357 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v7 = (ItemEntity_o *)Entity,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C93D20(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultEventItemComponent_itemDialogCallBack__,
          0),
        !itemDialog) )
  {
    sub_1C93D2C(Instance, v4);
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

  if ( (byte_4D34353 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleResultEventItemComponent_DialogCallBack__);
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D34353 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  tmp_userSvtId = this->fields.tmp_userSvtId;
  v5 = (CommonUI_o *)Instance;
  v6 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_DialogCallBack__,
    0);
  if ( !v5 )
    sub_1C93D2C(v7, v8);
  CommonUI__OpenServantStatusDialog_31589988(v5, 0, tmp_userSvtId, v6, 0, 0);
}


void BattleResultEventItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3436E & 1) == 0 )
  {
    sub_1C93AD4(&BattleResultEventItemComponent___c_TypeInfo);
    byte_4D3436E = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleResultEventItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultEventItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultEventItemComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleResultEventItemComponent___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_41140096(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_41140488(s->fields.type, 0);
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
    sub_1C93D34(this);
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_5:
    sub_1C93D2C(this, d);
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
    sub_1C93D34(this);
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_1C93D2C(this, item);
  return item->fields.eventGroupId == v5->fields.eventGroupId;
}