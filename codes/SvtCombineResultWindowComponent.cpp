void __fastcall SvtCombineResultWindowComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct SvtCombineResultWindowComponent_StaticFields *static_fields; // x0
  struct SvtCombineResultWindowComponent_StaticFields *v5; // x0
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EAAE & 1) == 0 )
  {
    sub_1B885B0(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_4597/*"Combine/"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5EAAE = 1;
  }
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_BB53C0;
  v3 = StringLiteral_4597/*"Combine/"*/;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4597/*"Combine/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->TUTORIAL_FOLDER, v3, v1, v2);
  v5 = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&v5->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = 0x1A00000019LL;
  v5->SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 27;
  v6 = StringLiteral_1212/*"0"*/;
  v5->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1212/*"0"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->INIT_VAL_TXT, v6, v7, v8);
}


void __fastcall SvtCombineResultWindowComponent___ctor(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5EAAD & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EAAD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A5EAAC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SvtCombineResultWindowComponent_EndDisp__);
    byte_4A5EAAC = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_1B8880C(0LL, method);
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0LL) )
  {
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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

  if ( (byte_4A5EAAA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SvtCombineResultWindowComponent_EndClose__);
    byte_4A5EAAA = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  SvtCombineResultWindowComponent__Close_45035136(this, v4, v5);
}


void __fastcall SvtCombineResultWindowComponent__Close_45035136(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4A5EAAB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SvtCombineResultWindowComponent_EndClose__);
    byte_4A5EAAB = 1;
  }
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
    sub_1B8880C(0LL, v4);
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
  const MethodInfo *v8; // x4

  if ( (byte_4A5EAA2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_SvtCombineResultWindowComponent_EndOpen__);
    byte_4A5EAA2 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  this->fields.isUpdateGauge = 0;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSystemSe(0LL);
  if ( this->fields.isGetNewSkill || this->fields.isOpenQuest )
  {
    openInfowindowComp = this->fields.openInfowindowComp;
    resInfoList = this->fields.resInfoList;
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v7, 1, v8);
      return;
    }
LABEL_11:
    sub_1B8880C(skipCollider, method);
  }
  SvtCombineResultWindowComponent__EndOpen(this, v4);
}


void __fastcall SvtCombineResultWindowComponent__EndOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *openCallBack; // x19
  __int64 v6; // x19
  SvtCombineResultWindowComponent_c *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Action_o *endTutorialCallBack; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x0
  _BOOL4 isHpLimitUp; // w9
  _BOOL4 isAtkLimitUp; // w8
  System_Int32_array *v17; // x20
  uint32_t cctor_finished; // w9
  int32_t *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL; // x8
  Il2CppObject *Instance; // x21
  System_Action_o *v21; // x22

  if ( (byte_4A5EAA9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1B885B0(&Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__);
    sub_1B885B0(&SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo);
    byte_4A5EAA9 = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
  if ( this->fields.endTutorialCallBack )
  {
    v6 = sub_1B887FC(SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    if ( !v6 )
      goto LABEL_31;
    endTutorialCallBack = this->fields.endTutorialCallBack;
    *(_QWORD *)(v6 + 16) = endTutorialCallBack;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)endTutorialCallBack, v9, v10);
    this->fields.endTutorialCallBack = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endTutorialCallBack, 0, v12, v13);
    if ( this->fields.isHpLimitUp || this->fields.isAtkLimitUp )
    {
      v14 = sub_1B88658(int___TypeInfo, 1LL);
      isHpLimitUp = this->fields.isHpLimitUp;
      isAtkLimitUp = this->fields.isAtkLimitUp;
      v17 = (System_Int32_array *)v14;
      if ( isHpLimitUp )
      {
        v7 = SvtCombineResultWindowComponent_TypeInfo;
        cctor_finished = SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished;
        if ( isAtkLimitUp )
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v7 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v17 )
            goto LABEL_31;
          if ( v17->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v7->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_28:
            v17->m_Items[1] = *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_29:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v21,
              (Il2CppObject *)v6,
              Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__OpenImageDialogAssets((CommonUI_o *)Instance, v17, 2, v21, 0LL);
              return;
            }
LABEL_31:
            sub_1B8880C(v7, v8);
          }
        }
        else
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v7 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v17 )
            goto LABEL_31;
          if ( v17->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v7->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
            goto LABEL_28;
          }
        }
      }
      else
      {
        if ( !isAtkLimitUp )
          goto LABEL_29;
        v7 = SvtCombineResultWindowComponent_TypeInfo;
        if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
          v7 = SvtCombineResultWindowComponent_TypeInfo;
        }
        if ( !v17 )
          goto LABEL_31;
        if ( v17->max_length )
        {
          p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v7->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
          goto LABEL_28;
        }
      }
      sub_1B88814(v7, v8);
    }
  }
}


void __fastcall SvtCombineResultWindowComponent__InitStateInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x20

  if ( (byte_4A5EA98 & 1) == 0 )
  {
    sub_1B885B0(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EA98 = 1;
  }
  currentMaxLvLb = (UILabel_o *)SvtCombineResultWindowComponent_TypeInfo;
  currentLvLb = this->fields.currentLvLb;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
  if ( !currentLvLb )
    goto LABEL_36;
  UIExtrusionLabel__set_text(currentLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.currentExpValLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentSvtEqLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIExtrusionLabel__set_text(
    (UIExtrusionLabel_o *)currentMaxLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0LL);
  currentMaxLvLb = this->fields.currentSvtEqMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentSvtEqExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.currentSvtEqExpValLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentSvtEqHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentSvtEqAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentAdjustHpIconLabel;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0LL);
  currentMaxLvLb = this->fields.currentAdjustHpMaxLabel;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0LL);
  currentMaxLvLb = this->fields.currentAdjustAtkMaxLabel;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.resLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIExtrusionLabel__set_text(
    (UIExtrusionLabel_o *)currentMaxLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0LL);
  currentMaxLvLb = this->fields.resMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.resCrExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.resHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.resAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.resSvtEqLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIExtrusionLabel__set_text(
    (UIExtrusionLabel_o *)currentMaxLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0LL);
  currentMaxLvLb = this->fields.resSvtEqMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.resSvtEqCrExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.resSvtEqHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.resSvtEqAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
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
LABEL_36:
    sub_1B8880C(currentMaxLvLb, method);
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
  __int64 resUsrSvtData; // x0
  int v6; // w20
  const MethodInfo *v7; // x4
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v9; // x9
  float v10; // s2
  float exp; // s9
  float v12; // s1
  float v13; // s10
  float v14; // s9
  unsigned int v15; // w10
  int32_t v16; // w21
  float v17; // s0
  float Epsilon; // s4
  float v19; // s1
  struct UserServantEntity_o *v20; // x8
  struct UserServantEntity_o *v21; // x8
  struct UserServantEntity_o *v22; // x8
  int32_t v23; // w21
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  UITweener_o *v26; // x20
  _BOOL4 isEqCombine; // w8
  UIExtrusionLabel_o *v28; // x20
  UIWidget_o *resLvWidget; // x20
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v32; // x2
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v36; // x2
  UIWidget_o *resAtkWidget; // x19
  int32_t afterAtk; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t afterHp; // [xsp+8h] [xbp-48h] BYREF
  int32_t increLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5EAA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_SvtCombineResultWindowComponent_UpdateValue__);
    sub_1B885B0(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5EAA1 = 1;
  }
  afterAtk = 0;
  afterHp = 0;
  resUsrSvtData = (__int64)this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_66;
  resUsrSvtData = UserServantEntity__getLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_66;
  v6 = resUsrSvtData;
  UnityEngine_Collider__set_enabled(this->fields.skipCollider, 1, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_66;
  v9 = this->fields.resUsrSvtData;
  if ( !v9 )
    goto LABEL_66;
  v10 = fminf(val, 1.0);
  exp = (float)baseUsrSvtData->fields.exp;
  if ( val < 0.0 )
    v12 = 0.0;
  else
    v12 = v10;
  v13 = v12 * (float)((float)v9->fields.exp - exp);
  if ( !byte_4A55CE0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE0 = 1;
  }
  v14 = v13 + exp;
  resUsrSvtData = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v15 = vcvtms_s32_f32(v14);
  if ( floorf(v14) == INFINITY )
    v16 = 0x80000000;
  else
    v16 = v15;
  if ( !byte_4A55CE5 )
  {
    resUsrSvtData = sub_1B885B0(&UnityEngine_Mathf_TypeInfo);
    byte_4A55CE5 = 1;
  }
  v17 = fmaxf(fabsf(val), 1.0) * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  v19 = fabsf(val + -1.0);
  if ( v17 <= (float)(Epsilon * 8.0) )
    v17 = Epsilon * 8.0;
  if ( v19 >= v17 )
  {
    if ( !this->fields.resUsrSvtData )
      goto LABEL_66;
  }
  else
  {
    v20 = this->fields.resUsrSvtData;
    if ( !v20 )
      goto LABEL_66;
    v16 = v20->fields.exp;
  }
  v21 = this->fields.baseUsrSvtData;
  if ( !v21 )
    goto LABEL_66;
  resUsrSvtData = SvtCombineResultWindowComponent__setSvtExp(this, (int32_t)method, v16, v21->fields.lv, v7);
  increLv = resUsrSvtData;
  v22 = this->fields.baseUsrSvtData;
  if ( !v22 )
    goto LABEL_66;
  if ( v22->fields.lv == v6 )
    return;
  v23 = resUsrSvtData;
  if ( !this->fields.isUpdateGauge )
  {
    v24 = Method_SvtCombineResultWindowComponent_UpdateValue__;
    if ( (*((_BYTE *)Method_SvtCombineResultWindowComponent_UpdateValue__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1B885C8(Method_SvtCombineResultWindowComponent_UpdateValue__);
    v25 = (System_Reflection_MethodBase_o *)sub_1B88594(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 3, 0LL);
    this->fields.isUpdateGauge = 1;
  }
  if ( v23 == this->fields.PrevLevel )
  {
    this->fields.endDispLvInfoFlg = 1;
    return;
  }
  resUsrSvtData = (__int64)this->fields.lvUpInfo;
  if ( !resUsrSvtData )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resUsrSvtData, 1, 0LL);
  resUsrSvtData = (__int64)this->fields.lvUpInfo;
  if ( !resUsrSvtData )
    goto LABEL_66;
  resUsrSvtData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)resUsrSvtData,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !resUsrSvtData )
    goto LABEL_66;
  v26 = (UITweener_o *)resUsrSvtData;
  UITweener__ResetToBeginning((UITweener_o *)resUsrSvtData, 0LL);
  UITweener__PlayForward(v26, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v23;
  this->fields.endDispLvInfoFlg = 0;
  v28 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  resUsrSvtData = (__int64)System_Int32__ToString((int32_t)&increLv, 0LL);
  if ( !v28 )
    goto LABEL_66;
  UIExtrusionLabel__set_text(v28, (System_String_o *)resUsrSvtData, 0LL);
  resLvWidget = this->fields.resLvWidget;
  resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resLvWidget )
    goto LABEL_66;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)*(_QWORD *)(resUsrSvtData + 184), 0LL);
  resUsrSvtData = (__int64)this->fields.checkResInfo;
  if ( !resUsrSvtData )
    goto LABEL_66;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)resUsrSvtData,
    &afterHp,
    &afterAtk,
    this->fields.resUsrSvtData,
    increLv,
    0LL);
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      resUsrSvtData = (__int64)System_Int32__ToString_62512312(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9206/*"N0"*/,
                                 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_66;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)resUsrSvtData, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      resUsrSvtData = (__int64)System_Int32__ToString_62512312(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9206/*"N0"*/,
                                 0LL);
      if ( !resHpLb )
        goto LABEL_66;
      UILabel__set_text(resHpLb, (System_String_o *)resUsrSvtData, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v32);
    }
    resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    resHpWidget = this->fields.resHpWidget;
    if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resHpWidget )
      goto LABEL_66;
    UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)*(_QWORD *)(resUsrSvtData + 184), 0LL);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    resUsrSvtData = (__int64)System_Int32__ToString_62512312(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9206/*"N0"*/,
                               0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_66;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)resUsrSvtData, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    resUsrSvtData = (__int64)System_Int32__ToString_62512312(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9206/*"N0"*/,
                               0LL);
    if ( !resAtkLb )
      goto LABEL_66;
    UILabel__set_text(resAtkLb, (System_String_o *)resUsrSvtData, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v36);
  }
  resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  resAtkWidget = this->fields.resAtkWidget;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resAtkWidget )
LABEL_66:
    sub_1B8880C(resUsrSvtData, method);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(resUsrSvtData + 184), 0LL);
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
  Il2CppObject *Entity; // x0
  UILabel_o *skillGetInfoTitle; // x21
  SkillEntity_o *v13; // x20
  UILabel_o *skillGetInfoDetail; // x21
  System_String_o *v15; // x22
  Il2CppObject *Name; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int64_t currentCryptoKey; // x8
  _QWORD *v20; // x9
  __int64 hiddenValue_low; // x10
  int64_t v22; // x8

  if ( (byte_4A5EAA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6921/*"GET_SKILL_NAME"*/);
    sub_1B885B0(&StringLiteral_6923/*"GET_SKILL_TITLE"*/);
    byte_4A5EAA5 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(baseUsrSvtData, -1, -1, 1, -1, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_30;
  v4 = baseUsrSvtData;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(
                                            this->fields.resUsrSvtData,
                                            -1,
                                            -1,
                                            1,
                                            -1,
                                            0LL);
  if ( !v4 )
    goto LABEL_30;
  hiddenValue = v4->fields.id.fields.hiddenValue;
  if ( (int)hiddenValue < 1 )
    return;
  v6 = baseUsrSvtData;
  v7 = 0LL;
  p_fakeValue = &baseUsrSvtData->fields.id.fields.fakeValue;
  for ( i = (_DWORD)v4 + 32; ; i += 4 )
  {
    if ( !v6 )
      goto LABEL_30;
    if ( v7 >= LODWORD(v6->fields.id.fields.hiddenValue) || v7 >= (unsigned int)hiddenValue )
      goto LABEL_29;
    baseUsrSvtData = (UserServantEntity_o *)System_Int32__Equals_62512140(i, *((_DWORD *)p_fakeValue + v7), 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
      break;
    LODWORD(hiddenValue) = v4->fields.id.fields.hiddenValue;
    if ( (__int64)++v7 >= (int)hiddenValue )
      return;
  }
  if ( (unsigned int)v7 >= LODWORD(v6->fields.id.fields.hiddenValue) )
LABEL_29:
    sub_1B88814(baseUsrSvtData, method);
  v10 = *((_DWORD *)&v6->fields.id.fields.fakeValue + v7);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v10,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  v13 = (SkillEntity_o *)Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6923/*"GET_SKILL_TITLE"*/, 0LL);
  if ( !skillGetInfoTitle )
    goto LABEL_30;
  UILabel__set_text(skillGetInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6921/*"GET_SKILL_NAME"*/, 0LL);
  if ( !v13 )
    goto LABEL_30;
  v15 = (System_String_o *)baseUsrSvtData;
  Name = (Il2CppObject *)SkillEntity__getName(v13, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)System_String__Format(v15, Name, 0LL);
  if ( !skillGetInfoDetail
    || (UILabel__set_text(skillGetInfoDetail, (System_String_o *)baseUsrSvtData, 0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.resInfoList) == 0LL)
    || (method = (const MethodInfo *)this->fields.skillGetInfo,
        currentCryptoKey = baseUsrSvtData->fields.id.fields.currentCryptoKey,
        v20 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(baseUsrSvtData->fields.id.fields.hiddenValue),
        !currentCryptoKey) )
  {
LABEL_30:
    sub_1B8880C(baseUsrSvtData, method);
  }
  hiddenValue_low = SLODWORD(baseUsrSvtData->fields.id.fields.hiddenValue);
  if ( (unsigned int)hiddenValue_low >= *(_DWORD *)(currentCryptoKey + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)baseUsrSvtData,
      (Il2CppObject *)method,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = currentCryptoKey + 8 * hiddenValue_low;
    LODWORD(baseUsrSvtData->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
    *(_QWORD *)(v22 + 32) = method;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)method, v17, v18);
  }
  this->fields.isGetNewSkill = 1;
}


void __fastcall SvtCombineResultWindowComponent__checkQuestOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x0
  clsQuestCheck_o *Instance; // x0
  Il2CppObject *heroQuestInfo; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  System_Collections_Generic_List_int__o *v10; // x0
  UILabel_o *storyQuestInfoTitle; // x21
  System_Collections_Generic_List_int__o *v12; // x20
  UILabel_o *heroQuestInfoTitle; // x21
  int32_t i; // w21
  Il2CppObject *MasterData_object; // x22
  int monitor; // w8
  clsQuestCheck_o *v17; // x22
  UILabel_o *storyQuestInfoDetail; // x23
  System_String_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UILabel_o *heroQuestInfoDetail; // x23
  System_String_o *v23; // x0
  UILabel_o *eventQuestInfoDetail; // x23
  System_String_o *v25; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x8
  _QWORD *v27; // x9
  __int64 cQuestReleaseListP_low; // x10
  __int64 v29; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4A5EAA4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&StringLiteral_9647/*"OPEN_STORY_QUEST_TITLE"*/);
    sub_1B885B0(&StringLiteral_9633/*"OPEN_EVENT_QUEST_NAME"*/);
    sub_1B885B0(&StringLiteral_9636/*"OPEN_HERO_QUEST_TITLE"*/);
    byte_4A5EAA4 = 1;
  }
  this->fields.isOpenQuest = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_43;
  v7 = Instance;
  v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v9;
  *(_QWORD *)&v30.fields.fakeValue = v8;
  Instance = (clsQuestCheck_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
  if ( !v7 )
    goto LABEL_43;
  v10 = clsQuestCheck__GetReleaseQuestIdByServantLv(v7, (int32_t)Instance, this->fields.baseSvtCollectionLv, 0LL);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v12 = v10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9647/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, (System_String_o *)Instance, 0LL),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9636/*"OPEN_HERO_QUEST_TITLE"*/, 0LL),
        !heroQuestInfoTitle) )
  {
LABEL_43:
    sub_1B8880C(Instance, heroQuestInfo);
  }
  UILabel__set_text(heroQuestInfoTitle, (System_String_o *)Instance, 0LL);
  if ( v12 && v12->fields._size >= 1 )
  {
    for ( i = 0; i < v12->fields._size; ++i )
    {
      if ( System_Collections_Generic_List_int___get_Item(
             v12,
             i,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
      {
        Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
        Instance = (clsQuestCheck_o *)System_Collections_Generic_List_int___get_Item(
                                        v12,
                                        i,
                                        (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !MasterData_object )
          goto LABEL_43;
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        (int32_t)Instance,
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_43;
        monitor = (int)Instance[1].monitor;
        v17 = Instance;
        switch ( monitor )
        {
          case 6:
            heroQuestInfoDetail = this->fields.heroQuestInfoDetail;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9633/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v23,
                                            (Il2CppObject *)v17->fields.cQuestReleaseListP,
                                            0LL);
            if ( !heroQuestInfoDetail )
              goto LABEL_43;
            UILabel__set_text(heroQuestInfoDetail, (System_String_o *)Instance, 0LL);
            Instance = (clsQuestCheck_o *)this->fields.resInfoList;
            if ( !Instance )
              goto LABEL_43;
            heroQuestInfo = (Il2CppObject *)this->fields.heroQuestInfo;
            goto LABEL_36;
          case 5:
            eventQuestInfoDetail = this->fields.eventQuestInfoDetail;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9633/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v25,
                                            (Il2CppObject *)v17->fields.cQuestReleaseListP,
                                            0LL);
            if ( !eventQuestInfoDetail )
              goto LABEL_43;
            UILabel__set_text(eventQuestInfoDetail, (System_String_o *)Instance, 0LL);
            Instance = (clsQuestCheck_o *)this->fields.resInfoList;
            if ( !Instance )
              goto LABEL_43;
            heroQuestInfo = (Il2CppObject *)this->fields.eventQuestInfo;
            goto LABEL_36;
          case 3:
            storyQuestInfoDetail = this->fields.storyQuestInfoDetail;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9633/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v19,
                                            (Il2CppObject *)v17->fields.cQuestReleaseListP,
                                            0LL);
            if ( !storyQuestInfoDetail )
              goto LABEL_43;
            UILabel__set_text(storyQuestInfoDetail, (System_String_o *)Instance, 0LL);
            Instance = (clsQuestCheck_o *)this->fields.resInfoList;
            if ( !Instance )
              goto LABEL_43;
            heroQuestInfo = (Il2CppObject *)this->fields.storyQuestInfo;
LABEL_36:
            qrs = Instance->fields.qrs;
            v27 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++HIDWORD(Instance->fields.cQuestReleaseListP);
            if ( !qrs )
              goto LABEL_43;
            cQuestReleaseListP_low = SLODWORD(Instance->fields.cQuestReleaseListP);
            if ( (unsigned int)cQuestReleaseListP_low >= qrs->fields._size )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                heroQuestInfo,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = (__int64)qrs + 8 * cQuestReleaseListP_low;
              LODWORD(Instance->fields.cQuestReleaseListP) = cQuestReleaseListP_low + 1;
              *(_QWORD *)(v29 + 32) = heroQuestInfo;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)heroQuestInfo, v20, v21);
            }
            this->fields.isOpenQuest = 1;
            break;
        }
      }
    }
  }
}


void __fastcall SvtCombineResultWindowComponent__destroyCurrentStatusGrid(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *currentLimitCntGrid; // x0
  int v4; // w21
  int32_t childCount; // w20
  int v6; // w23
  UnityEngine_Object_o *gameObject; // x21
  bool v8; // vf
  int32_t v9; // w20
  UnityEngine_Object_o *v10; // x21

  if ( (byte_4A5EAA7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EAA7 = 1;
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
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)currentLimitCntGrid, 0LL);
  if ( v4 >= 1 )
  {
    v6 = v4 + 1;
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
                                                         v6 - 2,
                                                         0LL);
      if ( !currentLimitCntGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1B8880C(currentLimitCntGrid, method);
  }
LABEL_15:
  v8 = __OFSUB__(childCount, 1);
  v9 = childCount - 1;
  if ( v9 < 0 == v8 && (v9 & 0x80000000) == 0 )
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
                                                         v9,
                                                         0LL);
      if ( !currentLimitCntGrid )
        break;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v10, 0LL);
      if ( --v9 < 0 )
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
  int v4; // w21
  int32_t childCount; // w20
  int v6; // w23
  UnityEngine_Object_o *gameObject; // x21
  bool v8; // vf
  int32_t v9; // w20
  UnityEngine_Object_o *v10; // x21

  if ( (byte_4A5EAA8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EAA8 = 1;
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
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resLimitCntGrid, 0LL);
  if ( v4 >= 1 )
  {
    v6 = v4 + 1;
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
                                                     v6 - 2,
                                                     0LL);
      if ( !resLimitCntGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1B8880C(resLimitCntGrid, method);
  }
LABEL_15:
  v8 = __OFSUB__(childCount, 1);
  v9 = childCount - 1;
  if ( v9 < 0 == v8 && (v9 & 0x80000000) == 0 )
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
                                                     v9,
                                                     0LL);
      if ( !resLimitCntGrid )
        break;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v10, 0LL);
      if ( --v9 < 0 )
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
    sub_1B8880C(0LL, method);
  UnityEngine_GameObject__SetActive(lvUpInfo, this->fields.endDispLvInfoFlg, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__setAfterSvtResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *resData,
        int32_t svtCollectionLv,
        System_Action_o *callback,
        System_Action_o *endTutorialCb,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  __int64 v12; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w0
  _BOOL4 isEqCombine; // w8
  int32_t childCount; // w23
  UnityEngine_Transform_o *transform; // x24
  System_Collections_Generic_List_object__o *v18; // x26
  struct System_Collections_Generic_List_GameObject__o **p_resLimitCntList; // x25
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w26
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_object__o *v27; // x8
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  UserServantEntity_o *v31; // x1
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  struct UserServantEntity_o *v38; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x20
  __int64 v40; // x21
  __int64 v41; // x22
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A5EA9E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA9E = 1;
  }
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData,
    (int32_t)resData,
    svtCollectionLv,
    (int32_t)callback);
  resUsrSvtData = this->fields.resUsrSvtData;
  this->fields.baseSvtCollectionLv = svtCollectionLv;
  if ( !resUsrSvtData )
    goto LABEL_32;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.resLvMax = LevelMax;
  if ( isEqCombine )
  {
    resUsrSvtData = (UserServantEntity_o *)this->fields.resSvtEqLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_32;
  }
  else
  {
    resUsrSvtData = (UserServantEntity_o *)this->fields.resLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_32;
  }
  resUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)resUsrSvtData,
                                           0LL);
  if ( !resUsrSvtData )
    goto LABEL_32;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resUsrSvtData, 0LL);
  if ( this->fields.isEqCombine )
  {
    resUsrSvtData = (UserServantEntity_o *)this->fields.resSvtEqLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_32;
  }
  else
  {
    resUsrSvtData = (UserServantEntity_o *)this->fields.resLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_32;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = &this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resLimitCntList, (int32_t)v18, v20, v21);
  if ( childCount >= 1 )
  {
    if ( transform )
    {
      v24 = 0;
      while ( 1 )
      {
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Transform__GetChild(transform, v24, 0LL);
        if ( !resUsrSvtData )
          break;
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)resUsrSvtData,
                                                 0LL);
        v27 = (System_Collections_Generic_List_object__o *)*p_resLimitCntList;
        if ( !*p_resLimitCntList )
          break;
        items = v27->fields._items;
        v29 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v27->fields._version;
        if ( !items )
          break;
        size = v27->fields._size;
        v31 = resUsrSvtData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)resUsrSvtData,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v31;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v31, v25, v26);
        }
        if ( childCount == ++v24 )
          goto LABEL_23;
      }
    }
LABEL_32:
    sub_1B8880C(resUsrSvtData, v12);
  }
LABEL_23:
  this->fields.openCallBack = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v22, v23);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endTutorialCallBack, (int32_t)endTutorialCb, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resInfoList, (int32_t)v35, v36, v37);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v38 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_32;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v41 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v41;
  *(_QWORD *)&v44.fields.fakeValue = v40;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v44, 0LL);
  if ( !v39 )
    goto LABEL_32;
  resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           v39,
                                           (int32_t)resUsrSvtData,
                                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    SvtCombineResultWindowComponent__checkQuestOpen(this, v42);
    SvtCombineResultWindowComponent__checkGetSkill(this, v43);
  }
  SvtCombineResultWindowComponent__showGetExp(this, v42);
}


void __fastcall SvtCombineResultWindowComponent__setBaseAdjustInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int32_t *p_baseMaxHpAdjustVal; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  struct UserServantEntity_o *v5; // x8
  int32_t adjustHp; // w22
  __int64 v7; // x8
  int v8; // w23
  int v9; // w24
  UIIconLabel_o *currentAdjustHpIconLabel; // x20
  const MethodInfo *v11; // x2
  struct UserServantEntity_o *v12; // x8
  int32_t adjustAtk; // w23
  char *v14; // x9
  int v15; // w24
  int32_t StatusUpAdjustAtk; // w25
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4A5EA9B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EA9B = 1;
  }
  p_baseMaxHpAdjustVal = &this->fields.baseMaxHpAdjustVal;
  *(_OWORD *)&this->fields.baseMaxHpAdjustVal = 0u;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__GetAdjustMax(
                                            baseUsrSvtData,
                                            p_baseMaxHpAdjustVal,
                                            &this->fields.baseMaxAtkAdjustVal,
                                            &this->fields.baseSecondMaxHpAdjustVal,
                                            &this->fields.baseSecondMaxAtkAdjustVal,
                                            0LL);
  v5 = this->fields.baseUsrSvtData;
  if ( !v5 )
    goto LABEL_23;
  adjustHp = v5->fields.adjustHp;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = this->fields.baseUsrSvtData;
    if ( !v5 )
      goto LABEL_23;
    baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  }
  if ( v5->fields.adjustHp >= this->fields.baseMaxHpAdjustVal )
    v7 = 784LL;
  else
    v7 = 776LL;
  v8 = *(_DWORD *)(*(_QWORD *)&baseUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 312LL);
  v9 = *(_DWORD *)((char *)&this->klass + v7);
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( !baseUsrSvtData->fields.randomLimitCountSupport.fields.currentCryptoKey )
    j_il2cpp_runtime_class_init_0(baseUsrSvtData);
  if ( !currentAdjustHpIconLabel )
    goto LABEL_23;
  UIIconLabel__Set_38235604(
    currentAdjustHpIconLabel,
    44,
    v8 * adjustHp,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v9,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.baseUsrSvtData, v11);
  v12 = this->fields.baseUsrSvtData;
  if ( !v12 )
    goto LABEL_23;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  adjustAtk = v12->fields.adjustAtk;
  v14 = "GNU";
  if ( adjustAtk < this->fields.baseMaxAtkAdjustVal )
    v14 = (char *)&dword_30C;
  v15 = *(_DWORD *)&v14[(_QWORD)this];
  StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !currentAdjustAtkIconLabel
    || (UIIconLabel__Set_38235604(
          currentAdjustAtkIconLabel,
          45,
          StatusUpAdjustAtk * adjustAtk,
          BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v15,
          0,
          0LL,
          0,
          0,
          0,
          0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustAtkMaxLabel) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(baseUsrSvtData, p_baseMaxHpAdjustVal);
  }
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v18);
}


void __fastcall SvtCombineResultWindowComponent__setBefResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *baseData,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x22
  UILabel_o *currentMaxLvLb; // x22
  struct UserServantEntity_o *v12; // x8
  UIExtrusionLabel_o *resLvLb; // x22
  UILabel_o *resMaxLvLb; // x22
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x0
  struct UIWidget_o **p_resHpWidget; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x0
  struct UIWidget_o **p_resAtkWidget; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  UILabel_o *currentExpValLb; // x21
  struct UserServantEntity_o *v31; // x8
  int32_t v32; // w20
  __int64 v33; // x21
  __int64 v34; // x22
  struct UserServantEntity_o *v35; // x8
  int32_t v36; // w21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v38; // x4
  int32_t baseLimitCnt; // w21
  UnityEngine_Transform_o *v40; // x0
  const MethodInfo *v41; // x4
  struct UserServantEntity_o *v42; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v44; // x8
  UILabel_o *resHpLb; // x20
  struct UserServantEntity_o *v46; // x8
  UILabel_o *currentAtkLb; // x20
  struct UserServantEntity_o *v48; // x8
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v50; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  System_Action_o *v54; // x20
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EA99 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SvtCombineResultWindowComponent_EndOpen__);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5EA99 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_48;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v7, v8);
  skipCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 0;
  if ( !skipCollider )
    goto LABEL_48;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)skipCollider, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.baseLvMax = (int)skipCollider;
  if ( !baseUsrSvtData )
    goto LABEL_48;
  currentLvLb = this->fields.currentLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)baseUsrSvtData + 256, 0LL);
  if ( !currentLvLb )
    goto LABEL_48;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skipCollider, 0LL);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 704, 0LL);
  if ( !currentMaxLvLb )
    goto LABEL_48;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)skipCollider, 0LL);
  v12 = this->fields.baseUsrSvtData;
  if ( !v12 )
    goto LABEL_48;
  resLvLb = this->fields.resLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v12 + 256, 0LL);
  if ( !resLvLb )
    goto LABEL_48;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skipCollider, 0LL);
  resMaxLvLb = this->fields.resMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 704, 0LL);
  if ( !resMaxLvLb )
    goto LABEL_48;
  UILabel__set_text(resMaxLvLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvLb;
  if ( !skipCollider )
    goto LABEL_48;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)skipCollider,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resLvWidget, (int32_t)Component_object, v16, v17);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resMaxLvLb;
  if ( !skipCollider )
    goto LABEL_48;
  v18 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resMaxLvWidget, (int32_t)v18, v20, v21);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resHpLb;
  if ( !skipCollider )
    goto LABEL_48;
  v22 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resHpWidget, (int32_t)v22, v24, v25);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resAtkLb;
  if ( !skipCollider )
    goto LABEL_48;
  v26 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resAtkWidget, (int32_t)v26, v28, v29);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_48;
  v58.fields.r = 1.0;
  v58.fields.g = 1.0;
  v58.fields.b = 1.0;
  v58.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v58, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_48;
  v59.fields.r = 1.0;
  v59.fields.g = 1.0;
  v59.fields.b = 1.0;
  v59.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v59, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_48;
  v60.fields.r = 1.0;
  v60.fields.g = 1.0;
  v60.fields.b = 1.0;
  v60.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v60, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_48;
  v61.fields.r = 1.0;
  v61.fields.g = 1.0;
  v61.fields.b = 1.0;
  v61.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v61, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_48;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentExpBar;
  if ( !skipCollider )
    goto LABEL_48;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_429/*"#,0"*/,
                                             0LL);
  if ( !currentExpValLb )
    goto LABEL_48;
  UILabel__set_text(currentExpValLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resCrExpBar;
  if ( !skipCollider )
    goto LABEL_48;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resExpBar;
  if ( !skipCollider )
    goto LABEL_48;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_48;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)skipCollider, 0LL);
  v31 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_48;
  v32 = (int)skipCollider;
  v34 = *(_QWORD *)&v31->fields.limitCount.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v31->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v34;
  *(_QWORD *)&v57.fields.fakeValue = v33;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v57, 0LL);
  v35 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v35 )
    goto LABEL_48;
  v36 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  this->fields.baseHpVal = v35->fields.hp;
  this->fields.baseAtkVal = v35->fields.atk;
  if ( !skipCollider )
    goto LABEL_48;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v32, v36, transform, v38);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  baseLimitCnt = this->fields.baseLimitCnt;
  v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v32, baseLimitCnt, v40, v41);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v42 = this->fields.baseUsrSvtData;
  if ( !v42 )
    goto LABEL_48;
  currentHpLb = this->fields.currentHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int)v42 + 268,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !currentHpLb )
    goto LABEL_48;
  UILabel__set_text(currentHpLb, (System_String_o *)skipCollider, 0LL);
  v44 = this->fields.baseUsrSvtData;
  if ( !v44 )
    goto LABEL_48;
  resHpLb = this->fields.resHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int)v44 + 268,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !resHpLb )
    goto LABEL_48;
  UILabel__set_text(resHpLb, (System_String_o *)skipCollider, 0LL);
  v46 = this->fields.baseUsrSvtData;
  if ( !v46 )
    goto LABEL_48;
  currentAtkLb = this->fields.currentAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int)v46 + 264,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !currentAtkLb )
    goto LABEL_48;
  UILabel__set_text(currentAtkLb, (System_String_o *)skipCollider, 0LL);
  v48 = this->fields.baseUsrSvtData;
  if ( !v48 )
    goto LABEL_48;
  resAtkLb = this->fields.resAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int)v48 + 264,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !resAtkLb )
    goto LABEL_48;
  UILabel__set_text(resAtkLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.msgInfo;
  if ( !skipCollider )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.AdjustInfo;
  if ( !skipCollider )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v50);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lvUpInfo, (int32_t)lvInfo, v52, v53);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtCombineInfoObject;
  if ( !skipCollider
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)this->fields.svtEqCombineInfoObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL) )
  {
LABEL_48:
    sub_1B8880C(skipCollider, baseData);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v54 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x23
  UILabel_o *currentSvtEqMaxLvLb; // x23
  struct UserServantEntity_o *v16; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x23
  UILabel_o *resSvtEqMaxLvLb; // x23
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x0
  struct UIWidget_o **p_resHpWidget; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x0
  struct UIWidget_o **p_resAtkWidget; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  UILabel_o *currentSvtEqExpValLb; // x22
  struct UserServantEntity_o *v35; // x8
  int32_t v36; // w21
  __int64 v37; // x22
  __int64 v38; // x23
  struct UserServantEntity_o *v39; // x8
  int32_t v40; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v42; // x4
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *v44; // x0
  const MethodInfo *v45; // x4
  struct UserServantEntity_o *v46; // x8
  UILabel_o *currentSvtEqHpLb; // x21
  struct UserServantEntity_o *v48; // x8
  UILabel_o *resSvtEqHpLb; // x21
  struct UserServantEntity_o *v50; // x8
  UILabel_o *currentSvtEqAtkLb; // x21
  struct UserServantEntity_o *v52; // x8
  UILabel_o *resSvtEqAtkLb; // x21
  UILabel_o *normalExpLb; // x21
  UILabel_o *normalExpOverSpLb; // x21
  UIWidget_o *v56; // x21
  UIWidget_o *v57; // x22
  UnityEngine_GameObject_o *v58; // x24
  Il2CppObject *v59; // x23
  Il2CppObject *v60; // x0
  Il2CppObject *v61; // x20
  SvtCombineResultWindowComponent_c *v62; // x0
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x20
  UnityEngine_Transform_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x20
  UnityEngine_Transform_o *v70; // x21
  int v71; // s0
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v75; // x20
  UILabel_o *addExpLb; // x20
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  int32_t v78; // w2
  int32_t v79; // w3
  System_Action_o *v80; // x20
  intptr_t m_CachedPtr; // [xsp+0h] [xbp-60h] BYREF
  float barExp; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v84; // [xsp+18h] [xbp-48h] BYREF
  int32_t v85; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v84 = addExp;
  v85 = normalExp;
  if ( (byte_4A5EA9A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SvtCombineResultWindowComponent_EndOpen__);
    sub_1B885B0(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_4608/*"CombineSuccessEffect_{0:D2}"*/);
    byte_4A5EA9A = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v11, v12);
  skipCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 1;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)skipCollider, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.baseLvMax = (int)skipCollider;
  if ( !baseUsrSvtData )
    goto LABEL_90;
  currentSvtEqLvLb = this->fields.currentSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)baseUsrSvtData + 256, 0LL);
  if ( !currentSvtEqLvLb )
    goto LABEL_90;
  UIExtrusionLabel__set_text(currentSvtEqLvLb, (System_String_o *)skipCollider, 0LL);
  currentSvtEqMaxLvLb = this->fields.currentSvtEqMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 704, 0LL);
  if ( !currentSvtEqMaxLvLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqMaxLvLb, (System_String_o *)skipCollider, 0LL);
  v16 = this->fields.baseUsrSvtData;
  if ( !v16 )
    goto LABEL_90;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v16 + 256, 0LL);
  if ( !resSvtEqLvLb )
    goto LABEL_90;
  UIExtrusionLabel__set_text(resSvtEqLvLb, (System_String_o *)skipCollider, 0LL);
  resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 704, 0LL);
  if ( !resSvtEqMaxLvLb )
    goto LABEL_90;
  UILabel__set_text(resSvtEqMaxLvLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLvLb;
  if ( !skipCollider )
    goto LABEL_90;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)skipCollider,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resLvWidget, (int32_t)Component_object, v20, v21);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqMaxLvLb;
  if ( !skipCollider )
    goto LABEL_90;
  v22 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resMaxLvWidget, (int32_t)v22, v24, v25);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqHpLb;
  if ( !skipCollider )
    goto LABEL_90;
  v26 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resHpWidget, (int32_t)v26, v28, v29);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqAtkLb;
  if ( !skipCollider )
    goto LABEL_90;
  v30 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resAtkWidget, (int32_t)v30, v32, v33);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_90;
  v87.fields.r = 1.0;
  v87.fields.g = 1.0;
  v87.fields.b = 1.0;
  v87.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v87, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_90;
  v88.fields.r = 1.0;
  v88.fields.g = 1.0;
  v88.fields.b = 1.0;
  v88.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v88, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_90;
  v89.fields.r = 1.0;
  v89.fields.g = 1.0;
  v89.fields.b = 1.0;
  v89.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v89, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_90;
  v90.fields.r = 1.0;
  v90.fields.g = 1.0;
  v90.fields.b = 1.0;
  v90.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v90, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_90;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_90;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_429/*"#,0"*/,
                                             0LL);
  if ( !currentSvtEqExpValLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqExpValLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqCrExpBar;
  if ( !skipCollider )
    goto LABEL_90;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)skipCollider, 0LL);
  v35 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_90;
  v36 = (int)skipCollider;
  v38 = *(_QWORD *)&v35->fields.limitCount.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v35->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v38;
  *(_QWORD *)&v86.fields.fakeValue = v37;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v86, 0LL);
  v39 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v39 )
    goto LABEL_90;
  v40 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = v39->fields.hp;
  this->fields.baseAtkVal = v39->fields.atk;
  if ( !skipCollider )
    goto LABEL_90;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v36, v40, transform, v42);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  baseLimitCnt = this->fields.baseLimitCnt;
  v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v36, baseLimitCnt, v44, v45);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v46 = this->fields.baseUsrSvtData;
  if ( !v46 )
    goto LABEL_90;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int)v46 + 268,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqHpLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v48 = this->fields.baseUsrSvtData;
  if ( !v48 )
    goto LABEL_90;
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int)v48 + 268,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !resSvtEqHpLb )
    goto LABEL_90;
  UILabel__set_text(resSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v50 = this->fields.baseUsrSvtData;
  if ( !v50 )
    goto LABEL_90;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int)v50 + 264,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqAtkLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  v52 = this->fields.baseUsrSvtData;
  if ( !v52 )
    goto LABEL_90;
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int)v52 + 264,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !resSvtEqAtkLb )
    goto LABEL_90;
  UILabel__set_text(resSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  normalExpLb = this->fields.normalExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int32_t)&v85,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !normalExpLb )
    goto LABEL_90;
  UILabel__set_text(normalExpLb, (System_String_o *)skipCollider, 0LL);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int32_t)&v85,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !normalExpOverSpLb )
    goto LABEL_90;
  UILabel__set_text(normalExpOverSpLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !skipCollider )
    goto LABEL_90;
  v91.fields.r = 1.0;
  v91.fields.g = 1.0;
  v91.fields.b = 1.0;
  v91.fields.a = 1.0;
  v56 = (UIWidget_o *)skipCollider;
  UIWidget__set_color((UIWidget_o *)skipCollider, v91, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_90;
  v57 = (UIWidget_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_90;
  v58 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  if ( !v58 )
    goto LABEL_90;
  v59 = UnityEngine_GameObject__GetComponent_object_(
          v58,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v60 = UnityEngine_GameObject__GetComponent_object_(
          v58,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
    goto LABEL_83;
  v61 = v60;
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v62 = SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v62 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color(v56, v62->static_fields->COLOR_VAL, 0LL);
  if ( !v57 )
    goto LABEL_90;
  UIWidget__set_color(v57, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_90;
    LODWORD(v59[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v59, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v61, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v61 )
      goto LABEL_90;
    LODWORD(v61[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v61, 0LL);
  }
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int32_t)&v85, 0LL);
  if ( !skipCollider )
    goto LABEL_90;
  m_CachedPtr = skipCollider->fields.m_CachedPtr;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v63, v64, v65);
  skipCollider = (UnityEngine_Collider_o *)System_String__Format((System_String_o *)StringLiteral_4608/*"CombineSuccessEffect_{0:D2}"*/, v66, 0LL);
  if ( !this->fields.dispNodeObj )
    goto LABEL_90;
  v67 = (System_String_o *)skipCollider;
  v68 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL);
  skipCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__getEffect(v67, v68, 0LL);
  if ( !skipCollider
    || (v69 = (UnityEngine_GameObject_o *)skipCollider,
        skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)skipCollider,
                                                   0LL),
        !this->fields.dispNodeObj)
    || (v70 = (UnityEngine_Transform_o *)skipCollider,
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v71 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skipCollider,
                                           0LL),
        !v70) )
  {
LABEL_90:
    sub_1B8880C(skipCollider, baseData);
  }
  UnityEngine_Transform__set_localPosition(v70, *(UnityEngine_Vector3_o *)&v71, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v69,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v75 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v69,
          (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)ComponentInChildren_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_90;
    SimpleAnimation__Play((SimpleAnimation_o *)ComponentInChildren_object, 0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v75, 0LL, 0LL);
    if ( ((unsigned __int8)skipCollider & 1) != 0 )
    {
      if ( !v75 )
        goto LABEL_90;
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v75, 0LL);
    }
  }
LABEL_83:
  addExpLb = this->fields.addExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62512312(
                                             (int32_t)&v84,
                                             (System_String_o *)StringLiteral_9206/*"N0"*/,
                                             0LL);
  if ( !addExpLb )
    goto LABEL_90;
  UILabel__set_text(addExpLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.msgInfo;
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.AdjustInfo;
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  svtEqLvInfo = this->fields.svtEqLvInfo;
  this->fields.lvUpInfo = svtEqLvInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lvUpInfo, (int32_t)svtEqLvInfo, v78, v79);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtEqCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v80 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v80, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v80, 0, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__setLimitCntInfo(
        SvtCombineResultWindowComponent_o *this,
        int32_t maxLimitCnt,
        int32_t svtLimitCnt,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int32_t v9; // w26
  UnityEngine_GameObject_o *Object; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x24
  UnityEngine_Transform_o *v13; // x25

  if ( (byte_4A5EAA6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
    byte_4A5EAA6 = 1;
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
      if ( !Object )
        goto LABEL_12;
      v12 = Object;
      Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
      v13 = (UnityEngine_Transform_o *)Object;
      if ( !byte_4A55CE1 )
      {
        Object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v13
        || (UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v12,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0LL) )
      {
LABEL_12:
        sub_1B8880C(Object, v11);
      }
      SetLimitCntInfoComponent__setEnableOnImg((SetLimitCntInfoComponent_o *)Object, v9++ < svtLimitCnt, 0LL);
    }
    while ( maxLimitCnt != v9 );
  }
}


void __fastcall SvtCombineResultWindowComponent__setResAdjustAtkInfo(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *targetData,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resAdjustAtkIconLabel; // x0
  int32_t adjustAtk; // w21
  BalanceConfig_c *v7; // x0
  uint32_t cctor_finished; // w8
  int32_t v9; // w9
  bool v10; // cc
  char *v11; // x9
  int32_t StatusUpAdjustAtk; // w23
  int v13; // w24
  int32_t v14; // w8
  int32_t v15; // w21
  int32_t v16; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  int32_t v18; // w8
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EA9D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EA9D = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       resAdjustAtkIconLabel,
                                                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  v19.fields.r = 1.0;
  v19.fields.g = 1.0;
  v19.fields.b = 1.0;
  v19.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustAtkIconLabel, v19, 0LL);
  if ( !targetData )
    goto LABEL_21;
  adjustAtk = targetData->fields.adjustAtk;
  v7 = BalanceConfig_TypeInfo;
  cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  if ( cctor_finished )
  {
    v9 = targetData->fields.adjustAtk;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
    v9 = targetData->fields.adjustAtk;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  }
  v10 = v9 < this->fields.baseMaxAtkAdjustVal;
  v11 = (char *)&dword_30C;
  if ( !v10 )
    v11 = "GNU";
  StatusUpAdjustAtk = v7->static_fields->StatusUpAdjustAtk;
  v13 = *(_DWORD *)&v11[(_QWORD)this];
  if ( cctor_finished )
  {
    v14 = v7->static_fields->StatusUpAdjustAtk;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v7);
    v14 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  v15 = StatusUpAdjustAtk * adjustAtk;
  v16 = v14 * v13;
  UIIconLabel__Set_38235604((UIIconLabel_o *)resAdjustAtkIconLabel, 45, v15, v14 * v13, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_62512140((_DWORD)baseUsrSvtData + 272, targetData->fields.adjustAtk, 0LL) )
  {
    v18 = targetData->fields.adjustAtk;
    resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
    this->fields.isAtkLimitUp = v18 == this->fields.baseMaxAtkAdjustVal;
    if ( !resAdjustAtkIconLabel )
      goto LABEL_21;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustAtkIconLabel,
      v15,
      v16,
      v18 == this->fields.baseSecondMaxAtkAdjustVal,
      0LL);
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkMaxLabel;
  if ( !resAdjustAtkIconLabel )
LABEL_21:
    sub_1B8880C(resAdjustAtkIconLabel, targetData);
  UILabel__set_text((UILabel_o *)resAdjustAtkIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__setResAdjustHpInfo(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *targetData,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resAdjustHpIconLabel; // x0
  int32_t adjustHp; // w21
  BalanceConfig_c *v7; // x0
  uint32_t cctor_finished; // w8
  int32_t v9; // w9
  bool v10; // cc
  __int64 v11; // x9
  int32_t StatusUpAdjustHp; // w23
  int v13; // w24
  int32_t v14; // w8
  int32_t v15; // w21
  int32_t v16; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  int32_t v18; // w8
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5EA9C & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EA9C = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  resAdjustHpIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      resAdjustHpIconLabel,
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  v19.fields.r = 1.0;
  v19.fields.g = 1.0;
  v19.fields.b = 1.0;
  v19.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustHpIconLabel, v19, 0LL);
  if ( !targetData )
    goto LABEL_21;
  adjustHp = targetData->fields.adjustHp;
  v7 = BalanceConfig_TypeInfo;
  cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  if ( cctor_finished )
  {
    v9 = targetData->fields.adjustHp;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
    v9 = targetData->fields.adjustHp;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  }
  v10 = v9 < this->fields.baseMaxHpAdjustVal;
  v11 = 776LL;
  if ( !v10 )
    v11 = 784LL;
  StatusUpAdjustHp = v7->static_fields->StatusUpAdjustHp;
  v13 = *(_DWORD *)((char *)&this->klass + v11);
  if ( cctor_finished )
  {
    v14 = v7->static_fields->StatusUpAdjustHp;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v7);
    v14 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  v15 = StatusUpAdjustHp * adjustHp;
  v16 = v14 * v13;
  UIIconLabel__Set_38235604((UIIconLabel_o *)resAdjustHpIconLabel, 44, v15, v14 * v13, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_62512140((_DWORD)baseUsrSvtData + 276, targetData->fields.adjustHp, 0LL) )
  {
    v18 = targetData->fields.adjustHp;
    resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
    this->fields.isHpLimitUp = v18 == this->fields.baseMaxHpAdjustVal;
    if ( !resAdjustHpIconLabel )
      goto LABEL_21;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustHpIconLabel,
      v15,
      v16,
      v18 == this->fields.baseSecondMaxHpAdjustVal,
      0LL);
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpMaxLabel;
  if ( !resAdjustHpIconLabel )
LABEL_21:
    sub_1B8880C(resAdjustHpIconLabel, targetData);
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

  if ( (byte_4A5EAA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAA0 = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_1B8880C(resUsrSvtData, *(_QWORD *)&getExp);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct UserServantEntity_o *resUsrSvtData; // x8
  const MethodInfo *v13; // x4
  struct UserServantEntity_o *v14; // x8
  int32_t atk; // w9
  struct UserServantEntity_o *v16; // x8
  struct UserServantEntity_o *v17; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_Object_array *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x22
  System_Collections_Hashtable_o *v58; // x0
  struct UserServantEntity_o *v59; // x8
  struct UserServantEntity_o *v60; // x9
  int32_t v61; // w0
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resSvtEqMaxLvLb; // x20
  UIWidget_o *resMaxLvWidget; // x20
  UILabel_o *infoLb; // x20
  System_String_o *v66; // x21
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x22
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  int32_t v75; // w20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v77; // x2
  UIWidget_o *resHpWidget; // x20
  int32_t v79; // w0
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v82; // x2
  UIWidget_o *resAtkWidget; // x19
  __int64 v84; // x0
  int v85; // [xsp+Ch] [xbp-44h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-38h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_4A5EA9F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_8585/*"MAX_LVUP_TXT"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_5954/*"EndDisp"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_15194/*"UpdateValue"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_12965/*"StartUpdateValue"*/);
    sub_1B885B0(&StringLiteral_22278/*"onstart"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5EA9F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_97;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v8;
  *(_QWORD *)&v88.fields.fakeValue = v7;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v88, 0LL);
  if ( !v6 )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v6,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = (struct ServantEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSvtData, (int32_t)Entity, v10, v11);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_97;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(resUsrSvtData->fields.limitCount, 0LL);
  v14 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = Instance;
  if ( !v14 )
    goto LABEL_97;
  this->fields.resHpVal = v14->fields.hp;
  atk = v14->fields.atk;
  v16 = this->fields.baseUsrSvtData;
  this->fields.resAtkVal = atk;
  if ( !v16 )
    goto LABEL_97;
  Instance = SvtCombineResultWindowComponent__setSvtExp(this, v4, v16->fields.exp, v16->fields.lv, v13);
  v17 = this->fields.baseUsrSvtData;
  if ( !v17 )
    goto LABEL_97;
  this->fields.PrevLevel = v17->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Instance = sub_1B88658(object___TypeInfo, 12LL);
  if ( !Instance )
    goto LABEL_97;
  v21 = (System_Object_array *)Instance;
  v22 = StringLiteral_19656/*"from"*/;
  if ( StringLiteral_19656/*"from"*/ )
  {
    v22 = sub_1B886EC(StringLiteral_19656/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
    v23 = StringLiteral_19656/*"from"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_115;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v21->m_Items, v23, v19, v20);
  baseLvMax = 0;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &baseLvMax, v24, v25, v26);
  v29 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B886EC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_115;
  v21->m_Items[1] = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v29, v27, v28);
  v22 = StringLiteral_23969/*"to"*/;
  if ( StringLiteral_23969/*"to"*/ )
  {
    v22 = sub_1B886EC(StringLiteral_23969/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
    v23 = StringLiteral_23969/*"to"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_115;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], v23, v30, v31);
  resLvMax = 1065353216;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &resLvMax, v32, v33, v34);
  v37 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B886EC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_115;
  v21->m_Items[3] = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v37, v35, v36);
  v22 = StringLiteral_22278/*"onstart"*/;
  if ( StringLiteral_22278/*"onstart"*/ )
  {
    v22 = sub_1B886EC(StringLiteral_22278/*"onstart"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
    v23 = StringLiteral_22278/*"onstart"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 4 )
    goto LABEL_115;
  v21->m_Items[4] = (Il2CppObject *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[4], v23, v38, v39);
  v22 = StringLiteral_12965/*"StartUpdateValue"*/;
  if ( StringLiteral_12965/*"StartUpdateValue"*/ )
  {
    v22 = sub_1B886EC(StringLiteral_12965/*"StartUpdateValue"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
    v23 = StringLiteral_12965/*"StartUpdateValue"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 5 )
    goto LABEL_115;
  v21->m_Items[5] = (Il2CppObject *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[5], v23, v40, v41);
  v22 = StringLiteral_22281/*"onupdate"*/;
  if ( StringLiteral_22281/*"onupdate"*/ )
  {
    v22 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
    v23 = StringLiteral_22281/*"onupdate"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 6 )
    goto LABEL_115;
  v21->m_Items[6] = (Il2CppObject *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[6], v23, v42, v43);
  v22 = StringLiteral_15194/*"UpdateValue"*/;
  if ( StringLiteral_15194/*"UpdateValue"*/ )
  {
    v22 = sub_1B886EC(StringLiteral_15194/*"UpdateValue"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
    v23 = StringLiteral_15194/*"UpdateValue"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 7 )
    goto LABEL_115;
  v21->m_Items[7] = (Il2CppObject *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[7], v23, v44, v45);
  v22 = StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v22 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
    v23 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 8 )
    goto LABEL_115;
  v21->m_Items[8] = (Il2CppObject *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[8], v23, v46, v47);
  v22 = StringLiteral_5954/*"EndDisp"*/;
  if ( StringLiteral_5954/*"EndDisp"*/ )
  {
    v22 = sub_1B886EC(StringLiteral_5954/*"EndDisp"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
    v23 = StringLiteral_5954/*"EndDisp"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 9 )
    goto LABEL_115;
  v21->m_Items[9] = (Il2CppObject *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[9], v23, v48, v49);
  v22 = StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v22 = sub_1B886EC(StringLiteral_23929/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_116;
    v23 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 0xA )
    goto LABEL_115;
  v21->m_Items[10] = (Il2CppObject *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[10], v23, v50, v51);
  v85 = 0x40000000;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v85, v52, v53, v54);
  v57 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B886EC(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_116:
      v84 = sub_1B88830(v22);
      sub_1B886D8(v84, 0LL);
    }
  }
  if ( v21->max_length <= 0xB )
LABEL_115:
    sub_1B88814(v22, v23);
  v21->m_Items[11] = v57;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[11], (int32_t)v57, v55, v56);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v58 = iTween__Hash(v21, 0LL);
  iTween__ValueTo(gameObject, v58, 0LL);
  if ( this->fields.baseLimitCnt != this->fields.resLimitCnt )
  {
    if ( this->fields.isEqCombine )
      resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
    else
      resSvtEqMaxLvLb = this->fields.resMaxLvLb;
    Instance = (__int64)System_Int32__ToString((int)this + 708, 0LL);
    if ( !resSvtEqMaxLvLb )
      goto LABEL_97;
    UILabel__set_text(resSvtEqMaxLvLb, (System_String_o *)Instance, 0LL);
    resMaxLvWidget = this->fields.resMaxLvWidget;
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resMaxLvWidget )
      goto LABEL_97;
    UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
    infoLb = this->fields.infoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8585/*"MAX_LVUP_TXT"*/, 0LL);
    baseLvMax = this->fields.baseLvMax;
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseLvMax, v67, v68, v69);
    resLvMax = this->fields.resLvMax;
    v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &resLvMax, v71, v72, v73);
    Instance = (__int64)System_String__Format_61721404(v66, v70, v74, 0LL);
    if ( !infoLb )
      goto LABEL_97;
    UILabel__set_text(infoLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.infoLb;
    if ( !Instance )
      goto LABEL_97;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.infoLb;
    if ( !Instance )
      goto LABEL_97;
    Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_97;
    UITweener__PlayForward((UITweener_o *)Instance, 0LL);
    Instance = (__int64)this->fields.resLimitCntList;
    if ( !Instance )
      goto LABEL_97;
    v75 = 0;
    while ( v75 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v75,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Instance )
        {
          SetLimitCntInfoComponent__setEnableOnImg(
            (SetLimitCntInfoComponent_o *)Instance,
            v75 < this->fields.resLimitCnt,
            0LL);
          Instance = (__int64)this->fields.resLimitCntList;
          ++v75;
          if ( Instance )
            continue;
        }
      }
      goto LABEL_97;
    }
  }
  v59 = this->fields.baseUsrSvtData;
  if ( !v59 )
    goto LABEL_97;
  v60 = this->fields.resUsrSvtData;
  if ( !v60 )
    goto LABEL_97;
  if ( v59->fields.lv != v60->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    v61 = (_DWORD)this + 716;
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      Instance = (__int64)System_Int32__ToString_62512312(v61, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_97;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)Instance, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      Instance = (__int64)System_Int32__ToString_62512312(v61, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_97;
      UILabel__set_text(resHpLb, (System_String_o *)Instance, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v77);
    }
    resHpWidget = this->fields.resHpWidget;
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resHpWidget )
      goto LABEL_97;
    UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  v79 = (_DWORD)this + 724;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    Instance = (__int64)System_Int32__ToString_62512312(v79, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_97;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)Instance, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    Instance = (__int64)System_Int32__ToString_62512312(v79, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_97;
    UILabel__set_text(resAtkLb, (System_String_o *)Instance, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v82);
  }
  resAtkWidget = this->fields.resAtkWidget;
  Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resAtkWidget )
LABEL_97:
    sub_1B8880C(Instance, v4);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4A5EAA3 & 1) == 0 )
  {
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5EAA3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60355704(gameObject, 0LL);
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
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_1B8880C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}