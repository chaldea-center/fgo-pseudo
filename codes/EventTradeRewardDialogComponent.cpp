void __fastcall EventTradeRewardDialogComponent___ctor(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Color_array *v6; // x0
  __int64 v7; // x1

  if ( (byte_4B112EA & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v4, v5);
    byte_4B112EA = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1BCA784(&this->fields.viewChangeButtonLabelEffectColors, v6);
  this->fields.maxItemDrawNum = 12;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v7);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__EndClose(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4B112E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B112E6 = 1;
  }
  EventTradeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__OnClickCloseButton(
        EventTradeRewardDialogComponent_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  EventTradeRewardDialogComponent___c_c *v24; // x0
  System_Action_object__o *_9__28_0; // x21
  Il2CppObject *v26; // x22
  struct EventTradeRewardDialogComponent___c_StaticFields *static_fields; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x20

  if ( (byte_4B112E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    sub_1BCA7E0(&System_Action_GameObject__TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventTradeRewardDialogComponent_EndClose__, v8, v9);
    sub_1BCA7E0(&Method_EventTradeRewardDialogComponent_OnClickCloseButton__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ForEach__, v12, v13);
    sub_1BCA7E0(&Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__28_0__, v14, v15);
    sub_1BCA7E0(&EventTradeRewardDialogComponent___c_TypeInfo, v16, v17);
    byte_4B112E5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
    v18 = Method_EventTradeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1BCA7F8(Method_EventTradeRewardDialogComponent_OnClickCloseButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    v24 = EventTradeRewardDialogComponent___c_TypeInfo;
    if ( !EventTradeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeRewardDialogComponent___c_TypeInfo, v20);
      v24 = EventTradeRewardDialogComponent___c_TypeInfo;
    }
    _9__28_0 = (System_Action_object__o *)v24->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24, v20);
        v24 = EventTradeRewardDialogComponent___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__28_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, v20, v21, v22);
      System_Action_object____ctor(
        _9__28_0,
        v26,
        Method_EventTradeRewardDialogComponent___c__OnClickCloseButton_b__28_0__,
        0LL);
      static_fields = EventTradeRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = (struct System_Action_GameObject__o *)_9__28_0;
      v24 = (EventTradeRewardDialogComponent___c_c *)sub_1BCA784(&static_fields->__9__28_0, _9__28_0);
    }
    if ( !resultItemObjList )
      sub_1BCAA3C(v24, v20);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (System_Action_T__o *)_9__28_0,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_GameObject__ForEach__);
    v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_EventTradeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v31, 0LL);
  }
}


void __fastcall EventTradeRewardDialogComponent__OnClickSwitchShowMode(
        EventTradeRewardDialogComponent_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v23; // x8
  UISprite_o *v24; // x20
  __int64 v25; // x1
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x10
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x9
  float *p_a; // x11
  float *p_r; // x10
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_object__o *v37; // x21
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B112E7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameObject__TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v6, v7);
    sub_1BCA7E0(&Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__, v8, v9);
    sub_1BCA7E0(&Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__30_0__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ForEach__, v12, v13);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24319/*"treasurechest_btn_on"*/, v16, v17);
    byte_4B112E7 = 1;
  }
  v18 = Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_EventTradeRewardDialogComponent_OnClickSwitchShowMode__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_22;
  v23 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24317/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24319/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v23, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_22;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_22;
  v24 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v24, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_22:
    sub_1BCAA3C(viewChangeButton, v20);
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
    sub_1BCAA44(viewChangeButton, v20);
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
  v38.fields.a = *p_r;
  v38.fields.b = *p_a;
  v38.fields.g = *p_b;
  v38.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v38, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  v37 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, v34, v35, v36);
  System_Action_object____ctor(
    v37,
    (Il2CppObject *)this,
    Method_EventTradeRewardDialogComponent__OnClickSwitchShowMode_b__30_0__,
    0LL);
  if ( !resultItemObjList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)resultItemObjList,
    (System_Action_T__o *)v37,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  Il2CppObject *v68; // x21
  void *viewChangeButton; // x0
  __int64 v70; // x1
  __int64 v71; // x1
  Il2CppObject *Component_object; // x28
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Collections_Generic_List_object__o *v76; // x28
  __int64 v77; // x1
  UILabel_o *titleLabel; // x28
  System_String_o *v79; // x0
  int32_t v80; // w26
  Il2CppObject *Empty; // x1
  __int64 v82; // x1
  UISprite_o *totalEventPointIcon; // x27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v85; // x1
  UILabel_o *viewChangeButtonLabel; // x27
  UILabel_o *getTitleLabel; // x27
  UILabel_o *getNumLabel; // x27
  System_String_o *v89; // x28
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x27
  __int64 v94; // x28
  UILabel_o *totalNumLabel; // x27
  System_String_o *v96; // x29
  Il2CppObject *v97; // x0
  __int64 v98; // x1
  __int64 *v99; // x21
  UILabel_o *v100; // x24
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  BattleDropItem_o *v104; // x24
  __int64 v105; // x0
  System_Array_o **p_monitor; // x21
  _DWORD *monitor; // x22
  int32_t maxItemDrawNum; // w20
  void *v109; // x21
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  System_Action_o *v113; // x20
  __int64 v114; // x0
  Il2CppObject *v115; // [xsp+10h] [xbp-90h]
  __int64 v118; // [xsp+30h] [xbp-70h] BYREF
  int32_t v119; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4B112E3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventPoint, *(_QWORD *)&eventPointItemId);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&BattleDropItem___TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleDropItem_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v26, v27);
    sub_1BCA7E0(&DataManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v30, v31);
    sub_1BCA7E0(&int_TypeInfo, v32, v33);
    sub_1BCA7E0(&long_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v38, v39);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v40, v41);
    sub_1BCA7E0(&string_TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_EventTradeRewardDialogComponent___c__DisplayClass26_0__Open_b__0__, v44, v45);
    sub_1BCA7E0(&EventTradeRewardDialogComponent___c__DisplayClass26_0_TypeInfo, v46, v47);
    sub_1BCA7E0(&StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_13564/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_13569/*"TRADE_EVENT_TOTAL_POINT_NUM"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_13609/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_24323/*"treasurechest_img_bg_reward"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_13545/*"TRADE_EVENT_GET_POINT_NUM"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_13565/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, v66, v67);
    byte_4B112E3 = 1;
  }
  v68 = (Il2CppObject *)sub_1BCAA2C(
                          EventTradeRewardDialogComponent___c__DisplayClass26_0_TypeInfo,
                          *(_QWORD *)&eventPoint,
                          *(_QWORD *)&eventPointItemId,
                          *(_QWORD *)&eventId);
  System_Object___ctor(v68, 0LL);
  if ( !v68 )
    goto LABEL_52;
  v115 = v68;
  v68[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v68[1], this);
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_52;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  this->fields.isShowPossessionNum = 0;
  v76 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v73,
                                                       v74,
                                                       v75);
  System_Collections_Generic_List_object____ctor(
    v76,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v76;
  sub_1BCA784(&this->fields.resultItemObjList, v76);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_13564/*"TRADE_EVENT_REWARD_DIALOG_TITLE"*/, 0LL);
  v80 = eventPoint;
  if ( !eventTradeGoodsEntity || (Empty = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0LL )
    Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  viewChangeButton = System_String__Format(v79, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_52;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v82);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_52;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v85);
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13565/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_52;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13545/*"TRADE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_52;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v119 = eventPoint;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
  v91 = System_String__Format(v89, v90, 0LL);
  viewChangeButton = System_String__Concat_62401220((System_String_o *)StringLiteral_855/*"+"*/, v91, 0LL);
  if ( !getNumLabel )
    goto LABEL_52;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v94 = EventPointNoGroup;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_13569/*"TRADE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_52;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v118 = v94;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v118);
  viewChangeButton = System_String__Format(v96, v97, 0LL);
  if ( !totalNumLabel )
    goto LABEL_52;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v98);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_52;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       eventId,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( pointRewards && *(_QWORD *)&pointRewards->max_length )
  {
    v99 = &StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( !viewChangeButton )
      goto LABEL_52;
    v99 = &StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
    if ( isReceiveAll | !EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0LL, 0LL) )
      v99 = &StringLiteral_13609/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
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
                       (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144);
  if ( !viewChangeButton )
    goto LABEL_52;
  if ( !*((_DWORD *)viewChangeButton + 6) )
    goto LABEL_53;
  v100 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70);
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v99, 0LL);
  if ( !v100 )
    goto LABEL_52;
  UILabel__set_text(v100, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCA784(&this->fields.closeCallbackFunc, closeCallback);
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v104 = (BattleDropItem_o *)sub_1BCAA2C(BattleDropItem_TypeInfo, v101, v102, v103);
  BattleDropItem___ctor(v104, 0LL);
  if ( !v104 )
    goto LABEL_52;
  v104->fields.type = 2;
  v104->fields.objectId = eventPointItemId;
  v104->fields.originalNum = v80;
  if ( !infos
    || (v105 = sub_1BCA888(BattleDropItem___TypeInfo, infos->max_length + 1),
        v115[1].monitor = (void *)v105,
        p_monitor = (System_Array_o **)&v115[1].monitor,
        viewChangeButton = (void *)sub_1BCA784(&v115[1].monitor, v105),
        (monitor = v115[1].monitor) == 0LL) )
  {
LABEL_52:
    sub_1BCAA3C(viewChangeButton, v70);
  }
  viewChangeButton = (void *)sub_1BCA91C(v104, *(_QWORD *)(*(_QWORD *)monitor + 64LL));
  if ( !viewChangeButton )
  {
    v114 = sub_1BCAA60();
    sub_1BCA908(v114, 0LL);
  }
  if ( !monitor[6] )
LABEL_53:
    sub_1BCAA44(viewChangeButton, v70);
  *((_QWORD *)monitor + 4) = v104;
  sub_1BCA784(monitor + 8, v104);
  System_Array__Copy_63356916((System_Array_o *)infos, 0, *p_monitor, 1, infos->max_length, 0LL);
  if ( !*p_monitor )
    goto LABEL_52;
  viewChangeButton = this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_52;
  maxItemDrawNum = this->fields.maxItemDrawNum;
  v109 = (*p_monitor)[1].monitor;
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, maxItemDrawNum < (int)v109, 0LL);
  v113 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v110, v111, v112);
  System_Action___ctor(v113, v115, Method_EventTradeRewardDialogComponent___c__DisplayClass26_0__Open_b__0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v113, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeRewardDialogComponent__SetPossession(
        EventTradeRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v13; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B112E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, item, *(_QWORD *)&objectId);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B112E8 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_13;
  UserId = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &entity, UserId, objectId, 0LL);
  if ( (UserId & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_13:
    sub_1BCAA3C(UserId, v13);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall EventTradeRewardDialogComponent__SetResultData(
        EventTradeRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  EventTradeRewardDialogComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  signed int max_length; // w8
  __int64 v14; // x26
  BattleDropItem_o *v15; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v18; // x10
  int v19; // w29
  UnityEngine_Transform_o *listRoot; // x22
  Il2CppObject *prefabResultItem; // x25
  EventTradeRewardDialogComponent_o *v22; // x22
  __int64 v23; // x2
  EventTradeRewardDialogComponent_o *v24; // x25
  int32_t v25; // w3
  ItemIconComponent_o *v26; // x25
  EventTradeRewardDialogComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B112E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v9, v10);
    this = (EventTradeRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B112E4 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= max_length )
          sub_1BCAA44(this, rewards);
        v15 = rewards->m_Items[v14];
        if ( !v15 )
          break;
        type = v15->fields.type;
        objectId = v15->fields.objectId;
        v18 = 44LL;
        if ( v15->fields.originalNum > 0 )
          v18 = 52LL;
        v19 = *(_DWORD *)((char *)&v15->klass + v18);
        listRoot = v4->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                      prefabResultItem,
                                                      listRoot,
                                                      (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        if ( !this )
          break;
        v22 = this;
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        v24 = this;
        if ( !byte_4B109C1 )
        {
          this = (EventTradeRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, rewards, v23);
          byte_4B109C1 = 1;
        }
        if ( !v24 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v24,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v22,
                                                      0LL);
        if ( !this )
          break;
        v33.fields.x = v4->fields.iconScale;
        v33.fields.y = v33.fields.x;
        v33.fields.z = v33.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v33, 0LL);
        this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v22,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v25 = v19 <= 1 ? -1 : v19;
        v26 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, type, objectId, v25, 0, 0LL);
        EventTradeRewardDialogComponent__SetPossession(v27, v26, objectId, v28);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22, 1, 0LL);
        this = (EventTradeRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          break;
        v29 = *(_QWORD *)&this->fields.m_CachedPtr;
        v30 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v29 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v22,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = v29 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v32 + 32) = v22;
          this = (EventTradeRewardDialogComponent_o *)sub_1BCA784(v32 + 32, v22);
        }
        max_length = rewards->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_27;
      }
LABEL_32:
      sub_1BCAA3C(this, rewards);
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
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
  if ( (byte_4B112EB & 1) == 0 )
  {
    this = (EventTradeRewardDialogComponent_o *)sub_1BCA7E0(
                                                  &Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___,
                                                  item,
                                                  method);
    byte_4B112EB = 1;
  }
  if ( !item
    || (this = (EventTradeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      item,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___)) == 0LL )
  {
    sub_1BCAA3C(this, item);
  }
  ItemIconComponent__ShowPossession((ItemIconComponent_o *)this, v4->fields.isShowPossessionNum, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventTradeRewardDialogComponent__get_closeBtnObject(
        EventTradeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B112E9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B112E9 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall EventTradeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B112EC & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradeRewardDialogComponent___c_TypeInfo, v1, v2);
    byte_4B112EC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventTradeRewardDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventTradeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventTradeRewardDialogComponent___c_o *)v4;
  sub_1BCA784(EventTradeRewardDialogComponent___c_TypeInfo->static_fields, v4);
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
  __int64 v4; // x1

  if ( (byte_4B112ED & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, method);
    byte_4B112ED = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)obj, 0LL);
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

  if ( (byte_4B112EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B112EE = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventTradeRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
}