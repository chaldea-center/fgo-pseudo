void __fastcall ExpeditionRewardDialogComponent___ctor(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_Color_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7A20 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, v5, v6, v7);
    byte_42E7A20 = 1;
  }
  this->fields.iconScale = 0.85;
  v8 = (struct UnityEngine_Color_array *)sub_B5D5DC(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__EndClose(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_42E7A1C & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42E7A1C = 1;
  }
  ExpeditionRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__OnClickCloseButton(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UnityEngine_Component_o *scrollView; // x0
  int32_t closeBtnSe; // w20
  Il2CppObject *current; // x20
  System_Action_o *v35; // x20
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7A1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_ExpeditionRewardDialogComponent_EndClose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SoundManager_TypeInfo, v29, v30, v31);
    byte_42E7A1B = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_22;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              scrollView,
                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_22;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
    closeBtnSe = this->fields.closeBtnSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(closeBtnSe, 0LL);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_22:
      sub_B5D69C(scrollView, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v36.fields.current;
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
        UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_ExpeditionRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v35, 0LL);
  }
}


void __fastcall ExpeditionRewardDialogComponent__OnClickSwitchShowMode(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v29; // x8
  UISprite_o *v30; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v39; // x20
  int size; // w8
  __int64 v41; // x0
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7A1D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23098/*"treasurechest_btn"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23100/*"treasurechest_btn_on"*/, v23, v24, v25);
    byte_42E7A1D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v29 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23098/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23100/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v29, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v30 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v30, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B5D69C(viewChangeButton, v26);
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
        goto LABEL_30;
      goto LABEL_22;
    }
LABEL_32:
    v41 = sub_B5D6C8(viewChangeButton);
    sub_B5D668(v41, 0LL);
  }
  if ( max_length <= 1 )
    goto LABEL_32;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_30;
LABEL_22:
  v42.fields.b = *p_a;
  v42.fields.g = *p_b;
  v42.fields.r = *p_g;
  v42.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v42, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v39 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v39 >= size )
      break;
    if ( size <= (unsigned int)v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v39];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v39;
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  __int64 v106; // x22
  UnityEngine_Component_o *viewChangeButton; // x0
  __int64 v108; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  WebViewObject_o *Component_WebViewObject; // x25
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v123; // x25
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  EventExpeditionEntity_o *v130; // x8
  int32_t eventPointItemId; // w26
  ExpeditionRewardDialogComponent___c_c *v132; // x0
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_0; // x25
  Il2CppObject *v135; // x27
  struct ExpeditionRewardDialogComponent___c_StaticFields *v136; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  int v143; // w25
  UILabel_o *v144; // x27
  bool v145; // w20
  UILabel_o *ComponentInChildren_UILabel; // x28
  UILabel_o *titleLabel; // x27
  UISprite_o *totalEventPointIcon; // x27
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v151; // x27
  Il2CppObject *v152; // x0
  System_String_o *v153; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x24
  __int64 v156; // x26
  UILabel_o *totalNumLabel; // x24
  System_String_o *v158; // x27
  Il2CppObject *v159; // x0
  UILabel_o *v160; // x24
  __int64 *v161; // x8
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  BattleDropItem_o *v168; // x23
  EventExpeditionEntity_o *v169; // x8
  int32_t v170; // w8
  System_Int32_array **v171; // x0
  System_Array_o **v172; // x21
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  __int64 v179; // x24
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  System_Array_o *v186; // x20
  UnityEngine_Component_o *v187; // x8
  int monitor_high; // w21
  int monitor; // w20
  System_Action_o *v190; // x20
  __int64 v191; // x0
  __int64 v192; // x0
  int32_t eventIda; // [xsp+4h] [xbp-6Ch]
  BattleDropItem_array *v194; // [xsp+8h] [xbp-68h]
  __int64 v195; // [xsp+10h] [xbp-60h] BYREF
  int v196; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42E7A19 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Action_TypeInfo,
      (_DWORD)eventExpeditionEntities,
      (_DWORD)resultExpeditionRewardInfos,
      resultEventRewardInfos);
    sub_B5D5C4(&AtlasManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BattleDropItem___TypeInfo, v19, v20, v21);
    sub_B5D5C4(&BattleDropItem_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, v28, v29, v30);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v31, v32, v33);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___, v34, v35, v36);
    sub_B5D5C4(&Method_System_Func_EventExpeditionEntity__int___ctor__, v37, v38, v39);
    sub_B5D5C4(&System_Func_EventExpeditionEntity__int__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&int_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&long_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventExpeditionEntity__get_Item__, v52, v53, v54);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v55, v56, v57);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__, v61, v62, v63);
    sub_B5D5C4(&Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__, v64, v65, v66);
    sub_B5D5C4(&ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&ExpeditionRewardDialogComponent___c_TypeInfo, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_5843/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_23098/*"treasurechest_btn"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_5864/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_23104/*"treasurechest_img_bg_reward"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_5863/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_5862/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_5861/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, v103, v104, v105);
    byte_42E7A19 = 1;
  }
  v106 = sub_B5D694(ExpeditionRewardDialogComponent___c__DisplayClass28_0_TypeInfo);
  ExpeditionRewardDialogComponent___c__DisplayClass28_0___ctor(
    (ExpeditionRewardDialogComponent___c__DisplayClass28_0_o *)v106,
    0LL);
  if ( !v106 )
    goto LABEL_70;
  *(_QWORD *)(v106 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v106 + 16),
    (System_Int32_array **)this,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventRootMaskSetActiveAction,
    (System_Int32_array **)setMaskMethod,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_70;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_23098/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_70;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23098/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_70;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_71;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_70;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v123 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v123,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v123;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v123,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  if ( !eventExpeditionEntities )
    goto LABEL_70;
  if ( !eventExpeditionEntities->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  eventIda = eventId;
  v130 = eventExpeditionEntities->fields._items->m_Items[0];
  if ( !v130 )
    goto LABEL_70;
  eventPointItemId = v130->fields.eventPointItemId;
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0LL);
  v132 = ExpeditionRewardDialogComponent___c_TypeInfo;
  if ( (BYTE3(ExpeditionRewardDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExpeditionRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExpeditionRewardDialogComponent___c_TypeInfo);
    v132 = ExpeditionRewardDialogComponent___c_TypeInfo;
  }
  static_fields = v132->static_fields;
  _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v132->vtable._0_Equals.methodPtr) & 4) != 0 && !v132->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v132);
      static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    }
    v135 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventExpeditionEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_0,
      v135,
      Method_ExpeditionRewardDialogComponent___c__Open_b__28_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_EventExpeditionEntity__int___ctor__);
    v136 = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
    v136->__9__28_0 = (struct System_Func_EventExpeditionEntity__int__o *)_9__28_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v136->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
  }
  viewChangeButton = (UnityEngine_Component_o *)System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                                  (System_Collections_Generic_IEnumerable_TSource__o *)eventExpeditionEntities,
                                                  (System_Func_TSource__int__o *)_9__28_0,
                                                  (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_EventExpeditionEntity___);
  if ( !this->fields.getPointRoot )
    goto LABEL_70;
  v143 = (int)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_70;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  v194 = resultExpeditionRewardInfos;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UILabel_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( !this->fields.closeButton )
    goto LABEL_70;
  v144 = (UILabel_o *)viewChangeButton;
  v145 = getPointReward;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  ComponentInChildren_UILabel = UnityEngine_Component__GetComponentInChildren_UILabel_(
                                  viewChangeButton,
                                  1,
                                  (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5864/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v144 )
    goto LABEL_70;
  UILabel__set_text(v144, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5843/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
  if ( !ComponentInChildren_UILabel )
    goto LABEL_70;
  UILabel__set_text(ComponentInChildren_UILabel, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5862/*"EXPEDITION_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23104/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5861/*"EXPEDITION_REWARD_DIALOG_GET_POINT_TITLE"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_70;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v151 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v196 = v143;
  v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v196);
  v153 = System_String__Format(v151, v152, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)System_String__Concat_44577788(
                                                  (System_String_o *)StringLiteral_699/*"+"*/,
                                                  v153,
                                                  0LL);
  if ( !getNumLabel )
    goto LABEL_70;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventIda, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v156 = EventPointNoGroup;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5863/*"EXPEDITION_REWARD_DIALOG_TOTAL_POINT_TITLE"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_70;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v158 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v195 = v156;
  v159 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v195);
  viewChangeButton = (UnityEngine_Component_o *)System_String__Format(v158, v159, 0LL);
  if ( !totalNumLabel )
    goto LABEL_70;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_70;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  v160 = UnityEngine_Component__GetComponentInChildren_UILabel_(
           viewChangeButton,
           1,
           (const MethodInfo_1ADE424 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____68825472);
  if ( v145 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v161 = &StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v161 = &StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/;
  }
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v161, 0LL);
  if ( !v160 )
    goto LABEL_70;
  UILabel__set_text(v160, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeBtnSe = 0;
  this->fields.closeCallbackFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v168 = (BattleDropItem_o *)sub_B5D694(BattleDropItem_TypeInfo);
  BattleDropItem___ctor(v168, 0LL);
  if ( !v168 )
    goto LABEL_70;
  v168->fields.type = 2;
  if ( !eventExpeditionEntities->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v169 = eventExpeditionEntities->fields._items->m_Items[0];
  if ( !v169 )
    goto LABEL_70;
  v170 = v169->fields.eventPointItemId;
  v168->fields.originalNum = v143;
  v168->fields.objectId = v170;
  if ( !v194
    || (v171 = (System_Int32_array **)sub_B5D5DC(BattleDropItem___TypeInfo, v194->max_length + 1),
        *(_QWORD *)(v106 + 24) = v171,
        v172 = (System_Array_o **)(v106 + 24),
        sub_B5D560((BattleServantConfConponent_o *)(v106 + 24), v171, v173, v174, v175, v176, v177, v178),
        (v179 = *(_QWORD *)(v106 + 24)) == 0) )
  {
LABEL_70:
    sub_B5D69C(viewChangeButton, v108);
  }
  viewChangeButton = (UnityEngine_Component_o *)sub_B5D684(v168, *(_QWORD *)(*(_QWORD *)v179 + 64LL));
  if ( !viewChangeButton )
  {
    v192 = sub_B5D6BC();
    sub_B5D668(v192, 0LL);
  }
  if ( !*(_DWORD *)(v179 + 24) )
  {
LABEL_71:
    v191 = sub_B5D6C8(viewChangeButton);
    sub_B5D668(v191, 0LL);
  }
  *(_QWORD *)(v179 + 32) = v168;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v179 + 32),
    (System_Int32_array **)v168,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  System_Array__Copy_43381116((System_Array_o *)v194, 0, *v172, 1, v194->max_length, 0LL);
  v186 = *v172;
  if ( !*v172 )
    goto LABEL_70;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !viewChangeButton )
    goto LABEL_70;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  viewChangeButton,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !viewChangeButton )
    goto LABEL_70;
  v187 = viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_70;
  monitor_high = HIDWORD(v187[1].monitor);
  monitor = (int)v186[1].monitor;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 2 * monitor_high < monitor, 0LL);
  v190 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v190,
    (Il2CppObject *)v106,
    Method_ExpeditionRewardDialogComponent___c__DisplayClass28_0__Open_b__1__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v190, 0, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent__SetPossession(
        ExpeditionRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t Instance; // x0
  __int64 v13; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7A1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)item, objectId, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E7A1E = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_13:
    sub_B5D69C(Instance, v13);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionRewardDialogComponent__SetResultData(
        ExpeditionRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ExpeditionRewardDialogComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  signed int max_length; // w8
  __int64 v19; // x25
  BattleDropItem_o *v20; // x8
  int originalNum; // w28
  int32_t objectId; // w21
  int32_t type; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x22
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Transform_o *transform; // x24
  int v27; // s0
  int32_t v30; // w3
  ItemIconComponent_o *v31; // x24
  ExpeditionRewardDialogComponent_o *v32; // x0
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E7A1A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, (_DWORD)rewards, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    this = (ExpeditionRewardDialogComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E7A1A = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0LL;
      do
      {
        if ( (unsigned int)v19 >= max_length )
        {
          v34 = sub_B5D6C8(this);
          sub_B5D668(v34, 0LL);
        }
        v20 = rewards->m_Items[v19];
        if ( !v20 )
          goto LABEL_26;
        originalNum = v20->fields.originalNum;
        if ( originalNum <= 0 )
          originalNum = v20->fields.num;
        type = v20->fields.type;
        objectId = v20->fields.objectId;
        prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                      prefabResultItem,
                                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_26;
        v25 = (UnityEngine_GameObject_o *)this;
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          goto LABEL_26;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v25, 0LL);
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
        if ( !this )
          goto LABEL_26;
        v35.fields.x = v5->fields.iconScale;
        v35.fields.y = v35.fields.x;
        v35.fields.z = v35.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v35, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v25,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_26;
        v30 = originalNum <= 1 ? -1 : originalNum;
        v31 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, type, objectId, v30, 0, 0LL);
        ExpeditionRewardDialogComponent__SetPossession(v32, v31, objectId, v33);
        UnityEngine_GameObject__SetActive(v25, 1, 0LL);
        this = (ExpeditionRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this
          || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__),
              (this = (ExpeditionRewardDialogComponent_o *)v5->fields.listRoot) == 0LL)
          || (this = (ExpeditionRewardDialogComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_26:
          sub_B5D69C(this, rewards);
        }
        this = (ExpeditionRewardDialogComponent_o *)((__int64 (__fastcall *)(ExpeditionRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                      this,
                                                      this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v19;
      }
      while ( (int)v19 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall ExpeditionRewardDialogComponent__get_closeBtnObject(
        ExpeditionRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E7A1F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7A1F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}


void __fastcall ExpeditionRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ExpeditionRewardDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E56B6 & 1) == 0 )
  {
    sub_B5D5C4(&ExpeditionRewardDialogComponent___c_TypeInfo, v1, v2, v3);
    byte_42E56B6 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ExpeditionRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ExpeditionRewardDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ExpeditionRewardDialogComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ExpeditionRewardDialogComponent_o *_4__this; // x0
  struct ExpeditionRewardDialogComponent_o *v6; // x8
  struct ExpeditionRewardDialogComponent_o *v7; // x8

  if ( (byte_42E56B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42E56B7 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionRewardDialogComponent__SetResultData(_4__this, this->fields.resultRewardInfos, 0LL),
        (v6 = this->fields.__4__this) == 0LL)
    || (v6->fields.state = 2, (v7 = this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v7->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
}