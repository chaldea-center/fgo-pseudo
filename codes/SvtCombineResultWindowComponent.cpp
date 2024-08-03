void __fastcall SvtCombineResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct SvtCombineResultWindowComponent_StaticFields *static_fields; // x0
  struct SvtCombineResultWindowComponent_StaticFields *v8; // x0
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FFCC5 & 1) == 0 )
  {
    sub_1B640C8(&SvtCombineResultWindowComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_4574/*"Combine/"*/, v4);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v5);
    byte_49FFCC5 = 1;
  }
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_BA3BD0;
  v6 = StringLiteral_4574/*"Combine/"*/;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4574/*"Combine/"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->TUTORIAL_FOLDER, v6, v2, v3);
  v8 = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&v8->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = 0x1A00000019LL;
  v8->SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 27;
  v9 = StringLiteral_1213/*"0"*/;
  v8->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1213/*"0"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->INIT_VAL_TXT, v9, v10, v11);
}


void __fastcall SvtCombineResultWindowComponent___ctor(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFCC4 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FFCC4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FFCC3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SvtCombineResultWindowComponent_EndDisp__, v3);
    byte_49FFCC3 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_1B64324(0LL);
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0LL) )
  {
    v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
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

  if ( (byte_49FFCC1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SvtCombineResultWindowComponent_EndClose__, v4);
    byte_49FFCC1 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  SvtCombineResultWindowComponent__Close_44659408(this, v6, v7);
}


void __fastcall SvtCombineResultWindowComponent__Close_44659408(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49FFCC2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_SvtCombineResultWindowComponent_EndClose__, v4);
    byte_49FFCC2 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, callback, method);
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
    sub_1B64324(0LL);
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

  if ( (byte_49FFCB9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    sub_1B640C8(&Method_SvtCombineResultWindowComponent_EndOpen__, v4);
    byte_49FFCB9 = 1;
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
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v10, 1, 0LL);
      return;
    }
LABEL_11:
    sub_1B64324(skipCollider);
  }
  SvtCombineResultWindowComponent__EndOpen(this, v6);
}


void __fastcall SvtCombineResultWindowComponent__EndOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Action_o *openCallBack; // x19
  __int64 v11; // x19
  SvtCombineResultWindowComponent_c *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Action_o *endTutorialCallBack; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x0
  __int64 v19; // x1
  _BOOL4 isHpLimitUp; // w9
  _BOOL4 isAtkLimitUp; // w8
  System_Int32_array *v22; // x20
  uint32_t cctor_finished; // w9
  int32_t *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL; // x8
  Il2CppObject *Instance; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x22

  if ( (byte_49FFCC0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&SvtCombineResultWindowComponent_TypeInfo, v7);
    sub_1B640C8(&Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__, v8);
    sub_1B640C8(&SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, v9);
    byte_49FFCC0 = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
  if ( this->fields.endTutorialCallBack )
  {
    v11 = sub_1B64314(SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
    if ( !v11 )
      goto LABEL_31;
    endTutorialCallBack = this->fields.endTutorialCallBack;
    *(_QWORD *)(v11 + 16) = endTutorialCallBack;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)endTutorialCallBack, v13, v14);
    this->fields.endTutorialCallBack = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endTutorialCallBack, 0, v16, v17);
    if ( this->fields.isHpLimitUp || this->fields.isAtkLimitUp )
    {
      v18 = sub_1B64170(int___TypeInfo, 1LL);
      isHpLimitUp = this->fields.isHpLimitUp;
      isAtkLimitUp = this->fields.isAtkLimitUp;
      v22 = (System_Int32_array *)v18;
      if ( isHpLimitUp )
      {
        v12 = SvtCombineResultWindowComponent_TypeInfo;
        cctor_finished = SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished;
        if ( isAtkLimitUp )
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v12 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v22 )
            goto LABEL_31;
          if ( v22->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v12->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_28:
            v22->m_Items[1] = *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_29:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
            System_Action___ctor(
              v28,
              (Il2CppObject *)v11,
              Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__OpenImageDialogAssets((CommonUI_o *)Instance, v22, 2, v28, 0LL);
              return;
            }
LABEL_31:
            sub_1B64324(v12);
          }
        }
        else
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v12 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v22 )
            goto LABEL_31;
          if ( v22->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v12->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
            goto LABEL_28;
          }
        }
      }
      else
      {
        if ( !isAtkLimitUp )
          goto LABEL_29;
        v12 = SvtCombineResultWindowComponent_TypeInfo;
        if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
          v12 = SvtCombineResultWindowComponent_TypeInfo;
        }
        if ( !v22 )
          goto LABEL_31;
        if ( v22->max_length )
        {
          p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v12->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
          goto LABEL_28;
        }
      }
      sub_1B6432C(v12, v19);
    }
  }
}


void __fastcall SvtCombineResultWindowComponent__InitStateInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x20

  if ( (byte_49FFCAF & 1) == 0 )
  {
    sub_1B640C8(&SvtCombineResultWindowComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FFCAF = 1;
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
    sub_1B64324(currentMaxLvLb);
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
  __int64 resUsrSvtData; // x0
  int v9; // w20
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v13; // x9
  float v14; // s2
  float exp; // s9
  float v16; // s1
  float v17; // s10
  float v18; // s9
  unsigned int v19; // w10
  int32_t v20; // w21
  float v21; // s0
  float Epsilon; // s4
  float v23; // s1
  struct UserServantEntity_o *v24; // x8
  struct UserServantEntity_o *v25; // x8
  struct UserServantEntity_o *v26; // x8
  int32_t v27; // w21
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  UITweener_o *v30; // x20
  _BOOL4 isEqCombine; // w8
  UIExtrusionLabel_o *v32; // x20
  UIWidget_o *resLvWidget; // x20
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v36; // x2
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v40; // x2
  UIWidget_o *resAtkWidget; // x19
  int32_t afterAtk; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t afterHp; // [xsp+8h] [xbp-48h] BYREF
  int32_t increLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FFCB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1B640C8(&Method_SvtCombineResultWindowComponent_UpdateValue__, v5);
    sub_1B640C8(&SvtCombineResultWindowComponent_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v7);
    byte_49FFCB8 = 1;
  }
  afterAtk = 0;
  afterHp = 0;
  resUsrSvtData = (__int64)this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_66;
  resUsrSvtData = UserServantEntity__getLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_66;
  v9 = resUsrSvtData;
  UnityEngine_Collider__set_enabled(this->fields.skipCollider, 1, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_66;
  v13 = this->fields.resUsrSvtData;
  if ( !v13 )
    goto LABEL_66;
  v14 = fminf(val, 1.0);
  exp = (float)baseUsrSvtData->fields.exp;
  if ( val < 0.0 )
    v16 = 0.0;
  else
    v16 = v14;
  v17 = v16 * (float)((float)v13->fields.exp - exp);
  if ( !byte_49F7110 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v10);
    byte_49F7110 = 1;
  }
  v18 = v17 + exp;
  resUsrSvtData = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v19 = vcvtms_s32_f32(v18);
  if ( floorf(v18) == INFINITY )
    v20 = 0x80000000;
  else
    v20 = v19;
  if ( !byte_49F7115 )
  {
    resUsrSvtData = sub_1B640C8(&UnityEngine_Mathf_TypeInfo, v10);
    byte_49F7115 = 1;
  }
  v21 = fmaxf(fabsf(val), 1.0) * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  v23 = fabsf(val + -1.0);
  if ( v21 <= (float)(Epsilon * 8.0) )
    v21 = Epsilon * 8.0;
  if ( v23 >= v21 )
  {
    if ( !this->fields.resUsrSvtData )
      goto LABEL_66;
  }
  else
  {
    v24 = this->fields.resUsrSvtData;
    if ( !v24 )
      goto LABEL_66;
    v20 = v24->fields.exp;
  }
  v25 = this->fields.baseUsrSvtData;
  if ( !v25 )
    goto LABEL_66;
  resUsrSvtData = SvtCombineResultWindowComponent__setSvtExp(this, v10, v20, v25->fields.lv, v11);
  increLv = resUsrSvtData;
  v26 = this->fields.baseUsrSvtData;
  if ( !v26 )
    goto LABEL_66;
  if ( v26->fields.lv == v9 )
    return;
  v27 = resUsrSvtData;
  if ( !this->fields.isUpdateGauge )
  {
    v28 = Method_SvtCombineResultWindowComponent_UpdateValue__;
    if ( (*((_BYTE *)Method_SvtCombineResultWindowComponent_UpdateValue__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B640E0(Method_SvtCombineResultWindowComponent_UpdateValue__);
    v29 = (System_Reflection_MethodBase_o *)sub_1B640AC(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 3, 0LL);
    this->fields.isUpdateGauge = 1;
  }
  if ( v27 == this->fields.PrevLevel )
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
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !resUsrSvtData )
    goto LABEL_66;
  v30 = (UITweener_o *)resUsrSvtData;
  UITweener__ResetToBeginning((UITweener_o *)resUsrSvtData, 0LL);
  UITweener__PlayForward(v30, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v27;
  this->fields.endDispLvInfoFlg = 0;
  v32 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  resUsrSvtData = (__int64)System_Int32__ToString((int32_t)&increLv, 0LL);
  if ( !v32 )
    goto LABEL_66;
  UIExtrusionLabel__set_text(v32, (System_String_o *)resUsrSvtData, 0LL);
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
      resUsrSvtData = (__int64)System_Int32__ToString_62180668(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9164/*"N0"*/,
                                 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_66;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)resUsrSvtData, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      resUsrSvtData = (__int64)System_Int32__ToString_62180668(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9164/*"N0"*/,
                                 0LL);
      if ( !resHpLb )
        goto LABEL_66;
      UILabel__set_text(resHpLb, (System_String_o *)resUsrSvtData, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v36);
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
    resUsrSvtData = (__int64)System_Int32__ToString_62180668(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9164/*"N0"*/,
                               0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_66;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)resUsrSvtData, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    resUsrSvtData = (__int64)System_Int32__ToString_62180668(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9164/*"N0"*/,
                               0LL);
    if ( !resAtkLb )
      goto LABEL_66;
    UILabel__set_text(resAtkLb, (System_String_o *)resUsrSvtData, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v40);
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
    sub_1B64324(resUsrSvtData);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(resUsrSvtData + 184), 0LL);
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
  __int64 v11; // x1
  int64_t hiddenValue; // x8
  UserServantEntity_o *v13; // x21
  unsigned __int64 v14; // x23
  int64_t *p_fakeValue; // x24
  int32_t i; // w22
  int32_t v17; // w20
  Il2CppObject *Entity; // x0
  UILabel_o *skillGetInfoTitle; // x21
  SkillEntity_o *v20; // x20
  UILabel_o *skillGetInfoDetail; // x21
  System_String_o *v22; // x22
  Il2CppObject *Name; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *skillGetInfo; // x1
  int64_t currentCryptoKey; // x8
  _QWORD *v28; // x9
  __int64 hiddenValue_low; // x10
  int64_t v30; // x8

  if ( (byte_49FFCBC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_6893/*"GET_SKILL_NAME"*/, v7);
    sub_1B640C8(&StringLiteral_6895/*"GET_SKILL_TITLE"*/, v8);
    byte_49FFCBC = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(baseUsrSvtData, -1, -1, 1, -1, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_30;
  v10 = baseUsrSvtData;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(
                                            this->fields.resUsrSvtData,
                                            -1,
                                            -1,
                                            1,
                                            -1,
                                            0LL);
  if ( !v10 )
    goto LABEL_30;
  hiddenValue = v10->fields.id.fields.hiddenValue;
  if ( (int)hiddenValue < 1 )
    return;
  v13 = baseUsrSvtData;
  v14 = 0LL;
  p_fakeValue = &baseUsrSvtData->fields.id.fields.fakeValue;
  for ( i = (_DWORD)v10 + 32; ; i += 4 )
  {
    if ( !v13 )
      goto LABEL_30;
    if ( v14 >= LODWORD(v13->fields.id.fields.hiddenValue) || v14 >= (unsigned int)hiddenValue )
      goto LABEL_29;
    baseUsrSvtData = (UserServantEntity_o *)System_Int32__Equals_62180496(i, *((_DWORD *)p_fakeValue + v14), 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
      break;
    LODWORD(hiddenValue) = v10->fields.id.fields.hiddenValue;
    if ( (__int64)++v14 >= (int)hiddenValue )
      return;
  }
  if ( (unsigned int)v14 >= LODWORD(v13->fields.id.fields.hiddenValue) )
LABEL_29:
    sub_1B6432C(baseUsrSvtData, v11);
  v17 = *((_DWORD *)&v13->fields.id.fields.fakeValue + v14);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v17,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  v20 = (SkillEntity_o *)Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6895/*"GET_SKILL_TITLE"*/, 0LL);
  if ( !skillGetInfoTitle )
    goto LABEL_30;
  UILabel__set_text(skillGetInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6893/*"GET_SKILL_NAME"*/, 0LL);
  if ( !v20 )
    goto LABEL_30;
  v22 = (System_String_o *)baseUsrSvtData;
  Name = (Il2CppObject *)SkillEntity__getName(v20, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)System_String__Format(v22, Name, 0LL);
  if ( !skillGetInfoDetail
    || (UILabel__set_text(skillGetInfoDetail, (System_String_o *)baseUsrSvtData, 0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.resInfoList) == 0LL)
    || (skillGetInfo = (Il2CppObject *)this->fields.skillGetInfo,
        currentCryptoKey = baseUsrSvtData->fields.id.fields.currentCryptoKey,
        v28 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(baseUsrSvtData->fields.id.fields.hiddenValue),
        !currentCryptoKey) )
  {
LABEL_30:
    sub_1B64324(baseUsrSvtData);
  }
  hiddenValue_low = SLODWORD(baseUsrSvtData->fields.id.fields.hiddenValue);
  if ( (unsigned int)hiddenValue_low >= *(_DWORD *)(currentCryptoKey + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)baseUsrSvtData,
      skillGetInfo,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = currentCryptoKey + 8 * hiddenValue_low;
    LODWORD(baseUsrSvtData->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
    *(_QWORD *)(v30 + 32) = skillGetInfo;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)skillGetInfo, v24, v25);
  }
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
  System_Collections_Generic_List_int__o *v17; // x0
  clsQuestCheck_o *Instance; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v20; // x20
  __int64 v21; // x21
  __int64 v22; // x22
  System_Collections_Generic_List_int__o *v23; // x0
  UILabel_o *storyQuestInfoTitle; // x21
  System_Collections_Generic_List_int__o *v25; // x20
  UILabel_o *heroQuestInfoTitle; // x21
  int32_t i; // w21
  Il2CppObject *MasterData_object; // x22
  int monitor; // w8
  clsQuestCheck_o *v30; // x22
  UILabel_o *storyQuestInfoDetail; // x23
  System_String_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *heroQuestInfo; // x1
  UILabel_o *heroQuestInfoDetail; // x23
  System_String_o *v37; // x0
  UILabel_o *eventQuestInfoDetail; // x23
  System_String_o *v39; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x8
  _QWORD *v41; // x9
  __int64 cQuestReleaseListP_low; // x10
  __int64 v43; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_49FFCBB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_1B640C8(&StringLiteral_9604/*"OPEN_STORY_QUEST_TITLE"*/, v14);
    sub_1B640C8(&StringLiteral_9590/*"OPEN_EVENT_QUEST_NAME"*/, v15);
    sub_1B640C8(&StringLiteral_9593/*"OPEN_HERO_QUEST_TITLE"*/, v16);
    byte_49FFCBB = 1;
  }
  this->fields.isOpenQuest = 0;
  v17 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_43;
  v20 = Instance;
  v22 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v22;
  *(_QWORD *)&v44.fields.fakeValue = v21;
  Instance = (clsQuestCheck_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
  if ( !v20 )
    goto LABEL_43;
  v23 = clsQuestCheck__GetReleaseQuestIdByServantLv(v20, (int32_t)Instance, this->fields.baseSvtCollectionLv, 0LL);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v25 = v23;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9604/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, (System_String_o *)Instance, 0LL),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9593/*"OPEN_HERO_QUEST_TITLE"*/, 0LL),
        !heroQuestInfoTitle) )
  {
LABEL_43:
    sub_1B64324(Instance);
  }
  UILabel__set_text(heroQuestInfoTitle, (System_String_o *)Instance, 0LL);
  if ( v25 && v25->fields._size >= 1 )
  {
    for ( i = 0; i < v25->fields._size; ++i )
    {
      if ( System_Collections_Generic_List_int___get_Item(
             v25,
             i,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
      {
        Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
        Instance = (clsQuestCheck_o *)System_Collections_Generic_List_int___get_Item(
                                        v25,
                                        i,
                                        (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !MasterData_object )
          goto LABEL_43;
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        (int32_t)Instance,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_43;
        monitor = (int)Instance[1].monitor;
        v30 = Instance;
        switch ( monitor )
        {
          case 6:
            heroQuestInfoDetail = this->fields.heroQuestInfoDetail;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9590/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v37,
                                            (Il2CppObject *)v30->fields.cQuestReleaseListP,
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
            v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9590/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v39,
                                            (Il2CppObject *)v30->fields.cQuestReleaseListP,
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
            v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9590/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v32,
                                            (Il2CppObject *)v30->fields.cQuestReleaseListP,
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
            v41 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++HIDWORD(Instance->fields.cQuestReleaseListP);
            if ( !qrs )
              goto LABEL_43;
            cQuestReleaseListP_low = SLODWORD(Instance->fields.cQuestReleaseListP);
            if ( (unsigned int)cQuestReleaseListP_low >= qrs->fields._size )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                heroQuestInfo,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = (__int64)qrs + 8 * cQuestReleaseListP_low;
              LODWORD(Instance->fields.cQuestReleaseListP) = cQuestReleaseListP_low + 1;
              *(_QWORD *)(v43 + 32) = heroQuestInfo;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 32), (int32_t)heroQuestInfo, v33, v34);
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

  if ( (byte_49FFCBE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFCBE = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1B64324(currentLimitCntGrid);
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
      UnityEngine_Object__Destroy_69127736(v10, 0LL);
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

  if ( (byte_49FFCBF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFCBF = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1B64324(resLimitCntGrid);
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
      UnityEngine_Object__Destroy_69127736(v10, 0LL);
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
    sub_1B64324(0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w0
  _BOOL4 isEqCombine; // w8
  int32_t childCount; // w23
  UnityEngine_Transform_o *transform; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x26
  struct System_Collections_Generic_List_GameObject__o **p_resLimitCntList; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w26
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *v34; // x8
  struct System_Object_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  UserServantEntity_o *v38; // x1
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  struct UserServantEntity_o *v47; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x20
  __int64 v49; // x21
  __int64 v50; // x22
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_49FFCB5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, resData);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FFCB5 = 1;
  }
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_1B6406C(
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
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = &this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resLimitCntList, (int32_t)v25, v27, v28);
  if ( childCount >= 1 )
  {
    if ( transform )
    {
      v31 = 0;
      while ( 1 )
      {
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Transform__GetChild(transform, v31, 0LL);
        if ( !resUsrSvtData )
          break;
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)resUsrSvtData,
                                                 0LL);
        v34 = (System_Collections_Generic_List_object__o *)*p_resLimitCntList;
        if ( !*p_resLimitCntList )
          break;
        items = v34->fields._items;
        v36 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v34->fields._version;
        if ( !items )
          break;
        size = v34->fields._size;
        v38 = resUsrSvtData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            (Il2CppObject *)resUsrSvtData,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v38;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v38, v32, v33);
        }
        if ( childCount == ++v31 )
          goto LABEL_23;
      }
    }
LABEL_32:
    sub_1B64324(resUsrSvtData);
  }
LABEL_23:
  this->fields.openCallBack = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v29, v30);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endTutorialCallBack, (int32_t)endTutorialCb, v40, v41);
  v44 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resInfoList, (int32_t)v44, v45, v46);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_32;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v50;
  *(_QWORD *)&v53.fields.fakeValue = v49;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v53, 0LL);
  if ( !v48 )
    goto LABEL_32;
  resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           v48,
                                           (int32_t)resUsrSvtData,
                                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !resUsrSvtData )
    goto LABEL_32;
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
  __int64 v3; // x1
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

  if ( (byte_49FFCB2 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FFCB2 = 1;
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
  UIIconLabel__Set_37921148(
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
    || (UIIconLabel__Set_37921148(
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
    sub_1B64324(baseUsrSvtData);
  }
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v18);
}


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
  int32_t v12; // w2
  int32_t v13; // w3
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x22
  UILabel_o *currentMaxLvLb; // x22
  struct UserServantEntity_o *v17; // x8
  UIExtrusionLabel_o *resLvLb; // x22
  UILabel_o *resMaxLvLb; // x22
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x0
  struct UIWidget_o **p_resHpWidget; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x0
  struct UIWidget_o **p_resAtkWidget; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  UILabel_o *currentExpValLb; // x21
  struct UserServantEntity_o *v36; // x8
  int32_t v37; // w20
  __int64 v38; // x21
  __int64 v39; // x22
  struct UserServantEntity_o *v40; // x8
  int32_t v41; // w21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v43; // x4
  int32_t baseLimitCnt; // w21
  UnityEngine_Transform_o *v45; // x0
  const MethodInfo *v46; // x4
  struct UserServantEntity_o *v47; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v49; // x8
  UILabel_o *resHpLb; // x20
  struct UserServantEntity_o *v51; // x8
  UILabel_o *currentAtkLb; // x20
  struct UserServantEntity_o *v53; // x8
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v55; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x1
  __int64 v60; // x2
  System_Action_o *v61; // x20
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFCB0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SvtCombineResultWindowComponent_EndOpen__, v7);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v8);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v9);
    byte_49FFCB0 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_48;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v12, v13);
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
  v17 = this->fields.baseUsrSvtData;
  if ( !v17 )
    goto LABEL_48;
  resLvLb = this->fields.resLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v17 + 256, 0LL);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resLvWidget, (int32_t)Component_object, v21, v22);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resMaxLvLb;
  if ( !skipCollider )
    goto LABEL_48;
  v23 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resMaxLvWidget, (int32_t)v23, v25, v26);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resHpLb;
  if ( !skipCollider )
    goto LABEL_48;
  v27 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resHpWidget, (int32_t)v27, v29, v30);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resAtkLb;
  if ( !skipCollider )
    goto LABEL_48;
  v31 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resAtkWidget, (int32_t)v31, v33, v34);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_48;
  v65.fields.r = 1.0;
  v65.fields.g = 1.0;
  v65.fields.b = 1.0;
  v65.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v65, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_48;
  v66.fields.r = 1.0;
  v66.fields.g = 1.0;
  v66.fields.b = 1.0;
  v66.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v66, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_48;
  v67.fields.r = 1.0;
  v67.fields.g = 1.0;
  v67.fields.b = 1.0;
  v67.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v67, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_48;
  v68.fields.r = 1.0;
  v68.fields.g = 1.0;
  v68.fields.b = 1.0;
  v68.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v68, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_48;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentExpBar;
  if ( !skipCollider )
    goto LABEL_48;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_430/*"#,0"*/,
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
  v36 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_48;
  v37 = (int)skipCollider;
  v39 = *(_QWORD *)&v36->fields.limitCount.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v39;
  *(_QWORD *)&v64.fields.fakeValue = v38;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v64, 0LL);
  v40 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v40 )
    goto LABEL_48;
  v41 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  this->fields.baseHpVal = v40->fields.hp;
  this->fields.baseAtkVal = v40->fields.atk;
  if ( !skipCollider )
    goto LABEL_48;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v37, v41, transform, v43);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  baseLimitCnt = this->fields.baseLimitCnt;
  v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v37, baseLimitCnt, v45, v46);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v47 = this->fields.baseUsrSvtData;
  if ( !v47 )
    goto LABEL_48;
  currentHpLb = this->fields.currentHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int)v47 + 268,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
                                             0LL);
  if ( !currentHpLb )
    goto LABEL_48;
  UILabel__set_text(currentHpLb, (System_String_o *)skipCollider, 0LL);
  v49 = this->fields.baseUsrSvtData;
  if ( !v49 )
    goto LABEL_48;
  resHpLb = this->fields.resHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int)v49 + 268,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
                                             0LL);
  if ( !resHpLb )
    goto LABEL_48;
  UILabel__set_text(resHpLb, (System_String_o *)skipCollider, 0LL);
  v51 = this->fields.baseUsrSvtData;
  if ( !v51 )
    goto LABEL_48;
  currentAtkLb = this->fields.currentAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int)v51 + 264,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
                                             0LL);
  if ( !currentAtkLb )
    goto LABEL_48;
  UILabel__set_text(currentAtkLb, (System_String_o *)skipCollider, 0LL);
  v53 = this->fields.baseUsrSvtData;
  if ( !v53 )
    goto LABEL_48;
  resAtkLb = this->fields.resAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int)v53 + 264,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
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
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v55);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lvUpInfo, (int32_t)lvInfo, v57, v58);
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
    sub_1B64324(skipCollider);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v61 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v59, v60);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
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
  int32_t v24; // w2
  int32_t v25; // w3
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x23
  UILabel_o *currentSvtEqMaxLvLb; // x23
  struct UserServantEntity_o *v29; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x23
  UILabel_o *resSvtEqMaxLvLb; // x23
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x0
  struct UIWidget_o **p_resHpWidget; // x23
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x0
  struct UIWidget_o **p_resAtkWidget; // x24
  int32_t v45; // w2
  int32_t v46; // w3
  UILabel_o *currentSvtEqExpValLb; // x22
  struct UserServantEntity_o *v48; // x8
  int32_t v49; // w21
  __int64 v50; // x22
  __int64 v51; // x23
  struct UserServantEntity_o *v52; // x8
  int32_t v53; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v55; // x4
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *v57; // x0
  const MethodInfo *v58; // x4
  struct UserServantEntity_o *v59; // x8
  UILabel_o *currentSvtEqHpLb; // x21
  struct UserServantEntity_o *v61; // x8
  UILabel_o *resSvtEqHpLb; // x21
  struct UserServantEntity_o *v63; // x8
  UILabel_o *currentSvtEqAtkLb; // x21
  struct UserServantEntity_o *v65; // x8
  UILabel_o *resSvtEqAtkLb; // x21
  UILabel_o *normalExpLb; // x21
  UILabel_o *normalExpOverSpLb; // x21
  UIWidget_o *v69; // x21
  UIWidget_o *v70; // x22
  UnityEngine_GameObject_o *v71; // x24
  Il2CppObject *v72; // x23
  Il2CppObject *v73; // x0
  Il2CppObject *v74; // x20
  SvtCombineResultWindowComponent_c *v75; // x0
  Il2CppObject *v76; // x0
  System_String_o *v77; // x20
  UnityEngine_Transform_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x20
  UnityEngine_Transform_o *v80; // x21
  int v81; // s0
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v85; // x20
  UILabel_o *addExpLb; // x20
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x1
  __int64 v91; // x2
  System_Action_o *v92; // x20
  intptr_t m_CachedPtr; // [xsp+0h] [xbp-60h] BYREF
  float barExp; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v96; // [xsp+18h] [xbp-48h] BYREF
  int32_t v97; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v96 = addExp;
  v97 = normalExp;
  if ( (byte_49FFCB1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&Method_SvtCombineResultWindowComponent_EndOpen__, v17);
    sub_1B640C8(&SvtCombineResultWindowComponent_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v19);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v20);
    sub_1B640C8(&StringLiteral_4585/*"CombineSuccessEffect_{0:D2}"*/, v21);
    byte_49FFCB1 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v24, v25);
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
  v29 = this->fields.baseUsrSvtData;
  if ( !v29 )
    goto LABEL_90;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v29 + 256, 0LL);
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
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resLvWidget, (int32_t)Component_object, v33, v34);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqMaxLvLb;
  if ( !skipCollider )
    goto LABEL_90;
  v35 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resMaxLvWidget, (int32_t)v35, v37, v38);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqHpLb;
  if ( !skipCollider )
    goto LABEL_90;
  v39 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resHpWidget, (int32_t)v39, v41, v42);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqAtkLb;
  if ( !skipCollider )
    goto LABEL_90;
  v43 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resAtkWidget, (int32_t)v43, v45, v46);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_90;
  v99.fields.r = 1.0;
  v99.fields.g = 1.0;
  v99.fields.b = 1.0;
  v99.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v99, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_90;
  v100.fields.r = 1.0;
  v100.fields.g = 1.0;
  v100.fields.b = 1.0;
  v100.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v100, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_90;
  v101.fields.r = 1.0;
  v101.fields.g = 1.0;
  v101.fields.b = 1.0;
  v101.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v101, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_90;
  v102.fields.r = 1.0;
  v102.fields.g = 1.0;
  v102.fields.b = 1.0;
  v102.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v102, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_90;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_90;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_430/*"#,0"*/,
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
  v48 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_90;
  v49 = (int)skipCollider;
  v51 = *(_QWORD *)&v48->fields.limitCount.fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v98.fields.currentCryptoKey = v51;
  *(_QWORD *)&v98.fields.fakeValue = v50;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v98, 0LL);
  v52 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v52 )
    goto LABEL_90;
  v53 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = v52->fields.hp;
  this->fields.baseAtkVal = v52->fields.atk;
  if ( !skipCollider )
    goto LABEL_90;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v49, v53, transform, v55);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  baseLimitCnt = this->fields.baseLimitCnt;
  v57 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v49, baseLimitCnt, v57, v58);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v59 = this->fields.baseUsrSvtData;
  if ( !v59 )
    goto LABEL_90;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int)v59 + 268,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqHpLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v61 = this->fields.baseUsrSvtData;
  if ( !v61 )
    goto LABEL_90;
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int)v61 + 268,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
                                             0LL);
  if ( !resSvtEqHpLb )
    goto LABEL_90;
  UILabel__set_text(resSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v63 = this->fields.baseUsrSvtData;
  if ( !v63 )
    goto LABEL_90;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int)v63 + 264,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqAtkLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  v65 = this->fields.baseUsrSvtData;
  if ( !v65 )
    goto LABEL_90;
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int)v65 + 264,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
                                             0LL);
  if ( !resSvtEqAtkLb )
    goto LABEL_90;
  UILabel__set_text(resSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  normalExpLb = this->fields.normalExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int32_t)&v97,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
                                             0LL);
  if ( !normalExpLb )
    goto LABEL_90;
  UILabel__set_text(normalExpLb, (System_String_o *)skipCollider, 0LL);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int32_t)&v97,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
                                             0LL);
  if ( !normalExpOverSpLb )
    goto LABEL_90;
  UILabel__set_text(normalExpOverSpLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !skipCollider )
    goto LABEL_90;
  v103.fields.r = 1.0;
  v103.fields.g = 1.0;
  v103.fields.b = 1.0;
  v103.fields.a = 1.0;
  v69 = (UIWidget_o *)skipCollider;
  UIWidget__set_color((UIWidget_o *)skipCollider, v103, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_90;
  v70 = (UIWidget_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_90;
  v71 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  if ( !v71 )
    goto LABEL_90;
  v72 = UnityEngine_GameObject__GetComponent_object_(
          v71,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v73 = UnityEngine_GameObject__GetComponent_object_(
          v71,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
    goto LABEL_83;
  v74 = v73;
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v75 = SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v75 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color(v69, v75->static_fields->COLOR_VAL, 0LL);
  if ( !v70 )
    goto LABEL_90;
  UIWidget__set_color(v70, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v72, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v72 )
      goto LABEL_90;
    LODWORD(v72[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v72, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v74, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v74 )
      goto LABEL_90;
    LODWORD(v74[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v74, 0LL);
  }
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int32_t)&v97, 0LL);
  if ( !skipCollider )
    goto LABEL_90;
  m_CachedPtr = skipCollider->fields.m_CachedPtr;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr);
  skipCollider = (UnityEngine_Collider_o *)System_String__Format((System_String_o *)StringLiteral_4585/*"CombineSuccessEffect_{0:D2}"*/, v76, 0LL);
  if ( !this->fields.dispNodeObj )
    goto LABEL_90;
  v77 = (System_String_o *)skipCollider;
  v78 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL);
  skipCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__getEffect(v77, v78, 0LL);
  if ( !skipCollider
    || (v79 = (UnityEngine_GameObject_o *)skipCollider,
        skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)skipCollider,
                                                   0LL),
        !this->fields.dispNodeObj)
    || (v80 = (UnityEngine_Transform_o *)skipCollider,
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v81 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skipCollider,
                                           0LL),
        !v80) )
  {
LABEL_90:
    sub_1B64324(skipCollider);
  }
  UnityEngine_Transform__set_localPosition(v80, *(UnityEngine_Vector3_o *)&v81, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v79,
                                 (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v85 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v79,
          (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
    skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v85, 0LL, 0LL);
    if ( ((unsigned __int8)skipCollider & 1) != 0 )
    {
      if ( !v85 )
        goto LABEL_90;
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v85, 0LL);
    }
  }
LABEL_83:
  addExpLb = this->fields.addExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_62180668(
                                             (int32_t)&v96,
                                             (System_String_o *)StringLiteral_9164/*"N0"*/,
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lvUpInfo, (int32_t)svtEqLvInfo, v88, v89);
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
  v92 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v90, v91);
  System_Action___ctor(v92, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v92, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setLimitCntInfo(
        SvtCombineResultWindowComponent_o *this,
        int32_t maxLimitCnt,
        int32_t svtLimitCnt,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int32_t v9; // w26
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v11; // x24
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x25

  if ( (byte_49FFCBD & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, *(_QWORD *)&maxLimitCnt);
    byte_49FFCBD = 1;
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
      v11 = Object;
      Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
      v13 = (UnityEngine_Transform_o *)Object;
      if ( !byte_49F7111 )
      {
        Object = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
        byte_49F7111 = 1;
      }
      if ( !v13
        || (UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v11,
                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0LL) )
      {
LABEL_12:
        sub_1B64324(Object);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *resAdjustAtkIconLabel; // x0
  int32_t adjustAtk; // w21
  BalanceConfig_c *v9; // x0
  uint32_t cctor_finished; // w8
  int32_t v11; // w9
  bool v12; // cc
  char *v13; // x9
  int32_t StatusUpAdjustAtk; // w23
  int v15; // w24
  int32_t v16; // w8
  int32_t v17; // w21
  int32_t v18; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  int32_t v20; // w8
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFCB4 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, targetData);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FFCB4 = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       resAdjustAtkIconLabel,
                                                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  v21.fields.r = 1.0;
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v21.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustAtkIconLabel, v21, 0LL);
  if ( !targetData )
    goto LABEL_21;
  adjustAtk = targetData->fields.adjustAtk;
  v9 = BalanceConfig_TypeInfo;
  cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  if ( cctor_finished )
  {
    v11 = targetData->fields.adjustAtk;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
    v11 = targetData->fields.adjustAtk;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  }
  v12 = v11 < this->fields.baseMaxAtkAdjustVal;
  v13 = (char *)&dword_30C;
  if ( !v12 )
    v13 = "GNU";
  StatusUpAdjustAtk = v9->static_fields->StatusUpAdjustAtk;
  v15 = *(_DWORD *)&v13[(_QWORD)this];
  if ( cctor_finished )
  {
    v16 = v9->static_fields->StatusUpAdjustAtk;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v9);
    v16 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  v17 = StatusUpAdjustAtk * adjustAtk;
  v18 = v16 * v15;
  UIIconLabel__Set_37921148((UIIconLabel_o *)resAdjustAtkIconLabel, 45, v17, v16 * v15, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_62180496((_DWORD)baseUsrSvtData + 272, targetData->fields.adjustAtk, 0LL) )
  {
    v20 = targetData->fields.adjustAtk;
    resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
    this->fields.isAtkLimitUp = v20 == this->fields.baseMaxAtkAdjustVal;
    if ( !resAdjustAtkIconLabel )
      goto LABEL_21;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustAtkIconLabel,
      v17,
      v18,
      v20 == this->fields.baseSecondMaxAtkAdjustVal,
      0LL);
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkMaxLabel;
  if ( !resAdjustAtkIconLabel )
LABEL_21:
    sub_1B64324(resAdjustAtkIconLabel);
  UILabel__set_text((UILabel_o *)resAdjustAtkIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__setResAdjustHpInfo(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *targetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *resAdjustHpIconLabel; // x0
  int32_t adjustHp; // w21
  BalanceConfig_c *v9; // x0
  uint32_t cctor_finished; // w8
  int32_t v11; // w9
  bool v12; // cc
  __int64 v13; // x9
  int32_t StatusUpAdjustHp; // w23
  int v15; // w24
  int32_t v16; // w8
  int32_t v17; // w21
  int32_t v18; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  int32_t v20; // w8
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFCB3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, targetData);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FFCB3 = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  resAdjustHpIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      resAdjustHpIconLabel,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  v21.fields.r = 1.0;
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v21.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustHpIconLabel, v21, 0LL);
  if ( !targetData )
    goto LABEL_21;
  adjustHp = targetData->fields.adjustHp;
  v9 = BalanceConfig_TypeInfo;
  cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  if ( cctor_finished )
  {
    v11 = targetData->fields.adjustHp;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
    v11 = targetData->fields.adjustHp;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  }
  v12 = v11 < this->fields.baseMaxHpAdjustVal;
  v13 = 776LL;
  if ( !v12 )
    v13 = 784LL;
  StatusUpAdjustHp = v9->static_fields->StatusUpAdjustHp;
  v15 = *(_DWORD *)((char *)&this->klass + v13);
  if ( cctor_finished )
  {
    v16 = v9->static_fields->StatusUpAdjustHp;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v9);
    v16 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  v17 = StatusUpAdjustHp * adjustHp;
  v18 = v16 * v15;
  UIIconLabel__Set_37921148((UIIconLabel_o *)resAdjustHpIconLabel, 44, v17, v16 * v15, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_62180496((_DWORD)baseUsrSvtData + 276, targetData->fields.adjustHp, 0LL) )
  {
    v20 = targetData->fields.adjustHp;
    resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
    this->fields.isHpLimitUp = v20 == this->fields.baseMaxHpAdjustVal;
    if ( !resAdjustHpIconLabel )
      goto LABEL_21;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustHpIconLabel,
      v17,
      v18,
      v20 == this->fields.baseSecondMaxHpAdjustVal,
      0LL);
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpMaxLabel;
  if ( !resAdjustHpIconLabel )
LABEL_21:
    sub_1B64324(resAdjustHpIconLabel);
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

  if ( (byte_49FFCB7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FFCB7 = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_1B64324(resUsrSvtData);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x20
  __int64 v30; // x21
  __int64 v31; // x22
  Il2CppObject *Entity; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v36; // w1
  const MethodInfo *v37; // x4
  struct UserServantEntity_o *v38; // x8
  int32_t atk; // w9
  struct UserServantEntity_o *v40; // x8
  struct UserServantEntity_o *v41; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  System_Object_array *v45; // x21
  __int64 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x22
  System_Collections_Hashtable_o *v73; // x0
  struct UserServantEntity_o *v74; // x8
  struct UserServantEntity_o *v75; // x9
  int32_t v76; // w0
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resSvtEqMaxLvLb; // x20
  UIWidget_o *resMaxLvWidget; // x20
  UILabel_o *infoLb; // x20
  System_String_o *v81; // x21
  Il2CppObject *v82; // x22
  Il2CppObject *v83; // x0
  int32_t v84; // w20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v86; // x2
  UIWidget_o *resHpWidget; // x20
  int32_t v88; // w0
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v91; // x2
  UIWidget_o *resAtkWidget; // x19
  __int64 v93; // x0
  int v94; // [xsp+Ch] [xbp-44h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-38h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_49FFCB6 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&object___TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&float_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&SvtCombineResultWindowComponent_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v15);
    sub_1B640C8(&StringLiteral_8545/*"MAX_LVUP_TXT"*/, v16);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v17);
    sub_1B640C8(&StringLiteral_5928/*"EndDisp"*/, v18);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v19);
    sub_1B640C8(&StringLiteral_15125/*"UpdateValue"*/, v20);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v21);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v22);
    sub_1B640C8(&StringLiteral_12901/*"StartUpdateValue"*/, v23);
    sub_1B640C8(&StringLiteral_22190/*"onstart"*/, v24);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v25);
    sub_1B640C8(&iTween_TypeInfo, v26);
    byte_49FFCB6 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_97;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v31 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v97.fields.currentCryptoKey = v31;
  *(_QWORD *)&v97.fields.fakeValue = v30;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v97, 0LL);
  if ( !v29 )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v29,
             Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = (struct ServantEntity_o *)Entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSvtData, (int32_t)Entity, v33, v34);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_97;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(resUsrSvtData->fields.limitCount, 0LL);
  v38 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = Instance;
  if ( !v38 )
    goto LABEL_97;
  this->fields.resHpVal = v38->fields.hp;
  atk = v38->fields.atk;
  v40 = this->fields.baseUsrSvtData;
  this->fields.resAtkVal = atk;
  if ( !v40 )
    goto LABEL_97;
  Instance = SvtCombineResultWindowComponent__setSvtExp(this, v36, v40->fields.exp, v40->fields.lv, v37);
  v41 = this->fields.baseUsrSvtData;
  if ( !v41 )
    goto LABEL_97;
  this->fields.PrevLevel = v41->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Instance = sub_1B64170(object___TypeInfo, 12LL);
  if ( !Instance )
    goto LABEL_97;
  v45 = (System_Object_array *)Instance;
  v46 = StringLiteral_19577/*"from"*/;
  if ( StringLiteral_19577/*"from"*/ )
  {
    v46 = sub_1B64204(StringLiteral_19577/*"from"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
    v47 = StringLiteral_19577/*"from"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v45->max_length )
    goto LABEL_115;
  v45->m_Items[0] = (Il2CppObject *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v45->m_Items, v47, v43, v44);
  baseLvMax = 0;
  v46 = j_il2cpp_value_box_0(float_TypeInfo, &baseLvMax);
  v50 = (Il2CppObject *)v46;
  if ( v46 )
  {
    v46 = sub_1B64204(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
  }
  if ( v45->max_length <= 1 )
    goto LABEL_115;
  v45->m_Items[1] = v50;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[1], (int32_t)v50, v48, v49);
  v46 = StringLiteral_23870/*"to"*/;
  if ( StringLiteral_23870/*"to"*/ )
  {
    v46 = sub_1B64204(StringLiteral_23870/*"to"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
    v47 = StringLiteral_23870/*"to"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 2 )
    goto LABEL_115;
  v45->m_Items[2] = (Il2CppObject *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[2], v47, v51, v52);
  resLvMax = 1065353216;
  v46 = j_il2cpp_value_box_0(float_TypeInfo, &resLvMax);
  v55 = (Il2CppObject *)v46;
  if ( v46 )
  {
    v46 = sub_1B64204(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
  }
  if ( v45->max_length <= 3 )
    goto LABEL_115;
  v45->m_Items[3] = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[3], (int32_t)v55, v53, v54);
  v46 = StringLiteral_22190/*"onstart"*/;
  if ( StringLiteral_22190/*"onstart"*/ )
  {
    v46 = sub_1B64204(StringLiteral_22190/*"onstart"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
    v47 = StringLiteral_22190/*"onstart"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 4 )
    goto LABEL_115;
  v45->m_Items[4] = (Il2CppObject *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[4], v47, v56, v57);
  v46 = StringLiteral_12901/*"StartUpdateValue"*/;
  if ( StringLiteral_12901/*"StartUpdateValue"*/ )
  {
    v46 = sub_1B64204(StringLiteral_12901/*"StartUpdateValue"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
    v47 = StringLiteral_12901/*"StartUpdateValue"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 5 )
    goto LABEL_115;
  v45->m_Items[5] = (Il2CppObject *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[5], v47, v58, v59);
  v46 = StringLiteral_22193/*"onupdate"*/;
  if ( StringLiteral_22193/*"onupdate"*/ )
  {
    v46 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
    v47 = StringLiteral_22193/*"onupdate"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 6 )
    goto LABEL_115;
  v45->m_Items[6] = (Il2CppObject *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[6], v47, v60, v61);
  v46 = StringLiteral_15125/*"UpdateValue"*/;
  if ( StringLiteral_15125/*"UpdateValue"*/ )
  {
    v46 = sub_1B64204(StringLiteral_15125/*"UpdateValue"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
    v47 = StringLiteral_15125/*"UpdateValue"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 7 )
    goto LABEL_115;
  v45->m_Items[7] = (Il2CppObject *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[7], v47, v62, v63);
  v46 = StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v46 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
    v47 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 8 )
    goto LABEL_115;
  v45->m_Items[8] = (Il2CppObject *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[8], v47, v64, v65);
  v46 = StringLiteral_5928/*"EndDisp"*/;
  if ( StringLiteral_5928/*"EndDisp"*/ )
  {
    v46 = sub_1B64204(StringLiteral_5928/*"EndDisp"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
    v47 = StringLiteral_5928/*"EndDisp"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 9 )
    goto LABEL_115;
  v45->m_Items[9] = (Il2CppObject *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[9], v47, v66, v67);
  v46 = StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v46 = sub_1B64204(StringLiteral_23830/*"time"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_116;
    v47 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 0xA )
    goto LABEL_115;
  v45->m_Items[10] = (Il2CppObject *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[10], v47, v68, v69);
  v94 = 0x40000000;
  v46 = j_il2cpp_value_box_0(float_TypeInfo, &v94);
  v72 = (Il2CppObject *)v46;
  if ( v46 )
  {
    v46 = sub_1B64204(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
    {
LABEL_116:
      v93 = sub_1B64348(v46);
      sub_1B641F0(v93, 0LL);
    }
  }
  if ( v45->max_length <= 0xB )
LABEL_115:
    sub_1B6432C(v46, v47);
  v45->m_Items[11] = v72;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->m_Items[11], (int32_t)v72, v70, v71);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v73 = iTween__Hash(v45, 0LL);
  iTween__ValueTo(gameObject, v73, 0LL);
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
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_8545/*"MAX_LVUP_TXT"*/, 0LL);
    baseLvMax = this->fields.baseLvMax;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseLvMax);
    resLvMax = this->fields.resLvMax;
    v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &resLvMax);
    Instance = (__int64)System_String__Format_61389768(v81, v82, v83, 0LL);
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
                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_97;
    UITweener__PlayForward((UITweener_o *)Instance, 0LL);
    Instance = (__int64)this->fields.resLimitCntList;
    if ( !Instance )
      goto LABEL_97;
    v84 = 0;
    while ( v84 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v84,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Instance )
        {
          SetLimitCntInfoComponent__setEnableOnImg(
            (SetLimitCntInfoComponent_o *)Instance,
            v84 < this->fields.resLimitCnt,
            0LL);
          Instance = (__int64)this->fields.resLimitCntList;
          ++v84;
          if ( Instance )
            continue;
        }
      }
      goto LABEL_97;
    }
  }
  v74 = this->fields.baseUsrSvtData;
  if ( !v74 )
    goto LABEL_97;
  v75 = this->fields.resUsrSvtData;
  if ( !v75 )
    goto LABEL_97;
  if ( v74->fields.lv != v75->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    v76 = (_DWORD)this + 716;
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      Instance = (__int64)System_Int32__ToString_62180668(v76, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_97;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)Instance, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      Instance = (__int64)System_Int32__ToString_62180668(v76, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_97;
      UILabel__set_text(resHpLb, (System_String_o *)Instance, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v86);
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
  v88 = (_DWORD)this + 724;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    Instance = (__int64)System_Int32__ToString_62180668(v88, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_97;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)Instance, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    Instance = (__int64)System_Int32__ToString_62180668(v88, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_97;
    UILabel__set_text(resAtkLb, (System_String_o *)Instance, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v91);
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
    sub_1B64324(Instance);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1

  if ( (byte_49FFCBA & 1) == 0 )
  {
    sub_1B640C8(&iTween_TypeInfo, callback);
    byte_49FFCBA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60023324(gameObject, 0LL);
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
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}