void __fastcall ExpeditionRewardDialogComponent___ctor(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BCBA2B & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Color___TypeInfo, v3);
    byte_4BCBA2B = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_1C1AC7C(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__EndClose(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4BCBA27 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ActionExtensions_Call_bool___, method);
    byte_4BCBA27 = 1;
  }
  ExpeditionRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2EF1BAC *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C1AB78(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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
    sub_1C1AE30(0LL, v4);
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

  if ( (byte_4BCBA26 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ActionExtensions_Call_bool___, method);
    sub_1C1ABD4(&System_Action_TypeInfo, v3);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1C1ABD4(&Method_ExpeditionRewardDialogComponent_EndClose__, v8);
    sub_1C1ABD4(&Method_ExpeditionRewardDialogComponent_OnClickCloseButton__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    byte_4BCBA26 = 1;
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
                                              (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_19;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2EF1BAC *)Method_ActionExtensions_Call_bool___);
    v13 = Method_ExpeditionRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C1ABEC(Method_ExpeditionRewardDialogComponent_OnClickCloseButton__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.closeBtnSe, 0, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_19:
      sub_1C1AE30(scrollView, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70794412((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v24; // w20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCBA28 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1C1ABD4(&Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1C1ABD4(&StringLiteral_24479/*"treasurechest_btn"*/, v8);
    sub_1C1ABD4(&StringLiteral_24481/*"treasurechest_btn_on"*/, v9);
    byte_4BCBA28 = 1;
  }
  v10 = Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C1ABEC(Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24479/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24481/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1C1AE30(viewChangeButton, v12);
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
    sub_1C1AE38(viewChangeButton, v12);
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
  v25.fields.a = *p_r;
  v25.fields.b = *p_a;
  v25.fields.g = *p_b;
  v25.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v25, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v24 = 0;
  while ( v24 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v24,
                                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v24;
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
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *Component_object; // x25
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v62; // x25
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  bool v69; // w24
  int32_t v70; // w26
  ExpeditionRewardDialogComponent___c_c *v71; // x0
  System_Func_object__int__o *_9__28_0; // x25
  Il2CppObject *v73; // x27
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int v81; // w25
  UILabel_o *v82; // x27
  Il2CppObject *ComponentInChildren_object; // x28
  UILabel_o *titleLabel; // x27
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v88; // x27
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x24
  __int64 v96; // x26
  UILabel_o *totalNumLabel; // x24
  System_String_o *v98; // x27
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  Il2CppObject *v102; // x0
  Il2CppObject *v103; // x24
  System_String_o **v104; // x8
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  BattleDropItem_o *v111; // x23
  int32_t v112; // w8
  int64_t v113; // x0
  System_Array_o **v114; // x21
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  __int64 v121; // x24
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  System_Array_o *v128; // x20
  __int64 v129; // x8
  int v130; // w21
  void *monitor; // x20
  System_Action_o *v132; // x20
  __int64 v133; // x0
  bool v134; // [xsp+Ch] [xbp-84h]
  int32_t eventIda; // [xsp+1Ch] [xbp-74h]
  __int64 v136; // [xsp+20h] [xbp-70h] BYREF
  int v137; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BCBA24 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, eventExpeditionEntities);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v16);
    sub_1C1ABD4(&BattleDropItem___TypeInfo, v17);
    sub_1C1ABD4(&BattleDropItem_TypeInfo, v18);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____77566024, v19);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIGrid___, v20);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UISprite___, v21);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___, v22);
    sub_1C1ABD4(&System_Func_EventExpeditionEntity__int__TypeInfo, v23);
    sub_1C1ABD4(&int_TypeInfo, v24);
    sub_1C1ABD4(&long_TypeInfo, v25);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject___ctor__, v26);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v27);
    sub_1C1ABD4(&System_Collections_Generic_List_GameObject__TypeInfo, v28);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v29);
    sub_1C1ABD4(&Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, v30);
    sub_1C1ABD4(&Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__, v31);
    sub_1C1ABD4(&ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo, v32);
    sub_1C1ABD4(&ExpeditionRewardDialogComponent___c_TypeInfo, v33);
    sub_1C1ABD4(&StringLiteral_13692/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v34);
    sub_1C1ABD4(&StringLiteral_858/*"+"*/, v35);
    sub_1C1ABD4(&StringLiteral_5906/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, v36);
    sub_1C1ABD4(&StringLiteral_24479/*"treasurechest_btn"*/, v37);
    sub_1C1ABD4(&StringLiteral_2974/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v38);
    sub_1C1ABD4(&StringLiteral_5927/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, v39);
    sub_1C1ABD4(&StringLiteral_24485/*"treasurechest_img_bg_reward"*/, v40);
    sub_1C1ABD4(&StringLiteral_5926/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, v41);
    sub_1C1ABD4(&StringLiteral_3802/*"COMMON_CONFIRM_CLOSE"*/, v42);
    sub_1C1ABD4(&StringLiteral_5925/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, v43);
    sub_1C1ABD4(&StringLiteral_5924/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, v44);
    byte_4BCBA24 = 1;
  }
  v45 = sub_1C1AE20(ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v45, 0LL);
  if ( !v45 )
    goto LABEL_57;
  *(_QWORD *)(v45 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v45 + 16), (int64_t)this, v48, v49, v50, v51, v52, v53);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.eventRootMaskSetActiveAction,
    (int64_t)setMaskMethod,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24479/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_57;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24479/*"treasurechest_btn"*/, 0LL);
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
  v62 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v62;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resultItemObjList, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  if ( !eventExpeditionEntities )
    goto LABEL_57;
  v69 = getPointReward;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton )
    goto LABEL_57;
  v70 = *(_DWORD *)(viewChangeButton + 44);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v70, 0LL);
  v71 = ExpeditionRewardDialogComponent___c_TypeInfo;
  eventIda = eventId;
  if ( !ExpeditionRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionRewardDialogComponent___c_TypeInfo);
    v71 = ExpeditionRewardDialogComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v71->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = ExpeditionRewardDialogComponent___c_TypeInfo;
    }
    v73 = (Il2CppObject *)v71->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v73, Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, 0LL);
    static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__28_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
      (int64_t)_9__28_0,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
  }
  viewChangeButton = System_Linq_Enumerable__Sum_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                       (System_Func_TSource__int__o *)_9__28_0,
                       (const MethodInfo_2FD79F0 *)Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
  if ( !this->fields.getPointRoot )
    goto LABEL_57;
  v81 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  v134 = v69;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_2F963B8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____77566024);
  if ( !this->fields.closeButton )
    goto LABEL_57;
  v82 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_2F963B8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____77566024);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5927/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v82 )
    goto LABEL_57;
  UILabel__set_text(v82, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5906/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5925/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_57;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, v70, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v70, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24485/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24485/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5924/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_57;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v137 = v81;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v137, v89, v90, v91);
  v93 = System_String__Format(v88, v92, 0LL);
  viewChangeButton = (__int64)System_String__Concat_63040368((System_String_o *)StringLiteral_858/*"+"*/, v93, 0LL);
  if ( !getNumLabel )
    goto LABEL_57;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventIda, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v96 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5926/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_57;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v136 = v96;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v136, v99, v100, v101);
  viewChangeButton = (__int64)System_String__Format(v98, v102, 0LL);
  if ( !totalNumLabel )
    goto LABEL_57;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  v103 = UnityEngine_Component__GetComponentInChildren_object_(
           (UnityEngine_Component_o *)viewChangeButton,
           1,
           (const MethodInfo_2F963B8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____77566024);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v104 = (System_String_o **)(v134 ? &StringLiteral_13692/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/ : &StringLiteral_3802/*"COMMON_CONFIRM_CLOSE"*/);
  viewChangeButton = (__int64)LocalizationManager__Get(*v104, 0LL);
  if ( !v103 )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)v103, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v111 = (BattleDropItem_o *)sub_1C1AE20(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v111, 0LL);
  if ( !v111 )
    goto LABEL_57;
  v111->fields.type = 2;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton )
    goto LABEL_57;
  v112 = *(_DWORD *)(viewChangeButton + 44);
  v111->fields.originalNum = v81;
  v111->fields.objectId = v112;
  if ( !resultExpeditionRewardInfos
    || (v113 = sub_1C1AC7C(BattleDropItem___TypeInfo, resultExpeditionRewardInfos->max_length + 1),
        *(_QWORD *)(v45 + 24) = v113,
        v114 = (System_Array_o **)(v45 + 24),
        sub_1C1AB78((PartyOrganizationUtility_o *)(v45 + 24), v113, v115, v116, v117, v118, v119, v120),
        (v121 = *(_QWORD *)(v45 + 24)) == 0) )
  {
LABEL_57:
    sub_1C1AE30(viewChangeButton, v47);
  }
  viewChangeButton = sub_1C1AD10(v111, *(_QWORD *)(*(_QWORD *)v121 + 64LL));
  if ( !viewChangeButton )
  {
    v133 = sub_1C1AE54(0LL);
    sub_1C1ACFC(v133, 0LL);
  }
  if ( !*(_DWORD *)(v121 + 24) )
LABEL_58:
    sub_1C1AE38(viewChangeButton, v47);
  *(_QWORD *)(v121 + 32) = v111;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v121 + 32), (int64_t)v111, v122, v123, v124, v125, v126, v127);
  System_Array__Copy_63996232(
    (System_Array_o *)resultExpeditionRewardInfos,
    0,
    *v114,
    1,
    resultExpeditionRewardInfos->max_length,
    0LL);
  v128 = *v114;
  if ( !*v114 )
    goto LABEL_57;
  viewChangeButton = (__int64)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_57;
  v129 = viewChangeButton;
  viewChangeButton = (__int64)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_57;
  v130 = *(_DWORD *)(v129 + 44);
  monitor = v128[1].monitor;
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, (int)monitor > 2 * v130, 0LL);
  v132 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v132,
    (Il2CppObject *)v45,
    Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v132, 0, 0LL);
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

  if ( (byte_4BCBA29 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BCBA29 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    byte_4BC2585 = 1;
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
    sub_1C1AE30(Instance, v9);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4BCBA25 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ExpeditionRewardDialogComponent_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    byte_4BCBA25 = 1;
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
          sub_1C1AE38(this, rewards);
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
                                                      (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
        if ( !byte_4BC2141 )
        {
          this = (ExpeditionRewardDialogComponent_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, rewards);
          byte_4BC2141 = 1;
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
        v33.fields.x = v4->fields.iconScale;
        v33.fields.y = v33.fields.x;
        v33.fields.z = v33.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v33, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v17,
                                                      (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v19 = v15 <= 1 ? -1 : v15;
        v20 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_39340176((ItemIconComponent_o *)this, type, objectId, v19, 0, 0LL);
        ExpeditionRewardDialogComponent__SetPossession(v21, v20, objectId, v22);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 1, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v29 = *(_QWORD *)&this->fields.m_CachedPtr;
        v30 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v29 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v17,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = v29 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v32 + 32) = v17;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)v17, v23, v24, v25, v26, v27, v28);
        }
        this = (ExpeditionRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1C1AE30(this, rewards);
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

  if ( (byte_4BCBA2A & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCBA2A = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C1AE30(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCBA2C & 1) == 0 )
  {
    sub_1C1ABD4(&ExpeditionRewardDialogComponent___c_TypeInfo, v1);
    byte_4BCBA2C = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(ExpeditionRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ExpeditionRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionRewardDialogComponent___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)ExpeditionRewardDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, 0LL);
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
  const MethodInfo *v2; // x2
  ExpeditionRewardDialogComponent_o *_4__this; // x0
  struct ExpeditionRewardDialogComponent_o *v5; // x8

  if ( (byte_4BCBA2D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ActionExtensions_Call_bool___, method);
    byte_4BCBA2D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1C1AE30(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2EF1BAC *)Method_ActionExtensions_Call_bool___);
}