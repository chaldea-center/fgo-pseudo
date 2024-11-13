void __fastcall SvtCombineResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct SvtCombineResultWindowComponent_StaticFields *static_fields; // x0
  struct SvtCombineResultWindowComponent_StaticFields *v14; // x0
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19BFF & 1) == 0 )
  {
    sub_1BCA7E0(&SvtCombineResultWindowComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_4664/*"Combine/"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v10, v11);
    byte_4B19BFF = 1;
  }
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_BD3590;
  v12 = StringLiteral_4664/*"Combine/"*/;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4664/*"Combine/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->TUTORIAL_FOLDER, v12, v2, v3, v4, v5, v6, v7);
  v14 = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&v14->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = 0x1A00000019LL;
  v14->SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 27;
  v15 = StringLiteral_1209/*"0"*/;
  v14->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1209/*"0"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14->INIT_VAL_TXT, v15, v16, v17, v18, v19, v20, v21);
}


void __fastcall SvtCombineResultWindowComponent___ctor(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19BFE & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19BFE = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__ClickSkip(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Collider_o *skipCollider; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B19BFD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SvtCombineResultWindowComponent_EndDisp__, v4, v5);
    byte_4B19BFD = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_1BCAA3C(0LL, method);
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0LL) )
  {
    v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndDisp__, 0LL);
    SvtCombineResultWindowComponent__skipExp(this, v10, v11);
  }
}


void __fastcall SvtCombineResultWindowComponent__Close(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x0
  System_Action_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B19BFB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SvtCombineResultWindowComponent_EndClose__, v5, v6);
    byte_4B19BFB = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  SvtCombineResultWindowComponent__Close_45841692(this, v8, v9);
}


void __fastcall SvtCombineResultWindowComponent__Close_45841692(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B19BFC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SvtCombineResultWindowComponent_EndClose__, v5, v6);
    byte_4B19BFC = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, callback, method, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  SvtCombineResultWindowComponent__destroyCurrentStatusGrid(this, v5);
  SvtCombineResultWindowComponent__destroyResStatusGrid(this, v6);
}


void __fastcall SvtCombineResultWindowComponent__EndDisp(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Collider_o *skipCollider; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  OpenInfoWindowComponent_o *openInfowindowComp; // x20
  System_Collections_Generic_List_GameObject__o *resInfoList; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x4

  if ( (byte_4B19BF3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SvtCombineResultWindowComponent_EndOpen__, v6, v7);
    byte_4B19BF3 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  this->fields.isUpdateGauge = 0;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v9);
  SoundManager__stopSystemSe(0LL);
  if ( this->fields.isGetNewSkill || this->fields.isOpenQuest )
  {
    openInfowindowComp = this->fields.openInfowindowComp;
    resInfoList = this->fields.resInfoList;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v15, 1, v16);
      return;
    }
LABEL_11:
    sub_1BCAA3C(skipCollider, method);
  }
  SvtCombineResultWindowComponent__EndOpen(this, v10);
}


void __fastcall SvtCombineResultWindowComponent__EndOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Action_o *openCallBack; // x19
  __int64 v20; // x19
  SvtCombineResultWindowComponent_c *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Action_o *endTutorialCallBack; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x0
  _BOOL4 isHpLimitUp; // w9
  _BOOL4 isAtkLimitUp; // w8
  System_Int32_array *v39; // x20
  uint32_t cctor_finished; // w9
  int32_t *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL; // x8
  Il2CppObject *Instance; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x22

  if ( (byte_4B19BFA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&SvtCombineResultWindowComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__, v15, v16);
    sub_1BCA7E0(&SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, v17, v18);
    byte_4B19BFA = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
  if ( this->fields.endTutorialCallBack )
  {
    v20 = sub_1BCAA2C(SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v20, 0LL);
    if ( !v20 )
      goto LABEL_31;
    endTutorialCallBack = this->fields.endTutorialCallBack;
    *(_QWORD *)(v20 + 16) = endTutorialCallBack;
    sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)endTutorialCallBack, v23, v24, v25, v26, v27, v28);
    this->fields.endTutorialCallBack = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endTutorialCallBack, 0LL, v30, v31, v32, v33, v34, v35);
    if ( this->fields.isHpLimitUp || this->fields.isAtkLimitUp )
    {
      v36 = sub_1BCA888(int___TypeInfo, 1LL);
      isHpLimitUp = this->fields.isHpLimitUp;
      isAtkLimitUp = this->fields.isAtkLimitUp;
      v39 = (System_Int32_array *)v36;
      if ( isHpLimitUp )
      {
        v21 = SvtCombineResultWindowComponent_TypeInfo;
        cctor_finished = SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished;
        if ( isAtkLimitUp )
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v22);
            v21 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v39 )
            goto LABEL_31;
          if ( v39->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v21->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_28:
            v39->m_Items[1] = *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_29:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
            System_Action___ctor(
              v46,
              (Il2CppObject *)v20,
              Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__OpenImageDialogAssets((CommonUI_o *)Instance, v39, 2, v46, 0LL);
              return;
            }
LABEL_31:
            sub_1BCAA3C(v21, v22);
          }
        }
        else
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v22);
            v21 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v39 )
            goto LABEL_31;
          if ( v39->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v21->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
            goto LABEL_28;
          }
        }
      }
      else
      {
        if ( !isAtkLimitUp )
          goto LABEL_29;
        v21 = SvtCombineResultWindowComponent_TypeInfo;
        if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v22);
          v21 = SvtCombineResultWindowComponent_TypeInfo;
        }
        if ( !v39 )
          goto LABEL_31;
        if ( v39->max_length )
        {
          p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v21->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
          goto LABEL_28;
        }
      }
      sub_1BCAA44(v21, v22);
    }
  }
}


void __fastcall SvtCombineResultWindowComponent__InitStateInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x20

  if ( (byte_4B19BE9 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtCombineResultWindowComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B19BE9 = 1;
  }
  currentMaxLvLb = (UILabel_o *)SvtCombineResultWindowComponent_TypeInfo;
  currentLvLb = this->fields.currentLvLb;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, method);
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
    sub_1BCAA3C(currentMaxLvLb, method);
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
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 resUsrSvtData; // x0
  int v13; // w20
  __int64 v14; // x2
  const MethodInfo *v15; // x4
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v17; // x9
  float v18; // s2
  float exp; // s9
  float v20; // s1
  float v21; // s10
  float v22; // s9
  unsigned int v23; // w10
  int32_t v24; // w21
  float v25; // s0
  float Epsilon; // s4
  float v27; // s1
  struct UserServantEntity_o *v28; // x8
  struct UserServantEntity_o *v29; // x8
  struct UserServantEntity_o *v30; // x8
  int32_t v31; // w21
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  UITweener_o *v34; // x20
  _BOOL4 isEqCombine; // w8
  UIExtrusionLabel_o *v36; // x20
  UIWidget_o *resLvWidget; // x20
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v40; // x2
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v44; // x2
  UIWidget_o *resAtkWidget; // x19
  int32_t afterAtk; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t afterHp; // [xsp+8h] [xbp-48h] BYREF
  int32_t increLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19BF2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method, v3);
    sub_1BCA7E0(&Method_SvtCombineResultWindowComponent_UpdateValue__, v6, v7);
    sub_1BCA7E0(&SvtCombineResultWindowComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v10, v11);
    byte_4B19BF2 = 1;
  }
  afterAtk = 0;
  afterHp = 0;
  resUsrSvtData = (__int64)this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_66;
  resUsrSvtData = UserServantEntity__getLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
  if ( !this->fields.skipCollider )
    goto LABEL_66;
  v13 = resUsrSvtData;
  UnityEngine_Collider__set_enabled(this->fields.skipCollider, 1, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_66;
  v17 = this->fields.resUsrSvtData;
  if ( !v17 )
    goto LABEL_66;
  v18 = fminf(val, 1.0);
  exp = (float)baseUsrSvtData->fields.exp;
  if ( val < 0.0 )
    v20 = 0.0;
  else
    v20 = v18;
  v21 = v20 * (float)((float)v17->fields.exp - exp);
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v14);
    byte_4B109C0 = 1;
  }
  v22 = v21 + exp;
  resUsrSvtData = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v23 = vcvtms_s32_f32(v22);
  if ( floorf(v22) == INFINITY )
    v24 = 0x80000000;
  else
    v24 = v23;
  if ( !byte_4B109C5 )
  {
    resUsrSvtData = sub_1BCA7E0(&UnityEngine_Mathf_TypeInfo, method, v14);
    byte_4B109C5 = 1;
  }
  v25 = fmaxf(fabsf(val), 1.0) * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  v27 = fabsf(val + -1.0);
  if ( v25 <= (float)(Epsilon * 8.0) )
    v25 = Epsilon * 8.0;
  if ( v27 >= v25 )
  {
    if ( !this->fields.resUsrSvtData )
      goto LABEL_66;
  }
  else
  {
    v28 = this->fields.resUsrSvtData;
    if ( !v28 )
      goto LABEL_66;
    v24 = v28->fields.exp;
  }
  v29 = this->fields.baseUsrSvtData;
  if ( !v29 )
    goto LABEL_66;
  resUsrSvtData = SvtCombineResultWindowComponent__setSvtExp(this, (int32_t)method, v24, v29->fields.lv, v15);
  increLv = resUsrSvtData;
  v30 = this->fields.baseUsrSvtData;
  if ( !v30 )
    goto LABEL_66;
  if ( v30->fields.lv == v13 )
    return;
  v31 = resUsrSvtData;
  if ( !this->fields.isUpdateGauge )
  {
    v32 = Method_SvtCombineResultWindowComponent_UpdateValue__;
    if ( (*((_BYTE *)Method_SvtCombineResultWindowComponent_UpdateValue__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_1BCA7F8(Method_SvtCombineResultWindowComponent_UpdateValue__);
    v33 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v32, v32[4]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 3, 0LL);
    this->fields.isUpdateGauge = 1;
  }
  if ( v31 == this->fields.PrevLevel )
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
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !resUsrSvtData )
    goto LABEL_66;
  v34 = (UITweener_o *)resUsrSvtData;
  UITweener__ResetToBeginning((UITweener_o *)resUsrSvtData, 0LL);
  UITweener__PlayForward(v34, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v31;
  this->fields.endDispLvInfoFlg = 0;
  v36 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  resUsrSvtData = (__int64)System_Int32__ToString((int32_t)&increLv, 0LL);
  if ( !v36 )
    goto LABEL_66;
  UIExtrusionLabel__set_text(v36, (System_String_o *)resUsrSvtData, 0LL);
  resLvWidget = this->fields.resLvWidget;
  resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, method);
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
      resUsrSvtData = (__int64)System_Int32__ToString_63206828(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9337/*"N0"*/,
                                 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_66;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)resUsrSvtData, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      resUsrSvtData = (__int64)System_Int32__ToString_63206828(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9337/*"N0"*/,
                                 0LL);
      if ( !resHpLb )
        goto LABEL_66;
      UILabel__set_text(resHpLb, (System_String_o *)resUsrSvtData, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v40);
    }
    resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    resHpWidget = this->fields.resHpWidget;
    if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, method);
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
    resUsrSvtData = (__int64)System_Int32__ToString_63206828(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9337/*"N0"*/,
                               0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_66;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)resUsrSvtData, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    resUsrSvtData = (__int64)System_Int32__ToString_63206828(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9337/*"N0"*/,
                               0LL);
    if ( !resAtkLb )
      goto LABEL_66;
    UILabel__set_text(resAtkLb, (System_String_o *)resUsrSvtData, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v44);
  }
  resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  resAtkWidget = this->fields.resAtkWidget;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, method);
    resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resAtkWidget )
LABEL_66:
    sub_1BCAA3C(resUsrSvtData, method);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(resUsrSvtData + 184), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__checkGetSkill(
        SvtCombineResultWindowComponent_o *this,
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
  UserServantEntity_o *baseUsrSvtData; // x0
  UserServantEntity_o *v17; // x20
  int64_t hiddenValue; // x8
  UserServantEntity_o *v19; // x21
  unsigned __int64 v20; // x23
  int64_t *p_fakeValue; // x24
  int32_t i; // w22
  int32_t v23; // w20
  Il2CppObject *Entity; // x0
  __int64 v25; // x1
  UILabel_o *skillGetInfoTitle; // x21
  SkillEntity_o *v27; // x20
  UILabel_o *skillGetInfoDetail; // x21
  System_String_o *v29; // x22
  Il2CppObject *Name; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t currentCryptoKey; // x8
  _QWORD *v38; // x9
  __int64 hiddenValue_low; // x10
  int64_t v40; // x8

  if ( (byte_4B19BF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_7044/*"GET_SKILL_NAME"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_7046/*"GET_SKILL_TITLE"*/, v14, v15);
    byte_4B19BF6 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.isGetNewSkill = 0;
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(baseUsrSvtData, -1, -1, 1, -1, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_30;
  v17 = baseUsrSvtData;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSkillIdList(
                                            this->fields.resUsrSvtData,
                                            -1,
                                            -1,
                                            1,
                                            -1,
                                            0LL);
  if ( !v17 )
    goto LABEL_30;
  hiddenValue = v17->fields.id.fields.hiddenValue;
  if ( (int)hiddenValue < 1 )
    return;
  v19 = baseUsrSvtData;
  v20 = 0LL;
  p_fakeValue = &baseUsrSvtData->fields.id.fields.fakeValue;
  for ( i = (_DWORD)v17 + 32; ; i += 4 )
  {
    if ( !v19 )
      goto LABEL_30;
    if ( v20 >= LODWORD(v19->fields.id.fields.hiddenValue) || v20 >= (unsigned int)hiddenValue )
      goto LABEL_29;
    baseUsrSvtData = (UserServantEntity_o *)System_Int32__Equals_63206656(i, *((_DWORD *)p_fakeValue + v20), 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
      break;
    LODWORD(hiddenValue) = v17->fields.id.fields.hiddenValue;
    if ( (__int64)++v20 >= (int)hiddenValue )
      return;
  }
  if ( (unsigned int)v20 >= LODWORD(v19->fields.id.fields.hiddenValue) )
LABEL_29:
    sub_1BCAA44(baseUsrSvtData, method);
  v23 = *((_DWORD *)&v19->fields.id.fields.fakeValue + v20);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v23,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  v27 = (SkillEntity_o *)Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7046/*"GET_SKILL_TITLE"*/, 0LL);
  if ( !skillGetInfoTitle )
    goto LABEL_30;
  UILabel__set_text(skillGetInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7044/*"GET_SKILL_NAME"*/, 0LL);
  if ( !v27 )
    goto LABEL_30;
  v29 = (System_String_o *)baseUsrSvtData;
  Name = (Il2CppObject *)SkillEntity__getName(v27, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)System_String__Format(v29, Name, 0LL);
  if ( !skillGetInfoDetail
    || (UILabel__set_text(skillGetInfoDetail, (System_String_o *)baseUsrSvtData, 0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.resInfoList) == 0LL)
    || (method = (const MethodInfo *)this->fields.skillGetInfo,
        currentCryptoKey = baseUsrSvtData->fields.id.fields.currentCryptoKey,
        v38 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(baseUsrSvtData->fields.id.fields.hiddenValue),
        !currentCryptoKey) )
  {
LABEL_30:
    sub_1BCAA3C(baseUsrSvtData, method);
  }
  hiddenValue_low = SLODWORD(baseUsrSvtData->fields.id.fields.hiddenValue);
  if ( (unsigned int)hiddenValue_low >= *(_DWORD *)(currentCryptoKey + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)baseUsrSvtData,
      (Il2CppObject *)method,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = currentCryptoKey + 8 * hiddenValue_low;
    LODWORD(baseUsrSvtData->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
    *(_QWORD *)(v40 + 32) = method;
    sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)method, v31, v32, v33, v34, v35, v36);
  }
  this->fields.isGetNewSkill = 1;
}


void __fastcall SvtCombineResultWindowComponent__checkQuestOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_int__o *v31; // x0
  clsQuestCheck_o *Instance; // x0
  Il2CppObject *heroQuestInfo; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v35; // x20
  __int64 v36; // x21
  __int64 v37; // x22
  System_Collections_Generic_List_int__o *v38; // x0
  __int64 v39; // x1
  UILabel_o *storyQuestInfoTitle; // x21
  System_Collections_Generic_List_int__o *v41; // x20
  UILabel_o *heroQuestInfoTitle; // x21
  int32_t i; // w21
  Il2CppObject *MasterData_object; // x22
  int monitor; // w8
  clsQuestCheck_o *v46; // x22
  UILabel_o *storyQuestInfoDetail; // x23
  System_String_o *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UILabel_o *heroQuestInfoDetail; // x23
  System_String_o *v56; // x0
  UILabel_o *eventQuestInfoDetail; // x23
  System_String_o *v58; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x8
  _QWORD *v60; // x9
  __int64 cQuestReleaseListP_low; // x10
  __int64 v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4B19BF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v23, v24);
    sub_1BCA7E0(&StringLiteral_9780/*"OPEN_STORY_QUEST_TITLE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_9766/*"OPEN_EVENT_QUEST_NAME"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_9769/*"OPEN_HERO_QUEST_TITLE"*/, v29, v30);
    byte_4B19BF5 = 1;
  }
  this->fields.isOpenQuest = 0;
  v31 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_43;
  v35 = Instance;
  v37 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, heroQuestInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v37;
  *(_QWORD *)&v63.fields.fakeValue = v36;
  Instance = (clsQuestCheck_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v63, 0LL);
  if ( !v35 )
    goto LABEL_43;
  v38 = clsQuestCheck__GetReleaseQuestIdByServantLv(v35, (int32_t)Instance, this->fields.baseSvtCollectionLv, 0LL);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v41 = v38;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9780/*"OPEN_STORY_QUEST_TITLE"*/, 0LL);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, (System_String_o *)Instance, 0LL),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9769/*"OPEN_HERO_QUEST_TITLE"*/, 0LL),
        !heroQuestInfoTitle) )
  {
LABEL_43:
    sub_1BCAA3C(Instance, heroQuestInfo);
  }
  UILabel__set_text(heroQuestInfoTitle, (System_String_o *)Instance, 0LL);
  if ( v41 && v41->fields._size >= 1 )
  {
    for ( i = 0; i < v41->fields._size; ++i )
    {
      if ( System_Collections_Generic_List_int___get_Item(
             v41,
             i,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
      {
        Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
        Instance = (clsQuestCheck_o *)System_Collections_Generic_List_int___get_Item(
                                        v41,
                                        i,
                                        (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !MasterData_object )
          goto LABEL_43;
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        (int32_t)Instance,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_43;
        monitor = (int)Instance[1].monitor;
        v46 = Instance;
        switch ( monitor )
        {
          case 6:
            heroQuestInfoDetail = this->fields.heroQuestInfoDetail;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, heroQuestInfo);
            v56 = LocalizationManager__Get((System_String_o *)StringLiteral_9766/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v56,
                                            (Il2CppObject *)v46->fields.cQuestReleaseListP,
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, heroQuestInfo);
            v58 = LocalizationManager__Get((System_String_o *)StringLiteral_9766/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v58,
                                            (Il2CppObject *)v46->fields.cQuestReleaseListP,
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, heroQuestInfo);
            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9766/*"OPEN_EVENT_QUEST_NAME"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v48,
                                            (Il2CppObject *)v46->fields.cQuestReleaseListP,
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
            v60 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++HIDWORD(Instance->fields.cQuestReleaseListP);
            if ( !qrs )
              goto LABEL_43;
            cQuestReleaseListP_low = SLODWORD(Instance->fields.cQuestReleaseListP);
            if ( (unsigned int)cQuestReleaseListP_low >= qrs->fields._size )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                heroQuestInfo,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v62 = (__int64)qrs + 8 * cQuestReleaseListP_low;
              LODWORD(Instance->fields.cQuestReleaseListP) = cQuestReleaseListP_low + 1;
              *(_QWORD *)(v62 + 32) = heroQuestInfo;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)(v62 + 32),
                (int64_t)heroQuestInfo,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54);
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
  __int64 v2; // x2
  UnityEngine_Component_o *currentLimitCntGrid; // x0
  int v5; // w21
  int32_t childCount; // w20
  int v7; // w23
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  bool v10; // vf
  int32_t v11; // w20
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21

  if ( (byte_4B19BF8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19BF8 = 1;
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
  v5 = (int)currentLimitCntGrid;
  currentLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.currentSvtEqLimitCntGrid,
                                                     0LL);
  if ( !currentLimitCntGrid )
    goto LABEL_24;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)currentLimitCntGrid, 0LL);
  if ( v5 >= 1 )
  {
    v7 = v5 + 1;
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
                                                         v7 - 2,
                                                         0LL);
      if ( !currentLimitCntGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v7 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1BCAA3C(currentLimitCntGrid, method);
  }
LABEL_15:
  v10 = __OFSUB__(childCount, 1);
  v11 = childCount - 1;
  if ( v11 < 0 == v10 && (v11 & 0x80000000) == 0 )
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
                                                         v11,
                                                         0LL);
      if ( !currentLimitCntGrid )
        break;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__Destroy_70154244(v13, 0LL);
      if ( --v11 < 0 )
        return;
    }
    goto LABEL_24;
  }
}


void __fastcall SvtCombineResultWindowComponent__destroyResStatusGrid(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *resLimitCntGrid; // x0
  int v5; // w21
  int32_t childCount; // w20
  int v7; // w23
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  bool v10; // vf
  int32_t v11; // w20
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21

  if ( (byte_4B19BF9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19BF9 = 1;
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
  v5 = (int)resLimitCntGrid;
  resLimitCntGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this->fields.resSvtEqLimitCntGrid,
                                                 0LL);
  if ( !resLimitCntGrid )
    goto LABEL_24;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resLimitCntGrid, 0LL);
  if ( v5 >= 1 )
  {
    v7 = v5 + 1;
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
                                                     v7 - 2,
                                                     0LL);
      if ( !resLimitCntGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v7 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1BCAA3C(resLimitCntGrid, method);
  }
LABEL_15:
  v10 = __OFSUB__(childCount, 1);
  v11 = childCount - 1;
  if ( v11 < 0 == v10 && (v11 & 0x80000000) == 0 )
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
                                                     v11,
                                                     0LL);
      if ( !resLimitCntGrid )
        break;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__Destroy_70154244(v13, 0LL);
      if ( --v11 < 0 )
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
    sub_1BCAA3C(0LL, method);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  __int64 v26; // x1
  int64_t resUsrSvtData; // x0
  int32_t LevelMax; // w0
  _BOOL4 isEqCombine; // w8
  int32_t childCount; // w23
  UnityEngine_Transform_o *transform; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x26
  struct System_Collections_Generic_List_GameObject__o **p_resLimitCntList; // x25
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int32_t v49; // w26
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_object__o *v56; // x8
  struct System_Object_array *items; // x9
  _QWORD *v58; // x10
  __int64 size; // x11
  int64_t v60; // x1
  Il2CppClass **v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Collections_Generic_List_object__o *v71; // x20
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct UserServantEntity_o *v78; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // x20
  __int64 v80; // x21
  __int64 v81; // x22
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4B19BEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, resData, *(_QWORD *)&svtCollectionLv);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B19BEF = 1;
  }
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resUsrSvtData,
    (int64_t)resData,
    *(int64_t *)&svtCollectionLv,
    (int32_t)callback,
    (System_String_o *)endTutorialCb,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  resUsrSvtData = (int64_t)this->fields.resUsrSvtData;
  this->fields.baseSvtCollectionLv = svtCollectionLv;
  if ( !resUsrSvtData )
    goto LABEL_32;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.resLvMax = LevelMax;
  if ( isEqCombine )
  {
    resUsrSvtData = (int64_t)this->fields.resSvtEqLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_32;
  }
  else
  {
    resUsrSvtData = (int64_t)this->fields.resLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_32;
  }
  resUsrSvtData = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
  if ( !resUsrSvtData )
    goto LABEL_32;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resUsrSvtData, 0LL);
  if ( this->fields.isEqCombine )
  {
    resUsrSvtData = (int64_t)this->fields.resSvtEqLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_32;
  }
  else
  {
    resUsrSvtData = (int64_t)this->fields.resLimitCntGrid;
    if ( !resUsrSvtData )
      goto LABEL_32;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = &this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resLimitCntList, (int64_t)v35, v37, v38, v39, v40, v41, v42);
  if ( childCount >= 1 )
  {
    if ( transform )
    {
      v49 = 0;
      while ( 1 )
      {
        resUsrSvtData = (int64_t)UnityEngine_Transform__GetChild(transform, v49, 0LL);
        if ( !resUsrSvtData )
          break;
        resUsrSvtData = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resUsrSvtData, 0LL);
        v56 = (System_Collections_Generic_List_object__o *)*p_resLimitCntList;
        if ( !*p_resLimitCntList )
          break;
        items = v56->fields._items;
        v58 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v56->fields._version;
        if ( !items )
          break;
        size = v56->fields._size;
        v60 = resUsrSvtData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v56,
            (Il2CppObject *)resUsrSvtData,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          v56->fields._size = size + 1;
          v61[4] = (Il2CppClass *)v60;
          sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), v60, v50, v51, v52, v53, v54, v55);
        }
        if ( childCount == ++v49 )
          goto LABEL_23;
      }
    }
LABEL_32:
    sub_1BCAA3C(resUsrSvtData, v26);
  }
LABEL_23:
  this->fields.openCallBack = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.openCallBack, (int64_t)callback, v43, v44, v45, v46, v47, v48);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endTutorialCallBack,
    (int64_t)endTutorialCb,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v71 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v68,
                                                       v69,
                                                       v70);
  System_Collections_Generic_List_object____ctor(
    v71,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v71;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)v71, v72, v73, v74, v75, v76, v77);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  resUsrSvtData = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  resUsrSvtData = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)resUsrSvtData,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v78 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_32;
  v79 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v81 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
  v80 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  *(_QWORD *)&v84.fields.currentCryptoKey = v81;
  *(_QWORD *)&v84.fields.fakeValue = v80;
  resUsrSvtData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v84, 0LL);
  if ( !v79 )
    goto LABEL_32;
  resUsrSvtData = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             v79,
                             resUsrSvtData,
                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    SvtCombineResultWindowComponent__checkQuestOpen(this, v82);
    SvtCombineResultWindowComponent__checkGetSkill(this, v83);
  }
  SvtCombineResultWindowComponent__showGetExp(this, v82);
}


void __fastcall SvtCombineResultWindowComponent__setBaseAdjustInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t *p_baseMaxHpAdjustVal; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  struct UserServantEntity_o *v8; // x8
  int32_t adjustHp; // w22
  __int64 v10; // x8
  int v11; // w23
  int v12; // w24
  UIIconLabel_o *currentAdjustHpIconLabel; // x20
  const MethodInfo *v14; // x2
  struct UserServantEntity_o *v15; // x8
  int32_t adjustAtk; // w23
  char *v17; // x9
  int v18; // w24
  int32_t StatusUpAdjustAtk; // w25
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4B19BEC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B19BEC = 1;
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
  v8 = this->fields.baseUsrSvtData;
  if ( !v8 )
    goto LABEL_23;
  adjustHp = v8->fields.adjustHp;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, p_baseMaxHpAdjustVal);
    v8 = this->fields.baseUsrSvtData;
    if ( !v8 )
      goto LABEL_23;
    baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  }
  if ( v8->fields.adjustHp >= this->fields.baseMaxHpAdjustVal )
    v10 = 784LL;
  else
    v10 = 776LL;
  v11 = *(_DWORD *)(*(_QWORD *)&baseUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 312LL);
  v12 = *(_DWORD *)((char *)&this->klass + v10);
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( !baseUsrSvtData->fields.randomLimitCountSupport.fields.currentCryptoKey )
    j_il2cpp_runtime_class_init_0(baseUsrSvtData, p_baseMaxHpAdjustVal);
  if ( !currentAdjustHpIconLabel )
    goto LABEL_23;
  UIIconLabel__Set_38947284(
    currentAdjustHpIconLabel,
    44,
    v11 * adjustHp,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v12,
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
  SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.baseUsrSvtData, v14);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_23;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  adjustAtk = v15->fields.adjustAtk;
  v17 = "GNU";
  if ( adjustAtk < this->fields.baseMaxAtkAdjustVal )
    v17 = (char *)&dword_30C;
  v18 = *(_DWORD *)&v17[(_QWORD)this];
  StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, p_baseMaxHpAdjustVal);
  if ( !currentAdjustAtkIconLabel
    || (UIIconLabel__Set_38947284(
          currentAdjustAtkIconLabel,
          45,
          StatusUpAdjustAtk * adjustAtk,
          BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v18,
          0,
          0LL,
          0,
          0,
          0,
          0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustAtkMaxLabel) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(baseUsrSvtData, p_baseMaxHpAdjustVal);
  }
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v21);
}


void __fastcall SvtCombineResultWindowComponent__setBefResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *baseData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Collider_o *skipCollider; // x0
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x22
  UILabel_o *currentMaxLvLb; // x22
  struct UserServantEntity_o *v26; // x8
  UIExtrusionLabel_o *resLvLb; // x22
  UILabel_o *resMaxLvLb; // x22
  Il2CppObject *Component_object; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *v36; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *v44; // x0
  struct UIWidget_o **p_resHpWidget; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  Il2CppObject *v52; // x0
  struct UIWidget_o **p_resAtkWidget; // x23
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  UILabel_o *currentExpValLb; // x21
  struct UserServantEntity_o *v61; // x8
  int32_t v62; // w20
  __int64 v63; // x21
  __int64 v64; // x22
  struct UserServantEntity_o *v65; // x8
  int32_t v66; // w21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v68; // x4
  int32_t baseLimitCnt; // w21
  UnityEngine_Transform_o *v70; // x0
  const MethodInfo *v71; // x4
  struct UserServantEntity_o *v72; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v74; // x8
  UILabel_o *resHpLb; // x20
  struct UserServantEntity_o *v76; // x8
  UILabel_o *currentAtkLb; // x20
  struct UserServantEntity_o *v78; // x8
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v80; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  System_Action_o *v91; // x20
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19BEA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SvtCombineResultWindowComponent_EndOpen__, v9, v10);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v13, v14);
    byte_4B19BEA = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_48;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  v26 = this->fields.baseUsrSvtData;
  if ( !v26 )
    goto LABEL_48;
  resLvLb = this->fields.resLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v26 + 256, 0LL);
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
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resLvWidget,
    (int64_t)Component_object,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resMaxLvLb;
  if ( !skipCollider )
    goto LABEL_48;
  v36 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v36;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resMaxLvWidget, (int64_t)v36, v38, v39, v40, v41, v42, v43);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resHpLb;
  if ( !skipCollider )
    goto LABEL_48;
  v44 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resHpWidget, (int64_t)v44, v46, v47, v48, v49, v50, v51);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resAtkLb;
  if ( !skipCollider )
    goto LABEL_48;
  v52 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resAtkWidget, (int64_t)v52, v54, v55, v56, v57, v58, v59);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_48;
  v95.fields.r = 1.0;
  v95.fields.g = 1.0;
  v95.fields.b = 1.0;
  v95.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v95, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_48;
  v96.fields.r = 1.0;
  v96.fields.g = 1.0;
  v96.fields.b = 1.0;
  v96.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v96, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_48;
  v97.fields.r = 1.0;
  v97.fields.g = 1.0;
  v97.fields.b = 1.0;
  v97.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v97, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_48;
  v98.fields.r = 1.0;
  v98.fields.g = 1.0;
  v98.fields.b = 1.0;
  v98.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v98, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_48;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentExpBar;
  if ( !skipCollider )
    goto LABEL_48;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_424/*"#,0"*/,
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
  v61 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_48;
  v62 = (int)skipCollider;
  v64 = *(_QWORD *)&v61->fields.limitCount.fields.currentCryptoKey;
  v63 = *(_QWORD *)&v61->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseData);
  *(_QWORD *)&v94.fields.currentCryptoKey = v64;
  *(_QWORD *)&v94.fields.fakeValue = v63;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v94, 0LL);
  v65 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v65 )
    goto LABEL_48;
  v66 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  this->fields.baseHpVal = v65->fields.hp;
  this->fields.baseAtkVal = v65->fields.atk;
  if ( !skipCollider )
    goto LABEL_48;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v62, v66, transform, v68);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  baseLimitCnt = this->fields.baseLimitCnt;
  v70 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v62, baseLimitCnt, v70, v71);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v72 = this->fields.baseUsrSvtData;
  if ( !v72 )
    goto LABEL_48;
  currentHpLb = this->fields.currentHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int)v72 + 268,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
                                             0LL);
  if ( !currentHpLb )
    goto LABEL_48;
  UILabel__set_text(currentHpLb, (System_String_o *)skipCollider, 0LL);
  v74 = this->fields.baseUsrSvtData;
  if ( !v74 )
    goto LABEL_48;
  resHpLb = this->fields.resHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int)v74 + 268,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
                                             0LL);
  if ( !resHpLb )
    goto LABEL_48;
  UILabel__set_text(resHpLb, (System_String_o *)skipCollider, 0LL);
  v76 = this->fields.baseUsrSvtData;
  if ( !v76 )
    goto LABEL_48;
  currentAtkLb = this->fields.currentAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int)v76 + 264,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
                                             0LL);
  if ( !currentAtkLb )
    goto LABEL_48;
  UILabel__set_text(currentAtkLb, (System_String_o *)skipCollider, 0LL);
  v78 = this->fields.baseUsrSvtData;
  if ( !v78 )
    goto LABEL_48;
  resAtkLb = this->fields.resAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int)v78 + 264,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
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
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v80);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lvUpInfo, (int64_t)lvInfo, v82, v83, v84, v85, v86, v87);
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
    sub_1BCAA3C(skipCollider, baseData);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v91 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v88, v89, v90);
  System_Action___ctor(v91, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Collider_o *skipCollider; // x0
  struct UserServantEntity_o **p_baseUsrSvtData; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x23
  UILabel_o *currentSvtEqMaxLvLb; // x23
  struct UserServantEntity_o *v46; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x23
  UILabel_o *resSvtEqMaxLvLb; // x23
  Il2CppObject *Component_object; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  Il2CppObject *v56; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppObject *v64; // x0
  struct UIWidget_o **p_resHpWidget; // x23
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  Il2CppObject *v72; // x0
  struct UIWidget_o **p_resAtkWidget; // x24
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  UILabel_o *currentSvtEqExpValLb; // x22
  struct UserServantEntity_o *v81; // x8
  int32_t v82; // w21
  __int64 v83; // x22
  __int64 v84; // x23
  struct UserServantEntity_o *v85; // x8
  int32_t v86; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v88; // x4
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *v90; // x0
  const MethodInfo *v91; // x4
  struct UserServantEntity_o *v92; // x8
  UILabel_o *currentSvtEqHpLb; // x21
  struct UserServantEntity_o *v94; // x8
  UILabel_o *resSvtEqHpLb; // x21
  struct UserServantEntity_o *v96; // x8
  UILabel_o *currentSvtEqAtkLb; // x21
  struct UserServantEntity_o *v98; // x8
  UILabel_o *resSvtEqAtkLb; // x21
  UILabel_o *normalExpLb; // x21
  UILabel_o *normalExpOverSpLb; // x21
  UIWidget_o *v102; // x21
  UIWidget_o *v103; // x22
  UnityEngine_GameObject_o *v104; // x24
  Il2CppObject *v105; // x23
  Il2CppObject *v106; // x0
  Il2CppObject *v107; // x20
  __int64 v108; // x1
  SvtCombineResultWindowComponent_c *v109; // x0
  __int64 v110; // x1
  Il2CppObject *v111; // x0
  System_String_o *v112; // x20
  UnityEngine_Transform_o *v113; // x0
  UnityEngine_GameObject_o *v114; // x20
  UnityEngine_Transform_o *v115; // x21
  int v116; // s0
  Il2CppObject *ComponentInChildren_object; // x21
  __int64 v120; // x1
  Il2CppObject *v121; // x20
  UILabel_o *addExpLb; // x20
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  System_Action_o *v133; // x20
  intptr_t m_CachedPtr; // [xsp+0h] [xbp-60h] BYREF
  float barExp; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v137; // [xsp+18h] [xbp-48h] BYREF
  int32_t v138; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  UnityEngine_Color_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v142; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v143; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v137 = addExp;
  v138 = normalExp;
  if ( (byte_4B19BEB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, *(_QWORD *)&resInfo);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SvtCombineResultWindowComponent_EndOpen__, v25, v26);
    sub_1BCA7E0(&SvtCombineResultWindowComponent_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_4675/*"CombineSuccessEffect_{0:D2}"*/, v33, v34);
    byte_4B19BEB = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
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
  v46 = this->fields.baseUsrSvtData;
  if ( !v46 )
    goto LABEL_90;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v46 + 256, 0LL);
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
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resLvWidget,
    (int64_t)Component_object,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqMaxLvLb;
  if ( !skipCollider )
    goto LABEL_90;
  v56 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v56;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resMaxLvWidget, (int64_t)v56, v58, v59, v60, v61, v62, v63);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqHpLb;
  if ( !skipCollider )
    goto LABEL_90;
  v64 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v64;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resHpWidget, (int64_t)v64, v66, v67, v68, v69, v70, v71);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqAtkLb;
  if ( !skipCollider )
    goto LABEL_90;
  v72 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v72;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resAtkWidget, (int64_t)v72, v74, v75, v76, v77, v78, v79);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_90;
  v140.fields.r = 1.0;
  v140.fields.g = 1.0;
  v140.fields.b = 1.0;
  v140.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v140, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_90;
  v141.fields.r = 1.0;
  v141.fields.g = 1.0;
  v141.fields.b = 1.0;
  v141.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v141, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_90;
  v142.fields.r = 1.0;
  v142.fields.g = 1.0;
  v142.fields.b = 1.0;
  v142.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v142, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_90;
  v143.fields.r = 1.0;
  v143.fields.g = 1.0;
  v143.fields.b = 1.0;
  v143.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v143, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_90;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_90;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_424/*"#,0"*/,
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
  v81 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_90;
  v82 = (int)skipCollider;
  v84 = *(_QWORD *)&v81->fields.limitCount.fields.currentCryptoKey;
  v83 = *(_QWORD *)&v81->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseData);
  *(_QWORD *)&v139.fields.currentCryptoKey = v84;
  *(_QWORD *)&v139.fields.fakeValue = v83;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                             v139,
                                             0LL);
  v85 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v85 )
    goto LABEL_90;
  v86 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = v85->fields.hp;
  this->fields.baseAtkVal = v85->fields.atk;
  if ( !skipCollider )
    goto LABEL_90;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v82, v86, transform, v88);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  baseLimitCnt = this->fields.baseLimitCnt;
  v90 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v82, baseLimitCnt, v90, v91);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v92 = this->fields.baseUsrSvtData;
  if ( !v92 )
    goto LABEL_90;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int)v92 + 268,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqHpLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v94 = this->fields.baseUsrSvtData;
  if ( !v94 )
    goto LABEL_90;
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int)v94 + 268,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
                                             0LL);
  if ( !resSvtEqHpLb )
    goto LABEL_90;
  UILabel__set_text(resSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v96 = this->fields.baseUsrSvtData;
  if ( !v96 )
    goto LABEL_90;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int)v96 + 264,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
                                             0LL);
  if ( !currentSvtEqAtkLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  v98 = this->fields.baseUsrSvtData;
  if ( !v98 )
    goto LABEL_90;
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int)v98 + 264,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
                                             0LL);
  if ( !resSvtEqAtkLb )
    goto LABEL_90;
  UILabel__set_text(resSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  normalExpLb = this->fields.normalExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int32_t)&v138,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
                                             0LL);
  if ( !normalExpLb )
    goto LABEL_90;
  UILabel__set_text(normalExpLb, (System_String_o *)skipCollider, 0LL);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int32_t)&v138,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
                                             0LL);
  if ( !normalExpOverSpLb )
    goto LABEL_90;
  UILabel__set_text(normalExpOverSpLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !skipCollider )
    goto LABEL_90;
  v144.fields.r = 1.0;
  v144.fields.g = 1.0;
  v144.fields.b = 1.0;
  v144.fields.a = 1.0;
  v102 = (UIWidget_o *)skipCollider;
  UIWidget__set_color((UIWidget_o *)skipCollider, v144, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_90;
  v103 = (UIWidget_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_90;
  v104 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  if ( !v104 )
    goto LABEL_90;
  v105 = UnityEngine_GameObject__GetComponent_object_(
           v104,
           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v106 = UnityEngine_GameObject__GetComponent_object_(
           v104,
           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
    goto LABEL_83;
  v107 = v106;
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v109 = SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v108);
    v109 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color(v102, v109->static_fields->COLOR_VAL, 0LL);
  if ( !v103 )
    goto LABEL_90;
  UIWidget__set_color(v103, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v110);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v105, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v105 )
      goto LABEL_90;
    LODWORD(v105[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v105, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, baseData);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v107, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v107 )
      goto LABEL_90;
    LODWORD(v107[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v107, 0LL);
  }
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int32_t)&v138, 0LL);
  if ( !skipCollider )
    goto LABEL_90;
  m_CachedPtr = skipCollider->fields.m_CachedPtr;
  v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr);
  skipCollider = (UnityEngine_Collider_o *)System_String__Format((System_String_o *)StringLiteral_4675/*"CombineSuccessEffect_{0:D2}"*/, v111, 0LL);
  if ( !this->fields.dispNodeObj )
    goto LABEL_90;
  v112 = (System_String_o *)skipCollider;
  v113 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL);
  skipCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__getEffect(v112, v113, 0LL);
  if ( !skipCollider
    || (v114 = (UnityEngine_GameObject_o *)skipCollider,
        skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)skipCollider,
                                                   0LL),
        !this->fields.dispNodeObj)
    || (v115 = (UnityEngine_Transform_o *)skipCollider,
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v116 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)skipCollider,
                                            0LL),
        !v115) )
  {
LABEL_90:
    sub_1BCAA3C(skipCollider, baseData);
  }
  UnityEngine_Transform__set_localPosition(v115, *(UnityEngine_Vector3_o *)&v116, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v114,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v121 = UnityEngine_GameObject__GetComponentInChildren_object_(
           v114,
           (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v120);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, baseData);
    skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v121, 0LL, 0LL);
    if ( ((unsigned __int8)skipCollider & 1) != 0 )
    {
      if ( !v121 )
        goto LABEL_90;
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v121, 0LL);
    }
  }
LABEL_83:
  addExpLb = this->fields.addExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63206828(
                                             (int32_t)&v137,
                                             (System_String_o *)StringLiteral_9337/*"N0"*/,
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.lvUpInfo,
    (int64_t)svtEqLvInfo,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
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
  v133 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v130, v131, v132);
  System_Action___ctor(v133, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v133, 0, 0LL);
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
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x24
  __int64 v13; // x2
  UnityEngine_Transform_o *v14; // x25

  if ( (byte_4B19BF7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___,
      *(_QWORD *)&maxLimitCnt,
      *(_QWORD *)&svtLimitCnt);
    byte_4B19BF7 = 1;
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
      v14 = (UnityEngine_Transform_o *)Object;
      if ( !byte_4B109C1 )
      {
        Object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v11, v13);
        byte_4B109C1 = 1;
      }
      if ( !v14
        || (UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v12,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0LL) )
      {
LABEL_12:
        sub_1BCAA3C(Object, v11);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *resAdjustAtkIconLabel; // x0
  int32_t adjustAtk; // w21
  BalanceConfig_c *v11; // x0
  uint32_t cctor_finished; // w8
  int32_t v13; // w9
  bool v14; // cc
  char *v15; // x9
  int32_t StatusUpAdjustAtk; // w23
  int v17; // w24
  int32_t v18; // w8
  int32_t v19; // w21
  int32_t v20; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  int32_t v22; // w8
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19BEE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, targetData, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B19BEE = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       resAdjustAtkIconLabel,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  v23.fields.r = 1.0;
  v23.fields.g = 1.0;
  v23.fields.b = 1.0;
  v23.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustAtkIconLabel, v23, 0LL);
  if ( !targetData )
    goto LABEL_21;
  adjustAtk = targetData->fields.adjustAtk;
  v11 = BalanceConfig_TypeInfo;
  cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  if ( cctor_finished )
  {
    v13 = targetData->fields.adjustAtk;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, targetData);
    v11 = BalanceConfig_TypeInfo;
    v13 = targetData->fields.adjustAtk;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  }
  v14 = v13 < this->fields.baseMaxAtkAdjustVal;
  v15 = (char *)&dword_30C;
  if ( !v14 )
    v15 = "GNU";
  StatusUpAdjustAtk = v11->static_fields->StatusUpAdjustAtk;
  v17 = *(_DWORD *)&v15[(_QWORD)this];
  if ( cctor_finished )
  {
    v18 = v11->static_fields->StatusUpAdjustAtk;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v11, targetData);
    v18 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  v19 = StatusUpAdjustAtk * adjustAtk;
  v20 = v18 * v17;
  UIIconLabel__Set_38947284((UIIconLabel_o *)resAdjustAtkIconLabel, 45, v19, v18 * v17, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_63206656((_DWORD)baseUsrSvtData + 272, targetData->fields.adjustAtk, 0LL) )
  {
    v22 = targetData->fields.adjustAtk;
    resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
    this->fields.isAtkLimitUp = v22 == this->fields.baseMaxAtkAdjustVal;
    if ( !resAdjustAtkIconLabel )
      goto LABEL_21;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustAtkIconLabel,
      v19,
      v20,
      v22 == this->fields.baseSecondMaxAtkAdjustVal,
      0LL);
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkMaxLabel;
  if ( !resAdjustAtkIconLabel )
LABEL_21:
    sub_1BCAA3C(resAdjustAtkIconLabel, targetData);
  UILabel__set_text((UILabel_o *)resAdjustAtkIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall SvtCombineResultWindowComponent__setResAdjustHpInfo(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *targetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *resAdjustHpIconLabel; // x0
  int32_t adjustHp; // w21
  BalanceConfig_c *v11; // x0
  uint32_t cctor_finished; // w8
  int32_t v13; // w9
  bool v14; // cc
  __int64 v15; // x9
  int32_t StatusUpAdjustHp; // w23
  int v17; // w24
  int32_t v18; // w8
  int32_t v19; // w21
  int32_t v20; // w22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  int32_t v22; // w8
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19BED & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, targetData, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B19BED = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  resAdjustHpIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      resAdjustHpIconLabel,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  v23.fields.r = 1.0;
  v23.fields.g = 1.0;
  v23.fields.b = 1.0;
  v23.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustHpIconLabel, v23, 0LL);
  if ( !targetData )
    goto LABEL_21;
  adjustHp = targetData->fields.adjustHp;
  v11 = BalanceConfig_TypeInfo;
  cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  if ( cctor_finished )
  {
    v13 = targetData->fields.adjustHp;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, targetData);
    v11 = BalanceConfig_TypeInfo;
    v13 = targetData->fields.adjustHp;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  }
  v14 = v13 < this->fields.baseMaxHpAdjustVal;
  v15 = 776LL;
  if ( !v14 )
    v15 = 784LL;
  StatusUpAdjustHp = v11->static_fields->StatusUpAdjustHp;
  v17 = *(_DWORD *)((char *)&this->klass + v15);
  if ( cctor_finished )
  {
    v18 = v11->static_fields->StatusUpAdjustHp;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v11, targetData);
    v18 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  v19 = StatusUpAdjustHp * adjustHp;
  v20 = v18 * v17;
  UIIconLabel__Set_38947284((UIIconLabel_o *)resAdjustHpIconLabel, 44, v19, v18 * v17, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_63206656((_DWORD)baseUsrSvtData + 276, targetData->fields.adjustHp, 0LL) )
  {
    v22 = targetData->fields.adjustHp;
    resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
    this->fields.isHpLimitUp = v22 == this->fields.baseMaxHpAdjustVal;
    if ( !resAdjustHpIconLabel )
      goto LABEL_21;
    UIIconLabel__SetCombineResTxt(
      (UIIconLabel_o *)resAdjustHpIconLabel,
      v19,
      v20,
      v22 == this->fields.baseSecondMaxHpAdjustVal,
      0LL);
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpMaxLabel;
  if ( !resAdjustHpIconLabel )
LABEL_21:
    sub_1BCAA3C(resAdjustHpIconLabel, targetData);
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
  __int64 v9; // x2
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w23
  struct ServantEntity_o *baseSvtData; // x8
  ServantExpMaster_o *v13; // x25
  struct ServantEntity_o *v14; // x8
  int32_t v15; // w21
  struct ServantEntity_o *v16; // x8
  UserServantEntity_o *v17; // x24
  int hiddenValue; // w8
  float v19; // s0

  if ( (byte_4B19BF1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp, *(_QWORD *)&nowExp);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19BF1 = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  baseSvtData = this->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_26;
  v13 = (ServantExpMaster_o *)resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__getLevel(
                                           (ServantExpMaster_o *)resUsrSvtData,
                                           nowExp,
                                           baseSvtData->fields.expType,
                                           LevelMax,
                                           startLv,
                                           0LL);
  v14 = this->fields.baseSvtData;
  if ( !v14 )
    goto LABEL_26;
  v15 = (int)resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(
                                           v13,
                                           v14->fields.expType,
                                           (int32_t)resUsrSvtData,
                                           0LL);
  v16 = this->fields.baseSvtData;
  if ( !v16 )
    goto LABEL_26;
  v17 = resUsrSvtData;
  resUsrSvtData = (UserServantEntity_o *)ServantExpMaster__GetEntity(v13, v16->fields.expType, v15 - 1, 0LL);
  if ( resUsrSvtData )
    hiddenValue = resUsrSvtData->fields.id.fields.hiddenValue;
  else
    hiddenValue = 0;
  if ( LevelMax != startLv )
  {
    if ( this->fields.isEqCombine )
    {
      if ( !v17 )
        goto LABEL_26;
      resUsrSvtData = (UserServantEntity_o *)this->fields.resSvtEqCrExpBar;
      if ( !resUsrSvtData )
        goto LABEL_26;
LABEL_24:
      v19 = 1.0
          - (float)((float)(LODWORD(v17->fields.id.fields.hiddenValue) - nowExp)
                  / (float)(LODWORD(v17->fields.id.fields.hiddenValue) - hiddenValue));
      goto LABEL_25;
    }
    if ( v17 )
    {
      resUsrSvtData = (UserServantEntity_o *)this->fields.resCrExpBar;
      if ( resUsrSvtData )
        goto LABEL_24;
    }
LABEL_26:
    sub_1BCAA3C(resUsrSvtData, *(_QWORD *)&getExp);
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
  v19 = 1.0;
LABEL_25:
  UIProgressBar__set_value((UIProgressBar_o *)resUsrSvtData, v19, 0LL);
  return v15;
}


void __fastcall SvtCombineResultWindowComponent__showGetExp(
        SvtCombineResultWindowComponent_o *this,
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
  __int64 Instance; // x0
  __int64 v53; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x20
  __int64 v56; // x21
  __int64 v57; // x22
  Il2CppObject *Entity; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  const MethodInfo *v66; // x4
  struct UserServantEntity_o *v67; // x8
  int32_t atk; // w9
  struct UserServantEntity_o *v69; // x8
  struct UserServantEntity_o *v70; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Object_array *v78; // x21
  __int64 v79; // x0
  int64_t v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x22
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x22
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  int64_t v149; // x22
  __int64 v150; // x1
  System_Collections_Hashtable_o *v151; // x0
  struct UserServantEntity_o *v152; // x8
  struct UserServantEntity_o *v153; // x9
  int32_t v154; // w0
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resSvtEqMaxLvLb; // x20
  UIWidget_o *resMaxLvWidget; // x20
  __int64 v158; // x1
  UILabel_o *infoLb; // x20
  System_String_o *v160; // x21
  Il2CppObject *v161; // x22
  Il2CppObject *v162; // x0
  int32_t v163; // w20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v165; // x2
  UIWidget_o *resHpWidget; // x20
  int32_t v167; // w0
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v170; // x2
  UIWidget_o *resAtkWidget; // x19
  __int64 v172; // x0
  int v173; // [xsp+Ch] [xbp-44h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-38h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  if ( (byte_4B19BF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&object___TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&float_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&SvtCombineResultWindowComponent_TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_8711/*"MAX_LVUP_TXT"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_6068/*"EndDisp"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_15361/*"UpdateValue"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_13125/*"StartUpdateValue"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_22518/*"onstart"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v48, v49);
    sub_1BCA7E0(&iTween_TypeInfo, v50, v51);
    byte_4B19BF0 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_97;
  v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v57 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
  *(_QWORD *)&v176.fields.currentCryptoKey = v57;
  *(_QWORD *)&v176.fields.fakeValue = v56;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v176, 0LL);
  if ( !v55 )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v55,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = (struct ServantEntity_o *)Entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSvtData, (int64_t)Entity, v59, v60, v61, v62, v63, v64);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_97;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(resUsrSvtData->fields.limitCount, 0LL);
  v67 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = Instance;
  if ( !v67 )
    goto LABEL_97;
  this->fields.resHpVal = v67->fields.hp;
  atk = v67->fields.atk;
  v69 = this->fields.baseUsrSvtData;
  this->fields.resAtkVal = atk;
  if ( !v69 )
    goto LABEL_97;
  Instance = SvtCombineResultWindowComponent__setSvtExp(this, v53, v69->fields.exp, v69->fields.lv, v66);
  v70 = this->fields.baseUsrSvtData;
  if ( !v70 )
    goto LABEL_97;
  this->fields.PrevLevel = v70->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Instance = sub_1BCA888(object___TypeInfo, 12LL);
  if ( !Instance )
    goto LABEL_97;
  v78 = (System_Object_array *)Instance;
  v79 = StringLiteral_19858/*"from"*/;
  if ( StringLiteral_19858/*"from"*/ )
  {
    v79 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
    v80 = StringLiteral_19858/*"from"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( !v78->max_length )
    goto LABEL_115;
  v78->m_Items[0] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)v78->m_Items, v80, v72, v73, v74, v75, v76, v77);
  baseLvMax = 0;
  v79 = j_il2cpp_value_box_0(float_TypeInfo, &baseLvMax);
  v87 = v79;
  if ( v79 )
  {
    v79 = sub_1BCA91C(v79, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
  }
  if ( v78->max_length <= 1 )
    goto LABEL_115;
  v78->m_Items[1] = (Il2CppObject *)v87;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[1], v87, v81, v82, v83, v84, v85, v86);
  v79 = StringLiteral_24219/*"to"*/;
  if ( StringLiteral_24219/*"to"*/ )
  {
    v79 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
    v80 = StringLiteral_24219/*"to"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v78->max_length <= 2 )
    goto LABEL_115;
  v78->m_Items[2] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[2], v80, v88, v89, v90, v91, v92, v93);
  resLvMax = 1065353216;
  v79 = j_il2cpp_value_box_0(float_TypeInfo, &resLvMax);
  v100 = v79;
  if ( v79 )
  {
    v79 = sub_1BCA91C(v79, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
  }
  if ( v78->max_length <= 3 )
    goto LABEL_115;
  v78->m_Items[3] = (Il2CppObject *)v100;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[3], v100, v94, v95, v96, v97, v98, v99);
  v79 = StringLiteral_22518/*"onstart"*/;
  if ( StringLiteral_22518/*"onstart"*/ )
  {
    v79 = sub_1BCA91C(StringLiteral_22518/*"onstart"*/, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
    v80 = StringLiteral_22518/*"onstart"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v78->max_length <= 4 )
    goto LABEL_115;
  v78->m_Items[4] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[4], v80, v101, v102, v103, v104, v105, v106);
  v79 = StringLiteral_13125/*"StartUpdateValue"*/;
  if ( StringLiteral_13125/*"StartUpdateValue"*/ )
  {
    v79 = sub_1BCA91C(StringLiteral_13125/*"StartUpdateValue"*/, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
    v80 = StringLiteral_13125/*"StartUpdateValue"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v78->max_length <= 5 )
    goto LABEL_115;
  v78->m_Items[5] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[5], v80, v107, v108, v109, v110, v111, v112);
  v79 = StringLiteral_22521/*"onupdate"*/;
  if ( StringLiteral_22521/*"onupdate"*/ )
  {
    v79 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
    v80 = StringLiteral_22521/*"onupdate"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v78->max_length <= 6 )
    goto LABEL_115;
  v78->m_Items[6] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[6], v80, v113, v114, v115, v116, v117, v118);
  v79 = StringLiteral_15361/*"UpdateValue"*/;
  if ( StringLiteral_15361/*"UpdateValue"*/ )
  {
    v79 = sub_1BCA91C(StringLiteral_15361/*"UpdateValue"*/, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
    v80 = StringLiteral_15361/*"UpdateValue"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v78->max_length <= 7 )
    goto LABEL_115;
  v78->m_Items[7] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[7], v80, v119, v120, v121, v122, v123, v124);
  v79 = StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v79 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
    v80 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v78->max_length <= 8 )
    goto LABEL_115;
  v78->m_Items[8] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[8], v80, v125, v126, v127, v128, v129, v130);
  v79 = StringLiteral_6068/*"EndDisp"*/;
  if ( StringLiteral_6068/*"EndDisp"*/ )
  {
    v79 = sub_1BCA91C(StringLiteral_6068/*"EndDisp"*/, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
    v80 = StringLiteral_6068/*"EndDisp"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v78->max_length <= 9 )
    goto LABEL_115;
  v78->m_Items[9] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[9], v80, v131, v132, v133, v134, v135, v136);
  v79 = StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v79 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v78->obj.klass->_1.element_class);
    if ( !v79 )
      goto LABEL_116;
    v80 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v78->max_length <= 0xA )
    goto LABEL_115;
  v78->m_Items[10] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[10], v80, v137, v138, v139, v140, v141, v142);
  v173 = 0x40000000;
  v79 = j_il2cpp_value_box_0(float_TypeInfo, &v173);
  v149 = v79;
  if ( v79 )
  {
    v79 = sub_1BCA91C(v79, v78->obj.klass->_1.element_class);
    if ( !v79 )
    {
LABEL_116:
      v172 = sub_1BCAA60(v79);
      sub_1BCA908(v172, 0LL);
    }
  }
  if ( v78->max_length <= 0xB )
LABEL_115:
    sub_1BCAA44(v79, v80);
  v78->m_Items[11] = (Il2CppObject *)v149;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[11], v149, v143, v144, v145, v146, v147, v148);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v150);
  v151 = iTween__Hash(v78, 0LL);
  iTween__ValueTo(gameObject, v151, 0LL);
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
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v53);
      Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resMaxLvWidget )
      goto LABEL_97;
    UIWidget__set_color(resMaxLvWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
    infoLb = this->fields.infoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v158);
    v160 = LocalizationManager__Get((System_String_o *)StringLiteral_8711/*"MAX_LVUP_TXT"*/, 0LL);
    baseLvMax = this->fields.baseLvMax;
    v161 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseLvMax);
    resLvMax = this->fields.resLvMax;
    v162 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &resLvMax);
    Instance = (__int64)System_String__Format_62415592(v160, v161, v162, 0LL);
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
                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_97;
    UITweener__PlayForward((UITweener_o *)Instance, 0LL);
    Instance = (__int64)this->fields.resLimitCntList;
    if ( !Instance )
      goto LABEL_97;
    v163 = 0;
    while ( v163 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v163,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Instance )
        {
          SetLimitCntInfoComponent__setEnableOnImg(
            (SetLimitCntInfoComponent_o *)Instance,
            v163 < this->fields.resLimitCnt,
            0LL);
          Instance = (__int64)this->fields.resLimitCntList;
          ++v163;
          if ( Instance )
            continue;
        }
      }
      goto LABEL_97;
    }
  }
  v152 = this->fields.baseUsrSvtData;
  if ( !v152 )
    goto LABEL_97;
  v153 = this->fields.resUsrSvtData;
  if ( !v153 )
    goto LABEL_97;
  if ( v152->fields.lv != v153->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    v154 = (_DWORD)this + 716;
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      Instance = (__int64)System_Int32__ToString_63206828(v154, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_97;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)Instance, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      Instance = (__int64)System_Int32__ToString_63206828(v154, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_97;
      UILabel__set_text(resHpLb, (System_String_o *)Instance, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v165);
    }
    resHpWidget = this->fields.resHpWidget;
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v53);
      Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    }
    if ( !resHpWidget )
      goto LABEL_97;
    UIWidget__set_color(resHpWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  v167 = (_DWORD)this + 724;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    Instance = (__int64)System_Int32__ToString_63206828(v167, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_97;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)Instance, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    Instance = (__int64)System_Int32__ToString_63206828(v167, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_97;
    UILabel__set_text(resAtkLb, (System_String_o *)Instance, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v170);
  }
  resAtkWidget = this->fields.resAtkWidget;
  Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v53);
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  }
  if ( !resAtkWidget )
LABEL_97:
    sub_1BCAA3C(Instance, v53);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4B19BF4 & 1) == 0 )
  {
    sub_1BCA7E0(&iTween_TypeInfo, callback, method);
    byte_4B19BF4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v5);
  iTween__Stop_61049892(gameObject, 0LL);
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
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}