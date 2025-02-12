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
  __int64 v9; // x1
  int64_t v10; // x1
  struct SvtCombineResultWindowComponent_StaticFields *static_fields; // x0
  struct SvtCombineResultWindowComponent_StaticFields *v12; // x0
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BB81A9 & 1) == 0 )
  {
    sub_1C13D24(&SvtCombineResultWindowComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_4678/*"ColumnName is required when it is part of a DataTable."*/, v8);
    sub_1C13D24(&StringLiteral_1212/*"0"*/, v9);
    byte_4BB81A9 = 1;
  }
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_BF7310;
  v10 = StringLiteral_4678/*"ColumnName is required when it is part of a DataTable."*/;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4678/*"ColumnName is required when it is part of a DataTable."*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->TUTORIAL_FOLDER, v10, v2, v3, v4, v5, v6, v7);
  v12 = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&v12->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = 0x1A00000019LL;
  v12->SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 27;
  v13 = StringLiteral_1212/*"0"*/;
  v12->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1212/*"0"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v12->INIT_VAL_TXT, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall SvtCombineResultWindowComponent___ctor(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB81A8 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB81A8 = 1;
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
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4BB81A7 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SvtCombineResultWindowComponent_EndDisp__, v3);
    byte_4BB81A7 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_1C13F80(0LL, method);
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0LL) )
  {
    v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndDisp__, 0LL);
    SvtCombineResultWindowComponent__skipExp(this, v5, v6);
  }
}


void __fastcall SvtCombineResultWindowComponent__Close(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x0
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BB81A5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SvtCombineResultWindowComponent_EndClose__, v3);
    byte_4BB81A5 = 1;
  }
  v4 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  SvtCombineResultWindowComponent__Close_46315864(this, v5, v6);
}


void __fastcall SvtCombineResultWindowComponent__Close_46315864(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4BB81A6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_SvtCombineResultWindowComponent_EndClose__, v4);
    byte_4BB81A6 = 1;
  }
  v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_1C13F80(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  SvtCombineResultWindowComponent__destroyCurrentStatusGrid(this, v5);
  SvtCombineResultWindowComponent__destroyResStatusGrid(this, v6);
}


void __fastcall SvtCombineResultWindowComponent__EndDisp(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  const MethodInfo *v6; // x1
  OpenInfoWindowComponent_o *openInfowindowComp; // x20
  System_Collections_Generic_List_GameObject__o *resInfoList; // x21
  System_Action_o *v9; // x22
  const MethodInfo *v10; // x4

  if ( (byte_4BB819D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&SoundManager_TypeInfo, v3);
    sub_1C13D24(&Method_SvtCombineResultWindowComponent_EndOpen__, v4);
    byte_4BB819D = 1;
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
    v9 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
    if ( openInfowindowComp )
    {
      OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v9, 1, v10);
      return;
    }
LABEL_11:
    sub_1C13F80(skipCollider, method);
  }
  SvtCombineResultWindowComponent__EndOpen(this, v6);
}


void __fastcall SvtCombineResultWindowComponent__EndOpen(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Action_o *openCallBack; // x19
  __int64 v15; // x19
  SvtCombineResultWindowComponent_c *v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Action_o *endTutorialCallBack; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x0
  _BOOL4 isHpLimitUp; // w9
  _BOOL4 isAtkLimitUp; // w8
  System_Int32_array *v34; // x20
  uint32_t cctor_finished; // w9
  int32_t *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL; // x8
  Il2CppObject *Instance; // x21
  System_Action_o *v38; // x22

  if ( (byte_4BB81A4 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&int___TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C13D24(&SvtCombineResultWindowComponent_TypeInfo, v11);
    sub_1C13D24(&Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__, v12);
    sub_1C13D24(&SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo, v13);
    byte_4BB81A4 = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
  if ( this->fields.endTutorialCallBack )
  {
    v15 = sub_1C13F70(SvtCombineResultWindowComponent___c__DisplayClass127_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 )
      goto LABEL_31;
    endTutorialCallBack = this->fields.endTutorialCallBack;
    *(_QWORD *)(v15 + 16) = endTutorialCallBack;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)endTutorialCallBack, v18, v19, v20, v21, v22, v23);
    this->fields.endTutorialCallBack = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.endTutorialCallBack, 0LL, v25, v26, v27, v28, v29, v30);
    if ( this->fields.isHpLimitUp || this->fields.isAtkLimitUp )
    {
      v31 = sub_1C13DCC(int___TypeInfo, 1LL);
      isHpLimitUp = this->fields.isHpLimitUp;
      isAtkLimitUp = this->fields.isAtkLimitUp;
      v34 = (System_Int32_array *)v31;
      if ( isHpLimitUp )
      {
        v16 = SvtCombineResultWindowComponent_TypeInfo;
        cctor_finished = SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished;
        if ( isAtkLimitUp )
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v16 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v34 )
            goto LABEL_31;
          if ( v34->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v16->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_28:
            v34->m_Items[1] = *p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
LABEL_29:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v38 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(
              v38,
              (Il2CppObject *)v15,
              Method_SvtCombineResultWindowComponent___c__DisplayClass127_0__EndOpen_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__OpenImageDialogAssets((CommonUI_o *)Instance, v34, 2, v38, 0LL);
              return;
            }
LABEL_31:
            sub_1C13F80(v16, v17);
          }
        }
        else
        {
          if ( !cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
            v16 = SvtCombineResultWindowComponent_TypeInfo;
          }
          if ( !v34 )
            goto LABEL_31;
          if ( v34->max_length )
          {
            p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v16->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
            goto LABEL_28;
          }
        }
      }
      else
      {
        if ( !isAtkLimitUp )
          goto LABEL_29;
        v16 = SvtCombineResultWindowComponent_TypeInfo;
        if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
          v16 = SvtCombineResultWindowComponent_TypeInfo;
        }
        if ( !v34 )
          goto LABEL_31;
        if ( v34->max_length )
        {
          p_SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL = &v16->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
          goto LABEL_28;
        }
      }
      sub_1C13F88(v16, v17);
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

  if ( (byte_4BB8193 & 1) == 0 )
  {
    sub_1C13D24(&SvtCombineResultWindowComponent_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v3);
    byte_4BB8193 = 1;
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
    sub_1C13F80(currentMaxLvLb, method);
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
  const MethodInfo *v10; // x4
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v12; // x9
  float v13; // s2
  float exp; // s9
  float v15; // s1
  float v16; // s10
  float v17; // s9
  unsigned int v18; // w10
  int32_t v19; // w21
  float v20; // s0
  float Epsilon; // s4
  float v22; // s1
  struct UserServantEntity_o *v23; // x8
  struct UserServantEntity_o *v24; // x8
  struct UserServantEntity_o *v25; // x8
  int32_t v26; // w21
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  UITweener_o *v29; // x20
  _BOOL4 isEqCombine; // w8
  UIExtrusionLabel_o *v31; // x20
  UIWidget_o *resLvWidget; // x20
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v35; // x2
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v39; // x2
  UIWidget_o *resAtkWidget; // x19
  int32_t afterAtk; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t afterHp; // [xsp+8h] [xbp-48h] BYREF
  int32_t increLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB819C & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method);
    sub_1C13D24(&Method_SvtCombineResultWindowComponent_UpdateValue__, v5);
    sub_1C13D24(&SvtCombineResultWindowComponent_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, v7);
    byte_4BB819C = 1;
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
  v12 = this->fields.resUsrSvtData;
  if ( !v12 )
    goto LABEL_66;
  v13 = fminf(val, 1.0);
  exp = (float)baseUsrSvtData->fields.exp;
  if ( val < 0.0 )
    v15 = 0.0;
  else
    v15 = v13;
  v16 = v15 * (float)((float)v12->fields.exp - exp);
  if ( !byte_4BAEDA0 )
  {
    sub_1C13D24(&System_Math_TypeInfo, method);
    byte_4BAEDA0 = 1;
  }
  v17 = v16 + exp;
  resUsrSvtData = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = vcvtms_s32_f32(v17);
  if ( floorf(v17) == INFINITY )
    v19 = 0x80000000;
  else
    v19 = v18;
  if ( !byte_4BAEDA5 )
  {
    resUsrSvtData = sub_1C13D24(&UnityEngine_Mathf_TypeInfo, method);
    byte_4BAEDA5 = 1;
  }
  v20 = fmaxf(fabsf(val), 1.0) * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  v22 = fabsf(val + -1.0);
  if ( v20 <= (float)(Epsilon * 8.0) )
    v20 = Epsilon * 8.0;
  if ( v22 >= v20 )
  {
    if ( !this->fields.resUsrSvtData )
      goto LABEL_66;
  }
  else
  {
    v23 = this->fields.resUsrSvtData;
    if ( !v23 )
      goto LABEL_66;
    v19 = v23->fields.exp;
  }
  v24 = this->fields.baseUsrSvtData;
  if ( !v24 )
    goto LABEL_66;
  resUsrSvtData = SvtCombineResultWindowComponent__setSvtExp(this, (int32_t)method, v19, v24->fields.lv, v10);
  increLv = resUsrSvtData;
  v25 = this->fields.baseUsrSvtData;
  if ( !v25 )
    goto LABEL_66;
  if ( v25->fields.lv == v9 )
    return;
  v26 = resUsrSvtData;
  if ( !this->fields.isUpdateGauge )
  {
    v27 = Method_SvtCombineResultWindowComponent_UpdateValue__;
    if ( (*((_BYTE *)Method_SvtCombineResultWindowComponent_UpdateValue__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1C13D3C(Method_SvtCombineResultWindowComponent_UpdateValue__);
    v28 = (System_Reflection_MethodBase_o *)sub_1C13D08(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 3, 0, 0LL);
    this->fields.isUpdateGauge = 1;
  }
  if ( v26 == this->fields.PrevLevel )
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
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !resUsrSvtData )
    goto LABEL_66;
  v29 = (UITweener_o *)resUsrSvtData;
  UITweener__ResetToBeginning((UITweener_o *)resUsrSvtData, 0LL);
  UITweener__PlayForward(v29, 0LL);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v26;
  this->fields.endDispLvInfoFlg = 0;
  v31 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  resUsrSvtData = (__int64)System_Int32__ToString((int32_t)&increLv, 0LL);
  if ( !v31 )
    goto LABEL_66;
  UIExtrusionLabel__set_text(v31, (System_String_o *)resUsrSvtData, 0LL);
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
      resUsrSvtData = (__int64)System_Int32__ToString_63773552(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_66;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)resUsrSvtData, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      resUsrSvtData = (__int64)System_Int32__ToString_63773552(
                                 (int32_t)&afterHp,
                                 (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                 0LL);
      if ( !resHpLb )
        goto LABEL_66;
      UILabel__set_text(resHpLb, (System_String_o *)resUsrSvtData, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v35);
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
    resUsrSvtData = (__int64)System_Int32__ToString_63773552(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                               0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_66;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)resUsrSvtData, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    resUsrSvtData = (__int64)System_Int32__ToString_63773552(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                               0LL);
    if ( !resAtkLb )
      goto LABEL_66;
    UILabel__set_text(resAtkLb, (System_String_o *)resUsrSvtData, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v39);
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
    sub_1C13F80(resUsrSvtData, method);
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
  int64_t hiddenValue; // x8
  UserServantEntity_o *v12; // x21
  unsigned __int64 v13; // x23
  int64_t *p_fakeValue; // x24
  int32_t i; // w22
  int32_t v16; // w20
  Il2CppObject *Entity; // x0
  UILabel_o *skillGetInfoTitle; // x21
  SkillEntity_o *v19; // x20
  UILabel_o *skillGetInfoDetail; // x21
  System_String_o *v21; // x22
  Il2CppObject *Name; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t currentCryptoKey; // x8
  _QWORD *v30; // x9
  __int64 hiddenValue_low; // x10
  int64_t v32; // x8

  if ( (byte_4BB81A0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C13D24(&StringLiteral_7084/*"GET_LIMIT_UP_REWARD_DETAIL"*/, v7);
    sub_1C13D24(&StringLiteral_7086/*"GET_MULTI"*/, v8);
    byte_4BB81A0 = 1;
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
  v12 = baseUsrSvtData;
  v13 = 0LL;
  p_fakeValue = &baseUsrSvtData->fields.id.fields.fakeValue;
  for ( i = (_DWORD)v10 + 32; ; i += 4 )
  {
    if ( !v12 )
      goto LABEL_30;
    if ( v13 >= LODWORD(v12->fields.id.fields.hiddenValue) || v13 >= (unsigned int)hiddenValue )
      goto LABEL_29;
    baseUsrSvtData = (UserServantEntity_o *)System_Int32__Equals_63773380(i, *((_DWORD *)p_fakeValue + v13), 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
      break;
    LODWORD(hiddenValue) = v10->fields.id.fields.hiddenValue;
    if ( (__int64)++v13 >= (int)hiddenValue )
      return;
  }
  if ( (unsigned int)v13 >= LODWORD(v12->fields.id.fields.hiddenValue) )
LABEL_29:
    sub_1C13F88(baseUsrSvtData, method);
  v16 = *((_DWORD *)&v12->fields.id.fields.fakeValue + v13);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v16,
             (const MethodInfo_3238624 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  v19 = (SkillEntity_o *)Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7086/*"GET_MULTI"*/, 0LL);
  if ( !skillGetInfoTitle )
    goto LABEL_30;
  UILabel__set_text(skillGetInfoTitle, (System_String_o *)baseUsrSvtData, 0LL);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7084/*"GET_LIMIT_UP_REWARD_DETAIL"*/, 0LL);
  if ( !v19 )
    goto LABEL_30;
  v21 = (System_String_o *)baseUsrSvtData;
  Name = (Il2CppObject *)SkillEntity__getName(v19, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)System_String__Format(v21, Name, 0LL);
  if ( !skillGetInfoDetail
    || (UILabel__set_text(skillGetInfoDetail, (System_String_o *)baseUsrSvtData, 0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.resInfoList) == 0LL)
    || (method = (const MethodInfo *)this->fields.skillGetInfo,
        currentCryptoKey = baseUsrSvtData->fields.id.fields.currentCryptoKey,
        v30 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(baseUsrSvtData->fields.id.fields.hiddenValue),
        !currentCryptoKey) )
  {
LABEL_30:
    sub_1C13F80(baseUsrSvtData, method);
  }
  hiddenValue_low = SLODWORD(baseUsrSvtData->fields.id.fields.hiddenValue);
  if ( (unsigned int)hiddenValue_low >= *(_DWORD *)(currentCryptoKey + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)baseUsrSvtData,
      (Il2CppObject *)method,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = currentCryptoKey + 8 * hiddenValue_low;
    LODWORD(baseUsrSvtData->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
    *(_QWORD *)(v32 + 32) = method;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)method, v23, v24, v25, v26, v27, v28);
  }
  this->fields.isGetNewSkill = 1;
}


void __fastcall SvtCombineResultWindowComponent__checkQuestOpen(
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
  System_Collections_Generic_List_int__o *v16; // x0
  clsQuestCheck_o *Instance; // x0
  Il2CppObject *heroQuestInfo; // x1
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UILabel_o *heroQuestInfoDetail; // x23
  System_String_o *v40; // x0
  UILabel_o *eventQuestInfoDetail; // x23
  System_String_o *v42; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x8
  _QWORD *v44; // x9
  __int64 cQuestReleaseListP_low; // x10
  __int64 v46; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4BB819F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1C13D24(&LocalizationManager_TypeInfo, v9);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12);
    sub_1C13D24(&StringLiteral_9828/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, v13);
    sub_1C13D24(&StringLiteral_9814/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE_MATERIAL"*/, v14);
    sub_1C13D24(&StringLiteral_9817/*"OPEN_BROWSER"*/, v15);
    byte_4BB819F = 1;
  }
  this->fields.isOpenQuest = 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_43;
  v20 = Instance;
  v22 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v22;
  *(_QWORD *)&v47.fields.fakeValue = v21;
  Instance = (clsQuestCheck_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v47, 0LL);
  if ( !v20 )
    goto LABEL_43;
  v23 = clsQuestCheck__GetReleaseQuestIdByServantLv(v20, (int32_t)Instance, this->fields.baseSvtCollectionLv, 0LL);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v25 = v23;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9828/*"OPEN_MAIN_QUEST_TITLE_LIMIT_UP"*/, 0LL);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, (System_String_o *)Instance, 0LL),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9817/*"OPEN_BROWSER"*/, 0LL),
        !heroQuestInfoTitle) )
  {
LABEL_43:
    sub_1C13F80(Instance, heroQuestInfo);
  }
  UILabel__set_text(heroQuestInfoTitle, (System_String_o *)Instance, 0LL);
  if ( v25 && v25->fields._size >= 1 )
  {
    for ( i = 0; i < v25->fields._size; ++i )
    {
      if ( System_Collections_Generic_List_int___get_Item(
             v25,
             i,
             (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
      {
        Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
        Instance = (clsQuestCheck_o *)System_Collections_Generic_List_int___get_Item(
                                        v25,
                                        i,
                                        (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !MasterData_object )
          goto LABEL_43;
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        (int32_t)Instance,
                                        (const MethodInfo_3238624 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
            v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9814/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE_MATERIAL"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v40,
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
            v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9814/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE_MATERIAL"*/, 0LL);
            Instance = (clsQuestCheck_o *)System_String__Format(
                                            v42,
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
            v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9814/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE_MATERIAL"*/, 0LL);
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
            v44 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++HIDWORD(Instance->fields.cQuestReleaseListP);
            if ( !qrs )
              goto LABEL_43;
            cQuestReleaseListP_low = SLODWORD(Instance->fields.cQuestReleaseListP);
            if ( (unsigned int)cQuestReleaseListP_low >= qrs->fields._size )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                heroQuestInfo,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = (__int64)qrs + 8 * cQuestReleaseListP_low;
              LODWORD(Instance->fields.cQuestReleaseListP) = cQuestReleaseListP_low + 1;
              *(_QWORD *)(v46 + 32) = heroQuestInfo;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)(v46 + 32),
                (int64_t)heroQuestInfo,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38);
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

  if ( (byte_4BB81A2 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB81A2 = 1;
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
      UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1C13F80(currentLimitCntGrid, method);
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
      UnityEngine_Object__Destroy_70721988(v10, 0LL);
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

  if ( (byte_4BB81A3 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB81A3 = 1;
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
      UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_1C13F80(resLimitCntGrid, method);
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
      UnityEngine_Object__Destroy_70721988(v10, 0LL);
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
    sub_1C13F80(0LL, method);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  __int64 v20; // x1
  int64_t resUsrSvtData; // x0
  int32_t LevelMax; // w0
  _BOOL4 isEqCombine; // w8
  int32_t childCount; // w23
  UnityEngine_Transform_o *transform; // x24
  System_Collections_Generic_List_object__o *v26; // x26
  struct System_Collections_Generic_List_GameObject__o **p_resLimitCntList; // x25
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t v40; // w26
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_List_object__o *v47; // x8
  struct System_Object_array *items; // x9
  _QWORD *v49; // x10
  __int64 size; // x11
  int64_t v51; // x1
  Il2CppClass **v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_List_object__o *v59; // x20
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct UserServantEntity_o *v66; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x20
  __int64 v68; // x21
  __int64 v69; // x22
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4BB8199 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, resData);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v15);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4BB8199 = 1;
  }
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_1C13CC8(
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
  v26 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = &this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v26;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resLimitCntList, (int64_t)v26, v28, v29, v30, v31, v32, v33);
  if ( childCount >= 1 )
  {
    if ( transform )
    {
      v40 = 0;
      while ( 1 )
      {
        resUsrSvtData = (int64_t)UnityEngine_Transform__GetChild(transform, v40, 0LL);
        if ( !resUsrSvtData )
          break;
        resUsrSvtData = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resUsrSvtData, 0LL);
        v47 = (System_Collections_Generic_List_object__o *)*p_resLimitCntList;
        if ( !*p_resLimitCntList )
          break;
        items = v47->fields._items;
        v49 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v47->fields._version;
        if ( !items )
          break;
        size = v47->fields._size;
        v51 = resUsrSvtData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v47,
            (Il2CppObject *)resUsrSvtData,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &items->obj.klass + size;
          v47->fields._size = size + 1;
          v52[4] = (Il2CppClass *)v51;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v52 + 4), v51, v41, v42, v43, v44, v45, v46);
        }
        if ( childCount == ++v40 )
          goto LABEL_23;
      }
    }
LABEL_32:
    sub_1C13F80(resUsrSvtData, v20);
  }
LABEL_23:
  this->fields.openCallBack = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.openCallBack, (int64_t)callback, v34, v35, v36, v37, v38, v39);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.endTutorialCallBack,
    (int64_t)endTutorialCb,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v59;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  resUsrSvtData = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  resUsrSvtData = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)resUsrSvtData,
                             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v66 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_32;
  v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v69 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
  v68 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v69;
  *(_QWORD *)&v72.fields.fakeValue = v68;
  resUsrSvtData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v72, 0LL);
  if ( !v67 )
    goto LABEL_32;
  resUsrSvtData = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             v67,
                             resUsrSvtData,
                             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0LL) )
  {
    SvtCombineResultWindowComponent__checkQuestOpen(this, v70);
    SvtCombineResultWindowComponent__checkGetSkill(this, v71);
  }
  SvtCombineResultWindowComponent__showGetExp(this, v70);
}


void __fastcall SvtCombineResultWindowComponent__setBaseAdjustInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t *p_baseMaxHpAdjustVal; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  struct UserServantEntity_o *v6; // x8
  int32_t adjustHp; // w22
  __int64 v8; // x8
  int v9; // w23
  int v10; // w24
  UIIconLabel_o *currentAdjustHpIconLabel; // x20
  const MethodInfo *v12; // x2
  struct UserServantEntity_o *v13; // x8
  int32_t adjustAtk; // w23
  char *v15; // x9
  int v16; // w24
  int32_t StatusUpAdjustAtk; // w25
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  const MethodInfo *v19; // x2

  if ( (byte_4BB8196 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v3);
    byte_4BB8196 = 1;
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
  v6 = this->fields.baseUsrSvtData;
  if ( !v6 )
    goto LABEL_23;
  adjustHp = v6->fields.adjustHp;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = this->fields.baseUsrSvtData;
    if ( !v6 )
      goto LABEL_23;
    baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  }
  if ( v6->fields.adjustHp >= this->fields.baseMaxHpAdjustVal )
    v8 = 784LL;
  else
    v8 = 776LL;
  v9 = *(_DWORD *)(*(_QWORD *)&baseUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 312LL);
  v10 = *(_DWORD *)((char *)&this->klass + v8);
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( !baseUsrSvtData->fields.randomLimitCountSupport.fields.currentCryptoKey )
    j_il2cpp_runtime_class_init_0(baseUsrSvtData);
  if ( !currentAdjustHpIconLabel )
    goto LABEL_23;
  UIIconLabel__Set_39380320(
    currentAdjustHpIconLabel,
    44,
    v9 * adjustHp,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v10,
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
  SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.baseUsrSvtData, v12);
  v13 = this->fields.baseUsrSvtData;
  if ( !v13 )
    goto LABEL_23;
  baseUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
  adjustAtk = v13->fields.adjustAtk;
  v15 = "GNU";
  if ( adjustAtk < this->fields.baseMaxAtkAdjustVal )
    v15 = (char *)&dword_30C;
  v16 = *(_DWORD *)&v15[(_QWORD)this];
  StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !currentAdjustAtkIconLabel
    || (UIIconLabel__Set_39380320(
          currentAdjustAtkIconLabel,
          45,
          StatusUpAdjustAtk * adjustAtk,
          BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v16,
          0,
          0LL,
          0,
          0,
          0,
          0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustAtkMaxLabel) == 0LL) )
  {
LABEL_23:
    sub_1C13F80(baseUsrSvtData, p_baseMaxHpAdjustVal);
  }
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v19);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x22
  UILabel_o *currentMaxLvLb; // x22
  struct UserServantEntity_o *v21; // x8
  UIExtrusionLabel_o *resLvLb; // x22
  UILabel_o *resMaxLvLb; // x22
  Il2CppObject *Component_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *v31; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x0
  struct UIWidget_o **p_resHpWidget; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppObject *v47; // x0
  struct UIWidget_o **p_resAtkWidget; // x23
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UILabel_o *currentExpValLb; // x21
  struct UserServantEntity_o *v56; // x8
  int32_t v57; // w20
  __int64 v58; // x21
  __int64 v59; // x22
  struct UserServantEntity_o *v60; // x8
  int32_t v61; // w21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v63; // x4
  int32_t baseLimitCnt; // w21
  UnityEngine_Transform_o *v65; // x0
  const MethodInfo *v66; // x4
  struct UserServantEntity_o *v67; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v69; // x8
  UILabel_o *resHpLb; // x20
  struct UserServantEntity_o *v71; // x8
  UILabel_o *currentAtkLb; // x20
  struct UserServantEntity_o *v73; // x8
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v75; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_Action_o *v83; // x20
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB8194 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, baseData);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C13D24(&Method_SvtCombineResultWindowComponent_EndOpen__, v7);
    sub_1C13D24(&StringLiteral_426/*"#,0"*/, v8);
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, v9);
    byte_4BB8194 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_48;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  v21 = this->fields.baseUsrSvtData;
  if ( !v21 )
    goto LABEL_48;
  resLvLb = this->fields.resLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v21 + 256, 0LL);
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
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.resLvWidget,
    (int64_t)Component_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resMaxLvLb;
  if ( !skipCollider )
    goto LABEL_48;
  v31 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v31;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resMaxLvWidget, (int64_t)v31, v33, v34, v35, v36, v37, v38);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resHpLb;
  if ( !skipCollider )
    goto LABEL_48;
  v39 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v39;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resHpWidget, (int64_t)v39, v41, v42, v43, v44, v45, v46);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resAtkLb;
  if ( !skipCollider )
    goto LABEL_48;
  v47 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v47;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resAtkWidget, (int64_t)v47, v49, v50, v51, v52, v53, v54);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_48;
  v87.fields.r = 1.0;
  v87.fields.g = 1.0;
  v87.fields.b = 1.0;
  v87.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v87, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_48;
  v88.fields.r = 1.0;
  v88.fields.g = 1.0;
  v88.fields.b = 1.0;
  v88.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v88, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_48;
  v89.fields.r = 1.0;
  v89.fields.g = 1.0;
  v89.fields.b = 1.0;
  v89.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v89, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_48;
  v90.fields.r = 1.0;
  v90.fields.g = 1.0;
  v90.fields.b = 1.0;
  v90.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v90, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_48;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentExpBar;
  if ( !skipCollider )
    goto LABEL_48;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_426/*"#,0"*/,
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
  v56 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_48;
  v57 = (int)skipCollider;
  v59 = *(_QWORD *)&v56->fields.limitCount.fields.currentCryptoKey;
  v58 = *(_QWORD *)&v56->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v59;
  *(_QWORD *)&v86.fields.fakeValue = v58;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v86, 0LL);
  v60 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v60 )
    goto LABEL_48;
  v61 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  this->fields.baseHpVal = v60->fields.hp;
  this->fields.baseAtkVal = v60->fields.atk;
  if ( !skipCollider )
    goto LABEL_48;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v57, v61, transform, v63);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  baseLimitCnt = this->fields.baseLimitCnt;
  v65 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v57, baseLimitCnt, v65, v66);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v67 = this->fields.baseUsrSvtData;
  if ( !v67 )
    goto LABEL_48;
  currentHpLb = this->fields.currentHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int)v67 + 268,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                             0LL);
  if ( !currentHpLb )
    goto LABEL_48;
  UILabel__set_text(currentHpLb, (System_String_o *)skipCollider, 0LL);
  v69 = this->fields.baseUsrSvtData;
  if ( !v69 )
    goto LABEL_48;
  resHpLb = this->fields.resHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int)v69 + 268,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                             0LL);
  if ( !resHpLb )
    goto LABEL_48;
  UILabel__set_text(resHpLb, (System_String_o *)skipCollider, 0LL);
  v71 = this->fields.baseUsrSvtData;
  if ( !v71 )
    goto LABEL_48;
  currentAtkLb = this->fields.currentAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int)v71 + 264,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                             0LL);
  if ( !currentAtkLb )
    goto LABEL_48;
  UILabel__set_text(currentAtkLb, (System_String_o *)skipCollider, 0LL);
  v73 = this->fields.baseUsrSvtData;
  if ( !v73 )
    goto LABEL_48;
  resAtkLb = this->fields.resAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int)v73 + 264,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
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
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v75);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.lvUpInfo, (int64_t)lvInfo, v77, v78, v79, v80, v81, v82);
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
    sub_1C13F80(skipCollider, baseData);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v83 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v83, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0LL);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x23
  UILabel_o *currentSvtEqMaxLvLb; // x23
  struct UserServantEntity_o *v33; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x23
  UILabel_o *resSvtEqMaxLvLb; // x23
  Il2CppObject *Component_object; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *v43; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  Il2CppObject *v51; // x0
  struct UIWidget_o **p_resHpWidget; // x23
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *v59; // x0
  struct UIWidget_o **p_resAtkWidget; // x24
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UILabel_o *currentSvtEqExpValLb; // x22
  struct UserServantEntity_o *v68; // x8
  int32_t v69; // w21
  __int64 v70; // x22
  __int64 v71; // x23
  struct UserServantEntity_o *v72; // x8
  int32_t v73; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v75; // x4
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *v77; // x0
  const MethodInfo *v78; // x4
  struct UserServantEntity_o *v79; // x8
  UILabel_o *currentSvtEqHpLb; // x21
  struct UserServantEntity_o *v81; // x8
  UILabel_o *resSvtEqHpLb; // x21
  struct UserServantEntity_o *v83; // x8
  UILabel_o *currentSvtEqAtkLb; // x21
  struct UserServantEntity_o *v85; // x8
  UILabel_o *resSvtEqAtkLb; // x21
  UILabel_o *normalExpLb; // x21
  UILabel_o *normalExpOverSpLb; // x21
  UIWidget_o *v89; // x21
  UIWidget_o *v90; // x22
  UnityEngine_GameObject_o *v91; // x24
  Il2CppObject *v92; // x23
  Il2CppObject *v93; // x0
  Il2CppObject *v94; // x20
  SvtCombineResultWindowComponent_c *v95; // x0
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  Il2CppObject *v99; // x0
  System_String_o *v100; // x20
  UnityEngine_Transform_o *v101; // x0
  UnityEngine_GameObject_o *v102; // x20
  UnityEngine_Transform_o *v103; // x21
  int v104; // s0
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v108; // x20
  UILabel_o *addExpLb; // x20
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  System_Action_o *v117; // x20
  intptr_t m_CachedPtr; // [xsp+0h] [xbp-60h] BYREF
  float barExp; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v121; // [xsp+18h] [xbp-48h] BYREF
  int32_t v122; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  UnityEngine_Color_o v124; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v125; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v126; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v127; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v128; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v121 = addExp;
  v122 = normalExp;
  if ( (byte_4BB8195 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, baseData);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v10);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v11);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v12);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v13);
    sub_1C13D24(&int_TypeInfo, v14);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v15);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C13D24(&Method_SvtCombineResultWindowComponent_EndOpen__, v17);
    sub_1C13D24(&SvtCombineResultWindowComponent_TypeInfo, v18);
    sub_1C13D24(&StringLiteral_426/*"#,0"*/, v19);
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, v20);
    sub_1C13D24(&StringLiteral_4689/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/, v21);
    byte_4BB8195 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  v33 = this->fields.baseUsrSvtData;
  if ( !v33 )
    goto LABEL_90;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v33 + 256, 0LL);
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
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.resLvWidget,
    (int64_t)Component_object,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqMaxLvLb;
  if ( !skipCollider )
    goto LABEL_90;
  v43 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v43;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resMaxLvWidget, (int64_t)v43, v45, v46, v47, v48, v49, v50);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqHpLb;
  if ( !skipCollider )
    goto LABEL_90;
  v51 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v51;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resHpWidget, (int64_t)v51, v53, v54, v55, v56, v57, v58);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqAtkLb;
  if ( !skipCollider )
    goto LABEL_90;
  v59 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v59;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resAtkWidget, (int64_t)v59, v61, v62, v63, v64, v65, v66);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_90;
  v124.fields.r = 1.0;
  v124.fields.g = 1.0;
  v124.fields.b = 1.0;
  v124.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v124, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_90;
  v125.fields.r = 1.0;
  v125.fields.g = 1.0;
  v125.fields.b = 1.0;
  v125.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v125, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_90;
  v126.fields.r = 1.0;
  v126.fields.g = 1.0;
  v126.fields.b = 1.0;
  v126.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v126, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_90;
  v127.fields.r = 1.0;
  v127.fields.g = 1.0;
  v127.fields.b = 1.0;
  v127.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v127, 0LL);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_90;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_90;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0LL);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_426/*"#,0"*/,
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
  v68 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_90;
  v69 = (int)skipCollider;
  v71 = *(_QWORD *)&v68->fields.limitCount.fields.currentCryptoKey;
  v70 = *(_QWORD *)&v68->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v123.fields.currentCryptoKey = v71;
  *(_QWORD *)&v123.fields.fakeValue = v70;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                             v123,
                                             0LL);
  v72 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v72 )
    goto LABEL_90;
  v73 = (int)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = v72->fields.hp;
  this->fields.baseAtkVal = v72->fields.atk;
  if ( !skipCollider )
    goto LABEL_90;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v69, v73, transform, v75);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  baseLimitCnt = this->fields.baseLimitCnt;
  v77 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v69, baseLimitCnt, v77, v78);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_90;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0LL);
  v79 = this->fields.baseUsrSvtData;
  if ( !v79 )
    goto LABEL_90;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int)v79 + 268,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                             0LL);
  if ( !currentSvtEqHpLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v81 = this->fields.baseUsrSvtData;
  if ( !v81 )
    goto LABEL_90;
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int)v81 + 268,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                             0LL);
  if ( !resSvtEqHpLb )
    goto LABEL_90;
  UILabel__set_text(resSvtEqHpLb, (System_String_o *)skipCollider, 0LL);
  v83 = this->fields.baseUsrSvtData;
  if ( !v83 )
    goto LABEL_90;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int)v83 + 264,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                             0LL);
  if ( !currentSvtEqAtkLb )
    goto LABEL_90;
  UILabel__set_text(currentSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  v85 = this->fields.baseUsrSvtData;
  if ( !v85 )
    goto LABEL_90;
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int)v85 + 264,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                             0LL);
  if ( !resSvtEqAtkLb )
    goto LABEL_90;
  UILabel__set_text(resSvtEqAtkLb, (System_String_o *)skipCollider, 0LL);
  normalExpLb = this->fields.normalExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int32_t)&v122,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                             0LL);
  if ( !normalExpLb )
    goto LABEL_90;
  UILabel__set_text(normalExpLb, (System_String_o *)skipCollider, 0LL);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int32_t)&v122,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                             0LL);
  if ( !normalExpOverSpLb )
    goto LABEL_90;
  UILabel__set_text(normalExpOverSpLb, (System_String_o *)skipCollider, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !skipCollider )
    goto LABEL_90;
  v128.fields.r = 1.0;
  v128.fields.g = 1.0;
  v128.fields.b = 1.0;
  v128.fields.a = 1.0;
  v89 = (UIWidget_o *)skipCollider;
  UIWidget__set_color((UIWidget_o *)skipCollider, v128, 0LL);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_90;
  v90 = (UIWidget_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_90;
  v91 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0LL);
  if ( !v91 )
    goto LABEL_90;
  v92 = UnityEngine_GameObject__GetComponent_object_(
          v91,
          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v93 = UnityEngine_GameObject__GetComponent_object_(
          v91,
          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
    goto LABEL_83;
  v94 = v93;
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_90;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0LL);
  if ( !skipCollider )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0LL);
  v95 = SvtCombineResultWindowComponent_TypeInfo;
  if ( !SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo);
    v95 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color(v89, v95->static_fields->COLOR_VAL, 0LL);
  if ( !v90 )
    goto LABEL_90;
  UIWidget__set_color(v90, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v92, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v92 )
      goto LABEL_90;
    LODWORD(v92[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v92, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v94, 0LL, 0LL);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v94 )
      goto LABEL_90;
    LODWORD(v94[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v94, 0LL);
  }
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int32_t)&v122, 0LL);
  if ( !skipCollider )
    goto LABEL_90;
  m_CachedPtr = skipCollider->fields.m_CachedPtr;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr, v96, v97, v98);
  skipCollider = (UnityEngine_Collider_o *)System_String__Format((System_String_o *)StringLiteral_4689/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/, v99, 0LL);
  if ( !this->fields.dispNodeObj )
    goto LABEL_90;
  v100 = (System_String_o *)skipCollider;
  v101 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL);
  skipCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__GetEffect(v100, v101, 0LL);
  if ( !skipCollider
    || (v102 = (UnityEngine_GameObject_o *)skipCollider,
        skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)skipCollider,
                                                   0LL),
        !this->fields.dispNodeObj)
    || (v103 = (UnityEngine_Transform_o *)skipCollider,
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v104 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)skipCollider,
                                            0LL),
        !v103) )
  {
LABEL_90:
    sub_1C13F80(skipCollider, baseData);
  }
  UnityEngine_Transform__set_localPosition(v103, *(UnityEngine_Vector3_o *)&v104, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v102,
                                 (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v108 = UnityEngine_GameObject__GetComponentInChildren_object_(
           v102,
           (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
    skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v108, 0LL, 0LL);
    if ( ((unsigned __int8)skipCollider & 1) != 0 )
    {
      if ( !v108 )
        goto LABEL_90;
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v108, 0LL);
    }
  }
LABEL_83:
  addExpLb = this->fields.addExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_63773552(
                                             (int32_t)&v121,
                                             (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.lvUpInfo,
    (int64_t)svtEqLvInfo,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
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
  v117 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v117, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v117, 0, 0LL);
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
  UnityEngine_Transform_o *v13; // x25

  if ( (byte_4BB81A1 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, *(_QWORD *)&maxLimitCnt);
    byte_4BB81A1 = 1;
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
      if ( !byte_4BAEDA1 )
      {
        Object = (UnityEngine_GameObject_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v11);
        byte_4BAEDA1 = 1;
      }
      if ( !v13
        || (UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v12,
                                                    (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0LL) )
      {
LABEL_12:
        sub_1C13F80(Object, v11);
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

  if ( (byte_4BB8198 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, targetData);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB8198 = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_21;
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       resAdjustAtkIconLabel,
                                                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  UIIconLabel__Set_39380320((UIIconLabel_o *)resAdjustAtkIconLabel, 45, v17, v16 * v15, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_63773380((_DWORD)baseUsrSvtData + 272, targetData->fields.adjustAtk, 0LL) )
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
    sub_1C13F80(resAdjustAtkIconLabel, targetData);
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

  if ( (byte_4BB8197 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, targetData);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB8197 = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_21;
  resAdjustHpIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      resAdjustHpIconLabel,
                                                      (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  UIIconLabel__Set_39380320((UIIconLabel_o *)resAdjustHpIconLabel, 44, v17, v16 * v15, 0, 0LL, 0, 0, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_21;
  if ( !System_Int32__Equals_63773380((_DWORD)baseUsrSvtData + 276, targetData->fields.adjustHp, 0LL) )
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
    sub_1C13F80(resAdjustHpIconLabel, targetData);
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

  if ( (byte_4BB819B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&getExp);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BB819B = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0LL);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_1C13F80(resUsrSvtData, *(_QWORD *)&getExp);
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
  __int64 v28; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x20
  __int64 v31; // x21
  __int64 v32; // x22
  Il2CppObject *Entity; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  const MethodInfo *v41; // x4
  struct UserServantEntity_o *v42; // x8
  int32_t atk; // w9
  struct UserServantEntity_o *v44; // x8
  struct UserServantEntity_o *v45; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Object_array *v53; // x21
  __int64 v54; // x0
  int64_t v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x22
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x22
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
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
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x22
  System_Collections_Hashtable_o *v134; // x0
  struct UserServantEntity_o *v135; // x8
  struct UserServantEntity_o *v136; // x9
  int32_t v137; // w0
  UILabel_o *resSvtEqHpLb; // x20
  UILabel_o *resSvtEqMaxLvLb; // x20
  UIWidget_o *resMaxLvWidget; // x20
  UILabel_o *infoLb; // x20
  System_String_o *v142; // x21
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  Il2CppObject *v146; // x22
  __int64 v147; // x2
  __int64 v148; // x3
  __int64 v149; // x4
  Il2CppObject *v150; // x0
  int32_t v151; // w20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v153; // x2
  UIWidget_o *resHpWidget; // x20
  int32_t v155; // w0
  UILabel_o *resSvtEqAtkLb; // x20
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v158; // x2
  UIWidget_o *resAtkWidget; // x19
  __int64 v160; // x0
  int v161; // [xsp+Ch] [xbp-44h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-38h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16

  if ( (byte_4BB819A & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___, v5);
    sub_1C13D24(&int_TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1C13D24(&LocalizationManager_TypeInfo, v9);
    sub_1C13D24(&object___TypeInfo, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&float_TypeInfo, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C13D24(&SvtCombineResultWindowComponent_TypeInfo, v14);
    sub_1C13D24(&StringLiteral_19961/*"friendCode"*/, v15);
    sub_1C13D24(&StringLiteral_8755/*"MAX_EVENT_POINT"*/, v16);
    sub_1C13D24(&StringLiteral_24320/*"textarea"*/, v17);
    sub_1C13D24(&StringLiteral_6098/*"EndCloseDlg"*/, v18);
    sub_1C13D24(&StringLiteral_22651/*"onProductPurchaseDeferred"*/, v19);
    sub_1C13D24(&StringLiteral_15437/*"UpdateEnemyCount"*/, v20);
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, v21);
    sub_1C13D24(&StringLiteral_24361/*"timeoutTicks"*/, v22);
    sub_1C13D24(&StringLiteral_13195/*"StartConnectAsync"*/, v23);
    sub_1C13D24(&StringLiteral_22648/*"onMoveComplete"*/, v24);
    sub_1C13D24(&StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/, v25);
    sub_1C13D24(&iTween_TypeInfo, v26);
    byte_4BB819A = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_97;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v32 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v164.fields.currentCryptoKey = v32;
  *(_QWORD *)&v164.fields.fakeValue = v31;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v164, 0LL);
  if ( !v30 )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v30,
             Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = (struct ServantEntity_o *)Entity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.baseSvtData, (int64_t)Entity, v34, v35, v36, v37, v38, v39);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_97;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(resUsrSvtData->fields.limitCount, 0LL);
  v42 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = Instance;
  if ( !v42 )
    goto LABEL_97;
  this->fields.resHpVal = v42->fields.hp;
  atk = v42->fields.atk;
  v44 = this->fields.baseUsrSvtData;
  this->fields.resAtkVal = atk;
  if ( !v44 )
    goto LABEL_97;
  Instance = SvtCombineResultWindowComponent__setSvtExp(this, v28, v44->fields.exp, v44->fields.lv, v41);
  v45 = this->fields.baseUsrSvtData;
  if ( !v45 )
    goto LABEL_97;
  this->fields.PrevLevel = v45->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Instance = sub_1C13DCC(object___TypeInfo, 12LL);
  if ( !Instance )
    goto LABEL_97;
  v53 = (System_Object_array *)Instance;
  v54 = StringLiteral_19961/*"friendCode"*/;
  if ( StringLiteral_19961/*"friendCode"*/ )
  {
    v54 = sub_1C13E60(StringLiteral_19961/*"friendCode"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
    v55 = StringLiteral_19961/*"friendCode"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( !v53->max_length )
    goto LABEL_115;
  v53->m_Items[0] = (Il2CppObject *)v55;
  sub_1C13CC8((PartyOrganizationUtility_o *)v53->m_Items, v55, v47, v48, v49, v50, v51, v52);
  baseLvMax = 0;
  v54 = j_il2cpp_value_box_0(float_TypeInfo, &baseLvMax, v56, v57, v58);
  v65 = v54;
  if ( v54 )
  {
    v54 = sub_1C13E60(v54, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
  }
  if ( v53->max_length <= 1 )
    goto LABEL_115;
  v53->m_Items[1] = (Il2CppObject *)v65;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[1], v65, v59, v60, v61, v62, v63, v64);
  v54 = StringLiteral_24361/*"timeoutTicks"*/;
  if ( StringLiteral_24361/*"timeoutTicks"*/ )
  {
    v54 = sub_1C13E60(StringLiteral_24361/*"timeoutTicks"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
    v55 = StringLiteral_24361/*"timeoutTicks"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 2 )
    goto LABEL_115;
  v53->m_Items[2] = (Il2CppObject *)v55;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[2], v55, v66, v67, v68, v69, v70, v71);
  resLvMax = 1065353216;
  v54 = j_il2cpp_value_box_0(float_TypeInfo, &resLvMax, v72, v73, v74);
  v81 = v54;
  if ( v54 )
  {
    v54 = sub_1C13E60(v54, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
  }
  if ( v53->max_length <= 3 )
    goto LABEL_115;
  v53->m_Items[3] = (Il2CppObject *)v81;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[3], v81, v75, v76, v77, v78, v79, v80);
  v54 = StringLiteral_22648/*"onMoveComplete"*/;
  if ( StringLiteral_22648/*"onMoveComplete"*/ )
  {
    v54 = sub_1C13E60(StringLiteral_22648/*"onMoveComplete"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
    v55 = StringLiteral_22648/*"onMoveComplete"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 4 )
    goto LABEL_115;
  v53->m_Items[4] = (Il2CppObject *)v55;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[4], v55, v82, v83, v84, v85, v86, v87);
  v54 = StringLiteral_13195/*"StartConnectAsync"*/;
  if ( StringLiteral_13195/*"StartConnectAsync"*/ )
  {
    v54 = sub_1C13E60(StringLiteral_13195/*"StartConnectAsync"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
    v55 = StringLiteral_13195/*"StartConnectAsync"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 5 )
    goto LABEL_115;
  v53->m_Items[5] = (Il2CppObject *)v55;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[5], v55, v88, v89, v90, v91, v92, v93);
  v54 = StringLiteral_22651/*"onProductPurchaseDeferred"*/;
  if ( StringLiteral_22651/*"onProductPurchaseDeferred"*/ )
  {
    v54 = sub_1C13E60(StringLiteral_22651/*"onProductPurchaseDeferred"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
    v55 = StringLiteral_22651/*"onProductPurchaseDeferred"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 6 )
    goto LABEL_115;
  v53->m_Items[6] = (Il2CppObject *)v55;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[6], v55, v94, v95, v96, v97, v98, v99);
  v54 = StringLiteral_15437/*"UpdateEnemyCount"*/;
  if ( StringLiteral_15437/*"UpdateEnemyCount"*/ )
  {
    v54 = sub_1C13E60(StringLiteral_15437/*"UpdateEnemyCount"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
    v55 = StringLiteral_15437/*"UpdateEnemyCount"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 7 )
    goto LABEL_115;
  v53->m_Items[7] = (Il2CppObject *)v55;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[7], v55, v100, v101, v102, v103, v104, v105);
  v54 = StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  if ( StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/ )
  {
    v54 = sub_1C13E60(StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
    v55 = StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 8 )
    goto LABEL_115;
  v53->m_Items[8] = (Il2CppObject *)v55;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[8], v55, v106, v107, v108, v109, v110, v111);
  v54 = StringLiteral_6098/*"EndCloseDlg"*/;
  if ( StringLiteral_6098/*"EndCloseDlg"*/ )
  {
    v54 = sub_1C13E60(StringLiteral_6098/*"EndCloseDlg"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
    v55 = StringLiteral_6098/*"EndCloseDlg"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 9 )
    goto LABEL_115;
  v53->m_Items[9] = (Il2CppObject *)v55;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[9], v55, v112, v113, v114, v115, v116, v117);
  v54 = StringLiteral_24320/*"textarea"*/;
  if ( StringLiteral_24320/*"textarea"*/ )
  {
    v54 = sub_1C13E60(StringLiteral_24320/*"textarea"*/, v53->obj.klass->_1.element_class);
    if ( !v54 )
      goto LABEL_116;
    v55 = StringLiteral_24320/*"textarea"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v53->max_length <= 0xA )
    goto LABEL_115;
  v53->m_Items[10] = (Il2CppObject *)v55;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[10], v55, v118, v119, v120, v121, v122, v123);
  v161 = 0x40000000;
  v54 = j_il2cpp_value_box_0(float_TypeInfo, &v161, v124, v125, v126);
  v133 = v54;
  if ( v54 )
  {
    v54 = sub_1C13E60(v54, v53->obj.klass->_1.element_class);
    if ( !v54 )
    {
LABEL_116:
      v160 = sub_1C13FA4(v54);
      sub_1C13E4C(v160, 0LL);
    }
  }
  if ( v53->max_length <= 0xB )
LABEL_115:
    sub_1C13F88(v54, v55);
  v53->m_Items[11] = (Il2CppObject *)v133;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v53->m_Items[11], v133, v127, v128, v129, v130, v131, v132);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v134 = iTween__Hash(v53, 0LL);
  iTween__ValueTo(gameObject, v134, 0LL);
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
    v142 = LocalizationManager__Get((System_String_o *)StringLiteral_8755/*"MAX_EVENT_POINT"*/, 0LL);
    baseLvMax = this->fields.baseLvMax;
    v146 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseLvMax, v143, v144, v145);
    resLvMax = this->fields.resLvMax;
    v150 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &resLvMax, v147, v148, v149);
    Instance = (__int64)System_String__Format_62982316(v142, v146, v150, 0LL);
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
                          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_97;
    UITweener__PlayForward((UITweener_o *)Instance, 0LL);
    Instance = (__int64)this->fields.resLimitCntList;
    if ( !Instance )
      goto LABEL_97;
    v151 = 0;
    while ( v151 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v151,
                            (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Instance )
        {
          SetLimitCntInfoComponent__setEnableOnImg(
            (SetLimitCntInfoComponent_o *)Instance,
            v151 < this->fields.resLimitCnt,
            0LL);
          Instance = (__int64)this->fields.resLimitCntList;
          ++v151;
          if ( Instance )
            continue;
        }
      }
      goto LABEL_97;
    }
  }
  v135 = this->fields.baseUsrSvtData;
  if ( !v135 )
    goto LABEL_97;
  v136 = this->fields.resUsrSvtData;
  if ( !v136 )
    goto LABEL_97;
  if ( v135->fields.lv != v136->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    v137 = (_DWORD)this + 716;
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      Instance = (__int64)System_Int32__ToString_63773552(v137, (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/, 0LL);
      if ( !resSvtEqHpLb )
        goto LABEL_97;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)Instance, 0LL);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      Instance = (__int64)System_Int32__ToString_63773552(v137, (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_97;
      UILabel__set_text(resHpLb, (System_String_o *)Instance, 0LL);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v153);
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
  v155 = (_DWORD)this + 724;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    Instance = (__int64)System_Int32__ToString_63773552(v155, (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/, 0LL);
    if ( !resSvtEqAtkLb )
      goto LABEL_97;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)Instance, 0LL);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    Instance = (__int64)System_Int32__ToString_63773552(v155, (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/, 0LL);
    if ( !resAtkLb )
      goto LABEL_97;
    UILabel__set_text(resAtkLb, (System_String_o *)Instance, 0LL);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v158);
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
    sub_1C13F80(Instance, v28);
  UIWidget__set_color(resAtkWidget, *(UnityEngine_Color_o *)*(_QWORD *)(Instance + 184), 0LL);
}


void __fastcall SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4BB819E & 1) == 0 )
  {
    sub_1C13D24(&iTween_TypeInfo, callback);
    byte_4BB819E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61615872(gameObject, 0LL);
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
    sub_1C13F80(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}