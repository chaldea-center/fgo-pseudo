// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int v5; // s0
  int v6; // s1
  int v7; // s2
  struct SvtCombineResultWindowComponent_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  SvtCombineResultWindowComponent_c *v16; // x8
  struct SvtCombineResultWindowComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UnityEngine_Color_o v25; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_435794D & 1) == 0 )
  {
    sub_B70694(&SvtCombineResultWindowComponent_TypeInfo);
    sub_B70694(&StringLiteral_4232/*"Combine/"*/);
    sub_B70694(&StringLiteral_978/*"0"*/);
    byte_435794D = 1;
  }
  v5 = 1065185444;
  v6 = 1064430469;
  v7 = 1050790593;
  v25 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41064944(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, (const MethodInfo *)&v25);
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = v25;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  v9 = (System_Int32_array **)StringLiteral_4232/*"Combine/"*/;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4232/*"Combine/"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->TUTORIAL_FOLDER, v9, v10, v11, v12, v13, v14, v15);
  v16 = SvtCombineResultWindowComponent_TypeInfo;
  SvtCombineResultWindowComponent_TypeInfo->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = 25;
  v16->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL = 26;
  v16->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 27;
  v17 = v16->static_fields;
  v18 = (System_Int32_array **)StringLiteral_978/*"0"*/;
  v17->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_978/*"0"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->INIT_VAL_TXT, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall SvtCombineResultWindowComponent___ctor(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_435794C & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_435794C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__ClickSkip(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_435794B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SvtCombineResultWindowComponent_EndDisp__);
    byte_435794B = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_B7076C(0LL, method);
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0LL) )
  {
    v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndDisp__, 0LL);
    SvtCombineResultWindowComponent__skipExp(this, v4, v5);
  }
}


void __fastcall SvtCombineResultWindowComponent__Close(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4357949 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SvtCombineResultWindowComponent_EndClose__);
    byte_4357949 = 1;
  }
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  SvtCombineResultWindowComponent__Close_35053076(this, v4, v5);
}


void __fastcall SvtCombineResultWindowComponent__Close_35053076(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_435794A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SvtCombineResultWindowComponent_EndClose__);
    byte_435794A = 1;
  }
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__EndClose(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  SvtCombineResultWindowComponent__destroyCurrentStatusGrid(this, v5);
  SvtCombineResultWindowComponent__destroyResStatusGrid(this, v6);
}


void __fastcall SvtCombineResultWindowComponent__EndDisp(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0
  const MethodInfo *v4; // x1
  OpenInfoWindowComponent_o *openInfowindowComp; // x20
  System_Collections_Generic_List_GameObject__o *resInfoList; // x21
  System_Action_o *v7; // x22

  if ( (byte_4357941 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_SvtCombineResultWindowComponent_EndOpen__);
    byte_4357941 = 1;
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
    v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v7, 1, 0LL);
      return;
    }
LABEL_12:
    sub_B7076C(skipCollider, method);
  }
  SvtCombineResultWindowComponent__EndOpen(this, v4);
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
  System_Action_o *openCallBack; // x19
  __int64 v10; // x19
  SvtCombineResultWindowComponent_c *v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **endTutorialCallBack; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x0
  _BOOL4 isHpLimitUp; // w9
  _BOOL4 isAtkLimitUp; // w8
  System_Int32_array *v29; // x20
  int32_t *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL; // x8
  CommonUI_o *Instance; // x21
  System_Action_o *v32; // x22
  __int64 v33; // x0

  if ( (byte_4357948 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SvtCombineResultWindowComponent_TypeInfo);
    sub_B70694(&Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__);
    sub_B70694(&SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo);
    byte_4357948 = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(openCallBack, 0LL);
  }
  if ( this->fields.endTutorialCallBack )
  {
    v10 = sub_B70764(SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo);
    SvtCombineResultWindowComponent___c__DisplayClass127_0___ctor(
      (SvtCombineResultWindowComponent___c__DisplayClass127_0_o *)v10,
      0LL);
    if ( !v10 )
      goto LABEL_34;
    endTutorialCallBack = (System_Int32_array **)this->fields.endTutorialCallBack;
    *(_QWORD *)(v10 + 16) = endTutorialCallBack;
    sub_B70630((BattleServantConfConponent_o *)(v10 + 16), endTutorialCallBack, v13, v14, v15, v16, v17, v18);
    this->fields.endTutorialCallBack = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.endTutorialCallBack, 0LL, v20, v21, v22, v23, v24, v25);
    if ( this->fields.isHpLimitUp || this->fields.isAtkLimitUp )
    {
      v26 = sub_B706AC(int___TypeInfo, 1LL);
      isHpLimitUp = this->fields.isHpLimitUp;
      isAtkLimitUp = this->fields.isAtkLimitUp;
      v29 = (System_Int32_array *)v26;
      if ( isHpLimitUp )
      {
        v11 = SvtCombineResultWindowComponent_TypeInfo;
        if ( isAtkLimitUp )
        {
          if ( (WORD1(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v11 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v29 )
            goto LABEL_34;
          if ( v29->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v11->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_31:
            v29->m_Items[1] = *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_32:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v32 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v32,
              (Il2CppObject *)v10,
              Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__OpenImageDialogAssets(Instance, v29, 2, v32, 0LL);
              return;
            }
LABEL_34:
            sub_B7076C(v11, v12);
          }
        }
        else
        {
          if ( (WORD1(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v11 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v29 )
            goto LABEL_34;
          if ( v29->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v11->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
            goto LABEL_31;
          }
        }
      }
      else
      {
        if ( !isAtkLimitUp )
          goto LABEL_32;
        v11 = SvtCombineResultWindowComponent_TypeInfo;
        if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
          v11 = SvtCombineResultWindowComponent_TypeInfo;
        }
        if ( !v29 )
          goto LABEL_34;
        if ( v29->max_length )
        {
          p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v11->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
          goto LABEL_31;
        }
      }
      v33 = sub_B70798(v11);
      sub_B70738(v33, 0LL);
    }
  }
}


void __fastcall SvtCombineResultWindowComponent__InitStateInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UIExtrusionLabel_o *currentLvLb; // x20
  UILabel_o *currentMaxLvLb; // x0

  if ( (byte_4357937 & 1) == 0 )
  {
    sub_B70694(&SvtCombineResultWindowComponent_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4357937 = 1;
  }
  currentLvLb = this->fields.currentLvLb;
  currentMaxLvLb = (UILabel_o *)SvtCombineResultWindowComponent_TypeInfo;
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
  currentMaxLvLb = (UILabel_o *)this->fields.currentExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.currentExpValLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentSvtEqLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UIExtrusionLabel__set_text(
    (UIExtrusionLabel_o *)currentMaxLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0LL);
  currentMaxLvLb = this->fields.currentSvtEqMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentSvtEqExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.currentSvtEqExpValLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentSvtEqHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentSvtEqAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentAdjustHpIconLabel;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0LL);
  currentMaxLvLb = this->fields.currentAdjustHpMaxLabel;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0LL);
  currentMaxLvLb = this->fields.currentAdjustAtkMaxLabel;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.resLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UIExtrusionLabel__set_text(
    (UIExtrusionLabel_o *)currentMaxLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0LL);
  currentMaxLvLb = this->fields.resMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.resCrExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.resHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.resAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.resSvtEqLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UIExtrusionLabel__set_text(
    (UIExtrusionLabel_o *)currentMaxLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0LL);
  currentMaxLvLb = this->fields.resSvtEqMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.resSvtEqCrExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.resSvtEqHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.resSvtEqAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_37;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.resAdjustHpIconLabel;
  if ( !currentMaxLvLb
    || (UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0LL),
        (currentMaxLvLb = this->fields.resAdjustHpMaxLabel) == 0LL)
    || (UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (currentMaxLvLb = (UILabel_o *)this->fields.resAdjustAtkIconLabel) == 0LL)
    || (UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0LL),
        (currentMaxLvLb = this->fields.resAdjustAtkMaxLabel) == 0LL) )
  {
LABEL_37:
    sub_B7076C(currentMaxLvLb, method);
  }
  UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  void *resUsrSvtData; // x0
  int v6; // w21
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v8; // x9
  float v9; // s0
  int32_t exp; // w20
  const MethodInfo *v11; // x4
  struct UserServantEntity_o *v12; // x8
  struct UserServantEntity_o *v13; // x8
  struct UserServantEntity_o *v14; // x8
  int32_t v15; // w20
  UITweener_o *v16; // x21
  _BOOL4 isEqCombine; // w8
  UIExtrusionLabel_o *v18; // x20
  UIWidget_o *resLvWidget; // x20
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v22; // x2
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v26; // x2
  UIWidget_o *resAtkWidget; // x19
  int32_t afterAtk; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t afterHp[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4357940 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&SvtCombineResultWindowComponent_TypeInfo);
    sub_B70694(&StringLiteral_9376/*"N0"*/);
    byte_4357940 = 1;
  }
  *(_QWORD *)afterHp = 0LL;
  afterAtk = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_56;
  resUsrSvtData = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_56;
  v6 = (int)resUsrSvtData;
  UnityEngine_Collider__set_enabled(this->fields.skipCollider, 1, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_56;
  v8 = this->fields.resUsrSvtData;
  if ( !v8 )
    goto LABEL_56;
  v9 = UnityEngine_Mathf__Lerp((float)baseUsrSvtData->fields.exp, (float)v8->fields.exp, val, 0LL);
  exp = UnityEngine_Mathf__FloorToInt(v9, 0LL);
  resUsrSvtData = (void *)UnityEngine_Mathf__Approximately(1.0, val, 0LL);
  v12 = this->fields.resUsrSvtData;
  if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_56;
    exp = v12->fields.exp;
  }
  else if ( !v12 )
  {
    goto LABEL_56;
  }
  v13 = this->fields.baseUsrSvtData;
  if ( !v13 )
    goto LABEL_56;
  resUsrSvtData = (void *)SvtCombineResultWindowComponent__setSvtExp(this, (int32_t)method, exp, v13->fields.lv, v11);
  afterHp[1] = (int)resUsrSvtData;
  v14 = this->fields.baseUsrSvtData;
  if ( !v14 )
    goto LABEL_56;
  if ( v14->fields.lv == v6 )
    return;
  v15 = (int)resUsrSvtData;
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
  if ( v15 == this->fields.PrevLevel )
  {
    this->fields.endDispLvInfoFlg = 1;
    return;
  }
  resUsrSvtData = this->fields.lvUpInfo;
  if ( !resUsrSvtData )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resUsrSvtData, 1, 0LL);
  resUsrSvtData = this->fields.lvUpInfo;
  if ( !resUsrSvtData )
    goto LABEL_56;
  resUsrSvtData = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                    (UnityEngine_GameObject_o *)resUsrSvtData,
                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !resUsrSvtData )
    goto LABEL_56;
  v16 = (UITweener_o *)resUsrSvtData;
  UITweener__ResetToBeginning((UITweener_o *)resUsrSvtData, 0LL);
  UITweener__Play(v16, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v15;
  this->fields.endDispLvInfoFlg = 0;
  v18 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  resUsrSvtData = System_Int32__ToString((int32_t)&afterHp[1], 0LL);
  if ( !v18 )
    goto LABEL_56;
  UIExtrusionLabel__set_text(v18, (System_String_o *)resUsrSvtData, 0LL);
  resLvWidget = this->fields.resLvWidget;
  resUsrSvtData = SvtCombineResultWindowComponent_TypeInfo;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    resUsrSvtData = SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resLvWidget )
    goto LABEL_56;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)*((_QWORD *)resUsrSvtData + 23), 0LL);
  resUsrSvtData = this->fields.checkResInfo;
  if ( !resUsrSvtData )
    goto LABEL_56;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)resUsrSvtData,
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
      resUsrSvtData = System_Int32__ToString_39283984((int32_t)afterHp, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_56;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)resUsrSvtData, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      resUsrSvtData = System_Int32__ToString_39283984((int32_t)afterHp, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_56;
      UILabel__set_text(resHpLb, (System_String_o *)resUsrSvtData, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v22);
    }
    resUsrSvtData = SvtCombineResultWindowComponent_TypeInfo;
    resHpWidget = this->fields.resHpWidget;
    if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      resUsrSvtData = SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resHpWidget )
      goto LABEL_56;
    UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)*((_QWORD *)resUsrSvtData + 23), 0LL);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    resUsrSvtData = System_Int32__ToString_39283984((int32_t)&afterAtk, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_56;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)resUsrSvtData, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    resUsrSvtData = System_Int32__ToString_39283984((int32_t)&afterAtk, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_56;
    UILabel__set_text(resAtkLb, (System_String_o *)resUsrSvtData, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v26);
  }
  resUsrSvtData = SvtCombineResultWindowComponent_TypeInfo;
  resAtkWidget = this->fields.resAtkWidget;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    resUsrSvtData = SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resAtkWidget )
LABEL_56:
    sub_B7076C(resUsrSvtData, method);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*((_QWORD *)resUsrSvtData + 23), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__checkGetSkill(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  UserServantEntity_o *v4; // x20
  int64_t hiddenValue; // x8
  UserServantEntity_o *v6; // x21
  unsigned __int64 v7; // x23
  int64_t *p_fakeValue; // x24
  int32_t i; // w22
  int32_t v10; // w20
  WarEntity_o *Entity; // x0
  UILabel_o *skillGetInfoTitle; // x21
  SkillEntity_o *v13; // x20
  UILabel_o *skillGetInfoDetail; // x21
  System_String_o *v15; // x22
  Il2CppObject *Name; // x0
  __int64 v17; // x0

  if ( (byte_4357944 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_6973/*"GET_SKILL_NAME"*/);
    sub_B70694(&StringLiteral_6975/*"GET_SKILL_TITLE"*/);
    byte_4357944 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_27;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(baseUsrSvtData, -1, -1, 1, -1, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_27;
  v4 = baseUsrSvtData;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(
                                            this->fields.resUsrSvtData,
                                            -1,
                                            -1,
                                            1,
                                            -1,
                                            0LL);
  if ( !v4 )
    goto LABEL_27;
  hiddenValue = v4->fields.id.fields.hiddenValue;
  if ( (int)hiddenValue < 1 )
    return;
  v6 = baseUsrSvtData;
  v7 = 0LL;
  p_fakeValue = &baseUsrSvtData->fields.id.fields.fakeValue;
  for ( i = (_DWORD)v4 + 32; ; i += 4 )
  {
    if ( !v6 )
      goto LABEL_27;
    if ( v7 >= LODWORD(v6->fields.id.fields.hiddenValue) || v7 >= (unsigned int)hiddenValue )
      goto LABEL_26;
    baseUsrSvtData = (UserServantEntity_o *)System_Int32__Equals_39283908(i, *((_DWORD *)p_fakeValue + v7), 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
      break;
    LODWORD(hiddenValue) = v4->fields.id.fields.hiddenValue;
    if ( (__int64)++v7 >= (int)hiddenValue )
      return;
  }
  if ( (unsigned int)v7 >= LODWORD(v6->fields.id.fields.hiddenValue) )
  {
LABEL_26:
    v17 = sub_B70798(baseUsrSvtData);
    sub_B70738(v17, 0LL);
  }
  v10 = *((_DWORD *)&v6->fields.id.fields.fakeValue + v7);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_27;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_27;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)baseUsrSvtData,
             v10,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  v13 = (SkillEntity_o *)Entity;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6975/*"GET_SKILL_TITLE"*/, 0LL);
  if ( !skillGetInfoTitle )
    goto LABEL_27;
  UILabel__set_text(skillGetInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6973/*"GET_SKILL_NAME"*/, 0LL);
  if ( !v13
    || (v15 = (System_String_o *)baseUsrSvtData,
        Name = (Il2CppObject *)SkillEntity__getName(v13, 0LL),
        baseUsrSvtData = (UserServantEntity_o *)System_String__Format(v15, Name, 0LL),
        !skillGetInfoDetail)
    || (UILabel__set_text(skillGetInfoDetail, (System_String_o *)baseUsrSvtData, 0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.resInfoList) == 0LL) )
  {
LABEL_27:
    sub_B7076C(baseUsrSvtData, method);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)baseUsrSvtData,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillGetInfo,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetNewSkill = 1;
}


void __fastcall SvtCombineResultWindowComponent__checkQuestOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x0
  clsQuestCheck_o *Instance; // x0
  __int64 v5; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  System_Collections_Generic_List_int__o *v10; // x0
  UILabel_o *storyQuestInfoTitle; // x21
  System_Collections_Generic_List_int__o *v12; // x20
  UILabel_o *heroQuestInfoTitle; // x21
  __int64 size; // x8
  __int64 i; // x24
  int32_t monitor; // w8
  clsQuestCheck_o *v17; // x21
  UILabel_o *storyQuestInfoDetail; // x22
  System_String_o *v19; // x0
  struct UnityEngine_GameObject_o *heroQuestInfo; // x1
  UILabel_o *eventQuestInfoDetail; // x22
  System_String_o *v22; // x0
  UILabel_o *heroQuestInfoDetail; // x22
  System_String_o *v24; // x0
  __int64 v25; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4357943 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&StringLiteral_9888/*"OPEN_STORY_QUEST_TITLE"*/);
    sub_B70694(&StringLiteral_9874/*"OPEN_EVENT_QUEST_NAME"*/);
    sub_B70694(&StringLiteral_9877/*"OPEN_HERO_QUEST_TITLE"*/);
    byte_4357943 = 1;
  }
  this->fields.isOpenQuest = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_51;
  v7 = Instance;
  v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v9;
  *(_QWORD *)&v26.fields.fakeValue = v8;
  Instance = (clsQuestCheck_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v26, 0LL);
  if ( !v7 )
    goto LABEL_51;
  v10 = clsQuestCheck__GetReleaseQuestIdByServantLv(v7, (int32_t)Instance, this->fields.baseSvtCollectionLv, 0LL);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v12 = v10;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9888/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, (System_String_o *)Instance, 0LL),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9877/*"OPEN_HERO_QUEST_TITLE"*/, 0LL),
        !heroQuestInfoTitle) )
  {
LABEL_51:
    sub_B7076C(Instance, v5);
  }
  UILabel__set_text(heroQuestInfoTitle, (System_String_o *)Instance, 0LL);
  if ( v12 )
  {
    LODWORD(size) = v12->fields._size;
    if ( (int)size >= 1 )
    {
      for ( i = 8LL; ; ++i )
      {
        if ( i - 8 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( *((int *)&v12->fields._items->obj.klass + i) < 1 )
          goto LABEL_49;
        Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_51;
        Instance = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( i - 8 >= (unsigned __int64)(unsigned int)v12->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !Instance )
          goto LABEL_51;
        Instance = (clsQuestCheck_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        *((_DWORD *)&v12->fields._items->obj.klass + i),
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_51;
        monitor = (int32_t)Instance[1].monitor;
        v17 = Instance;
        if ( monitor == 6 )
        {
          heroQuestInfoDetail = this->fields.heroQuestInfoDetail;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9874/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
          Instance = (clsQuestCheck_o *)System_String__Format(v24, (Il2CppObject *)v17->fields.cQuestReleaseListP, 0LL);
          if ( !heroQuestInfoDetail )
            goto LABEL_51;
          UILabel__set_text(heroQuestInfoDetail, (System_String_o *)Instance, 0LL);
          Instance = (clsQuestCheck_o *)this->fields.resInfoList;
          if ( !Instance )
            goto LABEL_51;
          heroQuestInfo = this->fields.heroQuestInfo;
          goto LABEL_48;
        }
        if ( monitor == 5 )
          break;
        if ( monitor == 3 )
        {
          storyQuestInfoDetail = this->fields.storyQuestInfoDetail;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9874/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
          Instance = (clsQuestCheck_o *)System_String__Format(v19, (Il2CppObject *)v17->fields.cQuestReleaseListP, 0LL);
          if ( !storyQuestInfoDetail )
            goto LABEL_51;
          UILabel__set_text(storyQuestInfoDetail, (System_String_o *)Instance, 0LL);
          Instance = (clsQuestCheck_o *)this->fields.resInfoList;
          if ( !Instance )
            goto LABEL_51;
          heroQuestInfo = this->fields.storyQuestInfo;
LABEL_48:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)heroQuestInfo,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          this->fields.isOpenQuest = 1;
        }
LABEL_49:
        size = v12->fields._size;
        v25 = i - 7;
        if ( v25 >= size )
          return;
      }
      eventQuestInfoDetail = this->fields.eventQuestInfoDetail;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9874/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
      Instance = (clsQuestCheck_o *)System_String__Format(v22, (Il2CppObject *)v17->fields.cQuestReleaseListP, 0LL);
      if ( !eventQuestInfoDetail )
        goto LABEL_51;
      UILabel__set_text(eventQuestInfoDetail, (System_String_o *)Instance, 0LL);
      Instance = (clsQuestCheck_o *)this->fields.resInfoList;
      if ( !Instance )
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
  int v4; // w20
  bool v5; // cc
  int32_t v6; // w21
  int32_t childCount; // w20
  UnityEngine_Object_o *gameObject; // x22
  bool v9; // vf
  int32_t v10; // w20
  UnityEngine_Object_o *v11; // x21

  if ( (byte_4357946 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357946 = 1;
  }
  currentLimitCntGrid = (UnityEngine_Component_o *)this->fields.currentLimitCntGrid;
  if ( !currentLimitCntGrid )
    goto LABEL_24;
  currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentLimitCntGrid, 0LL);
  if ( !currentLimitCntGrid )
    goto LABEL_24;
  currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                     (UnityEngine_Transform_o *)currentLimitCntGrid,
                                                     0LL);
  if ( !this->fields.currentSvtEqLimitCntGrid )
    goto LABEL_24;
  v4 = (int)currentLimitCntGrid;
  currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.currentSvtEqLimitCntGrid,
                                                     0LL);
  if ( !currentLimitCntGrid )
    goto LABEL_24;
  v6 = v4 - 1;
  v5 = v4 < 1;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)currentLimitCntGrid, 0LL);
  if ( !v5 )
  {
    while ( 1 )
    {
      currentLimitCntGrid = (UnityEngine_Component_o *)this->fields.currentLimitCntGrid;
      if ( !currentLimitCntGrid )
        break;
      currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentLimitCntGrid, 0LL);
      if ( !currentLimitCntGrid )
        break;
      currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)currentLimitCntGrid,
                                                         v6,
                                                         0LL);
      if ( !currentLimitCntGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_15;
    }
LABEL_24:
    sub_B7076C(currentLimitCntGrid, method);
  }
LABEL_15:
  v9 = __OFSUB__(childCount, 1);
  v10 = childCount - 1;
  if ( v10 < 0 == v9 )
  {
    while ( 1 )
    {
      currentLimitCntGrid = (UnityEngine_Component_o *)this->fields.currentSvtEqLimitCntGrid;
      if ( !currentLimitCntGrid )
        break;
      currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentLimitCntGrid, 0LL);
      if ( !currentLimitCntGrid )
        break;
      currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)currentLimitCntGrid,
                                                         v10,
                                                         0LL);
      if ( !currentLimitCntGrid )
        break;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v11, 0LL);
      if ( --v10 < 0 )
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
  int v4; // w20
  bool v5; // cc
  int32_t v6; // w21
  int32_t childCount; // w20
  UnityEngine_Object_o *gameObject; // x22
  bool v9; // vf
  int32_t v10; // w20
  UnityEngine_Object_o *v11; // x21

  if ( (byte_4357947 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357947 = 1;
  }
  resLimitCntGrid = (UnityEngine_Component_o *)this->fields.resLimitCntGrid;
  if ( !resLimitCntGrid )
    goto LABEL_24;
  resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resLimitCntGrid, 0LL);
  if ( !resLimitCntGrid )
    goto LABEL_24;
  resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)resLimitCntGrid,
                                                 0LL);
  if ( !this->fields.resSvtEqLimitCntGrid )
    goto LABEL_24;
  v4 = (int)resLimitCntGrid;
  resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid,
                                                 0LL);
  if ( !resLimitCntGrid )
    goto LABEL_24;
  v6 = v4 - 1;
  v5 = v4 < 1;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resLimitCntGrid, 0LL);
  if ( !v5 )
  {
    while ( 1 )
    {
      resLimitCntGrid = (UnityEngine_Component_o *)this->fields.resLimitCntGrid;
      if ( !resLimitCntGrid )
        break;
      resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resLimitCntGrid, 0LL);
      if ( !resLimitCntGrid )
        break;
      resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)resLimitCntGrid,
                                                     v6,
                                                     0LL);
      if ( !resLimitCntGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_15;
    }
LABEL_24:
    sub_B7076C(resLimitCntGrid, method);
  }
LABEL_15:
  v9 = __OFSUB__(childCount, 1);
  v10 = childCount - 1;
  if ( v10 < 0 == v9 )
  {
    while ( 1 )
    {
      resLimitCntGrid = (UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid;
      if ( !resLimitCntGrid )
        break;
      resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resLimitCntGrid, 0LL);
      if ( !resLimitCntGrid )
        break;
      resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)resLimitCntGrid,
                                                     v10,
                                                     0LL);
      if ( !resLimitCntGrid )
        break;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v11, 0LL);
      if ( --v10 < 0 )
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
    sub_B7076C(0LL, method);
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
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w0
  _BOOL4 isEqCombine; // w8
  int32_t childCount; // w23
  UnityEngine_Transform_o *transform; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_resLimitCntList; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t v33; // w26
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct UserServantEntity_o *v47; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x20
  __int64 v49; // x21
  __int64 v50; // x22
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_435793D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435793D = 1;
  }
  this->fields.resUsrSvtData = resData;
  sub_B70630(
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
    resUsrSvtData = (UserServantEntity_o *)this->fields.resSvtEqLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_29;
  }
  else
  {
    resUsrSvtData = (UserServantEntity_o *)this->fields.resLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_29;
  }
  resUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)resUsrSvtData,
                                           0LL);
  if ( !resUsrSvtData )
    goto LABEL_29;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resUsrSvtData, 0LL);
  if ( this->fields.isEqCombine )
  {
    resUsrSvtData = (UserServantEntity_o *)this->fields.resSvtEqLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_29;
  }
  else
  {
    resUsrSvtData = (UserServantEntity_o *)this->fields.resLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_29;
  }
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resLimitCntList,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( childCount >= 1 )
  {
    if ( transform )
    {
      v33 = 0;
      while ( 1 )
      {
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Transform__GetChild(transform, v33, 0LL);
        if ( !resUsrSvtData )
          break;
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)resUsrSvtData,
                                                 0LL);
        if ( !*p_resLimitCntList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_resLimitCntList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)resUsrSvtData,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( ++v33 >= childCount )
          goto LABEL_19;
      }
    }
LABEL_29:
    sub_B7076C(resUsrSvtData, v13);
  }
LABEL_19:
  this->fields.openCallBack = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.endTutorialCallBack,
    (System_Int32_array **)endTutorialCb,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v40;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_29;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_29;
  v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)resUsrSvtData;
  v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v50;
  *(_QWORD *)&v54.fields.fakeValue = v49;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v54, 0LL);
  if ( !v48 )
    goto LABEL_29;
  resUsrSvtData = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v48,
                                           (int32_t)resUsrSvtData,
                                           (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !resUsrSvtData )
    goto LABEL_29;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    SvtCombineResultWindowComponent__checkQuestOpen(this, v51);
    SvtCombineResultWindowComponent__checkGetSkill(this, v52);
  }
  SvtCombineResultWindowComponent__showGetExp(this, v51);
}


void __fastcall SvtCombineResultWindowComponent__setBaseAdjustInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  struct UserServantEntity_o *v4; // x8
  int32_t adjustHp; // w25
  int32_t baseMaxHpAdjustVal; // w26
  int v7; // w23
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  const MethodInfo *v9; // x2
  struct UserServantEntity_o *v10; // x8
  int32_t adjustAtk; // w23
  int32_t baseMaxAtkAdjustVal; // w25
  int32_t StatusUpAdjustAtk; // w21
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  const MethodInfo *v15; // x2

  if ( (byte_435793A & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435793A = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_OWORD *)&this->fields.baseMaxHpAdjustVal = 0u;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__GetAdjustMax(
                                            baseUsrSvtData,
                                            &this->fields.baseMaxHpAdjustVal,
                                            &this->fields.baseMaxAtkAdjustVal,
                                            &this->fields.baseSecondMaxHpAdjustVal,
                                            &this->fields.baseSecondMaxAtkAdjustVal,
                                            0LL);
  v4 = this->fields.baseUsrSvtData;
  if ( !v4 )
    goto LABEL_25;
  adjustHp = v4->fields.adjustHp;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = this->fields.baseUsrSvtData;
    if ( !v4 )
      goto LABEL_25;
    baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  }
  baseMaxHpAdjustVal = this->fields.baseMaxHpAdjustVal;
  v7 = *(_DWORD *)(*(_QWORD *)&baseUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 304LL);
  if ( v4->fields.adjustHp >= baseMaxHpAdjustVal )
    baseMaxHpAdjustVal = this->fields.baseSecondMaxHpAdjustVal;
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( (baseUsrSvtData->fields.createdAt & 0x4000000) != 0
    && !baseUsrSvtData->fields.randomLimitCountSupport.fields.currentCryptoKey )
  {
    j_il2cpp_runtime_class_init_0(baseUsrSvtData);
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_25;
  UIIconLabel__Set_41432452(
    currentAdjustHpIconLabel,
    44,
    v7 * adjustHp,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * baseMaxHpAdjustVal,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.baseUsrSvtData, v9);
  v10 = this->fields.baseUsrSvtData;
  if ( !v10 )
    goto LABEL_25;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  adjustAtk = v10->fields.adjustAtk;
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
    || (UIIconLabel__Set_41432452(
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
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustAtkMaxLabel) == 0LL) )
  {
LABEL_25:
    sub_B7076C(baseUsrSvtData, method);
  }
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setBefResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *baseData,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x22
  UILabel_o *currentMaxLvLb; // x22
  struct UserServantEntity_o *v16; // x8
  UIExtrusionLabel_o *resLvLb; // x22
  UILabel_o *resMaxLvLb; // x22
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WebViewObject_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WebViewObject_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WebViewObject_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UIWidget_o *resLvWidget; // x24
  int v48; // s0
  UIWidget_o *resMaxLvWidget; // x23
  int v53; // s0
  UIWidget_o *resHpWidget; // x22
  int v58; // s0
  UIWidget_o *resAtkWidget; // x21
  int v63; // s0
  UILabel_o *currentExpValLb; // x21
  struct UserServantEntity_o *v68; // x8
  int32_t v69; // w20
  __int64 v70; // x21
  __int64 v71; // x22
  struct UserServantEntity_o *v72; // x8
  int32_t v73; // w21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v75; // x4
  int32_t baseLimitCnt; // w21
  UnityEngine_Transform_o *v77; // x0
  const MethodInfo *v78; // x4
  struct UserServantEntity_o *v79; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v81; // x8
  UILabel_o *resHpLb; // x20
  struct UserServantEntity_o *v83; // x8
  UILabel_o *currentAtkLb; // x20
  struct UserServantEntity_o *v85; // x8
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v87; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Action_o *v95; // x20
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_4357938 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SvtCombineResultWindowComponent_EndOpen__);
    sub_B70694(&StringLiteral_350/*"#,0"*/);
    sub_B70694(&StringLiteral_9376/*"N0"*/);
    byte_4357938 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_49;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  skipCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 0;
  if ( !skipCollider )
    goto LABEL_49;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)skipCollider, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.baseLvMax = (int)skipCollider;
  if ( !baseUsrSvtData )
    goto LABEL_49;
  currentLvLb = this->fields.currentLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)baseUsrSvtData + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_49;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skipCollider, 0LL);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 696, 0LL);
  if ( !currentMaxLvLb )
    goto LABEL_49;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)skipCollider, 0LL);
  v16 = this->fields.baseUsrSvtData;
  if ( !v16 )
    goto LABEL_49;
  resLvLb = this->fields.resLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v16 + 256, 0LL);
  if ( !resLvLb )
    goto LABEL_49;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skipCollider, 0LL);
  resMaxLvLb = this->fields.resMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 696, 0LL);
  if ( !resMaxLvLb )
    goto LABEL_49;
  UILabel__set_text(resMaxLvLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvLb;
  if ( !skipCollider )
    goto LABEL_49;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)skipCollider,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_WebViewObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resLvWidget,
    (System_Int32_array **)Component_WebViewObject,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resMaxLvLb;
  if ( !skipCollider )
    goto LABEL_49;
  v26 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v26;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resMaxLvWidget,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resHpLb;
  if ( !skipCollider )
    goto LABEL_49;
  v33 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resHpWidget = (struct UIWidget_o *)v33;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resHpWidget,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resAtkLb;
  if ( !skipCollider )
    goto LABEL_49;
  v40 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resAtkWidget = (struct UIWidget_o *)v40;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resAtkWidget,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  resLvWidget = this->fields.resLvWidget;
  *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_white(0LL);
  if ( !resLvWidget )
    goto LABEL_49;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)&v48, 0LL);
  resMaxLvWidget = this->fields.resMaxLvWidget;
  *(UnityEngine_Color_o *)&v53 = UnityEngine_Color__get_white(0LL);
  if ( !resMaxLvWidget )
    goto LABEL_49;
  UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)&v53, 0LL);
  resHpWidget = this->fields.resHpWidget;
  *(UnityEngine_Color_o *)&v58 = UnityEngine_Color__get_white(0LL);
  if ( !resHpWidget )
    goto LABEL_49;
  UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)&v58, 0LL);
  resAtkWidget = this->fields.resAtkWidget;
  *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_white(0LL);
  if ( !resAtkWidget )
    goto LABEL_49;
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)&v63, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentExpBar;
  if ( !skipCollider )
    goto LABEL_49;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_350/*"#,0"*/,
                                             0LL);
  if ( !currentExpValLb )
    goto LABEL_49;
  UILabel__set_text(currentExpValLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resCrExpBar;
  if ( !skipCollider )
    goto LABEL_49;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resExpBar;
  if ( !skipCollider )
    goto LABEL_49;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)skipCollider, 0LL);
  v68 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  v69 = (int)skipCollider;
  v71 = *(_QWORD *)&v68->fields.limitCount.fields.currentCryptoKey;
  v70 = *(_QWORD *)&v68->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v98.fields.currentCryptoKey = v71;
  *(_QWORD *)&v98.fields.fakeValue = v70;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v98, 0LL);
  v72 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v72 )
    goto LABEL_49;
  v73 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  this->fields.baseHpVal = v72->fields.hp;
  this->fields.baseAtkVal = v72->fields.atk;
  if ( !skipCollider )
    goto LABEL_49;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v69, v73, transform, v75);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_49;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_49;
  baseLimitCnt = this->fields.baseLimitCnt;
  v77 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v69, baseLimitCnt, v77, v78);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_49;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v79 = this->fields.baseUsrSvtData;
  if ( !v79 )
    goto LABEL_49;
  currentHpLb = this->fields.currentHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int)v79 + 268,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !currentHpLb )
    goto LABEL_49;
  UILabel__set_text(currentHpLb, (System_String_o *)skipCollider, 0LL);
  v81 = this->fields.baseUsrSvtData;
  if ( !v81 )
    goto LABEL_49;
  resHpLb = this->fields.resHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int)v81 + 268,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !resHpLb )
    goto LABEL_49;
  UILabel__set_text(resHpLb, (System_String_o *)skipCollider, 0LL);
  v83 = this->fields.baseUsrSvtData;
  if ( !v83 )
    goto LABEL_49;
  currentAtkLb = this->fields.currentAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int)v83 + 264,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !currentAtkLb )
    goto LABEL_49;
  UILabel__set_text(currentAtkLb, (System_String_o *)skipCollider, 0LL);
  v85 = this->fields.baseUsrSvtData;
  if ( !v85 )
    goto LABEL_49;
  resAtkLb = this->fields.resAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int)v85 + 264,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !resAtkLb )
    goto LABEL_49;
  UILabel__set_text(resAtkLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.msgInfo;
  if ( !skipCollider )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.AdjustInfo;
  if ( !skipCollider )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v87);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.lvUpInfo,
    (System_Int32_array **)lvInfo,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtCombineInfoObject;
  if ( !skipCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)this->fields.svtEqCombineInfoObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL) )
  {
LABEL_49:
    sub_B7076C(skipCollider, baseData);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v95 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v95, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v95, 0, 0LL);
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
  UnityEngine_Collider_o *skipCollider; // x0
  struct UserServantEntity_o **p_baseUsrSvtData; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x23
  UILabel_o *currentSvtEqMaxLvLb; // x23
  struct UserServantEntity_o *v20; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x23
  UILabel_o *resSvtEqMaxLvLb; // x23
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  WebViewObject_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WebViewObject_o *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  WebViewObject_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UIWidget_o *resLvWidget; // x25
  int v52; // s0
  UIWidget_o *resMaxLvWidget; // x24
  int v57; // s0
  UIWidget_o *resHpWidget; // x23
  int v62; // s0
  UIWidget_o *resAtkWidget; // x22
  int v67; // s0
  UILabel_o *currentSvtEqExpValLb; // x22
  struct UserServantEntity_o *v72; // x8
  int32_t v73; // w21
  __int64 v74; // x22
  __int64 v75; // x23
  struct UserServantEntity_o *v76; // x8
  int32_t v77; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v79; // x4
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *v81; // x0
  const MethodInfo *v82; // x4
  struct UserServantEntity_o *v83; // x8
  UILabel_o *currentSvtEqHpLb; // x21
  struct UserServantEntity_o *v85; // x8
  UILabel_o *resSvtEqHpLb; // x21
  struct UserServantEntity_o *v87; // x8
  UILabel_o *currentSvtEqAtkLb; // x21
  struct UserServantEntity_o *v89; // x8
  UILabel_o *resSvtEqAtkLb; // x21
  UILabel_o *normalExpLb; // x21
  UILabel_o *normalExpOverSpLb; // x21
  WebViewObject_o *v93; // x21
  int v94; // s0
  UIWidget_o *v98; // x22
  UnityEngine_GameObject_o *v99; // x24
  srcLineSprite_o *Component_srcLineSprite; // x23
  srcLineSprite_o *v101; // x0
  srcLineSprite_o *v102; // x20
  SvtCombineResultWindowComponent_c *v103; // x0
  __int64 v104; // x2
  Il2CppObject *v105; // x0
  System_String_o *v106; // x20
  UnityEngine_Transform_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x20
  UnityEngine_Transform_o *v109; // x21
  int v110; // s0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_Object_o *v114; // x20
  UILabel_o *addExpLb; // x20
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Action_o *v123; // x20
  intptr_t m_CachedPtr; // [xsp+8h] [xbp-58h] BYREF
  float barExp; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lateExp[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t v127; // [xsp+18h] [xbp-48h] BYREF
  int32_t v128; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16

  v127 = addExp;
  v128 = normalExp;
  if ( (byte_4357939 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SvtCombineResultWindowComponent_EndOpen__);
    sub_B70694(&SvtCombineResultWindowComponent_TypeInfo);
    sub_B70694(&StringLiteral_350/*"#,0"*/);
    sub_B70694(&StringLiteral_9376/*"N0"*/);
    sub_B70694(&StringLiteral_4238/*"CombineSuccessEffect_{0:D2}"*/);
    byte_4357939 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  skipCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 1;
  if ( !skipCollider )
    goto LABEL_96;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)skipCollider, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.baseLvMax = (int)skipCollider;
  if ( !baseUsrSvtData )
    goto LABEL_96;
  currentSvtEqLvLb = this->fields.currentSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)baseUsrSvtData + 256, 0LL);
  if ( !currentSvtEqLvLb )
    goto LABEL_96;
  UIExtrusionLabel__set_text(currentSvtEqLvLb, (System_String_o *)skipCollider, 0LL);
  currentSvtEqMaxLvLb = this->fields.currentSvtEqMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 696, 0LL);
  if ( !currentSvtEqMaxLvLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqMaxLvLb, (System_String_o *)skipCollider, 0LL);
  v20 = this->fields.baseUsrSvtData;
  if ( !v20 )
    goto LABEL_96;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v20 + 256, 0LL);
  if ( !resSvtEqLvLb )
    goto LABEL_96;
  UIExtrusionLabel__set_text(resSvtEqLvLb, (System_String_o *)skipCollider, 0LL);
  resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 696, 0LL);
  if ( !resSvtEqMaxLvLb )
    goto LABEL_96;
  UILabel__set_text(resSvtEqMaxLvLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLvLb;
  if ( !skipCollider )
    goto LABEL_96;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)skipCollider,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_WebViewObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resLvWidget,
    (System_Int32_array **)Component_WebViewObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqMaxLvLb;
  if ( !skipCollider )
    goto LABEL_96;
  v30 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v30;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resMaxLvWidget,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqHpLb;
  if ( !skipCollider )
    goto LABEL_96;
  v37 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resHpWidget = (struct UIWidget_o *)v37;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resHpWidget,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqAtkLb;
  if ( !skipCollider )
    goto LABEL_96;
  v44 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resAtkWidget = (struct UIWidget_o *)v44;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resAtkWidget,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  resLvWidget = this->fields.resLvWidget;
  *(UnityEngine_Color_o *)&v52 = UnityEngine_Color__get_white(0LL);
  if ( !resLvWidget )
    goto LABEL_96;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)&v52, 0LL);
  resMaxLvWidget = this->fields.resMaxLvWidget;
  *(UnityEngine_Color_o *)&v57 = UnityEngine_Color__get_white(0LL);
  if ( !resMaxLvWidget )
    goto LABEL_96;
  UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)&v57, 0LL);
  resHpWidget = this->fields.resHpWidget;
  *(UnityEngine_Color_o *)&v62 = UnityEngine_Color__get_white(0LL);
  if ( !resHpWidget )
    goto LABEL_96;
  UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)&v62, 0LL);
  resAtkWidget = this->fields.resAtkWidget;
  *(UnityEngine_Color_o *)&v67 = UnityEngine_Color__get_white(0LL);
  if ( !resAtkWidget )
    goto LABEL_96;
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)&v67, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_96;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_350/*"#,0"*/,
                                             0LL);
  if ( !currentSvtEqExpValLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqExpValLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqCrExpBar;
  if ( !skipCollider )
    goto LABEL_96;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_96;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)skipCollider, 0LL);
  v72 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  v73 = (int)skipCollider;
  v75 = *(_QWORD *)&v72->fields.limitCount.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v72->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v129.fields.currentCryptoKey = v75;
  *(_QWORD *)&v129.fields.fakeValue = v74;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                             v129,
                                             0LL);
  v76 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v76 )
    goto LABEL_96;
  v77 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = v76->fields.hp;
  this->fields.baseAtkVal = v76->fields.atk;
  if ( !skipCollider )
    goto LABEL_96;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v73, v77, transform, v79);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_96;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_96;
  baseLimitCnt = this->fields.baseLimitCnt;
  v81 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v73, baseLimitCnt, v81, v82);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_96;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v83 = this->fields.baseUsrSvtData;
  if ( !v83 )
    goto LABEL_96;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int)v83 + 268,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqHpLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v85 = this->fields.baseUsrSvtData;
  if ( !v85 )
    goto LABEL_96;
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int)v85 + 268,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !resSvtEqHpLb )
    goto LABEL_96;
  UILabel__set_text(resSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v87 = this->fields.baseUsrSvtData;
  if ( !v87 )
    goto LABEL_96;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int)v87 + 264,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqAtkLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  v89 = this->fields.baseUsrSvtData;
  if ( !v89 )
    goto LABEL_96;
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int)v89 + 264,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !resSvtEqAtkLb )
    goto LABEL_96;
  UILabel__set_text(resSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  normalExpLb = this->fields.normalExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int32_t)&v128,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !normalExpLb )
    goto LABEL_96;
  UILabel__set_text(normalExpLb, (System_String_o *)skipCollider, 0LL);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int32_t)&v128,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !normalExpOverSpLb )
    goto LABEL_96;
  UILabel__set_text(normalExpOverSpLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpLb;
  if ( !skipCollider )
    goto LABEL_96;
  v93 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v94 = UnityEngine_Color__get_white(0LL);
  if ( !v93 )
    goto LABEL_96;
  UIWidget__set_color((UIWidget_o *)v93, *(UnityEngine_Color_o *)&v94, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_96;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_96;
  v98 = (UIWidget_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_96;
  v99 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  if ( !v99 )
    goto LABEL_96;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v99,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v101 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
           v99,
           (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
    goto LABEL_89;
  v102 = v101;
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_96;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v103 = SvtCombineResultWindowComponent_TypeInfo;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v103 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color((UIWidget_o *)v93, v103->static_fields->COLOR_VAL, 0LL);
  if ( !v98 )
    goto LABEL_96;
  UIWidget__set_color(v98, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_srcLineSprite,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
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
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v102, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v102 )
      goto LABEL_96;
    LODWORD(v102->fields.mcLineSprite) = 0x40000000;
    UITweener__Play((UITweener_o *)v102, 0LL);
  }
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int32_t)&v128, 0LL);
  if ( !skipCollider )
    goto LABEL_96;
  m_CachedPtr = skipCollider->fields.m_CachedPtr;
  v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v104);
  skipCollider = (UnityEngine_Collider_o *)System_String__Format((System_String_o *)StringLiteral_4238/*"CombineSuccessEffect_{0:D2}"*/, v105, 0LL);
  if ( !this->fields.dispNodeObj )
    goto LABEL_96;
  v106 = (System_String_o *)skipCollider;
  v107 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL);
  skipCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__getEffect(v106, v107, 0LL);
  if ( !skipCollider
    || (v108 = (UnityEngine_GameObject_o *)skipCollider,
        skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)skipCollider,
                                                   0LL),
        !this->fields.dispNodeObj)
    || (v109 = (UnityEngine_Transform_o *)skipCollider,
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v110 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)skipCollider,
                                            0LL),
        !v109) )
  {
LABEL_96:
    sub_B7076C(skipCollider, baseData);
  }
  UnityEngine_Transform__set_localPosition(v109, *(UnityEngine_Vector3_o *)&v110, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        v108,
                                                                        (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v114 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                   v108,
                                   (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(
                                             ComponentInChildren_Dropdown_DropdownItem,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
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
    skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(v114, 0LL, 0LL);
    if ( ((unsigned __int8)skipCollider & 1) != 0 )
    {
      if ( !v114 )
        goto LABEL_96;
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v114, 0LL);
    }
  }
LABEL_89:
  addExpLb = this->fields.addExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39283984(
                                             (int32_t)&v127,
                                             (System_String_o *)StringLiteral_9376/*"N0"*/,
                                             0LL);
  if ( !addExpLb )
    goto LABEL_96;
  UILabel__set_text(addExpLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.msgInfo;
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.AdjustInfo;
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  svtEqLvInfo = this->fields.svtEqLvInfo;
  this->fields.lvUpInfo = svtEqLvInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.lvUpInfo,
    (System_Int32_array **)svtEqLvInfo,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtEqCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v123 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v123, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v123, 0, 0LL);
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
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x23
  UnityEngine_Transform_o *transform; // x24
  int v14; // s0

  if ( (byte_4357945 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
    byte_4357945 = 1;
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
        || (v12 = Object,
            transform = UnityEngine_GameObject__get_transform(Object, 0LL),
            *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL),
            !transform)
        || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v12,
                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0LL) )
      {
        sub_B7076C(Object, v11);
      }
      SetLimitCntInfoComponent__setEnableOnImg((SetLimitCntInfoComponent_o *)Object, v9++ < svtLimitCnt, 0LL);
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
  UnityEngine_Component_o *resAdjustAtkIconLabel; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v7; // s0
  int32_t adjustAtk; // w21
  BalanceConfig_c *v12; // x0
  int32_t v13; // w8
  int32_t baseMaxAtkAdjustVal; // w23
  int32_t StatusUpAdjustAtk; // w24
  int32_t v16; // w8
  int32_t v17; // w21
  int32_t v18; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8

  if ( (byte_435793C & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435793C = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resAdjustAtkIconLabel,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_23;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v7, 0LL);
  if ( !targetData )
    goto LABEL_23;
  adjustAtk = targetData->fields.adjustAtk;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
    v13 = targetData->fields.adjustAtk;
  }
  else
  {
    v13 = targetData->fields.adjustAtk;
  }
  baseMaxAtkAdjustVal = this->fields.baseMaxAtkAdjustVal;
  StatusUpAdjustAtk = v12->static_fields->StatusUpAdjustAtk;
  if ( v13 >= baseMaxAtkAdjustVal )
    baseMaxAtkAdjustVal = this->fields.baseSecondMaxAtkAdjustVal;
  if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v16 = v12->static_fields->StatusUpAdjustAtk;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v16 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
  }
  else
  {
    v16 = v12->static_fields->StatusUpAdjustAtk;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_23;
  v17 = StatusUpAdjustAtk * adjustAtk;
  v18 = v16 * baseMaxAtkAdjustVal;
  UIIconLabel__Set_41432452(
    (UIIconLabel_o *)resAdjustAtkIconLabel,
    45,
    v17,
    v16 * baseMaxAtkAdjustVal,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  if ( !System_Int32__Equals_39283908((_DWORD)baseUsrSvtData + 272, targetData->fields.adjustAtk, 0LL) )
  {
    resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
    this->fields.isAtkLimitUp = targetData->fields.adjustAtk == this->fields.baseMaxAtkAdjustVal;
    if ( !resAdjustAtkIconLabel )
      goto LABEL_23;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustAtkIconLabel,
      v17,
      v18,
      targetData->fields.adjustAtk == this->fields.baseSecondMaxAtkAdjustVal,
      0LL);
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkMaxLabel;
  if ( !resAdjustAtkIconLabel )
LABEL_23:
    sub_B7076C(resAdjustAtkIconLabel, targetData);
  UILabel__set_text((UILabel_o *)resAdjustAtkIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setResAdjustHpInfo(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *targetData,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resAdjustHpIconLabel; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v7; // s0
  int32_t adjustHp; // w21
  BalanceConfig_c *v12; // x0
  int32_t v13; // w8
  int32_t baseMaxHpAdjustVal; // w23
  int32_t StatusUpAdjustHp; // w24
  int32_t v16; // w8
  int32_t v17; // w21
  int32_t v18; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8

  if ( (byte_435793B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435793B = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resAdjustHpIconLabel,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_23;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v7, 0LL);
  if ( !targetData )
    goto LABEL_23;
  adjustHp = targetData->fields.adjustHp;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
    v13 = targetData->fields.adjustHp;
  }
  else
  {
    v13 = targetData->fields.adjustHp;
  }
  baseMaxHpAdjustVal = this->fields.baseMaxHpAdjustVal;
  StatusUpAdjustHp = v12->static_fields->StatusUpAdjustHp;
  if ( v13 >= baseMaxHpAdjustVal )
    baseMaxHpAdjustVal = this->fields.baseSecondMaxHpAdjustVal;
  if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v16 = v12->static_fields->StatusUpAdjustHp;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v16 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
  }
  else
  {
    v16 = v12->static_fields->StatusUpAdjustHp;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_23;
  v17 = StatusUpAdjustHp * adjustHp;
  v18 = v16 * baseMaxHpAdjustVal;
  UIIconLabel__Set_41432452(
    (UIIconLabel_o *)resAdjustHpIconLabel,
    44,
    v17,
    v16 * baseMaxHpAdjustVal,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  if ( !System_Int32__Equals_39283908((_DWORD)baseUsrSvtData + 276, targetData->fields.adjustHp, 0LL) )
  {
    resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
    this->fields.isHpLimitUp = targetData->fields.adjustHp == this->fields.baseMaxHpAdjustVal;
    if ( !resAdjustHpIconLabel )
      goto LABEL_23;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustHpIconLabel,
      v17,
      v18,
      targetData->fields.adjustHp == this->fields.baseSecondMaxHpAdjustVal,
      0LL);
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpMaxLabel;
  if ( !resAdjustHpIconLabel )
LABEL_23:
    sub_B7076C(resAdjustHpIconLabel, targetData);
  UILabel__set_text((UILabel_o *)resAdjustHpIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SvtCombineResultWindowComponent__setSvtExp(
        SvtCombineResultWindowComponent_o *this,
        int32_t getExp,
        int32_t nowExp,
        int32_t startLv,
        const MethodInfo *method)
{
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w23
  struct ServantEntity_o *baseSvtData; // x8
  ServantExpMaster_o *v11; // x25
  struct ServantEntity_o *v12; // x8
  int32_t v13; // w21
  struct ServantEntity_o *v14; // x8
  UserServantEntity_o *v15; // x24
  int hiddenValue; // w8
  float v17; // s0

  if ( (byte_435793F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435793F = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  baseSvtData = this->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_26;
  v11 = (ServantExpMaster_o *)resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__getLevel(
                                           (ServantExpMaster_o *)resUsrSvtData,
                                           nowExp,
                                           baseSvtData->fields.expType,
                                           LevelMax,
                                           startLv,
                                           0LL);
  v12 = this->fields.baseSvtData;
  if ( !v12 )
    goto LABEL_26;
  v13 = (int)resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(
                                           v11,
                                           v12->fields.expType,
                                           (int32_t)resUsrSvtData,
                                           0LL);
  v14 = this->fields.baseSvtData;
  if ( !v14 )
    goto LABEL_26;
  v15 = resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(v11, v14->fields.expType, v13 - 1, 0LL);
  if ( resUsrSvtData )
    hiddenValue = resUsrSvtData->fields.id.fields.hiddenValue;
  else
    hiddenValue = 0;
  if ( LevelMax != startLv )
  {
    if ( this->fields.isEqCombine )
    {
      if ( !v15 )
        goto LABEL_26;
      resUsrSvtData = (UserServantEntity_o *)this->fields.resSvtEqCrExpBar;
      if ( !resUsrSvtData )
        goto LABEL_26;
LABEL_24:
      v17 = 1.0
          - (float)((float)(LODWORD(v15->fields.id.fields.hiddenValue) - nowExp)
                  / (float)(LODWORD(v15->fields.id.fields.hiddenValue) - hiddenValue));
      goto LABEL_25;
    }
    if ( v15 )
    {
      resUsrSvtData = (UserServantEntity_o *)this->fields.resCrExpBar;
      if ( resUsrSvtData )
        goto LABEL_24;
    }
LABEL_26:
    sub_B7076C(resUsrSvtData, *(_QWORD *)&getExp);
  }
  if ( this->fields.isEqCombine )
  {
    resUsrSvtData = (UserServantEntity_o *)this->fields.resSvtEqCrExpBar;
    if ( !resUsrSvtData )
      goto LABEL_26;
  }
  else
  {
    resUsrSvtData = (UserServantEntity_o *)this->fields.resCrExpBar;
    if ( !resUsrSvtData )
      goto LABEL_26;
  }
  v17 = 1.0;
LABEL_25:
  UIProgressBar__set_value((UIProgressBar_o *)resUsrSvtData, v17, 0LL);
  return v13;
}


void __fastcall SvtCombineResultWindowComponent__showGetExp(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  struct ServantEntity_o *Entity; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  const MethodInfo *v17; // x4
  struct UserServantEntity_o *v18; // x8
  int32_t atk; // w9
  struct UserServantEntity_o *v20; // x8
  struct UserServantEntity_o *v21; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Object_array *v29; // x21
  __int64 v30; // x0
  System_Int32_array **v31; // x1
  __int64 v32; // x2
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  __int64 v47; // x2
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x1
  __int64 v104; // x2
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x22
  System_Collections_Hashtable_o *v112; // x0
  UILabel_o *resSvtEqMaxLvLb; // x20
  UIWidget_o *resMaxLvWidget; // x20
  UILabel_o *infoLb; // x20
  System_String_o *v116; // x21
  __int64 v117; // x2
  Il2CppObject *v118; // x22
  __int64 v119; // x2
  Il2CppObject *v120; // x0
  struct System_Collections_Generic_List_GameObject__o *resLimitCntList; // x22
  __int64 v122; // x20
  int size; // w8
  struct UserServantEntity_o *v124; // x8
  struct UserServantEntity_o *v125; // x9
  int32_t v126; // w0
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v129; // x2
  UIWidget_o *resHpWidget; // x20
  int32_t v131; // w0
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v134; // x2
  UIWidget_o *resAtkWidget; // x19
  __int64 v136; // x0
  __int64 v137; // x0
  int v138; // [xsp+Ch] [xbp-34h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-28h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_435793E & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SvtCombineResultWindowComponent_TypeInfo);
    sub_B70694(&StringLiteral_19208/*"from"*/);
    sub_B70694(&StringLiteral_8797/*"MAX_LVUP_TXT"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_6036/*"EndDisp"*/);
    sub_B70694(&StringLiteral_21614/*"onupdate"*/);
    sub_B70694(&StringLiteral_15258/*"UpdateValue"*/);
    sub_B70694(&StringLiteral_9376/*"N0"*/);
    sub_B70694(&StringLiteral_23091/*"to"*/);
    sub_B70694(&StringLiteral_13231/*"StartUpdateValue"*/);
    sub_B70694(&StringLiteral_21611/*"onstart"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435793E = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_96;
  v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v141.fields.currentCryptoKey = v8;
  *(_QWORD *)&v141.fields.fakeValue = v7;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v141, 0LL);
  if ( !v6 )
    goto LABEL_96;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v6,
                                       Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = Entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseSvtData,
    (System_Int32_array **)Entity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_96;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(resUsrSvtData->fields.limitCount, 0LL);
  v18 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = Instance;
  if ( !v18 )
    goto LABEL_96;
  this->fields.resHpVal = v18->fields.hp;
  atk = v18->fields.atk;
  v20 = this->fields.baseUsrSvtData;
  this->fields.resAtkVal = atk;
  if ( !v20 )
    goto LABEL_96;
  Instance = SvtCombineResultWindowComponent__setSvtExp(this, v4, v20->fields.exp, v20->fields.lv, v17);
  v21 = this->fields.baseUsrSvtData;
  if ( !v21 )
    goto LABEL_96;
  this->fields.PrevLevel = v21->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Instance = sub_B706AC(object___TypeInfo, 12LL);
  if ( !Instance )
    goto LABEL_96;
  v29 = (System_Object_array *)Instance;
  v30 = StringLiteral_19208/*"from"*/;
  if ( StringLiteral_19208/*"from"*/ )
  {
    v30 = sub_B70754(StringLiteral_19208/*"from"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
    v31 = (System_Int32_array **)StringLiteral_19208/*"from"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !v29->max_length )
    goto LABEL_123;
  v29->m_Items[0] = (Il2CppObject *)v31;
  sub_B70630((BattleServantConfConponent_o *)v29->m_Items, v31, v23, v24, v25, v26, v27, v28);
  baseLvMax = 0;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, &baseLvMax, v32);
  v39 = (System_Int32_array **)v30;
  if ( v30 )
  {
    v30 = sub_B70754(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_123;
  v29->m_Items[1] = (Il2CppObject *)v39;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[1], v39, v33, v34, v35, v36, v37, v38);
  v30 = StringLiteral_23091/*"to"*/;
  if ( StringLiteral_23091/*"to"*/ )
  {
    v30 = sub_B70754(StringLiteral_23091/*"to"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
    v46 = (System_Int32_array **)StringLiteral_23091/*"to"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_123;
  v29->m_Items[2] = (Il2CppObject *)v46;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[2], v46, v40, v41, v42, v43, v44, v45);
  resLvMax = 1065353216;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, &resLvMax, v47);
  v54 = (System_Int32_array **)v30;
  if ( v30 )
  {
    v30 = sub_B70754(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
  }
  if ( v29->max_length <= 3 )
    goto LABEL_123;
  v29->m_Items[3] = (Il2CppObject *)v54;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[3], v54, v48, v49, v50, v51, v52, v53);
  v30 = StringLiteral_21611/*"onstart"*/;
  if ( StringLiteral_21611/*"onstart"*/ )
  {
    v30 = sub_B70754(StringLiteral_21611/*"onstart"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
    v61 = (System_Int32_array **)StringLiteral_21611/*"onstart"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( v29->max_length <= 4 )
    goto LABEL_123;
  v29->m_Items[4] = (Il2CppObject *)v61;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[4], v61, v55, v56, v57, v58, v59, v60);
  v30 = StringLiteral_13231/*"StartUpdateValue"*/;
  if ( StringLiteral_13231/*"StartUpdateValue"*/ )
  {
    v30 = sub_B70754(StringLiteral_13231/*"StartUpdateValue"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
    v68 = (System_Int32_array **)StringLiteral_13231/*"StartUpdateValue"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( v29->max_length <= 5 )
    goto LABEL_123;
  v29->m_Items[5] = (Il2CppObject *)v68;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[5], v68, v62, v63, v64, v65, v66, v67);
  v30 = StringLiteral_21614/*"onupdate"*/;
  if ( StringLiteral_21614/*"onupdate"*/ )
  {
    v30 = sub_B70754(StringLiteral_21614/*"onupdate"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
    v75 = (System_Int32_array **)StringLiteral_21614/*"onupdate"*/;
  }
  else
  {
    v75 = 0LL;
  }
  if ( v29->max_length <= 6 )
    goto LABEL_123;
  v29->m_Items[6] = (Il2CppObject *)v75;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[6], v75, v69, v70, v71, v72, v73, v74);
  v30 = StringLiteral_15258/*"UpdateValue"*/;
  if ( StringLiteral_15258/*"UpdateValue"*/ )
  {
    v30 = sub_B70754(StringLiteral_15258/*"UpdateValue"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
    v82 = (System_Int32_array **)StringLiteral_15258/*"UpdateValue"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( v29->max_length <= 7 )
    goto LABEL_123;
  v29->m_Items[7] = (Il2CppObject *)v82;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[7], v82, v76, v77, v78, v79, v80, v81);
  v30 = StringLiteral_21605/*"oncomplete"*/;
  if ( StringLiteral_21605/*"oncomplete"*/ )
  {
    v30 = sub_B70754(StringLiteral_21605/*"oncomplete"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
    v89 = (System_Int32_array **)StringLiteral_21605/*"oncomplete"*/;
  }
  else
  {
    v89 = 0LL;
  }
  if ( v29->max_length <= 8 )
    goto LABEL_123;
  v29->m_Items[8] = (Il2CppObject *)v89;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[8], v89, v83, v84, v85, v86, v87, v88);
  v30 = StringLiteral_6036/*"EndDisp"*/;
  if ( StringLiteral_6036/*"EndDisp"*/ )
  {
    v30 = sub_B70754(StringLiteral_6036/*"EndDisp"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
    v96 = (System_Int32_array **)StringLiteral_6036/*"EndDisp"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( v29->max_length <= 9 )
    goto LABEL_123;
  v29->m_Items[9] = (Il2CppObject *)v96;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[9], v96, v90, v91, v92, v93, v94, v95);
  v30 = StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v30 = sub_B70754(StringLiteral_23053/*"time"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_124;
    v103 = (System_Int32_array **)StringLiteral_23053/*"time"*/;
  }
  else
  {
    v103 = 0LL;
  }
  if ( v29->max_length <= 0xA )
    goto LABEL_123;
  v29->m_Items[10] = (Il2CppObject *)v103;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[10], v103, v97, v98, v99, v100, v101, v102);
  v138 = 0x40000000;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, &v138, v104);
  v111 = (System_Int32_array **)v30;
  if ( v30 )
  {
    v30 = sub_B70754(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_124:
      v137 = sub_B7078C(v30);
      sub_B70738(v137, 0LL);
    }
  }
  if ( v29->max_length <= 0xB )
  {
LABEL_123:
    v136 = sub_B70798(v30);
    sub_B70738(v136, 0LL);
  }
  v29->m_Items[11] = (Il2CppObject *)v111;
  sub_B70630((BattleServantConfConponent_o *)&v29->m_Items[11], v111, v105, v106, v107, v108, v109, v110);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v112 = iTween__Hash(v29, 0LL);
  iTween__ValueTo(gameObject, v112, 0LL);
  if ( this->fields.baseLimitCnt != this->fields.resLimitCnt )
  {
    if ( this->fields.isEqCombine )
      resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
    else
      resSvtEqMaxLvLb = this->fields.resMaxLvLb;
    Instance = (__int64)System_Int32__ToString((int)this + 700, 0LL);
    if ( !resSvtEqMaxLvLb )
      goto LABEL_96;
    UILabel__set_text(resSvtEqMaxLvLb, (System_String_o *)Instance, 0LL);
    resMaxLvWidget = this->fields.resMaxLvWidget;
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resMaxLvWidget )
      goto LABEL_96;
    UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
    infoLb = this->fields.infoLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_8797/*"MAX_LVUP_TXT"*/, 0LL);
    baseLvMax = this->fields.baseLvMax;
    v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseLvMax, v117);
    resLvMax = this->fields.resLvMax;
    v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &resLvMax, v119);
    Instance = (__int64)System_String__Format_44753704(v116, v118, v120, 0LL);
    if ( !infoLb )
      goto LABEL_96;
    UILabel__set_text(infoLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.infoLb;
    if ( !Instance )
      goto LABEL_96;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.infoLb;
    if ( !Instance )
      goto LABEL_96;
    Instance = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_96;
    UITweener__Play((UITweener_o *)Instance, 0LL);
    resLimitCntList = this->fields.resLimitCntList;
    if ( !resLimitCntList )
      goto LABEL_96;
    v122 = 0LL;
    while ( 1 )
    {
      size = resLimitCntList->fields._size;
      if ( (int)v122 >= size )
        break;
      if ( size <= (unsigned int)v122 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      Instance = (__int64)resLimitCntList->fields._items->m_Items[v122];
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Instance )
        {
          SetLimitCntInfoComponent__setEnableOnImg(
            (SetLimitCntInfoComponent_o *)Instance,
            (int)v122 < this->fields.resLimitCnt,
            0LL);
          resLimitCntList = this->fields.resLimitCntList;
          ++v122;
          if ( resLimitCntList )
            continue;
        }
      }
      goto LABEL_96;
    }
  }
  v124 = this->fields.baseUsrSvtData;
  if ( !v124 )
    goto LABEL_96;
  v125 = this->fields.resUsrSvtData;
  if ( !v125 )
    goto LABEL_96;
  if ( v124->fields.lv != v125->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    v126 = (_DWORD)this + 708;
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      Instance = (__int64)System_Int32__ToString_39283984(v126, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_96;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)Instance, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      Instance = (__int64)System_Int32__ToString_39283984(v126, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_96;
      UILabel__set_text(resHpLb, (System_String_o *)Instance, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v129);
    }
    resHpWidget = this->fields.resHpWidget;
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resHpWidget )
      goto LABEL_96;
    UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  v131 = (_DWORD)this + 716;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    Instance = (__int64)System_Int32__ToString_39283984(v131, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_96;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)Instance, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    Instance = (__int64)System_Int32__ToString_39283984(v131, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_96;
    UILabel__set_text(resAtkLb, (System_String_o *)Instance, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v134);
  }
  resAtkWidget = this->fields.resAtkWidget;
  Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resAtkWidget )
LABEL_96:
    sub_B7076C(Instance, v4);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4357942 & 1) == 0 )
  {
    sub_B70694(&iTween_TypeInfo);
    byte_4357942 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42945068(gameObject, 0LL);
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
    sub_B7076C(0LL, method);
  System_Action__Invoke(callback, 0LL);
}