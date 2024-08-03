void __fastcall BattleResultEventItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct BattleResultEventItemComponent_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  struct BattleResultEventItemComponent_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  struct BattleResultEventItemComponent_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FF543 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultEventItemComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20174/*"img_bg_ep"*/, v4);
    sub_1B640C8(&StringLiteral_2920/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v5);
    sub_1B640C8(&StringLiteral_20495/*"img_txt_reward"*/, v6);
    sub_1B640C8(&StringLiteral_20175/*"img_bg_events"*/, v7);
    byte_49FF543 = 1;
  }
  BattleResultEventItemComponent_TypeInfo->static_fields->EVENT_POINT_REWARD_AT = (struct System_String_o *)StringLiteral_2920/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleResultEventItemComponent_TypeInfo->static_fields,
    StringLiteral_2920/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/,
    v2,
    v3);
  v8 = StringLiteral_20495/*"img_txt_reward"*/;
  static_fields = BattleResultEventItemComponent_TypeInfo->static_fields;
  static_fields->EVENT_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_20495/*"img_txt_reward"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->EVENT_POINT_REWARD_TITLE_NAME, v8, v10, v11);
  v12 = StringLiteral_20175/*"img_bg_events"*/;
  v13 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v13->EVENT_POINT_REWARD_BG_NAME = (struct System_String_o *)StringLiteral_20175/*"img_bg_events"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->EVENT_POINT_REWARD_BG_NAME, v12, v14, v15);
  v16 = StringLiteral_20174/*"img_bg_ep"*/;
  v17 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v17->EVENT_POINT_BG_TITLE_NAME = (struct System_String_o *)StringLiteral_20174/*"img_bg_ep"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->EVENT_POINT_BG_TITLE_NAME, v16, v18, v19);
  *(_QWORD *)&BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH = 0x19E0000013BLL;
}


void __fastcall BattleResultEventItemComponent___ctor(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF542 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Color___TypeInfo, method);
    byte_49FF542 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_1B64170(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (int32_t)v3,
    v4,
    v5);
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
  BattleDropItem_array *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v11; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_49FF53C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v3);
    sub_1B640C8(&StringLiteral_9580/*"OPEN"*/, v4);
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, v5);
    byte_49FF53C = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9580/*"OPEN"*/, 0LL);
      myFsm = (PlayMakerFSM_o *)this->fields.dropInfoList;
      if ( myFsm )
      {
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
          &v11,
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)myFsm,
          this->fields.currentGroupIndex,
          (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
        myFsm = (PlayMakerFSM_o *)v11.fields.itemList;
        if ( v11.fields.itemList )
        {
          v7 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)v11.fields.itemList,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
          BattleResultEventItemComponent__SetItemWindow_43799532(this, v7, v8);
          BattleResultEventItemComponent__SetUi(this, this->fields.currentEventId, v9);
          BattleResultEventItemComponent__Open(this, v10);
          return;
        }
      }
    }
LABEL_11:
    sub_1B64324(myFsm);
  }
  myFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !myFsm )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x1
  struct System_Collections_Generic_List_BattleDropItem__o **p_newDroplist; // x19
  BattleResultEventItemComponent_EventDropItemInfo_o v15; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_49FF53A & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultEventItemComponent_endClose__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v4);
    byte_49FF53A = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_11;
  BattleViewItemlistComponent__setHide(itemWindow, 0LL);
  window = this->fields.window;
  v9 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v7, v8);
  BattleWindowComponent_EndCall___ctor(v9, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endClose__, 0LL);
  if ( !window )
    goto LABEL_11;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v9,
    window->klass->vtable._13_CompClose.methodPtr);
  if ( BattleResultEventItemComponent__isGetItems(this, v10) )
  {
    itemWindow = (BattleViewItemlistComponent_o *)this->fields.dropInfoList;
    if ( !itemWindow )
      goto LABEL_11;
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v15,
      (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)itemWindow,
      this->fields.currentGroupIndex,
      (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    newDroplist = v15.fields.newDroplist;
  }
  else
  {
    newDroplist = 0LL;
  }
  this->fields.newDroplist = newDroplist;
  p_newDroplist = &this->fields.newDroplist;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_newDroplist, (int32_t)newDroplist, v11, v12);
  itemWindow = (BattleViewItemlistComponent_o *)*(p_newDroplist - 10);
  ++*((_DWORD *)p_newDroplist + 9);
  if ( !itemWindow )
LABEL_11:
    sub_1B64324(itemWindow);
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
  Il2CppObject *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49FF52C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FF52C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1B64324(v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
}


void __fastcall BattleResultEventItemComponent__EndCloseDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF52D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FF52D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
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
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FF51D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__,
      method);
    sub_1B640C8(&System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_2920/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v6);
    sub_1B640C8(&StringLiteral_2924/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, v7);
    sub_1B640C8(&StringLiteral_2918/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v8);
    byte_49FF51D = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_28;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_28;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = (BattleWindowComponent_o *)this->fields.itemDialog;
  if ( !window )
    goto LABEL_28;
  ItemDetailInfoComponent__Init((ItemDetailInfoComponent_o *)window, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2924/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_28;
  v10 = (System_String_o *)window;
  if ( !System_String__Equals_61383712((System_String_o *)window, (System_String_o *)StringLiteral_2924/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_28;
    UILabel__set_text((UILabel_o *)window, v10, 0LL);
  }
  titleAtLabel = (UnityEngine_Object_o *)this->fields.titleAtLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleAtLabel, 0LL, 0LL) )
  {
    v12 = this->fields.titleAtLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2920/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0LL);
    if ( !v12 )
      goto LABEL_28;
    UILabel__set_text(v12, (System_String_o *)window, 0LL);
  }
  titleNextItemLabel = (UnityEngine_Object_o *)this->fields.titleNextItemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleNextItemLabel, 0LL, 0LL) )
  {
    v14 = this->fields.titleNextItemLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2918/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( v14 )
    {
      UILabel__set_text(v14, (System_String_o *)window, 0LL);
      goto LABEL_26;
    }
LABEL_28:
    sub_1B64324(window);
  }
LABEL_26:
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  this->fields.currentGroupIndex = 0;
  if ( !window )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  v17 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)sub_1B64314(
                                                                                                 System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo,
                                                                                                 v15,
                                                                                                 v16);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo____ctor(
    v17,
    (const MethodInfo_3515ADC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
  this->fields.dropInfoList = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dropInfoList, (int32_t)v17, v18, v19);
}


void __fastcall BattleResultEventItemComponent__OnClickSwitchShowMode(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_49FF53D & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultEventItemComponent_OnClickSwitchShowMode__, method);
    byte_49FF53D = 1;
  }
  v3 = Method_BattleResultEventItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_BattleResultEventItemComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  this->fields.isShowPossessionNum ^= 1u;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v5);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_1B64324(0LL);
  BattleViewItemlistComponent__SwitchShowNumMode(itemWindow, this->fields.isShowPossessionNum, 0LL);
}


void __fastcall BattleResultEventItemComponent__Open(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_c *klass; // x8
  __int64 currentEventId; // x1
  const MethodInfo *v6; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v7; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_49FF520 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      method);
    byte_49FF520 = 1;
  }
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_10;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v7,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, void *))this->klass->vtable._6_SetTitleSprite.method)(
    this,
    (unsigned int)v7.fields.groupId,
    this->klass[1]._1.image);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_10;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v7,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  if ( v7.fields.groupId < 1 )
  {
    klass = this->klass;
    currentEventId = (unsigned int)this->fields.currentEventId;
    goto LABEL_9;
  }
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
LABEL_10:
    sub_1B64324(dropInfoList);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v7,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  klass = this->klass;
  currentEventId = (unsigned int)v7.fields.groupId;
LABEL_9:
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_SetBgSprite.method)(
    this,
    currentEventId,
    klass->vtable._6_SetTitleSprite.methodPtr);
  BattleResultEventItemComponent__OpenCommonProcess(this, v6);
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

  if ( (byte_49FF541 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultEventItemComponent_endOpen__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, v4);
    byte_49FF541 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  this->fields.isShowPossessionNum = 0;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v6);
  touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !touchNextRoot
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v8, v9),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_endOpen__,
          0LL),
        !window) )
  {
LABEL_7:
    sub_1B64324(touchNextRoot);
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
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_c *klass; // x8
  __int64 groupId; // x1
  BattleResultEventItemComponent_o *v6; // x0
  const MethodInfo *v7; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v8; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_49FF540 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      method);
    byte_49FF540 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v8,
      dropInfoList,
      this->fields.currentGroupIndex,
      (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    klass = this->klass;
    groupId = (unsigned int)v8.fields.groupId;
    v6 = this;
  }
  else
  {
    klass = this->klass;
    v6 = this;
    groupId = 0LL;
  }
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, __int64, void *))klass->vtable._6_SetTitleSprite.method)(
    v6,
    groupId,
    klass[1]._1.image);
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
  struct UISprite_o *eventPointAtSprite; // x8
  System_String_o *v16; // x20
  BattleResultEventItemComponent_c *v17; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x20
  System_String_o *v19; // x0
  struct UISprite_o *v20; // x8
  BattleResultEventItemComponent_c *v21; // x0
  int32_t v23; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v24; // [xsp+18h] [xbp-38h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-34h] BYREF

  v25 = eventId;
  if ( (byte_49FF525 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_BetterList_string__Contains__, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_16542/*"_{0}_{1}"*/, v9);
    byte_49FF525 = 1;
  }
  v10 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v10 = BattleResultEventItemComponent_TypeInfo;
  }
  v11 = System_String__Concat_61375396(
          v10->static_fields->EVENT_POINT_BG_TITLE_NAME,
          (System_String_o *)StringLiteral_16542/*"_{0}_{1}"*/,
          0LL);
  v24 = eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = groupId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  mAtlas = (UIAtlas_o *)System_String__Format_61389768(v11, v12, v13, 0LL);
  eventPointAtSprite = this->fields.eventPointAtSprite;
  if ( !eventPointAtSprite )
    goto LABEL_19;
  v16 = (System_String_o *)mAtlas;
  mAtlas = eventPointAtSprite->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_19;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_19;
  if ( BetterList_object___Contains(
         (BetterList_T__o *)mAtlas,
         (Il2CppObject *)v16,
         (const MethodInfo_304F058 *)Method_BetterList_string__Contains__) )
  {
    return v16;
  }
  v17 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v17 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_BG_TITLE_NAME = v17->static_fields->EVENT_POINT_BG_TITLE_NAME;
  v19 = System_Int32__ToString((int32_t)&v25, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_61375396(EVENT_POINT_BG_TITLE_NAME, v19, 0LL);
  v20 = this->fields.eventPointAtSprite;
  if ( !v20
    || (v16 = (System_String_o *)mAtlas, (mAtlas = v20->fields.mAtlas) == 0LL)
    || (mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1B64324(mAtlas);
  }
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          (Il2CppObject *)v16,
          (const MethodInfo_304F058 *)Method_BetterList_string__Contains__) )
  {
    v21 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *v11; // x20
  BattleResultEventItemComponent_c *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = imageId;
  if ( (byte_49FF528 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&imageId);
    sub_1B640C8(&Method_BetterList_string__Contains__, v4);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v5);
    byte_49FF528 = 1;
  }
  v6 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v6 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_BG_NAME = v6->static_fields->EVENT_POINT_REWARD_BG_NAME;
  v8 = System_Int32__ToString((int32_t)&v13, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_61386656(
                          EVENT_POINT_REWARD_BG_NAME,
                          (System_String_o *)StringLiteral_16054/*"_"*/,
                          v8,
                          0LL);
  bgSp = this->fields.bgSp;
  if ( !bgSp )
    goto LABEL_15;
  v11 = (Il2CppObject *)mAtlas;
  mAtlas = bgSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_15;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_15;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v11,
          (const MethodInfo_304F058 *)Method_BetterList_string__Contains__) )
  {
    v12 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v12 = BattleResultEventItemComponent_TypeInfo;
    }
    v11 = (Il2CppObject *)v12->static_fields->EVENT_POINT_REWARD_BG_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.bgSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v11, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.bgSp) == 0LL) )
  {
LABEL_15:
    sub_1B64324(mAtlas);
  }
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.typeMetadataHandle)(
    mAtlas,
    mAtlas->klass[2]._1.interopData);
}


void __fastcall BattleResultEventItemComponent__SetCondensedScale(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *nextItemLabel; // x0
  UILabel_o *titleAtLabel; // x20

  if ( (byte_49FF53F & 1) == 0 )
  {
    sub_1B640C8(&BattleResultEventItemComponent_TypeInfo, method);
    byte_49FF53F = 1;
  }
  nextItemLabel = (UILabel_o *)BattleResultEventItemComponent_TypeInfo;
  titleAtLabel = this->fields.titleAtLabel;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  if ( !titleAtLabel
    || (UILabel__SetCondensedScale(
          titleAtLabel,
          BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH,
          0LL),
        (nextItemLabel = this->fields.nextItemLabel) == 0LL) )
  {
    sub_1B64324(nextItemLabel);
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
    sub_1B64324(0LL);
  BattleViewItemlistComponent__setEventResultCount(itemWindow, boostItemManaCount, rewardInfos, 0LL);
  BattleResultEventItemComponent__SetItemWindow_43799532(this, itemArray, v8);
}


void __fastcall BattleResultEventItemComponent__SetItemWindow_43799532(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleViewItemlistComponent_o *itemWindow; // x22
  int32_t currentEventId; // w21
  BattleDropItemComponent_ClickDelegate_o *v8; // x23
  BattleViewItemlistComponent_o *v9; // x0

  if ( (byte_49FF522 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultEventItemComponent_setShowConf__, itemArray);
    sub_1B640C8(&BattleDropItemComponent_ClickDelegate_TypeInfo, v5);
    byte_49FF522 = 1;
  }
  itemWindow = this->fields.itemWindow;
  currentEventId = this->fields.currentEventId;
  v8 = (BattleDropItemComponent_ClickDelegate_o *)sub_1B64314(
                                                    BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                    itemArray,
                                                    method);
  BattleDropItemComponent_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow
    || (BattleViewItemlistComponent__setListDataCustomColumn_43712892(
          itemWindow,
          itemArray,
          currentEventId,
          v8,
          this->fields.itemColumnCount,
          0LL),
        (v9 = this->fields.itemWindow) == 0LL) )
  {
    sub_1B64324(v9);
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
  bool v19; // w20
  System_String_o *v20; // x0
  Il2CppObject *v21; // x1
  UILabel_o *v22; // x20
  int64_t v23; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49FF526 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, userEventPoint);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v8);
    sub_1B640C8(&StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v9);
    sub_1B640C8(&StringLiteral_2922/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v10);
    sub_1B640C8(&StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FF526 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( eventRewardENt )
  {
    EventRewardEntity__GetInfo(eventRewardENt, &nameText, &countText, 0LL);
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
    v23 = eventRewardENt->fields.point - userEventPoint;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
    v16 = System_String__Format(v14, v15, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v16, 0LL);
      isQp = EventRewardEntity__isQp(eventRewardENt, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      v19 = isQp;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2922/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
      v21 = (Il2CppObject *)(v19 ? StringLiteral_1/*""*/ : nameText);
      v16 = System_String__Format_61389768(v20, v21, (Il2CppObject *)countText, 0LL);
      if ( nextItemLabel )
        goto LABEL_18;
    }
LABEL_15:
    sub_1B64324(v16);
  }
  v22 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
  if ( !v22 )
    goto LABEL_15;
  UILabel__set_text(v22, v16, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
  if ( !nextItemLabel )
    goto LABEL_15;
LABEL_18:
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
  struct UISprite_o *v8; // x21
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  UIAtlas_o *mAtlas; // x0
  System_String_o *v12; // x1
  BattleResultEventItemComponent_c *v13; // x0
  System_String_o *EVENT_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v15; // x0
  struct UISprite_o *titleSp; // x8
  Il2CppObject *v17; // x20
  BattleResultEventItemComponent_c *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF529 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    sub_1B640C8(&Method_BetterList_string__Contains__, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_20496/*"img_txt_reward_{0}_{1}"*/, v7);
    byte_49FF529 = 1;
  }
  if ( currentGroup < 1 )
  {
    v13 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v13 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_TITLE_NAME = v13->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v15 = System_Int32__ToString((int)this + 168, 0LL);
    mAtlas = (UIAtlas_o *)System_String__Concat_61375396(EVENT_POINT_REWARD_TITLE_NAME, v15, 0LL);
    titleSp = this->fields.titleSp;
    if ( !titleSp )
      goto LABEL_19;
    v17 = (Il2CppObject *)mAtlas;
    mAtlas = titleSp->fields.mAtlas;
    if ( !mAtlas )
      goto LABEL_19;
    mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
    if ( !mAtlas )
      goto LABEL_19;
    if ( !BetterList_object___Contains(
            (BetterList_T__o *)mAtlas,
            v17,
            (const MethodInfo_304F058 *)Method_BetterList_string__Contains__) )
    {
      v18 = BattleResultEventItemComponent_TypeInfo;
      if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v18 = BattleResultEventItemComponent_TypeInfo;
      }
      v17 = (Il2CppObject *)v18->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    }
    mAtlas = (UIAtlas_o *)this->fields.titleSp;
    if ( !mAtlas )
LABEL_19:
      sub_1B64324(mAtlas);
    v12 = (System_String_o *)v17;
  }
  else
  {
    v8 = this->fields.titleSp;
    currentEventId = this->fields.currentEventId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
    v19 = currentGroup;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    mAtlas = (UIAtlas_o *)System_String__Format_61389768((System_String_o *)StringLiteral_20496/*"img_txt_reward_{0}_{1}"*/, v9, v10, 0LL);
    if ( !v8 )
      goto LABEL_19;
    v12 = (System_String_o *)mAtlas;
    mAtlas = (UIAtlas_o *)v8;
  }
  UISprite__set_spriteName((UISprite_o *)mAtlas, v12, 0LL);
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas )
    goto LABEL_19;
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
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x8
  DataManager_o *v21; // x23
  int32_t currentEventId; // w24
  EventPointGroupMaster_o *v23; // x23
  EventPointGroupEntity_o *v24; // x23
  int64_t userId; // x22
  UserEventPointMaster_o *v26; // x24
  DataManager_o *v27; // x22
  UISprite_o *v28; // x24
  int32_t iconId; // w23
  int64_t v30; // x22
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UISprite_o *eventIconSprite; // x24
  int32_t datalist_high; // w21
  EventRewardEntity_o *v34; // x20
  BattleResultEventItemComponent_c *v35; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x21
  System_String_o *v37; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v39; // x21
  BattleResultEventItemComponent_c *v40; // x0
  const MethodInfo *v41; // x3
  int32_t v42; // w24
  UISprite_o *v43; // x23
  const MethodInfo *v44; // x3
  EventRewardEntity_o *NextEventRewardEntity_38930576; // x0
  const MethodInfo *v46; // x3
  System_String_o *EVENT_POINT_REWARD_AT; // x20
  System_String_o *v48; // x0
  System_String_o *v49; // x20
  BattleResultEventItemComponent_c *v50; // x0
  UILabel_o *titleAtLabel; // x19
  BattleResultEventItemComponent_EventDropItemInfo_o v52[2]; // [xsp+0h] [xbp-90h] BYREF
  UserEventEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49FF524 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&BattleResultEventItemComponent_TypeInfo, v5);
    sub_1B640C8(&Method_BetterList_string__Contains__, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRewardMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventPointMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FF524 = 1;
  }
  entity = 0LL;
  memset(&v52[1], 0, sizeof(BattleResultEventItemComponent_EventDropItemInfo_o));
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !SelfUserGame || !Instance )
    goto LABEL_60;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)Instance, &entity, SelfUserGame->fields.userId, eventId, 0LL) )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRewardMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                eventId,
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_60;
  if ( dropInfoList->fields._size < 1 )
    return;
  v21 = Instance;
  if ( !Instance )
LABEL_60:
    sub_1B64324(Instance);
  if ( !EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Instance, 0LL) )
  {
    Instance = (DataManager_o *)UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    if ( MasterData_object )
    {
      v30 = (int64_t)Instance;
      NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                (EventRewardMaster_o *)MasterData_object,
                                eventId,
                                (int64_t)Instance,
                                0LL);
      eventIconSprite = this->fields.eventIconSprite;
      datalist_high = HIDWORD(v21->fields.datalist);
      v34 = NextEventRewardEntity;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(eventIconSprite, datalist_high, 0LL);
      v35 = BattleResultEventItemComponent_TypeInfo;
      if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
        v35 = BattleResultEventItemComponent_TypeInfo;
      }
      EVENT_POINT_BG_TITLE_NAME = v35->static_fields->EVENT_POINT_BG_TITLE_NAME;
      v37 = System_Int32__ToString((int)this + 168, 0LL);
      Instance = (DataManager_o *)System_String__Concat_61375396(EVENT_POINT_BG_TITLE_NAME, v37, 0LL);
      eventPointAtSprite = this->fields.eventPointAtSprite;
      if ( eventPointAtSprite )
      {
        v39 = (Il2CppObject *)Instance;
        Instance = (DataManager_o *)eventPointAtSprite->fields.mAtlas;
        if ( Instance )
        {
          Instance = (DataManager_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
          if ( Instance )
          {
            if ( !BetterList_object___Contains(
                    (BetterList_T__o *)Instance,
                    v39,
                    (const MethodInfo_304F058 *)Method_BetterList_string__Contains__) )
            {
              v40 = BattleResultEventItemComponent_TypeInfo;
              if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
                v40 = BattleResultEventItemComponent_TypeInfo;
              }
              v39 = (Il2CppObject *)v40->static_fields->EVENT_POINT_BG_TITLE_NAME;
            }
            Instance = (DataManager_o *)this->fields.eventPointAtSprite;
            if ( Instance )
            {
              UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v39, 0LL);
              BattleResultEventItemComponent__SetNextItemLabel(this, v30, v34, v41);
              return;
            }
          }
        }
      }
    }
    goto LABEL_60;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !this->fields.dropInfoList )
    goto LABEL_60;
  currentEventId = this->fields.currentEventId;
  v23 = (EventPointGroupMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                v52,
                                this->fields.dropInfoList,
                                this->fields.currentGroupIndex,
                                (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  if ( !v23 )
    goto LABEL_60;
  v24 = EventPointGroupMaster__GetEntity(v23, currentEventId, v52[0].fields.groupId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !this->fields.dropInfoList )
    goto LABEL_60;
  userId = SelfUserGame->fields.userId;
  v26 = (UserEventPointMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                v52,
                                this->fields.dropInfoList,
                                this->fields.currentGroupIndex,
                                (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  if ( !v26 )
    goto LABEL_60;
  Instance = (DataManager_o *)UserEventPointMaster__GetEntity(v26, userId, eventId, v52[0].fields.groupId, 0LL);
  if ( !this->fields.eventIconSprite )
    goto LABEL_60;
  v27 = Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.eventIconSprite,
                                0LL);
  if ( !Instance )
    goto LABEL_60;
  if ( v24 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v28 = this->fields.eventIconSprite;
    iconId = v24->fields.iconId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v28, iconId, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  Instance = (DataManager_o *)this->fields.dropInfoList;
  if ( !Instance )
    goto LABEL_60;
  v42 = this->fields.currentEventId;
  v43 = this->fields.eventPointAtSprite;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    v52,
    (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
    this->fields.currentGroupIndex,
    (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  Instance = (DataManager_o *)BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
                                this,
                                v42,
                                v52[0].fields.groupId,
                                v44);
  if ( !v43 )
    goto LABEL_60;
  UISprite__set_spriteName(v43, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.dropInfoList;
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                v52,
                                (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
                                this->fields.currentGroupIndex,
                                (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  if ( !v27 || !MasterData_object )
    goto LABEL_60;
  NextEventRewardEntity_38930576 = EventRewardMaster__GetNextEventRewardEntity_38930576(
                                     (EventRewardMaster_o *)MasterData_object,
                                     eventId,
                                     v52[0].fields.groupId,
                                     *(_QWORD *)&v27->fields._DispLog,
                                     0LL);
  BattleResultEventItemComponent__SetNextItemLabel(
    this,
    *(_QWORD *)&v27->fields._DispLog,
    NextEventRewardEntity_38930576,
    v46);
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  Instance = (DataManager_o *)this->fields.dropInfoList;
  if ( !Instance )
    goto LABEL_60;
  EVENT_POINT_REWARD_AT = BattleResultEventItemComponent_TypeInfo->static_fields->EVENT_POINT_REWARD_AT;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    v52,
    (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
    this->fields.currentGroupIndex,
    (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  v52[1] = v52[0];
  v48 = System_Int32__ToString((int32_t)&v52[1].fields.groupId, 0LL);
  v49 = System_String__Concat_61375396(EVENT_POINT_REWARD_AT, v48, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v49, 0LL) )
  {
    v50 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v50 = BattleResultEventItemComponent_TypeInfo;
    }
    v49 = v50->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v49, 0LL);
  if ( !titleAtLabel )
    goto LABEL_60;
  UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall BattleResultEventItemComponent__UpdateShowModeChangeButton(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *showModeChangeButton; // x0
  System_String_o **v5; // x8
  __int64 v6; // x1
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF53E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17409/*"btn_bg_20"*/, method);
    sub_1B640C8(&StringLiteral_17410/*"btn_bg_21"*/, v3);
    byte_49FF53E = 1;
  }
  showModeChangeButton = this->fields.showModeChangeButton;
  if ( !showModeChangeButton )
    goto LABEL_14;
  v5 = (System_String_o **)(this->fields.isShowPossessionNum ? &StringLiteral_17410/*"btn_bg_21"*/ : &StringLiteral_17409/*"btn_bg_20"*/);
  UIButton__set_normalSprite(showModeChangeButton, *v5, 0LL);
  showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors;
  if ( !showModeChanButtonLabelEffectColors )
    goto LABEL_14;
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !max_length )
LABEL_15:
      sub_1B6432C(showModeChangeButton, v6);
    p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
    p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
    p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
    p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
    if ( showModeChangeButton )
      goto LABEL_11;
LABEL_14:
    sub_1B64324(showModeChangeButton);
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
  v13.fields.a = *p_r;
  v13.fields.b = *p_a;
  v13.fields.g = *p_b;
  v13.fields.r = *p_g;
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
  Il2CppObject *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49FF534 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FF534 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1B64324(v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
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
  __int64 v19; // x20
  System_Collections_Generic_IEnumerable_T__o *All_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  int v26; // w9
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **v27; // x21
  System_Predicate_object__o **v28; // x22
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *v29; // x25
  System_Collections_Generic_List_T__o *dropInfoList; // x24
  int32_t v31; // w2
  int32_t v32; // w3
  System_Object_array *v33; // x24
  __int64 v34; // x8
  Il2CppObject *v35; // x8
  System_Predicate_object__o *v36; // x25
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_IEnumerable_T__o *v41; // x24
  System_Collections_Generic_List_object__o *v42; // x25
  int32_t v43; // w2
  int32_t v44; // w3
  ServantStatusBattleListViewItem_c *klass; // x24
  BattleResultEventItemComponent___c_c *v46; // x0
  System_Predicate_object__o *_9__42_2; // x25
  Il2CppObject *v48; // x26
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  _QWORD *v56; // x10
  struct BattleResultEventItemComponent_EventDropItemInfo_array *v57; // x8
  __int64 monitor_low; // x9
  __int128 v59; // q0
  char *v60; // x8
  const MethodInfo_35163B0 *v61; // x2
  ServantStatusBattleListViewItem_o v62; // [xsp+20h] [xbp-C0h] BYREF

  if ( (byte_49FF527 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindAll_BattleDropItem___, drop);
    sub_1B640C8(&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___, v5);
    sub_1B640C8(&System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v11);
    sub_1B640C8(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v12);
    sub_1B640C8(&System_Predicate_BattleDropItem__TypeInfo, v13);
    sub_1B640C8(&Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__, v14);
    sub_1B640C8(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__, v15);
    sub_1B640C8(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__, v16);
    sub_1B640C8(&BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, v17);
    sub_1B640C8(&BattleResultEventItemComponent___c_TypeInfo, v18);
    byte_49FF527 = 1;
  }
  memset(&v62, 0, 32);
  v19 = sub_1B64314(BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, drop, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
LABEL_31:
    sub_1B64324(All_object);
  *(_QWORD *)(v19 + 16) = drop;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)drop, v21, v22);
  v25 = *(_QWORD *)(v19 + 16);
  if ( v25 )
  {
    v26 = 0;
    *(_DWORD *)(v19 + 24) = 0;
    v27 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **)(v19 + 32);
    v28 = (System_Predicate_object__o **)(v19 + 40);
    while ( v26 < *(_DWORD *)(v25 + 24) )
    {
      v29 = *v27;
      dropInfoList = (System_Collections_Generic_List_T__o *)this->fields.dropInfoList;
      if ( !*v27 )
      {
        v29 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *)sub_1B64314(
                                                                                         System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo,
                                                                                         v23,
                                                                                         v24);
        System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool____ctor(
          v29,
          (Il2CppObject *)v19,
          Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__,
          0LL);
        *(_QWORD *)(v19 + 32) = v29;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v29, v31, v32);
      }
      All_object = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
                                                                    dropInfoList,
                                                                    (System_Func_T__bool__o *)v29,
                                                                    (const MethodInfo_2E24C50 *)Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
      if ( ((unsigned __int8)All_object & 1) == 0 )
      {
        memset(&v62, 0, 32);
        v33 = *(System_Object_array **)(v19 + 16);
        if ( !v33 )
          goto LABEL_31;
        v34 = *(int *)(v19 + 24);
        if ( (unsigned int)v34 >= v33->max_length )
          sub_1B6432C(All_object, v23);
        v35 = v33->m_Items[v34];
        if ( !v35 )
          goto LABEL_31;
        v62.fields.sortIndex = (int32_t)v35[3].monitor;
        v36 = *v28;
        if ( !*v28 )
        {
          v36 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleDropItem__TypeInfo, v23, v24);
          System_Predicate_object____ctor(
            v36,
            (Il2CppObject *)v19,
            Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__,
            0LL);
          *(_QWORD *)(v19 + 40) = v36;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 40), (int32_t)v36, v37, v38);
        }
        All_object = (System_Collections_Generic_IEnumerable_T__o *)System_Array__FindAll_object_(
                                                                      v33,
                                                                      (System_Predicate_T__o *)v36,
                                                                      (const MethodInfo_2F3045C *)Method_System_Array_FindAll_BattleDropItem___);
        if ( All_object )
        {
          v41 = All_object;
          v42 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_BattleDropItem__TypeInfo,
                                                               v39,
                                                               v40);
          System_Collections_Generic_List_object____ctor(
            v42,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
          v62.klass = (ServantStatusBattleListViewItem_c *)v42;
          sub_1B6406C(&v62, (int32_t)v42, v43, v44);
          All_object = (System_Collections_Generic_IEnumerable_T__o *)v62.klass;
          if ( !v62.klass )
            goto LABEL_31;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v62.klass,
            v41,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
        }
        klass = v62.klass;
        if ( !v62.klass )
          goto LABEL_31;
        v46 = BattleResultEventItemComponent___c_TypeInfo;
        LODWORD(v62.monitor) = v62.klass->_1.namespaze;
        if ( !BattleResultEventItemComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent___c_TypeInfo);
          v46 = BattleResultEventItemComponent___c_TypeInfo;
        }
        _9__42_2 = (System_Predicate_object__o *)v46->static_fields->__9__42_2;
        if ( !_9__42_2 )
        {
          if ( !v46->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v46);
            v46 = BattleResultEventItemComponent___c_TypeInfo;
          }
          v48 = (Il2CppObject *)v46->static_fields->__9;
          _9__42_2 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleDropItem__TypeInfo, v39, v40);
          System_Predicate_object____ctor(
            _9__42_2,
            v48,
            Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__,
            0LL);
          static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          static_fields->__9__42_2 = (struct System_Predicate_BattleDropItem__o *)_9__42_2;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_2, (int32_t)_9__42_2, v50, v51);
        }
        *(_QWORD *)&v62.fields.selectNum = System_Collections_Generic_List_object___FindAll(
                                             (System_Collections_Generic_List_object__o *)klass,
                                             (System_Predicate_T__o *)_9__42_2,
                                             (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v62.fields, v62.fields.selectNum, v52, v53);
        All_object = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dropInfoList;
        if ( !All_object )
          goto LABEL_31;
        v56 = Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__;
        *(_OWORD *)&v62.fields.sortValue0 = *(_OWORD *)&v62.klass;
        *(_OWORD *)&v62.fields.sortValue1 = *(_OWORD *)&v62.fields.selectNum;
        v57 = (struct BattleResultEventItemComponent_EventDropItemInfo_array *)All_object[1].klass;
        ++HIDWORD(All_object[1].monitor);
        if ( !v57 )
          goto LABEL_31;
        monitor_low = SLODWORD(All_object[1].monitor);
        if ( (unsigned int)monitor_low >= v57->max_length )
        {
          v61 = *(const MethodInfo_35163B0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL);
          *(_OWORD *)&v62.fields.sortValue1B = *(_OWORD *)&v62.fields.sortValue0;
          *(_OWORD *)&v62.fields.sortValue2B = *(_OWORD *)&v62.fields.sortValue1;
          System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___AddWithResize(
            (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)All_object,
            (BattleResultEventItemComponent_EventDropItemInfo_o *)&v62.fields.sortValue1B,
            v61);
        }
        else
        {
          LODWORD(All_object[1].monitor) = monitor_low + 1;
          v59 = *(_OWORD *)&v62.fields.sortValue1;
          v60 = (char *)v57 + 32 * monitor_low;
          *((_OWORD *)v60 + 2) = *(_OWORD *)&v62.fields.sortValue0;
          *((_OWORD *)v60 + 3) = v59;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 32), 0, v54, v55);
        }
      }
      v25 = *(_QWORD *)(v19 + 16);
      v26 = *(_DWORD *)(v19 + 24) + 1;
      *(_DWORD *)(v19 + 24) = v26;
      if ( !v25 )
        goto LABEL_31;
    }
  }
}


void __fastcall BattleResultEventItemComponent__endClose(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF53B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF53B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endCommandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF535 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FF535 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endEventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF539 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FF539 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endItemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF531 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FF531 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endOpen(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF521 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, method);
    byte_49FF521 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_1B64324(myFsm);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49FF538 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__, v4);
    sub_1B640C8(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__, v5);
    byte_49FF538 = 1;
  }
  v6 = Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  itemDialog = this->fields.itemDialog;
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__,
    0LL);
  if ( !itemDialog )
    sub_1B64324(v12);
  ItemDetailInfoComponent__Close_30837824(itemDialog, v11, 0LL);
}


BattleDropItem_o *__fastcall BattleResultEventItemComponent__getNewDrop(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  struct System_Collections_Generic_List_BattleDropItem__o *v7; // x8
  BattleDropItem_o *v8; // x19

  if ( (byte_49FF51F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v4);
    byte_49FF51F = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v7 = this->fields.newDroplist;
  if ( !v7 )
    sub_1B64324(Item);
  v8 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v7,
    0,
    (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v8;
}


bool __fastcall BattleResultEventItemComponent__isGetItems(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t currentGroupIndex; // w1
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_EventDropItemInfo_o v7; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_49FF51E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v3);
    byte_49FF51E = 1;
  }
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( (currentGroupIndex & 0x80000000) != 0 )
    return 0;
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    sub_1B64324(0LL);
  if ( dropInfoList->fields._size <= currentGroupIndex )
    return 0;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v7,
    dropInfoList,
    currentGroupIndex,
    (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  return v7.fields.itemCount > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__itemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49FF530 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&Method_BattleResultEventItemComponent_endItemDialogCallBack__, v4);
    sub_1B640C8(&Method_BattleResultEventItemComponent_itemDialogCallBack__, v5);
    byte_49FF530 = 1;
  }
  v6 = Method_BattleResultEventItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_BattleResultEventItemComponent_itemDialogCallBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  itemDialog = this->fields.itemDialog;
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_1B64324(v12);
  ItemDetailInfoComponent__Close_30837824(itemDialog, v11, 0LL);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x24
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
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x9
  int32_t currentGroupIndex; // w1
  const MethodInfo *v35; // x2
  BattleResultEventItemComponent_EventDropItemInfo_o v36; // [xsp+8h] [xbp-78h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_49FF523 & 1) == 0 )
  {
    sub_1B640C8(&BattleDropItem___TypeInfo, drop);
    sub_1B640C8(&BattleResultEventItemComponent_TypeInfo, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49FF523 = 1;
  }
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !resultBoostItemRewardInfos )
    goto LABEL_35;
  max_length = resultBoostItemRewardInfos->max_length;
  if ( max_length >= 1 )
  {
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1B6432C(Instance, v19);
      v24 = resultBoostItemRewardInfos->m_Items[v22];
      if ( !v24 )
        goto LABEL_35;
      if ( v24->fields.type == 2 )
      {
        if ( !v21 )
          goto LABEL_35;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v21,
                                      v24->fields.objectId,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( Instance && LODWORD(Instance->fields.lookup) == 5 )
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
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
    v25 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_AT = v25->static_fields->EVENT_POINT_REWARD_AT;
  v27 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v28 = System_String__Concat_61375396(EVENT_POINT_REWARD_AT, v27, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v28, 0LL) )
  {
    v29 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
      v29 = BattleResultEventItemComponent_TypeInfo;
    }
    v28 = v29->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v28, 0LL);
  if ( !titleAtLabel
    || (UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0LL),
        this->fields.currentEventId = eventIda,
        BattleResultEventItemComponent__createDropInfo(this, drop, v31),
        Instance = (DataManager_o *)sub_1B64170(BattleDropItem___TypeInfo, 0LL),
        (dropInfoList = this->fields.dropInfoList) == 0LL) )
  {
LABEL_35:
    sub_1B64324(Instance);
  }
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( dropInfoList->fields._size > currentGroupIndex )
  {
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v36,
      this->fields.dropInfoList,
      currentGroupIndex,
      (const MethodInfo_3516040 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    Instance = (DataManager_o *)v36.fields.itemList;
    if ( !v36.fields.itemList )
      goto LABEL_35;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)v36.fields.itemList,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  }
  BattleResultEventItemComponent__SetItemWindow(this, (BattleDropItem_array *)Instance, v23, rewardInfos, v32);
  BattleResultEventItemComponent__SetUi(this, eventIda, v35);
}


void __fastcall BattleResultEventItemComponent__setShowCommandCodeConf(
        BattleResultEventItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF532 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9588/*"OPEN_COMMANDCODE"*/, commandCodeId);
    byte_49FF532 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9588/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_1B64324(this);
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

  if ( (byte_49FF536 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9589/*"OPEN_EVENTPOINTBUFF"*/, eventPointBuffId);
    byte_49FF536 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_eventPointBuffId = eventPointBuffId;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9589/*"OPEN_EVENTPOINTBUFF"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__setShowItemConf(
        BattleResultEventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF52E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9595/*"OPEN_ITEM"*/, *(_QWORD *)&itemId);
    byte_49FF52E = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9595/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__setShowServantConf(
        BattleResultEventItemComponent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF52A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9603/*"OPEN_SERVANT"*/, userSvtId);
    byte_49FF52A = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_userSvtId = userSvtId;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9603/*"OPEN_SERVANT"*/, 0LL);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x20
  Il2CppObject *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_49FF533 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultEventItemComponent_commandCodeDialogCallBack__, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FF533 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12),
        ServantStatusDialog_EndDelegate___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v10) )
  {
    sub_1B64324(Instance);
  }
  CommonUI__OpenServantStatusDialog_30357696((CommonUI_o *)v10, 0, (UserCommandCodeEntity_o *)Entity, v13, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent__showEventPointBuffDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *klass; // x21
  System_String_o *monitor; // x22
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x23

  if ( (byte_49FF537 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__, method);
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FF537 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.tmp_eventPointBuffId,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || (klass = (System_String_o *)Instance[2].klass,
        monitor = (System_String_o *)Instance[2].monitor,
        itemDialog = this->fields.itemDialog,
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v8,
                                                          v9),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_1B64324(Instance);
  }
  ItemDetailInfoComponent__OpenItemMsgInfo(itemDialog, klass, monitor, v13, 0LL);
}


void __fastcall BattleResultEventItemComponent__showItemDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22

  if ( (byte_49FF52F & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultEventItemComponent_itemDialogCallBack__, method);
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FF52F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v10 = (ItemEntity_o *)Entity,
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v11,
                                                          v12),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultEventItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_1B64324(Instance);
  }
  ItemDetailInfoComponent__Open(itemDialog, v10, v13, 50, 0LL);
}


void __fastcall BattleResultEventItemComponent__showServantDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  int64_t tmp_userSvtId; // x20
  CommonUI_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusDialog_EndDelegate_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_49FF52B & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultEventItemComponent_DialogCallBack__, method);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FF52B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  tmp_userSvtId = this->fields.tmp_userSvtId;
  v7 = (CommonUI_o *)Instance;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v8, v9);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_DialogCallBack__,
    0LL);
  if ( !v7 )
    sub_1B64324(v11);
  CommonUI__OpenServantStatusDialog_30354372(v7, 0, tmp_userSvtId, v10, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF544 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultEventItemComponent___c_TypeInfo, v1);
    byte_49FF544 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleResultEventItemComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleResultEventItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultEventItemComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleResultEventItemComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_37376332(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_37376724(s->fields.type, 0LL);
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
    sub_1B6432C(this, d);
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_5:
    sub_1B64324(this);
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
    sub_1B6432C(this, item);
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_1B64324(this);
  return item->fields.eventGroupId == v5->fields.eventGroupId;
}