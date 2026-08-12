void EventTradeRewardDialogComponent___ctor(EventTradeRewardDialogComponent_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct UnityEngine_Color_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  BaseDialog_c *v13; // x0

  if ( (byte_596AD8C & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    byte_596AD8C = 1;
  }
  v3 = UnityEngine_Color___TypeInfo;
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_2213B20(v3, 2);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v13 = BaseDialog_TypeInfo;
  this->fields.maxItemDrawNum = 12;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, v11, v12);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradeRewardDialogComponent__EndClose(EventTradeRewardDialogComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  EventTradeRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void EventTradeRewardDialogComponent__Init(EventTradeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradeRewardDialogComponent__OnClickCloseButton(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  EventTradeRewardDialogComponent___c_c *v7; // x0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  struct EventTradeRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__27_0; // x21
  Il2CppObject *v11; // x22
  struct EventTradeRewardDialogComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Action_o *v19; // x20

  if ( (byte_596AD88 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventTradeRewardDialogComponent_EndClose__);
    sub_2213A60(&Method_EventTradeRewardDialogComponent_OnClickCloseButton__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_2213A60(&Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__27_0__);
    sub_2213A60(&EventTradeRewardDialogComponent___c_TypeInfo);
    byte_596AD88 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventTradeRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v7 = EventTradeRewardDialogComponent___c_TypeInfo;
    resultItemObjList = this->fields.resultItemObjList;
    if ( !*(&EventTradeRewardDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventTradeRewardDialogComponent___c_TypeInfo, v5, v6);
      v7 = EventTradeRewardDialogComponent___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__27_0 = (System_Action_object__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v5, v6);
        static_fields = EventTradeRewardDialogComponent___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(
        _9__27_0,
        v11,
        Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__27_0__,
        0);
      v12 = EventTradeRewardDialogComponent___c_TypeInfo->static_fields;
      v12->__9__27_0 = (struct System_Action_GameObject__o *)_9__27_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__27_0, (int32_t)_9__27_0, v13, v14, v15, v16, v17, v18);
    }
    if ( !resultItemObjList )
      sub_2213CDC(v7, v5);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (System_Action_T__o *)_9__27_0,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
    v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_EventTradeRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v19, 0);
  }
}


void EventTradeRewardDialogComponent__OnClickSwitchShowMode(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v8; // x8
  UISprite_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  System_Action_object__o *v19; // x21
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596AD89 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__);
    sub_2213A60(&Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__29_0__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_2213A60(&StringLiteral_25511/*"treasurechest_btn"*/);
    sub_2213A60(&StringLiteral_25513/*"treasurechest_btn_on"*/);
    byte_596AD89 = 1;
  }
  v3 = Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton
    || (isShowPossessionNum
      ? (v8 = (System_String_o **)&StringLiteral_25511/*"treasurechest_btn"*/)
      : (v8 = (System_String_o **)&StringLiteral_25513/*"treasurechest_btn_on"*/),
        (UIButton__set_normalSprite(viewChangeButton, *v8, 0), (viewChangeButton = this->fields.viewChangeButton) == 0)
     || (viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)viewChangeButton,
                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___),
         !this->fields.viewChangeButton)) )
  {
LABEL_23:
    sub_2213CDC(viewChangeButton, v5);
  }
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
  AtlasManager__SetEventUI(v9, normalSprite, 0);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !viewChangeButtonLabelEffectColors )
      goto LABEL_23;
    if ( LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !viewChangeButton )
        goto LABEL_23;
      goto LABEL_21;
    }
LABEL_24:
    sub_2213CE4(viewChangeButton);
  }
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_23;
  if ( (viewChangeButtonLabelEffectColors->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_24;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_23;
LABEL_21:
  v20.fields.a = *p_a;
  v20.fields.b = *p_b;
  v20.fields.g = *p_g;
  v20.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v20, 0);
  resultItemObjList = this->fields.resultItemObjList;
  v19 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__29_0__,
    0);
  if ( !resultItemObjList )
    goto LABEL_23;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)resultItemObjList,
    (System_Action_T__o *)v19,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void EventTradeRewardDialogComponent__Open(
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
  __int64 v17; // x23
  void *viewChangeButton; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *Component_object; // x28
  System_Collections_Generic_List_GameObject__c *v29; // x0
  System_Collections_Generic_List_object__o *v30; // x28
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x2
  UILabel_o *titleLabel; // x28
  System_String_o *v40; // x0
  int32_t v41; // w26
  Il2CppObject *name; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  UISprite_o *totalEventPointIcon; // x27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  UILabel_o *viewChangeButtonLabel; // x27
  UILabel_o *getTitleLabel; // x27
  UILabel_o *getNumLabel; // x27
  System_String_o *v52; // x28
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x27
  int64_t v57; // x28
  UILabel_o *totalNumLabel; // x27
  System_String_o *v59; // x29
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  System_String_o **v63; // x21
  __int64 v64; // x2
  UILabel_o *v65; // x24
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  BattleDropItem_o *v72; // x24
  __int64 v73; // x0
  System_Array_o **v74; // x21
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  __int64 v81; // x22
  __int64 v82; // x1
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  int32_t maxItemDrawNum; // w20
  void *monitor; // x21
  System_Action_o *v91; // x20
  __int64 v92; // x0
  BattleDropItem_array *v93; // [xsp+20h] [xbp-80h]
  int64_t v95; // [xsp+30h] [xbp-70h] BYREF
  int32_t v96; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_596AD86 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleDropItem___TypeInfo);
    sub_2213A60(&BattleDropItem_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_EventTradeRewardDialogComponent___c__DisplayClass25_0__Open_b__0__);
    sub_2213A60(&EventTradeRewardDialogComponent___c__DisplayClass25_0_TypeInfo);
    sub_2213A60(&StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_14049/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_14054/*"TRADE_EVENT_TOTAL_POINT_NUM"*/);
    sub_2213A60(&StringLiteral_25511/*"treasurechest_btn"*/);
    sub_2213A60(&StringLiteral_14096/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/);
    sub_2213A60(&StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_2213A60(&StringLiteral_25517/*"treasurechest_img_bg_reward"*/);
    sub_2213A60(&StringLiteral_14030/*"TRADE_EVENT_GET_POINT_NUM"*/);
    sub_2213A60(&StringLiteral_14050/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/);
    byte_596AD86 = 1;
  }
  v17 = sub_2213CCC(EventTradeRewardDialogComponent___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_52;
  v93 = pointRewards;
  *(_QWORD *)(v17 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_52;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26, v27);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_25511/*"treasurechest_btn"*/, 0);
  v29 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields.isShowPossessionNum = 0;
  v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultItemObjList,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_14049/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/, 0);
  v41 = eventPoint;
  if ( !eventTradeGoodsEntity || (name = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0 )
    name = **(Il2CppObject ***)(qword_5984390 + 184);
  viewChangeButton = System_String__Format(v40, name, 0);
  if ( !titleLabel )
    goto LABEL_52;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43, v44);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_25517/*"treasurechest_img_bg_reward"*/, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_25511/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_52;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    goto LABEL_53;
  viewChangeButton = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_52;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_14050/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !viewChangeButtonLabel )
    goto LABEL_52;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_14030/*"TRADE_EVENT_GET_POINT_NUM"*/, 0);
  if ( !getTitleLabel )
    goto LABEL_52;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0);
  getNumLabel = this->fields.getNumLabel;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v96 = eventPoint;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v96);
  v54 = System_String__Format(v52, v53, 0);
  viewChangeButton = System_String__Concat_75651716((System_String_o *)StringLiteral_861/*"+"*/, v54, 0);
  if ( !getNumLabel )
    goto LABEL_52;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v57 = EventPointNoGroup;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_14054/*"TRADE_EVENT_TOTAL_POINT_NUM"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_52;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v95 = v57;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v95);
  viewChangeButton = System_String__Format(v59, v60, 0);
  if ( !totalNumLabel )
    goto LABEL_52;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61, v62);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       eventId,
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( v93 && v93->max_length )
  {
    v63 = (System_String_o **)&StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( !viewChangeButton )
      goto LABEL_52;
    v63 = (System_String_o **)&StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
    if ( isReceiveAll | !EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0, 0) )
      v63 = (System_String_o **)&StringLiteral_14096/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  }
  viewChangeButton = this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = UnityEngine_Component__GetComponentsInChildren_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       1,
                       (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
  if ( !viewChangeButton )
    goto LABEL_52;
  if ( !*((_DWORD *)viewChangeButton + 6) )
    goto LABEL_53;
  v65 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v64);
  viewChangeButton = LocalizationManager__Get(*v63, 0);
  if ( !v65 )
    goto LABEL_52;
  UILabel__set_text(v65, (System_String_o *)viewChangeButton, 0);
  this->fields.closeCallbackFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeCallback,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v72 = (BattleDropItem_o *)sub_2213CCC(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v72, 0);
  if ( !v72 )
    goto LABEL_52;
  v72->fields.originalNum = v41;
  v72->fields.type = 2;
  v72->fields.objectId = eventPointItemId;
  if ( !infos
    || (v73 = sub_2213B20(BattleDropItem___TypeInfo, (unsigned int)(LODWORD(infos->max_length) + 1)),
        *(_QWORD *)(v17 + 24) = v73,
        v74 = (System_Array_o **)(v17 + 24),
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 24), v73, v75, v76, v77, v78, v79, v80),
        (v81 = *(_QWORD *)(v17 + 24)) == 0) )
  {
LABEL_52:
    sub_2213CDC(viewChangeButton, v19);
  }
  viewChangeButton = (void *)sub_2213BB4(v72, *(_QWORD *)(*(_QWORD *)v81 + 64LL));
  if ( !viewChangeButton )
  {
    v92 = sub_2213D00(0, v82);
    sub_2213BA0(v92, 0);
  }
  if ( !*(_DWORD *)(v81 + 24) )
LABEL_53:
    sub_2213CE4(viewChangeButton);
  *(_QWORD *)(v81 + 32) = v72;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v81 + 32), (int32_t)v72, v83, v84, v85, v86, v87, v88);
  System_Array__Copy_77291440((System_Array_o *)infos, 0, *v74, 1, infos->max_length, 0);
  if ( !*v74 )
    goto LABEL_52;
  viewChangeButton = this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_52;
  maxItemDrawNum = this->fields.maxItemDrawNum;
  monitor = (*v74)[1].monitor;
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, maxItemDrawNum < (int)monitor, 0);
  v91 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v91,
    (Il2CppObject *)v17,
    Method_EventTradeRewardDialogComponent___c__DisplayClass25_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventTradeRewardDialogComponent__SetPossession(
        EventTradeRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int v6; // w8
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v10; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596AD8A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596AD8A = 1;
  }
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, *(_QWORD *)&objectId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_17;
  v10 = (NetworkManager_c *)UserItemMaster__TryGetEntity(
                              (UserItemMaster_o *)Master_object,
                              &entity,
                              v10->static_fields->userIdNumber,
                              objectId,
                              0);
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_17:
    sub_2213CDC(v10, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0);
}


void EventTradeRewardDialogComponent__SetResultData(
        EventTradeRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  EventTradeRewardDialogComponent_o *v4; // x19
  int max_length; // w8
  __int64 v6; // x26
  BattleDropItem_o *v7; // x8
  Il2CppObject *prefabResultItem; // x22
  UnityEngine_Transform_o *listRoot; // x25
  __int64 v10; // x9
  int32_t objectId; // w23
  int32_t type; // w24
  int v13; // w28
  EventTradeRewardDialogComponent_o *v14; // x22
  EventTradeRewardDialogComponent_o *v15; // x25
  int v16; // w8
  ItemIconComponent_o *v17; // x25
  EventTradeRewardDialogComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596AD87 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    this = (EventTradeRewardDialogComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AD87 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v6 >= max_length )
          sub_2213CE4(this);
        v7 = rewards->m_Items[v6];
        if ( !v7 )
          break;
        listRoot = v4->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        v10 = 44;
        if ( v7->fields.originalNum > 0 )
          v10 = 52;
        type = v7->fields.type;
        objectId = v7->fields.objectId;
        v13 = *(_DWORD *)((char *)&v7->klass + v10);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards, method);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__59717116(
                                                      prefabResultItem,
                                                      listRoot,
                                                      (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
        if ( !this )
          break;
        v14 = this;
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
        v15 = this;
        if ( !byte_5969AE0 )
        {
          this = (EventTradeRewardDialogComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v15 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v15,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v14,
                                                      0);
        if ( !this )
          break;
        v30.fields.x = v4->fields.iconScale;
        v30.fields.y = v30.fields.x;
        v30.fields.z = v30.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v30, 0);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v14,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v16 = v13 <= 1 ? -1 : v13;
        v17 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)this, type, objectId, v16, 0, 0);
        EventTradeRewardDialogComponent__SetPossession(v18, v17, objectId, v19);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v14, 1, 0);
        this = (EventTradeRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v27 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v14,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v29 + 32) = v14;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)v14, v20, v21, v22, v23, v24, v25);
        }
        max_length = rewards->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_27;
      }
LABEL_32:
      sub_2213CDC(this, rewards);
    }
LABEL_27:
    this = (EventTradeRewardDialogComponent_o *)v4->fields.scrollView;
    if ( !this )
      goto LABEL_32;
    UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
    this = (EventTradeRewardDialogComponent_o *)v4->fields.listRoot;
    if ( !this )
      goto LABEL_32;
    this = (EventTradeRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( !this )
      goto LABEL_32;
    ((void (__fastcall *)(EventTradeRewardDialogComponent_o *, const char *))this->klass[1]._1.name)(
      this,
      this->klass[1]._1.namespaze);
  }
}


void EventTradeRewardDialogComponent___OnClickSwitchShowMode_b__29_0(
        EventTradeRewardDialogComponent_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  EventTradeRewardDialogComponent_o *v4; // x19

  v4 = this;
  if ( (byte_596AD8D & 1) == 0 )
  {
    this = (EventTradeRewardDialogComponent_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    byte_596AD8D = 1;
  }
  if ( !item
    || (this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      item,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___)) == 0 )
  {
    sub_2213CDC(this, item);
  }
  ItemIconComponent__ShowPossession((ItemIconComponent_o *)this, v4->fields.isShowPossessionNum, 0);
}


UnityEngine_GameObject_o *EventTradeRewardDialogComponent__get_closeBtnObject(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596AD8B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AD8B = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void EventTradeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AD8E & 1) == 0 )
  {
    sub_2213A60(&EventTradeRewardDialogComponent___c_TypeInfo);
    byte_596AD8E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventTradeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradeRewardDialogComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventTradeRewardDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeRewardDialogComponent___c___ctor(EventTradeRewardDialogComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeRewardDialogComponent___c___OnClickCloseButton_b__27_0(
        EventTradeRewardDialogComponent___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596AD8F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AD8F = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)obj, 0);
  }
}


void EventTradeRewardDialogComponent___c__DisplayClass25_0___ctor(
        EventTradeRewardDialogComponent___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeRewardDialogComponent___c__DisplayClass25_0___Open_b__0(
        EventTradeRewardDialogComponent___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventTradeRewardDialogComponent_o *_4__this; // x0
  struct EventTradeRewardDialogComponent_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventTradeRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  v5->fields.state = 2;
}