void __fastcall ExpeditionRewardDialogComponent___ctor(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B0631F & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Color___TypeInfo, v3);
    byte_4B0631F = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_1BC30B0(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v4, v5, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__EndClose(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4B0631B & 1) == 0 )
  {
    sub_1BC3008(&Method_ActionExtensions_Call_bool___, method);
    byte_4B0631B = 1;
  }
  ExpeditionRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F513BC *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BC2FAC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
    sub_1BC3264(0LL, v4);
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

  if ( (byte_4B0631A & 1) == 0 )
  {
    sub_1BC3008(&Method_ActionExtensions_Call_bool___, method);
    sub_1BC3008(&System_Action_TypeInfo, v3);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1BC3008(&Method_ExpeditionRewardDialogComponent_EndClose__, v8);
    sub_1BC3008(&Method_ExpeditionRewardDialogComponent_OnClickCloseButton__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    byte_4B0631A = 1;
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
                                              (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_19;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2F513BC *)Method_ActionExtensions_Call_bool___);
    v13 = Method_ExpeditionRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BC3020(Method_ExpeditionRewardDialogComponent_OnClickCloseButton__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.closeBtnSe, 0, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_19:
      sub_1BC3264(scrollView, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v25; // w20
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B0631C & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BC3008(&Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1BC3008(&StringLiteral_23964/*"treasurechest_btn"*/, v8);
    sub_1BC3008(&StringLiteral_23966/*"treasurechest_btn_on"*/, v9);
    byte_4B0631C = 1;
  }
  v10 = Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BC3020(Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23964/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23966/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1BC3264(viewChangeButton, v12);
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
    sub_1BC326C(viewChangeButton, v12, v18);
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
  v26.fields.a = *p_r;
  v26.fields.b = *p_a;
  v26.fields.g = *p_b;
  v26.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v26, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v25 = 0;
  while ( v25 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v25,
                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v25;
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
  __int64 v45; // x22
  __int64 viewChangeButton; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *Component_object; // x25
  __int64 v53; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v55; // x25
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  bool v58; // w24
  int32_t v59; // w26
  ExpeditionRewardDialogComponent___c_c *v60; // x0
  System_Func_object__int__o *_9__28_0; // x25
  Il2CppObject *v62; // x27
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int v66; // w25
  UILabel_o *v67; // x27
  Il2CppObject *ComponentInChildren_object; // x28
  UILabel_o *titleLabel; // x27
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v73; // x27
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x24
  __int64 v81; // x26
  UILabel_o *totalNumLabel; // x24
  System_String_o *v83; // x27
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  Il2CppObject *v88; // x24
  System_String_o **v89; // x8
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  BattleDropItem_o *v92; // x23
  int32_t v93; // w8
  __int64 v94; // x0
  System_Array_o **v95; // x21
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  __int64 v98; // x24
  const MethodInfo *v99; // x3
  System_Array_o *v100; // x20
  __int64 v101; // x8
  int v102; // w21
  void *monitor; // x20
  System_Action_o *v104; // x20
  __int64 v105; // x0
  bool v106; // [xsp+Ch] [xbp-84h]
  int32_t eventIda; // [xsp+1Ch] [xbp-74h]
  __int64 v108; // [xsp+20h] [xbp-70h] BYREF
  int v109; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B06318 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, eventExpeditionEntities);
    sub_1BC3008(&AtlasManager_TypeInfo, v16);
    sub_1BC3008(&BattleDropItem___TypeInfo, v17);
    sub_1BC3008(&BattleDropItem_TypeInfo, v18);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76831424, v19);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIGrid___, v20);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UISprite___, v21);
    sub_1BC3008(&Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___, v22);
    sub_1BC3008(&System_Func_EventExpeditionEntity__int__TypeInfo, v23);
    sub_1BC3008(&int_TypeInfo, v24);
    sub_1BC3008(&long_TypeInfo, v25);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v26);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v27);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v28);
    sub_1BC3008(&LocalizationManager_TypeInfo, v29);
    sub_1BC3008(&Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, v30);
    sub_1BC3008(&Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__, v31);
    sub_1BC3008(&ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo, v32);
    sub_1BC3008(&ExpeditionRewardDialogComponent___c_TypeInfo, v33);
    sub_1BC3008(&StringLiteral_13413/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v34);
    sub_1BC3008(&StringLiteral_798/*"+"*/, v35);
    sub_1BC3008(&StringLiteral_5744/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, v36);
    sub_1BC3008(&StringLiteral_23964/*"treasurechest_btn"*/, v37);
    sub_1BC3008(&StringLiteral_2808/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v38);
    sub_1BC3008(&StringLiteral_5765/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, v39);
    sub_1BC3008(&StringLiteral_23970/*"treasurechest_img_bg_reward"*/, v40);
    sub_1BC3008(&StringLiteral_5764/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, v41);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v42);
    sub_1BC3008(&StringLiteral_5763/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, v43);
    sub_1BC3008(&StringLiteral_5762/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, v44);
    byte_4B06318 = 1;
  }
  v45 = sub_1BC3254(ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo);
  ExpeditionRewardDialogComponent___c__DisplayClass28_0___ctor(
    (ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_57;
  *(_QWORD *)(v45 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 16), (int32_t)this, v48, v49);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventRootMaskSetActiveAction, (int32_t)setMaskMethod, v50, v51);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23964/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_57;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23964/*"treasurechest_btn"*/, 0LL);
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
  v55 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v55;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.resultItemObjList, (int32_t)v55, v56, v57);
  if ( !eventExpeditionEntities )
    goto LABEL_57;
  v58 = getPointReward;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton )
    goto LABEL_57;
  v59 = *(_DWORD *)(viewChangeButton + 44);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v59, 0LL);
  v60 = ExpeditionRewardDialogComponent___c_TypeInfo;
  eventIda = eventId;
  if ( !ExpeditionRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionRewardDialogComponent___c_TypeInfo);
    v60 = ExpeditionRewardDialogComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v60->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = ExpeditionRewardDialogComponent___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v62, Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, 0LL);
    static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__28_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v64, v65);
  }
  viewChangeButton = System_Linq_Enumerable__Sum_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                       (System_Func_TSource__int__o *)_9__28_0,
                       (const MethodInfo_303D0CC *)Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
  if ( !this->fields.getPointRoot )
    goto LABEL_57;
  v66 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  v106 = v58;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_2FF8AB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76831424);
  if ( !this->fields.closeButton )
    goto LABEL_57;
  v67 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_2FF8AB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76831424);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v67 )
    goto LABEL_57;
  UILabel__set_text(v67, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5744/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_57;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, v59, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v59, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23970/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23970/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5762/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_57;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_2808/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v109 = v66;
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109, v74, v75, v76);
  v78 = System_String__Format(v73, v77, 0LL);
  viewChangeButton = (__int64)System_String__Concat_62348648((System_String_o *)StringLiteral_798/*"+"*/, v78, 0LL);
  if ( !getNumLabel )
    goto LABEL_57;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventIda, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v81 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_57;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_2808/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v108 = v81;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v108, v84, v85, v86);
  viewChangeButton = (__int64)System_String__Format(v83, v87, 0LL);
  if ( !totalNumLabel )
    goto LABEL_57;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  v88 = UnityEngine_Component__GetComponentInChildren_object_(
          (UnityEngine_Component_o *)viewChangeButton,
          1,
          (const MethodInfo_2FF8AB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76831424);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v89 = (System_String_o **)(v106 ? &StringLiteral_13413/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/ : &StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/);
  viewChangeButton = (__int64)LocalizationManager__Get(*v89, 0LL);
  if ( !v88 )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)v88, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v90, v91);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v92 = (BattleDropItem_o *)sub_1BC3254(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v92, 0LL);
  if ( !v92 )
    goto LABEL_57;
  v92->fields.type = 2;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton )
    goto LABEL_57;
  v93 = *(_DWORD *)(viewChangeButton + 44);
  v92->fields.originalNum = v66;
  v92->fields.objectId = v93;
  if ( !resultExpeditionRewardInfos
    || (v94 = sub_1BC30B0(BattleDropItem___TypeInfo, resultExpeditionRewardInfos->max_length + 1),
        *(_QWORD *)(v45 + 24) = v94,
        v95 = (System_Array_o **)(v45 + 24),
        sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 24), v94, v96, v97),
        (v98 = *(_QWORD *)(v45 + 24)) == 0) )
  {
LABEL_57:
    sub_1BC3264(viewChangeButton, v47);
  }
  viewChangeButton = sub_1BC3144(v92, *(_QWORD *)(*(_QWORD *)v98 + 64LL));
  if ( !viewChangeButton )
  {
    v105 = sub_1BC3288(0LL);
    sub_1BC3130(v105, 0LL);
  }
  if ( !*(_DWORD *)(v98 + 24) )
LABEL_58:
    sub_1BC326C(viewChangeButton, v47, v53);
  *(_QWORD *)(v98 + 32) = v92;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v98 + 32), (int32_t)v92, v53, v99);
  System_Array__Copy_64009512(
    (System_Array_o *)resultExpeditionRewardInfos,
    0,
    *v95,
    1,
    resultExpeditionRewardInfos->max_length,
    0LL);
  v100 = *v95;
  if ( !*v95 )
    goto LABEL_57;
  viewChangeButton = (__int64)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_57;
  v101 = viewChangeButton;
  viewChangeButton = (__int64)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_57;
  v102 = *(_DWORD *)(v101 + 44);
  monitor = v100[1].monitor;
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, (int)monitor > 2 * v102, 0LL);
  v104 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v104,
    (Il2CppObject *)v45,
    Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v104, 0, 0LL);
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

  if ( (byte_4B0631D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B0631D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v9);
    byte_4AFC1F1 = 1;
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
    sub_1BC3264(Instance, v9);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__SetResultData(
        ExpeditionRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  ExpeditionRewardDialogComponent_o *v4; // x20
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
  Il2CppObject *prefabResultItem; // x22
  ExpeditionRewardDialogComponent_o *v17; // x22
  ExpeditionRewardDialogComponent_o *v18; // x25
  int32_t v19; // w3
  ItemIconComponent_o *v20; // x25
  ExpeditionRewardDialogComponent_o *v21; // x0
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v28; // x8
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B06319 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ExpeditionRewardDialogComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4B06319 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( (unsigned int)v10 >= max_length )
          sub_1BC326C(this, rewards, method);
        v11 = rewards->m_Items[v10];
        if ( !v11 )
          goto LABEL_31;
        type = v11->fields.type;
        objectId = v11->fields.objectId;
        v14 = 44LL;
        if ( v11->fields.originalNum > 0 )
          v14 = 52LL;
        v15 = *(_DWORD *)((char *)&v11->klass + v14);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                      prefabResultItem,
                                                      (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v17 = this;
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v17,
                                                      0LL);
        v18 = this;
        if ( !byte_4AFBDB1 )
        {
          this = (ExpeditionRewardDialogComponent_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, rewards);
          byte_4AFBDB1 = 1;
        }
        if ( !v18 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v18,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v17,
                                                      0LL);
        if ( !this )
          goto LABEL_31;
        v29.fields.x = v4->fields.iconScale;
        v29.fields.y = v29.fields.x;
        v29.fields.z = v29.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v29, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v17,
                                                      (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v19 = v15 <= 1 ? -1 : v15;
        v20 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_39952716((ItemIconComponent_o *)this, type, objectId, v19, 0, 0LL);
        ExpeditionRewardDialogComponent__SetPossession(v21, v20, objectId, v22);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 1, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v25 = *(_QWORD *)&this->fields.m_CachedPtr;
        v26 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v25 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v17,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = v25 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v28 + 32) = v17;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v28 + 32), (int32_t)v17, v23, v24);
        }
        this = (ExpeditionRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1BC3264(this, rewards);
        }
        this = (ExpeditionRewardDialogComponent_o *)((__int64 (__fastcall *)(ExpeditionRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                      this,
                                                      this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v10;
      }
      while ( (int)v10 < max_length );
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

  if ( (byte_4B0631E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0631E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFC472 & 1) == 0 )
  {
    sub_1BC3008(&ExpeditionRewardDialogComponent___c_TypeInfo, v1);
    byte_4AFC472 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ExpeditionRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ExpeditionRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionRewardDialogComponent___c_o *)v2;
  sub_1BC2FAC(ExpeditionRewardDialogComponent___c_TypeInfo->static_fields);
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
    sub_1BC3264(this, 0LL);
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

  if ( (byte_4AFC473 & 1) == 0 )
  {
    sub_1BC3008(&Method_ActionExtensions_Call_bool___, method);
    byte_4AFC473 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, 0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_1BC3264(_4__this, method);
  }
  v4->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v4->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F513BC *)Method_ActionExtensions_Call_bool___);
}