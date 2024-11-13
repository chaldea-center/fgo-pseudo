void __fastcall BattleResultEventItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x1
  struct BattleResultEventItemComponent_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct BattleResultEventItemComponent_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct BattleResultEventItemComponent_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B19518 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventItemComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20468/*"img_bg_ep"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_2961/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20798/*"img_txt_reward"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20469/*"img_bg_events"*/, v14, v15);
    byte_4B19518 = 1;
  }
  BattleResultEventItemComponent_TypeInfo->static_fields->EVENT_POINT_REWARD_AT = (struct System_String_o *)StringLiteral_2961/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleResultEventItemComponent_TypeInfo->static_fields,
    StringLiteral_2961/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_20798/*"img_txt_reward"*/;
  static_fields = BattleResultEventItemComponent_TypeInfo->static_fields;
  static_fields->EVENT_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_20798/*"img_txt_reward"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->EVENT_POINT_REWARD_TITLE_NAME,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_20469/*"img_bg_events"*/;
  v25 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v25->EVENT_POINT_REWARD_BG_NAME = (struct System_String_o *)StringLiteral_20469/*"img_bg_events"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->EVENT_POINT_REWARD_BG_NAME, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_20468/*"img_bg_ep"*/;
  v33 = BattleResultEventItemComponent_TypeInfo->static_fields;
  v33->EVENT_POINT_BG_TITLE_NAME = (struct System_String_o *)StringLiteral_20468/*"img_bg_ep"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->EVENT_POINT_BG_TITLE_NAME, v32, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)&BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH = 0x19E0000013BLL;
}


void __fastcall BattleResultEventItemComponent___ctor(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Color_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19517 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, method, v2);
    byte_4B19517 = 1;
  }
  v4 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.showModeChanButtonLabelEffectColors,
    (int64_t)v4,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  PlayMakerFSM_o *myFsm; // x0
  BattleDropItem_array *v12; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v16; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B19511 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v4,
      v5);
    sub_1BCA7E0(&StringLiteral_9754/*"OPEN"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, v8, v9);
    byte_4B19511 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9754/*"OPEN"*/, 0LL);
      myFsm = (PlayMakerFSM_o *)this->fields.dropInfoList;
      if ( myFsm )
      {
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
          &v16,
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)myFsm,
          this->fields.currentGroupIndex,
          (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
        myFsm = (PlayMakerFSM_o *)v16.fields.itemList;
        if ( v16.fields.itemList )
        {
          v12 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)v16.fields.itemList,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
          BattleResultEventItemComponent__SetItemWindow_45044172(this, v12, v13);
          BattleResultEventItemComponent__SetUi(this, this->fields.currentEventId, v14);
          BattleResultEventItemComponent__Open(this, v15);
          return;
        }
      }
    }
LABEL_11:
    sub_1BCAA3C(myFsm, v10);
  }
  myFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !myFsm )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Close(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  BattleWindowComponent_EndCall_o *v13; // x21
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x1
  PartyOrganizationUtility_o *p_newDroplist; // x19
  BattleResultEventItemComponent_EventDropItemInfo_o v23; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4B1950F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_endClose__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v6,
      v7);
    byte_4B1950F = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_11;
  BattleViewItemlistComponent__setHide(itemWindow, 0LL);
  window = this->fields.window;
  v13 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v10, v11, v12);
  BattleWindowComponent_EndCall___ctor(v13, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endClose__, 0LL);
  if ( !window )
    goto LABEL_11;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v13,
    window->klass->vtable._13_CompClose.methodPtr);
  if ( BattleResultEventItemComponent__isGetItems(this, v14) )
  {
    itemWindow = (BattleViewItemlistComponent_o *)this->fields.dropInfoList;
    if ( !itemWindow )
      goto LABEL_11;
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v23,
      (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)itemWindow,
      this->fields.currentGroupIndex,
      (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    newDroplist = v23.fields.newDroplist;
  }
  else
  {
    newDroplist = 0LL;
  }
  this->fields.newDroplist = newDroplist;
  p_newDroplist = (PartyOrganizationUtility_o *)&this->fields.newDroplist;
  sub_1BCA784(p_newDroplist, (int64_t)newDroplist, v15, v16, v17, v18, v19, v20);
  itemWindow = (BattleViewItemlistComponent_o *)p_newDroplist[-1].fields._BasePartyItem_k__BackingField;
  ++p_newDroplist->fields._SelectedNormalFollowerDeckId_k__BackingField;
  if ( !itemWindow )
LABEL_11:
    sub_1BCAA3C(itemWindow, method);
  BattleViewItemlistComponent__ClearObj(itemWindow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__DialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B19501 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B19501 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall BattleResultEventItemComponent__EndCloseDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19502 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B19502 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__Init(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  BattleWindowComponent_o *window; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  UnityEngine_Object_o *titleAtLabel; // x20
  __int64 v20; // x1
  UILabel_o *v21; // x20
  UnityEngine_Object_o *titleNextItemLabel; // x20
  UILabel_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B194F2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__,
      method,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_2961/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_2965/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2959/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v14, v15);
    byte_4B194F2 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2965/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_28;
  v18 = (System_String_o *)window;
  if ( !System_String__Equals_62409536((System_String_o *)window, (System_String_o *)StringLiteral_2965/*"BATTLE_RESULEVENTTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_28;
    UILabel__set_text((UILabel_o *)window, v18, 0LL);
  }
  titleAtLabel = (UnityEngine_Object_o *)this->fields.titleAtLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(titleAtLabel, 0LL, 0LL) )
  {
    v21 = this->fields.titleAtLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2961/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0LL);
    if ( !v21 )
      goto LABEL_28;
    UILabel__set_text(v21, (System_String_o *)window, 0LL);
  }
  titleNextItemLabel = (UnityEngine_Object_o *)this->fields.titleNextItemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(titleNextItemLabel, 0LL, 0LL) )
  {
    v23 = this->fields.titleNextItemLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2959/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
    if ( v23 )
    {
      UILabel__set_text(v23, (System_String_o *)window, 0LL);
      goto LABEL_26;
    }
LABEL_28:
    sub_1BCAA3C(window, method);
  }
LABEL_26:
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  this->fields.currentGroupIndex = 0;
  if ( !window )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  v27 = (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)sub_1BCAA2C(
                                                                                                 System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__TypeInfo,
                                                                                                 v24,
                                                                                                 v25,
                                                                                                 v26);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo____ctor(
    v27,
    (const MethodInfo_3608368 *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___ctor__);
  this->fields.dropInfoList = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dropInfoList, (int64_t)v27, v28, v29, v30, v31, v32, v33);
}


void __fastcall BattleResultEventItemComponent__OnClickSwitchShowMode(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4B19512 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_OnClickSwitchShowMode__, method, v2);
    byte_4B19512 = 1;
  }
  v4 = Method_BattleResultEventItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_BattleResultEventItemComponent_OnClickSwitchShowMode__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  this->fields.isShowPossessionNum ^= 1u;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v6);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_1BCAA3C(0LL, v7);
  BattleViewItemlistComponent__SwitchShowNumMode(itemWindow, this->fields.isShowPossessionNum, 0LL);
}


void __fastcall BattleResultEventItemComponent__Open(BattleResultEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_c *klass; // x8
  __int64 currentEventId; // x1
  const MethodInfo *v7; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v8; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B194F5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      method,
      v2);
    byte_4B194F5 = 1;
  }
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_10;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v8,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, _QWORD, void *))this->klass->vtable._6_SetTitleSprite.method)(
    this,
    (unsigned int)v8.fields.groupId,
    this->klass[1]._1.image);
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    goto LABEL_10;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v8,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  if ( v8.fields.groupId < 1 )
  {
    klass = this->klass;
    currentEventId = (unsigned int)this->fields.currentEventId;
    goto LABEL_9;
  }
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
LABEL_10:
    sub_1BCAA3C(dropInfoList, method);
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v8,
    dropInfoList,
    this->fields.currentGroupIndex,
    (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  klass = this->klass;
  currentEventId = (unsigned int)v8.fields.groupId;
LABEL_9:
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_SetBgSprite.method)(
    this,
    currentEventId,
    klass->vtable._6_SetTitleSprite.methodPtr);
  BattleResultEventItemComponent__OpenCommonProcess(this, v7);
}


void __fastcall BattleResultEventItemComponent__OpenCommonProcess(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *touchNextRoot; // x0
  const MethodInfo *v9; // x1
  struct BattleWindowComponent_o *window; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleWindowComponent_EndCall_o *v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_4B19516 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_endOpen__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, v6, v7);
    byte_4B19516 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  this->fields.isShowPossessionNum = 0;
  BattleResultEventItemComponent__UpdateShowModeChangeButton(this, v9);
  touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !touchNextRoot
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v14 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v11, v12, v13),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_endOpen__,
          0LL),
        !window) )
  {
LABEL_7:
    sub_1BCAA3C(touchNextRoot, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_c *klass; // x8
  __int64 groupId; // x1
  BattleResultEventItemComponent_o *v8; // x0
  const MethodInfo *v9; // x1
  BattleResultEventItemComponent_EventDropItemInfo_o v10; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B19515 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      method,
      v2);
    byte_4B19515 = 1;
  }
  if ( BattleResultEventItemComponent__isGetItems(this, method) )
  {
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      sub_1BCAA3C(0LL, v4);
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v10,
      dropInfoList,
      this->fields.currentGroupIndex,
      (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    klass = this->klass;
    groupId = (unsigned int)v10.fields.groupId;
    v8 = this;
  }
  else
  {
    klass = this->klass;
    v8 = this;
    groupId = 0LL;
  }
  ((void (__fastcall *)(BattleResultEventItemComponent_o *, __int64, void *))klass->vtable._6_SetTitleSprite.method)(
    v8,
    groupId,
    klass[1]._1.image);
  BattleResultEventItemComponent__OpenCommonProcess(this, v9);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
        BattleResultEventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  BattleResultEventItemComponent_c *v13; // x0
  System_String_o *v14; // x22
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v18; // x1
  struct UISprite_o *eventPointAtSprite; // x8
  System_String_o *v20; // x20
  __int64 v21; // x1
  BattleResultEventItemComponent_c *v22; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x20
  System_String_o *v24; // x0
  struct UISprite_o *v25; // x8
  __int64 v26; // x1
  BattleResultEventItemComponent_c *v27; // x0
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v30; // [xsp+18h] [xbp-38h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-34h] BYREF

  v31 = eventId;
  if ( (byte_4B194FA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_BetterList_string__Contains__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_16780/*"_{0}_{1}"*/, v11, v12);
    byte_4B194FA = 1;
  }
  v13 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&eventId);
    v13 = BattleResultEventItemComponent_TypeInfo;
  }
  v14 = System_String__Concat_62401220(
          v13->static_fields->EVENT_POINT_BG_TITLE_NAME,
          (System_String_o *)StringLiteral_16780/*"_{0}_{1}"*/,
          0LL);
  v30 = eventId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v29 = groupId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  mAtlas = (UIAtlas_o *)System_String__Format_62415592(v14, v15, v16, 0LL);
  eventPointAtSprite = this->fields.eventPointAtSprite;
  if ( !eventPointAtSprite )
    goto LABEL_19;
  v20 = (System_String_o *)mAtlas;
  mAtlas = eventPointAtSprite->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_19;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_19;
  if ( BetterList_object___Contains(
         (BetterList_T__o *)mAtlas,
         (Il2CppObject *)v20,
         (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
  {
    return v20;
  }
  v22 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v21);
    v22 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_BG_TITLE_NAME = v22->static_fields->EVENT_POINT_BG_TITLE_NAME;
  v24 = System_Int32__ToString((int32_t)&v31, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_62401220(EVENT_POINT_BG_TITLE_NAME, v24, 0LL);
  v25 = this->fields.eventPointAtSprite;
  if ( !v25
    || (v20 = (System_String_o *)mAtlas, (mAtlas = v25->fields.mAtlas) == 0LL)
    || (mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(mAtlas, v18);
  }
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          (Il2CppObject *)v20,
          (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
  {
    v27 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v26);
      v27 = BattleResultEventItemComponent_TypeInfo;
    }
    return v27->static_fields->EVENT_POINT_BG_TITLE_NAME;
  }
  return v20;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__SetBgSprite(
        BattleResultEventItemComponent_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleResultEventItemComponent_c *v8; // x0
  System_String_o *EVENT_POINT_REWARD_BG_NAME; // x20
  System_String_o *v10; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v12; // x1
  struct UISprite_o *bgSp; // x8
  Il2CppObject *v14; // x20
  BattleResultEventItemComponent_c *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = imageId;
  if ( (byte_4B194FD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&imageId, method);
    sub_1BCA7E0(&Method_BetterList_string__Contains__, v4, v5);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v6, v7);
    byte_4B194FD = 1;
  }
  v8 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&imageId);
    v8 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_BG_NAME = v8->static_fields->EVENT_POINT_REWARD_BG_NAME;
  v10 = System_Int32__ToString((int32_t)&v16, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_62412480(
                          EVENT_POINT_REWARD_BG_NAME,
                          (System_String_o *)StringLiteral_16290/*"_"*/,
                          v10,
                          0LL);
  bgSp = this->fields.bgSp;
  if ( !bgSp )
    goto LABEL_15;
  v14 = (Il2CppObject *)mAtlas;
  mAtlas = bgSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_15;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_15;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v14,
          (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
  {
    v15 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v12);
      v15 = BattleResultEventItemComponent_TypeInfo;
    }
    v14 = (Il2CppObject *)v15->static_fields->EVENT_POINT_REWARD_BG_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.bgSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v14, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.bgSp) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(mAtlas, v12);
  }
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.typeMetadataHandle)(
    mAtlas,
    mAtlas->klass[2]._1.interopData);
}


void __fastcall BattleResultEventItemComponent__SetCondensedScale(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *nextItemLabel; // x0
  UILabel_o *titleAtLabel; // x20

  if ( (byte_4B19514 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventItemComponent_TypeInfo, method, v2);
    byte_4B19514 = 1;
  }
  nextItemLabel = (UILabel_o *)BattleResultEventItemComponent_TypeInfo;
  titleAtLabel = this->fields.titleAtLabel;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, method);
  if ( !titleAtLabel
    || (UILabel__SetCondensedScale(
          titleAtLabel,
          BattleResultEventItemComponent_TypeInfo->static_fields->TITLE_AT_LABEL_MAX_WIDTH,
          0LL),
        (nextItemLabel = this->fields.nextItemLabel) == 0LL) )
  {
    sub_1BCAA3C(nextItemLabel, method);
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
    sub_1BCAA3C(0LL, itemArray);
  BattleViewItemlistComponent__setEventResultCount(itemWindow, boostItemManaCount, rewardInfos, 0LL);
  BattleResultEventItemComponent__SetItemWindow_45044172(this, itemArray, v8);
}


void __fastcall BattleResultEventItemComponent__SetItemWindow_45044172(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *itemArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  BattleViewItemlistComponent_o *itemWindow; // x22
  int32_t currentEventId; // w21
  BattleDropItemComponent_ClickDelegate_o *v10; // x23
  BattleViewItemlistComponent_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4B194F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_setShowConf__, itemArray, method);
    sub_1BCA7E0(&BattleDropItemComponent_ClickDelegate_TypeInfo, v6, v7);
    byte_4B194F7 = 1;
  }
  itemWindow = this->fields.itemWindow;
  currentEventId = this->fields.currentEventId;
  v10 = (BattleDropItemComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                     BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                     itemArray,
                                                     method,
                                                     v3);
  BattleDropItemComponent_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow
    || (BattleViewItemlistComponent__setListDataCustomColumn_44957240(
          itemWindow,
          itemArray,
          currentEventId,
          v10,
          this->fields.itemColumnCount,
          0LL),
        (v11 = this->fields.itemWindow) == 0LL) )
  {
    sub_1BCAA3C(v11, v12);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  UILabel_o *atLabel; // x22
  System_String_o *v21; // x23
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  bool isQp; // w0
  __int64 v26; // x1
  UILabel_o *nextItemLabel; // x19
  bool v28; // w20
  System_String_o *v29; // x0
  Il2CppObject *v30; // x1
  UILabel_o *v31; // x20
  int64_t v32; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B194FB & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, userEventPoint, eventRewardENt);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2963/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B194FB = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( eventRewardENt )
  {
    EventRewardEntity__GetInfo(eventRewardENt, &nameText, &countText, 0LL);
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
    v32 = eventRewardENt->fields.point - userEventPoint;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32);
    v23 = System_String__Format(v21, v22, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, v23, 0LL);
      isQp = EventRewardEntity__isQp(eventRewardENt, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      v28 = isQp;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2963/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
      v30 = (Il2CppObject *)(v28 ? StringLiteral_1/*""*/ : nameText);
      v23 = System_String__Format_62415592(v29, v30, (Il2CppObject *)countText, 0LL);
      if ( nextItemLabel )
        goto LABEL_18;
    }
LABEL_15:
    sub_1BCAA3C(v23, v24);
  }
  v31 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userEventPoint);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
  if ( !v31 )
    goto LABEL_15;
  UILabel__set_text(v31, v23, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
  if ( !nextItemLabel )
    goto LABEL_15;
LABEL_18:
  UILabel__set_text(nextItemLabel, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__SetTitleSprite(
        BattleResultEventItemComponent_o *this,
        int32_t currentGroup,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v14; // x1
  struct UISprite_o *v15; // x8
  Il2CppObject *v16; // x21
  System_String_o *v17; // x1
  BattleResultEventItemComponent_c *v18; // x0
  System_String_o *EVENT_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v20; // x0
  struct UISprite_o *titleSp; // x8
  Il2CppObject *v22; // x20
  BattleResultEventItemComponent_c *v23; // x0
  BattleResultEventItemComponent_c *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  struct UISprite_o *v27; // x8
  int32_t v28; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentEventId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B194FE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&currentGroup, method);
    sub_1BCA7E0(&Method_BetterList_string__Contains__, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_20799/*"img_txt_reward_{0}_{1}"*/, v9, v10);
    byte_4B194FE = 1;
  }
  if ( currentGroup < 1 )
  {
    v18 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
      v18 = BattleResultEventItemComponent_TypeInfo;
    }
    EVENT_POINT_REWARD_TITLE_NAME = v18->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v20 = System_Int32__ToString((int)this + 168, 0LL);
    mAtlas = (UIAtlas_o *)System_String__Concat_62401220(EVENT_POINT_REWARD_TITLE_NAME, v20, 0LL);
    titleSp = this->fields.titleSp;
    if ( titleSp )
    {
      v22 = (Il2CppObject *)mAtlas;
      mAtlas = titleSp->fields.mAtlas;
      if ( mAtlas )
      {
        mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
        if ( mAtlas )
        {
          if ( !BetterList_object___Contains(
                  (BetterList_T__o *)mAtlas,
                  v22,
                  (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
          {
            v23 = BattleResultEventItemComponent_TypeInfo;
            if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v14);
              v23 = BattleResultEventItemComponent_TypeInfo;
            }
            v22 = (Il2CppObject *)v23->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
          }
LABEL_25:
          mAtlas = (UIAtlas_o *)this->fields.titleSp;
          if ( !mAtlas )
            goto LABEL_30;
          v17 = (System_String_o *)v22;
          goto LABEL_27;
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(mAtlas, v14);
  }
  currentEventId = this->fields.currentEventId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
  v28 = currentGroup;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  mAtlas = (UIAtlas_o *)System_String__Format_62415592((System_String_o *)StringLiteral_20799/*"img_txt_reward_{0}_{1}"*/, v11, v12, 0LL);
  v15 = this->fields.titleSp;
  if ( !v15 )
    goto LABEL_30;
  v16 = (Il2CppObject *)mAtlas;
  mAtlas = v15->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_30;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_30;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v16,
          (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
  {
    v24 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v14);
      v24 = BattleResultEventItemComponent_TypeInfo;
    }
    v25 = v24->static_fields->EVENT_POINT_REWARD_TITLE_NAME;
    v26 = System_Int32__ToString((int)this + 168, 0LL);
    mAtlas = (UIAtlas_o *)System_String__Concat_62401220(v25, v26, 0LL);
    v27 = this->fields.titleSp;
    if ( v27 )
    {
      v22 = (Il2CppObject *)mAtlas;
      mAtlas = v27->fields.mAtlas;
      if ( mAtlas )
      {
        mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
        if ( mAtlas )
        {
          if ( !BetterList_object___Contains(
                  (BetterList_T__o *)mAtlas,
                  v22,
                  (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
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
  v17 = (System_String_o *)v16;
LABEL_27:
  UISprite__set_spriteName((UISprite_o *)mAtlas, v17, 0LL);
LABEL_28:
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas )
    goto LABEL_30;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x21
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x8
  EventDetailEntity_o *v34; // x23
  int32_t currentEventId; // w24
  EventPointGroupMaster_o *v36; // x23
  EventPointGroupEntity_o *v37; // x23
  int64_t userId; // x22
  UserEventPointMaster_o *v39; // x24
  DataManager_o *v40; // x22
  __int64 v41; // x1
  UISprite_o *v42; // x24
  int32_t iconId; // w23
  int64_t v44; // x22
  EventRewardEntity_o *NextEventRewardEntity; // x0
  __int64 v46; // x1
  UISprite_o *eventIconSprite; // x24
  int32_t pointImageId; // w21
  EventRewardEntity_o *v49; // x20
  __int64 v50; // x1
  BattleResultEventItemComponent_c *v51; // x0
  System_String_o *EVENT_POINT_BG_TITLE_NAME; // x21
  System_String_o *v53; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v55; // x21
  BattleResultEventItemComponent_c *v56; // x0
  const MethodInfo *v57; // x3
  int32_t v58; // w24
  UISprite_o *v59; // x23
  const MethodInfo *v60; // x3
  EventRewardEntity_o *NextEventRewardEntity_39971628; // x0
  const MethodInfo *v62; // x3
  System_String_o *EVENT_POINT_REWARD_AT; // x20
  System_String_o *v64; // x0
  __int64 v65; // x1
  System_String_o *v66; // x20
  __int64 v67; // x1
  BattleResultEventItemComponent_c *v68; // x0
  UILabel_o *titleAtLabel; // x19
  BattleResultEventItemComponent_EventDropItemInfo_o v70[2]; // [xsp+0h] [xbp-90h] BYREF
  UserEventEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B194F9 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&BattleResultEventItemComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BetterList_string__Contains__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRewardMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v21,
      v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v23,
      v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B194F9 = 1;
  }
  entity = 0LL;
  memset(&v70[1], 0, sizeof(BattleResultEventItemComponent_EventDropItemInfo_o));
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !SelfUserGame || !Instance )
    goto LABEL_65;
  if ( UserEventMaster__TryGetEntity((UserEventMaster_o *)Instance, &entity, SelfUserGame->fields.userId, eventId, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_65;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  eventId,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    dropInfoList = this->fields.dropInfoList;
    if ( !dropInfoList )
      goto LABEL_65;
    if ( dropInfoList->fields._size >= 1 )
    {
      v34 = (EventDetailEntity_o *)Instance;
      if ( !Instance )
        goto LABEL_65;
      if ( EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Instance, 0LL)
        && EventDetailEntity__IsEventHappiness(v34, 0LL) )
      {
        Instance = (DataManager_o *)this->fields.dropInfoList;
        if ( !Instance )
          goto LABEL_65;
        System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
          v70,
          (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
          this->fields.currentGroupIndex,
          (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
        Instance = (DataManager_o *)UserEventPointMaster__GetEventPoint(eventId, v70[0].fields.groupId, 0LL);
        if ( !MasterData_object )
          goto LABEL_65;
LABEL_32:
        v44 = (int64_t)Instance;
        NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                  (EventRewardMaster_o *)MasterData_object,
                                  eventId,
                                  (int64_t)Instance,
                                  0LL);
        eventIconSprite = this->fields.eventIconSprite;
        pointImageId = v34->fields.pointImageId;
        v49 = NextEventRewardEntity;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v46);
        AtlasManager__SetItem(eventIconSprite, pointImageId, 0LL);
        v51 = BattleResultEventItemComponent_TypeInfo;
        if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v50);
          v51 = BattleResultEventItemComponent_TypeInfo;
        }
        EVENT_POINT_BG_TITLE_NAME = v51->static_fields->EVENT_POINT_BG_TITLE_NAME;
        v53 = System_Int32__ToString((int)this + 168, 0LL);
        Instance = (DataManager_o *)System_String__Concat_62401220(EVENT_POINT_BG_TITLE_NAME, v53, 0LL);
        eventPointAtSprite = this->fields.eventPointAtSprite;
        if ( eventPointAtSprite )
        {
          v55 = (Il2CppObject *)Instance;
          Instance = (DataManager_o *)eventPointAtSprite->fields.mAtlas;
          if ( Instance )
          {
            Instance = (DataManager_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
            if ( Instance )
            {
              if ( !BetterList_object___Contains(
                      (BetterList_T__o *)Instance,
                      v55,
                      (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
              {
                v56 = BattleResultEventItemComponent_TypeInfo;
                if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v31);
                  v56 = BattleResultEventItemComponent_TypeInfo;
                }
                v55 = (Il2CppObject *)v56->static_fields->EVENT_POINT_BG_TITLE_NAME;
              }
              Instance = (DataManager_o *)this->fields.eventPointAtSprite;
              if ( Instance )
              {
                UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v55, 0LL);
                BattleResultEventItemComponent__SetNextItemLabel(this, v44, v49, v57);
                return;
              }
            }
          }
        }
LABEL_65:
        sub_1BCAA3C(Instance, v31);
      }
      if ( !EventDetailEntity__IsGroupPoint(v34, 0LL) )
      {
        Instance = (DataManager_o *)UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
        if ( !MasterData_object )
          goto LABEL_65;
        goto LABEL_32;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !this->fields.dropInfoList )
        goto LABEL_65;
      currentEventId = this->fields.currentEventId;
      v36 = (EventPointGroupMaster_o *)Instance;
      Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                    v70,
                                    this->fields.dropInfoList,
                                    this->fields.currentGroupIndex,
                                    (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      if ( !v36 )
        goto LABEL_65;
      v37 = EventPointGroupMaster__GetEntity(v36, currentEventId, v70[0].fields.groupId, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_65;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !this->fields.dropInfoList )
        goto LABEL_65;
      userId = SelfUserGame->fields.userId;
      v39 = (UserEventPointMaster_o *)Instance;
      Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                    v70,
                                    this->fields.dropInfoList,
                                    this->fields.currentGroupIndex,
                                    (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      if ( !v39 )
        goto LABEL_65;
      Instance = (DataManager_o *)UserEventPointMaster__GetEntity(v39, userId, eventId, v70[0].fields.groupId, 0LL);
      if ( !this->fields.eventIconSprite )
        goto LABEL_65;
      v40 = Instance;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.eventIconSprite,
                                    0LL);
      if ( !Instance )
        goto LABEL_65;
      if ( v37 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v42 = this->fields.eventIconSprite;
        iconId = v37->fields.iconId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41);
        AtlasManager__SetItem(v42, iconId, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      Instance = (DataManager_o *)this->fields.dropInfoList;
      if ( !Instance )
        goto LABEL_65;
      v58 = this->fields.currentEventId;
      v59 = this->fields.eventPointAtSprite;
      System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
        v70,
        (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
        this->fields.currentGroupIndex,
        (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      Instance = (DataManager_o *)BattleResultEventItemComponent__SearchEventGroupPointAtSprite(
                                    this,
                                    v58,
                                    v70[0].fields.groupId,
                                    v60);
      if ( !v59 )
        goto LABEL_65;
      UISprite__set_spriteName(v59, (System_String_o *)Instance, 0LL);
      Instance = (DataManager_o *)this->fields.dropInfoList;
      if ( !Instance )
        goto LABEL_65;
      Instance = (DataManager_o *)System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
                                    v70,
                                    (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
                                    this->fields.currentGroupIndex,
                                    (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      if ( !v40 || !MasterData_object )
        goto LABEL_65;
      NextEventRewardEntity_39971628 = EventRewardMaster__GetNextEventRewardEntity_39971628(
                                         (EventRewardMaster_o *)MasterData_object,
                                         eventId,
                                         v70[0].fields.groupId,
                                         *(_QWORD *)&v40->fields._DispLog,
                                         0LL);
      BattleResultEventItemComponent__SetNextItemLabel(
        this,
        *(_QWORD *)&v40->fields._DispLog,
        NextEventRewardEntity_39971628,
        v62);
      if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v31);
      Instance = (DataManager_o *)this->fields.dropInfoList;
      if ( !Instance )
        goto LABEL_65;
      EVENT_POINT_REWARD_AT = BattleResultEventItemComponent_TypeInfo->static_fields->EVENT_POINT_REWARD_AT;
      System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
        v70,
        (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)Instance,
        this->fields.currentGroupIndex,
        (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
      v70[1] = v70[0];
      v64 = System_Int32__ToString((int32_t)&v70[1].fields.groupId, 0LL);
      v66 = System_String__Concat_62401220(EVENT_POINT_REWARD_AT, v64, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
      if ( !LocalizationManager__ContainsKey(v66, 0LL) )
      {
        v68 = BattleResultEventItemComponent_TypeInfo;
        if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v67);
          v68 = BattleResultEventItemComponent_TypeInfo;
        }
        v66 = v68->static_fields->EVENT_POINT_REWARD_AT;
      }
      titleAtLabel = this->fields.titleAtLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67);
      Instance = (DataManager_o *)LocalizationManager__Get(v66, 0LL);
      if ( !titleAtLabel )
        goto LABEL_65;
      UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0LL);
    }
  }
}


void __fastcall BattleResultEventItemComponent__UpdateShowModeChangeButton(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *showModeChangeButton; // x0
  System_String_o **v7; // x8
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19513 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v4, v5);
    byte_4B19513 = 1;
  }
  showModeChangeButton = this->fields.showModeChangeButton;
  if ( !showModeChangeButton )
    goto LABEL_14;
  v7 = (System_String_o **)(this->fields.isShowPossessionNum ? &StringLiteral_17653/*"btn_bg_21"*/ : &StringLiteral_17652/*"btn_bg_20"*/);
  UIButton__set_normalSprite(showModeChangeButton, *v7, 0LL);
  showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors;
  if ( !showModeChanButtonLabelEffectColors )
    goto LABEL_14;
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !max_length )
LABEL_15:
      sub_1BCAA44(showModeChangeButton, method);
    p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
    p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
    p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
    p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
    if ( showModeChangeButton )
      goto LABEL_11;
LABEL_14:
    sub_1BCAA3C(showModeChangeButton, method);
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
  v14.fields.a = *p_r;
  v14.fields.b = *p_a;
  v14.fields.g = *p_b;
  v14.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__commandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B19509 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B19509 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultEventItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall BattleResultEventItemComponent__createDropInfo(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x20
  System_Collections_Generic_IEnumerable_T__o *All_object; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x8
  int v46; // w9
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **v47; // x21
  System_Predicate_object__o **v48; // x22
  System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *v49; // x25
  System_Collections_Generic_List_T__o *dropInfoList; // x24
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Object_array *v57; // x24
  __int64 v58; // x8
  Il2CppObject *v59; // x8
  System_Predicate_object__o *v60; // x25
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x2
  __int64 v68; // x3
  System_Collections_Generic_IEnumerable_T__o *v69; // x24
  System_Collections_Generic_List_object__o *v70; // x25
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  PartyOrganizationUtility_c *klass; // x24
  BattleResultEventItemComponent___c_c *v78; // x0
  System_Predicate_object__o *_9__42_2; // x25
  Il2CppObject *v80; // x26
  struct BattleResultEventItemComponent___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  _QWORD *v100; // x10
  struct BattleResultEventItemComponent_EventDropItemInfo_array *v101; // x8
  __int64 monitor_low; // x9
  __int128 v103; // q0
  char *v104; // x8
  const MethodInfo_3608C3C *v105; // x2
  PartyOrganizationUtility_o v106; // [xsp+20h] [xbp-C0h] BYREF

  if ( (byte_4B194FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_BattleDropItem___, drop, method);
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___, v6, v7);
    sub_1BCA7E0(&System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__,
      v12,
      v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Predicate_BattleDropItem__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__, v24, v25);
    sub_1BCA7E0(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__, v26, v27);
    sub_1BCA7E0(&Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__, v28, v29);
    sub_1BCA7E0(&BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, v30, v31);
    sub_1BCA7E0(&BattleResultEventItemComponent___c_TypeInfo, v32, v33);
    byte_4B194FC = 1;
  }
  memset(&v106, 0, 32);
  v34 = sub_1BCAA2C(BattleResultEventItemComponent___c__DisplayClass42_0_TypeInfo, drop, method, v3);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
LABEL_31:
    sub_1BCAA3C(All_object, v36);
  *(_QWORD *)(v34 + 16) = drop;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 16), (int64_t)drop, v37, v38, v39, v40, v41, v42);
  v45 = *(_QWORD *)(v34 + 16);
  if ( v45 )
  {
    v46 = 0;
    *(_DWORD *)(v34 + 24) = 0;
    v47 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o **)(v34 + 32);
    v48 = (System_Predicate_object__o **)(v34 + 40);
    while ( v46 < *(_DWORD *)(v45 + 24) )
    {
      v49 = *v47;
      dropInfoList = (System_Collections_Generic_List_T__o *)this->fields.dropInfoList;
      if ( !*v47 )
      {
        v49 = (System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__o *)sub_1BCAA2C(
                                                                                         System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool__TypeInfo,
                                                                                         v36,
                                                                                         v43,
                                                                                         v44);
        System_Func_BattleResultEventItemComponent_EventDropItemInfo__bool____ctor(
          v49,
          (Il2CppObject *)v34,
          Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__0__,
          0LL);
        *(_QWORD *)(v34 + 32) = v49;
        sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v49, v51, v52, v53, v54, v55, v56);
      }
      All_object = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__Any_BattleResultEventItemComponent_EventDropItemInfo_(
                                                                    dropInfoList,
                                                                    (System_Func_T__bool__o *)v49,
                                                                    (const MethodInfo_2EFE074 *)Method_BasicHelper_Any_BattleResultEventItemComponent_EventDropItemInfo___);
      if ( ((unsigned __int8)All_object & 1) == 0 )
      {
        memset(&v106, 0, 32);
        v57 = *(System_Object_array **)(v34 + 16);
        if ( !v57 )
          goto LABEL_31;
        v58 = *(int *)(v34 + 24);
        if ( (unsigned int)v58 >= v57->max_length )
          sub_1BCAA44(All_object, v36);
        v59 = v57->m_Items[v58];
        if ( !v59 )
          goto LABEL_31;
        LODWORD(v106.fields._normalFollowerInfo) = v59[3].monitor;
        v60 = *v48;
        if ( !*v48 )
        {
          v60 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleDropItem__TypeInfo, v36, v43, v44);
          System_Predicate_object____ctor(
            v60,
            (Il2CppObject *)v34,
            Method_BattleResultEventItemComponent___c__DisplayClass42_0__createDropInfo_b__1__,
            0LL);
          *(_QWORD *)(v34 + 40) = v60;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 40), (int64_t)v60, v61, v62, v63, v64, v65, v66);
        }
        All_object = (System_Collections_Generic_IEnumerable_T__o *)System_Array__FindAll_object_(
                                                                      v57,
                                                                      (System_Predicate_T__o *)v60,
                                                                      (const MethodInfo_300CF94 *)Method_System_Array_FindAll_BattleDropItem___);
        if ( All_object )
        {
          v69 = All_object;
          v70 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_BattleDropItem__TypeInfo,
                                                               v36,
                                                               v67,
                                                               v68);
          System_Collections_Generic_List_object____ctor(
            v70,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
          v106.klass = (PartyOrganizationUtility_c *)v70;
          sub_1BCA784(&v106, (int64_t)v70, v71, v72, v73, v74, v75, v76);
          All_object = (System_Collections_Generic_IEnumerable_T__o *)v106.klass;
          if ( !v106.klass )
            goto LABEL_31;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v106.klass,
            v69,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
        }
        klass = v106.klass;
        if ( !v106.klass )
          goto LABEL_31;
        v78 = BattleResultEventItemComponent___c_TypeInfo;
        LODWORD(v106.monitor) = v106.klass->_1.namespaze;
        if ( !BattleResultEventItemComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent___c_TypeInfo, v36);
          v78 = BattleResultEventItemComponent___c_TypeInfo;
        }
        _9__42_2 = (System_Predicate_object__o *)v78->static_fields->__9__42_2;
        if ( !_9__42_2 )
        {
          if ( !v78->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v78, v36);
            v78 = BattleResultEventItemComponent___c_TypeInfo;
          }
          v80 = (Il2CppObject *)v78->static_fields->__9;
          _9__42_2 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleDropItem__TypeInfo, v36, v67, v68);
          System_Predicate_object____ctor(
            _9__42_2,
            v80,
            Method_BattleResultEventItemComponent___c__createDropInfo_b__42_2__,
            0LL);
          static_fields = BattleResultEventItemComponent___c_TypeInfo->static_fields;
          static_fields->__9__42_2 = (struct System_Predicate_BattleDropItem__o *)_9__42_2;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__42_2,
            (int64_t)_9__42_2,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87);
        }
        v106.fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)System_Collections_Generic_List_object___FindAll((System_Collections_Generic_List_object__o *)klass, (System_Predicate_T__o *)_9__42_2, (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v106.fields,
          (int64_t)v106.fields.restrictionDialogHistoryList,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
        All_object = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dropInfoList;
        if ( !All_object )
          goto LABEL_31;
        v100 = Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__Add__;
        *(_OWORD *)&v106.fields._SelectedNormalFollowerClassId_k__BackingField = *(_OWORD *)&v106.klass;
        *(_OWORD *)&v106.fields._SelectedPartyPosition_k__BackingField = *(_OWORD *)&v106.fields.restrictionDialogHistoryList;
        v101 = (struct BattleResultEventItemComponent_EventDropItemInfo_array *)All_object[1].klass;
        ++HIDWORD(All_object[1].monitor);
        if ( !v101 )
          goto LABEL_31;
        monitor_low = SLODWORD(All_object[1].monitor);
        if ( (unsigned int)monitor_low >= v101->max_length )
        {
          v105 = *(const MethodInfo_3608C3C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL);
          *(_OWORD *)&v106.fields._BasePartyItem_k__BackingField = *(_OWORD *)&v106.fields._SelectedNormalFollowerClassId_k__BackingField;
          *(_OWORD *)&v106.fields._IsForceDisableSupportSelectBackBtn_k__BackingField = *(_OWORD *)&v106.fields._SelectedPartyPosition_k__BackingField;
          System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___AddWithResize(
            (System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *)All_object,
            (BattleResultEventItemComponent_EventDropItemInfo_o *)&v106.fields._BasePartyItem_k__BackingField,
            v105);
        }
        else
        {
          LODWORD(All_object[1].monitor) = monitor_low + 1;
          v103 = *(_OWORD *)&v106.fields._SelectedPartyPosition_k__BackingField;
          v104 = (char *)v101 + 32 * monitor_low;
          *((_OWORD *)v104 + 2) = *(_OWORD *)&v106.fields._SelectedNormalFollowerClassId_k__BackingField;
          *((_OWORD *)v104 + 3) = v103;
          sub_1BCA784((PartyOrganizationUtility_o *)(v104 + 32), 0LL, v94, v95, v96, v97, v98, v99);
        }
      }
      v45 = *(_QWORD *)(v34 + 16);
      v46 = *(_DWORD *)(v34 + 24) + 1;
      *(_DWORD *)(v34 + 24) = v46;
      if ( !v45 )
        goto LABEL_31;
    }
  }
}


void __fastcall BattleResultEventItemComponent__endClose(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19510 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B19510 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endCommandCodeDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1950A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B1950A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endEventPointBuffDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1950E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B1950E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endItemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19506 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B19506 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__endOpen(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B194F6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, method, v2);
    byte_4B194F6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_1BCAA3C(myFsm, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B1950D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__, v4, v5);
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__, v6, v7);
    byte_4B1950D = 1;
  }
  v8 = Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  itemDialog = this->fields.itemDialog;
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_endEventPointBuffDialogCallBack__,
    0LL);
  if ( !itemDialog )
    sub_1BCAA3C(v15, v16);
  ItemDetailInfoComponent__Close_31668900(itemDialog, v14, 0LL);
}


BattleDropItem_o *__fastcall BattleResultEventItemComponent__getNewDrop(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleDropItem__o *v11; // x8
  BattleDropItem_o *v12; // x19

  if ( (byte_4B194F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v6, v7);
    byte_4B194F4 = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v11 = this->fields.newDroplist;
  if ( !v11 )
    sub_1BCAA3C(Item, v10);
  v12 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v11,
    0,
    (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v12;
}


bool __fastcall BattleResultEventItemComponent__isGetItems(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 currentGroupIndex; // x1
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x0
  BattleResultEventItemComponent_EventDropItemInfo_o v9; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B194F3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v4,
      v5);
    byte_4B194F3 = 1;
  }
  currentGroupIndex = (unsigned int)this->fields.currentGroupIndex;
  if ( (currentGroupIndex & 0x80000000) != 0 )
    return 0;
  dropInfoList = this->fields.dropInfoList;
  if ( !dropInfoList )
    sub_1BCAA3C(0LL, currentGroupIndex);
  if ( dropInfoList->fields._size <= (int)currentGroupIndex )
    return 0;
  System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
    &v9,
    dropInfoList,
    currentGroupIndex,
    (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
  return v9.fields.itemCount > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__itemDialogCallBack(
        BattleResultEventItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B19505 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_endItemDialogCallBack__, v4, v5);
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_itemDialogCallBack__, v6, v7);
    byte_4B19505 = 1;
  }
  v8 = Method_BattleResultEventItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultEventItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattleResultEventItemComponent_itemDialogCallBack__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  itemDialog = this->fields.itemDialog;
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleResultEventItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_1BCAA3C(v15, v16);
  ItemDetailInfoComponent__Close_31668900(itemDialog, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__setResultData(
        BattleResultEventItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t eventId,
        QuestRewardInfo_array *resultBoostItemRewardInfos,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x24
  unsigned int v30; // w25
  int32_t v31; // w22
  QuestRewardInfo_o *v32; // x27
  BattleResultEventItemComponent_c *v33; // x0
  System_String_o *EVENT_POINT_REWARD_AT; // x23
  System_String_o *v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x23
  __int64 v38; // x1
  BattleResultEventItemComponent_c *v39; // x0
  UILabel_o *titleAtLabel; // x24
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x4
  struct System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__o *dropInfoList; // x9
  int32_t currentGroupIndex; // w1
  const MethodInfo *v45; // x2
  BattleResultEventItemComponent_EventDropItemInfo_o v46; // [xsp+8h] [xbp-78h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_4B194F8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDropItem___TypeInfo, drop, *(_QWORD *)&eventId);
    sub_1BCA7E0(&BattleResultEventItemComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v16, v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Count__,
      v18,
      v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__,
      v20,
      v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B194F8 = 1;
  }
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !resultBoostItemRewardInfos )
    goto LABEL_35;
  max_length = resultBoostItemRewardInfos->max_length;
  if ( max_length >= 1 )
  {
    v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        sub_1BCAA44(Instance, v27);
      v32 = resultBoostItemRewardInfos->m_Items[v30];
      if ( !v32 )
        goto LABEL_35;
      if ( v32->fields.type == 2 )
      {
        if ( !v29 )
          goto LABEL_35;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v29,
                                      v32->fields.objectId,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( Instance && LODWORD(Instance->fields.lookup) == 5 )
          v31 += v32->fields.num;
      }
      max_length = resultBoostItemRewardInfos->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_19;
    }
  }
  v31 = 0;
LABEL_19:
  v33 = BattleResultEventItemComponent_TypeInfo;
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v27);
    v33 = BattleResultEventItemComponent_TypeInfo;
  }
  EVENT_POINT_REWARD_AT = v33->static_fields->EVENT_POINT_REWARD_AT;
  v35 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v37 = System_String__Concat_62401220(EVENT_POINT_REWARD_AT, v35, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
  if ( !LocalizationManager__ContainsKey(v37, 0LL) )
  {
    v39 = BattleResultEventItemComponent_TypeInfo;
    if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v38);
      v39 = BattleResultEventItemComponent_TypeInfo;
    }
    v37 = v39->static_fields->EVENT_POINT_REWARD_AT;
  }
  titleAtLabel = this->fields.titleAtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  Instance = (DataManager_o *)LocalizationManager__Get(v37, 0LL);
  if ( !titleAtLabel
    || (UILabel__set_text(titleAtLabel, (System_String_o *)Instance, 0LL),
        this->fields.currentEventId = eventIda,
        BattleResultEventItemComponent__createDropInfo(this, drop, v41),
        Instance = (DataManager_o *)sub_1BCA888(BattleDropItem___TypeInfo, 0LL),
        (dropInfoList = this->fields.dropInfoList) == 0LL) )
  {
LABEL_35:
    sub_1BCAA3C(Instance, v27);
  }
  currentGroupIndex = this->fields.currentGroupIndex;
  if ( dropInfoList->fields._size > currentGroupIndex )
  {
    System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo___get_Item(
      &v46,
      this->fields.dropInfoList,
      currentGroupIndex,
      (const MethodInfo_36088CC *)Method_System_Collections_Generic_List_BattleResultEventItemComponent_EventDropItemInfo__get_Item__);
    Instance = (DataManager_o *)v46.fields.itemList;
    if ( !v46.fields.itemList )
      goto LABEL_35;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)v46.fields.itemList,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  }
  BattleResultEventItemComponent__SetItemWindow(this, (BattleDropItem_array *)Instance, v31, rewardInfos, v42);
  BattleResultEventItemComponent__SetUi(this, eventIda, v45);
}


void __fastcall BattleResultEventItemComponent__setShowCommandCodeConf(
        BattleResultEventItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19507 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9764/*"OPEN_COMMANDCODE"*/, commandCodeId, method);
    byte_4B19507 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1BCAA3C(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9764/*"OPEN_COMMANDCODE"*/, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B1950B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9765/*"OPEN_EVENTPOINTBUFF"*/, eventPointBuffId, method);
    byte_4B1950B = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_eventPointBuffId = eventPointBuffId;
  if ( !myFsm )
    sub_1BCAA3C(0LL, eventPointBuffId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9765/*"OPEN_EVENTPOINTBUFF"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemComponent__setShowItemConf(
        BattleResultEventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19503 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9771/*"OPEN_ITEM"*/, *(_QWORD *)&itemId, method);
    byte_4B19503 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9771/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__setShowServantConf(
        BattleResultEventItemComponent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B194FF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9779/*"OPEN_SERVANT"*/, userSvtId, method);
    byte_4B194FF = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_userSvtId = userSvtId;
  if ( !myFsm )
    sub_1BCAA3C(0LL, userSvtId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9779/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultEventItemComponent__showCommandCodeDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  ServantStatusDialog_EndDelegate_o *v21; // x22

  if ( (byte_4B19508 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_commandCodeDialogCallBack__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6, v7);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B19508 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v18, v19, v20),
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)this,
          Method_BattleResultEventItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v17) )
  {
    sub_1BCAA3C(Instance, v15);
  }
  CommonUI__OpenServantStatusDialog_30778960((CommonUI_o *)v17, 0, (UserCommandCodeEntity_o *)Entity, v21, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent__showEventPointBuffDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_String_o *klass; // x21
  System_String_o *monitor; // x22
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v19; // x23

  if ( (byte_4B1950C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__, method, v2);
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B1950C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointBuffMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.tmp_eventPointBuffId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || (klass = (System_String_o *)Instance[2].klass,
        monitor = (System_String_o *)Instance[2].monitor,
        itemDialog = this->fields.itemDialog,
        v19 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v13,
                                                          v14,
                                                          v15),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultEventItemComponent_eventPointBuffDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_1BCAA3C(Instance, v13);
  }
  ItemDetailInfoComponent__OpenItemMsgInfo(itemDialog, klass, monitor, v19, 0LL);
}


void __fastcall BattleResultEventItemComponent__showItemDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v20; // x22

  if ( (byte_4B19504 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_itemDialogCallBack__, method, v2);
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B19504 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v16 = (ItemEntity_o *)Entity,
        v20 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v17,
                                                          v18,
                                                          v19),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultEventItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_1BCAA3C(Instance, v13);
  }
  ItemDetailInfoComponent__Open(itemDialog, v16, v20, 50, 0LL);
}


void __fastcall BattleResultEventItemComponent__showServantDialog(
        BattleResultEventItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  int64_t tmp_userSvtId; // x20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  ServantStatusDialog_EndDelegate_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B19500 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultEventItemComponent_DialogCallBack__, method, v2);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B19500 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  tmp_userSvtId = this->fields.tmp_userSvtId;
  v10 = (CommonUI_o *)Instance;
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12, v13);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleResultEventItemComponent_DialogCallBack__,
    0LL);
  if ( !v10 )
    sub_1BCAA3C(v15, v16);
  CommonUI__OpenServantStatusDialog_30775636(v10, 0, tmp_userSvtId, v14, 0LL, 0LL);
}


void __fastcall BattleResultEventItemComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19519 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventItemComponent___c_TypeInfo, v1, v2);
    byte_4B19519 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleResultEventItemComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleResultEventItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultEventItemComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleResultEventItemComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_38401528(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_38401920(s->fields.type, 0LL);
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
    sub_1BCAA44(this, d);
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_5:
    sub_1BCAA3C(this, d);
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
    sub_1BCAA44(this, item);
  v5 = drop->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_1BCAA3C(this, item);
  return item->fields.eventGroupId == v5->fields.eventGroupId;
}