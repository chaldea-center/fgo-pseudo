void __fastcall ExpeditionRewardDialogComponent___ctor(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B1692C & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Color___TypeInfo, v3);
    byte_4B1692C = 1;
  }
  this->fields.iconScale = 0.85;
  this->fields.viewChangeButtonLabelEffectColors = (struct UnityEngine_Color_array *)sub_1BCB0A0(
                                                                                       UnityEngine_Color___TypeInfo,
                                                                                       2LL);
  sub_1BCAF9C(&this->fields.viewChangeButtonLabelEffectColors);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__EndClose(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4B16928 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    byte_4B16928 = 1;
  }
  ExpeditionRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCAF9C(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ExpeditionRewardDialogComponent__Init(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__OnClickCloseButton(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *scrollView; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *current; // x20
  System_Action_o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16927 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    sub_1BCAFF8(&System_Action_TypeInfo, v3);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1BCAFF8(&Method_ExpeditionRewardDialogComponent_EndClose__, v8);
    sub_1BCAFF8(&Method_ExpeditionRewardDialogComponent_OnClickCloseButton__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    byte_4B16927 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_19;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              scrollView,
                                              (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_19;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
    v13 = Method_ExpeditionRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCB010(Method_ExpeditionRewardDialogComponent_OnClickCloseButton__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.closeBtnSe, 0, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_19:
      sub_1BCB254(scrollView, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ExpeditionRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
  }
}


void __fastcall ExpeditionRewardDialogComponent__OnClickSwitchShowMode(
        ExpeditionRewardDialogComponent_o *this,
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
  __int64 v19; // x3
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v26; // w20
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B16929 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BCAFF8(&Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1BCAFF8(&StringLiteral_23986/*"treasurechest_btn"*/, v8);
    sub_1BCAFF8(&StringLiteral_23988/*"treasurechest_btn_on"*/, v9);
    byte_4B16929 = 1;
  }
  v10 = Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCB010(Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23986/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23988/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v16 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v16, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
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
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1BCB25C(viewChangeButton, v12, v18, v19);
  }
  if ( max_length <= 1 )
    goto LABEL_28;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_26;
LABEL_20:
  v27.fields.a = *p_r;
  v27.fields.b = *p_a;
  v27.fields.g = *p_b;
  v27.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v27, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v26 = 0;
  while ( v26 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v26,
                                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v26;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void __fastcall ExpeditionRewardDialogComponent__Open(
        ExpeditionRewardDialogComponent_o *this,
        System_Collections_Generic_List_EventExpeditionEntity__o *eventExpeditionEntities,
        BattleDropItem_array *resultExpeditionRewardInfos,
        BattleDropItem_array *resultEventRewardInfos,
        UserGameEntity_array *oldUserGame,
        int32_t eventId,
        bool getPointReward,
        System_Action_bool__o *setMaskMethod,
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
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *v45; // x22
  __int64 viewChangeButton; // x0
  __int64 v47; // x1
  Il2CppObject *Component_object; // x25
  __int64 v49; // x2
  __int64 v50; // x3
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v52; // x25
  bool v53; // w24
  int32_t v54; // w26
  ExpeditionRewardDialogComponent___c_c *v55; // x0
  System_Func_object__int__o *_9__28_0; // x25
  Il2CppObject *v57; // x27
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x0
  int v59; // w25
  UILabel_o *v60; // x27
  Il2CppObject *ComponentInChildren_object; // x28
  UILabel_o *titleLabel; // x27
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v66; // x27
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x24
  __int64 v74; // x26
  UILabel_o *totalNumLabel; // x24
  System_String_o *v76; // x27
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  Il2CppObject *v81; // x24
  System_String_o **v82; // x8
  BattleDropItem_o *v83; // x23
  int32_t v84; // w8
  System_Array_o **p_resultRewardInfos; // x21
  struct BattleDropItem_array *resultRewardInfos; // x24
  System_Array_o *v87; // x20
  __int64 v88; // x8
  int v89; // w21
  void *monitor; // x20
  System_Action_o *v91; // x20
  __int64 v92; // x0
  bool v93; // [xsp+Ch] [xbp-84h]
  int32_t eventIda; // [xsp+1Ch] [xbp-74h]
  __int64 v95; // [xsp+20h] [xbp-70h] BYREF
  int v96; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B16925 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, eventExpeditionEntities);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v16);
    sub_1BCAFF8(&BattleDropItem___TypeInfo, v17);
    sub_1BCAFF8(&BattleDropItem_TypeInfo, v18);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76937120, v19);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIGrid___, v20);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UISprite___, v21);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___, v22);
    sub_1BCAFF8(&System_Func_EventExpeditionEntity__int__TypeInfo, v23);
    sub_1BCAFF8(&int_TypeInfo, v24);
    sub_1BCAFF8(&long_TypeInfo, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v27);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v28);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v29);
    sub_1BCAFF8(&Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, v30);
    sub_1BCAFF8(&Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__, v31);
    sub_1BCAFF8(&ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo, v32);
    sub_1BCAFF8(&ExpeditionRewardDialogComponent___c_TypeInfo, v33);
    sub_1BCAFF8(&StringLiteral_13425/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v34);
    sub_1BCAFF8(&StringLiteral_798/*"+"*/, v35);
    sub_1BCAFF8(&StringLiteral_5748/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, v36);
    sub_1BCAFF8(&StringLiteral_23986/*"treasurechest_btn"*/, v37);
    sub_1BCAFF8(&StringLiteral_2810/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v38);
    sub_1BCAFF8(&StringLiteral_5769/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, v39);
    sub_1BCAFF8(&StringLiteral_23992/*"treasurechest_img_bg_reward"*/, v40);
    sub_1BCAFF8(&StringLiteral_5768/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, v41);
    sub_1BCAFF8(&StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, v42);
    sub_1BCAFF8(&StringLiteral_5767/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, v43);
    sub_1BCAFF8(&StringLiteral_5766/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, v44);
    byte_4B16925 = 1;
  }
  v45 = (ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *)sub_1BCB244(ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo);
  ExpeditionRewardDialogComponent___c__DisplayClass28_0___ctor(v45, 0LL);
  if ( !v45 )
    goto LABEL_57;
  v45->fields.__4__this = this;
  sub_1BCAF9C(&v45->fields);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1BCAF9C(&this->fields.eventRootMaskSetActiveAction);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23986/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_57;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23986/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_57;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_58;
  viewChangeButton = (__int64)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_57;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v52;
  viewChangeButton = sub_1BCAF9C(&this->fields.resultItemObjList);
  if ( !eventExpeditionEntities )
    goto LABEL_57;
  v53 = getPointReward;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton )
    goto LABEL_57;
  v54 = *(_DWORD *)(viewChangeButton + 44);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v54, 0LL);
  v55 = ExpeditionRewardDialogComponent___c_TypeInfo;
  eventIda = eventId;
  if ( !ExpeditionRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionRewardDialogComponent___c_TypeInfo);
    v55 = ExpeditionRewardDialogComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v55->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = ExpeditionRewardDialogComponent___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v55->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v57, Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, 0LL);
    static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__28_0;
    sub_1BCAF9C(&static_fields->__9__28_0);
  }
  viewChangeButton = System_Linq_Enumerable__Sum_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                       (System_Func_TSource__int__o *)_9__28_0,
                       (const MethodInfo_3055D78 *)Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
  if ( !this->fields.getPointRoot )
    goto LABEL_57;
  v59 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  v93 = v53;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_30116F8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76937120);
  if ( !this->fields.closeButton )
    goto LABEL_57;
  v60 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_30116F8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76937120);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5769/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v60 )
    goto LABEL_57;
  UILabel__set_text(v60, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5748/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5767/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_57;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, v54, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v54, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23992/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23992/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5766/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_57;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_2810/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v96 = v59;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v67, v68, v69);
  v71 = System_String__Format(v66, v70, 0LL);
  viewChangeButton = (__int64)System_String__Concat_62450424((System_String_o *)StringLiteral_798/*"+"*/, v71, 0LL);
  if ( !getNumLabel )
    goto LABEL_57;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventIda, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v74 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5768/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_57;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_2810/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v95 = v74;
  v80 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v95, v77, v78, v79);
  viewChangeButton = (__int64)System_String__Format(v76, v80, 0LL);
  if ( !totalNumLabel )
    goto LABEL_57;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  v81 = UnityEngine_Component__GetComponentInChildren_object_(
          (UnityEngine_Component_o *)viewChangeButton,
          1,
          (const MethodInfo_30116F8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76937120);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v82 = (System_String_o **)(v93 ? &StringLiteral_13425/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/ : &StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/);
  viewChangeButton = (__int64)LocalizationManager__Get(*v82, 0LL);
  if ( !v81 )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)v81, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCAF9C(&this->fields.closeCallbackFunc);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v83 = (BattleDropItem_o *)sub_1BCB244(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v83, 0LL);
  if ( !v83 )
    goto LABEL_57;
  v83->fields.type = 2;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton
    || (v84 = *(_DWORD *)(viewChangeButton + 44),
        v83->fields.originalNum = v59,
        v83->fields.objectId = v84,
        !resultExpeditionRewardInfos)
    || (v45->fields.resultRewardInfos = (struct BattleDropItem_array *)sub_1BCB0A0(
                                                                         BattleDropItem___TypeInfo,
                                                                         resultExpeditionRewardInfos->max_length + 1),
        p_resultRewardInfos = (System_Array_o **)&v45->fields.resultRewardInfos,
        viewChangeButton = sub_1BCAF9C(&v45->fields.resultRewardInfos),
        (resultRewardInfos = v45->fields.resultRewardInfos) == 0LL) )
  {
LABEL_57:
    sub_1BCB254(viewChangeButton, v47);
  }
  viewChangeButton = sub_1BCB134(v83, resultRewardInfos->obj.klass->_1.element_class);
  if ( !viewChangeButton )
  {
    v92 = sub_1BCB278();
    sub_1BCB120(v92, 0LL);
  }
  if ( !resultRewardInfos->max_length )
LABEL_58:
    sub_1BCB25C(viewChangeButton, v47, v49, v50);
  resultRewardInfos->m_Items[0] = v83;
  sub_1BCAF9C(resultRewardInfos->m_Items);
  System_Array__Copy_64111288(
    (System_Array_o *)resultExpeditionRewardInfos,
    0,
    *p_resultRewardInfos,
    1,
    resultExpeditionRewardInfos->max_length,
    0LL);
  v87 = *p_resultRewardInfos;
  if ( !*p_resultRewardInfos )
    goto LABEL_57;
  viewChangeButton = (__int64)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_57;
  v88 = viewChangeButton;
  viewChangeButton = (__int64)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_57;
  v89 = *(_DWORD *)(v88 + 44);
  monitor = v87[1].monitor;
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, (int)monitor > 2 * v89, 0LL);
  v91 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v91,
    (Il2CppObject *)v45,
    Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__SetPossession(
        ExpeditionRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1692A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1692A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                objectId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_16:
    sub_1BCB254(Instance, v9);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__SetResultData(
        ExpeditionRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ExpeditionRewardDialogComponent_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  signed int max_length; // w8
  __int64 v11; // x26
  BattleDropItem_o *v12; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v15; // x10
  int v16; // w29
  Il2CppObject *prefabResultItem; // x22
  ExpeditionRewardDialogComponent_o *v18; // x22
  ExpeditionRewardDialogComponent_o *v19; // x25
  int32_t v20; // w3
  ItemIconComponent_o *v21; // x25
  ExpeditionRewardDialogComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4B16926 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    this = (ExpeditionRewardDialogComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    byte_4B16926 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      do
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1BCB25C(this, rewards, method, v3);
        v12 = rewards->m_Items[v11];
        if ( !v12 )
          goto LABEL_31;
        type = v12->fields.type;
        objectId = v12->fields.objectId;
        v15 = 44LL;
        if ( v12->fields.originalNum > 0 )
          v15 = 52LL;
        v16 = *(_DWORD *)((char *)&v12->klass + v15);
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                      prefabResultItem,
                                                      (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v18 = this;
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v18,
                                                      0LL);
        v19 = this;
        if ( !byte_4B16191 )
        {
          this = (ExpeditionRewardDialogComponent_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, rewards);
          byte_4B16191 = 1;
        }
        if ( !v19 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v19,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v18,
                                                      0LL);
        if ( !this )
          goto LABEL_31;
        v28.fields.x = v5->fields.iconScale;
        v28.fields.y = v28.fields.x;
        v28.fields.z = v28.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v28, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v18,
                                                      (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v20 = v16 <= 1 ? -1 : v16;
        v21 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_40107980((ItemIconComponent_o *)this, type, objectId, v20, 0, 0LL);
        ExpeditionRewardDialogComponent__SetPossession(v22, v21, objectId, v23);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, 1, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v24 = *(_QWORD *)&this->fields.m_CachedPtr;
        v25 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v24 )
          goto LABEL_31;
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
          sub_1BCAF9C(v27 + 32);
        }
        this = (ExpeditionRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this
          || (this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1BCB254(this, rewards);
        }
        this = (ExpeditionRewardDialogComponent_o *)((__int64 (__fastcall *)(ExpeditionRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                      this,
                                                      this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v11;
      }
      while ( (int)v11 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall ExpeditionRewardDialogComponent__get_closeBtnObject(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B1692B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1692B = 1;
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


void __fastcall ExpeditionRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B1692E & 1) == 0 )
  {
    sub_1BCAFF8(&ExpeditionRewardDialogComponent___c_TypeInfo, v1);
    byte_4B1692E = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ExpeditionRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ExpeditionRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionRewardDialogComponent___c_o *)v2;
  sub_1BCAF9C(ExpeditionRewardDialogComponent___c_TypeInfo->static_fields);
}


void __fastcall ExpeditionRewardDialogComponent___c___ctor(
        ExpeditionRewardDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ExpeditionRewardDialogComponent___c___Open_b__28_0(
        ExpeditionRewardDialogComponent___c_o *this,
        EventExpeditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.eventPoint;
}


void __fastcall ExpeditionRewardDialogComponent___c__DisplayClass28_0___ctor(
        ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent___c__DisplayClass28_0___Open_b__1(
        ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  ExpeditionRewardDialogComponent_o *_4__this; // x0
  struct ExpeditionRewardDialogComponent_o *v4; // x8

  if ( (byte_4B1692F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    byte_4B1692F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, 0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(_4__this, method);
  }
  v4->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v4->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
}