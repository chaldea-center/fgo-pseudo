// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // s0
  int v15; // s1
  int v16; // s2
  struct SvtCombineResultWindowComponent_StaticFields *static_fields; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  SvtCombineResultWindowComponent_c *v25; // x8
  struct SvtCombineResultWindowComponent_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UnityEngine_Color_o v34; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42EE4C5 & 1) == 0 )
  {
    sub_B5D5C4(&SvtCombineResultWindowComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_4223/*"Combine/"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v11, v12, v13);
    byte_42EE4C5 = 1;
  }
  v14 = 1065185444;
  v15 = 1064430469;
  v16 = 1050790593;
  v34 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v34);
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = v34;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_4223/*"Combine/"*/;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4223/*"Combine/"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->TUTORIAL_FOLDER, v18, v19, v20, v21, v22, v23, v24);
  v25 = SvtCombineResultWindowComponent_TypeInfo;
  SvtCombineResultWindowComponent_TypeInfo->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = 25;
  v25->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL = 26;
  v25->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 27;
  v26 = v25->static_fields;
  v27 = (System_Int32_array **)StringLiteral_973/*"0"*/;
  v26->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_973/*"0"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v26->INIT_VAL_TXT, v27, v28, v29, v30, v31, v32, v33);
}


void __fastcall SvtCombineResultWindowComponent___ctor(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE4C4 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE4C4 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__ClickSkip(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Collider_o *skipCollider; // x0
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_42EE4C3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SvtCombineResultWindowComponent_EndDisp__, v5, v6, v7);
    byte_42EE4C3 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_B5D69C(0LL, method);
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0LL) )
  {
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndDisp__, 0LL);
    SvtCombineResultWindowComponent__skipExp(this, v9, v10);
  }
}


void __fastcall SvtCombineResultWindowComponent__Close(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x0
  System_Action_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42EE4C1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SvtCombineResultWindowComponent_EndClose__, v5, v6, v7);
    byte_42EE4C1 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  SvtCombineResultWindowComponent__Close_34982704(this, v9, v10);
}


void __fastcall SvtCombineResultWindowComponent__Close_34982704(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EE4C2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SvtCombineResultWindowComponent_EndClose__, v5, v6, v7);
    byte_42EE4C2 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  SvtCombineResultWindowComponent__destroyCurrentStatusGrid(this, v5);
  SvtCombineResultWindowComponent__destroyResStatusGrid(this, v6);
}


void __fastcall SvtCombineResultWindowComponent__EndDisp(
        SvtCombineResultWindowComponent_o *this,
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
  UnityEngine_Collider_o *skipCollider; // x0
  const MethodInfo *v12; // x1
  OpenInfoWindowComponent_o *openInfowindowComp; // x20
  System_Collections_Generic_List_GameObject__o *resInfoList; // x21
  System_Action_o *v15; // x22

  if ( (byte_42EE4B9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SvtCombineResultWindowComponent_EndOpen__, v8, v9, v10);
    byte_42EE4B9 = 1;
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
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v15, 1, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(skipCollider, method);
  }
  SvtCombineResultWindowComponent__EndOpen(this, v12);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Action_o *openCallBack; // x19
  __int64 v25; // x19
  SvtCombineResultWindowComponent_c *v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **endTutorialCallBack; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  _BOOL4 isHpLimitUp; // w9
  _BOOL4 isAtkLimitUp; // w8
  System_Int32_array *v44; // x20
  int32_t *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL; // x8
  CommonUI_o *Instance; // x21
  System_Action_o *v47; // x22
  __int64 v48; // x0

  if ( (byte_42EE4C0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&SvtCombineResultWindowComponent_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__, v18, v19, v20);
    sub_B5D5C4(&SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, v21, v22, v23);
    byte_42EE4C0 = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(openCallBack, 0LL);
  }
  if ( this->fields.endTutorialCallBack )
  {
    v25 = sub_B5D694(SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo);
    SvtCombineResultWindowComponent___c__DisplayClass127_0___ctor(
      (SvtCombineResultWindowComponent___c__DisplayClass127_0_o *)v25,
      0LL);
    if ( !v25 )
      goto LABEL_34;
    endTutorialCallBack = (System_Int32_array **)this->fields.endTutorialCallBack;
    *(_QWORD *)(v25 + 16) = endTutorialCallBack;
    sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), endTutorialCallBack, v28, v29, v30, v31, v32, v33);
    this->fields.endTutorialCallBack = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.endTutorialCallBack, 0LL, v35, v36, v37, v38, v39, v40);
    if ( this->fields.isHpLimitUp || this->fields.isAtkLimitUp )
    {
      v41 = sub_B5D5DC(int___TypeInfo, 1LL);
      isHpLimitUp = this->fields.isHpLimitUp;
      isAtkLimitUp = this->fields.isAtkLimitUp;
      v44 = (System_Int32_array *)v41;
      if ( isHpLimitUp )
      {
        v26 = SvtCombineResultWindowComponent_TypeInfo;
        if ( isAtkLimitUp )
        {
          if ( (WORD1(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v26 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v44 )
            goto LABEL_34;
          if ( v44->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v26->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_31:
            v44->m_Items[1] = *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_32:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v47 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v47,
              (Il2CppObject *)v25,
              Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__OpenImageDialogAssets(Instance, v44, 2, v47, 0LL);
              return;
            }
LABEL_34:
            sub_B5D69C(v26, v27);
          }
        }
        else
        {
          if ( (WORD1(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v26 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v44 )
            goto LABEL_34;
          if ( v44->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v26->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
            goto LABEL_31;
          }
        }
      }
      else
      {
        if ( !isAtkLimitUp )
          goto LABEL_32;
        v26 = SvtCombineResultWindowComponent_TypeInfo;
        if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
          v26 = SvtCombineResultWindowComponent_TypeInfo;
        }
        if ( !v44 )
          goto LABEL_34;
        if ( v44->max_length )
        {
          p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v26->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
          goto LABEL_31;
        }
      }
      v48 = sub_B5D6C8(v26);
      sub_B5D668(v48, 0LL);
    }
  }
}


void __fastcall SvtCombineResultWindowComponent__InitStateInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UIExtrusionLabel_o *currentLvLb; // x20
  UILabel_o *currentMaxLvLb; // x0

  if ( (byte_42EE4AF & 1) == 0 )
  {
    sub_B5D5C4(&SvtCombineResultWindowComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EE4AF = 1;
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
    sub_B5D69C(currentMaxLvLb, method);
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
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  void *resUsrSvtData; // x0
  int v17; // w21
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v19; // x9
  float v20; // s0
  int32_t exp; // w20
  const MethodInfo *v22; // x4
  struct UserServantEntity_o *v23; // x8
  struct UserServantEntity_o *v24; // x8
  struct UserServantEntity_o *v25; // x8
  int32_t v26; // w20
  UITweener_o *v27; // x21
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
  int32_t afterAtk; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t afterHp[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EE4B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&SoundManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SvtCombineResultWindowComponent_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v13, v14, v15);
    byte_42EE4B8 = 1;
  }
  *(_QWORD *)afterHp = 0LL;
  afterAtk = 0;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_56;
  resUsrSvtData = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_56;
  v17 = (int)resUsrSvtData;
  UnityEngine_Collider__set_enabled(this->fields.skipCollider, 1, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_56;
  v19 = this->fields.resUsrSvtData;
  if ( !v19 )
    goto LABEL_56;
  v20 = UnityEngine_Mathf__Lerp((float)baseUsrSvtData->fields.exp, (float)v19->fields.exp, val, 0LL);
  exp = UnityEngine_Mathf__FloorToInt(v20, 0LL);
  resUsrSvtData = (void *)UnityEngine_Mathf__Approximately(1.0, val, 0LL);
  v23 = this->fields.resUsrSvtData;
  if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_56;
    exp = v23->fields.exp;
  }
  else if ( !v23 )
  {
    goto LABEL_56;
  }
  v24 = this->fields.baseUsrSvtData;
  if ( !v24 )
    goto LABEL_56;
  resUsrSvtData = (void *)SvtCombineResultWindowComponent__setSvtExp(this, (int32_t)method, exp, v24->fields.lv, v22);
  afterHp[1] = (int)resUsrSvtData;
  v25 = this->fields.baseUsrSvtData;
  if ( !v25 )
    goto LABEL_56;
  if ( v25->fields.lv == v17 )
    return;
  v26 = (int)resUsrSvtData;
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
  if ( v26 == this->fields.PrevLevel )
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
                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !resUsrSvtData )
    goto LABEL_56;
  v27 = (UITweener_o *)resUsrSvtData;
  UITweener__ResetToBeginning((UITweener_o *)resUsrSvtData, 0LL);
  UITweener__Play(v27, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v26;
  this->fields.endDispLvInfoFlg = 0;
  v29 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  resUsrSvtData = System_Int32__ToString((int32_t)&afterHp[1], 0LL);
  if ( !v29 )
    goto LABEL_56;
  UIExtrusionLabel__set_text(v29, (System_String_o *)resUsrSvtData, 0LL);
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
      resUsrSvtData = System_Int32__ToString_39741776((int32_t)afterHp, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_56;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)resUsrSvtData, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      resUsrSvtData = System_Int32__ToString_39741776((int32_t)afterHp, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_56;
      UILabel__set_text(resHpLb, (System_String_o *)resUsrSvtData, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v33);
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
    resUsrSvtData = System_Int32__ToString_39741776((int32_t)&afterAtk, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_56;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)resUsrSvtData, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    resUsrSvtData = System_Int32__ToString_39741776((int32_t)&afterAtk, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_56;
    UILabel__set_text(resAtkLb, (System_String_o *)resUsrSvtData, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v37);
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
    sub_B5D69C(resUsrSvtData, method);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*((_QWORD *)resUsrSvtData + 23), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__checkGetSkill(
        SvtCombineResultWindowComponent_o *this,
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
  UserServantEntity_o *baseUsrSvtData; // x0
  UserServantEntity_o *v24; // x20
  int64_t hiddenValue; // x8
  UserServantEntity_o *v26; // x21
  unsigned __int64 v27; // x23
  int64_t *p_fakeValue; // x24
  int32_t i; // w22
  int32_t v30; // w20
  WarEntity_o *Entity; // x0
  UILabel_o *skillGetInfoTitle; // x21
  SkillEntity_o *v33; // x20
  UILabel_o *skillGetInfoDetail; // x21
  System_String_o *v35; // x22
  Il2CppObject *Name; // x0
  __int64 v37; // x0

  if ( (byte_42EE4BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6959/*"GET_SKILL_NAME"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6961/*"GET_SKILL_TITLE"*/, v20, v21, v22);
    byte_42EE4BC = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_27;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(baseUsrSvtData, -1, -1, 1, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_27;
  v24 = baseUsrSvtData;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(this->fields.resUsrSvtData, -1, -1, 1, 0LL);
  if ( !v24 )
    goto LABEL_27;
  hiddenValue = v24->fields.id.fields.hiddenValue;
  if ( (int)hiddenValue < 1 )
    return;
  v26 = baseUsrSvtData;
  v27 = 0LL;
  p_fakeValue = &baseUsrSvtData->fields.id.fields.fakeValue;
  for ( i = (_DWORD)v24 + 32; ; i += 4 )
  {
    if ( !v26 )
      goto LABEL_27;
    if ( v27 >= LODWORD(v26->fields.id.fields.hiddenValue) || v27 >= (unsigned int)hiddenValue )
      goto LABEL_26;
    baseUsrSvtData = (UserServantEntity_o *)System_Int32__Equals_39741700(i, *((_DWORD *)p_fakeValue + v27), 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
      break;
    LODWORD(hiddenValue) = v24->fields.id.fields.hiddenValue;
    if ( (__int64)++v27 >= (int)hiddenValue )
      return;
  }
  if ( (unsigned int)v27 >= LODWORD(v26->fields.id.fields.hiddenValue) )
  {
LABEL_26:
    v37 = sub_B5D6C8(baseUsrSvtData);
    sub_B5D668(v37, 0LL);
  }
  v30 = *((_DWORD *)&v26->fields.id.fields.fakeValue + v27);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_27;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_27;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)baseUsrSvtData,
             v30,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  v33 = (SkillEntity_o *)Entity;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6961/*"GET_SKILL_TITLE"*/, 0LL);
  if ( !skillGetInfoTitle )
    goto LABEL_27;
  UILabel__set_text(skillGetInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6959/*"GET_SKILL_NAME"*/, 0LL);
  if ( !v33
    || (v35 = (System_String_o *)baseUsrSvtData,
        Name = (Il2CppObject *)SkillEntity__getName(v33, 0LL),
        baseUsrSvtData = (UserServantEntity_o *)System_String__Format(v35, Name, 0LL),
        !skillGetInfoDetail)
    || (UILabel__set_text(skillGetInfoDetail, (System_String_o *)baseUsrSvtData, 0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.resInfoList) == 0LL) )
  {
LABEL_27:
    sub_B5D69C(baseUsrSvtData, method);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)baseUsrSvtData,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillGetInfo,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this->fields.isGetNewSkill = 1;
}


void __fastcall SvtCombineResultWindowComponent__checkQuestOpen(
        SvtCombineResultWindowComponent_o *this,
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  System_Collections_Generic_List_int__o *v47; // x0
  clsQuestCheck_o *Instance; // x0
  __int64 v49; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v51; // x20
  __int64 v52; // x21
  __int64 v53; // x22
  System_Collections_Generic_List_int__o *v54; // x0
  UILabel_o *storyQuestInfoTitle; // x21
  System_Collections_Generic_List_int__o *v56; // x20
  UILabel_o *heroQuestInfoTitle; // x21
  __int64 size; // x8
  __int64 i; // x24
  int32_t monitor; // w8
  clsQuestCheck_o *v61; // x21
  UILabel_o *storyQuestInfoDetail; // x22
  System_String_o *v63; // x0
  struct UnityEngine_GameObject_o *heroQuestInfo; // x1
  UILabel_o *eventQuestInfoDetail; // x22
  System_String_o *v66; // x0
  UILabel_o *heroQuestInfoDetail; // x22
  System_String_o *v68; // x0
  __int64 v69; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_42EE4BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_9872/*"OPEN_STORY_QUEST_TITLE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_9858/*"OPEN_EVENT_QUEST_NAME"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_9861/*"OPEN_HERO_QUEST_TITLE"*/, v44, v45, v46);
    byte_42EE4BB = 1;
  }
  this->fields.isOpenQuest = 0;
  v47 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v47,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_51;
  v51 = Instance;
  v53 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v53;
  *(_QWORD *)&v70.fields.fakeValue = v52;
  Instance = (clsQuestCheck_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v51 )
    goto LABEL_51;
  v54 = clsQuestCheck__GetReleaseQuestIdByServantLv(v51, (int32_t)Instance, this->fields.baseSvtCollectionLv, 0LL);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v56 = v54;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9872/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, (System_String_o *)Instance, 0LL),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9861/*"OPEN_HERO_QUEST_TITLE"*/, 0LL),
        !heroQuestInfoTitle) )
  {
LABEL_51:
    sub_B5D69C(Instance, v49);
  }
  UILabel__set_text(heroQuestInfoTitle, (System_String_o *)Instance, 0LL);
  if ( v56 )
  {
    LODWORD(size) = v56->fields._size;
    if ( (int)size >= 1 )
    {
      for ( i = 8LL; ; ++i )
      {
        if ( i - 8 >= (unsigned __int64)(unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( *((int *)&v56->fields._items->obj.klass + i) < 1 )
          goto LABEL_49;
        Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_51;
        Instance = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( i - 8 >= (unsigned __int64)(unsigned int)v56->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !Instance )
          goto LABEL_51;
        Instance = (clsQuestCheck_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        *((_DWORD *)&v56->fields._items->obj.klass + i),
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_51;
        monitor = (int32_t)Instance[1].monitor;
        v61 = Instance;
        if ( monitor == 6 )
        {
          heroQuestInfoDetail = this->fields.heroQuestInfoDetail;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_9858/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
          Instance = (clsQuestCheck_o *)System_String__Format(v68, (Il2CppObject *)v61->fields.cQuestReleaseListP, 0LL);
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
          v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9858/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
          Instance = (clsQuestCheck_o *)System_String__Format(v63, (Il2CppObject *)v61->fields.cQuestReleaseListP, 0LL);
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
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          this->fields.isOpenQuest = 1;
        }
LABEL_49:
        size = v56->fields._size;
        v69 = i - 7;
        if ( v69 >= size )
          return;
      }
      eventQuestInfoDetail = this->fields.eventQuestInfoDetail;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_9858/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
      Instance = (clsQuestCheck_o *)System_String__Format(v66, (Il2CppObject *)v61->fields.cQuestReleaseListP, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *currentLimitCntGrid; // x0
  int v6; // w20
  bool v7; // cc
  int32_t v8; // w21
  int32_t childCount; // w20
  UnityEngine_Object_o *gameObject; // x22
  bool v11; // vf
  int32_t v12; // w20
  UnityEngine_Object_o *v13; // x21

  if ( (byte_42EE4BE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE4BE = 1;
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
  v6 = (int)currentLimitCntGrid;
  currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.currentSvtEqLimitCntGrid,
                                                     0LL);
  if ( !currentLimitCntGrid )
    goto LABEL_24;
  v8 = v6 - 1;
  v7 = v6 < 1;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)currentLimitCntGrid, 0LL);
  if ( !v7 )
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
                                                         v8,
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
      if ( --v8 < 0 )
        goto LABEL_15;
    }
LABEL_24:
    sub_B5D69C(currentLimitCntGrid, method);
  }
LABEL_15:
  v11 = __OFSUB__(childCount, 1);
  v12 = childCount - 1;
  if ( v12 < 0 == v11 )
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
                                                         v12,
                                                         0LL);
      if ( !currentLimitCntGrid )
        break;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v13, 0LL);
      if ( --v12 < 0 )
        return;
    }
    goto LABEL_24;
  }
}


void __fastcall SvtCombineResultWindowComponent__destroyResStatusGrid(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *resLimitCntGrid; // x0
  int v6; // w20
  bool v7; // cc
  int32_t v8; // w21
  int32_t childCount; // w20
  UnityEngine_Object_o *gameObject; // x22
  bool v11; // vf
  int32_t v12; // w20
  UnityEngine_Object_o *v13; // x21

  if ( (byte_42EE4BF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE4BF = 1;
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
  v6 = (int)resLimitCntGrid;
  resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid,
                                                 0LL);
  if ( !resLimitCntGrid )
    goto LABEL_24;
  v8 = v6 - 1;
  v7 = v6 < 1;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resLimitCntGrid, 0LL);
  if ( !v7 )
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
                                                     v8,
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
      if ( --v8 < 0 )
        goto LABEL_15;
    }
LABEL_24:
    sub_B5D69C(resLimitCntGrid, method);
  }
LABEL_15:
  v11 = __OFSUB__(childCount, 1);
  v12 = childCount - 1;
  if ( v12 < 0 == v11 )
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
                                                     v12,
                                                     0LL);
      if ( !resLimitCntGrid )
        break;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(v13, 0LL);
      if ( --v12 < 0 )
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
    sub_B5D69C(0LL, method);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
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
  __int64 v31; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w0
  _BOOL4 isEqCombine; // w8
  int32_t childCount; // w23
  UnityEngine_Transform_o *transform; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_resLimitCntList; // x25
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t v51; // w26
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct UserServantEntity_o *v65; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x20
  __int64 v67; // x21
  __int64 v68; // x22
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_42EE4B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)resData, svtCollectionLv, callback);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    byte_42EE4B5 = 1;
  }
  this->fields.resUsrSvtData = resData;
  sub_B5D560(
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
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v37;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resLimitCntList,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( childCount >= 1 )
  {
    if ( transform )
    {
      v51 = 0;
      while ( 1 )
      {
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Transform__GetChild(transform, v51, 0LL);
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
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( ++v51 >= childCount )
          goto LABEL_19;
      }
    }
LABEL_29:
    sub_B5D69C(resUsrSvtData, v31);
  }
LABEL_19:
  this->fields.openCallBack = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endTutorialCallBack,
    (System_Int32_array **)endTutorialCb,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v58;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_29;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v65 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_29;
  v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)resUsrSvtData;
  v68 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v72.fields.currentCryptoKey = v68;
  *(_QWORD *)&v72.fields.fakeValue = v67;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v72, 0LL);
  if ( !v66 )
    goto LABEL_29;
  resUsrSvtData = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v66,
                                           (int32_t)resUsrSvtData,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !resUsrSvtData )
    goto LABEL_29;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    SvtCombineResultWindowComponent__checkQuestOpen(this, v69);
    SvtCombineResultWindowComponent__checkGetSkill(this, v70);
  }
  SvtCombineResultWindowComponent__showGetExp(this, v69);
}


void __fastcall SvtCombineResultWindowComponent__setBaseAdjustInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  struct UserServantEntity_o *v9; // x8
  int32_t adjustHp; // w25
  int32_t baseMaxHpAdjustVal; // w26
  int v12; // w23
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  const MethodInfo *v14; // x2
  struct UserServantEntity_o *v15; // x8
  int32_t adjustAtk; // w23
  int32_t baseMaxAtkAdjustVal; // w25
  int32_t StatusUpAdjustAtk; // w21
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  const MethodInfo *v20; // x2

  if ( (byte_42EE4B2 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EE4B2 = 1;
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
  v9 = this->fields.baseUsrSvtData;
  if ( !v9 )
    goto LABEL_25;
  adjustHp = v9->fields.adjustHp;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = this->fields.baseUsrSvtData;
    if ( !v9 )
      goto LABEL_25;
    baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  }
  baseMaxHpAdjustVal = this->fields.baseMaxHpAdjustVal;
  v12 = *(_DWORD *)(*(_QWORD *)&baseUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 304LL);
  if ( v9->fields.adjustHp >= baseMaxHpAdjustVal )
    baseMaxHpAdjustVal = this->fields.baseSecondMaxHpAdjustVal;
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( (baseUsrSvtData->fields.createdAt & 0x4000000) != 0
    && !baseUsrSvtData->fields.randomLimitCountSupport.fields.currentCryptoKey )
  {
    j_il2cpp_runtime_class_init_0(baseUsrSvtData);
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_25;
  UIIconLabel__Set_41886452(
    currentAdjustHpIconLabel,
    44,
    v12 * adjustHp,
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
  SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.baseUsrSvtData, v14);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_25;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  adjustAtk = v15->fields.adjustAtk;
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
    || (UIIconLabel__Set_41886452(
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
    sub_B5D69C(baseUsrSvtData, method);
  }
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setBefResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *baseData,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Collider_o *skipCollider; // x0
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x22
  UILabel_o *currentMaxLvLb; // x22
  struct UserServantEntity_o *v32; // x8
  UIExtrusionLabel_o *resLvLb; // x22
  UILabel_o *resMaxLvLb; // x22
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  WebViewObject_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  WebViewObject_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  WebViewObject_o *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UIWidget_o *resLvWidget; // x24
  int v64; // s0
  UIWidget_o *resMaxLvWidget; // x23
  int v69; // s0
  UIWidget_o *resHpWidget; // x22
  int v74; // s0
  UIWidget_o *resAtkWidget; // x21
  int v79; // s0
  UILabel_o *currentExpValLb; // x21
  struct UserServantEntity_o *v84; // x8
  int32_t v85; // w20
  __int64 v86; // x21
  __int64 v87; // x22
  struct UserServantEntity_o *v88; // x8
  int32_t v89; // w21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v91; // x4
  int32_t baseLimitCnt; // w21
  UnityEngine_Transform_o *v93; // x0
  const MethodInfo *v94; // x4
  struct UserServantEntity_o *v95; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v97; // x8
  UILabel_o *resHpLb; // x20
  struct UserServantEntity_o *v99; // x8
  UILabel_o *currentAtkLb; // x20
  struct UserServantEntity_o *v101; // x8
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v103; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Action_o *v111; // x20
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_42EE4B0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SvtCombineResultWindowComponent_EndOpen__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v18, v19, v20);
    byte_42EE4B0 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_49;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  v32 = this->fields.baseUsrSvtData;
  if ( !v32 )
    goto LABEL_49;
  resLvLb = this->fields.resLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v32 + 256, 0LL);
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
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resLvWidget,
    (System_Int32_array **)Component_WebViewObject,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resMaxLvLb;
  if ( !skipCollider )
    goto LABEL_49;
  v42 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v42;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resMaxLvWidget,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resHpLb;
  if ( !skipCollider )
    goto LABEL_49;
  v49 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resHpWidget = (struct UIWidget_o *)v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resHpWidget,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resAtkLb;
  if ( !skipCollider )
    goto LABEL_49;
  v56 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resAtkWidget = (struct UIWidget_o *)v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resAtkWidget,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  resLvWidget = this->fields.resLvWidget;
  *(UnityEngine_Color_o *)&v64 = UnityEngine_Color__get_white(0LL);
  if ( !resLvWidget )
    goto LABEL_49;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)&v64, 0LL);
  resMaxLvWidget = this->fields.resMaxLvWidget;
  *(UnityEngine_Color_o *)&v69 = UnityEngine_Color__get_white(0LL);
  if ( !resMaxLvWidget )
    goto LABEL_49;
  UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)&v69, 0LL);
  resHpWidget = this->fields.resHpWidget;
  *(UnityEngine_Color_o *)&v74 = UnityEngine_Color__get_white(0LL);
  if ( !resHpWidget )
    goto LABEL_49;
  UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)&v74, 0LL);
  resAtkWidget = this->fields.resAtkWidget;
  *(UnityEngine_Color_o *)&v79 = UnityEngine_Color__get_white(0LL);
  if ( !resAtkWidget )
    goto LABEL_49;
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)&v79, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentExpBar;
  if ( !skipCollider )
    goto LABEL_49;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_346/*"#,0"*/,
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
  v84 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_49;
  v85 = (int)skipCollider;
  v87 = *(_QWORD *)&v84->fields.limitCount.fields.currentCryptoKey;
  v86 = *(_QWORD *)&v84->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v114.fields.currentCryptoKey = v87;
  *(_QWORD *)&v114.fields.fakeValue = v86;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                             v114,
                                             0LL);
  v88 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v88 )
    goto LABEL_49;
  v89 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  this->fields.baseHpVal = v88->fields.hp;
  this->fields.baseAtkVal = v88->fields.atk;
  if ( !skipCollider )
    goto LABEL_49;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v85, v89, transform, v91);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_49;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_49;
  baseLimitCnt = this->fields.baseLimitCnt;
  v93 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v85, baseLimitCnt, v93, v94);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_49;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v95 = this->fields.baseUsrSvtData;
  if ( !v95 )
    goto LABEL_49;
  currentHpLb = this->fields.currentHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int)v95 + 268,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
                                             0LL);
  if ( !currentHpLb )
    goto LABEL_49;
  UILabel__set_text(currentHpLb, (System_String_o *)skipCollider, 0LL);
  v97 = this->fields.baseUsrSvtData;
  if ( !v97 )
    goto LABEL_49;
  resHpLb = this->fields.resHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int)v97 + 268,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
                                             0LL);
  if ( !resHpLb )
    goto LABEL_49;
  UILabel__set_text(resHpLb, (System_String_o *)skipCollider, 0LL);
  v99 = this->fields.baseUsrSvtData;
  if ( !v99 )
    goto LABEL_49;
  currentAtkLb = this->fields.currentAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int)v99 + 264,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
                                             0LL);
  if ( !currentAtkLb )
    goto LABEL_49;
  UILabel__set_text(currentAtkLb, (System_String_o *)skipCollider, 0LL);
  v101 = this->fields.baseUsrSvtData;
  if ( !v101 )
    goto LABEL_49;
  resAtkLb = this->fields.resAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int)v101 + 264,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
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
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v103);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lvUpInfo,
    (System_Int32_array **)lvInfo,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
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
    sub_B5D69C(skipCollider, baseData);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v111 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v111, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v111, 0, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  UnityEngine_Collider_o *skipCollider; // x0
  struct UserServantEntity_o **p_baseUsrSvtData; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x23
  UILabel_o *currentSvtEqMaxLvLb; // x23
  struct UserServantEntity_o *v59; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x23
  UILabel_o *resSvtEqMaxLvLb; // x23
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  WebViewObject_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  WebViewObject_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  WebViewObject_o *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UIWidget_o *resLvWidget; // x25
  int v91; // s0
  UIWidget_o *resMaxLvWidget; // x24
  int v96; // s0
  UIWidget_o *resHpWidget; // x23
  int v101; // s0
  UIWidget_o *resAtkWidget; // x22
  int v106; // s0
  UILabel_o *currentSvtEqExpValLb; // x22
  struct UserServantEntity_o *v111; // x8
  int32_t v112; // w21
  __int64 v113; // x22
  __int64 v114; // x23
  struct UserServantEntity_o *v115; // x8
  int32_t v116; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v118; // x4
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *v120; // x0
  const MethodInfo *v121; // x4
  struct UserServantEntity_o *v122; // x8
  UILabel_o *currentSvtEqHpLb; // x21
  struct UserServantEntity_o *v124; // x8
  UILabel_o *resSvtEqHpLb; // x21
  struct UserServantEntity_o *v126; // x8
  UILabel_o *currentSvtEqAtkLb; // x21
  struct UserServantEntity_o *v128; // x8
  UILabel_o *resSvtEqAtkLb; // x21
  UILabel_o *normalExpLb; // x21
  UILabel_o *normalExpOverSpLb; // x21
  WebViewObject_o *v132; // x21
  int v133; // s0
  UIWidget_o *v137; // x22
  UnityEngine_GameObject_o *v138; // x24
  srcLineSprite_o *Component_srcLineSprite; // x23
  srcLineSprite_o *v140; // x0
  srcLineSprite_o *v141; // x20
  SvtCombineResultWindowComponent_c *v142; // x0
  Il2CppObject *v143; // x0
  System_String_o *v144; // x20
  UnityEngine_Transform_o *v145; // x0
  UnityEngine_GameObject_o *v146; // x20
  UnityEngine_Transform_o *v147; // x21
  int v148; // s0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_Object_o *v152; // x20
  UILabel_o *addExpLb; // x20
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Action_o *v161; // x20
  intptr_t m_CachedPtr; // [xsp+8h] [xbp-58h] BYREF
  float barExp; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lateExp[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t v165; // [xsp+18h] [xbp-48h] BYREF
  int32_t v166; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16

  v165 = addExp;
  v166 = normalExp;
  if ( (byte_42EE4B1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, resInfo, *(_QWORD *)&normalExp);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v21, v22, v23);
    sub_B5D5C4(&int_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SvtCombineResultWindowComponent_EndOpen__, v33, v34, v35);
    sub_B5D5C4(&SvtCombineResultWindowComponent_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_4229/*"CombineSuccessEffect_{0:D2}"*/, v45, v46, v47);
    byte_42EE4B1 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  v59 = this->fields.baseUsrSvtData;
  if ( !v59 )
    goto LABEL_96;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v59 + 256, 0LL);
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
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resLvWidget,
    (System_Int32_array **)Component_WebViewObject,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqMaxLvLb;
  if ( !skipCollider )
    goto LABEL_96;
  v69 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v69;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resMaxLvWidget,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqHpLb;
  if ( !skipCollider )
    goto LABEL_96;
  v76 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resHpWidget = (struct UIWidget_o *)v76;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resHpWidget,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqAtkLb;
  if ( !skipCollider )
    goto LABEL_96;
  v83 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resAtkWidget = (struct UIWidget_o *)v83;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resAtkWidget,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  resLvWidget = this->fields.resLvWidget;
  *(UnityEngine_Color_o *)&v91 = UnityEngine_Color__get_white(0LL);
  if ( !resLvWidget )
    goto LABEL_96;
  UIWidget__set_color(resLvWidget, *(UnityEngine_Color_o *)&v91, 0LL);
  resMaxLvWidget = this->fields.resMaxLvWidget;
  *(UnityEngine_Color_o *)&v96 = UnityEngine_Color__get_white(0LL);
  if ( !resMaxLvWidget )
    goto LABEL_96;
  UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)&v96, 0LL);
  resHpWidget = this->fields.resHpWidget;
  *(UnityEngine_Color_o *)&v101 = UnityEngine_Color__get_white(0LL);
  if ( !resHpWidget )
    goto LABEL_96;
  UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)&v101, 0LL);
  resAtkWidget = this->fields.resAtkWidget;
  *(UnityEngine_Color_o *)&v106 = UnityEngine_Color__get_white(0LL);
  if ( !resAtkWidget )
    goto LABEL_96;
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)&v106, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_96;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_346/*"#,0"*/,
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
  v111 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_96;
  v112 = (int)skipCollider;
  v114 = *(_QWORD *)&v111->fields.limitCount.fields.currentCryptoKey;
  v113 = *(_QWORD *)&v111->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v167.fields.currentCryptoKey = v114;
  *(_QWORD *)&v167.fields.fakeValue = v113;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                             v167,
                                             0LL);
  v115 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v115 )
    goto LABEL_96;
  v116 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = v115->fields.hp;
  this->fields.baseAtkVal = v115->fields.atk;
  if ( !skipCollider )
    goto LABEL_96;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v112, v116, transform, v118);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_96;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_96;
  baseLimitCnt = this->fields.baseLimitCnt;
  v120 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v112, baseLimitCnt, v120, v121);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_96;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v122 = this->fields.baseUsrSvtData;
  if ( !v122 )
    goto LABEL_96;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int)v122 + 268,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqHpLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v124 = this->fields.baseUsrSvtData;
  if ( !v124 )
    goto LABEL_96;
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int)v124 + 268,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
                                             0LL);
  if ( !resSvtEqHpLb )
    goto LABEL_96;
  UILabel__set_text(resSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v126 = this->fields.baseUsrSvtData;
  if ( !v126 )
    goto LABEL_96;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int)v126 + 264,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqAtkLb )
    goto LABEL_96;
  UILabel__set_text(currentSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  v128 = this->fields.baseUsrSvtData;
  if ( !v128 )
    goto LABEL_96;
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int)v128 + 264,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
                                             0LL);
  if ( !resSvtEqAtkLb )
    goto LABEL_96;
  UILabel__set_text(resSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  normalExpLb = this->fields.normalExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int32_t)&v166,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
                                             0LL);
  if ( !normalExpLb )
    goto LABEL_96;
  UILabel__set_text(normalExpLb, (System_String_o *)skipCollider, 0LL);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int32_t)&v166,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
                                             0LL);
  if ( !normalExpOverSpLb )
    goto LABEL_96;
  UILabel__set_text(normalExpOverSpLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpLb;
  if ( !skipCollider )
    goto LABEL_96;
  v132 = UnityEngine_Component__GetComponent_WebViewObject_(
           (UnityEngine_Component_o *)skipCollider,
           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v133 = UnityEngine_Color__get_white(0LL);
  if ( !v132 )
    goto LABEL_96;
  UIWidget__set_color((UIWidget_o *)v132, *(UnityEngine_Color_o *)&v133, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_96;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_96;
  v137 = (UIWidget_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_96;
  v138 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  if ( !v138 )
    goto LABEL_96;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v138,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v140 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
           v138,
           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
    goto LABEL_89;
  v141 = v140;
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_96;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v142 = SvtCombineResultWindowComponent_TypeInfo;
  if ( (BYTE3(SvtCombineResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v142 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color((UIWidget_o *)v132, v142->static_fields->COLOR_VAL, 0LL);
  if ( !v137 )
    goto LABEL_96;
  UIWidget__set_color(v137, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0LL);
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
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v141, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v141 )
      goto LABEL_96;
    LODWORD(v141->fields.mcLineSprite) = 0x40000000;
    UITweener__Play((UITweener_o *)v141, 0LL);
  }
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int32_t)&v166, 0LL);
  if ( !skipCollider )
    goto LABEL_96;
  m_CachedPtr = skipCollider->fields.m_CachedPtr;
  v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr);
  skipCollider = (UnityEngine_Collider_o *)System_String__Format((System_String_o *)StringLiteral_4229/*"CombineSuccessEffect_{0:D2}"*/, v143, 0LL);
  if ( !this->fields.dispNodeObj )
    goto LABEL_96;
  v144 = (System_String_o *)skipCollider;
  v145 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL);
  skipCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__getEffect(v144, v145, 0LL);
  if ( !skipCollider
    || (v146 = (UnityEngine_GameObject_o *)skipCollider,
        skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)skipCollider,
                                                   0LL),
        !this->fields.dispNodeObj)
    || (v147 = (UnityEngine_Transform_o *)skipCollider,
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v148 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)skipCollider,
                                            0LL),
        !v147) )
  {
LABEL_96:
    sub_B5D69C(skipCollider, baseData);
  }
  UnityEngine_Transform__set_localPosition(v147, *(UnityEngine_Vector3_o *)&v148, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        v146,
                                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v152 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                   v146,
                                   (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
    skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(v152, 0LL, 0LL);
    if ( ((unsigned __int8)skipCollider & 1) != 0 )
    {
      if ( !v152 )
        goto LABEL_96;
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v152, 0LL);
    }
  }
LABEL_89:
  addExpLb = this->fields.addExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_39741776(
                                             (int32_t)&v165,
                                             (System_String_o *)StringLiteral_9361/*"N0"*/,
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lvUpInfo,
    (System_Int32_array **)svtEqLvInfo,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
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
  v161 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v161, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v161, 0, 0LL);
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

  if ( (byte_42EE4BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, maxLimitCnt, svtLimitCnt, root);
    byte_42EE4BD = 1;
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
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0LL) )
      {
        sub_B5D69C(Object, v11);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *resAdjustAtkIconLabel; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v14; // s0
  int32_t adjustAtk; // w21
  BalanceConfig_c *v19; // x0
  int32_t v20; // w8
  int32_t baseMaxAtkAdjustVal; // w23
  int32_t StatusUpAdjustAtk; // w24
  int32_t v23; // w8
  int32_t v24; // w21
  int32_t v25; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8

  if ( (byte_42EE4B4 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)targetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EE4B4 = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resAdjustAtkIconLabel,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_23;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v14, 0LL);
  if ( !targetData )
    goto LABEL_23;
  adjustAtk = targetData->fields.adjustAtk;
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
    v20 = targetData->fields.adjustAtk;
  }
  else
  {
    v20 = targetData->fields.adjustAtk;
  }
  baseMaxAtkAdjustVal = this->fields.baseMaxAtkAdjustVal;
  StatusUpAdjustAtk = v19->static_fields->StatusUpAdjustAtk;
  if ( v20 >= baseMaxAtkAdjustVal )
    baseMaxAtkAdjustVal = this->fields.baseSecondMaxAtkAdjustVal;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v23 = v19->static_fields->StatusUpAdjustAtk;
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v23 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
  }
  else
  {
    v23 = v19->static_fields->StatusUpAdjustAtk;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_23;
  v24 = StatusUpAdjustAtk * adjustAtk;
  v25 = v23 * baseMaxAtkAdjustVal;
  UIIconLabel__Set_41886452(
    (UIIconLabel_o *)resAdjustAtkIconLabel,
    45,
    v24,
    v23 * baseMaxAtkAdjustVal,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  if ( !System_Int32__Equals_39741700((_DWORD)baseUsrSvtData + 272, targetData->fields.adjustAtk, 0LL) )
  {
    resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
    this->fields.isAtkLimitUp = targetData->fields.adjustAtk == this->fields.baseMaxAtkAdjustVal;
    if ( !resAdjustAtkIconLabel )
      goto LABEL_23;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustAtkIconLabel,
      v24,
      v25,
      targetData->fields.adjustAtk == this->fields.baseSecondMaxAtkAdjustVal,
      0LL);
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkMaxLabel;
  if ( !resAdjustAtkIconLabel )
LABEL_23:
    sub_B5D69C(resAdjustAtkIconLabel, targetData);
  UILabel__set_text((UILabel_o *)resAdjustAtkIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtCombineResultWindowComponent__setResAdjustHpInfo(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *targetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *resAdjustHpIconLabel; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v14; // s0
  int32_t adjustHp; // w21
  BalanceConfig_c *v19; // x0
  int32_t v20; // w8
  int32_t baseMaxHpAdjustVal; // w23
  int32_t StatusUpAdjustHp; // w24
  int32_t v23; // w8
  int32_t v24; // w21
  int32_t v25; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8

  if ( (byte_42EE4B3 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)targetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EE4B3 = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_23;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resAdjustHpIconLabel,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_23;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v14, 0LL);
  if ( !targetData )
    goto LABEL_23;
  adjustHp = targetData->fields.adjustHp;
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
    v20 = targetData->fields.adjustHp;
  }
  else
  {
    v20 = targetData->fields.adjustHp;
  }
  baseMaxHpAdjustVal = this->fields.baseMaxHpAdjustVal;
  StatusUpAdjustHp = v19->static_fields->StatusUpAdjustHp;
  if ( v20 >= baseMaxHpAdjustVal )
    baseMaxHpAdjustVal = this->fields.baseSecondMaxHpAdjustVal;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v23 = v19->static_fields->StatusUpAdjustHp;
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v23 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
  }
  else
  {
    v23 = v19->static_fields->StatusUpAdjustHp;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_23;
  v24 = StatusUpAdjustHp * adjustHp;
  v25 = v23 * baseMaxHpAdjustVal;
  UIIconLabel__Set_41886452(
    (UIIconLabel_o *)resAdjustHpIconLabel,
    44,
    v24,
    v23 * baseMaxHpAdjustVal,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_23;
  if ( !System_Int32__Equals_39741700((_DWORD)baseUsrSvtData + 276, targetData->fields.adjustHp, 0LL) )
  {
    resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
    this->fields.isHpLimitUp = targetData->fields.adjustHp == this->fields.baseMaxHpAdjustVal;
    if ( !resAdjustHpIconLabel )
      goto LABEL_23;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustHpIconLabel,
      v24,
      v25,
      targetData->fields.adjustHp == this->fields.baseSecondMaxHpAdjustVal,
      0LL);
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpMaxLabel;
  if ( !resAdjustHpIconLabel )
LABEL_23:
    sub_B5D69C(resAdjustHpIconLabel, targetData);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w23
  struct ServantEntity_o *baseSvtData; // x8
  ServantExpMaster_o *v14; // x25
  struct ServantEntity_o *v15; // x8
  int32_t v16; // w21
  struct ServantEntity_o *v17; // x8
  UserServantEntity_o *v18; // x24
  int hiddenValue; // w8
  float v20; // s0

  if ( (byte_42EE4B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, getExp, nowExp, *(_QWORD *)&startLv);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE4B7 = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___);
  baseSvtData = this->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_26;
  v14 = (ServantExpMaster_o *)resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__getLevel(
                                           (ServantExpMaster_o *)resUsrSvtData,
                                           nowExp,
                                           baseSvtData->fields.expType,
                                           LevelMax,
                                           startLv,
                                           0LL);
  v15 = this->fields.baseSvtData;
  if ( !v15 )
    goto LABEL_26;
  v16 = (int)resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(
                                           v14,
                                           v15->fields.expType,
                                           (int32_t)resUsrSvtData,
                                           0LL);
  v17 = this->fields.baseSvtData;
  if ( !v17 )
    goto LABEL_26;
  v18 = resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(v14, v17->fields.expType, v16 - 1, 0LL);
  if ( resUsrSvtData )
    hiddenValue = resUsrSvtData->fields.id.fields.hiddenValue;
  else
    hiddenValue = 0;
  if ( LevelMax != startLv )
  {
    if ( this->fields.isEqCombine )
    {
      if ( !v18 )
        goto LABEL_26;
      resUsrSvtData = (UserServantEntity_o *)this->fields.resSvtEqCrExpBar;
      if ( !resUsrSvtData )
        goto LABEL_26;
LABEL_24:
      v20 = 1.0
          - (float)((float)(LODWORD(v18->fields.id.fields.hiddenValue) - nowExp)
                  / (float)(LODWORD(v18->fields.id.fields.hiddenValue) - hiddenValue));
      goto LABEL_25;
    }
    if ( v18 )
    {
      resUsrSvtData = (UserServantEntity_o *)this->fields.resCrExpBar;
      if ( resUsrSvtData )
        goto LABEL_24;
    }
LABEL_26:
    sub_B5D69C(resUsrSvtData, *(_QWORD *)&getExp);
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
  v20 = 1.0;
LABEL_25:
  UIProgressBar__set_value((UIProgressBar_o *)resUsrSvtData, v20, 0LL);
  return v16;
}


void __fastcall SvtCombineResultWindowComponent__showGetExp(
        SvtCombineResultWindowComponent_o *this,
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  __int64 Instance; // x0
  __int64 v78; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v80; // x20
  __int64 v81; // x21
  __int64 v82; // x22
  struct ServantEntity_o *Entity; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  const MethodInfo *v91; // x4
  struct UserServantEntity_o *v92; // x8
  int32_t atk; // w9
  struct UserServantEntity_o *v94; // x8
  struct UserServantEntity_o *v95; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Object_array *v103; // x21
  __int64 v104; // x0
  System_Int32_array **v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x22
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x1
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x22
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x1
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x1
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x1
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x1
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x1
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x1
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Int32_array **v175; // x1
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_Int32_array **v182; // x22
  System_Collections_Hashtable_o *v183; // x0
  UILabel_o *resSvtEqMaxLvLb; // x20
  UIWidget_o *resMaxLvWidget; // x20
  UILabel_o *infoLb; // x20
  System_String_o *v187; // x21
  Il2CppObject *v188; // x22
  Il2CppObject *v189; // x0
  struct System_Collections_Generic_List_GameObject__o *resLimitCntList; // x22
  __int64 v191; // x20
  int size; // w8
  struct UserServantEntity_o *v193; // x8
  struct UserServantEntity_o *v194; // x9
  int32_t v195; // w0
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v198; // x2
  UIWidget_o *resHpWidget; // x20
  int32_t v200; // w0
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v203; // x2
  UIWidget_o *resAtkWidget; // x19
  __int64 v205; // x0
  __int64 v206; // x0
  int v207; // [xsp+Ch] [xbp-34h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-28h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16

  if ( (byte_42EE4B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&object___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&float_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&SvtCombineResultWindowComponent_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_8782/*"MAX_LVUP_TXT"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_6023/*"EndDisp"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_15227/*"UpdateValue"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_13206/*"StartUpdateValue"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_21548/*"onstart"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v71, v72, v73);
    sub_B5D5C4(&iTween_TypeInfo, v74, v75, v76);
    byte_42EE4B6 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_96;
  v80 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v82 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v81 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v210.fields.currentCryptoKey = v82;
  *(_QWORD *)&v210.fields.fakeValue = v81;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v210, 0LL);
  if ( !v80 )
    goto LABEL_96;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v80,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseSvtData,
    (System_Int32_array **)Entity,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_96;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(resUsrSvtData->fields.limitCount, 0LL);
  v92 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = Instance;
  if ( !v92 )
    goto LABEL_96;
  this->fields.resHpVal = v92->fields.hp;
  atk = v92->fields.atk;
  v94 = this->fields.baseUsrSvtData;
  this->fields.resAtkVal = atk;
  if ( !v94 )
    goto LABEL_96;
  Instance = SvtCombineResultWindowComponent__setSvtExp(this, v78, v94->fields.exp, v94->fields.lv, v91);
  v95 = this->fields.baseUsrSvtData;
  if ( !v95 )
    goto LABEL_96;
  this->fields.PrevLevel = v95->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Instance = sub_B5D5DC(object___TypeInfo, 12LL);
  if ( !Instance )
    goto LABEL_96;
  v103 = (System_Object_array *)Instance;
  v104 = StringLiteral_19153/*"from"*/;
  if ( StringLiteral_19153/*"from"*/ )
  {
    v104 = sub_B5D684(StringLiteral_19153/*"from"*/, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
    v105 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
  }
  else
  {
    v105 = 0LL;
  }
  if ( !v103->max_length )
    goto LABEL_123;
  v103->m_Items[0] = (Il2CppObject *)v105;
  sub_B5D560((BattleServantConfConponent_o *)v103->m_Items, v105, v97, v98, v99, v100, v101, v102);
  baseLvMax = 0;
  v104 = j_il2cpp_value_box_0(float_TypeInfo, &baseLvMax);
  v112 = (System_Int32_array **)v104;
  if ( v104 )
  {
    v104 = sub_B5D684(v104, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
  }
  if ( v103->max_length <= 1 )
    goto LABEL_123;
  v103->m_Items[1] = (Il2CppObject *)v112;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[1], v112, v106, v107, v108, v109, v110, v111);
  v104 = StringLiteral_23019/*"to"*/;
  if ( StringLiteral_23019/*"to"*/ )
  {
    v104 = sub_B5D684(StringLiteral_23019/*"to"*/, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
    v119 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
  }
  else
  {
    v119 = 0LL;
  }
  if ( v103->max_length <= 2 )
    goto LABEL_123;
  v103->m_Items[2] = (Il2CppObject *)v119;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[2], v119, v113, v114, v115, v116, v117, v118);
  resLvMax = 1065353216;
  v104 = j_il2cpp_value_box_0(float_TypeInfo, &resLvMax);
  v126 = (System_Int32_array **)v104;
  if ( v104 )
  {
    v104 = sub_B5D684(v104, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
  }
  if ( v103->max_length <= 3 )
    goto LABEL_123;
  v103->m_Items[3] = (Il2CppObject *)v126;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[3], v126, v120, v121, v122, v123, v124, v125);
  v104 = StringLiteral_21548/*"onstart"*/;
  if ( StringLiteral_21548/*"onstart"*/ )
  {
    v104 = sub_B5D684(StringLiteral_21548/*"onstart"*/, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
    v133 = (System_Int32_array **)StringLiteral_21548/*"onstart"*/;
  }
  else
  {
    v133 = 0LL;
  }
  if ( v103->max_length <= 4 )
    goto LABEL_123;
  v103->m_Items[4] = (Il2CppObject *)v133;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[4], v133, v127, v128, v129, v130, v131, v132);
  v104 = StringLiteral_13206/*"StartUpdateValue"*/;
  if ( StringLiteral_13206/*"StartUpdateValue"*/ )
  {
    v104 = sub_B5D684(StringLiteral_13206/*"StartUpdateValue"*/, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
    v140 = (System_Int32_array **)StringLiteral_13206/*"StartUpdateValue"*/;
  }
  else
  {
    v140 = 0LL;
  }
  if ( v103->max_length <= 5 )
    goto LABEL_123;
  v103->m_Items[5] = (Il2CppObject *)v140;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[5], v140, v134, v135, v136, v137, v138, v139);
  v104 = StringLiteral_21551/*"onupdate"*/;
  if ( StringLiteral_21551/*"onupdate"*/ )
  {
    v104 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
    v147 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
  }
  else
  {
    v147 = 0LL;
  }
  if ( v103->max_length <= 6 )
    goto LABEL_123;
  v103->m_Items[6] = (Il2CppObject *)v147;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[6], v147, v141, v142, v143, v144, v145, v146);
  v104 = StringLiteral_15227/*"UpdateValue"*/;
  if ( StringLiteral_15227/*"UpdateValue"*/ )
  {
    v104 = sub_B5D684(StringLiteral_15227/*"UpdateValue"*/, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
    v154 = (System_Int32_array **)StringLiteral_15227/*"UpdateValue"*/;
  }
  else
  {
    v154 = 0LL;
  }
  if ( v103->max_length <= 7 )
    goto LABEL_123;
  v103->m_Items[7] = (Il2CppObject *)v154;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[7], v154, v148, v149, v150, v151, v152, v153);
  v104 = StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v104 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
    v161 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v161 = 0LL;
  }
  if ( v103->max_length <= 8 )
    goto LABEL_123;
  v103->m_Items[8] = (Il2CppObject *)v161;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[8], v161, v155, v156, v157, v158, v159, v160);
  v104 = StringLiteral_6023/*"EndDisp"*/;
  if ( StringLiteral_6023/*"EndDisp"*/ )
  {
    v104 = sub_B5D684(StringLiteral_6023/*"EndDisp"*/, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
    v168 = (System_Int32_array **)StringLiteral_6023/*"EndDisp"*/;
  }
  else
  {
    v168 = 0LL;
  }
  if ( v103->max_length <= 9 )
    goto LABEL_123;
  v103->m_Items[9] = (Il2CppObject *)v168;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[9], v168, v162, v163, v164, v165, v166, v167);
  v104 = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v104 = sub_B5D684(StringLiteral_22982/*"time"*/, v103->obj.klass->_1.element_class);
    if ( !v104 )
      goto LABEL_124;
    v175 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v175 = 0LL;
  }
  if ( v103->max_length <= 0xA )
    goto LABEL_123;
  v103->m_Items[10] = (Il2CppObject *)v175;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[10], v175, v169, v170, v171, v172, v173, v174);
  v207 = 0x40000000;
  v104 = j_il2cpp_value_box_0(float_TypeInfo, &v207);
  v182 = (System_Int32_array **)v104;
  if ( v104 )
  {
    v104 = sub_B5D684(v104, v103->obj.klass->_1.element_class);
    if ( !v104 )
    {
LABEL_124:
      v206 = sub_B5D6BC(v104);
      sub_B5D668(v206, 0LL);
    }
  }
  if ( v103->max_length <= 0xB )
  {
LABEL_123:
    v205 = sub_B5D6C8(v104);
    sub_B5D668(v205, 0LL);
  }
  v103->m_Items[11] = (Il2CppObject *)v182;
  sub_B5D560((BattleServantConfConponent_o *)&v103->m_Items[11], v182, v176, v177, v178, v179, v180, v181);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v183 = iTween__Hash(v103, 0LL);
  iTween__ValueTo(gameObject, v183, 0LL);
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
    v187 = LocalizationManager__Get((System_String_o *)StringLiteral_8782/*"MAX_LVUP_TXT"*/, 0LL);
    baseLvMax = this->fields.baseLvMax;
    v188 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseLvMax);
    resLvMax = this->fields.resLvMax;
    v189 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &resLvMax);
    Instance = (__int64)System_String__Format_44573324(v187, v188, v189, 0LL);
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
                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_96;
    UITweener__Play((UITweener_o *)Instance, 0LL);
    resLimitCntList = this->fields.resLimitCntList;
    if ( !resLimitCntList )
      goto LABEL_96;
    v191 = 0LL;
    while ( 1 )
    {
      size = resLimitCntList->fields._size;
      if ( (int)v191 >= size )
        break;
      if ( size <= (unsigned int)v191 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Instance = (__int64)resLimitCntList->fields._items->m_Items[v191];
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Instance )
        {
          SetLimitCntInfoComponent__setEnableOnImg(
            (SetLimitCntInfoComponent_o *)Instance,
            (int)v191 < this->fields.resLimitCnt,
            0LL);
          resLimitCntList = this->fields.resLimitCntList;
          ++v191;
          if ( resLimitCntList )
            continue;
        }
      }
      goto LABEL_96;
    }
  }
  v193 = this->fields.baseUsrSvtData;
  if ( !v193 )
    goto LABEL_96;
  v194 = this->fields.resUsrSvtData;
  if ( !v194 )
    goto LABEL_96;
  if ( v193->fields.lv != v194->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    v195 = (_DWORD)this + 708;
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      Instance = (__int64)System_Int32__ToString_39741776(v195, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_96;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)Instance, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      Instance = (__int64)System_Int32__ToString_39741776(v195, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_96;
      UILabel__set_text(resHpLb, (System_String_o *)Instance, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v198);
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
  v200 = (_DWORD)this + 716;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    Instance = (__int64)System_Int32__ToString_39741776(v200, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_96;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)Instance, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    Instance = (__int64)System_Int32__ToString_39741776(v200, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_96;
    UILabel__set_text(resAtkLb, (System_String_o *)Instance, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v203);
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
    sub_B5D69C(Instance, v78);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v7; // x1

  if ( (byte_42EE4BA & 1) == 0 )
  {
    sub_B5D5C4(&iTween_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42EE4BA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43300928(gameObject, 0LL);
  SvtCombineResultWindowComponent__UpdateValue(this, 1.0, v7);
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
    sub_B5D69C(0LL, method);
  System_Action__Invoke(callback, 0LL);
}