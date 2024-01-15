void __fastcall ExpeditionRewardDialogComponent___ctor(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct UnityEngine_Color_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FAD08 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Color___TypeInfo, v4);
    byte_40FAD08 = 1;
  }
  this->fields.iconScale = 0.85;
  v5 = (struct UnityEngine_Color_array *)sub_B17014(UnityEngine_Color___TypeInfo, 2LL, v2);
  this->fields.viewChangeButtonLabelEffectColors = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__EndClose(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_40FAD04 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40FAD04 = 1;
  }
  ExpeditionRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall ExpeditionRewardDialogComponent__Init(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  WebViewObject_o *Component_WebViewObject; // x0
  int32_t closeBtnSe; // w20
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FAD03 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_ExpeditionRewardDialogComponent_EndClose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    byte_40FAD03 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_22;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                scrollView,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !Component_WebViewObject )
      goto LABEL_22;
    UIScrollView__ResetPosition((UIScrollView_o *)Component_WebViewObject, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
    closeBtnSe = this->fields.closeBtnSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
LABEL_22:
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v22.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ExpeditionRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
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
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v12; // x8
  UnityEngine_Component_o *v13; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UISprite_o *v15; // x20
  System_String_o *normalSprite; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  UILabel_o *viewChangeButtonLabel; // x0
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v27; // x20
  int size; // w8
  UnityEngine_GameObject_o *v29; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FAD05 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v8);
    sub_B16FFC(&StringLiteral_22702/*"treasurechest_btn_on"*/, v9);
    byte_40FAD05 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v12 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22700/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_22702/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v12, 0LL);
  v13 = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !v13 )
    goto LABEL_30;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v13,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v15 = (UISprite_o *)Component_WebViewObject;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v15, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B170D4();
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButtonLabel )
        goto LABEL_30;
      goto LABEL_22;
    }
LABEL_32:
    sub_B17100(viewChangeButtonLabel, v17, v18);
    sub_B170A0();
  }
  if ( max_length <= 1 )
    goto LABEL_32;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButtonLabel )
    goto LABEL_30;
LABEL_22:
  v31.fields.b = *p_a;
  v31.fields.g = *p_b;
  v31.fields.r = *p_g;
  v31.fields.a = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v31, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v27 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v27 >= size )
      break;
    if ( size <= (unsigned int)v27 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v29 = resultItemObjList->fields._items->m_Items[v27];
    if ( v29 )
    {
      Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v29,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( Component_srcLineSprite )
      {
        ItemIconComponent__ShowPossession(Component_srcLineSprite, this->fields.isShowPossessionNum, 0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v27;
        if ( resultItemObjList )
          continue;
      }
    }
    goto LABEL_30;
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
  __int64 v45; // x1
  __int64 v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Component_o *viewChangeButton; // x0
  WebViewObject_o *Component_WebViewObject; // x25
  UIButton_o *v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  System_String_array **v64; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x25
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  EventExpeditionEntity_o *v78; // x8
  int32_t eventPointItemId; // w26
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  ExpeditionRewardDialogComponent___c_c *v84; // x0
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_0; // x25
  Il2CppObject *v87; // x27
  struct ExpeditionRewardDialogComponent___c_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int32_t v95; // w0
  int v96; // w25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v98; // x0
  UnityEngine_Component_o *transform; // x0
  UILabel_o *ComponentInChildren_UILabel; // x0
  UILabel_o *v101; // x27
  bool v102; // w20
  UnityEngine_Component_o *v103; // x0
  UILabel_o *v104; // x28
  System_String_o *v105; // x0
  System_String_o *v106; // x0
  UILabel_o *titleLabel; // x27
  System_String_o *v108; // x0
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x26
  System_String_o *v111; // x0
  UILabel_o *getNumLabel; // x26
  System_String_o *v113; // x27
  Il2CppObject *v114; // x0
  System_String_o *v115; // x0
  System_String_o *v116; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x24
  __int64 v119; // x26
  System_String_o *v120; // x0
  UILabel_o *totalNumLabel; // x24
  System_String_o *v122; // x27
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_Component_o *v126; // x0
  UILabel_o *v127; // x24
  __int64 *v128; // x8
  System_String_o *v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  UnityEngine_GameObject_o *v136; // x0
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  BattleDropItem_o *v141; // x23
  __int64 v142; // x2
  EventExpeditionEntity_o *v143; // x8
  int32_t v144; // w8
  System_Int32_array **v145; // x0
  System_Array_o **v146; // x21
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  __int64 v153; // x24
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Array_o *v159; // x20
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *v161; // x0
  WebViewObject_o *v162; // x8
  UnityEngine_Component_o *scrollBar; // x0
  int onError_high; // w21
  int monitor; // w20
  UnityEngine_GameObject_o *v166; // x0
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  System_Action_o *v171; // x20
  int32_t eventIda; // [xsp+4h] [xbp-6Ch]
  BattleDropItem_array *v173; // [xsp+8h] [xbp-68h]
  __int64 v174; // [xsp+10h] [xbp-60h] BYREF
  int v175; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40FAD01 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, eventExpeditionEntities);
    sub_B16FFC(&AtlasManager_TypeInfo, v16);
    sub_B16FFC(&BattleDropItem___TypeInfo, v17);
    sub_B16FFC(&BattleDropItem_TypeInfo, v18);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560, v19);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, v20);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v21);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___, v22);
    sub_B16FFC(&Method_System_Func_EventExpeditionEntity__int___ctor__, v23);
    sub_B16FFC(&System_Func_EventExpeditionEntity__int__TypeInfo, v24);
    sub_B16FFC(&int_TypeInfo, v25);
    sub_B16FFC(&long_TypeInfo, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v28);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v29);
    sub_B16FFC(&LocalizationManager_TypeInfo, v30);
    sub_B16FFC(&Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, v31);
    sub_B16FFC(&Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__, v32);
    sub_B16FFC(&ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo, v33);
    sub_B16FFC(&ExpeditionRewardDialogComponent___c_TypeInfo, v34);
    sub_B16FFC(&StringLiteral_13406/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v35);
    sub_B16FFC(&StringLiteral_690/*"+"*/, v36);
    sub_B16FFC(&StringLiteral_5749/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, v37);
    sub_B16FFC(&StringLiteral_22700/*"treasurechest_btn"*/, v38);
    sub_B16FFC(&StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v39);
    sub_B16FFC(&StringLiteral_5770/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, v40);
    sub_B16FFC(&StringLiteral_22706/*"treasurechest_img_bg_reward"*/, v41);
    sub_B16FFC(&StringLiteral_5769/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, v42);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v43);
    sub_B16FFC(&StringLiteral_5768/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, v44);
    sub_B16FFC(&StringLiteral_5767/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, v45);
    byte_40FAD01 = 1;
  }
  v46 = sub_B170CC(
          ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo,
          eventExpeditionEntities,
          resultExpeditionRewardInfos,
          resultEventRewardInfos,
          oldUserGame);
  ExpeditionRewardDialogComponent___c__DisplayClass28_0___ctor(
    (ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *)v46,
    0LL);
  if ( !v46 )
    goto LABEL_70;
  *(_QWORD *)(v46 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)this, v47, v48, v49, v50, v51, v52);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_70;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  v61 = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !v61 )
    goto LABEL_70;
  UIButton__set_normalSprite(v61, (System_String_o *)StringLiteral_22700/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_70;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_71;
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButtonLabel )
    goto LABEL_70;
  UILabel__set_effectColor(
    viewChangeButtonLabel,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v67,
                                                                                                  v68,
                                                                                                  v69,
                                                                                                  v70);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  if ( !eventExpeditionEntities )
    goto LABEL_70;
  if ( !eventExpeditionEntities->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  eventIda = eventId;
  v78 = eventExpeditionEntities->fields._items->m_Items[0];
  if ( !v78 )
    goto LABEL_70;
  eventPointItemId = v78->fields.eventPointItemId;
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0LL);
  v84 = ExpeditionRewardDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionRewardDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionRewardDialogComponent___c_TypeInfo);
    v84 = ExpeditionRewardDialogComponent___c_TypeInfo;
  }
  static_fields = v84->static_fields;
  _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    }
    v87 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_EventExpeditionEntity__int__TypeInfo,
                                                                                 v80,
                                                                                 v81,
                                                                                 v82,
                                                                                 v83);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_0,
      v87,
      Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_EventExpeditionEntity__int___ctor__);
    v88 = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    v88->__9__28_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__28_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v88->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
  }
  v95 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
          (System_Func_TSource__int__o *)_9__28_0,
          (const MethodInfo_19C4240 *)Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
  if ( !this->fields.getPointRoot )
    goto LABEL_70;
  v96 = v95;
  gameObject = UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !gameObject )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v98 = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !v98 )
    goto LABEL_70;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v98, 0LL);
  if ( !transform )
    goto LABEL_70;
  v173 = resultExpeditionRewardInfos;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  transform,
                                  1,
                                  (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( !this->fields.closeButton )
    goto LABEL_70;
  v101 = ComponentInChildren_UILabel;
  v102 = getPointReward;
  v103 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)this->fields.closeButton,
                                      0LL);
  if ( !v103 )
    goto LABEL_70;
  v104 = UnityEngine_Component__GetComponentInChildren_UILabel_(
           v103,
           1,
           (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_5770/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v101 )
    goto LABEL_70;
  UILabel__set_text(v101, v105, 0LL);
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  if ( !v104 )
    goto LABEL_70;
  UILabel__set_text(v104, v106, 0LL);
  titleLabel = this->fields.titleLabel;
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_5768/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, v108, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_22706/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_5767/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_70;
  UILabel__set_text(getTitleLabel, v111, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v113 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v175 = v96;
  v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175);
  v115 = System_String__Format(v113, v114, 0LL);
  v116 = System_String__Concat_43743732((System_String_o *)StringLiteral_690/*"+"*/, v115, 0LL);
  if ( !getNumLabel )
    goto LABEL_70;
  UILabel__set_text(getNumLabel, v116, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventIda, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v119 = EventPointNoGroup;
  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_5769/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_70;
  UILabel__set_text(totalTitleLabel, v120, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v174 = v119;
  v123 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v174);
  v124 = System_String__Format(v122, v123, 0LL);
  if ( !totalNumLabel )
    goto LABEL_70;
  UILabel__set_text(totalNumLabel, v124, 0LL);
  closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_70;
  v126 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(closeButton, 0LL);
  if ( !v126 )
    goto LABEL_70;
  v127 = UnityEngine_Component__GetComponentInChildren_UILabel_(
           v126,
           1,
           (const MethodInfo_18BD5AC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____66819560);
  if ( v102 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v128 = &StringLiteral_13406/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v128 = &StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/;
  }
  v129 = LocalizationManager__Get((System_String_o *)*v128, 0LL);
  if ( !v127 )
    goto LABEL_70;
  UILabel__set_text(v127, v129, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  v136 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v136 )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(v136, 1, 0LL);
  v141 = (BattleDropItem_o *)sub_B170CC(BattleDropItem_TypeInfo, v137, v138, v139, v140);
  BattleDropItem___ctor(v141, 0LL);
  if ( !v141 )
    goto LABEL_70;
  v141->fields.type = 2;
  if ( !eventExpeditionEntities->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v143 = eventExpeditionEntities->fields._items->m_Items[0];
  if ( !v143 )
    goto LABEL_70;
  v144 = v143->fields.eventPointItemId;
  v141->fields.originalNum = v96;
  v141->fields.objectId = v144;
  if ( !v173
    || (v145 = (System_Int32_array **)sub_B17014(BattleDropItem___TypeInfo, v173->max_length + 1, v142),
        *(_QWORD *)(v46 + 24) = v145,
        v146 = (System_Array_o **)(v46 + 24),
        sub_B16F98((BattleServantConfConponent_o *)(v46 + 24), v145, v147, v148, v149, v150, v151, v152),
        (v153 = *(_QWORD *)(v46 + 24)) == 0) )
  {
LABEL_70:
    sub_B170D4();
  }
  v62 = sub_B170BC(v141, *(_QWORD *)(*(_QWORD *)v153 + 64LL));
  if ( !v62 )
  {
    sub_B170F4(0LL);
    sub_B170A0();
  }
  if ( !*(_DWORD *)(v153 + 24) )
  {
LABEL_71:
    sub_B17100(v62, v63, v64);
    sub_B170A0();
  }
  *(_QWORD *)(v153 + 32) = v141;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v153 + 32),
    (System_Int32_array **)v141,
    v64,
    v154,
    v155,
    v156,
    v157,
    v158);
  System_Array__Copy_42336008((System_Array_o *)v173, 0, *v146, 1, v173->max_length, 0LL);
  v159 = *v146;
  if ( !*v146 )
    goto LABEL_70;
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_70;
  v161 = UnityEngine_Component__GetComponent_WebViewObject_(
           listRoot,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !v161 )
    goto LABEL_70;
  v162 = v161;
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_70;
  onError_high = HIDWORD(v162->fields.onError);
  monitor = (int)v159[1].monitor;
  v166 = UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  if ( !v166 )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(v166, 2 * onError_high < monitor, 0LL);
  v171 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v167, v168, v169, v170);
  System_Action___ctor(
    v171,
    (Il2CppObject *)v46,
    Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v171, 0, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__SetPossession(
        ExpeditionRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FAD06 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, item);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FAD06 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, objectId, 0LL) )
    return;
  if ( !entity || !item )
LABEL_13:
    sub_B170D4();
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x25
  BattleDropItem_o *v11; // x8
  int originalNum; // w28
  int32_t objectId; // w21
  int32_t type; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x22
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v19; // x24
  int v20; // s0
  UnityEngine_Transform_o *v23; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  int32_t v25; // w3
  ItemIconComponent_o *v26; // x24
  ExpeditionRewardDialogComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *resultItemObjList; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_40FAD02 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ExpeditionRewardDialogComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FAD02 = 1;
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
        {
          sub_B17100(this, rewards, method);
          sub_B170A0();
        }
        v11 = rewards->m_Items[v10];
        if ( !v11 )
          goto LABEL_26;
        originalNum = v11->fields.originalNum;
        if ( originalNum <= 0 )
          originalNum = v11->fields.num;
        type = v11->fields.type;
        objectId = v11->fields.objectId;
        prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v4->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            prefabResultItem,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v16 )
          goto LABEL_26;
        v17 = v16;
        transform = UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !transform )
          goto LABEL_26;
        UnityEngine_Transform__set_parent(transform, v4->fields.listRoot, 0LL);
        v19 = UnityEngine_GameObject__get_transform(v17, 0LL);
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v19 )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
        v23 = UnityEngine_GameObject__get_transform(v17, 0LL);
        if ( !v23 )
          goto LABEL_26;
        v32.fields.x = v4->fields.iconScale;
        v32.fields.y = v32.fields.x;
        v32.fields.z = v32.fields.x;
        UnityEngine_Transform__set_localScale(v23, v32, 0LL);
        Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v17,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !Component_srcLineSprite )
          goto LABEL_26;
        v25 = originalNum <= 1 ? -1 : originalNum;
        v26 = Component_srcLineSprite;
        ItemIconComponent__SetGift(Component_srcLineSprite, type, objectId, v25, 0, 0LL);
        ExpeditionRewardDialogComponent__SetPossession(v27, v26, objectId, v28);
        UnityEngine_GameObject__SetActive(v17, 1, 0LL);
        resultItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.resultItemObjList;
        if ( !resultItemObjList
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                resultItemObjList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (listRoot = (UnityEngine_Component_o *)v4->fields.listRoot) == 0LL)
          || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                          listRoot,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B170D4();
        }
        this = (ExpeditionRewardDialogComponent_o *)(*(__int64 (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
                                                      Component_WebViewObject,
                                                      Component_WebViewObject->klass[1]._1.element_class);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FAD07 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAD07 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68A6 & 1) == 0 )
  {
    sub_B16FFC(&ExpeditionRewardDialogComponent___c_TypeInfo, v1);
    byte_40F68A6 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ExpeditionRewardDialogComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  struct ExpeditionRewardDialogComponent_o *v5; // x8

  if ( (byte_40F68A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40F68A7 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, 0LL),
        (v4 = this->fields.__4__this) == 0LL)
    || (v4->fields.state = 2, (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
}