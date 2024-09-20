void __fastcall EventTradeRewardDialogComponent___ctor(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0

  if ( (byte_4A563C6 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&UnityEngine_Color___TypeInfo);
    byte_4A563C6 = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1B88658(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1B88554(&this->fields.viewChangeButtonLabelEffectColors, v3);
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

  if ( (byte_4A563C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A563C2 = 1;
  }
  EventTradeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B88554(&this->fields.closeCallbackFunc, 0LL);
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

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__OnClickCloseButton(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  EventTradeRewardDialogComponent___c_c *v7; // x0
  System_Action_object__o *_9__28_0; // x21
  Il2CppObject *v9; // x22
  struct EventTradeRewardDialogComponent___c_StaticFields *static_fields; // x0
  System_Action_o *v11; // x20

  if ( (byte_4A563C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&System_Action_GameObject__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradeRewardDialogComponent_EndClose__);
    sub_1B885B0(&Method_EventTradeRewardDialogComponent_OnClickCloseButton__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1B885B0(&Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__28_0__);
    sub_1B885B0(&EventTradeRewardDialogComponent___c_TypeInfo);
    byte_4A563C1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
    v3 = Method_EventTradeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    v7 = EventTradeRewardDialogComponent___c_TypeInfo;
    if ( !EventTradeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeRewardDialogComponent___c_TypeInfo);
      v7 = EventTradeRewardDialogComponent___c_TypeInfo;
    }
    _9__28_0 = (System_Action_object__o *)v7->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = EventTradeRewardDialogComponent___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__28_0 = (System_Action_object__o *)sub_1B887FC(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(
        _9__28_0,
        v9,
        Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__28_0__,
        0LL);
      static_fields = EventTradeRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = (struct System_Action_GameObject__o *)_9__28_0;
      v7 = (EventTradeRewardDialogComponent___c_c *)sub_1B88554(&static_fields->__9__28_0, _9__28_0);
    }
    if ( !resultItemObjList )
      sub_1B8880C(v7, v5);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (System_Action_T__o *)_9__28_0,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
    v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_EventTradeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall EventTradeRewardDialogComponent__OnClickSwitchShowMode(
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
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x10
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x9
  float *p_a; // x11
  float *p_r; // x10
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  System_Action_object__o *v18; // x21
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A563C3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_GameObject__TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1B885B0(&Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__30_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1B885B0(&StringLiteral_24065/*"treasurechest_btn"*/);
    sub_1B885B0(&StringLiteral_24067/*"treasurechest_btn_on"*/);
    byte_4A563C3 = 1;
  }
  v3 = Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_22;
  v8 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24065/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24067/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v8, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_22;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_22;
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v9, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_22:
    sub_1B8880C(viewChangeButton, v5);
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
    sub_1B88814(viewChangeButton, v5);
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
  v19.fields.a = *p_r;
  v19.fields.b = *p_a;
  v19.fields.g = *p_b;
  v19.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v19, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  v18 = (System_Action_object__o *)sub_1B887FC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__30_0__,
    0LL);
  if ( !resultItemObjList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)resultItemObjList,
    (System_Action_T__o *)v18,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


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
  Il2CppObject *v16; // x21
  void *viewChangeButton; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x28
  System_Collections_Generic_List_object__o *v20; // x28
  UILabel_o *titleLabel; // x28
  System_String_o *v22; // x0
  int32_t v23; // w26
  Il2CppObject *Empty; // x1
  UISprite_o *totalEventPointIcon; // x27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x27
  UILabel_o *getTitleLabel; // x27
  UILabel_o *getNumLabel; // x27
  System_String_o *v30; // x28
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x27
  __int64 v38; // x28
  UILabel_o *totalNumLabel; // x27
  System_String_o *v40; // x29
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  __int64 *v45; // x21
  UILabel_o *v46; // x24
  BattleDropItem_o *v47; // x24
  __int64 v48; // x0
  System_Array_o **p_monitor; // x21
  _DWORD *monitor; // x22
  int32_t maxItemDrawNum; // w20
  void *v52; // x21
  System_Action_o *v53; // x20
  __int64 v54; // x0
  Il2CppObject *v55; // [xsp+10h] [xbp-90h]
  __int64 v58; // [xsp+30h] [xbp-70h] BYREF
  int32_t v59; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4A563BF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BattleDropItem___TypeInfo);
    sub_1B885B0(&BattleDropItem_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76107632);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_EventTradeRewardDialogComponent___c__DisplayClass26_0__Open_b__0__);
    sub_1B885B0(&EventTradeRewardDialogComponent___c__DisplayClass26_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13447/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    sub_1B885B0(&StringLiteral_13401/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_13406/*"TRADE_EVENT_TOTAL_POINT_NUM"*/);
    sub_1B885B0(&StringLiteral_24065/*"treasurechest_btn"*/);
    sub_1B885B0(&StringLiteral_13446/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/);
    sub_1B885B0(&StringLiteral_2943/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1B885B0(&StringLiteral_24071/*"treasurechest_img_bg_reward"*/);
    sub_1B885B0(&StringLiteral_13382/*"TRADE_EVENT_GET_POINT_NUM"*/);
    sub_1B885B0(&StringLiteral_13402/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/);
    byte_4A563BF = 1;
  }
  v16 = (Il2CppObject *)sub_1B887FC(EventTradeRewardDialogComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_52;
  v55 = v16;
  v16[1].klass = (Il2CppClass *)this;
  sub_1B88554(&v16[1], this);
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_52;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24065/*"treasurechest_btn"*/, 0LL);
  this->fields.isShowPossessionNum = 0;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_1B88554(&this->fields.resultItemObjList, v20);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13401/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/, 0LL);
  v23 = eventPoint;
  if ( !eventTradeGoodsEntity || (Empty = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0LL )
    Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  viewChangeButton = System_String__Format(v22, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_52;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24071/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24071/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24065/*"treasurechest_btn"*/, 0LL);
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
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13402/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_52;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13382/*"TRADE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_52;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2943/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v59 = eventPoint;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v31, v32, v33);
  v35 = System_String__Format(v30, v34, 0LL);
  viewChangeButton = System_String__Concat_61707032((System_String_o *)StringLiteral_860/*"+"*/, v35, 0LL);
  if ( !getNumLabel )
    goto LABEL_52;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v38 = EventPointNoGroup;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13406/*"TRADE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_52;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2943/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v58 = v38;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v58, v41, v42, v43);
  viewChangeButton = System_String__Format(v40, v44, 0LL);
  if ( !totalNumLabel )
    goto LABEL_52;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       eventId,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( pointRewards && *(_QWORD *)&pointRewards->max_length )
  {
    v45 = &StringLiteral_13447/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( !viewChangeButton )
      goto LABEL_52;
    v45 = &StringLiteral_13447/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
    if ( isReceiveAll | !EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0LL, 0LL) )
      v45 = &StringLiteral_13446/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
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
                       (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76107632);
  if ( !viewChangeButton )
    goto LABEL_52;
  if ( !*((_DWORD *)viewChangeButton + 6) )
    goto LABEL_53;
  v46 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v45, 0LL);
  if ( !v46 )
    goto LABEL_52;
  UILabel__set_text(v46, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B88554(&this->fields.closeCallbackFunc, closeCallback);
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v47 = (BattleDropItem_o *)sub_1B887FC(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v47, 0LL);
  if ( !v47 )
    goto LABEL_52;
  v47->fields.type = 2;
  v47->fields.objectId = eventPointItemId;
  v47->fields.originalNum = v23;
  if ( !infos
    || (v48 = sub_1B88658(BattleDropItem___TypeInfo, infos->max_length + 1),
        v55[1].monitor = (void *)v48,
        p_monitor = (System_Array_o **)&v55[1].monitor,
        viewChangeButton = (void *)sub_1B88554(&v55[1].monitor, v48),
        (monitor = v55[1].monitor) == 0LL) )
  {
LABEL_52:
    sub_1B8880C(viewChangeButton, v18);
  }
  viewChangeButton = (void *)sub_1B886EC(v47, *(_QWORD *)(*(_QWORD *)monitor + 64LL));
  if ( !viewChangeButton )
  {
    v54 = sub_1B88830();
    sub_1B886D8(v54, 0LL);
  }
  if ( !monitor[6] )
LABEL_53:
    sub_1B88814(viewChangeButton, v18);
  *((_QWORD *)monitor + 4) = v47;
  sub_1B88554(monitor + 8, v47);
  System_Array__Copy_62662400((System_Array_o *)infos, 0, *p_monitor, 1, infos->max_length, 0LL);
  if ( !*p_monitor )
    goto LABEL_52;
  viewChangeButton = this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_52;
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v52 = (*p_monitor)[1].monitor;
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, maxItemDrawNum < (int)v52, 0LL);
  v53 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v53, v55, Method_EventTradeRewardDialogComponent___c__DisplayClass26_0__Open_b__0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__SetPossession(
        EventTradeRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v8; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A563C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A563C4 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_13;
  UserId = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &entity, UserId, objectId, 0LL);
  if ( (UserId & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_13:
    sub_1B8880C(UserId, v8);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__SetResultData(
        EventTradeRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  EventTradeRewardDialogComponent_o *v4; // x19
  signed int max_length; // w8
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
  int32_t v16; // w3
  ItemIconComponent_o *v17; // x25
  EventTradeRewardDialogComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A563C0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this = (EventTradeRewardDialogComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A563C0 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1B88814(this, rewards);
        v7 = rewards->m_Items[v6];
        if ( !v7 )
          break;
        type = v7->fields.type;
        objectId = v7->fields.objectId;
        v10 = 44LL;
        if ( v7->fields.originalNum > 0 )
          v10 = 52LL;
        v11 = *(_DWORD *)((char *)&v7->klass + v10);
        listRoot = v4->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__49297800(
                                                      prefabResultItem,
                                                      listRoot,
                                                      (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
        if ( !this )
          break;
        v14 = this;
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        v15 = this;
        if ( !byte_4A55CE1 )
        {
          this = (EventTradeRewardDialogComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v15 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v15,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v14,
                                                      0LL);
        if ( !this )
          break;
        v24.fields.x = v4->fields.iconScale;
        v24.fields.y = v24.fields.x;
        v24.fields.z = v24.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v24, 0LL);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v14,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v16 = v11 <= 1 ? -1 : v11;
        v17 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)this, type, objectId, v16, 0, 0LL);
        EventTradeRewardDialogComponent__SetPossession(v18, v17, objectId, v19);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v14, 1, 0LL);
        this = (EventTradeRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          break;
        v20 = *(_QWORD *)&this->fields.m_CachedPtr;
        v21 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v20 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v14,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v14;
          this = (EventTradeRewardDialogComponent_o *)sub_1B88554(v23 + 32, v14);
        }
        max_length = rewards->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_27;
      }
LABEL_32:
      sub_1B8880C(this, rewards);
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
                                                  (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
  if ( (byte_4A563C7 & 1) == 0 )
  {
    this = (EventTradeRewardDialogComponent_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    byte_4A563C7 = 1;
  }
  if ( !item
    || (this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      item,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___)) == 0LL )
  {
    sub_1B8880C(this, item);
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

  if ( (byte_4A563C5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A563C5 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventTradeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A563C8 & 1) == 0 )
  {
    sub_1B885B0(&EventTradeRewardDialogComponent___c_TypeInfo);
    byte_4A563C8 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventTradeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTradeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradeRewardDialogComponent___c_o *)v1;
  sub_1B88554(EventTradeRewardDialogComponent___c_TypeInfo->static_fields, v1);
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
  if ( (byte_4A563C9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A563C9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)obj, 0LL);
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

  if ( (byte_4A563CA & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A563CA = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventTradeRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
}