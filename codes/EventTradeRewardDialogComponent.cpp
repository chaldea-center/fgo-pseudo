void __fastcall EventTradeRewardDialogComponent___ctor(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B16FB4 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Color___TypeInfo, v3);
    byte_4B16FB4 = 1;
  }
  this->fields.iconScale = 0.85;
  this->fields.viewChangeButtonLabelEffectColors = (struct UnityEngine_Color_array *)sub_1BCB0A0(
                                                                                       UnityEngine_Color___TypeInfo,
                                                                                       2LL);
  sub_1BCAF9C(&this->fields.viewChangeButtonLabelEffectColors);
  this->fields.maxItemDrawNum = 12;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__EndClose(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4B16FB0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    byte_4B16FB0 = 1;
  }
  EventTradeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCAF9C(&this->fields.closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall EventTradeRewardDialogComponent__Init(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__OnClickCloseButton(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  EventTradeRewardDialogComponent___c_c *v14; // x0
  System_Action_object__o *_9__28_0; // x21
  Il2CppObject *v16; // x22
  struct EventTradeRewardDialogComponent___c_StaticFields *static_fields; // x0
  System_Action_o *v18; // x20

  if ( (byte_4B16FAF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    sub_1BCAFF8(&System_Action_GameObject__TypeInfo, v3);
    sub_1BCAFF8(&System_Action_TypeInfo, v4);
    sub_1BCAFF8(&Method_EventTradeRewardDialogComponent_EndClose__, v5);
    sub_1BCAFF8(&Method_EventTradeRewardDialogComponent_OnClickCloseButton__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__ForEach__, v7);
    sub_1BCAFF8(&Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__28_0__, v8);
    sub_1BCAFF8(&EventTradeRewardDialogComponent___c_TypeInfo, v9);
    byte_4B16FAF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
    v10 = Method_EventTradeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCB010(Method_EventTradeRewardDialogComponent_OnClickCloseButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    v14 = EventTradeRewardDialogComponent___c_TypeInfo;
    if ( !EventTradeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeRewardDialogComponent___c_TypeInfo);
      v14 = EventTradeRewardDialogComponent___c_TypeInfo;
    }
    _9__28_0 = (System_Action_object__o *)v14->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = EventTradeRewardDialogComponent___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__28_0 = (System_Action_object__o *)sub_1BCB244(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(
        _9__28_0,
        v16,
        Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__28_0__,
        0LL);
      static_fields = EventTradeRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = (struct System_Action_GameObject__o *)_9__28_0;
      v14 = (EventTradeRewardDialogComponent___c_c *)sub_1BCAF9C(&static_fields->__9__28_0);
    }
    if ( !resultItemObjList )
      sub_1BCB254(v14, v12);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (System_Action_T__o *)_9__28_0,
      (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
    v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_EventTradeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
  }
}


void __fastcall EventTradeRewardDialogComponent__OnClickSwitchShowMode(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v15; // x8
  UISprite_o *v16; // x20
  System_String_o *normalSprite; // x21
  __int64 v18; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x10
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x9
  float *p_a; // x11
  float *p_r; // x10
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  System_Action_object__o *v26; // x21
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B16FB1 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GameObject__TypeInfo, method);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UISprite___, v4);
    sub_1BCAFF8(&Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__, v5);
    sub_1BCAFF8(&Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__30_0__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__ForEach__, v7);
    sub_1BCAFF8(&StringLiteral_23986/*"treasurechest_btn"*/, v8);
    sub_1BCAFF8(&StringLiteral_23988/*"treasurechest_btn_on"*/, v9);
    byte_4B16FB1 = 1;
  }
  v10 = Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCB010(Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_22;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23986/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23988/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_22;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_22;
  v16 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v16, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_22:
    sub_1BCB254(viewChangeButton, v12);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButton )
        goto LABEL_22;
      goto LABEL_20;
    }
LABEL_23:
    sub_1BCB25C(viewChangeButton, v12, v18);
  }
  if ( max_length <= 1 )
    goto LABEL_23;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_22;
LABEL_20:
  v27.fields.a = *p_r;
  v27.fields.b = *p_a;
  v27.fields.g = *p_b;
  v27.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v27, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  v26 = (System_Action_object__o *)sub_1BCB244(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)this,
    Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__30_0__,
    0LL);
  if ( !resultItemObjList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)resultItemObjList,
    (System_Action_T__o *)v26,
    (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeRewardDialogComponent__Open(
        EventTradeRewardDialogComponent_o *this,
        int32_t eventPoint,
        int32_t eventPointItemId,
        int32_t eventId,
        BattleDropItem_array *infos,
        BattleDropItem_array *pointRewards,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        bool isReceiveAll,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  Il2CppObject *v42; // x23
  void *viewChangeButton; // x0
  __int64 v44; // x1
  Il2CppObject *Component_object; // x28
  System_Collections_Generic_List_object__o *v46; // x28
  UILabel_o *titleLabel; // x28
  System_String_o *v48; // x0
  Il2CppObject *Empty; // x1
  UISprite_o *totalEventPointIcon; // x27
  __int64 v51; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x27
  UILabel_o *getTitleLabel; // x27
  UILabel_o *getNumLabel; // x27
  System_String_o *v56; // x28
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  int32_t v62; // w25
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x27
  __int64 v65; // x28
  UILabel_o *totalNumLabel; // x27
  System_String_o *v67; // x29
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x0
  __int64 *v72; // x21
  UILabel_o *v73; // x24
  BattleDropItem_o *v74; // x24
  System_Array_o **p_monitor; // x21
  _DWORD *monitor; // x22
  int32_t maxItemDrawNum; // w20
  void *v78; // x21
  System_Action_o *v79; // x20
  __int64 v80; // x0
  bool v81; // [xsp+4h] [xbp-8Ch]
  __int64 v84; // [xsp+20h] [xbp-70h] BYREF
  int32_t v85; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B16FAD & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&eventPoint);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v16);
    sub_1BCAFF8(&BattleDropItem___TypeInfo, v17);
    sub_1BCAFF8(&BattleDropItem_TypeInfo, v18);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UISprite___, v19);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76937544, v20);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v21);
    sub_1BCAFF8(&DataManager_TypeInfo, v22);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v23);
    sub_1BCAFF8(&int_TypeInfo, v24);
    sub_1BCAFF8(&long_TypeInfo, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v26);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v27);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v28);
    sub_1BCAFF8(&string_TypeInfo, v29);
    sub_1BCAFF8(&Method_EventTradeRewardDialogComponent___c__DisplayClass26_0__Open_b__0__, v30);
    sub_1BCAFF8(&EventTradeRewardDialogComponent___c__DisplayClass26_0_TypeInfo, v31);
    sub_1BCAFF8(&StringLiteral_13425/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v32);
    sub_1BCAFF8(&StringLiteral_798/*"+"*/, v33);
    sub_1BCAFF8(&StringLiteral_13376/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/, v34);
    sub_1BCAFF8(&StringLiteral_13381/*"TRADE_EVENT_TOTAL_POINT_NUM"*/, v35);
    sub_1BCAFF8(&StringLiteral_23986/*"treasurechest_btn"*/, v36);
    sub_1BCAFF8(&StringLiteral_13424/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v37);
    sub_1BCAFF8(&StringLiteral_2810/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v38);
    sub_1BCAFF8(&StringLiteral_23992/*"treasurechest_img_bg_reward"*/, v39);
    sub_1BCAFF8(&StringLiteral_13357/*"TRADE_EVENT_GET_POINT_NUM"*/, v40);
    sub_1BCAFF8(&StringLiteral_13377/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, v41);
    byte_4B16FAD = 1;
  }
  v42 = (Il2CppObject *)sub_1BCB244(EventTradeRewardDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v42, 0LL);
  if ( !v42 )
    goto LABEL_52;
  v42[1].klass = (Il2CppClass *)this;
  v81 = isReceiveAll;
  sub_1BCAF9C(&v42[1]);
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_52;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23986/*"treasurechest_btn"*/, 0LL);
  this->fields.isShowPossessionNum = 0;
  v46 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v46;
  sub_1BCAF9C(&this->fields.resultItemObjList);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_13376/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !eventTradeGoodsEntity || (Empty = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0LL )
    Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  viewChangeButton = System_String__Format(v48, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_52;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23992/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23992/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23986/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_52;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_53;
  viewChangeButton = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_52;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13377/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_52;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13357/*"TRADE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_52;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_2810/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v85 = eventPoint;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v57, v58, v59);
  v61 = System_String__Format(v56, v60, 0LL);
  viewChangeButton = System_String__Concat_62450424((System_String_o *)StringLiteral_798/*"+"*/, v61, 0LL);
  if ( !getNumLabel )
    goto LABEL_52;
  v62 = eventPoint;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v65 = EventPointNoGroup;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13381/*"TRADE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_52;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2810/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v84 = v65;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v84, v68, v69, v70);
  viewChangeButton = System_String__Format(v67, v71, 0LL);
  if ( !totalNumLabel )
    goto LABEL_52;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       eventId,
                       (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( pointRewards && *(_QWORD *)&pointRewards->max_length )
  {
    v72 = &StringLiteral_13425/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( !viewChangeButton )
      goto LABEL_52;
    v72 = &StringLiteral_13425/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
    if ( v81 | !EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0LL, 0LL) )
      v72 = &StringLiteral_13424/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  }
  viewChangeButton = this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = UnityEngine_Component__GetComponentsInChildren_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       1,
                       (const MethodInfo_3011F98 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76937544);
  if ( !viewChangeButton )
    goto LABEL_52;
  if ( !*((_DWORD *)viewChangeButton + 6) )
    goto LABEL_53;
  v73 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v72, 0LL);
  if ( !v73 )
    goto LABEL_52;
  UILabel__set_text(v73, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCAF9C(&this->fields.closeCallbackFunc);
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v74 = (BattleDropItem_o *)sub_1BCB244(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v74, 0LL);
  if ( !v74
    || (v74->fields.type = 2, v74->fields.objectId = eventPointItemId, v74->fields.originalNum = v62, !infos)
    || (v42[1].monitor = (void *)sub_1BCB0A0(BattleDropItem___TypeInfo, infos->max_length + 1),
        p_monitor = (System_Array_o **)&v42[1].monitor,
        viewChangeButton = (void *)sub_1BCAF9C(&v42[1].monitor),
        (monitor = v42[1].monitor) == 0LL) )
  {
LABEL_52:
    sub_1BCB254(viewChangeButton, v44);
  }
  viewChangeButton = (void *)sub_1BCB134(v74, *(_QWORD *)(*(_QWORD *)monitor + 64LL));
  if ( !viewChangeButton )
  {
    v80 = sub_1BCB278();
    sub_1BCB120(v80, 0LL);
  }
  if ( !monitor[6] )
LABEL_53:
    sub_1BCB25C(viewChangeButton, v44, v51);
  *((_QWORD *)monitor + 4) = v74;
  sub_1BCAF9C(monitor + 8);
  System_Array__Copy_64111288((System_Array_o *)infos, 0, *p_monitor, 1, infos->max_length, 0LL);
  if ( !*p_monitor )
    goto LABEL_52;
  viewChangeButton = this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_52;
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v78 = (*p_monitor)[1].monitor;
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, maxItemDrawNum < (int)v78, 0LL);
  v79 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v79, v42, Method_EventTradeRewardDialogComponent___c__DisplayClass26_0__Open_b__0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__SetPossession(
        EventTradeRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v10; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16FB2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, item);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B16FB2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_17;
  v10 = (NetworkManager_c *)UserItemMaster__TryGetEntity(
                              (UserItemMaster_o *)Master_object,
                              &entity,
                              v10->static_fields->userIdNumber,
                              objectId,
                              0LL);
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_17:
    sub_1BCB254(v10, v8);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__SetResultData(
        EventTradeRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  EventTradeRewardDialogComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  signed int max_length; // w8
  __int64 v10; // x26
  BattleDropItem_o *v11; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v14; // x10
  int v15; // w29
  UnityEngine_Transform_o *listRoot; // x22
  Il2CppObject *prefabResultItem; // x25
  EventTradeRewardDialogComponent_o *v18; // x22
  EventTradeRewardDialogComponent_o *v19; // x25
  int32_t v20; // w3
  ItemIconComponent_o *v21; // x25
  EventTradeRewardDialogComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B16FAE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v7);
    this = (EventTradeRewardDialogComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B16FAE = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= max_length )
          sub_1BCB25C(this, rewards, method);
        v11 = rewards->m_Items[v10];
        if ( !v11 )
          break;
        type = v11->fields.type;
        objectId = v11->fields.objectId;
        v14 = 44LL;
        if ( v11->fields.originalNum > 0 )
          v14 = 52LL;
        v15 = *(_DWORD *)((char *)&v11->klass + v14);
        listRoot = v4->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                      prefabResultItem,
                                                      listRoot,
                                                      (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
        if ( !this )
          break;
        v18 = this;
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        v19 = this;
        if ( !byte_4B16191 )
        {
          this = (EventTradeRewardDialogComponent_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, rewards);
          byte_4B16191 = 1;
        }
        if ( !v19 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v19,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v18,
                                                      0LL);
        if ( !this )
          break;
        v28.fields.x = v4->fields.iconScale;
        v28.fields.y = v28.fields.x;
        v28.fields.z = v28.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v28, 0LL);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v18,
                                                      (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v20 = v15 <= 1 ? -1 : v15;
        v21 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_40107980((ItemIconComponent_o *)this, type, objectId, v20, 0, 0LL);
        EventTradeRewardDialogComponent__SetPossession(v22, v21, objectId, v23);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, 1, 0LL);
        this = (EventTradeRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          break;
        v24 = *(_QWORD *)&this->fields.m_CachedPtr;
        v25 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v24 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v18,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = v24 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v27 + 32) = v18;
          this = (EventTradeRewardDialogComponent_o *)sub_1BCAF9C(v27 + 32);
        }
        max_length = rewards->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_27;
      }
LABEL_32:
      sub_1BCB254(this, rewards);
    }
LABEL_27:
    this = (EventTradeRewardDialogComponent_o *)v4->fields.scrollView;
    if ( !this )
      goto LABEL_32;
    UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
    this = (EventTradeRewardDialogComponent_o *)v4->fields.listRoot;
    if ( !this )
      goto LABEL_32;
    this = (EventTradeRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( !this )
      goto LABEL_32;
    ((void (__fastcall *)(EventTradeRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
      this,
      this->klass[1]._1.byval_arg.data);
  }
}


void __fastcall EventTradeRewardDialogComponent___OnClickSwitchShowMode_b__30_0(
        EventTradeRewardDialogComponent_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  EventTradeRewardDialogComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4B16FB5 & 1) == 0 )
  {
    this = (EventTradeRewardDialogComponent_o *)sub_1BCAFF8(
                                                  &Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___,
                                                  item);
    byte_4B16FB5 = 1;
  }
  if ( !item
    || (this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      item,
                                                      (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___)) == 0LL )
  {
    sub_1BCB254(this, item);
  }
  ItemIconComponent__ShowPossession((ItemIconComponent_o *)this, v4->fields.isShowPossessionNum, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventTradeRewardDialogComponent__get_closeBtnObject(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B16FB3 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B16FB3 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventTradeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B16FB6 & 1) == 0 )
  {
    sub_1BCAFF8(&EventTradeRewardDialogComponent___c_TypeInfo, v1);
    byte_4B16FB6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventTradeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTradeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradeRewardDialogComponent___c_o *)v2;
  sub_1BCAF9C(EventTradeRewardDialogComponent___c_TypeInfo->static_fields);
}


void __fastcall EventTradeRewardDialogComponent___c___ctor(
        EventTradeRewardDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeRewardDialogComponent___c___OnClickCloseButton_b__28_0(
        EventTradeRewardDialogComponent___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4B16FB7 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, obj);
    byte_4B16FB7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall EventTradeRewardDialogComponent___c__DisplayClass26_0___ctor(
        EventTradeRewardDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeRewardDialogComponent___c__DisplayClass26_0___Open_b__0(
        EventTradeRewardDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventTradeRewardDialogComponent_o *_4__this; // x0
  struct EventTradeRewardDialogComponent_o *v5; // x8

  if ( (byte_4B16FB8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    byte_4B16FB8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventTradeRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
}