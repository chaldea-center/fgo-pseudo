// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  __int64 v6; // x1
  __int64 v7; // x1
  int v8; // s0
  int v9; // s1
  int v10; // s2
  struct SvtCombineResultWindowComponent_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  SvtCombineResultWindowComponent_c *v19; // x8
  struct SvtCombineResultWindowComponent_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_Color_o v28; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40FDA70 & 1) == 0 )
  {
    sub_B16FFC(&SvtCombineResultWindowComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_4136, v6);
    sub_B16FFC(&StringLiteral_951, v7);
    byte_40FDA70 = 1;
  }
  v8 = 1065185444;
  v9 = 1064430469;
  v10 = 1050790593;
  v28 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v28);
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = v28;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_4136;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4136;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->TUTORIAL_FOLDER, v12, v13, v14, v15, v16, v17, v18);
  v19 = SvtCombineResultWindowComponent_TypeInfo;
  SvtCombineResultWindowComponent_TypeInfo->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = 25;
  v19->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL = 26;
  v19->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 27;
  v20 = v19->static_fields;
  v21 = (System_Int32_array **)StringLiteral_951;
  v20->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_951;
  sub_B16F98((BattleServantConfConponent_o *)&v20->INIT_VAL_TXT, v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall SvtCombineResultWindowComponent___ctor(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FDA6F & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FDA6F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__ClickSkip(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FDA6E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SvtCombineResultWindowComponent_EndDisp__, v3);
    byte_40FDA6E = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_B170D4();
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0LL) )
  {
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndDisp__, 0LL);
    SvtCombineResultWindowComponent__skipExp(this, v9, v10);
  }
}


void __fastcall SvtCombineResultWindowComponent__Close(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x0
  System_Action_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_40FDA6C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SvtCombineResultWindowComponent_EndClose__, v6);
    byte_40FDA6C = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  SvtCombineResultWindowComponent__Close_31985796(this, v8, v9);
}


void __fastcall SvtCombineResultWindowComponent__Close_31985796(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FDA6D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SvtCombineResultWindowComponent_EndClose__, v6);
    byte_40FDA6D = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, callback, method, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__EndClose(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  SvtCombineResultWindowComponent__destroyCurrentStatusGrid(this, v4);
  SvtCombineResultWindowComponent__destroyResStatusGrid(this, v5);
}


void __fastcall SvtCombineResultWindowComponent__EndDisp(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  OpenInfoWindowComponent_o *openInfowindowComp; // x20
  System_Collections_Generic_List_GameObject__o *resInfoList; // x21
  System_Action_o *v12; // x22

  if ( (byte_40FDA64 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SvtCombineResultWindowComponent_EndOpen__, v4);
    byte_40FDA64 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  this->fields.isUpdateGauge = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSystemSe(0LL);
  if ( this->fields.isGetNewSkill || this->fields.isOpenQuest )
  {
    openInfowindowComp = this->fields.openInfowindowComp;
    resInfoList = this->fields.resInfoList;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v12, 1, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  SvtCombineResultWindowComponent__EndOpen(this, v6);
}


void __fastcall SvtCombineResultWindowComponent__EndOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Action_o *openCallBack; // x19
  __int64 v15; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **endTutorialCallBack; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x2
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  _BOOL4 isHpLimitUp; // w9
  _BOOL4 isAtkLimitUp; // w8
  System_Int32_array *v35; // x20
  SvtCombineResultWindowComponent_c *v36; // x0
  int32_t *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL; // x8
  CommonUI_o *Instance; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x22

  if ( (byte_40FDA6B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&SvtCombineResultWindowComponent_TypeInfo, v11);
    sub_B16FFC(&Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__, v12);
    sub_B16FFC(&SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, v13);
    byte_40FDA6B = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(openCallBack, 0LL);
  }
  if ( this->fields.endTutorialCallBack )
  {
    v15 = sub_B170CC(SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, method, v2, v3, v4);
    SvtCombineResultWindowComponent___c__DisplayClass127_0___ctor(
      (SvtCombineResultWindowComponent___c__DisplayClass127_0_o *)v15,
      0LL);
    if ( !v15 )
      goto LABEL_34;
    endTutorialCallBack = (System_Int32_array **)this->fields.endTutorialCallBack;
    *(_QWORD *)(v15 + 16) = endTutorialCallBack;
    sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), endTutorialCallBack, v16, v17, v18, v19, v20, v21);
    this->fields.endTutorialCallBack = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.endTutorialCallBack, 0LL, v23, v24, v25, v26, v27, v28);
    if ( this->fields.isHpLimitUp || this->fields.isAtkLimitUp )
    {
      v30 = sub_B17014(int___TypeInfo, 1LL, v29);
      isHpLimitUp = this->fields.isHpLimitUp;
      isAtkLimitUp = this->fields.isAtkLimitUp;
      v35 = (System_Int32_array *)v30;
      if ( isHpLimitUp )
      {
        v36 = SvtCombineResultWindowComponent_TypeInfo;
        if ( isAtkLimitUp )
        {
          if ( (WORD1(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v36 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v35 )
            goto LABEL_34;
          if ( v35->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v36->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_31:
            v35->m_Items[1] = *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_32:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
            System_Action___ctor(
              v43,
              (Il2CppObject *)v15,
              Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__OpenImageDialogAssets(Instance, v35, 2, v43, 0LL);
              return;
            }
LABEL_34:
            sub_B170D4();
          }
        }
        else
        {
          if ( (WORD1(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v36 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v35 )
            goto LABEL_34;
          if ( v35->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v36->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
            goto LABEL_31;
          }
        }
      }
      else
      {
        if ( !isAtkLimitUp )
          goto LABEL_32;
        v36 = SvtCombineResultWindowComponent_TypeInfo;
        if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
          v36 = SvtCombineResultWindowComponent_TypeInfo;
        }
        if ( !v35 )
          goto LABEL_34;
        if ( v35->max_length )
        {
          p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v36->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
          goto LABEL_31;
        }
      }
      sub_B17100(v36, v31, v32);
      sub_B170A0();
    }
  }
}


void __fastcall SvtCombineResultWindowComponent__InitStateInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIExtrusionLabel_o *currentLvLb; // x20
  UILabel_o *currentMaxLvLb; // x0
  UIProgressBar_o *currentExpBar; // x0
  UILabel_o *currentExpValLb; // x0
  UILabel_o *currentHpLb; // x0
  UILabel_o *currentAtkLb; // x0
  UIExtrusionLabel_o *currentSvtEqLvLb; // x0
  UILabel_o *currentSvtEqMaxLvLb; // x0
  UIProgressBar_o *currentSvtEqExpBar; // x0
  UILabel_o *currentSvtEqExpValLb; // x0
  UILabel_o *currentSvtEqHpLb; // x0
  UILabel_o *currentSvtEqAtkLb; // x0
  UIIconLabel_o *currentAdjustHpIconLabel; // x0
  UILabel_o *currentAdjustHpMaxLabel; // x0
  UIIconLabel_o *currentAdjustAtkIconLabel; // x0
  UILabel_o *currentAdjustAtkMaxLabel; // x0
  UIExtrusionLabel_o *resLvLb; // x0
  UILabel_o *resMaxLvLb; // x0
  UIProgressBar_o *resCrExpBar; // x0
  UILabel_o *resHpLb; // x0
  UILabel_o *resAtkLb; // x0
  UIExtrusionLabel_o *resSvtEqLvLb; // x0
  UILabel_o *resSvtEqMaxLvLb; // x0
  UIProgressBar_o *resSvtEqCrExpBar; // x0
  UILabel_o *resSvtEqHpLb; // x0
  UILabel_o *resSvtEqAtkLb; // x0
  UIIconLabel_o *resAdjustHpIconLabel; // x0
  UILabel_o *resAdjustHpMaxLabel; // x0
  UIIconLabel_o *resAdjustAtkIconLabel; // x0
  UILabel_o *resAdjustAtkMaxLabel; // x0

  if ( (byte_40FDA5A & 1) == 0 )
  {
    sub_B16FFC(&SvtCombineResultWindowComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FDA5A = 1;
  }
  currentLvLb = this->fields.currentLvLb;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
  }
  if ( !currentLvLb )
    goto LABEL_37;
  UIExtrusionLabel__set_text(currentLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentExpBar = (UIProgressBar_o *)this->fields.currentExpBar;
  if ( !currentExpBar )
    goto LABEL_37;
  UIProgressBar__set_value(currentExpBar, 0.0, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  if ( !currentExpValLb )
    goto LABEL_37;
  UILabel__set_text(currentExpValLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentHpLb = this->fields.currentHpLb;
  if ( !currentHpLb )
    goto LABEL_37;
  UILabel__set_text(currentHpLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentAtkLb = this->fields.currentAtkLb;
  if ( !currentAtkLb )
    goto LABEL_37;
  UILabel__set_text(currentAtkLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentSvtEqLvLb = this->fields.currentSvtEqLvLb;
  if ( !currentSvtEqLvLb )
    goto LABEL_37;
  UIExtrusionLabel__set_text(
    currentSvtEqLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0LL);
  currentSvtEqMaxLvLb = this->fields.currentSvtEqMaxLvLb;
  if ( !currentSvtEqMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentSvtEqMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentSvtEqExpBar = (UIProgressBar_o *)this->fields.currentSvtEqExpBar;
  if ( !currentSvtEqExpBar )
    goto LABEL_37;
  UIProgressBar__set_value(currentSvtEqExpBar, 0.0, 0LL);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  if ( !currentSvtEqExpValLb )
    goto LABEL_37;
  UILabel__set_text(currentSvtEqExpValLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  if ( !currentSvtEqHpLb )
    goto LABEL_37;
  UILabel__set_text(currentSvtEqHpLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  if ( !currentSvtEqAtkLb )
    goto LABEL_37;
  UILabel__set_text(currentSvtEqAtkLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( !currentAdjustHpIconLabel )
    goto LABEL_37;
  UIIconLabel__Clear(currentAdjustHpIconLabel, 0LL);
  currentAdjustHpMaxLabel = this->fields.currentAdjustHpMaxLabel;
  if ( !currentAdjustHpMaxLabel )
    goto LABEL_37;
  UILabel__set_text(currentAdjustHpMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_37;
  UIIconLabel__Clear(currentAdjustAtkIconLabel, 0LL);
  currentAdjustAtkMaxLabel = this->fields.currentAdjustAtkMaxLabel;
  if ( !currentAdjustAtkMaxLabel )
    goto LABEL_37;
  UILabel__set_text(currentAdjustAtkMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  resLvLb = this->fields.resLvLb;
  if ( !resLvLb )
    goto LABEL_37;
  UIExtrusionLabel__set_text(resLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  resMaxLvLb = this->fields.resMaxLvLb;
  if ( !resMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(resMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  resCrExpBar = (UIProgressBar_o *)this->fields.resCrExpBar;
  if ( !resCrExpBar )
    goto LABEL_37;
  UIProgressBar__set_value(resCrExpBar, 0.0, 0LL);
  resHpLb = this->fields.resHpLb;
  if ( !resHpLb )
    goto LABEL_37;
  UILabel__set_text(resHpLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  resAtkLb = this->fields.resAtkLb;
  if ( !resAtkLb )
    goto LABEL_37;
  UILabel__set_text(resAtkLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  if ( !resSvtEqLvLb )
    goto LABEL_37;
  UIExtrusionLabel__set_text(resSvtEqLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
  if ( !resSvtEqMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(resSvtEqMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  resSvtEqCrExpBar = (UIProgressBar_o *)this->fields.resSvtEqCrExpBar;
  if ( !resSvtEqCrExpBar )
    goto LABEL_37;
  UIProgressBar__set_value(resSvtEqCrExpBar, 0.0, 0LL);
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  if ( !resSvtEqHpLb )
    goto LABEL_37;
  UILabel__set_text(resSvtEqHpLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  if ( !resSvtEqAtkLb )
    goto LABEL_37;
  UILabel__set_text(resSvtEqAtkLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  resAdjustHpIconLabel = this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel
    || (UIIconLabel__Clear(resAdjustHpIconLabel, 0LL), (resAdjustHpMaxLabel = this->fields.resAdjustHpMaxLabel) == 0LL)
    || (UILabel__set_text(resAdjustHpMaxLabel, (System_String_o *)StringLiteral_1, 0LL),
        (resAdjustAtkIconLabel = this->fields.resAdjustAtkIconLabel) == 0LL)
    || (UIIconLabel__Clear(resAdjustAtkIconLabel, 0LL), (resAdjustAtkMaxLabel = this->fields.resAdjustAtkMaxLabel) == 0LL) )
  {
LABEL_37:
    sub_B170D4();
  }
  UILabel__set_text(resAdjustAtkMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  *(_WORD *)&this->fields.isAtkLimitUp = 0;
}


void __fastcall SvtCombineResultWindowComponent__StartUpdateValue(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isUpdateGauge = 0;
}


void __fastcall SvtCombineResultWindowComponent__UpdateValue(
        SvtCombineResultWindowComponent_o *this,
        float val,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v10; // w21
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v12; // x9
  float v13; // s0
  int32_t exp; // w20
  bool v15; // w0
  int32_t v16; // w1
  const MethodInfo *v17; // x4
  struct UserServantEntity_o *v18; // x8
  struct UserServantEntity_o *v19; // x8
  int32_t v20; // w0
  struct UserServantEntity_o *v21; // x8
  int32_t v22; // w20
  UnityEngine_GameObject_o *lvUpInfo; // x0
  UnityEngine_GameObject_o *v24; // x0
  UITweener_o *Component_srcLineSprite; // x0
  UITweener_o *v26; // x21
  _BOOL4 isEqCombine; // w8
  UIExtrusionLabel_o *v28; // x20
  System_String_o *v29; // x0
  UIWidget_o *resLvWidget; // x20
  SvtCombineResultWindowComponent_c *v31; // x0
  CheckCombineResStatus_o *checkResInfo; // x0
  UILabel_o *resSvtEqHpLb; // x20
  System_String_o *v34; // x0
  UILabel_o *resHpLb; // x20
  System_String_o *v36; // x0
  const MethodInfo *v37; // x2
  SvtCombineResultWindowComponent_c *v38; // x0
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  System_String_o *v41; // x0
  UILabel_o *resAtkLb; // x20
  System_String_o *v43; // x0
  const MethodInfo *v44; // x2
  SvtCombineResultWindowComponent_c *v45; // x0
  UIWidget_o *resAtkWidget; // x19
  int32_t afterAtk; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t afterHp[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FDA63 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&SvtCombineResultWindowComponent_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_9236, v7);
    byte_40FDA63 = 1;
  }
  *(_QWORD *)afterHp = 0LL;
  afterAtk = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_56;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_56;
  v10 = LevelMax;
  UnityEngine_Collider__set_enabled(this->fields.skipCollider, 1, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_56;
  v12 = this->fields.resUsrSvtData;
  if ( !v12 )
    goto LABEL_56;
  v13 = UnityEngine_Mathf__Lerp((float)baseUsrSvtData->fields.exp, (float)v12->fields.exp, val, 0LL);
  exp = UnityEngine_Mathf__FloorToInt(v13, 0LL);
  v15 = UnityEngine_Mathf__Approximately(1.0, val, 0LL);
  v18 = this->fields.resUsrSvtData;
  if ( v15 )
  {
    if ( !v18 )
      goto LABEL_56;
    exp = v18->fields.exp;
  }
  else if ( !v18 )
  {
    goto LABEL_56;
  }
  v19 = this->fields.baseUsrSvtData;
  if ( !v19 )
    goto LABEL_56;
  v20 = SvtCombineResultWindowComponent__setSvtExp(this, v16, exp, v19->fields.lv, v17);
  afterHp[1] = v20;
  v21 = this->fields.baseUsrSvtData;
  if ( !v21 )
    goto LABEL_56;
  if ( v21->fields.lv == v10 )
    return;
  v22 = v20;
  if ( !this->fields.isUpdateGauge )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(3, 0LL);
    this->fields.isUpdateGauge = 1;
  }
  if ( v22 == this->fields.PrevLevel )
  {
    this->fields.endDispLvInfoFlg = 1;
    return;
  }
  lvUpInfo = this->fields.lvUpInfo;
  if ( !lvUpInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(lvUpInfo, 1, 0LL);
  v24 = this->fields.lvUpInfo;
  if ( !v24 )
    goto LABEL_56;
  Component_srcLineSprite = (UITweener_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v24,
                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !Component_srcLineSprite )
    goto LABEL_56;
  v26 = Component_srcLineSprite;
  UITweener__ResetToBeginning(Component_srcLineSprite, 0LL);
  UITweener__Play(v26, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v22;
  this->fields.endDispLvInfoFlg = 0;
  v28 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  v29 = System_Int32__ToString((int32_t)&afterHp[1], 0LL);
  if ( !v28 )
    goto LABEL_56;
  UIExtrusionLabel__set_text(v28, v29, 0LL);
  resLvWidget = this->fields.resLvWidget;
  v31 = SvtCombineResultWindowComponent_TypeInfo;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v31 = SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resLvWidget )
    goto LABEL_56;
  UIWidget__set_color(resLvWidget, v31->static_fields->COLOR_VAL, 0LL);
  checkResInfo = this->fields.checkResInfo;
  if ( !checkResInfo )
    goto LABEL_56;
  CheckCombineResStatus__getCombineResStatus(
    checkResInfo,
    afterHp,
    &afterAtk,
    this->fields.resUsrSvtData,
    afterHp[1],
    0LL);
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      v34 = System_Int32__ToString_38275808((int32_t)afterHp, (System_String_o *)StringLiteral_9236, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_56;
      UILabel__set_text(resSvtEqHpLb, v34, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      v36 = System_Int32__ToString_38275808((int32_t)afterHp, (System_String_o *)StringLiteral_9236, 0LL);
      if ( !resHpLb )
        goto LABEL_56;
      UILabel__set_text(resHpLb, v36, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v37);
    }
    v38 = SvtCombineResultWindowComponent_TypeInfo;
    resHpWidget = this->fields.resHpWidget;
    if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      v38 = SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resHpWidget )
      goto LABEL_56;
    UIWidget__set_color(resHpWidget, v38->static_fields->COLOR_VAL, 0LL);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    v41 = System_Int32__ToString_38275808((int32_t)&afterAtk, (System_String_o *)StringLiteral_9236, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_56;
    UILabel__set_text(resSvtEqAtkLb, v41, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    v43 = System_Int32__ToString_38275808((int32_t)&afterAtk, (System_String_o *)StringLiteral_9236, 0LL);
    if ( !resAtkLb )
      goto LABEL_56;
    UILabel__set_text(resAtkLb, v43, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v44);
  }
  v45 = SvtCombineResultWindowComponent_TypeInfo;
  resAtkWidget = this->fields.resAtkWidget;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v45 = SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resAtkWidget )
LABEL_56:
    sub_B170D4();
  UIWidget__set_color(resAtkWidget, v45->static_fields->COLOR_VAL, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__checkGetSkill(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  System_Int32_array *SkillIdList; // x0
  System_Int32_array *v11; // x20
  System_Int32_array *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  System_Int32_array *v16; // x21
  unsigned __int64 v17; // x23
  int32_t *v18; // x24
  int32_t i; // w22
  int32_t v20; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  UILabel_o *skillGetInfoTitle; // x21
  SkillEntity_o *v25; // x20
  System_String_o *v26; // x0
  UILabel_o *skillGetInfoDetail; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x22
  Il2CppObject *Name; // x0
  System_String_o *v31; // x0
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x0

  if ( (byte_40FDA67 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_6848, v7);
    sub_B16FFC(&StringLiteral_6850, v8);
    byte_40FDA67 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_27;
  SkillIdList = UserServantEntity__getSkillIdList(baseUsrSvtData, -1, -1, 1, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_27;
  v11 = SkillIdList;
  v12 = UserServantEntity__getSkillIdList(this->fields.resUsrSvtData, -1, -1, 1, 0LL);
  if ( !v11 )
    goto LABEL_27;
  v15 = *(_QWORD *)&v11->max_length;
  if ( (int)v15 < 1 )
    return;
  v16 = v12;
  v17 = 0LL;
  v18 = &v12->m_Items[1];
  for ( i = (_DWORD)v11 + 32; ; i += 4 )
  {
    if ( !v16 )
      goto LABEL_27;
    if ( v17 >= v16->max_length || v17 >= (unsigned int)v15 )
      goto LABEL_26;
    v12 = (System_Int32_array *)System_Int32__Equals_38275732(i, v18[v17], 0LL);
    if ( ((unsigned __int8)v12 & 1) == 0 )
      break;
    LODWORD(v15) = v11->max_length;
    if ( (__int64)++v17 >= (int)v15 )
      return;
  }
  if ( (unsigned int)v17 >= v16->max_length )
  {
LABEL_26:
    sub_B17100(v12, v13, v14);
    sub_B170A0();
  }
  v20 = v16->m_Items[v17 + 1];
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             v20,
             (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  v25 = (SkillEntity_o *)Entity;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6850, 0LL);
  if ( !skillGetInfoTitle )
    goto LABEL_27;
  UILabel__set_text(skillGetInfoTitle, v26, 0LL);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_6848, 0LL);
  if ( !v25
    || (v29 = v28,
        Name = (Il2CppObject *)SkillEntity__getName(v25, 0LL),
        v31 = System_String__Format(v29, Name, 0LL),
        !skillGetInfoDetail)
    || (UILabel__set_text(skillGetInfoDetail, v31, 0LL), (resInfoList = this->fields.resInfoList) == 0LL) )
  {
LABEL_27:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillGetInfo,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetNewSkill = 1;
}


void __fastcall SvtCombineResultWindowComponent__checkQuestOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_int__o *v20; // x0
  clsQuestCheck_o *v21; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v23; // x20
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w0
  System_Collections_Generic_List_int__o *v27; // x0
  UILabel_o *storyQuestInfoTitle; // x21
  System_Collections_Generic_List_int__o *v29; // x20
  System_String_o *v30; // x0
  UILabel_o *heroQuestInfoTitle; // x21
  System_String_o *v32; // x0
  __int64 size; // x8
  __int64 i; // x24
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int longName; // w8
  WarEntity_o *v39; // x21
  UILabel_o *storyQuestInfoDetail; // x22
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x0
  struct UnityEngine_GameObject_o *heroQuestInfo; // x1
  UILabel_o *eventQuestInfoDetail; // x22
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  UILabel_o *heroQuestInfoDetail; // x22
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  __int64 v51; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_40FDA66 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v15);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v16);
    sub_B16FFC(&StringLiteral_9743, v17);
    sub_B16FFC(&StringLiteral_9730, v18);
    sub_B16FFC(&StringLiteral_9733, v19);
    byte_40FDA66 = 1;
  }
  this->fields.isOpenQuest = 0;
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v21 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_51;
  v23 = v21;
  v25 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v25;
  *(_QWORD *)&v52.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
  if ( !v23 )
    goto LABEL_51;
  v27 = clsQuestCheck__GetReleaseQuestIdByServantLv(v23, v26, this->fields.baseSvtCollectionLv, 0LL);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v29 = v27;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9743, 0LL);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, v30, 0LL),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9733, 0LL),
        !heroQuestInfoTitle) )
  {
LABEL_51:
    sub_B170D4();
  }
  UILabel__set_text(heroQuestInfoTitle, v32, 0LL);
  if ( v29 )
  {
    LODWORD(size) = v29->fields._size;
    if ( (int)size >= 1 )
    {
      for ( i = 8LL; ; ++i )
      {
        if ( i - 8 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( *((int *)&v29->fields._items->obj.klass + i) < 1 )
          goto LABEL_49;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_51;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( i - 8 >= (unsigned __int64)(unsigned int)v29->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_51;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   *((_DWORD *)&v29->fields._items->obj.klass + i),
                   (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_51;
        longName = (int)Entity->fields.longName;
        v39 = Entity;
        if ( longName == 6 )
        {
          heroQuestInfoDetail = this->fields.heroQuestInfoDetail;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9730, 0LL);
          v50 = System_String__Format(v49, (Il2CppObject *)v39->fields.age, 0LL);
          if ( !heroQuestInfoDetail )
            goto LABEL_51;
          UILabel__set_text(heroQuestInfoDetail, v50, 0LL);
          resInfoList = this->fields.resInfoList;
          if ( !resInfoList )
            goto LABEL_51;
          heroQuestInfo = this->fields.heroQuestInfo;
          goto LABEL_48;
        }
        if ( longName == 5 )
          break;
        if ( longName == 3 )
        {
          storyQuestInfoDetail = this->fields.storyQuestInfoDetail;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9730, 0LL);
          v42 = System_String__Format(v41, (Il2CppObject *)v39->fields.age, 0LL);
          if ( !storyQuestInfoDetail )
            goto LABEL_51;
          UILabel__set_text(storyQuestInfoDetail, v42, 0LL);
          resInfoList = this->fields.resInfoList;
          if ( !resInfoList )
            goto LABEL_51;
          heroQuestInfo = this->fields.storyQuestInfo;
LABEL_48:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)heroQuestInfo,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          this->fields.isOpenQuest = 1;
        }
LABEL_49:
        size = v29->fields._size;
        v51 = i - 7;
        if ( v51 >= size )
          return;
      }
      eventQuestInfoDetail = this->fields.eventQuestInfoDetail;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9730, 0LL);
      v47 = System_String__Format(v46, (Il2CppObject *)v39->fields.age, 0LL);
      if ( !eventQuestInfoDetail )
        goto LABEL_51;
      UILabel__set_text(eventQuestInfoDetail, v47, 0LL);
      resInfoList = this->fields.resInfoList;
      if ( !resInfoList )
        goto LABEL_51;
      heroQuestInfo = this->fields.eventQuestInfo;
      goto LABEL_48;
    }
  }
}


void __fastcall SvtCombineResultWindowComponent__destroyCurrentStatusGrid(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *currentLimitCntGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Transform_o *v7; // x0
  bool v8; // cc
  int32_t v9; // w21
  int32_t v10; // w20
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x22
  bool v15; // vf
  int32_t v16; // w20
  UnityEngine_Component_o *currentSvtEqLimitCntGrid; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Object_o *v20; // x21

  if ( (byte_40FDA69 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDA69 = 1;
  }
  currentLimitCntGrid = (UnityEngine_Component_o *)this->fields.currentLimitCntGrid;
  if ( !currentLimitCntGrid )
    goto LABEL_24;
  transform = UnityEngine_Component__get_transform(currentLimitCntGrid, 0LL);
  if ( !transform )
    goto LABEL_24;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  if ( !this->fields.currentSvtEqLimitCntGrid )
    goto LABEL_24;
  v6 = childCount;
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.currentSvtEqLimitCntGrid, 0LL);
  if ( !v7 )
    goto LABEL_24;
  v9 = v6 - 1;
  v8 = v6 < 1;
  v10 = UnityEngine_Transform__get_childCount(v7, 0LL);
  if ( !v8 )
  {
    while ( 1 )
    {
      v11 = (UnityEngine_Component_o *)this->fields.currentLimitCntGrid;
      if ( !v11 )
        break;
      v12 = UnityEngine_Component__get_transform(v11, 0LL);
      if ( !v12 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v12, v9, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v9 < 0 )
        goto LABEL_15;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_15:
  v15 = __OFSUB__(v10, 1);
  v16 = v10 - 1;
  if ( v16 < 0 == v15 )
  {
    while ( 1 )
    {
      currentSvtEqLimitCntGrid = (UnityEngine_Component_o *)this->fields.currentSvtEqLimitCntGrid;
      if ( !currentSvtEqLimitCntGrid )
        break;
      v18 = UnityEngine_Component__get_transform(currentSvtEqLimitCntGrid, 0LL);
      if ( !v18 )
        break;
      v19 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v18, v16, 0LL);
      if ( !v19 )
        break;
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v20, 0LL);
      if ( --v16 < 0 )
        return;
    }
    goto LABEL_24;
  }
}


void __fastcall SvtCombineResultWindowComponent__destroyResStatusGrid(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resLimitCntGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Transform_o *v7; // x0
  bool v8; // cc
  int32_t v9; // w21
  int32_t v10; // w20
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x22
  bool v15; // vf
  int32_t v16; // w20
  UnityEngine_Component_o *resSvtEqLimitCntGrid; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Object_o *v20; // x21

  if ( (byte_40FDA6A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDA6A = 1;
  }
  resLimitCntGrid = (UnityEngine_Component_o *)this->fields.resLimitCntGrid;
  if ( !resLimitCntGrid )
    goto LABEL_24;
  transform = UnityEngine_Component__get_transform(resLimitCntGrid, 0LL);
  if ( !transform )
    goto LABEL_24;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  if ( !this->fields.resSvtEqLimitCntGrid )
    goto LABEL_24;
  v6 = childCount;
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid, 0LL);
  if ( !v7 )
    goto LABEL_24;
  v9 = v6 - 1;
  v8 = v6 < 1;
  v10 = UnityEngine_Transform__get_childCount(v7, 0LL);
  if ( !v8 )
  {
    while ( 1 )
    {
      v11 = (UnityEngine_Component_o *)this->fields.resLimitCntGrid;
      if ( !v11 )
        break;
      v12 = UnityEngine_Component__get_transform(v11, 0LL);
      if ( !v12 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v12, v9, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v9 < 0 )
        goto LABEL_15;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_15:
  v15 = __OFSUB__(v10, 1);
  v16 = v10 - 1;
  if ( v16 < 0 == v15 )
  {
    while ( 1 )
    {
      resSvtEqLimitCntGrid = (UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid;
      if ( !resSvtEqLimitCntGrid )
        break;
      v18 = UnityEngine_Component__get_transform(resSvtEqLimitCntGrid, 0LL);
      if ( !v18 )
        break;
      v19 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v18, v16, 0LL);
      if ( !v19 )
        break;
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v20, 0LL);
      if ( --v16 < 0 )
        return;
    }
    goto LABEL_24;
  }
}


void __fastcall SvtCombineResultWindowComponent__enabledLvInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lvUpInfo; // x0

  lvUpInfo = this->fields.lvUpInfo;
  if ( !lvUpInfo )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(lvUpInfo, this->fields.endDispLvInfoFlg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setAfterSvtResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *resData,
        int32_t svtCollectionLv,
        System_Action_o *callback,
        System_Action_o *endTutorialCb,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w0
  _BOOL4 isEqCombine; // w8
  UnityEngine_Component_o *resSvtEqLimitCntGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w23
  UnityEngine_Component_o *resLimitCntGrid; // x0
  UnityEngine_Transform_o *v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_resLimitCntList; // x25
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w26
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v67; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x20
  __int64 v69; // x21
  __int64 v70; // x22
  int32_t v71; // w0
  ServantEntity_o *Entity; // x0
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_40FDA60 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, resData);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FDA60 = 1;
  }
  this->fields.resUsrSvtData = resData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
    (System_Int32_array **)resData,
    *(System_String_array ***)&svtCollectionLv,
    (System_String_array **)callback,
    (System_Boolean_array **)endTutorialCb,
    (System_Int32_array **)method,
    v6,
    v7);
  resUsrSvtData = this->fields.resUsrSvtData;
  this->fields.baseSvtCollectionLv = svtCollectionLv;
  if ( !resUsrSvtData )
    goto LABEL_29;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.resLvMax = LevelMax;
  if ( isEqCombine )
  {
    resSvtEqLimitCntGrid = (UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid;
    if ( !resSvtEqLimitCntGrid )
      goto LABEL_29;
  }
  else
  {
    resSvtEqLimitCntGrid = (UnityEngine_Component_o *)this->fields.resLimitCntGrid;
    if ( !resSvtEqLimitCntGrid )
      goto LABEL_29;
  }
  transform = UnityEngine_Component__get_transform(resSvtEqLimitCntGrid, 0LL);
  if ( !transform )
    goto LABEL_29;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  if ( this->fields.isEqCombine )
  {
    resLimitCntGrid = (UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid;
    if ( !resLimitCntGrid )
      goto LABEL_29;
  }
  else
  {
    resLimitCntGrid = (UnityEngine_Component_o *)this->fields.resLimitCntGrid;
    if ( !resLimitCntGrid )
      goto LABEL_29;
  }
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  v26 = UnityEngine_Component__get_transform(resLimitCntGrid, 0LL);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resLimitCntList,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( childCount >= 1 )
  {
    if ( v26 )
    {
      v45 = 0;
      while ( 1 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v26, v45, 0LL);
        if ( !Child )
          break;
        gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
        if ( !*p_resLimitCntList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_resLimitCntList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( ++v45 >= childCount )
          goto LABEL_19;
      }
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_19:
  this->fields.openCallBack = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endTutorialCallBack,
    (System_Int32_array **)endTutorialCb,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v54,
                                                                                                  v55,
                                                                                                  v56,
                                                                                                  v57);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v58;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v67 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_29;
  v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v70 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v76.fields.currentCryptoKey = v70;
  *(_QWORD *)&v76.fields.fakeValue = v69;
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v76, 0LL);
  if ( !v68 )
    goto LABEL_29;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v68,
                                v71,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_29;
  if ( ServantEntity__get_IsServant(Entity, 0LL) )
  {
    SvtCombineResultWindowComponent__checkQuestOpen(this, v73);
    SvtCombineResultWindowComponent__checkGetSkill(this, v74);
  }
  SvtCombineResultWindowComponent__showGetExp(this, v73);
}


void __fastcall SvtCombineResultWindowComponent__setBaseAdjustInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  struct UserServantEntity_o *v5; // x8
  int32_t adjustHp; // w25
  BalanceConfig_c *v7; // x0
  int32_t baseMaxHpAdjustVal; // w26
  int32_t StatusUpAdjustHp; // w23
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  UILabel_o *currentAdjustHpMaxLabel; // x0
  const MethodInfo *v12; // x2
  struct UserServantEntity_o *v13; // x8
  int32_t adjustAtk; // w23
  int32_t baseMaxAtkAdjustVal; // w25
  int32_t StatusUpAdjustAtk; // w21
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  UILabel_o *currentAdjustAtkMaxLabel; // x0
  const MethodInfo *v19; // x2

  if ( (byte_40FDA5D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FDA5D = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_OWORD *)&this->fields.baseMaxHpAdjustVal = 0u;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  UserServantEntity__GetAdjustMax(
    baseUsrSvtData,
    &this->fields.baseMaxHpAdjustVal,
    &this->fields.baseMaxAtkAdjustVal,
    &this->fields.baseSecondMaxHpAdjustVal,
    &this->fields.baseSecondMaxAtkAdjustVal,
    0LL);
  v5 = this->fields.baseUsrSvtData;
  if ( !v5 )
    goto LABEL_25;
  adjustHp = v5->fields.adjustHp;
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = this->fields.baseUsrSvtData;
    if ( !v5 )
      goto LABEL_25;
    v7 = BalanceConfig_TypeInfo;
  }
  baseMaxHpAdjustVal = this->fields.baseMaxHpAdjustVal;
  StatusUpAdjustHp = v7->static_fields->StatusUpAdjustHp;
  if ( v5->fields.adjustHp >= baseMaxHpAdjustVal )
    baseMaxHpAdjustVal = this->fields.baseSecondMaxHpAdjustVal;
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7);
  if ( !currentAdjustHpIconLabel )
    goto LABEL_25;
  UIIconLabel__Set_40377052(
    currentAdjustHpIconLabel,
    44,
    StatusUpAdjustHp * adjustHp,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * baseMaxHpAdjustVal,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  currentAdjustHpMaxLabel = this->fields.currentAdjustHpMaxLabel;
  if ( !currentAdjustHpMaxLabel )
    goto LABEL_25;
  UILabel__set_text(currentAdjustHpMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.baseUsrSvtData, v12);
  v13 = this->fields.baseUsrSvtData;
  if ( !v13 )
    goto LABEL_25;
  adjustAtk = v13->fields.adjustAtk;
  baseMaxAtkAdjustVal = this->fields.baseMaxAtkAdjustVal;
  StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
  if ( adjustAtk >= baseMaxAtkAdjustVal )
    baseMaxAtkAdjustVal = this->fields.baseSecondMaxAtkAdjustVal;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !currentAdjustAtkIconLabel
    || (UIIconLabel__Set_40377052(
          currentAdjustAtkIconLabel,
          45,
          StatusUpAdjustAtk * adjustAtk,
          BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * baseMaxAtkAdjustVal,
          0,
          0LL,
          0,
          0,
          0,
          0LL),
        (currentAdjustAtkMaxLabel = this->fields.currentAdjustAtkMaxLabel) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  UILabel__set_text(currentAdjustAtkMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setBefResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *baseData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  UserServantEntity_o **p_baseUsrSvtData; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  struct UserServantEntity_o *v20; // x8
  UIExtrusionLabel_o *currentLvLb; // x22
  System_String_o *v22; // x0
  UILabel_o *currentMaxLvLb; // x22
  System_String_o *v24; // x0
  struct UserServantEntity_o *v25; // x8
  UIExtrusionLabel_o *resLvLb; // x22
  System_String_o *v27; // x0
  UILabel_o *resMaxLvLb; // x22
  System_String_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Component_o *v38; // x0
  WebViewObject_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Component_o *resHpLb; // x0
  WebViewObject_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Component_o *resAtkLb; // x0
  WebViewObject_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UIWidget_o *resLvWidget; // x24
  int v63; // s0
  UIWidget_o *resMaxLvWidget; // x23
  int v68; // s0
  UIWidget_o *resHpWidget; // x22
  int v73; // s0
  UIWidget_o *resAtkWidget; // x21
  int v78; // s0
  UIProgressBar_o *currentExpBar; // x0
  UILabel_o *currentExpValLb; // x21
  System_String_o *v84; // x0
  UIProgressBar_o *resCrExpBar; // x0
  UnityEngine_Component_o *resExpBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t LimitCntMax; // w0
  UserServantEntity_o *v89; // x8
  int32_t v90; // w20
  __int64 v91; // x21
  __int64 v92; // x22
  int32_t v93; // w0
  struct UserServantEntity_o *v94; // x8
  int32_t v95; // w21
  UnityEngine_Component_o *currentLimitCntGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v98; // x4
  UIGrid_o *v99; // x0
  UnityEngine_Component_o *resLimitCntGrid; // x0
  int32_t baseLimitCnt; // w21
  UnityEngine_Transform_o *v102; // x0
  const MethodInfo *v103; // x4
  UIGrid_o *v104; // x0
  struct UserServantEntity_o *v105; // x8
  UILabel_o *currentHpLb; // x20
  System_String_o *v107; // x0
  struct UserServantEntity_o *v108; // x8
  UILabel_o *v109; // x20
  System_String_o *v110; // x0
  struct UserServantEntity_o *v111; // x8
  UILabel_o *currentAtkLb; // x20
  System_String_o *v113; // x0
  struct UserServantEntity_o *v114; // x8
  UILabel_o *v115; // x20
  System_String_o *v116; // x0
  UnityEngine_GameObject_o *msgInfo; // x0
  UnityEngine_GameObject_o *AdjustInfo; // x0
  const MethodInfo *v119; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  UnityEngine_GameObject_o *svtCombineInfoObject; // x0
  UnityEngine_GameObject_o *svtEqCombineInfoObject; // x0
  UnityEngine_GameObject_o *v129; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  System_Action_o *v134; // x20
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16

  if ( (byte_40FDA5B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SvtCombineResultWindowComponent_EndOpen__, v7);
    sub_B16FFC(&StringLiteral_340, v8);
    sub_B16FFC(&StringLiteral_9236, v9);
    byte_40FDA5B = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_49;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 0;
  if ( !baseUsrSvtData )
    goto LABEL_49;
  LevelMax = UserServantEntity__getLevelMax(baseUsrSvtData, 0LL);
  v20 = this->fields.baseUsrSvtData;
  this->fields.baseLvMax = LevelMax;
  if ( !v20 )
    goto LABEL_49;
  currentLvLb = this->fields.currentLvLb;
  v22 = System_Int32__ToString((int)v20 + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_49;
  UIExtrusionLabel__set_text(currentLvLb, v22, 0LL);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  v24 = System_Int32__ToString((int)this + 696, 0LL);
  if ( !currentMaxLvLb )
    goto LABEL_49;
  UILabel__set_text(currentMaxLvLb, v24, 0LL);
  v25 = this->fields.baseUsrSvtData;
  if ( !v25 )
    goto LABEL_49;
  resLvLb = this->fields.resLvLb;
  v27 = System_Int32__ToString((int)v25 + 256, 0LL);
  if ( !resLvLb )
    goto LABEL_49;
  UIExtrusionLabel__set_text(resLvLb, v27, 0LL);
  resMaxLvLb = this->fields.resMaxLvLb;
  v29 = System_Int32__ToString((int)this + 696, 0LL);
  if ( !resMaxLvLb )
    goto LABEL_49;
  UILabel__set_text(resMaxLvLb, v29, 0LL);
  v30 = (UnityEngine_Component_o *)this->fields.resLvLb;
  if ( !v30 )
    goto LABEL_49;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v30,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resLvWidget,
    (System_Int32_array **)Component_WebViewObject,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (UnityEngine_Component_o *)this->fields.resMaxLvLb;
  if ( !v38 )
    goto LABEL_49;
  v39 = UnityEngine_Component__GetComponent_WebViewObject_(
          v38,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resMaxLvWidget,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  resHpLb = (UnityEngine_Component_o *)this->fields.resHpLb;
  if ( !resHpLb )
    goto LABEL_49;
  v47 = UnityEngine_Component__GetComponent_WebViewObject_(
          resHpLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resHpWidget = (struct UIWidget_o *)v47;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resHpWidget,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  resAtkLb = (UnityEngine_Component_o *)this->fields.resAtkLb;
  if ( !resAtkLb )
    goto LABEL_49;
  v55 = UnityEngine_Component__GetComponent_WebViewObject_(
          resAtkLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resAtkWidget = (struct UIWidget_o *)v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resAtkWidget,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  resLvWidget = this->fields.resLvWidget;
  *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_white(0LL);
  if ( !resLvWidget )
    goto LABEL_49;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)&v63, 0LL);
  resMaxLvWidget = this->fields.resMaxLvWidget;
  *(UnityEngine_Color_o *)&v68 = UnityEngine_Color__get_white(0LL);
  if ( !resMaxLvWidget )
    goto LABEL_49;
  UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)&v68, 0LL);
  resHpWidget = this->fields.resHpWidget;
  *(UnityEngine_Color_o *)&v73 = UnityEngine_Color__get_white(0LL);
  if ( !resHpWidget )
    goto LABEL_49;
  UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)&v73, 0LL);
  resAtkWidget = this->fields.resAtkWidget;
  *(UnityEngine_Color_o *)&v78 = UnityEngine_Color__get_white(0LL);
  if ( !resAtkWidget )
    goto LABEL_49;
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)&v78, 0LL);
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  UserServantEntity__getExpInfo(*p_baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
  currentExpBar = (UIProgressBar_o *)this->fields.currentExpBar;
  if ( !currentExpBar )
    goto LABEL_49;
  UIProgressBar__set_value(currentExpBar, barExp, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  v84 = System_Int32__ToString_38275808((int32_t)lateExp, (System_String_o *)StringLiteral_340, 0LL);
  if ( !currentExpValLb )
    goto LABEL_49;
  UILabel__set_text(currentExpValLb, v84, 0LL);
  resCrExpBar = (UIProgressBar_o *)this->fields.resCrExpBar;
  if ( !resCrExpBar )
    goto LABEL_49;
  UIProgressBar__set_value(resCrExpBar, barExp, 0LL);
  resExpBar = (UnityEngine_Component_o *)this->fields.resExpBar;
  if ( !resExpBar )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject(resExpBar, 0LL);
  if ( !gameObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  LimitCntMax = UserServantEntity__getLimitCntMax(*p_baseUsrSvtData, 0LL);
  v89 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  v90 = LimitCntMax;
  v92 = *(_QWORD *)&v89->fields.limitCount.fields.currentCryptoKey;
  v91 = *(_QWORD *)&v89->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v137.fields.currentCryptoKey = v92;
  *(_QWORD *)&v137.fields.fakeValue = v91;
  v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v137, 0LL);
  v94 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = v93;
  if ( !v94 )
    goto LABEL_49;
  v95 = v93;
  currentLimitCntGrid = (UnityEngine_Component_o *)this->fields.currentLimitCntGrid;
  this->fields.baseHpVal = v94->fields.hp;
  this->fields.baseAtkVal = v94->fields.atk;
  if ( !currentLimitCntGrid )
    goto LABEL_49;
  transform = UnityEngine_Component__get_transform(currentLimitCntGrid, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v90, v95, transform, v98);
  v99 = this->fields.currentLimitCntGrid;
  if ( !v99 )
    goto LABEL_49;
  UIGrid__set_repositionNow(v99, 1, 0LL);
  resLimitCntGrid = (UnityEngine_Component_o *)this->fields.resLimitCntGrid;
  if ( !resLimitCntGrid )
    goto LABEL_49;
  baseLimitCnt = this->fields.baseLimitCnt;
  v102 = UnityEngine_Component__get_transform(resLimitCntGrid, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v90, baseLimitCnt, v102, v103);
  v104 = this->fields.resLimitCntGrid;
  if ( !v104 )
    goto LABEL_49;
  UIGrid__set_repositionNow(v104, 1, 0LL);
  v105 = this->fields.baseUsrSvtData;
  if ( !v105 )
    goto LABEL_49;
  currentHpLb = this->fields.currentHpLb;
  v107 = System_Int32__ToString_38275808((int)v105 + 268, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !currentHpLb )
    goto LABEL_49;
  UILabel__set_text(currentHpLb, v107, 0LL);
  v108 = this->fields.baseUsrSvtData;
  if ( !v108 )
    goto LABEL_49;
  v109 = this->fields.resHpLb;
  v110 = System_Int32__ToString_38275808((int)v108 + 268, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !v109 )
    goto LABEL_49;
  UILabel__set_text(v109, v110, 0LL);
  v111 = this->fields.baseUsrSvtData;
  if ( !v111 )
    goto LABEL_49;
  currentAtkLb = this->fields.currentAtkLb;
  v113 = System_Int32__ToString_38275808((int)v111 + 264, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !currentAtkLb )
    goto LABEL_49;
  UILabel__set_text(currentAtkLb, v113, 0LL);
  v114 = this->fields.baseUsrSvtData;
  if ( !v114 )
    goto LABEL_49;
  v115 = this->fields.resAtkLb;
  v116 = System_Int32__ToString_38275808((int)v114 + 264, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !v115 )
    goto LABEL_49;
  UILabel__set_text(v115, v116, 0LL);
  msgInfo = this->fields.msgInfo;
  if ( !msgInfo )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(msgInfo, 0, 0LL);
  AdjustInfo = this->fields.AdjustInfo;
  if ( !AdjustInfo )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(AdjustInfo, 1, 0LL);
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v119);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lvUpInfo,
    (System_Int32_array **)lvInfo,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  svtCombineInfoObject = this->fields.svtCombineInfoObject;
  if ( !svtCombineInfoObject
    || (UnityEngine_GameObject__SetActive(svtCombineInfoObject, 1, 0LL),
        (svtEqCombineInfoObject = this->fields.svtEqCombineInfoObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(svtEqCombineInfoObject, 0, 0LL),
        (v129 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_49:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v129, 1, 0LL);
  v134 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v130, v131, v132, v133);
  System_Action___ctor(v134, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v134, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setBefSvtEqResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *baseData,
        int32_t resInfo,
        int32_t normalExp,
        int32_t addExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  UserServantEntity_o **p_baseUsrSvtData; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  struct UserServantEntity_o *v32; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x23
  System_String_o *v34; // x0
  UILabel_o *currentSvtEqMaxLvLb; // x23
  System_String_o *v36; // x0
  struct UserServantEntity_o *v37; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x23
  System_String_o *v39; // x0
  UILabel_o *resSvtEqMaxLvLb; // x23
  System_String_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Component_o *v50; // x0
  WebViewObject_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Component_o *resSvtEqHpLb; // x0
  WebViewObject_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_Component_o *resSvtEqAtkLb; // x0
  WebViewObject_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UIWidget_o *resLvWidget; // x25
  int v75; // s0
  UIWidget_o *resMaxLvWidget; // x24
  int v80; // s0
  UIWidget_o *resHpWidget; // x23
  int v85; // s0
  UIWidget_o *resAtkWidget; // x22
  int v90; // s0
  UIProgressBar_o *currentSvtEqExpBar; // x0
  UILabel_o *currentSvtEqExpValLb; // x22
  System_String_o *v96; // x0
  UIProgressBar_o *resSvtEqCrExpBar; // x0
  UnityEngine_Component_o *resSvtEqExpBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t LimitCntMax; // w0
  UserServantEntity_o *v101; // x8
  int32_t v102; // w21
  __int64 v103; // x22
  __int64 v104; // x23
  int32_t v105; // w0
  struct UserServantEntity_o *v106; // x8
  int32_t v107; // w22
  UnityEngine_Component_o *currentSvtEqLimitCntGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v110; // x4
  UIGrid_o *currentLimitCntGrid; // x0
  UnityEngine_Component_o *resSvtEqLimitCntGrid; // x0
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *v114; // x0
  const MethodInfo *v115; // x4
  UIGrid_o *resLimitCntGrid; // x0
  struct UserServantEntity_o *v117; // x8
  UILabel_o *currentSvtEqHpLb; // x21
  System_String_o *v119; // x0
  struct UserServantEntity_o *v120; // x8
  UILabel_o *v121; // x21
  System_String_o *v122; // x0
  struct UserServantEntity_o *v123; // x8
  UILabel_o *currentSvtEqAtkLb; // x21
  System_String_o *v125; // x0
  struct UserServantEntity_o *v126; // x8
  UILabel_o *v127; // x21
  System_String_o *v128; // x0
  UILabel_o *normalExpLb; // x21
  System_String_o *v130; // x0
  UILabel_o *normalExpOverSpLb; // x21
  System_String_o *v132; // x0
  UnityEngine_Component_o *v133; // x0
  WebViewObject_o *v134; // x21
  int v135; // s0
  UnityEngine_Component_o *v139; // x0
  WebViewObject_o *v140; // x0
  UIWidget_o *v141; // x22
  UnityEngine_GameObject_o *v142; // x0
  UnityEngine_GameObject_o *v143; // x24
  UnityEngine_GameObject_o *v144; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  srcLineSprite_o *v146; // x0
  srcLineSprite_o *v147; // x20
  UnityEngine_Component_o *v148; // x0
  UnityEngine_GameObject_o *v149; // x0
  SvtCombineResultWindowComponent_c *v150; // x0
  System_String_o *v151; // x0
  Il2CppObject *v152; // x0
  System_String_o *v153; // x0
  System_String_o *v154; // x20
  UnityEngine_Transform_o *v155; // x0
  UnityEngine_GameObject_o *Effect; // x0
  UnityEngine_GameObject_o *v157; // x20
  UnityEngine_Transform_o *v158; // x0
  UnityEngine_Transform_o *v159; // x21
  UnityEngine_Transform_o *v160; // x0
  int v161; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_Animation_o *v165; // x20
  UILabel_o *addExpLb; // x20
  System_String_o *v167; // x0
  UnityEngine_GameObject_o *msgInfo; // x0
  UnityEngine_GameObject_o *AdjustInfo; // x0
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  UnityEngine_GameObject_o *svtEqCombineInfoObject; // x0
  UnityEngine_GameObject_o *svtCombineInfoObject; // x0
  UnityEngine_GameObject_o *v179; // x0
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x3
  __int64 v183; // x4
  System_Action_o *v184; // x20
  int32_t m_stringLength; // [xsp+8h] [xbp-58h] BYREF
  float barExp; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lateExp[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t v188; // [xsp+18h] [xbp-48h] BYREF
  int32_t v189; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16

  v188 = addExp;
  v189 = normalExp;
  if ( (byte_40FDA5C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&Method_SvtCombineResultWindowComponent_EndOpen__, v17);
    sub_B16FFC(&SvtCombineResultWindowComponent_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_340, v19);
    sub_B16FFC(&StringLiteral_9236, v20);
    sub_B16FFC(&StringLiteral_4142, v21);
    byte_40FDA5C = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 1;
  if ( !baseUsrSvtData )
    goto LABEL_96;
  LevelMax = UserServantEntity__getLevelMax(baseUsrSvtData, 0LL);
  v32 = this->fields.baseUsrSvtData;
  this->fields.baseLvMax = LevelMax;
  if ( !v32 )
    goto LABEL_96;
  currentSvtEqLvLb = this->fields.currentSvtEqLvLb;
  v34 = System_Int32__ToString((int)v32 + 256, 0LL);
  if ( !currentSvtEqLvLb )
    goto LABEL_96;
  UIExtrusionLabel__set_text(currentSvtEqLvLb, v34, 0LL);
  currentSvtEqMaxLvLb = this->fields.currentSvtEqMaxLvLb;
  v36 = System_Int32__ToString((int)this + 696, 0LL);
  if ( !currentSvtEqMaxLvLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqMaxLvLb, v36, 0LL);
  v37 = this->fields.baseUsrSvtData;
  if ( !v37 )
    goto LABEL_96;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  v39 = System_Int32__ToString((int)v37 + 256, 0LL);
  if ( !resSvtEqLvLb )
    goto LABEL_96;
  UIExtrusionLabel__set_text(resSvtEqLvLb, v39, 0LL);
  resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
  v41 = System_Int32__ToString((int)this + 696, 0LL);
  if ( !resSvtEqMaxLvLb )
    goto LABEL_96;
  UILabel__set_text(resSvtEqMaxLvLb, v41, 0LL);
  v42 = (UnityEngine_Component_o *)this->fields.resSvtEqLvLb;
  if ( !v42 )
    goto LABEL_96;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v42,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resLvWidget,
    (System_Int32_array **)Component_WebViewObject,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (UnityEngine_Component_o *)this->fields.resSvtEqMaxLvLb;
  if ( !v50 )
    goto LABEL_96;
  v51 = UnityEngine_Component__GetComponent_WebViewObject_(
          v50,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v51;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resMaxLvWidget,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  resSvtEqHpLb = (UnityEngine_Component_o *)this->fields.resSvtEqHpLb;
  if ( !resSvtEqHpLb )
    goto LABEL_96;
  v59 = UnityEngine_Component__GetComponent_WebViewObject_(
          resSvtEqHpLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resHpWidget = (struct UIWidget_o *)v59;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resHpWidget,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  resSvtEqAtkLb = (UnityEngine_Component_o *)this->fields.resSvtEqAtkLb;
  if ( !resSvtEqAtkLb )
    goto LABEL_96;
  v67 = UnityEngine_Component__GetComponent_WebViewObject_(
          resSvtEqAtkLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resAtkWidget = (struct UIWidget_o *)v67;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resAtkWidget,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  resLvWidget = this->fields.resLvWidget;
  *(UnityEngine_Color_o *)&v75 = UnityEngine_Color__get_white(0LL);
  if ( !resLvWidget )
    goto LABEL_96;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)&v75, 0LL);
  resMaxLvWidget = this->fields.resMaxLvWidget;
  *(UnityEngine_Color_o *)&v80 = UnityEngine_Color__get_white(0LL);
  if ( !resMaxLvWidget )
    goto LABEL_96;
  UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)&v80, 0LL);
  resHpWidget = this->fields.resHpWidget;
  *(UnityEngine_Color_o *)&v85 = UnityEngine_Color__get_white(0LL);
  if ( !resHpWidget )
    goto LABEL_96;
  UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)&v85, 0LL);
  resAtkWidget = this->fields.resAtkWidget;
  *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_white(0LL);
  if ( !resAtkWidget )
    goto LABEL_96;
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)&v90, 0LL);
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  UserServantEntity__getExpInfo(*p_baseUsrSvtData, &lateExp[1], lateExp, &barExp, 0LL);
  currentSvtEqExpBar = (UIProgressBar_o *)this->fields.currentSvtEqExpBar;
  if ( !currentSvtEqExpBar )
    goto LABEL_96;
  UIProgressBar__set_value(currentSvtEqExpBar, barExp, 0LL);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  v96 = System_Int32__ToString_38275808((int32_t)lateExp, (System_String_o *)StringLiteral_340, 0LL);
  if ( !currentSvtEqExpValLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqExpValLb, v96, 0LL);
  resSvtEqCrExpBar = (UIProgressBar_o *)this->fields.resSvtEqCrExpBar;
  if ( !resSvtEqCrExpBar )
    goto LABEL_96;
  UIProgressBar__set_value(resSvtEqCrExpBar, barExp, 0LL);
  resSvtEqExpBar = (UnityEngine_Component_o *)this->fields.resSvtEqExpBar;
  if ( !resSvtEqExpBar )
    goto LABEL_96;
  gameObject = UnityEngine_Component__get_gameObject(resSvtEqExpBar, 0LL);
  if ( !gameObject )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  LimitCntMax = UserServantEntity__getLimitCntMax(*p_baseUsrSvtData, 0LL);
  v101 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  v102 = LimitCntMax;
  v104 = *(_QWORD *)&v101->fields.limitCount.fields.currentCryptoKey;
  v103 = *(_QWORD *)&v101->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v190.fields.currentCryptoKey = v104;
  *(_QWORD *)&v190.fields.fakeValue = v103;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v190, 0LL);
  v106 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = v105;
  if ( !v106 )
    goto LABEL_96;
  v107 = v105;
  currentSvtEqLimitCntGrid = (UnityEngine_Component_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = v106->fields.hp;
  this->fields.baseAtkVal = v106->fields.atk;
  if ( !currentSvtEqLimitCntGrid )
    goto LABEL_96;
  transform = UnityEngine_Component__get_transform(currentSvtEqLimitCntGrid, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v102, v107, transform, v110);
  currentLimitCntGrid = this->fields.currentLimitCntGrid;
  if ( !currentLimitCntGrid )
    goto LABEL_96;
  UIGrid__set_repositionNow(currentLimitCntGrid, 1, 0LL);
  resSvtEqLimitCntGrid = (UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !resSvtEqLimitCntGrid )
    goto LABEL_96;
  baseLimitCnt = this->fields.baseLimitCnt;
  v114 = UnityEngine_Component__get_transform(resSvtEqLimitCntGrid, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v102, baseLimitCnt, v114, v115);
  resLimitCntGrid = this->fields.resLimitCntGrid;
  if ( !resLimitCntGrid )
    goto LABEL_96;
  UIGrid__set_repositionNow(resLimitCntGrid, 1, 0LL);
  v117 = this->fields.baseUsrSvtData;
  if ( !v117 )
    goto LABEL_96;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  v119 = System_Int32__ToString_38275808((int)v117 + 268, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !currentSvtEqHpLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqHpLb, v119, 0LL);
  v120 = this->fields.baseUsrSvtData;
  if ( !v120 )
    goto LABEL_96;
  v121 = this->fields.resSvtEqHpLb;
  v122 = System_Int32__ToString_38275808((int)v120 + 268, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !v121 )
    goto LABEL_96;
  UILabel__set_text(v121, v122, 0LL);
  v123 = this->fields.baseUsrSvtData;
  if ( !v123 )
    goto LABEL_96;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  v125 = System_Int32__ToString_38275808((int)v123 + 264, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !currentSvtEqAtkLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqAtkLb, v125, 0LL);
  v126 = this->fields.baseUsrSvtData;
  if ( !v126 )
    goto LABEL_96;
  v127 = this->fields.resSvtEqAtkLb;
  v128 = System_Int32__ToString_38275808((int)v126 + 264, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !v127 )
    goto LABEL_96;
  UILabel__set_text(v127, v128, 0LL);
  normalExpLb = this->fields.normalExpLb;
  v130 = System_Int32__ToString_38275808((int32_t)&v189, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !normalExpLb )
    goto LABEL_96;
  UILabel__set_text(normalExpLb, v130, 0LL);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  v132 = System_Int32__ToString_38275808((int32_t)&v189, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !normalExpOverSpLb )
    goto LABEL_96;
  UILabel__set_text(normalExpOverSpLb, v132, 0LL);
  v133 = (UnityEngine_Component_o *)this->fields.normalExpLb;
  if ( !v133 )
    goto LABEL_96;
  v134 = UnityEngine_Component__GetComponent_WebViewObject_(
           v133,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v135 = UnityEngine_Color__get_white(0LL);
  if ( !v134 )
    goto LABEL_96;
  UIWidget__set_color((UIWidget_o *)v134, *(UnityEngine_Color_o *)&v135, 0LL);
  v139 = (UnityEngine_Component_o *)this->fields.normalExpOverSpLb;
  if ( !v139 )
    goto LABEL_96;
  v140 = UnityEngine_Component__GetComponent_WebViewObject_(
           v139,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_96;
  v141 = (UIWidget_o *)v140;
  v142 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.normalExpOverSpLb, 0LL);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_96;
  v143 = v142;
  v144 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.normalExpOverSpLb, 0LL);
  if ( !v144 )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(v144, 0, 0LL);
  if ( !v143 )
    goto LABEL_96;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v143,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v146 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
           v143,
           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
    goto LABEL_89;
  v147 = v146;
  v148 = (UnityEngine_Component_o *)this->fields.normalExpOverSpLb;
  if ( !v148 )
    goto LABEL_96;
  v149 = UnityEngine_Component__get_gameObject(v148, 0LL);
  if ( !v149 )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(v149, 1, 0LL);
  v150 = SvtCombineResultWindowComponent_TypeInfo;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v150 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color((UIWidget_o *)v134, v150->static_fields->COLOR_VAL, 0LL);
  if ( !v141 )
    goto LABEL_96;
  UIWidget__set_color(v141, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_96;
    LODWORD(Component_srcLineSprite->fields.mcLineSprite) = 0x40000000;
    UITweener__Play((UITweener_o *)Component_srcLineSprite, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v147, 0LL, 0LL) )
  {
    if ( !v147 )
      goto LABEL_96;
    LODWORD(v147->fields.mcLineSprite) = 0x40000000;
    UITweener__Play((UITweener_o *)v147, 0LL);
  }
  v151 = System_Int32__ToString((int32_t)&v189, 0LL);
  if ( !v151 )
    goto LABEL_96;
  m_stringLength = v151->fields.m_stringLength;
  v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_stringLength);
  v153 = System_String__Format((System_String_o *)StringLiteral_4142, v152, 0LL);
  if ( !this->fields.dispNodeObj )
    goto LABEL_96;
  v154 = v153;
  v155 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL);
  Effect = CombineResultEffectComponent__getEffect(v154, v155, 0LL);
  if ( !Effect
    || (v157 = Effect, v158 = UnityEngine_GameObject__get_transform(Effect, 0LL), !this->fields.dispNodeObj)
    || (v159 = v158, (v160 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v161 = UnityEngine_Transform__get_localPosition(v160, 0LL), !v159) )
  {
LABEL_96:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localPosition(v159, *(UnityEngine_Vector3_o *)&v161, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                v157,
                                                (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v165 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                      v157,
                                      (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL) )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_96;
    SimpleAnimation__Play((SimpleAnimation_o *)ComponentInChildren_Dropdown_DropdownItem, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v165, 0LL, 0LL) )
    {
      if ( !v165 )
        goto LABEL_96;
      UnityEngine_Animation__Play(v165, 0LL);
    }
  }
LABEL_89:
  addExpLb = this->fields.addExpLb;
  v167 = System_Int32__ToString_38275808((int32_t)&v188, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !addExpLb )
    goto LABEL_96;
  UILabel__set_text(addExpLb, v167, 0LL);
  msgInfo = this->fields.msgInfo;
  if ( !msgInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(msgInfo, 1, 0LL);
  AdjustInfo = this->fields.AdjustInfo;
  if ( !AdjustInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(AdjustInfo, 0, 0LL);
  svtEqLvInfo = this->fields.svtEqLvInfo;
  this->fields.lvUpInfo = svtEqLvInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lvUpInfo,
    (System_Int32_array **)svtEqLvInfo,
    v171,
    v172,
    v173,
    v174,
    v175,
    v176);
  svtEqCombineInfoObject = this->fields.svtEqCombineInfoObject;
  if ( !svtEqCombineInfoObject )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(svtEqCombineInfoObject, 1, 0LL);
  svtCombineInfoObject = this->fields.svtCombineInfoObject;
  if ( !svtCombineInfoObject )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(svtCombineInfoObject, 0, 0LL);
  v179 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v179 )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(v179, 1, 0LL);
  v184 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v180, v181, v182, v183);
  System_Action___ctor(v184, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v184, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setLimitCntInfo(
        SvtCombineResultWindowComponent_o *this,
        int32_t maxLimitCnt,
        int32_t svtLimitCnt,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int32_t v9; // w25
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v11; // x23
  UnityEngine_Transform_o *transform; // x24
  int v13; // s0
  SetLimitCntInfoComponent_o *Component_srcLineSprite; // x0

  if ( (byte_40FDA68 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, *(_QWORD *)&maxLimitCnt);
    byte_40FDA68 = 1;
  }
  if ( maxLimitCnt >= 1 )
  {
    v9 = 0;
    do
    {
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 this->fields.limitCntInfoObject,
                 root,
                 0LL,
                 0LL);
      if ( !Object
        || (v11 = Object,
            transform = UnityEngine_GameObject__get_transform(Object, 0LL),
            *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL),
            !transform)
        || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v13, 0LL),
            (Component_srcLineSprite = (SetLimitCntInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v11,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0LL) )
      {
        sub_B170D4();
      }
      SetLimitCntInfoComponent__setEnableOnImg(Component_srcLineSprite, v9++ < svtLimitCnt, 0LL);
    }
    while ( v9 < maxLimitCnt );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setResAdjustAtkInfo(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *targetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *resAdjustAtkIconLabel; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v9; // s0
  int32_t adjustAtk; // w21
  BalanceConfig_c *v14; // x0
  int32_t v15; // w8
  int32_t baseMaxAtkAdjustVal; // w23
  int32_t StatusUpAdjustAtk; // w24
  int32_t v18; // w8
  UIIconLabel_o *v19; // x0
  int32_t v20; // w21
  int32_t v21; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIIconLabel_o *v23; // x0
  UILabel_o *resAdjustAtkMaxLabel; // x0

  if ( (byte_40FDA5F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, targetData);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FDA5F = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resAdjustAtkIconLabel,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_23;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v9, 0LL);
  if ( !targetData )
    goto LABEL_23;
  adjustAtk = targetData->fields.adjustAtk;
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
    v15 = targetData->fields.adjustAtk;
  }
  else
  {
    v15 = targetData->fields.adjustAtk;
  }
  baseMaxAtkAdjustVal = this->fields.baseMaxAtkAdjustVal;
  StatusUpAdjustAtk = v14->static_fields->StatusUpAdjustAtk;
  if ( v15 >= baseMaxAtkAdjustVal )
    baseMaxAtkAdjustVal = this->fields.baseSecondMaxAtkAdjustVal;
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v18 = v14->static_fields->StatusUpAdjustAtk;
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v18 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
  }
  else
  {
    v18 = v14->static_fields->StatusUpAdjustAtk;
  }
  v19 = this->fields.resAdjustAtkIconLabel;
  if ( !v19 )
    goto LABEL_23;
  v20 = StatusUpAdjustAtk * adjustAtk;
  v21 = v18 * baseMaxAtkAdjustVal;
  UIIconLabel__Set_40377052(v19, 45, v20, v18 * baseMaxAtkAdjustVal, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  if ( !System_Int32__Equals_38275732((_DWORD)baseUsrSvtData + 272, targetData->fields.adjustAtk, 0LL) )
  {
    v23 = this->fields.resAdjustAtkIconLabel;
    this->fields.isAtkLimitUp = targetData->fields.adjustAtk == this->fields.baseMaxAtkAdjustVal;
    if ( !v23 )
      goto LABEL_23;
    UIIconLabel__SetCombineResTxt(
      v23,
      v20,
      v21,
      targetData->fields.adjustAtk == this->fields.baseSecondMaxAtkAdjustVal,
      0LL);
  }
  resAdjustAtkMaxLabel = this->fields.resAdjustAtkMaxLabel;
  if ( !resAdjustAtkMaxLabel )
LABEL_23:
    sub_B170D4();
  UILabel__set_text(resAdjustAtkMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setResAdjustHpInfo(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *targetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *resAdjustHpIconLabel; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v9; // s0
  int32_t adjustHp; // w21
  BalanceConfig_c *v14; // x0
  int32_t v15; // w8
  int32_t baseMaxHpAdjustVal; // w23
  int32_t StatusUpAdjustHp; // w24
  int32_t v18; // w8
  UIIconLabel_o *v19; // x0
  int32_t v20; // w21
  int32_t v21; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIIconLabel_o *v23; // x0
  UILabel_o *resAdjustHpMaxLabel; // x0

  if ( (byte_40FDA5E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, targetData);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FDA5E = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resAdjustHpIconLabel,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_23;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v9, 0LL);
  if ( !targetData )
    goto LABEL_23;
  adjustHp = targetData->fields.adjustHp;
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
    v15 = targetData->fields.adjustHp;
  }
  else
  {
    v15 = targetData->fields.adjustHp;
  }
  baseMaxHpAdjustVal = this->fields.baseMaxHpAdjustVal;
  StatusUpAdjustHp = v14->static_fields->StatusUpAdjustHp;
  if ( v15 >= baseMaxHpAdjustVal )
    baseMaxHpAdjustVal = this->fields.baseSecondMaxHpAdjustVal;
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v18 = v14->static_fields->StatusUpAdjustHp;
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v18 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
  }
  else
  {
    v18 = v14->static_fields->StatusUpAdjustHp;
  }
  v19 = this->fields.resAdjustHpIconLabel;
  if ( !v19 )
    goto LABEL_23;
  v20 = StatusUpAdjustHp * adjustHp;
  v21 = v18 * baseMaxHpAdjustVal;
  UIIconLabel__Set_40377052(v19, 44, v20, v18 * baseMaxHpAdjustVal, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  if ( !System_Int32__Equals_38275732((_DWORD)baseUsrSvtData + 276, targetData->fields.adjustHp, 0LL) )
  {
    v23 = this->fields.resAdjustHpIconLabel;
    this->fields.isHpLimitUp = targetData->fields.adjustHp == this->fields.baseMaxHpAdjustVal;
    if ( !v23 )
      goto LABEL_23;
    UIIconLabel__SetCombineResTxt(
      v23,
      v20,
      v21,
      targetData->fields.adjustHp == this->fields.baseSecondMaxHpAdjustVal,
      0LL);
  }
  resAdjustHpMaxLabel = this->fields.resAdjustHpMaxLabel;
  if ( !resAdjustHpMaxLabel )
LABEL_23:
    sub_B170D4();
  UILabel__set_text(resAdjustHpMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SvtCombineResultWindowComponent__setSvtExp(
        SvtCombineResultWindowComponent_o *this,
        int32_t getExp,
        int32_t nowExp,
        int32_t startLv,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w23
  WebViewManager_o *Instance; // x0
  ServantExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *baseSvtData; // x8
  ServantExpMaster_o *v14; // x25
  int32_t Level; // w0
  struct ServantEntity_o *v16; // x8
  int32_t v17; // w21
  ServantExpEntity_o *Entity; // x0
  struct ServantEntity_o *v19; // x8
  ServantExpEntity_o *v20; // x24
  ServantExpEntity_o *v21; // x0
  int32_t exp; // w8
  UIProgressBar_o *resSvtEqCrExpBar; // x0
  float v24; // s0

  if ( (byte_40FDA62 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FDA62 = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  baseSvtData = this->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_26;
  v14 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  Level = ServantExpMaster__getLevel(
            MasterData_WarQuestSelectionMaster,
            nowExp,
            baseSvtData->fields.expType,
            LevelMax,
            startLv,
            0LL);
  v16 = this->fields.baseSvtData;
  if ( !v16 )
    goto LABEL_26;
  v17 = Level;
  Entity = ServantExpMaster__GetEntity(v14, v16->fields.expType, Level, 0LL);
  v19 = this->fields.baseSvtData;
  if ( !v19 )
    goto LABEL_26;
  v20 = Entity;
  v21 = ServantExpMaster__GetEntity(v14, v19->fields.expType, v17 - 1, 0LL);
  if ( v21 )
    exp = v21->fields.exp;
  else
    exp = 0;
  if ( LevelMax != startLv )
  {
    if ( this->fields.isEqCombine )
    {
      if ( !v20 )
        goto LABEL_26;
      resSvtEqCrExpBar = (UIProgressBar_o *)this->fields.resSvtEqCrExpBar;
      if ( !resSvtEqCrExpBar )
        goto LABEL_26;
LABEL_24:
      v24 = 1.0 - (float)((float)(v20->fields.exp - nowExp) / (float)(v20->fields.exp - exp));
      goto LABEL_25;
    }
    if ( v20 )
    {
      resSvtEqCrExpBar = (UIProgressBar_o *)this->fields.resCrExpBar;
      if ( resSvtEqCrExpBar )
        goto LABEL_24;
    }
LABEL_26:
    sub_B170D4();
  }
  if ( this->fields.isEqCombine )
  {
    resSvtEqCrExpBar = (UIProgressBar_o *)this->fields.resSvtEqCrExpBar;
    if ( !resSvtEqCrExpBar )
      goto LABEL_26;
  }
  else
  {
    resSvtEqCrExpBar = (UIProgressBar_o *)this->fields.resCrExpBar;
    if ( !resSvtEqCrExpBar )
      goto LABEL_26;
  }
  v24 = 1.0;
LABEL_25:
  UIProgressBar__set_value(resSvtEqCrExpBar, v24, 0LL);
  return v17;
}


void __fastcall SvtCombineResultWindowComponent__showGetExp(
        SvtCombineResultWindowComponent_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x20
  __int64 v31; // x21
  __int64 v32; // x22
  int32_t v33; // w0
  struct ServantEntity_o *Entity; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v42; // w0
  int32_t v43; // w1
  const MethodInfo *v44; // x4
  struct UserServantEntity_o *v45; // x8
  int32_t atk; // w9
  struct UserServantEntity_o *v47; // x8
  struct UserServantEntity_o *v48; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v50; // x2
  __int64 v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Object_array *v58; // x21
  __int64 v59; // x0
  System_Int32_array **v60; // x1
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x22
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x22
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x22
  System_Collections_Hashtable_o *v119; // x0
  UILabel_o *resSvtEqMaxLvLb; // x20
  System_String_o *v121; // x0
  UIWidget_o *resMaxLvWidget; // x20
  SvtCombineResultWindowComponent_c *v123; // x0
  UILabel_o *infoLb; // x20
  System_String_o *v125; // x21
  Il2CppObject *v126; // x22
  Il2CppObject *v127; // x0
  System_String_o *v128; // x0
  UnityEngine_Component_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  UnityEngine_Component_o *v131; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct System_Collections_Generic_List_GameObject__o *resLimitCntList; // x22
  __int64 v134; // x20
  int size; // w8
  UnityEngine_GameObject_o *v136; // x0
  SetLimitCntInfoComponent_o *Component_srcLineSprite; // x0
  struct UserServantEntity_o *v138; // x8
  struct UserServantEntity_o *v139; // x9
  int32_t v140; // w0
  UILabel_o *resSvtEqHpLb; // x20
  System_String_o *v142; // x0
  UILabel_o *resHpLb; // x20
  System_String_o *v144; // x0
  const MethodInfo *v145; // x2
  UIWidget_o *resHpWidget; // x20
  SvtCombineResultWindowComponent_c *v147; // x0
  int32_t v148; // w0
  UILabel_o *resSvtEqAtkLb; // x20
  System_String_o *v150; // x0
  UILabel_o *resAtkLb; // x20
  System_String_o *v152; // x0
  const MethodInfo *v153; // x2
  UIWidget_o *resAtkWidget; // x19
  SvtCombineResultWindowComponent_c *v155; // x0
  int v156; // [xsp+Ch] [xbp-34h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-28h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16

  if ( (byte_40FDA61 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&object___TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&float_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&SvtCombineResultWindowComponent_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_18842, v15);
    sub_B16FFC(&StringLiteral_8663, v16);
    sub_B16FFC(&StringLiteral_22584, v17);
    sub_B16FFC(&StringLiteral_5927, v18);
    sub_B16FFC(&StringLiteral_21182, v19);
    sub_B16FFC(&StringLiteral_15009, v20);
    sub_B16FFC(&StringLiteral_9236, v21);
    sub_B16FFC(&StringLiteral_22621, v22);
    sub_B16FFC(&StringLiteral_12994, v23);
    sub_B16FFC(&StringLiteral_21179, v24);
    sub_B16FFC(&StringLiteral_21173, v25);
    sub_B16FFC(&iTween_TypeInfo, v26);
    byte_40FDA61 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_96;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v32 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v159.fields.currentCryptoKey = v32;
  *(_QWORD *)&v159.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v159, 0LL);
  if ( !v30 )
    goto LABEL_96;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v30,
                                       v33,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseSvtData,
    (System_Int32_array **)Entity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_96;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(resUsrSvtData->fields.limitCount, 0LL);
  v45 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = v42;
  if ( !v45 )
    goto LABEL_96;
  this->fields.resHpVal = v45->fields.hp;
  atk = v45->fields.atk;
  v47 = this->fields.baseUsrSvtData;
  this->fields.resAtkVal = atk;
  if ( !v47 )
    goto LABEL_96;
  SvtCombineResultWindowComponent__setSvtExp(this, v43, v47->fields.exp, v47->fields.lv, v44);
  v48 = this->fields.baseUsrSvtData;
  if ( !v48 )
    goto LABEL_96;
  this->fields.PrevLevel = v48->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v51 = sub_B17014(object___TypeInfo, 12LL, v50);
  if ( !v51 )
    goto LABEL_96;
  v58 = (System_Object_array *)v51;
  v59 = StringLiteral_18842;
  if ( StringLiteral_18842 )
  {
    v59 = sub_B170BC(StringLiteral_18842, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
    v60 = (System_Int32_array **)StringLiteral_18842;
  }
  else
  {
    v60 = 0LL;
  }
  if ( !v58->max_length )
    goto LABEL_123;
  v58->m_Items[0] = (Il2CppObject *)v60;
  sub_B16F98((BattleServantConfConponent_o *)v58->m_Items, v60, v52, v53, v54, v55, v56, v57);
  baseLvMax = 0;
  v59 = j_il2cpp_value_box_0(float_TypeInfo, &baseLvMax);
  v66 = (System_Int32_array **)v59;
  if ( v59 )
  {
    v59 = sub_B170BC(v59, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
  }
  if ( v58->max_length <= 1 )
    goto LABEL_123;
  v58->m_Items[1] = (Il2CppObject *)v66;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[1], v66, v52, v61, v62, v63, v64, v65);
  v59 = StringLiteral_22621;
  if ( StringLiteral_22621 )
  {
    v59 = sub_B170BC(StringLiteral_22621, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
    v60 = (System_Int32_array **)StringLiteral_22621;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v58->max_length <= 2 )
    goto LABEL_123;
  v58->m_Items[2] = (Il2CppObject *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[2], v60, v52, v67, v68, v69, v70, v71);
  resLvMax = 1065353216;
  v59 = j_il2cpp_value_box_0(float_TypeInfo, &resLvMax);
  v77 = (System_Int32_array **)v59;
  if ( v59 )
  {
    v59 = sub_B170BC(v59, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
  }
  if ( v58->max_length <= 3 )
    goto LABEL_123;
  v58->m_Items[3] = (Il2CppObject *)v77;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[3], v77, v52, v72, v73, v74, v75, v76);
  v59 = StringLiteral_21179;
  if ( StringLiteral_21179 )
  {
    v59 = sub_B170BC(StringLiteral_21179, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
    v60 = (System_Int32_array **)StringLiteral_21179;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v58->max_length <= 4 )
    goto LABEL_123;
  v58->m_Items[4] = (Il2CppObject *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[4], v60, v52, v78, v79, v80, v81, v82);
  v59 = StringLiteral_12994;
  if ( StringLiteral_12994 )
  {
    v59 = sub_B170BC(StringLiteral_12994, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
    v60 = (System_Int32_array **)StringLiteral_12994;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v58->max_length <= 5 )
    goto LABEL_123;
  v58->m_Items[5] = (Il2CppObject *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[5], v60, v52, v83, v84, v85, v86, v87);
  v59 = StringLiteral_21182;
  if ( StringLiteral_21182 )
  {
    v59 = sub_B170BC(StringLiteral_21182, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
    v60 = (System_Int32_array **)StringLiteral_21182;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v58->max_length <= 6 )
    goto LABEL_123;
  v58->m_Items[6] = (Il2CppObject *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[6], v60, v52, v88, v89, v90, v91, v92);
  v59 = StringLiteral_15009;
  if ( StringLiteral_15009 )
  {
    v59 = sub_B170BC(StringLiteral_15009, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
    v60 = (System_Int32_array **)StringLiteral_15009;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v58->max_length <= 7 )
    goto LABEL_123;
  v58->m_Items[7] = (Il2CppObject *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[7], v60, v52, v93, v94, v95, v96, v97);
  v59 = StringLiteral_21173;
  if ( StringLiteral_21173 )
  {
    v59 = sub_B170BC(StringLiteral_21173, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
    v60 = (System_Int32_array **)StringLiteral_21173;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v58->max_length <= 8 )
    goto LABEL_123;
  v58->m_Items[8] = (Il2CppObject *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[8], v60, v52, v98, v99, v100, v101, v102);
  v59 = StringLiteral_5927;
  if ( StringLiteral_5927 )
  {
    v59 = sub_B170BC(StringLiteral_5927, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
    v60 = (System_Int32_array **)StringLiteral_5927;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v58->max_length <= 9 )
    goto LABEL_123;
  v58->m_Items[9] = (Il2CppObject *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[9], v60, v52, v103, v104, v105, v106, v107);
  v59 = StringLiteral_22584;
  if ( StringLiteral_22584 )
  {
    v59 = sub_B170BC(StringLiteral_22584, v58->obj.klass->_1.element_class);
    if ( !v59 )
      goto LABEL_124;
    v60 = (System_Int32_array **)StringLiteral_22584;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v58->max_length <= 0xA )
    goto LABEL_123;
  v58->m_Items[10] = (Il2CppObject *)v60;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[10], v60, v52, v108, v109, v110, v111, v112);
  v156 = 0x40000000;
  v59 = j_il2cpp_value_box_0(float_TypeInfo, &v156);
  v118 = (System_Int32_array **)v59;
  if ( v59 )
  {
    v59 = sub_B170BC(v59, v58->obj.klass->_1.element_class);
    if ( !v59 )
    {
LABEL_124:
      sub_B170F4(v59);
      sub_B170A0();
    }
  }
  if ( v58->max_length <= 0xB )
  {
LABEL_123:
    sub_B17100(v59, v60, v52);
    sub_B170A0();
  }
  v58->m_Items[11] = (Il2CppObject *)v118;
  sub_B16F98((BattleServantConfConponent_o *)&v58->m_Items[11], v118, v52, v113, v114, v115, v116, v117);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v119 = iTween__Hash(v58, 0LL);
  iTween__ValueTo(gameObject, v119, 0LL);
  if ( this->fields.baseLimitCnt != this->fields.resLimitCnt )
  {
    if ( this->fields.isEqCombine )
      resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
    else
      resSvtEqMaxLvLb = this->fields.resMaxLvLb;
    v121 = System_Int32__ToString((int)this + 700, 0LL);
    if ( !resSvtEqMaxLvLb )
      goto LABEL_96;
    UILabel__set_text(resSvtEqMaxLvLb, v121, 0LL);
    resMaxLvWidget = this->fields.resMaxLvWidget;
    v123 = SvtCombineResultWindowComponent_TypeInfo;
    if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      v123 = SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resMaxLvWidget )
      goto LABEL_96;
    UIWidget__set_color(resMaxLvWidget, v123->static_fields->COLOR_VAL, 0LL);
    infoLb = this->fields.infoLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v125 = LocalizationManager__Get((System_String_o *)StringLiteral_8663, 0LL);
    baseLvMax = this->fields.baseLvMax;
    v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseLvMax);
    resLvMax = this->fields.resLvMax;
    v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &resLvMax);
    v128 = System_String__Format_43739268(v125, v126, v127, 0LL);
    if ( !infoLb )
      goto LABEL_96;
    UILabel__set_text(infoLb, v128, 0LL);
    v129 = (UnityEngine_Component_o *)this->fields.infoLb;
    if ( !v129 )
      goto LABEL_96;
    v130 = UnityEngine_Component__get_gameObject(v129, 0LL);
    if ( !v130 )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive(v130, 1, 0LL);
    v131 = (UnityEngine_Component_o *)this->fields.infoLb;
    if ( !v131 )
      goto LABEL_96;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v131,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Component_WebViewObject )
      goto LABEL_96;
    UITweener__Play((UITweener_o *)Component_WebViewObject, 0LL);
    resLimitCntList = this->fields.resLimitCntList;
    if ( !resLimitCntList )
      goto LABEL_96;
    v134 = 0LL;
    while ( 1 )
    {
      size = resLimitCntList->fields._size;
      if ( (int)v134 >= size )
        break;
      if ( size <= (unsigned int)v134 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v136 = resLimitCntList->fields._items->m_Items[v134];
      if ( v136 )
      {
        Component_srcLineSprite = (SetLimitCntInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v136,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Component_srcLineSprite )
        {
          SetLimitCntInfoComponent__setEnableOnImg(Component_srcLineSprite, (int)v134 < this->fields.resLimitCnt, 0LL);
          resLimitCntList = this->fields.resLimitCntList;
          ++v134;
          if ( resLimitCntList )
            continue;
        }
      }
      goto LABEL_96;
    }
  }
  v138 = this->fields.baseUsrSvtData;
  if ( !v138 )
    goto LABEL_96;
  v139 = this->fields.resUsrSvtData;
  if ( !v139 )
    goto LABEL_96;
  if ( v138->fields.lv != v139->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    v140 = (_DWORD)this + 708;
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      v142 = System_Int32__ToString_38275808(v140, (System_String_o *)StringLiteral_9236, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_96;
      UILabel__set_text(resSvtEqHpLb, v142, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      v144 = System_Int32__ToString_38275808(v140, (System_String_o *)StringLiteral_9236, 0LL);
      if ( !resHpLb )
        goto LABEL_96;
      UILabel__set_text(resHpLb, v144, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v145);
    }
    resHpWidget = this->fields.resHpWidget;
    v147 = SvtCombineResultWindowComponent_TypeInfo;
    if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      v147 = SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resHpWidget )
      goto LABEL_96;
    UIWidget__set_color(resHpWidget, v147->static_fields->COLOR_VAL, 0LL);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  v148 = (_DWORD)this + 716;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    v150 = System_Int32__ToString_38275808(v148, (System_String_o *)StringLiteral_9236, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_96;
    UILabel__set_text(resSvtEqAtkLb, v150, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    v152 = System_Int32__ToString_38275808(v148, (System_String_o *)StringLiteral_9236, 0LL);
    if ( !resAtkLb )
      goto LABEL_96;
    UILabel__set_text(resAtkLb, v152, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v153);
  }
  resAtkWidget = this->fields.resAtkWidget;
  v155 = SvtCombineResultWindowComponent_TypeInfo;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v155 = SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resAtkWidget )
LABEL_96:
    sub_B170D4();
  UIWidget__set_color(resAtkWidget, v155->static_fields->COLOR_VAL, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1

  if ( (byte_40FDA65 & 1) == 0 )
  {
    sub_B16FFC(&iTween_TypeInfo, callback);
    byte_40FDA65 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
  SvtCombineResultWindowComponent__UpdateValue(this, 1.0, v6);
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall SvtCombineResultWindowComponent___c__DisplayClass127_0___ctor(
        SvtCombineResultWindowComponent___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SvtCombineResultWindowComponent___c__DisplayClass127_0___EndOpen_b__0(
        SvtCombineResultWindowComponent___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B170D4();
  System_Action__Invoke(callback, 0LL);
}