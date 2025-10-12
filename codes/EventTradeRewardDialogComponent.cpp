void EventTradeRewardDialogComponent___ctor(EventTradeRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0

  if ( (byte_4C3244F & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&UnityEngine_Color___TypeInfo);
    byte_4C3244F = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1C32CC8(UnityEngine_Color___TypeInfo, 2);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1C32BC4(&this->fields.viewChangeButtonLabelEffectColors, v3);
  this->fields.maxItemDrawNum = 12;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradeRewardDialogComponent__EndClose(EventTradeRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4C3244B & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool___);
    byte_4C3244B = 1;
  }
  EventTradeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_3029BF0 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C32BC4(&this->fields.closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void EventTradeRewardDialogComponent__Init(EventTradeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v4);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradeRewardDialogComponent__OnClickCloseButton(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  EventTradeRewardDialogComponent___c_c *v6; // x0
  System_Action_object__o *_9__28_0; // x21
  Il2CppObject *v8; // x22
  struct EventTradeRewardDialogComponent___c_StaticFields *static_fields; // x0
  System_Action_o *v10; // x20

  if ( (byte_4C3244A & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool___);
    sub_1C32C20(&System_Action_GameObject__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventTradeRewardDialogComponent_EndClose__);
    sub_1C32C20(&Method_EventTradeRewardDialogComponent_OnClickCloseButton__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C32C20(&Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__28_0__);
    sub_1C32C20(&EventTradeRewardDialogComponent___c_TypeInfo);
    byte_4C3244A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_3029BF0 *)Method_ActionExtensions_Call_bool___);
    v3 = Method_EventTradeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventTradeRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    v6 = EventTradeRewardDialogComponent___c_TypeInfo;
    if ( !EventTradeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeRewardDialogComponent___c_TypeInfo);
      v6 = EventTradeRewardDialogComponent___c_TypeInfo;
    }
    _9__28_0 = (System_Action_object__o *)v6->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = EventTradeRewardDialogComponent___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__28_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(
        _9__28_0,
        v8,
        Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__28_0__,
        0);
      static_fields = EventTradeRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = (struct System_Action_GameObject__o *)_9__28_0;
      v6 = (EventTradeRewardDialogComponent___c_c *)sub_1C32BC4(&static_fields->__9__28_0, _9__28_0);
    }
    if ( !resultItemObjList )
      sub_1C32E7C(v6);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (System_Action_T__o *)_9__28_0,
      (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
    v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_EventTradeRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0);
  }
}


void EventTradeRewardDialogComponent__OnClickSwitchShowMode(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v7; // x8
  UISprite_o *v8; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x10
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x11
  float *p_a; // x10
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  System_Action_object__o *v17; // x21
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3244C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_GameObject__TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1C32C20(&Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__30_0__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C32C20(&StringLiteral_24198/*"treasurechest_btn"*/);
    sub_1C32C20(&StringLiteral_24200/*"treasurechest_btn_on"*/);
    byte_4C3244C = 1;
  }
  v3 = Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_22;
  v7 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24198/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24200/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v7, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_22;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_22;
  v8 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v8, normalSprite, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_22:
    sub_1C32E7C(viewChangeButton);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !viewChangeButton )
        goto LABEL_22;
      goto LABEL_20;
    }
LABEL_23:
    sub_1C32E84(viewChangeButton);
  }
  if ( max_length <= 1 )
    goto LABEL_23;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_22;
LABEL_20:
  v18.fields.a = *p_a;
  v18.fields.b = *p_b;
  v18.fields.g = *p_g;
  v18.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v18, 0);
  resultItemObjList = this->fields.resultItemObjList;
  v17 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__30_0__,
    0);
  if ( !resultItemObjList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)resultItemObjList,
    (System_Action_T__o *)v17,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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
  Il2CppObject *v16; // x23
  void *viewChangeButton; // x0
  Il2CppObject *Component_object; // x28
  System_Collections_Generic_List_object__o *v19; // x28
  UILabel_o *titleLabel; // x28
  System_String_o *v21; // x0
  Il2CppObject *Empty; // x1
  UISprite_o *totalEventPointIcon; // x27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x27
  UILabel_o *getTitleLabel; // x27
  UILabel_o *getNumLabel; // x27
  System_String_o *v28; // x28
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  int32_t v37; // w25
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x27
  int64_t v40; // x28
  UILabel_o *totalNumLabel; // x27
  System_String_o *v42; // x29
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  Il2CppObject *v49; // x0
  System_String_o **v50; // x21
  UILabel_o *v51; // x24
  BattleDropItem_o *v52; // x24
  __int64 v53; // x0
  System_Array_o **p_monitor; // x21
  _DWORD *monitor; // x22
  int32_t maxItemDrawNum; // w20
  void *v57; // x21
  System_Action_o *v58; // x20
  __int64 v59; // x0
  bool v60; // [xsp+4h] [xbp-8Ch]
  int64_t v63; // [xsp+20h] [xbp-70h] BYREF
  int32_t v64; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C32448 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BattleDropItem___TypeInfo);
    sub_1C32C20(&BattleDropItem_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78081936);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&Method_EventTradeRewardDialogComponent___c__DisplayClass26_0__Open_b__0__);
    sub_1C32C20(&EventTradeRewardDialogComponent___c__DisplayClass26_0_TypeInfo);
    sub_1C32C20(&StringLiteral_13539/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_1C32C20(&StringLiteral_803/*"+"*/);
    sub_1C32C20(&StringLiteral_13491/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_13496/*"TRADE_EVENT_TOTAL_POINT_NUM"*/);
    sub_1C32C20(&StringLiteral_24198/*"treasurechest_btn"*/);
    sub_1C32C20(&StringLiteral_13538/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/);
    sub_1C32C20(&StringLiteral_2826/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C32C20(&StringLiteral_24204/*"treasurechest_img_bg_reward"*/);
    sub_1C32C20(&StringLiteral_13472/*"TRADE_EVENT_GET_POINT_NUM"*/);
    sub_1C32C20(&StringLiteral_13492/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/);
    byte_4C32448 = 1;
  }
  v16 = (Il2CppObject *)sub_1C32E6C(EventTradeRewardDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v16, 0);
  if ( !v16 )
    goto LABEL_52;
  v16[1].klass = (Il2CppClass *)this;
  v60 = isReceiveAll;
  sub_1C32BC4(&v16[1], this);
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_52;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24198/*"treasurechest_btn"*/, 0);
  this->fields.isShowPossessionNum = 0;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v19;
  sub_1C32BC4(&this->fields.resultItemObjList, v19);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13491/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/, 0);
  if ( !eventTradeGoodsEntity || (Empty = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0 )
    Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  viewChangeButton = System_String__Format(v21, Empty, 0);
  if ( !titleLabel )
    goto LABEL_52;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24204/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24204/*"treasurechest_img_bg_reward"*/, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24198/*"treasurechest_btn"*/, 0);
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13492/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !viewChangeButtonLabel )
    goto LABEL_52;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13472/*"TRADE_EVENT_GET_POINT_NUM"*/, 0);
  if ( !getTitleLabel )
    goto LABEL_52;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0);
  getNumLabel = this->fields.getNumLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2826/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v64 = eventPoint;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v29, v30, v31, v32, v33, v34);
  v36 = System_String__Format(v28, v35, 0);
  viewChangeButton = System_String__Concat_63518544((System_String_o *)StringLiteral_803/*"+"*/, v36, 0);
  if ( !getNumLabel )
    goto LABEL_52;
  v37 = eventPoint;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v40 = EventPointNoGroup;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13496/*"TRADE_EVENT_TOTAL_POINT_NUM"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_52;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2826/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v63 = v40;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v63, v43, v44, v45, v46, v47, v48);
  viewChangeButton = System_String__Format(v42, v49, 0);
  if ( !totalNumLabel )
    goto LABEL_52;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       eventId,
                       (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( pointRewards && pointRewards->max_length )
  {
    v50 = (System_String_o **)&StringLiteral_13539/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( !viewChangeButton )
      goto LABEL_52;
    v50 = (System_String_o **)&StringLiteral_13539/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
    if ( v60 | !EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0, 0) )
      v50 = (System_String_o **)&StringLiteral_13538/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
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
                       (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78081936);
  if ( !viewChangeButton )
    goto LABEL_52;
  if ( !*((_DWORD *)viewChangeButton + 6) )
    goto LABEL_53;
  v51 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = LocalizationManager__Get(*v50, 0);
  if ( !v51 )
    goto LABEL_52;
  UILabel__set_text(v51, (System_String_o *)viewChangeButton, 0);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C32BC4(&this->fields.closeCallbackFunc, closeCallback);
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v52 = (BattleDropItem_o *)sub_1C32E6C(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v52, 0);
  if ( !v52 )
    goto LABEL_52;
  v52->fields.type = 2;
  v52->fields.objectId = eventPointItemId;
  v52->fields.originalNum = v37;
  if ( !infos
    || (v53 = sub_1C32CC8(BattleDropItem___TypeInfo, (unsigned int)(LODWORD(infos->max_length) + 1)),
        v16[1].monitor = (void *)v53,
        p_monitor = (System_Array_o **)&v16[1].monitor,
        viewChangeButton = (void *)sub_1C32BC4(&v16[1].monitor, v53),
        (monitor = v16[1].monitor) == 0) )
  {
LABEL_52:
    sub_1C32E7C(viewChangeButton);
  }
  viewChangeButton = (void *)sub_1C32D5C(v52, *(_QWORD *)(*(_QWORD *)monitor + 64LL));
  if ( !viewChangeButton )
  {
    v59 = sub_1C32EA0();
    sub_1C32D48(v59, 0);
  }
  if ( !monitor[6] )
LABEL_53:
    sub_1C32E84(viewChangeButton);
  *((_QWORD *)monitor + 4) = v52;
  sub_1C32BC4(monitor + 8, v52);
  System_Array__Copy_65180592((System_Array_o *)infos, 0, *p_monitor, 1, infos->max_length, 0);
  if ( !*p_monitor )
    goto LABEL_52;
  viewChangeButton = this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_52;
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v57 = (*p_monitor)[1].monitor;
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, maxItemDrawNum < (int)v57, 0);
  v58 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v58, v16, Method_EventTradeRewardDialogComponent___c__DisplayClass26_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0, 0);
}


void EventTradeRewardDialogComponent__SetPossession(
        EventTradeRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v7; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3244D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3244D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_17;
  v7 = (NetworkManager_c *)UserItemMaster__TryGetEntity(
                             (UserItemMaster_o *)Master_object,
                             &entity,
                             v7->static_fields->userIdNumber,
                             objectId,
                             0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_17:
    sub_1C32E7C(v7);
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
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v10; // x10
  int v11; // w29
  UnityEngine_Transform_o *listRoot; // x22
  Il2CppObject *prefabResultItem; // x25
  EventTradeRewardDialogComponent_o *v14; // x22
  EventTradeRewardDialogComponent_o *v15; // x25
  int v16; // w8
  ItemIconComponent_o *v17; // x25
  EventTradeRewardDialogComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v23; // x8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C32449 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    this = (EventTradeRewardDialogComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32449 = 1;
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
          sub_1C32E84(this);
        v7 = rewards->m_Items[v6];
        if ( !v7 )
          break;
        type = v7->fields.type;
        objectId = v7->fields.objectId;
        v10 = 44;
        if ( v7->fields.originalNum > 0 )
          v10 = 52;
        v11 = *(_DWORD *)((char *)&v7->klass + v10);
        listRoot = v4->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__51812484(
                                                      prefabResultItem,
                                                      listRoot,
                                                      (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
        if ( !this )
          break;
        v14 = this;
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
        v15 = this;
        if ( !byte_4C313D1 )
        {
          this = (EventTradeRewardDialogComponent_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D1 = 1;
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
        v24.fields.x = v4->fields.iconScale;
        v24.fields.y = v24.fields.x;
        v24.fields.z = v24.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v24, 0);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v14,
                                                      (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v16 = v11 <= 1 ? -1 : v11;
        v17 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_40822420((ItemIconComponent_o *)this, type, objectId, v16, 0, 0);
        EventTradeRewardDialogComponent__SetPossession(v18, v17, objectId, v19);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v14, 1, 0);
        this = (EventTradeRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v21 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v14,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v14;
          this = (EventTradeRewardDialogComponent_o *)sub_1C32BC4(v23 + 32, v14);
        }
        max_length = rewards->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_27;
      }
LABEL_32:
      sub_1C32E7C(this);
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
                                                  (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( !this )
      goto LABEL_32;
    ((void (__fastcall *)(EventTradeRewardDialogComponent_o *, const char *))this->klass[1]._1.name)(
      this,
      this->klass[1]._1.namespaze);
  }
}


void EventTradeRewardDialogComponent___OnClickSwitchShowMode_b__30_0(
        EventTradeRewardDialogComponent_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  EventTradeRewardDialogComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4C32450 & 1) == 0 )
  {
    this = (EventTradeRewardDialogComponent_o *)sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    byte_4C32450 = 1;
  }
  if ( !item
    || (this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      item,
                                                      (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___)) == 0 )
  {
    sub_1C32E7C(this);
  }
  ItemIconComponent__ShowPossession((ItemIconComponent_o *)this, v4->fields.isShowPossessionNum, 0);
}


UnityEngine_GameObject_o *EventTradeRewardDialogComponent__get_closeBtnObject(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3244E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3244E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void EventTradeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C32451 & 1) == 0 )
  {
    sub_1C32C20(&EventTradeRewardDialogComponent___c_TypeInfo);
    byte_4C32451 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventTradeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradeRewardDialogComponent___c_o *)v1;
  sub_1C32BC4(EventTradeRewardDialogComponent___c_TypeInfo->static_fields, v1);
}


void EventTradeRewardDialogComponent___c___ctor(EventTradeRewardDialogComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeRewardDialogComponent___c___OnClickCloseButton_b__28_0(
        EventTradeRewardDialogComponent___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4C32452 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32452 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)obj, 0);
  }
}


void EventTradeRewardDialogComponent___c__DisplayClass26_0___ctor(
        EventTradeRewardDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeRewardDialogComponent___c__DisplayClass26_0___Open_b__0(
        EventTradeRewardDialogComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventTradeRewardDialogComponent_o *_4__this; // x0
  struct EventTradeRewardDialogComponent_o *v5; // x8

  if ( (byte_4C32453 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool___);
    byte_4C32453 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventTradeRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(_4__this);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_3029BF0 *)Method_ActionExtensions_Call_bool___);
}