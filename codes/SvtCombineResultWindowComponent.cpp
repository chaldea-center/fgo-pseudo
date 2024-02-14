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

  if ( (byte_421A070 & 1) == 0 )
  {
    sub_B0D8A4(&SvtCombineResultWindowComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_4167/*"Combine/"*/, v6);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v7);
    byte_421A070 = 1;
  }
  v8 = 1065185444;
  v9 = 1064430469;
  v10 = 1050790593;
  v28 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v28);
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = v28;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_4167/*"Combine/"*/;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4167/*"Combine/"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->TUTORIAL_FOLDER, v12, v13, v14, v15, v16, v17, v18);
  v19 = SvtCombineResultWindowComponent_TypeInfo;
  SvtCombineResultWindowComponent_TypeInfo->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = 25;
  v19->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL = 26;
  v19->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 27;
  v20 = v19->static_fields;
  v21 = (System_Int32_array **)StringLiteral_960/*"0"*/;
  v20->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_960/*"0"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v20->INIT_VAL_TXT, v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall SvtCombineResultWindowComponent___ctor(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_421A06F & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421A06F = 1;
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
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_421A06E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SvtCombineResultWindowComponent_EndDisp__, v3);
    byte_421A06E = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_B0D97C(0LL);
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0LL) )
  {
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndDisp__, 0LL);
    SvtCombineResultWindowComponent__skipExp(this, v7, v8);
  }
}


void __fastcall SvtCombineResultWindowComponent__Close(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x0
  System_Action_o *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_421A06C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SvtCombineResultWindowComponent_EndClose__, v4);
    byte_421A06C = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  SvtCombineResultWindowComponent__Close_34061004(this, v6, v7);
}


void __fastcall SvtCombineResultWindowComponent__Close_34061004(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_421A06D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_SvtCombineResultWindowComponent_EndClose__, v4);
    byte_421A06D = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, callback, method);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_B0D97C(0LL);
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
  OpenInfoWindowComponent_o *openInfowindowComp; // x20
  System_Collections_Generic_List_GameObject__o *resInfoList; // x21
  System_Action_o *v10; // x22

  if ( (byte_421A064 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SvtCombineResultWindowComponent_EndOpen__, v4);
    byte_421A064 = 1;
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
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v10, 1, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(skipCollider);
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
  SvtCombineResultWindowComponent_c *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **endTutorialCallBack; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0
  _BOOL4 isHpLimitUp; // w9
  _BOOL4 isAtkLimitUp; // w8
  System_Int32_array *v33; // x20
  int32_t *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL; // x8
  CommonUI_o *Instance; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_o *v38; // x22
  __int64 v39; // x0

  if ( (byte_421A06B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&SvtCombineResultWindowComponent_TypeInfo, v11);
    sub_B0D8A4(&Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__, v12);
    sub_B0D8A4(&SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, v13);
    byte_421A06B = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(openCallBack, 0LL);
  }
  if ( this->fields.endTutorialCallBack )
  {
    v15 = sub_B0D974(SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, method, v2);
    SvtCombineResultWindowComponent___c__DisplayClass127_0___ctor(
      (SvtCombineResultWindowComponent___c__DisplayClass127_0_o *)v15,
      0LL);
    if ( !v15 )
      goto LABEL_34;
    endTutorialCallBack = (System_Int32_array **)this->fields.endTutorialCallBack;
    *(_QWORD *)(v15 + 16) = endTutorialCallBack;
    sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), endTutorialCallBack, v17, v18, v19, v20, v21, v22);
    this->fields.endTutorialCallBack = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.endTutorialCallBack, 0LL, v24, v25, v26, v27, v28, v29);
    if ( this->fields.isHpLimitUp || this->fields.isAtkLimitUp )
    {
      v30 = sub_B0D8BC(int___TypeInfo, 1LL);
      isHpLimitUp = this->fields.isHpLimitUp;
      isAtkLimitUp = this->fields.isAtkLimitUp;
      v33 = (System_Int32_array *)v30;
      if ( isHpLimitUp )
      {
        v16 = SvtCombineResultWindowComponent_TypeInfo;
        if ( isAtkLimitUp )
        {
          if ( (WORD1(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v16 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v33 )
            goto LABEL_34;
          if ( v33->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v16->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_31:
            v33->m_Items[1] = *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_32:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v38 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v36, v37);
            System_Action___ctor(
              v38,
              (Il2CppObject *)v15,
              Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__OpenImageDialogAssets(Instance, v33, 2, v38, 0LL);
              return;
            }
LABEL_34:
            sub_B0D97C(v16);
          }
        }
        else
        {
          if ( (WORD1(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v16 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v33 )
            goto LABEL_34;
          if ( v33->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v16->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
            goto LABEL_31;
          }
        }
      }
      else
      {
        if ( !isAtkLimitUp )
          goto LABEL_32;
        v16 = SvtCombineResultWindowComponent_TypeInfo;
        if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
          v16 = SvtCombineResultWindowComponent_TypeInfo;
        }
        if ( !v33 )
          goto LABEL_34;
        if ( v33->max_length )
        {
          p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v16->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
          goto LABEL_31;
        }
      }
      v39 = sub_B0D9A8(v16);
      sub_B0D948(v39, 0LL);
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

  if ( (byte_421A05A & 1) == 0 )
  {
    sub_B0D8A4(&SvtCombineResultWindowComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_421A05A = 1;
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
    sub_B0D97C(currentMaxLvLb);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *resUsrSvtData; // x0
  int v9; // w21
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v11; // x9
  float v12; // s0
  int32_t exp; // w20
  int32_t v14; // w1
  const MethodInfo *v15; // x4
  struct UserServantEntity_o *v16; // x8
  struct UserServantEntity_o *v17; // x8
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w20
  UITweener_o *v20; // x21
  _BOOL4 isEqCombine; // w8
  UIExtrusionLabel_o *v22; // x20
  UIWidget_o *resLvWidget; // x20
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v26; // x2
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v30; // x2
  UIWidget_o *resAtkWidget; // x19
  int32_t afterAtk; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t afterHp[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421A063 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&SvtCombineResultWindowComponent_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v7);
    byte_421A063 = 1;
  }
  *(_QWORD *)afterHp = 0LL;
  afterAtk = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_56;
  resUsrSvtData = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_56;
  v9 = (int)resUsrSvtData;
  UnityEngine_Collider__set_enabled(this->fields.skipCollider, 1, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_56;
  v11 = this->fields.resUsrSvtData;
  if ( !v11 )
    goto LABEL_56;
  v12 = UnityEngine_Mathf__Lerp((float)baseUsrSvtData->fields.exp, (float)v11->fields.exp, val, 0LL);
  exp = UnityEngine_Mathf__FloorToInt(v12, 0LL);
  resUsrSvtData = (void *)UnityEngine_Mathf__Approximately(1.0, val, 0LL);
  v16 = this->fields.resUsrSvtData;
  if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_56;
    exp = v16->fields.exp;
  }
  else if ( !v16 )
  {
    goto LABEL_56;
  }
  v17 = this->fields.baseUsrSvtData;
  if ( !v17 )
    goto LABEL_56;
  resUsrSvtData = (void *)SvtCombineResultWindowComponent__setSvtExp(this, v14, exp, v17->fields.lv, v15);
  afterHp[1] = (int)resUsrSvtData;
  v18 = this->fields.baseUsrSvtData;
  if ( !v18 )
    goto LABEL_56;
  if ( v18->fields.lv == v9 )
    return;
  v19 = (int)resUsrSvtData;
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
  if ( v19 == this->fields.PrevLevel )
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
                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !resUsrSvtData )
    goto LABEL_56;
  v20 = (UITweener_o *)resUsrSvtData;
  UITweener__ResetToBeginning((UITweener_o *)resUsrSvtData, 0LL);
  UITweener__Play(v20, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v19;
  this->fields.endDispLvInfoFlg = 0;
  v22 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  resUsrSvtData = System_Int32__ToString((int32_t)&afterHp[1], 0LL);
  if ( !v22 )
    goto LABEL_56;
  UIExtrusionLabel__set_text(v22, (System_String_o *)resUsrSvtData, 0LL);
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
      resUsrSvtData = System_Int32__ToString_38473032((int32_t)afterHp, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_56;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)resUsrSvtData, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      resUsrSvtData = System_Int32__ToString_38473032((int32_t)afterHp, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_56;
      UILabel__set_text(resHpLb, (System_String_o *)resUsrSvtData, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v26);
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
    resUsrSvtData = System_Int32__ToString_38473032((int32_t)&afterAtk, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_56;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)resUsrSvtData, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    resUsrSvtData = System_Int32__ToString_38473032((int32_t)&afterAtk, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_56;
    UILabel__set_text(resAtkLb, (System_String_o *)resUsrSvtData, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v30);
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
    sub_B0D97C(resUsrSvtData);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*((_QWORD *)resUsrSvtData + 23), 0LL);
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
  UserServantEntity_o *v10; // x20
  int64_t hiddenValue; // x8
  UserServantEntity_o *v12; // x21
  unsigned __int64 v13; // x23
  int64_t *p_fakeValue; // x24
  int32_t i; // w22
  int32_t v16; // w20
  WarEntity_o *Entity; // x0
  UILabel_o *skillGetInfoTitle; // x21
  SkillEntity_o *v19; // x20
  UILabel_o *skillGetInfoDetail; // x21
  System_String_o *v21; // x22
  Il2CppObject *Name; // x0
  __int64 v23; // x0

  if ( (byte_421A067 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_6896/*"GET_SKILL_NAME"*/, v7);
    sub_B0D8A4(&StringLiteral_6898/*"GET_SKILL_TITLE"*/, v8);
    byte_421A067 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_27;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(baseUsrSvtData, -1, -1, 1, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_27;
  v10 = baseUsrSvtData;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(this->fields.resUsrSvtData, -1, -1, 1, 0LL);
  if ( !v10 )
    goto LABEL_27;
  hiddenValue = v10->fields.id.fields.hiddenValue;
  if ( (int)hiddenValue < 1 )
    return;
  v12 = baseUsrSvtData;
  v13 = 0LL;
  p_fakeValue = &baseUsrSvtData->fields.id.fields.fakeValue;
  for ( i = (_DWORD)v10 + 32; ; i += 4 )
  {
    if ( !v12 )
      goto LABEL_27;
    if ( v13 >= LODWORD(v12->fields.id.fields.hiddenValue) || v13 >= (unsigned int)hiddenValue )
      goto LABEL_26;
    baseUsrSvtData = (UserServantEntity_o *)System_Int32__Equals_38472956(i, *((_DWORD *)p_fakeValue + v13), 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
      break;
    LODWORD(hiddenValue) = v10->fields.id.fields.hiddenValue;
    if ( (__int64)++v13 >= (int)hiddenValue )
      return;
  }
  if ( (unsigned int)v13 >= LODWORD(v12->fields.id.fields.hiddenValue) )
  {
LABEL_26:
    v23 = sub_B0D9A8(baseUsrSvtData);
    sub_B0D948(v23, 0LL);
  }
  v16 = *((_DWORD *)&v12->fields.id.fields.fakeValue + v13);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_27;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_27;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)baseUsrSvtData,
             v16,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  v19 = (SkillEntity_o *)Entity;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6898/*"GET_SKILL_TITLE"*/, 0LL);
  if ( !skillGetInfoTitle )
    goto LABEL_27;
  UILabel__set_text(skillGetInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6896/*"GET_SKILL_NAME"*/, 0LL);
  if ( !v19
    || (v21 = (System_String_o *)baseUsrSvtData,
        Name = (Il2CppObject *)SkillEntity__getName(v19, 0LL),
        baseUsrSvtData = (UserServantEntity_o *)System_String__Format(v21, Name, 0LL),
        !skillGetInfoDetail)
    || (UILabel__set_text(skillGetInfoDetail, (System_String_o *)baseUsrSvtData, 0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.resInfoList) == 0LL) )
  {
LABEL_27:
    sub_B0D97C(baseUsrSvtData);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)baseUsrSvtData,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillGetInfo,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetNewSkill = 1;
}


void __fastcall SvtCombineResultWindowComponent__checkQuestOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_int__o *v18; // x0
  clsQuestCheck_o *Instance; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v21; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  System_Collections_Generic_List_int__o *v24; // x0
  UILabel_o *storyQuestInfoTitle; // x21
  System_Collections_Generic_List_int__o *v26; // x20
  UILabel_o *heroQuestInfoTitle; // x21
  __int64 size; // x8
  __int64 i; // x24
  int32_t monitor; // w8
  clsQuestCheck_o *v31; // x21
  UILabel_o *storyQuestInfoDetail; // x22
  System_String_o *v33; // x0
  struct UnityEngine_GameObject_o *heroQuestInfo; // x1
  UILabel_o *eventQuestInfoDetail; // x22
  System_String_o *v36; // x0
  UILabel_o *heroQuestInfoDetail; // x22
  System_String_o *v38; // x0
  __int64 v39; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_421A066 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_9797/*"OPEN_STORY_QUEST_TITLE"*/, v15);
    sub_B0D8A4(&StringLiteral_9784/*"OPEN_EVENT_QUEST_NAME"*/, v16);
    sub_B0D8A4(&StringLiteral_9787/*"OPEN_HERO_QUEST_TITLE"*/, v17);
    byte_421A066 = 1;
  }
  this->fields.isOpenQuest = 0;
  v18 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_51;
  v21 = Instance;
  v23 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v23;
  *(_QWORD *)&v40.fields.fakeValue = v22;
  Instance = (clsQuestCheck_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v40, 0LL);
  if ( !v21 )
    goto LABEL_51;
  v24 = clsQuestCheck__GetReleaseQuestIdByServantLv(v21, (int32_t)Instance, this->fields.baseSvtCollectionLv, 0LL);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v26 = v24;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9797/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, (System_String_o *)Instance, 0LL),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9787/*"OPEN_HERO_QUEST_TITLE"*/, 0LL),
        !heroQuestInfoTitle) )
  {
LABEL_51:
    sub_B0D97C(Instance);
  }
  UILabel__set_text(heroQuestInfoTitle, (System_String_o *)Instance, 0LL);
  if ( v26 )
  {
    LODWORD(size) = v26->fields._size;
    if ( (int)size >= 1 )
    {
      for ( i = 8LL; ; ++i )
      {
        if ( i - 8 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( *((int *)&v26->fields._items->obj.klass + i) < 1 )
          goto LABEL_49;
        Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_51;
        Instance = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( i - 8 >= (unsigned __int64)(unsigned int)v26->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !Instance )
          goto LABEL_51;
        Instance = (clsQuestCheck_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        *((_DWORD *)&v26->fields._items->obj.klass + i),
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_51;
        monitor = (int32_t)Instance[1].monitor;
        v31 = Instance;
        if ( monitor == 6 )
        {
          heroQuestInfoDetail = this->fields.heroQuestInfoDetail;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9784/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
          Instance = (clsQuestCheck_o *)System_String__Format(v38, (Il2CppObject *)v31->fields.cQuestReleaseListP, 0LL);
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
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9784/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
          Instance = (clsQuestCheck_o *)System_String__Format(v33, (Il2CppObject *)v31->fields.cQuestReleaseListP, 0LL);
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
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          this->fields.isOpenQuest = 1;
        }
LABEL_49:
        size = v26->fields._size;
        v39 = i - 7;
        if ( v39 >= size )
          return;
      }
      eventQuestInfoDetail = this->fields.eventQuestInfoDetail;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9784/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
      Instance = (clsQuestCheck_o *)System_String__Format(v36, (Il2CppObject *)v31->fields.cQuestReleaseListP, 0LL);
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

  if ( (byte_421A069 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421A069 = 1;
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
    sub_B0D97C(currentLimitCntGrid);
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

  if ( (byte_421A06A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421A06A = 1;
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
    sub_B0D97C(resLimitCntGrid);
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
    sub_B0D97C(0LL);
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
  int32_t childCount; // w23
  UnityEngine_Transform_o *transform; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_resLimitCntList; // x25
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int32_t v40; // w26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UserServantEntity_o *v56; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x20
  __int64 v58; // x21
  __int64 v59; // x22
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_421A060 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, resData);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_421A060 = 1;
  }
  this->fields.resUsrSvtData = resData;
  sub_B0D840(
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
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resLimitCntList,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( childCount >= 1 )
  {
    if ( transform )
    {
      v40 = 0;
      while ( 1 )
      {
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Transform__GetChild(transform, v40, 0LL);
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
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( ++v40 >= childCount )
          goto LABEL_19;
      }
    }
LABEL_29:
    sub_B0D97C(resUsrSvtData);
  }
LABEL_19:
  this->fields.openCallBack = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endTutorialCallBack,
    (System_Int32_array **)endTutorialCb,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v47,
                                                                                                  v48);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v49;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_29;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v56 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_29;
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)resUsrSvtData;
  v59 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v59;
  *(_QWORD *)&v63.fields.fakeValue = v58;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v63, 0LL);
  if ( !v57 )
    goto LABEL_29;
  resUsrSvtData = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v57,
                                           (int32_t)resUsrSvtData,
                                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !resUsrSvtData )
    goto LABEL_29;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    SvtCombineResultWindowComponent__checkQuestOpen(this, v60);
    SvtCombineResultWindowComponent__checkGetSkill(this, v61);
  }
  SvtCombineResultWindowComponent__showGetExp(this, v60);
}


void __fastcall SvtCombineResultWindowComponent__setBaseAdjustInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  struct UserServantEntity_o *v5; // x8
  int32_t adjustHp; // w25
  int32_t baseMaxHpAdjustVal; // w26
  int v8; // w23
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  const MethodInfo *v10; // x2
  struct UserServantEntity_o *v11; // x8
  int32_t adjustAtk; // w23
  int32_t baseMaxAtkAdjustVal; // w25
  int32_t StatusUpAdjustAtk; // w21
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  const MethodInfo *v16; // x2

  if ( (byte_421A05D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_421A05D = 1;
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
  v5 = this->fields.baseUsrSvtData;
  if ( !v5 )
    goto LABEL_25;
  adjustHp = v5->fields.adjustHp;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = this->fields.baseUsrSvtData;
    if ( !v5 )
      goto LABEL_25;
    baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  }
  baseMaxHpAdjustVal = this->fields.baseMaxHpAdjustVal;
  v8 = *(_DWORD *)(*(_QWORD *)&baseUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 304LL);
  if ( v5->fields.adjustHp >= baseMaxHpAdjustVal )
    baseMaxHpAdjustVal = this->fields.baseSecondMaxHpAdjustVal;
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( (baseUsrSvtData->fields.createdAt & 0x4000000) != 0
    && !baseUsrSvtData->fields.randomLimitCountSupport.fields.currentCryptoKey )
  {
    j_il2cpp_runtime_class_init_0(baseUsrSvtData);
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_25;
  UIIconLabel__Set_41076120(
    currentAdjustHpIconLabel,
    44,
    v8 * adjustHp,
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
  SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.baseUsrSvtData, v10);
  v11 = this->fields.baseUsrSvtData;
  if ( !v11 )
    goto LABEL_25;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  adjustAtk = v11->fields.adjustAtk;
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
    || (UIIconLabel__Set_41076120(
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
    sub_B0D97C(baseUsrSvtData);
  }
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v16);
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
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x22
  UILabel_o *currentMaxLvLb; // x22
  struct UserServantEntity_o *v21; // x8
  UIExtrusionLabel_o *resLvLb; // x22
  UILabel_o *resMaxLvLb; // x22
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WebViewObject_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewObject_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  WebViewObject_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UIWidget_o *resLvWidget; // x24
  int v53; // s0
  UIWidget_o *resMaxLvWidget; // x23
  int v58; // s0
  UIWidget_o *resHpWidget; // x22
  int v63; // s0
  UIWidget_o *resAtkWidget; // x21
  int v68; // s0
  UILabel_o *currentExpValLb; // x21
  struct UserServantEntity_o *v73; // x8
  int32_t v74; // w20
  __int64 v75; // x21
  __int64 v76; // x22
  struct UserServantEntity_o *v77; // x8
  int32_t v78; // w21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v80; // x4
  int32_t baseLimitCnt; // w21
  UnityEngine_Transform_o *v82; // x0
  const MethodInfo *v83; // x4
  struct UserServantEntity_o *v84; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v86; // x8
  UILabel_o *resHpLb; // x20
  struct UserServantEntity_o *v88; // x8
  UILabel_o *currentAtkLb; // x20
  struct UserServantEntity_o *v90; // x8
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v92; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v100; // x1
  __int64 v101; // x2
  System_Action_o *v102; // x20
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_421A05B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SvtCombineResultWindowComponent_EndOpen__, v7);
    sub_B0D8A4(&StringLiteral_345/*"#,0"*/, v8);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v9);
    byte_421A05B = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_49;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  v21 = this->fields.baseUsrSvtData;
  if ( !v21 )
    goto LABEL_49;
  resLvLb = this->fields.resLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v21 + 256, 0LL);
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
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resLvWidget,
    (System_Int32_array **)Component_WebViewObject,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resMaxLvLb;
  if ( !skipCollider )
    goto LABEL_49;
  v31 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resMaxLvWidget,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resHpLb;
  if ( !skipCollider )
    goto LABEL_49;
  v38 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resHpWidget = (struct UIWidget_o *)v38;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resHpWidget,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resAtkLb;
  if ( !skipCollider )
    goto LABEL_49;
  v45 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resAtkWidget = (struct UIWidget_o *)v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resAtkWidget,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  resLvWidget = this->fields.resLvWidget;
  *(UnityEngine_Color_o *)&v53 = UnityEngine_Color__get_white(0LL);
  if ( !resLvWidget )
    goto LABEL_49;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)&v53, 0LL);
  resMaxLvWidget = this->fields.resMaxLvWidget;
  *(UnityEngine_Color_o *)&v58 = UnityEngine_Color__get_white(0LL);
  if ( !resMaxLvWidget )
    goto LABEL_49;
  UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)&v58, 0LL);
  resHpWidget = this->fields.resHpWidget;
  *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_white(0LL);
  if ( !resHpWidget )
    goto LABEL_49;
  UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)&v63, 0LL);
  resAtkWidget = this->fields.resAtkWidget;
  *(UnityEngine_Color_o *)&v68 = UnityEngine_Color__get_white(0LL);
  if ( !resAtkWidget )
    goto LABEL_49;
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)&v68, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentExpBar;
  if ( !skipCollider )
    goto LABEL_49;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_345/*"#,0"*/,
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
  v73 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  v74 = (int)skipCollider;
  v76 = *(_QWORD *)&v73->fields.limitCount.fields.currentCryptoKey;
  v75 = *(_QWORD *)&v73->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v105.fields.currentCryptoKey = v76;
  *(_QWORD *)&v105.fields.fakeValue = v75;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                             v105,
                                             0LL);
  v77 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v77 )
    goto LABEL_49;
  v78 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  this->fields.baseHpVal = v77->fields.hp;
  this->fields.baseAtkVal = v77->fields.atk;
  if ( !skipCollider )
    goto LABEL_49;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v74, v78, transform, v80);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_49;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_49;
  baseLimitCnt = this->fields.baseLimitCnt;
  v82 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v74, baseLimitCnt, v82, v83);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_49;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v84 = this->fields.baseUsrSvtData;
  if ( !v84 )
    goto LABEL_49;
  currentHpLb = this->fields.currentHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int)v84 + 268,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
                                             0LL);
  if ( !currentHpLb )
    goto LABEL_49;
  UILabel__set_text(currentHpLb, (System_String_o *)skipCollider, 0LL);
  v86 = this->fields.baseUsrSvtData;
  if ( !v86 )
    goto LABEL_49;
  resHpLb = this->fields.resHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int)v86 + 268,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
                                             0LL);
  if ( !resHpLb )
    goto LABEL_49;
  UILabel__set_text(resHpLb, (System_String_o *)skipCollider, 0LL);
  v88 = this->fields.baseUsrSvtData;
  if ( !v88 )
    goto LABEL_49;
  currentAtkLb = this->fields.currentAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int)v88 + 264,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
                                             0LL);
  if ( !currentAtkLb )
    goto LABEL_49;
  UILabel__set_text(currentAtkLb, (System_String_o *)skipCollider, 0LL);
  v90 = this->fields.baseUsrSvtData;
  if ( !v90 )
    goto LABEL_49;
  resAtkLb = this->fields.resAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int)v90 + 264,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
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
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v92);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.lvUpInfo,
    (System_Int32_array **)lvInfo,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
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
    sub_B0D97C(skipCollider);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v102 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v100, v101);
  System_Action___ctor(v102, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v102, 0, 0LL);
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
  struct UserServantEntity_o **p_baseUsrSvtData; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x23
  UILabel_o *currentSvtEqMaxLvLb; // x23
  struct UserServantEntity_o *v33; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x23
  UILabel_o *resSvtEqMaxLvLb; // x23
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WebViewObject_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  WebViewObject_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  WebViewObject_o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UIWidget_o *resLvWidget; // x25
  int v65; // s0
  UIWidget_o *resMaxLvWidget; // x24
  int v70; // s0
  UIWidget_o *resHpWidget; // x23
  int v75; // s0
  UIWidget_o *resAtkWidget; // x22
  int v80; // s0
  UILabel_o *currentSvtEqExpValLb; // x22
  struct UserServantEntity_o *v85; // x8
  int32_t v86; // w21
  __int64 v87; // x22
  __int64 v88; // x23
  struct UserServantEntity_o *v89; // x8
  int32_t v90; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v92; // x4
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *v94; // x0
  const MethodInfo *v95; // x4
  struct UserServantEntity_o *v96; // x8
  UILabel_o *currentSvtEqHpLb; // x21
  struct UserServantEntity_o *v98; // x8
  UILabel_o *resSvtEqHpLb; // x21
  struct UserServantEntity_o *v100; // x8
  UILabel_o *currentSvtEqAtkLb; // x21
  struct UserServantEntity_o *v102; // x8
  UILabel_o *resSvtEqAtkLb; // x21
  UILabel_o *normalExpLb; // x21
  UILabel_o *normalExpOverSpLb; // x21
  WebViewObject_o *v106; // x21
  int v107; // s0
  UIWidget_o *v111; // x22
  UnityEngine_GameObject_o *v112; // x24
  srcLineSprite_o *Component_srcLineSprite; // x23
  srcLineSprite_o *v114; // x0
  srcLineSprite_o *v115; // x20
  SvtCombineResultWindowComponent_c *v116; // x0
  Il2CppObject *v117; // x0
  System_String_o *v118; // x20
  UnityEngine_Transform_o *v119; // x0
  UnityEngine_GameObject_o *v120; // x20
  UnityEngine_Transform_o *v121; // x21
  int v122; // s0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_Object_o *v126; // x20
  UILabel_o *addExpLb; // x20
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  __int64 v135; // x1
  __int64 v136; // x2
  System_Action_o *v137; // x20
  intptr_t m_CachedPtr; // [xsp+8h] [xbp-58h] BYREF
  float barExp; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lateExp[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t v141; // [xsp+18h] [xbp-48h] BYREF
  int32_t v142; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16

  v141 = addExp;
  v142 = normalExp;
  if ( (byte_421A05C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v11);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B0D8A4(&Method_SvtCombineResultWindowComponent_EndOpen__, v17);
    sub_B0D8A4(&SvtCombineResultWindowComponent_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_345/*"#,0"*/, v19);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v20);
    sub_B0D8A4(&StringLiteral_4173/*"CombineSuccessEffect_{0:D2}"*/, v21);
    byte_421A05C = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  v33 = this->fields.baseUsrSvtData;
  if ( !v33 )
    goto LABEL_96;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v33 + 256, 0LL);
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
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resLvWidget,
    (System_Int32_array **)Component_WebViewObject,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqMaxLvLb;
  if ( !skipCollider )
    goto LABEL_96;
  v43 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v43;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resMaxLvWidget,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqHpLb;
  if ( !skipCollider )
    goto LABEL_96;
  v50 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resHpWidget = (struct UIWidget_o *)v50;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resHpWidget,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqAtkLb;
  if ( !skipCollider )
    goto LABEL_96;
  v57 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resAtkWidget = (struct UIWidget_o *)v57;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resAtkWidget,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  resLvWidget = this->fields.resLvWidget;
  *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_white(0LL);
  if ( !resLvWidget )
    goto LABEL_96;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)&v65, 0LL);
  resMaxLvWidget = this->fields.resMaxLvWidget;
  *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_white(0LL);
  if ( !resMaxLvWidget )
    goto LABEL_96;
  UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)&v70, 0LL);
  resHpWidget = this->fields.resHpWidget;
  *(UnityEngine_Color_o *)&v75 = UnityEngine_Color__get_white(0LL);
  if ( !resHpWidget )
    goto LABEL_96;
  UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)&v75, 0LL);
  resAtkWidget = this->fields.resAtkWidget;
  *(UnityEngine_Color_o *)&v80 = UnityEngine_Color__get_white(0LL);
  if ( !resAtkWidget )
    goto LABEL_96;
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)&v80, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_96;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_345/*"#,0"*/,
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
  v85 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  v86 = (int)skipCollider;
  v88 = *(_QWORD *)&v85->fields.limitCount.fields.currentCryptoKey;
  v87 = *(_QWORD *)&v85->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v143.fields.currentCryptoKey = v88;
  *(_QWORD *)&v143.fields.fakeValue = v87;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                             v143,
                                             0LL);
  v89 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v89 )
    goto LABEL_96;
  v90 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = v89->fields.hp;
  this->fields.baseAtkVal = v89->fields.atk;
  if ( !skipCollider )
    goto LABEL_96;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v86, v90, transform, v92);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_96;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_96;
  baseLimitCnt = this->fields.baseLimitCnt;
  v94 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v86, baseLimitCnt, v94, v95);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_96;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v96 = this->fields.baseUsrSvtData;
  if ( !v96 )
    goto LABEL_96;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int)v96 + 268,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqHpLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v98 = this->fields.baseUsrSvtData;
  if ( !v98 )
    goto LABEL_96;
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int)v98 + 268,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
                                             0LL);
  if ( !resSvtEqHpLb )
    goto LABEL_96;
  UILabel__set_text(resSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v100 = this->fields.baseUsrSvtData;
  if ( !v100 )
    goto LABEL_96;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int)v100 + 264,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqAtkLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  v102 = this->fields.baseUsrSvtData;
  if ( !v102 )
    goto LABEL_96;
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int)v102 + 264,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
                                             0LL);
  if ( !resSvtEqAtkLb )
    goto LABEL_96;
  UILabel__set_text(resSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  normalExpLb = this->fields.normalExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int32_t)&v142,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
                                             0LL);
  if ( !normalExpLb )
    goto LABEL_96;
  UILabel__set_text(normalExpLb, (System_String_o *)skipCollider, 0LL);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int32_t)&v142,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
                                             0LL);
  if ( !normalExpOverSpLb )
    goto LABEL_96;
  UILabel__set_text(normalExpOverSpLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpLb;
  if ( !skipCollider )
    goto LABEL_96;
  v106 = UnityEngine_Component__GetComponent_WebViewObject_(
           (UnityEngine_Component_o *)skipCollider,
           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v107 = UnityEngine_Color__get_white(0LL);
  if ( !v106 )
    goto LABEL_96;
  UIWidget__set_color((UIWidget_o *)v106, *(UnityEngine_Color_o *)&v107, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_96;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_96;
  v111 = (UIWidget_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_96;
  v112 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  if ( !v112 )
    goto LABEL_96;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v112,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v114 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
           v112,
           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
    goto LABEL_89;
  v115 = v114;
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_96;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v116 = SvtCombineResultWindowComponent_TypeInfo;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v116 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color((UIWidget_o *)v106, v116->static_fields->COLOR_VAL, 0LL);
  if ( !v111 )
    goto LABEL_96;
  UIWidget__set_color(v111, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0LL);
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
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v115, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v115 )
      goto LABEL_96;
    LODWORD(v115->fields.mcLineSprite) = 0x40000000;
    UITweener__Play((UITweener_o *)v115, 0LL);
  }
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int32_t)&v142, 0LL);
  if ( !skipCollider )
    goto LABEL_96;
  m_CachedPtr = skipCollider->fields.m_CachedPtr;
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr);
  skipCollider = (UnityEngine_Collider_o *)System_String__Format((System_String_o *)StringLiteral_4173/*"CombineSuccessEffect_{0:D2}"*/, v117, 0LL);
  if ( !this->fields.dispNodeObj )
    goto LABEL_96;
  v118 = (System_String_o *)skipCollider;
  v119 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL);
  skipCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__getEffect(v118, v119, 0LL);
  if ( !skipCollider
    || (v120 = (UnityEngine_GameObject_o *)skipCollider,
        skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)skipCollider,
                                                   0LL),
        !this->fields.dispNodeObj)
    || (v121 = (UnityEngine_Transform_o *)skipCollider,
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v122 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)skipCollider,
                                            0LL),
        !v121) )
  {
LABEL_96:
    sub_B0D97C(skipCollider);
  }
  UnityEngine_Transform__set_localPosition(v121, *(UnityEngine_Vector3_o *)&v122, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        v120,
                                                                        (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v126 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                   v120,
                                   (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
    skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(v126, 0LL, 0LL);
    if ( ((unsigned __int8)skipCollider & 1) != 0 )
    {
      if ( !v126 )
        goto LABEL_96;
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v126, 0LL);
    }
  }
LABEL_89:
  addExpLb = this->fields.addExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_38473032(
                                             (int32_t)&v141,
                                             (System_String_o *)StringLiteral_9289/*"N0"*/,
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.lvUpInfo,
    (System_Int32_array **)svtEqLvInfo,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
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
  v137 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v135, v136);
  System_Action___ctor(v137, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v137, 0, 0LL);
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

  if ( (byte_421A068 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, *(_QWORD *)&maxLimitCnt);
    byte_421A068 = 1;
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
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v11,
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0LL) )
      {
        sub_B0D97C(Object);
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
  int32_t v19; // w21
  int32_t v20; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8

  if ( (byte_421A05F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, targetData);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_421A05F = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resAdjustAtkIconLabel,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_23;
  v19 = StatusUpAdjustAtk * adjustAtk;
  v20 = v18 * baseMaxAtkAdjustVal;
  UIIconLabel__Set_41076120(
    (UIIconLabel_o *)resAdjustAtkIconLabel,
    45,
    v19,
    v18 * baseMaxAtkAdjustVal,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  if ( !System_Int32__Equals_38472956((_DWORD)baseUsrSvtData + 272, targetData->fields.adjustAtk, 0LL) )
  {
    resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
    this->fields.isAtkLimitUp = targetData->fields.adjustAtk == this->fields.baseMaxAtkAdjustVal;
    if ( !resAdjustAtkIconLabel )
      goto LABEL_23;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustAtkIconLabel,
      v19,
      v20,
      targetData->fields.adjustAtk == this->fields.baseSecondMaxAtkAdjustVal,
      0LL);
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkMaxLabel;
  if ( !resAdjustAtkIconLabel )
LABEL_23:
    sub_B0D97C(resAdjustAtkIconLabel);
  UILabel__set_text((UILabel_o *)resAdjustAtkIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  int32_t v19; // w21
  int32_t v20; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8

  if ( (byte_421A05E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, targetData);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_421A05E = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resAdjustHpIconLabel,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_23;
  v19 = StatusUpAdjustHp * adjustHp;
  v20 = v18 * baseMaxHpAdjustVal;
  UIIconLabel__Set_41076120(
    (UIIconLabel_o *)resAdjustHpIconLabel,
    44,
    v19,
    v18 * baseMaxHpAdjustVal,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  if ( !System_Int32__Equals_38472956((_DWORD)baseUsrSvtData + 276, targetData->fields.adjustHp, 0LL) )
  {
    resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
    this->fields.isHpLimitUp = targetData->fields.adjustHp == this->fields.baseMaxHpAdjustVal;
    if ( !resAdjustHpIconLabel )
      goto LABEL_23;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustHpIconLabel,
      v19,
      v20,
      targetData->fields.adjustHp == this->fields.baseSecondMaxHpAdjustVal,
      0LL);
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpMaxLabel;
  if ( !resAdjustHpIconLabel )
LABEL_23:
    sub_B0D97C(resAdjustHpIconLabel);
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
  __int64 v8; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w23
  struct ServantEntity_o *baseSvtData; // x8
  ServantExpMaster_o *v12; // x25
  struct ServantEntity_o *v13; // x8
  int32_t v14; // w21
  struct ServantEntity_o *v15; // x8
  UserServantEntity_o *v16; // x24
  int hiddenValue; // w8
  float v18; // s0

  if ( (byte_421A062 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421A062 = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  baseSvtData = this->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_26;
  v12 = (ServantExpMaster_o *)resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__getLevel(
                                           (ServantExpMaster_o *)resUsrSvtData,
                                           nowExp,
                                           baseSvtData->fields.expType,
                                           LevelMax,
                                           startLv,
                                           0LL);
  v13 = this->fields.baseSvtData;
  if ( !v13 )
    goto LABEL_26;
  v14 = (int)resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(
                                           v12,
                                           v13->fields.expType,
                                           (int32_t)resUsrSvtData,
                                           0LL);
  v15 = this->fields.baseSvtData;
  if ( !v15 )
    goto LABEL_26;
  v16 = resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(v12, v15->fields.expType, v14 - 1, 0LL);
  if ( resUsrSvtData )
    hiddenValue = resUsrSvtData->fields.id.fields.hiddenValue;
  else
    hiddenValue = 0;
  if ( LevelMax != startLv )
  {
    if ( this->fields.isEqCombine )
    {
      if ( !v16 )
        goto LABEL_26;
      resUsrSvtData = (UserServantEntity_o *)this->fields.resSvtEqCrExpBar;
      if ( !resUsrSvtData )
        goto LABEL_26;
LABEL_24:
      v18 = 1.0
          - (float)((float)(LODWORD(v16->fields.id.fields.hiddenValue) - nowExp)
                  / (float)(LODWORD(v16->fields.id.fields.hiddenValue) - hiddenValue));
      goto LABEL_25;
    }
    if ( v16 )
    {
      resUsrSvtData = (UserServantEntity_o *)this->fields.resCrExpBar;
      if ( resUsrSvtData )
        goto LABEL_24;
    }
LABEL_26:
    sub_B0D97C(resUsrSvtData);
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
  v18 = 1.0;
LABEL_25:
  UIProgressBar__set_value((UIProgressBar_o *)resUsrSvtData, v18, 0LL);
  return v14;
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
  __int64 Instance; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x20
  __int64 v30; // x21
  __int64 v31; // x22
  struct ServantEntity_o *Entity; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v40; // w1
  const MethodInfo *v41; // x4
  struct UserServantEntity_o *v42; // x8
  int32_t atk; // w9
  struct UserServantEntity_o *v44; // x8
  struct UserServantEntity_o *v45; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Object_array *v53; // x21
  __int64 v54; // x0
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x1
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x1
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x22
  System_Collections_Hashtable_o *v133; // x0
  UILabel_o *resSvtEqMaxLvLb; // x20
  UIWidget_o *resMaxLvWidget; // x20
  UILabel_o *infoLb; // x20
  System_String_o *v137; // x21
  Il2CppObject *v138; // x22
  Il2CppObject *v139; // x0
  struct System_Collections_Generic_List_GameObject__o *resLimitCntList; // x22
  __int64 v141; // x20
  int size; // w8
  struct UserServantEntity_o *v143; // x8
  struct UserServantEntity_o *v144; // x9
  int32_t v145; // w0
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v148; // x2
  UIWidget_o *resHpWidget; // x20
  int32_t v150; // w0
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v153; // x2
  UIWidget_o *resAtkWidget; // x19
  __int64 v155; // x0
  __int64 v156; // x0
  int v157; // [xsp+Ch] [xbp-34h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-28h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16

  if ( (byte_421A061 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&object___TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&float_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&SvtCombineResultWindowComponent_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v15);
    sub_B0D8A4(&StringLiteral_8714/*"MAX_LVUP_TXT"*/, v16);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v17);
    sub_B0D8A4(&StringLiteral_5961/*"EndDisp"*/, v18);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v19);
    sub_B0D8A4(&StringLiteral_15115/*"UpdateValue"*/, v20);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v21);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v22);
    sub_B0D8A4(&StringLiteral_13094/*"StartUpdateValue"*/, v23);
    sub_B0D8A4(&StringLiteral_21338/*"onstart"*/, v24);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v25);
    sub_B0D8A4(&iTween_TypeInfo, v26);
    byte_421A061 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_96;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v31 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v160.fields.currentCryptoKey = v31;
  *(_QWORD *)&v160.fields.fakeValue = v30;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v160, 0LL);
  if ( !v29 )
    goto LABEL_96;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v29,
                                       Instance,
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseSvtData,
    (System_Int32_array **)Entity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_96;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(resUsrSvtData->fields.limitCount, 0LL);
  v42 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = Instance;
  if ( !v42 )
    goto LABEL_96;
  this->fields.resHpVal = v42->fields.hp;
  atk = v42->fields.atk;
  v44 = this->fields.baseUsrSvtData;
  this->fields.resAtkVal = atk;
  if ( !v44 )
    goto LABEL_96;
  Instance = SvtCombineResultWindowComponent__setSvtExp(this, v40, v44->fields.exp, v44->fields.lv, v41);
  v45 = this->fields.baseUsrSvtData;
  if ( !v45 )
    goto LABEL_96;
  this->fields.PrevLevel = v45->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Instance = sub_B0D8BC(object___TypeInfo, 12LL);
  if ( !Instance )
    goto LABEL_96;
  v53 = (System_Object_array *)Instance;
  v54 = StringLiteral_18972/*"from"*/;
  if ( StringLiteral_18972/*"from"*/ )
  {
    v54 = sub_B0D964(StringLiteral_18972/*"from"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
    v55 = (System_Int32_array **)StringLiteral_18972/*"from"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( !v53->max_length )
    goto LABEL_123;
  v53->m_Items[0] = (Il2CppObject *)v55;
  sub_B0D840((BattleServantConfConponent_o *)v53->m_Items, v55, v47, v48, v49, v50, v51, v52);
  baseLvMax = 0;
  v54 = j_il2cpp_value_box_0(float_TypeInfo, &baseLvMax);
  v62 = (System_Int32_array **)v54;
  if ( v54 )
  {
    v54 = sub_B0D964(v54, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
  }
  if ( v53->max_length <= 1 )
    goto LABEL_123;
  v53->m_Items[1] = (Il2CppObject *)v62;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[1], v62, v56, v57, v58, v59, v60, v61);
  v54 = StringLiteral_22790/*"to"*/;
  if ( StringLiteral_22790/*"to"*/ )
  {
    v54 = sub_B0D964(StringLiteral_22790/*"to"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
    v69 = (System_Int32_array **)StringLiteral_22790/*"to"*/;
  }
  else
  {
    v69 = 0LL;
  }
  if ( v53->max_length <= 2 )
    goto LABEL_123;
  v53->m_Items[2] = (Il2CppObject *)v69;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[2], v69, v63, v64, v65, v66, v67, v68);
  resLvMax = 1065353216;
  v54 = j_il2cpp_value_box_0(float_TypeInfo, &resLvMax);
  v76 = (System_Int32_array **)v54;
  if ( v54 )
  {
    v54 = sub_B0D964(v54, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
  }
  if ( v53->max_length <= 3 )
    goto LABEL_123;
  v53->m_Items[3] = (Il2CppObject *)v76;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[3], v76, v70, v71, v72, v73, v74, v75);
  v54 = StringLiteral_21338/*"onstart"*/;
  if ( StringLiteral_21338/*"onstart"*/ )
  {
    v54 = sub_B0D964(StringLiteral_21338/*"onstart"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
    v83 = (System_Int32_array **)StringLiteral_21338/*"onstart"*/;
  }
  else
  {
    v83 = 0LL;
  }
  if ( v53->max_length <= 4 )
    goto LABEL_123;
  v53->m_Items[4] = (Il2CppObject *)v83;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[4], v83, v77, v78, v79, v80, v81, v82);
  v54 = StringLiteral_13094/*"StartUpdateValue"*/;
  if ( StringLiteral_13094/*"StartUpdateValue"*/ )
  {
    v54 = sub_B0D964(StringLiteral_13094/*"StartUpdateValue"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
    v90 = (System_Int32_array **)StringLiteral_13094/*"StartUpdateValue"*/;
  }
  else
  {
    v90 = 0LL;
  }
  if ( v53->max_length <= 5 )
    goto LABEL_123;
  v53->m_Items[5] = (Il2CppObject *)v90;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[5], v90, v84, v85, v86, v87, v88, v89);
  v54 = StringLiteral_21341/*"onupdate"*/;
  if ( StringLiteral_21341/*"onupdate"*/ )
  {
    v54 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
    v97 = (System_Int32_array **)StringLiteral_21341/*"onupdate"*/;
  }
  else
  {
    v97 = 0LL;
  }
  if ( v53->max_length <= 6 )
    goto LABEL_123;
  v53->m_Items[6] = (Il2CppObject *)v97;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[6], v97, v91, v92, v93, v94, v95, v96);
  v54 = StringLiteral_15115/*"UpdateValue"*/;
  if ( StringLiteral_15115/*"UpdateValue"*/ )
  {
    v54 = sub_B0D964(StringLiteral_15115/*"UpdateValue"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
    v104 = (System_Int32_array **)StringLiteral_15115/*"UpdateValue"*/;
  }
  else
  {
    v104 = 0LL;
  }
  if ( v53->max_length <= 7 )
    goto LABEL_123;
  v53->m_Items[7] = (Il2CppObject *)v104;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[7], v104, v98, v99, v100, v101, v102, v103);
  v54 = StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v54 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
    v111 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v111 = 0LL;
  }
  if ( v53->max_length <= 8 )
    goto LABEL_123;
  v53->m_Items[8] = (Il2CppObject *)v111;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[8], v111, v105, v106, v107, v108, v109, v110);
  v54 = StringLiteral_5961/*"EndDisp"*/;
  if ( StringLiteral_5961/*"EndDisp"*/ )
  {
    v54 = sub_B0D964(StringLiteral_5961/*"EndDisp"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
    v118 = (System_Int32_array **)StringLiteral_5961/*"EndDisp"*/;
  }
  else
  {
    v118 = 0LL;
  }
  if ( v53->max_length <= 9 )
    goto LABEL_123;
  v53->m_Items[9] = (Il2CppObject *)v118;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[9], v118, v112, v113, v114, v115, v116, v117);
  v54 = StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v54 = sub_B0D964(StringLiteral_22753/*"time"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_124;
    v125 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v125 = 0LL;
  }
  if ( v53->max_length <= 0xA )
    goto LABEL_123;
  v53->m_Items[10] = (Il2CppObject *)v125;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[10], v125, v119, v120, v121, v122, v123, v124);
  v157 = 0x40000000;
  v54 = j_il2cpp_value_box_0(float_TypeInfo, &v157);
  v132 = (System_Int32_array **)v54;
  if ( v54 )
  {
    v54 = sub_B0D964(v54, v53->obj.klass->_1.element_class);
    if ( !v54 )
    {
LABEL_124:
      v156 = sub_B0D99C(v54);
      sub_B0D948(v156, 0LL);
    }
  }
  if ( v53->max_length <= 0xB )
  {
LABEL_123:
    v155 = sub_B0D9A8(v54);
    sub_B0D948(v155, 0LL);
  }
  v53->m_Items[11] = (Il2CppObject *)v132;
  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[11], v132, v126, v127, v128, v129, v130, v131);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v133 = iTween__Hash(v53, 0LL);
  iTween__ValueTo(gameObject, v133, 0LL);
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
    v137 = LocalizationManager__Get((System_String_o *)StringLiteral_8714/*"MAX_LVUP_TXT"*/, 0LL);
    baseLvMax = this->fields.baseLvMax;
    v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseLvMax);
    resLvMax = this->fields.resLvMax;
    v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &resLvMax);
    Instance = (__int64)System_String__Format_43845440(v137, v138, v139, 0LL);
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
                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_96;
    UITweener__Play((UITweener_o *)Instance, 0LL);
    resLimitCntList = this->fields.resLimitCntList;
    if ( !resLimitCntList )
      goto LABEL_96;
    v141 = 0LL;
    while ( 1 )
    {
      size = resLimitCntList->fields._size;
      if ( (int)v141 >= size )
        break;
      if ( size <= (unsigned int)v141 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Instance = (__int64)resLimitCntList->fields._items->m_Items[v141];
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Instance )
        {
          SetLimitCntInfoComponent__setEnableOnImg(
            (SetLimitCntInfoComponent_o *)Instance,
            (int)v141 < this->fields.resLimitCnt,
            0LL);
          resLimitCntList = this->fields.resLimitCntList;
          ++v141;
          if ( resLimitCntList )
            continue;
        }
      }
      goto LABEL_96;
    }
  }
  v143 = this->fields.baseUsrSvtData;
  if ( !v143 )
    goto LABEL_96;
  v144 = this->fields.resUsrSvtData;
  if ( !v144 )
    goto LABEL_96;
  if ( v143->fields.lv != v144->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    v145 = (_DWORD)this + 708;
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      Instance = (__int64)System_Int32__ToString_38473032(v145, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_96;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)Instance, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      Instance = (__int64)System_Int32__ToString_38473032(v145, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_96;
      UILabel__set_text(resHpLb, (System_String_o *)Instance, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v148);
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
  v150 = (_DWORD)this + 716;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    Instance = (__int64)System_Int32__ToString_38473032(v150, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_96;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)Instance, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    Instance = (__int64)System_Int32__ToString_38473032(v150, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_96;
    UILabel__set_text(resAtkLb, (System_String_o *)Instance, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v153);
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
    sub_B0D97C(Instance);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1

  if ( (byte_421A065 & 1) == 0 )
  {
    sub_B0D8A4(&iTween_TypeInfo, callback);
    byte_421A065 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42502584(gameObject, 0LL);
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
    sub_B0D97C(0LL);
  System_Action__Invoke(callback, 0LL);
}