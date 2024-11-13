void __fastcall ExpeditionRewardDialogComponent___ctor(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Color_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1

  if ( (byte_4B1A09C & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v4, v5);
    byte_4B1A09C = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v13);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__EndClose(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4B1A098 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B1A098 = 1;
  }
  ExpeditionRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v11->fields.m_target)(
      v11->fields.original_method_info,
      *(_QWORD *)&v11->fields.extra_arg);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__OnClickCloseButton(
        ExpeditionRewardDialogComponent_o *this,
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Component_o *scrollView; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x20
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x20
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1A097 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_ExpeditionRewardDialogComponent_EndClose__, v14, v15);
    sub_1BCA7E0(&Method_ExpeditionRewardDialogComponent_OnClickCloseButton__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    byte_4B1A097 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_19;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              scrollView,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_19;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
    v23 = Method_ExpeditionRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1BCA7F8(Method_ExpeditionRewardDialogComponent_OnClickCloseButton__);
    v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
    OverwriteAssetSoundName__PlaySystemSe(v24, this->fields.closeBtnSe, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_19:
      sub_1BCAA3C(scrollView, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v32.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
        UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_ExpeditionRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v31, 0LL);
  }
}


void __fastcall ExpeditionRewardDialogComponent__OnClickSwitchShowMode(
        ExpeditionRewardDialogComponent_o *this,
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
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v33; // w20
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1A099 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12, v13);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24319/*"treasurechest_btn_on"*/, v16, v17);
    byte_4B1A099 = 1;
  }
  v18 = Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_ExpeditionRewardDialogComponent_OnClickSwitchShowMode__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v23 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24317/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24319/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v23, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v24 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v24, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
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
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1BCAA44(viewChangeButton, v20);
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
  v34.fields.a = *p_r;
  v34.fields.b = *p_a;
  v34.fields.g = *p_b;
  v34.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v34, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v33 = 0;
  while ( v33 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v33,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v33;
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
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x22
  __int64 viewChangeButton; // x0
  __int64 v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  __int64 v89; // x1
  Il2CppObject *Component_object; // x25
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Collections_Generic_List_object__o *v95; // x25
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  bool v102; // w24
  int32_t v103; // w26
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  ExpeditionRewardDialogComponent___c_c *v107; // x0
  System_Func_object__int__o *_9__28_0; // x25
  Il2CppObject *v109; // x27
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int v117; // w25
  UILabel_o *v118; // x27
  __int64 v119; // x1
  Il2CppObject *ComponentInChildren_object; // x28
  UILabel_o *titleLabel; // x27
  __int64 v122; // x1
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v126; // x27
  Il2CppObject *v127; // x0
  System_String_o *v128; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x24
  __int64 v131; // x26
  UILabel_o *totalNumLabel; // x24
  System_String_o *v133; // x27
  Il2CppObject *v134; // x0
  __int64 v135; // x1
  Il2CppObject *v136; // x24
  System_String_o **v137; // x8
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x3
  BattleDropItem_o *v147; // x23
  int32_t v148; // w8
  int64_t v149; // x0
  System_Array_o **v150; // x21
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  __int64 v157; // x24
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  System_Array_o *v164; // x20
  __int64 v165; // x8
  int v166; // w21
  void *monitor; // x20
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x3
  System_Action_o *v171; // x20
  __int64 v172; // x0
  bool v173; // [xsp+Ch] [xbp-84h]
  int32_t eventIda; // [xsp+1Ch] [xbp-74h]
  __int64 v175; // [xsp+20h] [xbp-70h] BYREF
  int v176; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B1A095 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, eventExpeditionEntities, resultExpeditionRewardInfos);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&BattleDropItem___TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleDropItem_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, v24, v25);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v26, v27);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___, v28, v29);
    sub_1BCA7E0(&System_Func_EventExpeditionEntity__int__TypeInfo, v30, v31);
    sub_1BCA7E0(&int_TypeInfo, v32, v33);
    sub_1BCA7E0(&long_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v38, v39);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v40, v41);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, v44, v45);
    sub_1BCA7E0(&Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__, v46, v47);
    sub_1BCA7E0(&ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo, v48, v49);
    sub_1BCA7E0(&ExpeditionRewardDialogComponent___c_TypeInfo, v50, v51);
    sub_1BCA7E0(&StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_5872/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_5893/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_24323/*"treasurechest_img_bg_reward"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_5892/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v68, v69);
    sub_1BCA7E0(&StringLiteral_5891/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, v70, v71);
    sub_1BCA7E0(&StringLiteral_5890/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, v72, v73);
    byte_4B1A095 = 1;
  }
  v74 = sub_1BCAA2C(
          ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo,
          eventExpeditionEntities,
          resultExpeditionRewardInfos,
          resultEventRewardInfos);
  System_Object___ctor((Il2CppObject *)v74, 0LL);
  if ( !v74 )
    goto LABEL_57;
  *(_QWORD *)(v74 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 16), (int64_t)this, v77, v78, v79, v80, v81, v82);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventRootMaskSetActiveAction,
    (int64_t)setMaskMethod,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v89);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_57;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
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
  v95 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v92,
                                                       v93,
                                                       v94);
  System_Collections_Generic_List_object____ctor(
    v95,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v95;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultItemObjList,
    (int64_t)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  if ( !eventExpeditionEntities )
    goto LABEL_57;
  v102 = getPointReward;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton )
    goto LABEL_57;
  v103 = *(_DWORD *)(viewChangeButton + 44);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v103, 0LL);
  v107 = ExpeditionRewardDialogComponent___c_TypeInfo;
  eventIda = eventId;
  if ( !ExpeditionRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionRewardDialogComponent___c_TypeInfo, v104);
    v107 = ExpeditionRewardDialogComponent___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v107->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v107->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v107, v104);
      v107 = ExpeditionRewardDialogComponent___c_TypeInfo;
    }
    v109 = (Il2CppObject *)v107->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_EventExpeditionEntity__int__TypeInfo,
                                               v104,
                                               v105,
                                               v106);
    System_Func_object__int____ctor(_9__28_0, v109, Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, 0LL);
    static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__28_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
      (int64_t)_9__28_0,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
  }
  viewChangeButton = System_Linq_Enumerable__Sum_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                       (System_Func_TSource__int__o *)_9__28_0,
                       (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
  if ( !this->fields.getPointRoot )
    goto LABEL_57;
  v117 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  v173 = v102;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !this->fields.closeButton )
    goto LABEL_57;
  v118 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v119);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5893/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v118 )
    goto LABEL_57;
  UILabel__set_text(v118, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5872/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5891/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_57;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v122);
  AtlasManager__SetItem(totalEventPointIcon, v103, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v103, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5890/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_57;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v126 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v176 = v117;
  v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
  v128 = System_String__Format(v126, v127, 0LL);
  viewChangeButton = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_855/*"+"*/, v128, 0LL);
  if ( !getNumLabel )
    goto LABEL_57;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventIda, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v131 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5892/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_57;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v133 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v175 = v131;
  v134 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v175);
  viewChangeButton = (__int64)System_String__Format(v133, v134, 0LL);
  if ( !totalNumLabel )
    goto LABEL_57;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  v136 = UnityEngine_Component__GetComponentInChildren_object_(
           (UnityEngine_Component_o *)viewChangeButton,
           1,
           (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v135);
  v137 = (System_String_o **)(v173 ? &StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/ : &StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/);
  viewChangeButton = (__int64)LocalizationManager__Get(*v137, 0LL);
  if ( !v136 )
    goto LABEL_57;
  UILabel__set_text((UILabel_o *)v136, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v147 = (BattleDropItem_o *)sub_1BCAA2C(BattleDropItem_TypeInfo, v144, v145, v146);
  BattleDropItem___ctor(v147, 0LL);
  if ( !v147 )
    goto LABEL_57;
  v147->fields.type = 2;
  viewChangeButton = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)eventExpeditionEntities,
                                0,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__);
  if ( !viewChangeButton )
    goto LABEL_57;
  v148 = *(_DWORD *)(viewChangeButton + 44);
  v147->fields.originalNum = v117;
  v147->fields.objectId = v148;
  if ( !resultExpeditionRewardInfos
    || (v149 = sub_1BCA888(BattleDropItem___TypeInfo, resultExpeditionRewardInfos->max_length + 1),
        *(_QWORD *)(v74 + 24) = v149,
        v150 = (System_Array_o **)(v74 + 24),
        sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 24), v149, v151, v152, v153, v154, v155, v156),
        (v157 = *(_QWORD *)(v74 + 24)) == 0) )
  {
LABEL_57:
    sub_1BCAA3C(viewChangeButton, v76);
  }
  viewChangeButton = sub_1BCA91C(v147, *(_QWORD *)(*(_QWORD *)v157 + 64LL));
  if ( !viewChangeButton )
  {
    v172 = sub_1BCAA60(0LL);
    sub_1BCA908(v172, 0LL);
  }
  if ( !*(_DWORD *)(v157 + 24) )
LABEL_58:
    sub_1BCAA44(viewChangeButton, v76);
  *(_QWORD *)(v157 + 32) = v147;
  sub_1BCA784((PartyOrganizationUtility_o *)(v157 + 32), (int64_t)v147, v158, v159, v160, v161, v162, v163);
  System_Array__Copy_63356916(
    (System_Array_o *)resultExpeditionRewardInfos,
    0,
    *v150,
    1,
    resultExpeditionRewardInfos->max_length,
    0LL);
  v164 = *v150;
  if ( !*v150 )
    goto LABEL_57;
  viewChangeButton = (__int64)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_57;
  v165 = viewChangeButton;
  viewChangeButton = (__int64)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_57;
  v166 = *(_DWORD *)(v165 + 44);
  monitor = v164[1].monitor;
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, (int)monitor > 2 * v166, 0LL);
  v171 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v168, v169, v170);
  System_Action___ctor(
    v171,
    (Il2CppObject *)v74,
    Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v171, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionRewardDialogComponent__SetPossession(
        ExpeditionRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1A09A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, item, *(_QWORD *)&objectId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1A09A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__SetResultData(
        ExpeditionRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  ExpeditionRewardDialogComponent_o *v4; // x20
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
  Il2CppObject *prefabResultItem; // x22
  ExpeditionRewardDialogComponent_o *v21; // x22
  __int64 v22; // x2
  ExpeditionRewardDialogComponent_o *v23; // x25
  int32_t v24; // w3
  ItemIconComponent_o *v25; // x25
  ExpeditionRewardDialogComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v37; // x8
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1A096 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    this = (ExpeditionRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1A096 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( (unsigned int)v14 >= max_length )
          sub_1BCAA44(this, rewards);
        v15 = rewards->m_Items[v14];
        if ( !v15 )
          goto LABEL_31;
        type = v15->fields.type;
        objectId = v15->fields.objectId;
        v18 = 44LL;
        if ( v15->fields.originalNum > 0 )
          v18 = 52LL;
        v19 = *(_DWORD *)((char *)&v15->klass + v18);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                      prefabResultItem,
                                                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v21 = this;
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v21,
                                                      0LL);
        v23 = this;
        if ( !byte_4B109C1 )
        {
          this = (ExpeditionRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, rewards, v22);
          byte_4B109C1 = 1;
        }
        if ( !v23 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v23,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v21,
                                                      0LL);
        if ( !this )
          goto LABEL_31;
        v38.fields.x = v4->fields.iconScale;
        v38.fields.y = v38.fields.x;
        v38.fields.z = v38.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v38, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v21,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v24 = v19 <= 1 ? -1 : v19;
        v25 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, type, objectId, v24, 0, 0LL);
        ExpeditionRewardDialogComponent__SetPossession(v26, v25, objectId, v27);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v21, 1, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v34 = *(_QWORD *)&this->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v34 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v21,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v37 + 32) = v21;
          sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)v21, v28, v29, v30, v31, v32, v33);
        }
        this = (ExpeditionRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1BCAA3C(this, rewards);
        }
        this = (ExpeditionRewardDialogComponent_o *)((__int64 (__fastcall *)(ExpeditionRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                      this,
                                                      this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v14;
      }
      while ( (int)v14 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall ExpeditionRewardDialogComponent__get_closeBtnObject(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A09B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A09B = 1;
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


void __fastcall ExpeditionRewardDialogComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1A09D & 1) == 0 )
  {
    sub_1BCA7E0(&ExpeditionRewardDialogComponent___c_TypeInfo, v1, v2);
    byte_4B1A09D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ExpeditionRewardDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ExpeditionRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct ExpeditionRewardDialogComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ExpeditionRewardDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B1A09E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B1A09E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, v2),
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