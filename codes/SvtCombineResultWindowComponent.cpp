void SvtCombineResultWindowComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct SvtCombineResultWindowComponent_StaticFields *static_fields; // x0
  struct SvtCombineResultWindowComponent_StaticFields *v5; // x0
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3BA9D & 1) == 0 )
  {
    sub_1C32C20(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_4566/*"Combine/"*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C3BA9D = 1;
  }
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_C0D830;
  v3 = StringLiteral_4566/*"Combine/"*/;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4566/*"Combine/"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->TUTORIAL_FOLDER, v3, v1, v2);
  v5 = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&v5->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = 0x1A00000019LL;
  v5->SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 27;
  v6 = StringLiteral_1122/*"0"*/;
  v5->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1122/*"0"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->INIT_VAL_TXT, v6, v7, v8);
}


void SvtCombineResultWindowComponent___ctor(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3BA9C & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3BA9C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SvtCombineResultWindowComponent__ClickSkip(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C3BA9B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SvtCombineResultWindowComponent_EndExpUpdateGauge__);
    byte_4C3BA9B = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_1C32E7C(0);
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0) )
  {
    this->fields.isWaitOpenTutorial = 0;
    v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndExpUpdateGauge__, 0);
    SvtCombineResultWindowComponent__skipExp(this, v4, v5);
  }
}


void SvtCombineResultWindowComponent__Close(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4C3BA99 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SvtCombineResultWindowComponent_EndClose__);
    byte_4C3BA99 = 1;
  }
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0);
  SvtCombineResultWindowComponent__Close_48582404(this, v4, v5);
}


void SvtCombineResultWindowComponent__Close_48582404(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4C3BA9A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SvtCombineResultWindowComponent_EndClose__);
    byte_4C3BA9A = 1;
  }
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SvtCombineResultWindowComponent__EndClose(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  BaseDialog__Init((BaseDialog_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  SvtCombineResultWindowComponent__destroyCurrentStatusGrid(this, v4);
  SvtCombineResultWindowComponent__destroyResStatusGrid(this, v5);
}


void SvtCombineResultWindowComponent__EndDisp(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  OpenInfoWindowComponent_o *openInfowindowComp; // x20
  System_Collections_Generic_List_GameObject__o *resInfoList; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4C3BA91 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SvtCombineResultWindowComponent_EndOpen__);
    byte_4C3BA91 = 1;
  }
  if ( this->fields.isGetNewSkill || this->fields.isOpenQuest )
  {
    openInfowindowComp = this->fields.openInfowindowComp;
    resInfoList = this->fields.resInfoList;
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0);
    if ( !openInfowindowComp )
      sub_1C32E7C(v6);
    OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v5, 1, v7);
  }
  else
  {
    SvtCombineResultWindowComponent__EndOpen(this, method);
  }
}


void SvtCombineResultWindowComponent__EndExpUpdateGauge(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C3BA90 & 1) == 0 )
  {
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C3BA90 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_1C32E7C(0);
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0);
  this->fields.isUpdateGauge = 0;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSystemSe(0);
  SvtCombineResultWindowComponent__EndDisp(this, v4);
}


void SvtCombineResultWindowComponent__EndOpen(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  SvtCombineResultWindowComponent_c *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Action_o *openCallBack; // x21
  struct System_Action_o *endTutorialCallBack; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  _BOOL4 isHpLimitUp; // w9
  _BOOL4 isAtkLimitUp; // w8
  __int64 v16; // x20
  uint32_t cctor_finished; // w9
  int32_t *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL; // x8
  Il2CppObject *Instance; // x21
  System_Action_o *v20; // x22

  if ( (byte_4C3BA98 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1C32C20(&Method_SvtCombineResultWindowComponent___c__DisplayClass131_0__EndOpen_b__0__);
    sub_1C32C20(&SvtCombineResultWindowComponent___c__DisplayClass131_0_TypeInfo);
    byte_4C3BA98 = 1;
  }
  v3 = sub_1C32E6C(SvtCombineResultWindowComponent___c__DisplayClass131_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_34;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  if ( !this->fields.isUnskippable )
  {
    openCallBack = this->fields.openCallBack;
    if ( openCallBack )
    {
      this->fields.openCallBack = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallBack, 0, v7, v8);
      ((void (__fastcall *)(intptr_t, intptr_t))openCallBack->fields.invoke_impl)(
        openCallBack->fields.method_code,
        openCallBack->fields.method);
    }
    if ( !this->fields.isWaitOpenTutorial )
    {
      endTutorialCallBack = this->fields.endTutorialCallBack;
      if ( endTutorialCallBack )
      {
        *(_QWORD *)(v3 + 24) = endTutorialCallBack;
        sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)endTutorialCallBack, v7, v8);
        this->fields.endTutorialCallBack = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endTutorialCallBack, 0, v11, v12);
        if ( this->fields.isHpLimitUp || this->fields.isAtkLimitUp )
        {
          v13 = sub_1C32CC8(int___TypeInfo, 1);
          isHpLimitUp = this->fields.isHpLimitUp;
          isAtkLimitUp = this->fields.isAtkLimitUp;
          v16 = v13;
          if ( isHpLimitUp )
          {
            v4 = SvtCombineResultWindowComponent_TypeInfo;
            cctor_finished = SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished;
            if ( isAtkLimitUp )
            {
              if ( !cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
                v4 = SvtCombineResultWindowComponent_TypeInfo;
              }
              if ( !v16 )
                goto LABEL_34;
              if ( *(_DWORD *)(v16 + 24) )
              {
                p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v4->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_30:
                *(_DWORD *)(v16 + 32) = *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_31:
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                System_Action___ctor(
                  v20,
                  (Il2CppObject *)v3,
                  Method_SvtCombineResultWindowComponent___c__DisplayClass131_0__EndOpen_b__0__,
                  0);
                if ( Instance )
                {
                  CommonUI__OpenImageDialogAssets((CommonUI_o *)Instance, (System_Int32_array *)v16, 2, v20, 0);
                  return;
                }
LABEL_34:
                sub_1C32E7C(v4);
              }
            }
            else
            {
              if ( !cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
                v4 = SvtCombineResultWindowComponent_TypeInfo;
              }
              if ( !v16 )
                goto LABEL_34;
              if ( *(_DWORD *)(v16 + 24) )
              {
                p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v4->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
                goto LABEL_30;
              }
            }
          }
          else
          {
            if ( !isAtkLimitUp )
              goto LABEL_31;
            v4 = SvtCombineResultWindowComponent_TypeInfo;
            if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
              v4 = SvtCombineResultWindowComponent_TypeInfo;
            }
            if ( !v16 )
              goto LABEL_34;
            if ( *(_DWORD *)(v16 + 24) )
            {
              p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v4->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
              goto LABEL_30;
            }
          }
          sub_1C32E84(v4);
        }
        ActionExtensions__Call(*(System_Action_o **)(v3 + 24), 0);
      }
    }
  }
}


void SvtCombineResultWindowComponent__InitStateInfo(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x20

  if ( (byte_4C3BA86 & 1) == 0 )
  {
    sub_1C32C20(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BA86 = 1;
  }
  currentMaxLvLb = (UILabel_o *)SvtCombineResultWindowComponent_TypeInfo;
  currentLvLb = this->fields.currentLvLb;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
  if ( !currentLvLb )
    goto LABEL_36;
  UIExtrusionLabel__set_text(currentLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.currentExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0);
  currentMaxLvLb = this->fields.currentExpValLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = this->fields.currentHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = this->fields.currentAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.currentSvtEqLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIExtrusionLabel__set_text(
    (UIExtrusionLabel_o *)currentMaxLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0);
  currentMaxLvLb = this->fields.currentSvtEqMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.currentSvtEqExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0);
  currentMaxLvLb = this->fields.currentSvtEqExpValLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = this->fields.currentSvtEqHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = this->fields.currentSvtEqAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.currentAdjustHpIconLabel;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0);
  currentMaxLvLb = this->fields.currentAdjustHpMaxLabel;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0);
  currentMaxLvLb = this->fields.currentAdjustAtkMaxLabel;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.resLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIExtrusionLabel__set_text(
    (UIExtrusionLabel_o *)currentMaxLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0);
  currentMaxLvLb = this->fields.resMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.resCrExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0);
  currentMaxLvLb = this->fields.resHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = this->fields.resAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.resSvtEqLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIExtrusionLabel__set_text(
    (UIExtrusionLabel_o *)currentMaxLvLb,
    SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT,
    0);
  currentMaxLvLb = this->fields.resSvtEqMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.resSvtEqCrExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0);
  currentMaxLvLb = this->fields.resSvtEqHpLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = this->fields.resSvtEqAtkLb;
  if ( !currentMaxLvLb )
    goto LABEL_36;
  UILabel__set_text(currentMaxLvLb, SvtCombineResultWindowComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.resAdjustHpIconLabel;
  if ( !currentMaxLvLb
    || (UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0), (currentMaxLvLb = this->fields.resAdjustHpMaxLabel) == 0)
    || (UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0),
        (currentMaxLvLb = (UILabel_o *)this->fields.resAdjustAtkIconLabel) == 0)
    || (UIIconLabel__Clear((UIIconLabel_o *)currentMaxLvLb, 0), (currentMaxLvLb = this->fields.resAdjustAtkMaxLabel) == 0) )
  {
LABEL_36:
    sub_1C32E7C(currentMaxLvLb);
  }
  UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  *(_WORD *)&this->fields.isAtkLimitUp = 0;
}


bool SvtCombineResultWindowComponent__IsOpenStatusLimitTutorial(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isHpLimitUp || this->fields.isAtkLimitUp;
}


void SvtCombineResultWindowComponent__SetWaitFlag(
        SvtCombineResultWindowComponent_o *this,
        bool isUnskippable,
        bool isWaitEndOpenDialog,
        const MethodInfo *method)
{
  this->fields.isUnskippable = isUnskippable;
  this->fields.isWaitOpenTutorial = isWaitEndOpenDialog;
}


void SvtCombineResultWindowComponent__StartUpdateValue(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isUpdateGauge = 0;
}


void SvtCombineResultWindowComponent__UpdateValue(
        SvtCombineResultWindowComponent_o *this,
        float val,
        const MethodInfo *method)
{
  __int64 resUsrSvtData; // x0
  int v6; // w20
  int32_t v7; // w1
  const MethodInfo *v8; // x4
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v10; // x9
  float v11; // s2
  float exp; // s9
  float v13; // s1
  float v14; // s10
  float v15; // s9
  unsigned int v16; // w10
  int32_t v17; // w21
  float v18; // s0
  float Epsilon; // s4
  float v20; // s1
  struct UserServantEntity_o *v21; // x8
  struct UserServantEntity_o *v22; // x8
  struct UserServantEntity_o *v23; // x8
  int32_t v24; // w21
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  UITweener_o *v27; // x20
  _BOOL4 isEqCombine; // w8
  UIExtrusionLabel_o *v29; // x20
  UIWidget_o *resLvWidget; // x20
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v33; // x2
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v37; // x2
  UIWidget_o *resAtkWidget; // x19
  int32_t afterAtk; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t afterHp; // [xsp+8h] [xbp-48h] BYREF
  int32_t increLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3BA8F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C32C20(&Method_SvtCombineResultWindowComponent_UpdateValue__);
    sub_1C32C20(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C3BA8F = 1;
  }
  afterAtk = 0;
  afterHp = 0;
  resUsrSvtData = (__int64)this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_66;
  resUsrSvtData = UserServantEntity__getLevelMax((UserServantEntity_o *)resUsrSvtData, 0);
  if ( !this->fields.skipCollider )
    goto LABEL_66;
  v6 = resUsrSvtData;
  UnityEngine_Collider__set_enabled(this->fields.skipCollider, 1, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_66;
  v10 = this->fields.resUsrSvtData;
  if ( !v10 )
    goto LABEL_66;
  v11 = fminf(val, 1.0);
  exp = (float)baseUsrSvtData->fields.exp;
  if ( val < 0.0 )
    v13 = 0.0;
  else
    v13 = v11;
  v14 = v13 * (float)((float)v10->fields.exp - exp);
  if ( !byte_4C313D0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D0 = 1;
  }
  v15 = v14 + exp;
  resUsrSvtData = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = vcvtms_s32_f32(v15);
  if ( floorf(v15) == INFINITY )
    v17 = 0x80000000;
  else
    v17 = v16;
  if ( !byte_4C313D5 )
  {
    resUsrSvtData = sub_1C32C20(&UnityEngine_Mathf_TypeInfo);
    byte_4C313D5 = 1;
  }
  v18 = fmaxf(fabsf(val), 1.0) * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  v20 = fabsf(val + -1.0);
  if ( v18 <= (float)(Epsilon * 8.0) )
    v18 = Epsilon * 8.0;
  if ( v20 >= v18 )
  {
    if ( !this->fields.resUsrSvtData )
      goto LABEL_66;
  }
  else
  {
    v21 = this->fields.resUsrSvtData;
    if ( !v21 )
      goto LABEL_66;
    v17 = v21->fields.exp;
  }
  v22 = this->fields.baseUsrSvtData;
  if ( !v22 )
    goto LABEL_66;
  resUsrSvtData = SvtCombineResultWindowComponent__setSvtExp(this, v7, v17, v22->fields.lv, v8);
  increLv = resUsrSvtData;
  v23 = this->fields.baseUsrSvtData;
  if ( !v23 )
    goto LABEL_66;
  if ( v23->fields.lv == v6 )
    return;
  v24 = resUsrSvtData;
  if ( !this->fields.isUpdateGauge )
  {
    v25 = Method_SvtCombineResultWindowComponent_UpdateValue__;
    if ( (*((_BYTE *)Method_SvtCombineResultWindowComponent_UpdateValue__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C32C38(Method_SvtCombineResultWindowComponent_UpdateValue__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C32C04(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 3, 0, 0);
    this->fields.isUpdateGauge = 1;
  }
  if ( v24 == this->fields.PrevLevel )
  {
    this->fields.endDispLvInfoFlg = 1;
    return;
  }
  resUsrSvtData = (__int64)this->fields.lvUpInfo;
  if ( !resUsrSvtData )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resUsrSvtData, 1, 0);
  resUsrSvtData = (__int64)this->fields.lvUpInfo;
  if ( !resUsrSvtData )
    goto LABEL_66;
  resUsrSvtData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)resUsrSvtData,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !resUsrSvtData )
    goto LABEL_66;
  v27 = (UITweener_o *)resUsrSvtData;
  UITweener__ResetToBeginning((UITweener_o *)resUsrSvtData, 0);
  UITweener__PlayForward(v27, 0);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v24;
  this->fields.endDispLvInfoFlg = 0;
  v29 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  resUsrSvtData = (__int64)System_Int32__ToString((int32_t)&increLv, 0);
  if ( !v29 )
    goto LABEL_66;
  UIExtrusionLabel__set_text(v29, (System_String_o *)resUsrSvtData, 0);
  resLvWidget = this->fields.resLvWidget;
  resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resLvWidget )
    goto LABEL_66;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)*(_QWORD *)(resUsrSvtData + 184), 0);
  resUsrSvtData = (__int64)this->fields.checkResInfo;
  if ( !resUsrSvtData )
    goto LABEL_66;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)resUsrSvtData,
    &afterHp,
    &afterAtk,
    this->fields.resUsrSvtData,
    increLv,
    0);
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      resUsrSvtData = (__int64)System_Int32__ToString_65028652(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9231/*"N0"*/,
                                 0);
      if ( !resSvtEqHpLb )
        goto LABEL_66;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)resUsrSvtData, 0);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      resUsrSvtData = (__int64)System_Int32__ToString_65028652(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9231/*"N0"*/,
                                 0);
      if ( !resHpLb )
        goto LABEL_66;
      UILabel__set_text(resHpLb, (System_String_o *)resUsrSvtData, 0);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v33);
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
    UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)*(_QWORD *)(resUsrSvtData + 184), 0);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    resUsrSvtData = (__int64)System_Int32__ToString_65028652(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9231/*"N0"*/,
                               0);
    if ( !resSvtEqAtkLb )
      goto LABEL_66;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)resUsrSvtData, 0);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    resUsrSvtData = (__int64)System_Int32__ToString_65028652(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9231/*"N0"*/,
                               0);
    if ( !resAtkLb )
      goto LABEL_66;
    UILabel__set_text(resAtkLb, (System_String_o *)resUsrSvtData, 0);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v37);
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
    sub_1C32E7C(resUsrSvtData);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(resUsrSvtData + 184), 0);
}


void SvtCombineResultWindowComponent__VoiceEnd(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( !this->fields.isUpdateGauge )
    SvtCombineResultWindowComponent__EndDisp(this, method);
}


void SvtCombineResultWindowComponent__checkGetSkill(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
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
  const MethodInfo *v18; // x3
  Il2CppObject *skillGetInfo; // x1
  int64_t currentCryptoKey; // x8
  _QWORD *v21; // x9
  __int64 hiddenValue_low; // x10
  int64_t v23; // x8

  if ( (byte_4C3BA94 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_6961/*"GET_SKILL_NAME"*/);
    sub_1C32C20(&StringLiteral_6963/*"GET_SKILL_TITLE"*/);
    byte_4C3BA94 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(baseUsrSvtData, -1, -1, 1, -1, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_30;
  v4 = baseUsrSvtData;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(
                                            this->fields.resUsrSvtData,
                                            -1,
                                            -1,
                                            1,
                                            -1,
                                            0);
  if ( !v4 )
    goto LABEL_30;
  hiddenValue = v4->fields.id.fields.hiddenValue;
  if ( (int)hiddenValue < 1 )
    return;
  v6 = baseUsrSvtData;
  v7 = 0;
  p_fakeValue = &baseUsrSvtData->fields.id.fields.fakeValue;
  for ( i = (_DWORD)v4 + 32; ; i += 4 )
  {
    if ( !v6 )
      goto LABEL_30;
    if ( v7 >= LODWORD(v6->fields.id.fields.hiddenValue) || v7 >= (unsigned int)hiddenValue )
      goto LABEL_29;
    baseUsrSvtData = (UserServantEntity_o *)System_Int32__Equals_65028480(i, *((_DWORD *)p_fakeValue + v7), 0);
    if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
      break;
    LODWORD(hiddenValue) = v4->fields.id.fields.hiddenValue;
    if ( (__int64)++v7 >= (int)hiddenValue )
      return;
  }
  if ( (unsigned int)v7 >= LODWORD(v6->fields.id.fields.hiddenValue) )
LABEL_29:
    sub_1C32E84(baseUsrSvtData);
  v10 = *((_DWORD *)&v6->fields.id.fields.fakeValue + v7);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v10,
             (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  v13 = (SkillEntity_o *)Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6963/*"GET_SKILL_TITLE"*/, 0);
  if ( !skillGetInfoTitle )
    goto LABEL_30;
  UILabel__set_text(skillGetInfoTitle, (System_String_o *)baseUsrSvtData, 0);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6961/*"GET_SKILL_NAME"*/, 0);
  if ( !v13 )
    goto LABEL_30;
  v15 = (System_String_o *)baseUsrSvtData;
  Name = (Il2CppObject *)SkillEntity__getName(v13, 0);
  baseUsrSvtData = (UserServantEntity_o *)System_String__Format(v15, Name, 0);
  if ( !skillGetInfoDetail
    || (UILabel__set_text(skillGetInfoDetail, (System_String_o *)baseUsrSvtData, 0),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.resInfoList) == 0)
    || (skillGetInfo = (Il2CppObject *)this->fields.skillGetInfo,
        currentCryptoKey = baseUsrSvtData->fields.id.fields.currentCryptoKey,
        v21 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(baseUsrSvtData->fields.id.fields.hiddenValue),
        !currentCryptoKey) )
  {
LABEL_30:
    sub_1C32E7C(baseUsrSvtData);
  }
  hiddenValue_low = SLODWORD(baseUsrSvtData->fields.id.fields.hiddenValue);
  if ( (unsigned int)hiddenValue_low >= *(_DWORD *)(currentCryptoKey + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)baseUsrSvtData,
      skillGetInfo,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = currentCryptoKey + 8 * hiddenValue_low;
    LODWORD(baseUsrSvtData->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
    *(_QWORD *)(v23 + 32) = skillGetInfo;
    sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 32), (int32_t)skillGetInfo, v17, v18);
  }
  this->fields.isGetNewSkill = 1;
}


void SvtCombineResultWindowComponent__checkQuestOpen(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x0
  clsQuestCheck_o *Instance; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  System_Collections_Generic_List_int__o *v9; // x0
  UILabel_o *storyQuestInfoTitle; // x21
  System_Collections_Generic_List_int__o *v11; // x20
  UILabel_o *heroQuestInfoTitle; // x21
  int32_t i; // w21
  Il2CppObject *MasterData_object; // x22
  int monitor; // w8
  clsQuestCheck_o *v16; // x22
  UILabel_o *storyQuestInfoDetail; // x23
  System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *heroQuestInfo; // x1
  UILabel_o *heroQuestInfoDetail; // x23
  System_String_o *v23; // x0
  UILabel_o *eventQuestInfoDetail; // x23
  System_String_o *v25; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x8
  _QWORD *v27; // x9
  __int64 cQuestReleaseListP_low; // x10
  __int64 v29; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4C3BA93 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&StringLiteral_9652/*"OPEN_STORY_QUEST_TITLE"*/);
    sub_1C32C20(&StringLiteral_9638/*"OPEN_EVENT_QUEST_NAME"*/);
    sub_1C32C20(&StringLiteral_9641/*"OPEN_HERO_QUEST_TITLE"*/);
    byte_4C3BA93 = 1;
  }
  this->fields.isOpenQuest = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_43;
  v6 = Instance;
  v8 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v8;
  *(_QWORD *)&v30.fields.fakeValue = v7;
  Instance = (clsQuestCheck_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v30, 0);
  if ( !v6 )
    goto LABEL_43;
  v9 = clsQuestCheck__GetReleaseQuestIdByServantLv(v6, (int32_t)Instance, this->fields.baseSvtCollectionLv, 0);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v11 = v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9652/*"OPEN_STORY_QUEST_TITLE"*/, 0);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, (System_String_o *)Instance, 0),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9641/*"OPEN_HERO_QUEST_TITLE"*/, 0),
        !heroQuestInfoTitle) )
  {
LABEL_43:
    sub_1C32E7C(Instance);
  }
  UILabel__set_text(heroQuestInfoTitle, (System_String_o *)Instance, 0);
  if ( v11 && v11->fields._size >= 1 )
  {
    for ( i = 0; i < v11->fields._size; ++i )
    {
      if ( System_Collections_Generic_List_int___get_Item(
             v11,
             i,
             (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
      {
        Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
        Instance = (clsQuestCheck_o *)System_Collections_Generic_List_int___get_Item(
                                        v11,
                                        i,
                                        (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !MasterData_object )
          goto LABEL_43;
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        (int32_t)Instance,
                                        (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_43;
        monitor = (int)Instance[1].monitor;
        v16 = Instance;
        switch ( monitor )
        {
          case 6:
            heroQuestInfoDetail = this->fields.heroQuestInfoDetail;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9638/*"OPEN_EVENT_QUEST_NAME"*/, 0);
            Instance = (clsQuestCheck_o *)System_String__Format(v23, (Il2CppObject *)v16->fields.cQuestReleaseListP, 0);
            if ( !heroQuestInfoDetail )
              goto LABEL_43;
            UILabel__set_text(heroQuestInfoDetail, (System_String_o *)Instance, 0);
            Instance = (clsQuestCheck_o *)this->fields.resInfoList;
            if ( !Instance )
              goto LABEL_43;
            heroQuestInfo = (Il2CppObject *)this->fields.heroQuestInfo;
            goto LABEL_36;
          case 5:
            eventQuestInfoDetail = this->fields.eventQuestInfoDetail;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9638/*"OPEN_EVENT_QUEST_NAME"*/, 0);
            Instance = (clsQuestCheck_o *)System_String__Format(v25, (Il2CppObject *)v16->fields.cQuestReleaseListP, 0);
            if ( !eventQuestInfoDetail )
              goto LABEL_43;
            UILabel__set_text(eventQuestInfoDetail, (System_String_o *)Instance, 0);
            Instance = (clsQuestCheck_o *)this->fields.resInfoList;
            if ( !Instance )
              goto LABEL_43;
            heroQuestInfo = (Il2CppObject *)this->fields.eventQuestInfo;
            goto LABEL_36;
          case 3:
            storyQuestInfoDetail = this->fields.storyQuestInfoDetail;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9638/*"OPEN_EVENT_QUEST_NAME"*/, 0);
            Instance = (clsQuestCheck_o *)System_String__Format(v18, (Il2CppObject *)v16->fields.cQuestReleaseListP, 0);
            if ( !storyQuestInfoDetail )
              goto LABEL_43;
            UILabel__set_text(storyQuestInfoDetail, (System_String_o *)Instance, 0);
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
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = (__int64)qrs + 8 * cQuestReleaseListP_low;
              LODWORD(Instance->fields.cQuestReleaseListP) = cQuestReleaseListP_low + 1;
              *(_QWORD *)(v29 + 32) = heroQuestInfo;
              sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 32), (int32_t)heroQuestInfo, v19, v20);
            }
            this->fields.isOpenQuest = 1;
            break;
        }
      }
    }
  }
}


void SvtCombineResultWindowComponent__destroyCurrentStatusGrid(
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

  if ( (byte_4C3BA96 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BA96 = 1;
  }
  currentLimitCntGrid = (UnityEngine_Component_o *)this->fields.currentLimitCntGrid;
  if ( !currentLimitCntGrid )
    goto LABEL_24;
  currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentLimitCntGrid, 0);
  if ( !currentLimitCntGrid )
    goto LABEL_24;
  currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                     (UnityEngine_Transform_o *)currentLimitCntGrid,
                                                     0);
  if ( !this->fields.currentSvtEqLimitCntGrid )
    goto LABEL_24;
  v4 = (int)currentLimitCntGrid;
  currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.currentSvtEqLimitCntGrid,
                                                     0);
  if ( !currentLimitCntGrid )
    goto LABEL_24;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)currentLimitCntGrid, 0);
  if ( v4 >= 1 )
  {
    v6 = v4 + 1;
    while ( 1 )
    {
      currentLimitCntGrid = (UnityEngine_Component_o *)this->fields.currentLimitCntGrid;
      if ( !currentLimitCntGrid )
        break;
      currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentLimitCntGrid, 0);
      if ( !currentLimitCntGrid )
        break;
      currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)currentLimitCntGrid,
                                                         v6 - 2,
                                                         0);
      if ( !currentLimitCntGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1C32E7C(currentLimitCntGrid);
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
      currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentLimitCntGrid, 0);
      if ( !currentLimitCntGrid )
        break;
      currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)currentLimitCntGrid,
                                                         v9,
                                                         0);
      if ( !currentLimitCntGrid )
        break;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v10, 0);
      if ( --v9 < 0 )
        return;
    }
    goto LABEL_24;
  }
}


void SvtCombineResultWindowComponent__destroyResStatusGrid(
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

  if ( (byte_4C3BA97 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BA97 = 1;
  }
  resLimitCntGrid = (UnityEngine_Component_o *)this->fields.resLimitCntGrid;
  if ( !resLimitCntGrid )
    goto LABEL_24;
  resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resLimitCntGrid, 0);
  if ( !resLimitCntGrid )
    goto LABEL_24;
  resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)resLimitCntGrid,
                                                 0);
  if ( !this->fields.resSvtEqLimitCntGrid )
    goto LABEL_24;
  v4 = (int)resLimitCntGrid;
  resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid,
                                                 0);
  if ( !resLimitCntGrid )
    goto LABEL_24;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resLimitCntGrid, 0);
  if ( v4 >= 1 )
  {
    v6 = v4 + 1;
    while ( 1 )
    {
      resLimitCntGrid = (UnityEngine_Component_o *)this->fields.resLimitCntGrid;
      if ( !resLimitCntGrid )
        break;
      resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resLimitCntGrid, 0);
      if ( !resLimitCntGrid )
        break;
      resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)resLimitCntGrid,
                                                     v6 - 2,
                                                     0);
      if ( !resLimitCntGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1C32E7C(resLimitCntGrid);
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
      resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resLimitCntGrid, 0);
      if ( !resLimitCntGrid )
        break;
      resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)resLimitCntGrid,
                                                     v9,
                                                     0);
      if ( !resLimitCntGrid )
        break;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v10, 0);
      if ( --v9 < 0 )
        return;
    }
    goto LABEL_24;
  }
}


void SvtCombineResultWindowComponent__enabledLvInfo(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *lvUpInfo; // x0

  lvUpInfo = this->fields.lvUpInfo;
  if ( !lvUpInfo )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(lvUpInfo, this->fields.endDispLvInfoFlg, 0);
}


void SvtCombineResultWindowComponent__setAfterSvtResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *resData,
        int32_t svtCollectionLv,
        System_Action_o *callback,
        System_Action_o *endTutorialCb,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w0
  _BOOL4 isEqCombine; // w8
  int32_t childCount; // w23
  UnityEngine_Transform_o *transform; // x24
  System_Collections_Generic_List_object__o *v17; // x26
  struct System_Collections_Generic_List_GameObject__o **p_resLimitCntList; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w26
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  UserServantEntity_o *v30; // x1
  Il2CppClass **v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_object__o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UserServantEntity_o *v37; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x20
  __int64 v39; // x21
  __int64 v40; // x22
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4C3BA8C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3BA8C = 1;
  }
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.resUsrSvtData,
    (int32_t)resData,
    svtCollectionLv,
    (const MethodInfo *)callback);
  resUsrSvtData = this->fields.resUsrSvtData;
  this->fields.baseSvtCollectionLv = svtCollectionLv;
  if ( !resUsrSvtData )
    goto LABEL_32;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0);
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
                                           0);
  if ( !resUsrSvtData )
    goto LABEL_32;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resUsrSvtData, 0);
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = &this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resLimitCntList, (int32_t)v17, v19, v20);
  if ( childCount >= 1 )
  {
    if ( transform )
    {
      v23 = 0;
      while ( 1 )
      {
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Transform__GetChild(transform, v23, 0);
        if ( !resUsrSvtData )
          break;
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)resUsrSvtData,
                                                 0);
        v26 = (System_Collections_Generic_List_object__o *)*p_resLimitCntList;
        if ( !*p_resLimitCntList )
          break;
        items = v26->fields._items;
        v28 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v26->fields._version;
        if ( !items )
          break;
        size = v26->fields._size;
        v30 = resUsrSvtData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)resUsrSvtData,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v30;
          sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v30, v24, v25);
        }
        if ( childCount == ++v23 )
          goto LABEL_23;
      }
    }
LABEL_32:
    sub_1C32E7C(resUsrSvtData);
  }
LABEL_23:
  this->fields.openCallBack = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v21, v22);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endTutorialCallBack, (int32_t)endTutorialCb, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v34;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)v34, v35, v36);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_32;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v40;
  *(_QWORD *)&v43.fields.fakeValue = v39;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v43, 0);
  if ( !v38 )
    goto LABEL_32;
  resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           v38,
                                           (int32_t)resUsrSvtData,
                                           (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0) )
  {
    SvtCombineResultWindowComponent__checkQuestOpen(this, v41);
    SvtCombineResultWindowComponent__checkGetSkill(this, v42);
  }
  SvtCombineResultWindowComponent__showGetExp(this, v41);
}


void SvtCombineResultWindowComponent__setBaseAdjustInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  struct UserServantEntity_o *v4; // x8
  int32_t adjustHp; // w22
  __int64 v6; // x8
  int v7; // w23
  int v8; // w24
  UIIconLabel_o *currentAdjustHpIconLabel; // x20
  const MethodInfo *v10; // x2
  struct UserServantEntity_o *v11; // x8
  int32_t adjustAtk; // w23
  __int64 v13; // x9
  int v14; // w24
  int32_t StatusUpAdjustAtk; // w25
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4C3BA89 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BA89 = 1;
  }
  *(_OWORD *)&this->fields.baseMaxHpAdjustVal = 0u;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__GetAdjustMax(
                                            baseUsrSvtData,
                                            &this->fields.baseMaxHpAdjustVal,
                                            &this->fields.baseMaxAtkAdjustVal,
                                            &this->fields.baseSecondMaxHpAdjustVal,
                                            &this->fields.baseSecondMaxAtkAdjustVal,
                                            0);
  v4 = this->fields.baseUsrSvtData;
  if ( !v4 )
    goto LABEL_23;
  adjustHp = v4->fields.adjustHp;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = this->fields.baseUsrSvtData;
    if ( !v4 )
      goto LABEL_23;
    baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  }
  if ( v4->fields.adjustHp >= this->fields.baseMaxHpAdjustVal )
    v6 = 800;
  else
    v6 = 792;
  v7 = *(_DWORD *)(*(_QWORD *)&baseUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 336LL);
  v8 = *(_DWORD *)((char *)&this->klass + v6);
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( !baseUsrSvtData->fields.randomLimitCountSupport.fields.currentCryptoKey )
    j_il2cpp_runtime_class_init_0(baseUsrSvtData);
  if ( !currentAdjustHpIconLabel )
    goto LABEL_23;
  UIIconLabel__Set_41010828(
    currentAdjustHpIconLabel,
    44,
    v7 * adjustHp,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v8,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0);
  SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.baseUsrSvtData, v10);
  v11 = this->fields.baseUsrSvtData;
  if ( !v11 )
    goto LABEL_23;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  adjustAtk = v11->fields.adjustAtk;
  v13 = 804;
  if ( adjustAtk < this->fields.baseMaxAtkAdjustVal )
    v13 = 796;
  v14 = *(_DWORD *)((char *)&this->klass + v13);
  StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !currentAdjustAtkIconLabel
    || (UIIconLabel__Set_41010828(
          currentAdjustAtkIconLabel,
          45,
          StatusUpAdjustAtk * adjustAtk,
          BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v14,
          0,
          0,
          0,
          0,
          0,
          0,
          0),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustAtkMaxLabel) == 0) )
  {
LABEL_23:
    sub_1C32E7C(baseUsrSvtData);
  }
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v17);
}


void SvtCombineResultWindowComponent__setBefResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *baseData,
        int32_t resultIdx,
        const MethodInfo *method)
{
  void *skipCollider; // x0
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UILabel_o *successInfoLabel; // x22
  uint32_t cctor_finished; // w8
  __int64 *v13; // x8
  System_String_o *v14; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x22
  UILabel_o *currentMaxLvLb; // x22
  struct UserServantEntity_o *v18; // x8
  UIExtrusionLabel_o *resLvLb; // x22
  UILabel_o *resMaxLvLb; // x22
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  struct UIWidget_o **p_resHpWidget; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  struct UIWidget_o **p_resAtkWidget; // x23
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UILabel_o *currentExpValLb; // x21
  struct UserServantEntity_o *v37; // x8
  int32_t v38; // w21
  __int64 v39; // x20
  __int64 v40; // x22
  UserServantEntity_o *v41; // x8
  _DWORD *v42; // x20
  int32_t v43; // w8
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v46; // x4
  int32_t v47; // w22
  UnityEngine_Transform_o *v48; // x0
  const MethodInfo *v49; // x4
  UILabel_o *currentHpLb; // x21
  UILabel_o *resHpLb; // x21
  UILabel_o *currentAtkLb; // x21
  UILabel_o *resAtkLb; // x21
  const MethodInfo *v54; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Action_o *v58; // x20
  __int64 barExp; // [xsp+0h] [xbp-40h] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3BA87 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SvtCombineResultWindowComponent_EndOpen__);
    sub_1C32C20(&StringLiteral_12479/*"SUPER_SUCCESS_INFO_TITLE"*/);
    sub_1C32C20(&StringLiteral_397/*"#,0"*/);
    sub_1C32C20(&StringLiteral_8252/*"LARGE_SUCCESS_INFO_TITLE"*/);
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BA87 = 1;
  }
  barExp = 0;
  *(_QWORD *)lateExp = 0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_57;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v9, v10);
  skipCollider = this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 0;
  if ( !skipCollider )
    goto LABEL_57;
  skipCollider = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)skipCollider, 0);
  successInfoLabel = this->fields.successInfoLabel;
  this->fields.baseLvMax = (int)skipCollider;
  if ( (resultIdx & 0xFFFFFFFE) == 2 )
  {
    cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( resultIdx == 2 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_8252/*"LARGE_SUCCESS_INFO_TITLE"*/;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_12479/*"SUPER_SUCCESS_INFO_TITLE"*/;
    }
    skipCollider = LocalizationManager__Get((System_String_o *)*v13, 0);
    if ( successInfoLabel )
    {
      v14 = (System_String_o *)skipCollider;
      goto LABEL_17;
    }
LABEL_57:
    sub_1C32E7C(skipCollider);
  }
  if ( !successInfoLabel )
    goto LABEL_57;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_17:
  UILabel__set_text(successInfoLabel, v14, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_57;
  currentLvLb = this->fields.currentLvLb;
  skipCollider = System_Int32__ToString((int)baseUsrSvtData + 256, 0);
  if ( !currentLvLb )
    goto LABEL_57;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skipCollider, 0);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  skipCollider = System_Int32__ToString((int)this + 720, 0);
  if ( !currentMaxLvLb )
    goto LABEL_57;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)skipCollider, 0);
  v18 = this->fields.baseUsrSvtData;
  if ( !v18 )
    goto LABEL_57;
  resLvLb = this->fields.resLvLb;
  skipCollider = System_Int32__ToString((int)v18 + 256, 0);
  if ( !resLvLb )
    goto LABEL_57;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skipCollider, 0);
  resMaxLvLb = this->fields.resMaxLvLb;
  skipCollider = System_Int32__ToString((int)this + 720, 0);
  if ( !resMaxLvLb )
    goto LABEL_57;
  UILabel__set_text(resMaxLvLb, (System_String_o *)skipCollider, 0);
  skipCollider = this->fields.resLvLb;
  if ( !skipCollider )
    goto LABEL_57;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)skipCollider,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resLvWidget, (int32_t)Component_object, v22, v23);
  skipCollider = this->fields.resMaxLvLb;
  if ( !skipCollider )
    goto LABEL_57;
  v24 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resMaxLvWidget, (int32_t)v24, v26, v27);
  skipCollider = this->fields.resHpLb;
  if ( !skipCollider )
    goto LABEL_57;
  v28 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v28;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resHpWidget, (int32_t)v28, v30, v31);
  skipCollider = this->fields.resAtkLb;
  if ( !skipCollider )
    goto LABEL_57;
  v32 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v32;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resAtkWidget, (int32_t)v32, v34, v35);
  skipCollider = this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_57;
  v62.fields.r = 1.0;
  v62.fields.g = 1.0;
  v62.fields.b = 1.0;
  v62.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v62, 0);
  skipCollider = *p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_57;
  v63.fields.r = 1.0;
  v63.fields.g = 1.0;
  v63.fields.b = 1.0;
  v63.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v63, 0);
  skipCollider = *p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_57;
  v64.fields.r = 1.0;
  v64.fields.g = 1.0;
  v64.fields.b = 1.0;
  v64.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v64, 0);
  skipCollider = *p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_57;
  v65.fields.r = 1.0;
  v65.fields.g = 1.0;
  v65.fields.b = 1.0;
  v65.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v65, 0);
  skipCollider = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_57;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, (float *)&barExp + 1, 0);
  skipCollider = this->fields.currentExpBar;
  if ( !skipCollider )
    goto LABEL_57;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, *((float *)&barExp + 1), 0);
  currentExpValLb = this->fields.currentExpValLb;
  skipCollider = System_Int32__ToString_65028652((int32_t)lateExp, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
  if ( !currentExpValLb )
    goto LABEL_57;
  UILabel__set_text(currentExpValLb, (System_String_o *)skipCollider, 0);
  skipCollider = this->fields.resCrExpBar;
  if ( !skipCollider )
    goto LABEL_57;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, *((float *)&barExp + 1), 0);
  skipCollider = this->fields.resExpBar;
  if ( !skipCollider )
    goto LABEL_57;
  skipCollider = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skipCollider, 0);
  if ( !skipCollider )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_57;
  skipCollider = (void *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)skipCollider, 0);
  v37 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_57;
  v38 = (int)skipCollider;
  v40 = *(_QWORD *)&v37->fields.limitCount.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v40;
  *(_QWORD *)&v61.fields.fakeValue = v39;
  skipCollider = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v61, 0);
  v41 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v41 )
    goto LABEL_57;
  skipCollider = UserServantEntity__GetOverwriteStatus(v41, 0, 0);
  if ( !skipCollider )
    goto LABEL_57;
  v42 = skipCollider;
  this->fields.baseHpVal = *((_DWORD *)skipCollider + 4);
  v43 = *((_DWORD *)skipCollider + 5);
  skipCollider = this->fields.currentLimitCntGrid;
  this->fields.baseAtkVal = v43;
  if ( !skipCollider )
    goto LABEL_57;
  baseLimitCnt = this->fields.baseLimitCnt;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v38, baseLimitCnt, transform, v46);
  skipCollider = this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_57;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0);
  skipCollider = this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_57;
  v47 = this->fields.baseLimitCnt;
  v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v38, v47, v48, v49);
  skipCollider = this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_57;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0);
  currentHpLb = this->fields.currentHpLb;
  LODWORD(barExp) = v42[4];
  skipCollider = System_Int32__ToString_65028652((int32_t)&barExp, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
  if ( !currentHpLb )
    goto LABEL_57;
  UILabel__set_text(currentHpLb, (System_String_o *)skipCollider, 0);
  resHpLb = this->fields.resHpLb;
  LODWORD(barExp) = v42[4];
  skipCollider = System_Int32__ToString_65028652((int32_t)&barExp, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
  if ( !resHpLb )
    goto LABEL_57;
  UILabel__set_text(resHpLb, (System_String_o *)skipCollider, 0);
  currentAtkLb = this->fields.currentAtkLb;
  LODWORD(barExp) = v42[5];
  skipCollider = System_Int32__ToString_65028652((int32_t)&barExp, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
  if ( !currentAtkLb )
    goto LABEL_57;
  UILabel__set_text(currentAtkLb, (System_String_o *)skipCollider, 0);
  resAtkLb = this->fields.resAtkLb;
  LODWORD(barExp) = v42[5];
  skipCollider = System_Int32__ToString_65028652((int32_t)&barExp, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
  if ( !resAtkLb )
    goto LABEL_57;
  UILabel__set_text(resAtkLb, (System_String_o *)skipCollider, 0);
  skipCollider = this->fields.msgInfo;
  if ( !skipCollider )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = this->fields.AdjustInfo;
  if ( !skipCollider )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v54);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.lvUpInfo, (int32_t)lvInfo, v56, v57);
  skipCollider = this->fields.svtCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  skipCollider = this->fields.svtEqCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !skipCollider )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  v58 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0, 0);
}


void SvtCombineResultWindowComponent__setBefSvtEqResultState(
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
  const MethodInfo *v12; // x3
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x23
  UILabel_o *currentSvtEqMaxLvLb; // x23
  struct UserServantEntity_o *v16; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x23
  UILabel_o *resSvtEqMaxLvLb; // x23
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x0
  struct UIWidget_o **p_resHpWidget; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x0
  struct UIWidget_o **p_resAtkWidget; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
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
  UIWidget_o *v56; // x22
  UIWidget_o *v57; // x23
  UnityEngine_GameObject_o *v58; // x21
  Il2CppObject *v59; // x24
  Il2CppObject *v60; // x0
  Il2CppObject *v61; // x21
  UILabel_o *successInfoLabel; // x25
  uint32_t cctor_finished; // w8
  __int64 *v64; // x8
  SvtCombineResultWindowComponent_c *v65; // x0
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  Il2CppObject *v72; // x0
  System_String_o *v73; // x20
  UnityEngine_Transform_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x20
  UnityEngine_Transform_o *v76; // x21
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v78; // x20
  UILabel_o *addExpLb; // x20
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Action_o *v83; // x20
  int m_CachedPtr; // [xsp+0h] [xbp-60h] BYREF
  float barExp; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v87; // [xsp+18h] [xbp-48h] BYREF
  int32_t v88; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v87 = addExp;
  v88 = normalExp;
  if ( (byte_4C3BA88 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SvtCombineResultWindowComponent_EndOpen__);
    sub_1C32C20(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_12479/*"SUPER_SUCCESS_INFO_TITLE"*/);
    sub_1C32C20(&StringLiteral_397/*"#,0"*/);
    sub_1C32C20(&StringLiteral_8252/*"LARGE_SUCCESS_INFO_TITLE"*/);
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_4578/*"CombineSuccessEffect_{0:D2}"*/);
    byte_4C3BA88 = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_100;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v11, v12);
  skipCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 1;
  if ( !skipCollider )
    goto LABEL_100;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)skipCollider, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.baseLvMax = (int)skipCollider;
  if ( !baseUsrSvtData )
    goto LABEL_100;
  currentSvtEqLvLb = this->fields.currentSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)baseUsrSvtData + 256, 0);
  if ( !currentSvtEqLvLb )
    goto LABEL_100;
  UIExtrusionLabel__set_text(currentSvtEqLvLb, (System_String_o *)skipCollider, 0);
  currentSvtEqMaxLvLb = this->fields.currentSvtEqMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 720, 0);
  if ( !currentSvtEqMaxLvLb )
    goto LABEL_100;
  UILabel__set_text(currentSvtEqMaxLvLb, (System_String_o *)skipCollider, 0);
  v16 = this->fields.baseUsrSvtData;
  if ( !v16 )
    goto LABEL_100;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v16 + 256, 0);
  if ( !resSvtEqLvLb )
    goto LABEL_100;
  UIExtrusionLabel__set_text(resSvtEqLvLb, (System_String_o *)skipCollider, 0);
  resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 720, 0);
  if ( !resSvtEqMaxLvLb )
    goto LABEL_100;
  UILabel__set_text(resSvtEqMaxLvLb, (System_String_o *)skipCollider, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLvLb;
  if ( !skipCollider )
    goto LABEL_100;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)skipCollider,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resLvWidget, (int32_t)Component_object, v20, v21);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqMaxLvLb;
  if ( !skipCollider )
    goto LABEL_100;
  v22 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resMaxLvWidget, (int32_t)v22, v24, v25);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqHpLb;
  if ( !skipCollider )
    goto LABEL_100;
  v26 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v26;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resHpWidget, (int32_t)v26, v28, v29);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqAtkLb;
  if ( !skipCollider )
    goto LABEL_100;
  v30 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v30;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resAtkWidget, (int32_t)v30, v32, v33);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_100;
  v91.fields.r = 1.0;
  v91.fields.g = 1.0;
  v91.fields.b = 1.0;
  v91.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v91, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_100;
  v92.fields.r = 1.0;
  v92.fields.g = 1.0;
  v92.fields.b = 1.0;
  v92.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v92, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_100;
  v93.fields.r = 1.0;
  v93.fields.g = 1.0;
  v93.fields.b = 1.0;
  v93.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v93, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_100;
  v94.fields.r = 1.0;
  v94.fields.g = 1.0;
  v94.fields.b = 1.0;
  v94.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v94, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_100;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_100;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_65028652(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_397/*"#,0"*/,
                                             0);
  if ( !currentSvtEqExpValLb )
    goto LABEL_100;
  UILabel__set_text(currentSvtEqExpValLb, (System_String_o *)skipCollider, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqCrExpBar;
  if ( !skipCollider )
    goto LABEL_100;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_100;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0);
  if ( !skipCollider )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_100;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)skipCollider, 0);
  v35 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_100;
  v36 = (int)skipCollider;
  v38 = *(_QWORD *)&v35->fields.limitCount.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v35->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v89.fields.currentCryptoKey = v38;
  *(_QWORD *)&v89.fields.fakeValue = v37;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v89, 0);
  v39 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v39 )
    goto LABEL_100;
  v40 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = v39->fields.hp;
  this->fields.baseAtkVal = v39->fields.atk;
  if ( !skipCollider )
    goto LABEL_100;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v36, v40, transform, v42);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_100;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_100;
  baseLimitCnt = this->fields.baseLimitCnt;
  v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v36, baseLimitCnt, v44, v45);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_100;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0);
  v46 = this->fields.baseUsrSvtData;
  if ( !v46 )
    goto LABEL_100;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_65028652(
                                             (int)v46 + 268,
                                             (System_String_o *)StringLiteral_9231/*"N0"*/,
                                             0);
  if ( !currentSvtEqHpLb )
    goto LABEL_100;
  UILabel__set_text(currentSvtEqHpLb, (System_String_o *)skipCollider, 0);
  v48 = this->fields.baseUsrSvtData;
  if ( !v48 )
    goto LABEL_100;
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_65028652(
                                             (int)v48 + 268,
                                             (System_String_o *)StringLiteral_9231/*"N0"*/,
                                             0);
  if ( !resSvtEqHpLb )
    goto LABEL_100;
  UILabel__set_text(resSvtEqHpLb, (System_String_o *)skipCollider, 0);
  v50 = this->fields.baseUsrSvtData;
  if ( !v50 )
    goto LABEL_100;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_65028652(
                                             (int)v50 + 264,
                                             (System_String_o *)StringLiteral_9231/*"N0"*/,
                                             0);
  if ( !currentSvtEqAtkLb )
    goto LABEL_100;
  UILabel__set_text(currentSvtEqAtkLb, (System_String_o *)skipCollider, 0);
  v52 = this->fields.baseUsrSvtData;
  if ( !v52 )
    goto LABEL_100;
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_65028652(
                                             (int)v52 + 264,
                                             (System_String_o *)StringLiteral_9231/*"N0"*/,
                                             0);
  if ( !resSvtEqAtkLb )
    goto LABEL_100;
  UILabel__set_text(resSvtEqAtkLb, (System_String_o *)skipCollider, 0);
  normalExpLb = this->fields.normalExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_65028652(
                                             (int32_t)&v88,
                                             (System_String_o *)StringLiteral_9231/*"N0"*/,
                                             0);
  if ( !normalExpLb )
    goto LABEL_100;
  UILabel__set_text(normalExpLb, (System_String_o *)skipCollider, 0);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_65028652(
                                             (int32_t)&v88,
                                             (System_String_o *)StringLiteral_9231/*"N0"*/,
                                             0);
  if ( !normalExpOverSpLb )
    goto LABEL_100;
  UILabel__set_text(normalExpOverSpLb, (System_String_o *)skipCollider, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpLb;
  if ( !skipCollider )
    goto LABEL_100;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !skipCollider )
    goto LABEL_100;
  v95.fields.r = 1.0;
  v95.fields.g = 1.0;
  v95.fields.b = 1.0;
  v95.fields.a = 1.0;
  v56 = (UIWidget_o *)skipCollider;
  UIWidget__set_color((UIWidget_o *)skipCollider, v95, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_100;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_100;
  v57 = (UIWidget_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_100;
  v58 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0);
  if ( !skipCollider )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  if ( !v58 )
    goto LABEL_100;
  v59 = UnityEngine_GameObject__GetComponent_object_(
          v58,
          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v60 = UnityEngine_GameObject__GetComponent_object_(
          v58,
          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.successInfoLabel;
    if ( !skipCollider )
      goto LABEL_100;
    UILabel__set_text((UILabel_o *)skipCollider, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_93;
  }
  v61 = v60;
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_100;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0);
  if ( !skipCollider )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  successInfoLabel = this->fields.successInfoLabel;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( resInfo == 2 )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v64 = &StringLiteral_8252/*"LARGE_SUCCESS_INFO_TITLE"*/;
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v64 = &StringLiteral_12479/*"SUPER_SUCCESS_INFO_TITLE"*/;
  }
  skipCollider = (UnityEngine_Collider_o *)LocalizationManager__Get((System_String_o *)*v64, 0);
  if ( !successInfoLabel )
    goto LABEL_100;
  UILabel__set_text(successInfoLabel, (System_String_o *)skipCollider, 0);
  v65 = SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v65 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color(v56, v65->static_fields->COLOR_VAL, 0);
  if ( !v57 )
    goto LABEL_100;
  UIWidget__set_color(v57, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0, 0);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_100;
    LODWORD(v59[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v59, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v61, 0, 0);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v61 )
      goto LABEL_100;
    LODWORD(v61[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v61, 0);
  }
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int32_t)&v88, 0);
  if ( !skipCollider )
    goto LABEL_100;
  m_CachedPtr = skipCollider->fields.m_CachedPtr;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v66, v67, v68, v69, v70, v71);
  skipCollider = (UnityEngine_Collider_o *)System_String__Format((System_String_o *)StringLiteral_4578/*"CombineSuccessEffect_{0:D2}"*/, v72, 0);
  if ( !this->fields.dispNodeObj )
    goto LABEL_100;
  v73 = (System_String_o *)skipCollider;
  v74 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0);
  skipCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__GetEffect(v73, v74, 0);
  if ( !skipCollider
    || (v75 = (UnityEngine_GameObject_o *)skipCollider,
        skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)skipCollider,
                                                   0),
        !this->fields.dispNodeObj)
    || (v76 = (UnityEngine_Transform_o *)skipCollider,
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skipCollider, 0), !v76) )
  {
LABEL_100:
    sub_1C32E7C(skipCollider);
  }
  UnityEngine_Transform__set_localPosition(v76, localPosition, 0);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v75,
                                 (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v78 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v75,
          (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)ComponentInChildren_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_100;
    SimpleAnimation__Play((SimpleAnimation_o *)ComponentInChildren_object, 0);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v78, 0, 0);
    if ( ((unsigned __int8)skipCollider & 1) != 0 )
    {
      if ( !v78 )
        goto LABEL_100;
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v78, 0);
    }
  }
LABEL_93:
  addExpLb = this->fields.addExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_65028652(
                                             (int32_t)&v87,
                                             (System_String_o *)StringLiteral_9231/*"N0"*/,
                                             0);
  if ( !addExpLb )
    goto LABEL_100;
  UILabel__set_text(addExpLb, (System_String_o *)skipCollider, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.msgInfo;
  if ( !skipCollider )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.AdjustInfo;
  if ( !skipCollider )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  svtEqLvInfo = this->fields.svtEqLvInfo;
  this->fields.lvUpInfo = svtEqLvInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.lvUpInfo, (int32_t)svtEqLvInfo, v81, v82);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtEqCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !skipCollider )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  v83 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v83, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0, 0);
}


void SvtCombineResultWindowComponent__setLimitCntInfo(
        SvtCombineResultWindowComponent_o *this,
        int32_t maxLimitCnt,
        int32_t svtLimitCnt,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int32_t v9; // w26
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v11; // x24
  UnityEngine_Transform_o *v12; // x25

  if ( (byte_4C3BA95 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
    byte_4C3BA95 = 1;
  }
  if ( maxLimitCnt >= 1 )
  {
    v9 = 0;
    do
    {
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.limitCntInfoObject, root, 0, 0);
      if ( !Object )
        goto LABEL_12;
      v11 = Object;
      Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0);
      v12 = (UnityEngine_Transform_o *)Object;
      if ( !byte_4C313D1 )
      {
        Object = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      if ( !v12
        || (UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v11,
                                                    (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0) )
      {
LABEL_12:
        sub_1C32E7C(Object);
      }
      SetLimitCntInfoComponent__setEnableOnImg((SetLimitCntInfoComponent_o *)Object, v9++ < svtLimitCnt, 0);
    }
    while ( maxLimitCnt != v9 );
  }
}


void SvtCombineResultWindowComponent__setResAdjustAtkInfo(
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
  __int64 v11; // x9
  int32_t StatusUpAdjustAtk; // w23
  int v13; // w24
  int32_t v14; // w8
  int32_t v15; // w21
  int32_t v16; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  int32_t v18; // w8
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3BA8B & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BA8B = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       resAdjustAtkIconLabel,
                                                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  v19.fields.r = 1.0;
  v19.fields.g = 1.0;
  v19.fields.b = 1.0;
  v19.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustAtkIconLabel, v19, 0);
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
  v11 = 796;
  if ( !v10 )
    v11 = 804;
  StatusUpAdjustAtk = v7->static_fields->StatusUpAdjustAtk;
  v13 = *(_DWORD *)((char *)&this->klass + v11);
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
  UIIconLabel__Set_41010828((UIIconLabel_o *)resAdjustAtkIconLabel, 45, v15, v14 * v13, 0, 0, 0, 0, 0, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_65028480((_DWORD)baseUsrSvtData + 272, targetData->fields.adjustAtk, 0) )
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
      0);
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkMaxLabel;
  if ( !resAdjustAtkIconLabel )
LABEL_21:
    sub_1C32E7C(resAdjustAtkIconLabel);
  UILabel__set_text((UILabel_o *)resAdjustAtkIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void SvtCombineResultWindowComponent__setResAdjustHpInfo(
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

  if ( (byte_4C3BA8A & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BA8A = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  resAdjustHpIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      resAdjustHpIconLabel,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  v19.fields.r = 1.0;
  v19.fields.g = 1.0;
  v19.fields.b = 1.0;
  v19.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustHpIconLabel, v19, 0);
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
  v11 = 792;
  if ( !v10 )
    v11 = 800;
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
  UIIconLabel__Set_41010828((UIIconLabel_o *)resAdjustHpIconLabel, 44, v15, v14 * v13, 0, 0, 0, 0, 0, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_65028480((_DWORD)baseUsrSvtData + 276, targetData->fields.adjustHp, 0) )
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
      0);
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpMaxLabel;
  if ( !resAdjustHpIconLabel )
LABEL_21:
    sub_1C32E7C(resAdjustHpIconLabel);
  UILabel__set_text((UILabel_o *)resAdjustHpIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


int32_t SvtCombineResultWindowComponent__setSvtExp(
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

  if ( (byte_4C3BA8E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3BA8E = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
                                           0);
  v12 = this->fields.baseSvtData;
  if ( !v12 )
    goto LABEL_26;
  v13 = (int)resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(
                                           v11,
                                           v12->fields.expType,
                                           (int32_t)resUsrSvtData,
                                           0);
  v14 = this->fields.baseSvtData;
  if ( !v14 )
    goto LABEL_26;
  v15 = resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(v11, v14->fields.expType, v13 - 1, 0);
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
    sub_1C32E7C(resUsrSvtData);
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
  UIProgressBar__set_value((UIProgressBar_o *)resUsrSvtData, v17, 0);
  return v13;
}


void SvtCombineResultWindowComponent__showGetExp(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  Il2CppObject *Entity; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UserServantEntity_o *resUsrSvtData; // x8
  UserServantEntity_o *v12; // x8
  int32_t v13; // w1
  const MethodInfo *v14; // x4
  struct UserServantEntity_o *v15; // x9
  struct UserServantEntity_o *v16; // x8
  struct UserServantEntity_o *v17; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Object_array *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x22
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x22
  System_Collections_Hashtable_o *v75; // x0
  struct UserServantEntity_o *v76; // x8
  struct UserServantEntity_o *v77; // x9
  int32_t v78; // w0
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resSvtEqMaxLvLb; // x20
  UIWidget_o *resMaxLvWidget; // x20
  UILabel_o *infoLb; // x20
  System_String_o *v83; // x21
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  __int64 v87; // x5
  __int64 v88; // x6
  __int64 v89; // x7
  Il2CppObject *v90; // x22
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  __int64 v94; // x5
  __int64 v95; // x6
  __int64 v96; // x7
  Il2CppObject *v97; // x0
  int32_t v98; // w20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v100; // x2
  UIWidget_o *resHpWidget; // x20
  int32_t v102; // w0
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v105; // x2
  UIWidget_o *resAtkWidget; // x19
  __int64 v107; // x0
  int v108; // [xsp+Ch] [xbp-44h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-38h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16

  if ( (byte_4C3BA8D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&SvtCombineResultWindowComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_8613/*"MAX_LVUP_TXT"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_15198/*"UpdateValue"*/);
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_13062/*"StartUpdateValue"*/);
    sub_1C32C20(&StringLiteral_22432/*"onstart"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&StringLiteral_6002/*"EndExpUpdateGauge"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3BA8D = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_99;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v111.fields.currentCryptoKey = v7;
  *(_QWORD *)&v111.fields.fakeValue = v6;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v111, 0);
  if ( !v5 )
    goto LABEL_99;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v5,
             Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = (struct ServantEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseSvtData, (int32_t)Entity, v9, v10);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_99;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(resUsrSvtData->fields.limitCount, 0);
  v12 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = Instance;
  if ( !v12 )
    goto LABEL_99;
  Instance = (__int64)UserServantEntity__GetOverwriteStatus(v12, 0, 0);
  if ( !Instance )
    goto LABEL_99;
  v15 = this->fields.resUsrSvtData;
  this->fields.resHpVal = *(_DWORD *)(Instance + 16);
  this->fields.resAtkVal = *(_DWORD *)(Instance + 20);
  if ( !v15 )
    goto LABEL_99;
  v16 = this->fields.baseUsrSvtData;
  if ( !v16 )
    goto LABEL_99;
  Instance = SvtCombineResultWindowComponent__setSvtExp(this, v13, v16->fields.exp, v16->fields.lv, v14);
  v17 = this->fields.baseUsrSvtData;
  if ( !v17 )
    goto LABEL_99;
  this->fields.PrevLevel = v17->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Instance = sub_1C32CC8(object___TypeInfo, 12);
  if ( !Instance )
    goto LABEL_99;
  v21 = (System_Object_array *)Instance;
  v22 = StringLiteral_19689/*"from"*/;
  if ( StringLiteral_19689/*"from"*/ )
  {
    v22 = sub_1C32D5C(StringLiteral_19689/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
    v23 = StringLiteral_19689/*"from"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( !LODWORD(v21->max_length) )
    goto LABEL_117;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1C32BC4((CGThumbnailListItem_o *)v21->m_Items, v23, v19, v20);
  baseLvMax = 0;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &baseLvMax, v24, v25, v26, v27, v28, v29);
  v32 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C32D5C(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
  }
  if ( LODWORD(v21->max_length) <= 1 )
    goto LABEL_117;
  v21->m_Items[1] = v32;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[1], (int32_t)v32, v30, v31);
  v22 = StringLiteral_24106/*"to"*/;
  if ( StringLiteral_24106/*"to"*/ )
  {
    v22 = sub_1C32D5C(StringLiteral_24106/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
    v35 = StringLiteral_24106/*"to"*/;
  }
  else
  {
    v35 = 0;
  }
  if ( LODWORD(v21->max_length) <= 2 )
    goto LABEL_117;
  v21->m_Items[2] = (Il2CppObject *)v35;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[2], v35, v33, v34);
  resLvMax = 1065353216;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &resLvMax, v36, v37, v38, v39, v40, v41);
  v44 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C32D5C(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
  }
  if ( LODWORD(v21->max_length) <= 3 )
    goto LABEL_117;
  v21->m_Items[3] = v44;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[3], (int32_t)v44, v42, v43);
  v22 = StringLiteral_22432/*"onstart"*/;
  if ( StringLiteral_22432/*"onstart"*/ )
  {
    v22 = sub_1C32D5C(StringLiteral_22432/*"onstart"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
    v47 = StringLiteral_22432/*"onstart"*/;
  }
  else
  {
    v47 = 0;
  }
  if ( LODWORD(v21->max_length) <= 4 )
    goto LABEL_117;
  v21->m_Items[4] = (Il2CppObject *)v47;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[4], v47, v45, v46);
  v22 = StringLiteral_13062/*"StartUpdateValue"*/;
  if ( StringLiteral_13062/*"StartUpdateValue"*/ )
  {
    v22 = sub_1C32D5C(StringLiteral_13062/*"StartUpdateValue"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
    v50 = StringLiteral_13062/*"StartUpdateValue"*/;
  }
  else
  {
    v50 = 0;
  }
  if ( LODWORD(v21->max_length) <= 5 )
    goto LABEL_117;
  v21->m_Items[5] = (Il2CppObject *)v50;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[5], v50, v48, v49);
  v22 = StringLiteral_22435/*"onupdate"*/;
  if ( StringLiteral_22435/*"onupdate"*/ )
  {
    v22 = sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
    v53 = StringLiteral_22435/*"onupdate"*/;
  }
  else
  {
    v53 = 0;
  }
  if ( LODWORD(v21->max_length) <= 6 )
    goto LABEL_117;
  v21->m_Items[6] = (Il2CppObject *)v53;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[6], v53, v51, v52);
  v22 = StringLiteral_15198/*"UpdateValue"*/;
  if ( StringLiteral_15198/*"UpdateValue"*/ )
  {
    v22 = sub_1C32D5C(StringLiteral_15198/*"UpdateValue"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
    v56 = StringLiteral_15198/*"UpdateValue"*/;
  }
  else
  {
    v56 = 0;
  }
  if ( LODWORD(v21->max_length) <= 7 )
    goto LABEL_117;
  v21->m_Items[7] = (Il2CppObject *)v56;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[7], v56, v54, v55);
  v22 = StringLiteral_22427/*"oncomplete"*/;
  if ( StringLiteral_22427/*"oncomplete"*/ )
  {
    v22 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
    v59 = StringLiteral_22427/*"oncomplete"*/;
  }
  else
  {
    v59 = 0;
  }
  if ( LODWORD(v21->max_length) <= 8 )
    goto LABEL_117;
  v21->m_Items[8] = (Il2CppObject *)v59;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[8], v59, v57, v58);
  v22 = StringLiteral_6002/*"EndExpUpdateGauge"*/;
  if ( StringLiteral_6002/*"EndExpUpdateGauge"*/ )
  {
    v22 = sub_1C32D5C(StringLiteral_6002/*"EndExpUpdateGauge"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
    v62 = StringLiteral_6002/*"EndExpUpdateGauge"*/;
  }
  else
  {
    v62 = 0;
  }
  if ( LODWORD(v21->max_length) <= 9 )
    goto LABEL_117;
  v21->m_Items[9] = (Il2CppObject *)v62;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[9], v62, v60, v61);
  v22 = StringLiteral_24067/*"time"*/;
  if ( StringLiteral_24067/*"time"*/ )
  {
    v22 = sub_1C32D5C(StringLiteral_24067/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_118;
    v65 = StringLiteral_24067/*"time"*/;
  }
  else
  {
    v65 = 0;
  }
  if ( LODWORD(v21->max_length) <= 0xA )
    goto LABEL_117;
  v21->m_Items[10] = (Il2CppObject *)v65;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[10], v65, v63, v64);
  v108 = 0x40000000;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v108, v66, v67, v68, v69, v70, v71);
  v74 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1C32D5C(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_118:
      v107 = sub_1C32EA0(v22);
      sub_1C32D48(v107, 0);
    }
  }
  if ( LODWORD(v21->max_length) <= 0xB )
LABEL_117:
    sub_1C32E84(v22);
  v21->m_Items[11] = v74;
  sub_1C32BC4((CGThumbnailListItem_o *)&v21->m_Items[11], (int32_t)v74, v72, v73);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v75 = iTween__Hash(v21, 0);
  iTween__ValueTo(gameObject, v75, 0);
  if ( this->fields.baseLimitCnt != this->fields.resLimitCnt )
  {
    if ( this->fields.isEqCombine )
      resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
    else
      resSvtEqMaxLvLb = this->fields.resMaxLvLb;
    Instance = (__int64)System_Int32__ToString((int)this + 724, 0);
    if ( !resSvtEqMaxLvLb )
      goto LABEL_99;
    UILabel__set_text(resSvtEqMaxLvLb, (System_String_o *)Instance, 0);
    resMaxLvWidget = this->fields.resMaxLvWidget;
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resMaxLvWidget )
      goto LABEL_99;
    UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0);
    infoLb = this->fields.infoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_8613/*"MAX_LVUP_TXT"*/, 0);
    baseLvMax = this->fields.baseLvMax;
    v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseLvMax, v84, v85, v86, v87, v88, v89);
    resLvMax = this->fields.resLvMax;
    v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &resLvMax, v91, v92, v93, v94, v95, v96);
    Instance = (__int64)System_String__Format_63559836(v83, v90, v97, 0);
    if ( !infoLb )
      goto LABEL_99;
    UILabel__set_text(infoLb, (System_String_o *)Instance, 0);
    Instance = (__int64)this->fields.infoLb;
    if ( !Instance )
      goto LABEL_99;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (__int64)this->fields.infoLb;
    if ( !Instance )
      goto LABEL_99;
    Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_99;
    UITweener__PlayForward((UITweener_o *)Instance, 0);
    Instance = (__int64)this->fields.resLimitCntList;
    if ( !Instance )
      goto LABEL_99;
    v98 = 0;
    while ( v98 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v98,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Instance )
        {
          SetLimitCntInfoComponent__setEnableOnImg(
            (SetLimitCntInfoComponent_o *)Instance,
            v98 < this->fields.resLimitCnt,
            0);
          Instance = (__int64)this->fields.resLimitCntList;
          ++v98;
          if ( Instance )
            continue;
        }
      }
      goto LABEL_99;
    }
  }
  v76 = this->fields.baseUsrSvtData;
  if ( !v76 )
    goto LABEL_99;
  v77 = this->fields.resUsrSvtData;
  if ( !v77 )
    goto LABEL_99;
  if ( v76->fields.lv != v77->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    v78 = (_DWORD)this + 732;
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      Instance = (__int64)System_Int32__ToString_65028652(v78, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
      if ( !resSvtEqHpLb )
        goto LABEL_99;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)Instance, 0);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      Instance = (__int64)System_Int32__ToString_65028652(v78, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
      if ( !resHpLb )
        goto LABEL_99;
      UILabel__set_text(resHpLb, (System_String_o *)Instance, 0);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v100);
    }
    resHpWidget = this->fields.resHpWidget;
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
      Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resHpWidget )
      goto LABEL_99;
    UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  v102 = (_DWORD)this + 740;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    Instance = (__int64)System_Int32__ToString_65028652(v102, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
    if ( !resSvtEqAtkLb )
      goto LABEL_99;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)Instance, 0);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    Instance = (__int64)System_Int32__ToString_65028652(v102, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
    if ( !resAtkLb )
      goto LABEL_99;
    UILabel__set_text(resAtkLb, (System_String_o *)Instance, 0);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v105);
  }
  resAtkWidget = this->fields.resAtkWidget;
  Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resAtkWidget )
LABEL_99:
    sub_1C32E7C(Instance);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0);
}


void SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4C3BA92 & 1) == 0 )
  {
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3BA92 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63266448(gameObject, 0);
  SvtCombineResultWindowComponent__UpdateValue(this, 1.0, v6);
  ActionExtensions__Call(callback, 0);
}


void SvtCombineResultWindowComponent___c__DisplayClass131_0___ctor(
        SvtCombineResultWindowComponent___c__DisplayClass131_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SvtCombineResultWindowComponent___c__DisplayClass131_0___EndOpen_b__0(
        SvtCombineResultWindowComponent___c__DisplayClass131_0_o *this,
        const MethodInfo *method)
{
  struct SvtCombineResultWindowComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(this);
  *(_WORD *)&_4__this->fields.isAtkLimitUp = 0;
  ActionExtensions__Call(this->fields.callback, 0);
}