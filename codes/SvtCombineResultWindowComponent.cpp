void SvtCombineResultWindowComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  struct SvtCombineResultWindowComponent_StaticFields *static_fields; // x0
  int32_t v9; // w1
  MissionNaviTransitionBoardItem_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A1C7 & 1) == 0 )
  {
    sub_2213A60(&SvtCombineResultWindowComponent_TypeInfo);
    sub_2213A60(&StringLiteral_4740/*"Combine/"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596A1C7 = 1;
  }
  SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_E9D290;
  v7 = StringLiteral_4740/*"Combine/"*/;
  static_fields = SvtCombineResultWindowComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_FOLDER = (struct System_String_o *)StringLiteral_4740/*"Combine/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->TUTORIAL_FOLDER, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_1198/*"0"*/;
  v10 = (MissionNaviTransitionBoardItem_o *)SvtCombineResultWindowComponent_TypeInfo->static_fields;
  v10->fields.sortValue1 = StringLiteral_1198/*"0"*/;
  v10 = (MissionNaviTransitionBoardItem_o *)((char *)v10 + 48);
  *(_OWORD *)&v10[-1].fields._ClosedMessage_k__BackingField = xmmword_E9BF00;
  *(_QWORD *)&v10[-1].fields._BoardType_k__BackingField = 0x5ED000005ECLL;
  sub_2213A04(v10, v9, v11, v12, v13, v14, v15, v16);
}


void SvtCombineResultWindowComponent___ctor(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A1C6 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A1C6 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SvtCombineResultWindowComponent__ClickSkip(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_596A1C5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SvtCombineResultWindowComponent_EndExpUpdateGauge__);
    byte_596A1C5 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_2213CDC(0, method);
  if ( UnityEngine_Collider__get_enabled(skipCollider, 0) )
  {
    this->fields.isWaitOpenTutorial = 0;
    v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndExpUpdateGauge__, 0);
    SvtCombineResultWindowComponent__skipExp(this, v4, v5);
  }
}


void SvtCombineResultWindowComponent__Close(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596A1C3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SvtCombineResultWindowComponent_EndClose__);
    byte_596A1C3 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0);
  SvtCombineResultWindowComponent__Close_37636952(this, v4, v5);
}


void SvtCombineResultWindowComponent__Close_37636952(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_596A1C4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SvtCombineResultWindowComponent_EndClose__);
    byte_596A1C4 = 1;
  }
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SvtCombineResultWindowComponent__EndClose(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  BaseDialog__Init((BaseDialog_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  SvtCombineResultWindowComponent__destroyCurrentStatusGrid(this, v5);
  SvtCombineResultWindowComponent__destroyResStatusGrid(this, v6);
}


void SvtCombineResultWindowComponent__EndDisp(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  OpenInfoWindowComponent_o *openInfowindowComp; // x20
  System_Collections_Generic_List_GameObject__o *resInfoList; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_596A1BB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SvtCombineResultWindowComponent_EndOpen__);
    byte_596A1BB = 1;
  }
  if ( this->fields.isGetNewSkill || this->fields.isOpenQuest )
  {
    openInfowindowComp = this->fields.openInfowindowComp;
    resInfoList = this->fields.resInfoList;
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0);
    if ( !openInfowindowComp )
      sub_2213CDC(v6, v7);
    OpenInfoWindowComponent__OpenResultInfo(openInfowindowComp, resInfoList, v5, 1, v8);
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
  __int64 v4; // x1
  __int64 v5; // x2
  SoundManager_c *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_596A1BA & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596A1BA = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0);
  v6 = SoundManager_TypeInfo;
  this->fields.isUpdateGauge = 0;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, v4, v5);
  SoundManager__stopSystemSe(0);
  SvtCombineResultWindowComponent__EndDisp(this, v7);
}


void SvtCombineResultWindowComponent__EndOpen(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 IsFlag20260802; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Action_o *openCallBack; // x21
  struct System_Action_o *endTutorialCallBack; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Action_o *v26; // x22
  __int64 *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x2
  _BOOL4 isAtkLimitUp; // w9
  int32_t *v36; // x21
  SvtCombineResultWindowComponent_c *v37; // x0
  int v38; // w8
  int32_t SVT_COMBINE_LIMITUP_ATK_TUTORIAL; // w22
  SvtCombineResultWindowComponent_c *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  SvtCombineResultWindowComponent_c *v43; // x0
  int v44; // w9
  int32_t *p_ADD_DOUBLE_TUTORIAL; // x8
  SvtCombineResultWindowComponent_c *v46; // x0
  System_Action_o *v47; // x21
  __int64 *v48; // x20
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  Il2CppObject *Instance; // x20
  System_Int32_array *v56; // x21
  System_Action_c *v57; // x0
  System_Action_o *v58; // x22
  __int64 v59; // x8

  if ( (byte_596A1C2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SvtCombineResultWindowComponent_TypeInfo);
    sub_2213A60(&Method_SvtCombineResultWindowComponent___c__DisplayClass132_0__EndOpen_b__0__);
    sub_2213A60(&Method_SvtCombineResultWindowComponent___c__DisplayClass132_0__EndOpen_b__1__);
    sub_2213A60(&Method_SvtCombineResultWindowComponent___c__DisplayClass132_0__EndOpen_b__2__);
    sub_2213A60(&SvtCombineResultWindowComponent___c__DisplayClass132_0_TypeInfo);
    byte_596A1C2 = 1;
  }
  v3 = sub_2213CCC(SvtCombineResultWindowComponent___c__DisplayClass132_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_51;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !this->fields.isUnskippable )
  {
    openCallBack = this->fields.openCallBack;
    if ( openCallBack )
    {
      this->fields.openCallBack = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack, 0, v12, v13, v14, v15, v16, v17);
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
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v3 + 24),
          (int32_t)endTutorialCallBack,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        this->fields.endTutorialCallBack = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.endTutorialCallBack,
          0,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v26,
          (Il2CppObject *)v3,
          Method_SvtCombineResultWindowComponent___c__DisplayClass132_0__EndOpen_b__0__,
          0);
        *(_QWORD *)(v3 + 40) = v26;
        v27 = (__int64 *)(v3 + 40);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v26, v28, v29, v30, v31, v32, v33);
        IsFlag20260802 = ConstantMaster__IsFlag20260802(0);
        if ( (IsFlag20260802 & 1) != 0 )
        {
          if ( !this->fields.isHpLimitUp )
          {
LABEL_22:
            if ( this->fields.isAtkLimitUp )
            {
              *(_DWORD *)(v3 + 32) = 0;
              v36 = (int32_t *)(v3 + 32);
              v40 = SvtCombineResultWindowComponent_TypeInfo;
              if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v5, v34);
                v40 = SvtCombineResultWindowComponent_TypeInfo;
              }
              SVT_COMBINE_LIMITUP_ATK_TUTORIAL = v40->static_fields->SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
              goto LABEL_29;
            }
            if ( this->fields.isParam1Bounded || this->fields.isParam2Bounded )
            {
              SVT_COMBINE_LIMITUP_ATK_TUTORIAL = 0;
              *(_DWORD *)(v3 + 32) = 0;
              v36 = (int32_t *)(v3 + 32);
              goto LABEL_29;
            }
LABEL_50:
            v59 = *v27;
            if ( !*v27 )
              goto LABEL_51;
LABEL_49:
            (*(void (__fastcall **)(_QWORD, _QWORD))(v59 + 24))(*(_QWORD *)(v59 + 64), *(_QWORD *)(v59 + 40));
            return;
          }
        }
        else if ( !this->fields.isHpLimitUp )
        {
          if ( !this->fields.isAtkLimitUp )
            goto LABEL_50;
          goto LABEL_22;
        }
        isAtkLimitUp = this->fields.isAtkLimitUp;
        *(_DWORD *)(v3 + 32) = 0;
        v36 = (int32_t *)(v3 + 32);
        v37 = SvtCombineResultWindowComponent_TypeInfo;
        v38 = *(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1);
        if ( isAtkLimitUp )
        {
          if ( !v38 )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v5, v34);
            v37 = SvtCombineResultWindowComponent_TypeInfo;
          }
          SVT_COMBINE_LIMITUP_ATK_TUTORIAL = v37->static_fields->SVT_COMBINE_LIMITUP_DOUBLE_TUTORIAL;
        }
        else
        {
          if ( !v38 )
          {
            j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v5, v34);
            v37 = SvtCombineResultWindowComponent_TypeInfo;
          }
          SVT_COMBINE_LIMITUP_ATK_TUTORIAL = v37->static_fields->SVT_COMBINE_LIMITUP_HP_TUTORIAL;
        }
LABEL_29:
        if ( ConstantMaster__IsFlag20260802(0) )
        {
          if ( this->fields.isParam1Bounded )
          {
            v43 = SvtCombineResultWindowComponent_TypeInfo;
            v44 = *(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1);
            if ( this->fields.isParam2Bounded )
            {
              if ( !v44 )
              {
                j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v41, v42);
                v43 = SvtCombineResultWindowComponent_TypeInfo;
              }
              p_ADD_DOUBLE_TUTORIAL = &v43->static_fields->ADD_DOUBLE_TUTORIAL;
            }
            else
            {
              if ( !v44 )
              {
                j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v41, v42);
                v43 = SvtCombineResultWindowComponent_TypeInfo;
              }
              p_ADD_DOUBLE_TUTORIAL = &v43->static_fields->ADD_1_TUTORIAL;
            }
LABEL_42:
            *v36 = *p_ADD_DOUBLE_TUTORIAL;
            goto LABEL_43;
          }
          if ( this->fields.isParam2Bounded )
          {
            v46 = SvtCombineResultWindowComponent_TypeInfo;
            if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v41, v42);
              v46 = SvtCombineResultWindowComponent_TypeInfo;
            }
            p_ADD_DOUBLE_TUTORIAL = &v46->static_fields->ADD_2_TUTORIAL;
            goto LABEL_42;
          }
        }
LABEL_43:
        v47 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v47,
          (Il2CppObject *)v3,
          Method_SvtCombineResultWindowComponent___c__DisplayClass132_0__EndOpen_b__1__,
          0);
        *(_QWORD *)(v3 + 48) = v47;
        v48 = (__int64 *)(v3 + 48);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 48), (int32_t)v47, v49, v50, v51, v52, v53, v54);
        if ( SVT_COMBINE_LIMITUP_ATK_TUTORIAL )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          IsFlag20260802 = sub_2213B20(int___TypeInfo, 1);
          if ( IsFlag20260802 )
          {
            v56 = (System_Int32_array *)IsFlag20260802;
            if ( !*(_DWORD *)(IsFlag20260802 + 24) )
              sub_2213CE4(IsFlag20260802);
            v57 = System_Action_TypeInfo;
            v56->m_Items[0] = SVT_COMBINE_LIMITUP_ATK_TUTORIAL;
            v58 = (System_Action_o *)sub_2213CCC(v57);
            System_Action___ctor(
              v58,
              (Il2CppObject *)v3,
              Method_SvtCombineResultWindowComponent___c__DisplayClass132_0__EndOpen_b__2__,
              0);
            if ( Instance )
            {
              CommonUI__OpenImageDialogAssets((CommonUI_o *)Instance, v56, 2, v58, 0);
              return;
            }
          }
LABEL_51:
          sub_2213CDC(IsFlag20260802, v5);
        }
        v59 = *v48;
        if ( !*v48 )
          goto LABEL_51;
        goto LABEL_49;
      }
    }
  }
}


void SvtCombineResultWindowComponent__InitStateInfo(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x20

  if ( (byte_596A1B0 & 1) == 0 )
  {
    sub_2213A60(&SvtCombineResultWindowComponent_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1B0 = 1;
  }
  currentMaxLvLb = (UILabel_o *)SvtCombineResultWindowComponent_TypeInfo;
  currentLvLb = this->fields.currentLvLb;
  if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, method, v2);
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
    sub_2213CDC(currentMaxLvLb, method);
  }
  UILabel__set_text(currentMaxLvLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  *(_DWORD *)&this->fields.isAtkLimitUp = 0;
}


bool SvtCombineResultWindowComponent__IsOpenStatusLimitTutorial(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isHpLimitUp
      || this->fields.isAtkLimitUp
      || this->fields.isParam1Bounded
      || this->fields.isParam2Bounded;
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
  __int64 v7; // x2
  const MethodInfo *v8; // x4
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v10; // x9
  float v11; // s0
  float exp; // s9
  float v13; // s10
  float v14; // s9
  unsigned int v15; // w9
  int32_t v16; // w21
  float v17; // s0
  struct UserServantEntity_o *v18; // x8
  float v19; // s0
  struct UserServantEntity_o *v20; // x8
  struct UserServantEntity_o *v21; // x8
  int32_t v22; // w21
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  UITweener_o *v25; // x20
  _BOOL4 isEqCombine; // w8
  UIExtrusionLabel_o *v27; // x20
  __int64 v28; // x2
  UIWidget_o *resLvWidget; // x20
  UILabel_o *resSvtEqHpLb; // x20
  __int64 v31; // x2
  UILabel_o *resHpLb; // x20
  const MethodInfo *v33; // x2
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  __int64 v36; // x2
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v38; // x2
  UIWidget_o *resAtkWidget; // x19
  int32_t afterAtk; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t afterHp[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596A1B9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&Method_SvtCombineResultWindowComponent_UpdateValue__);
    sub_2213A60(&SvtCombineResultWindowComponent_TypeInfo);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_596A1B9 = 1;
  }
  resUsrSvtData = (__int64)this->fields.resUsrSvtData;
  *(_QWORD *)afterHp = 0;
  afterAtk = 0;
  if ( !resUsrSvtData )
    goto LABEL_69;
  resUsrSvtData = UserServantEntity__getLevelMax((UserServantEntity_o *)resUsrSvtData, 0);
  if ( !this->fields.skipCollider )
    goto LABEL_69;
  v6 = resUsrSvtData;
  UnityEngine_Collider__set_enabled(this->fields.skipCollider, 1, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_69;
  v10 = this->fields.resUsrSvtData;
  if ( !v10 )
    goto LABEL_69;
  v11 = 1.0;
  exp = (float)baseUsrSvtData->fields.exp;
  if ( val <= 1.0 )
    v11 = val;
  if ( val < 0.0 )
    v11 = 0.0;
  v13 = v11 * (float)((float)v10->fields.exp - exp);
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v14 = v13 + exp;
  resUsrSvtData = (__int64)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v7);
  v15 = vcvtms_s32_f32(v14);
  if ( floorf(v14) == INFINITY )
    v16 = 0x80000000;
  else
    v16 = v15;
  if ( !byte_5969AE4 )
  {
    resUsrSvtData = sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v17 = fabsf(val);
  if ( v17 < 1.0 )
    v17 = 1.0;
  v18 = this->fields.resUsrSvtData;
  v19 = v17 * 0.000001;
  if ( v19 <= (float)(UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0) )
    v19 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  if ( fabsf(val + -1.0) >= v19 )
  {
    if ( !v18 )
      goto LABEL_69;
  }
  else
  {
    if ( !v18 )
      goto LABEL_69;
    v16 = v18->fields.exp;
  }
  v20 = this->fields.baseUsrSvtData;
  if ( !v20 )
    goto LABEL_69;
  resUsrSvtData = SvtCombineResultWindowComponent__setSvtExp(this, (int32_t)method, v16, v20->fields.lv, v8);
  v21 = this->fields.baseUsrSvtData;
  afterHp[1] = resUsrSvtData;
  if ( !v21 )
    goto LABEL_69;
  if ( v21->fields.lv == v6 )
    return;
  v22 = resUsrSvtData;
  if ( !this->fields.isUpdateGauge )
  {
    v23 = Method_SvtCombineResultWindowComponent_UpdateValue__;
    if ( (*((_BYTE *)Method_SvtCombineResultWindowComponent_UpdateValue__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_2213A78(Method_SvtCombineResultWindowComponent_UpdateValue__);
    v24 = (System_Reflection_MethodBase_o *)sub_2213A44(v23, v23[4]);
    OverwriteAssetSoundName__PlaySystemSe(v24, 3, 0, 0);
    this->fields.isUpdateGauge = 1;
  }
  if ( v22 == this->fields.PrevLevel )
  {
    this->fields.endDispLvInfoFlg = 1;
    return;
  }
  resUsrSvtData = (__int64)this->fields.lvUpInfo;
  if ( !resUsrSvtData )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resUsrSvtData, 1, 0);
  resUsrSvtData = (__int64)this->fields.lvUpInfo;
  if ( !resUsrSvtData )
    goto LABEL_69;
  resUsrSvtData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)resUsrSvtData,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !resUsrSvtData )
    goto LABEL_69;
  v25 = (UITweener_o *)resUsrSvtData;
  UITweener__ResetToBeginning((UITweener_o *)resUsrSvtData, 0);
  UITweener__PlayForward(v25, 0);
  isEqCombine = this->fields.isEqCombine;
  this->fields.PrevLevel = v22;
  this->fields.endDispLvInfoFlg = 0;
  v27 = isEqCombine ? this->fields.resSvtEqLvLb : this->fields.resLvLb;
  resUsrSvtData = (__int64)System_Int32__ToString((int32_t)&afterHp[1], 0);
  if ( !v27 )
    goto LABEL_69;
  UIExtrusionLabel__set_text(v27, (System_String_o *)resUsrSvtData, 0);
  resLvWidget = this->fields.resLvWidget;
  resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, method, v28);
  if ( !resLvWidget )
    goto LABEL_69;
  UIWidget__set_color(resLvWidget, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
  resUsrSvtData = (__int64)this->fields.checkResInfo;
  if ( !resUsrSvtData )
    goto LABEL_69;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)resUsrSvtData,
    afterHp,
    &afterAtk,
    this->fields.resUsrSvtData,
    afterHp[1],
    0);
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      resUsrSvtData = (__int64)System_Int32__ToString_77138656(
                                 (int32_t)afterHp,
                                 (System_String_o *)StringLiteral_9617/*"N0"*/,
                                 0);
      if ( !resSvtEqHpLb )
        goto LABEL_69;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)resUsrSvtData, 0);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      resUsrSvtData = (__int64)System_Int32__ToString_77138656(
                                 (int32_t)afterHp,
                                 (System_String_o *)StringLiteral_9617/*"N0"*/,
                                 0);
      if ( !resHpLb )
        goto LABEL_69;
      UILabel__set_text(resHpLb, (System_String_o *)resUsrSvtData, 0);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v33);
    }
    resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    resHpWidget = this->fields.resHpWidget;
    if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, method, v31);
    if ( !resHpWidget )
      goto LABEL_69;
    UIWidget__set_color(resHpWidget, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    resUsrSvtData = (__int64)System_Int32__ToString_77138656(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9617/*"N0"*/,
                               0);
    if ( !resSvtEqAtkLb )
      goto LABEL_69;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)resUsrSvtData, 0);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    resUsrSvtData = (__int64)System_Int32__ToString_77138656(
                               (int32_t)&afterAtk,
                               (System_String_o *)StringLiteral_9617/*"N0"*/,
                               0);
    if ( !resAtkLb )
      goto LABEL_69;
    UILabel__set_text(resAtkLb, (System_String_o *)resUsrSvtData, 0);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v38);
  }
  resUsrSvtData = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  resAtkWidget = this->fields.resAtkWidget;
  if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, method, v36);
  if ( !resAtkWidget )
LABEL_69:
    sub_2213CDC(resUsrSvtData, method);
  UIWidget__set_color(resAtkWidget, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
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
  int32_t v8; // w22
  int64_t *p_fakeValue; // x24
  int32_t v10; // w20
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Entity; // x20
  UILabel_o *skillGetInfoTitle; // x21
  UILabel_o *skillGetInfoDetail; // x21
  System_String_o *v16; // x22
  Il2CppObject *Name; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int64_t currentCryptoKey; // x8
  _QWORD *v25; // x9
  __int64 hiddenValue_low; // x10
  int64_t v27; // x8

  if ( (byte_596A1BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_7255/*"GET_SKILL_NAME"*/);
    sub_2213A60(&StringLiteral_7257/*"GET_SKILL_TITLE"*/);
    byte_596A1BE = 1;
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
  v8 = (_DWORD)v4 + 32;
  p_fakeValue = &baseUsrSvtData->fields.id.fields.fakeValue;
  while ( 1 )
  {
    if ( !v6 )
      goto LABEL_30;
    if ( v7 >= LODWORD(v6->fields.id.fields.hiddenValue) || v7 >= (unsigned int)hiddenValue )
      goto LABEL_29;
    baseUsrSvtData = (UserServantEntity_o *)System_Int32__Equals_77138484(v8, *((_DWORD *)p_fakeValue + v7), 0);
    if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
      break;
    LODWORD(hiddenValue) = v4->fields.id.fields.hiddenValue;
    ++v7;
    v8 += 4;
    if ( (__int64)v7 >= (int)hiddenValue )
      return;
  }
  if ( (unsigned int)v7 >= LODWORD(v6->fields.id.fields.hiddenValue) )
LABEL_29:
    sub_2213CE4(baseUsrSvtData);
  v10 = *((_DWORD *)&v6->fields.id.fields.fakeValue + v7);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
             v10,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillGetInfoTitle = this->fields.skillGetInfoTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7257/*"GET_SKILL_TITLE"*/, 0);
  if ( !skillGetInfoTitle )
    goto LABEL_30;
  UILabel__set_text(skillGetInfoTitle, (System_String_o *)baseUsrSvtData, 0);
  skillGetInfoDetail = this->fields.skillGetInfoDetail;
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7255/*"GET_SKILL_NAME"*/, 0);
  if ( !Entity )
    goto LABEL_30;
  v16 = (System_String_o *)baseUsrSvtData;
  Name = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)Entity, 0);
  baseUsrSvtData = (UserServantEntity_o *)System_String__Format(v16, Name, 0);
  if ( !skillGetInfoDetail
    || (UILabel__set_text(skillGetInfoDetail, (System_String_o *)baseUsrSvtData, 0),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.resInfoList) == 0)
    || (currentCryptoKey = baseUsrSvtData->fields.id.fields.currentCryptoKey,
        method = (const MethodInfo *)this->fields.skillGetInfo,
        v25 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(baseUsrSvtData->fields.id.fields.hiddenValue),
        !currentCryptoKey) )
  {
LABEL_30:
    sub_2213CDC(baseUsrSvtData, method);
  }
  hiddenValue_low = SLODWORD(baseUsrSvtData->fields.id.fields.hiddenValue);
  if ( (unsigned int)hiddenValue_low >= *(_DWORD *)(currentCryptoKey + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)baseUsrSvtData,
      (Il2CppObject *)method,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = currentCryptoKey + 8 * hiddenValue_low;
    LODWORD(baseUsrSvtData->fields.id.fields.hiddenValue) = hiddenValue_low + 1;
    *(_QWORD *)(v27 + 32) = method;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 32), (int32_t)method, v18, v19, v20, v21, v22, v23);
  }
  this->fields.isGetNewSkill = 1;
}


void SvtCombineResultWindowComponent__checkQuestOpen(SvtCombineResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__c *v3; // x0
  System_Collections_Generic_List_int__o *v4; // x0
  clsQuestCheck_o *Instance; // x0
  Il2CppObject *heroQuestInfo; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *resUsrSvtData; // x8
  clsQuestCheck_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  System_Collections_Generic_List_int__o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *storyQuestInfoTitle; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  UILabel_o *heroQuestInfoTitle; // x21
  int32_t i; // w21
  Il2CppObject *MasterData_object; // x22
  __int64 v20; // x2
  int monitor; // w8
  clsQuestCheck_o *v22; // x22
  UILabel_o *storyQuestInfoDetail; // x23
  System_String_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int cQuestReleaseListP_high; // w10
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x8
  UILabel_o *eventQuestInfoDetail; // x23
  System_String_o *v34; // x0
  UILabel_o *heroQuestInfoDetail; // x23
  System_String_o *v36; // x0
  __int64 cQuestReleaseListP_low; // x10
  __int64 v38; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_596A1BD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&StringLiteral_10051/*"OPEN_STORY_QUEST_TITLE"*/);
    sub_2213A60(&StringLiteral_10037/*"OPEN_EVENT_QUEST_NAME"*/);
    sub_2213A60(&StringLiteral_10040/*"OPEN_HERO_QUEST_TITLE"*/);
    byte_596A1BD = 1;
  }
  v3 = System_Collections_Generic_List_int__TypeInfo;
  this->fields.isOpenQuest = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_43;
  v9 = Instance;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, heroQuestInfo, v7);
  *(_QWORD *)&v39.fields.currentCryptoKey = v10;
  *(_QWORD *)&v39.fields.fakeValue = v11;
  Instance = (clsQuestCheck_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v39, 0);
  if ( !v9 )
    goto LABEL_43;
  v12 = clsQuestCheck__GetReleaseQuestIdByServantLv(v9, (int32_t)Instance, this->fields.baseSvtCollectionLv, 0);
  storyQuestInfoTitle = this->fields.storyQuestInfoTitle;
  v16 = v12;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10051/*"OPEN_STORY_QUEST_TITLE"*/, 0);
  if ( !storyQuestInfoTitle
    || (UILabel__set_text(storyQuestInfoTitle, (System_String_o *)Instance, 0),
        heroQuestInfoTitle = this->fields.heroQuestInfoTitle,
        Instance = (clsQuestCheck_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10040/*"OPEN_HERO_QUEST_TITLE"*/, 0),
        !heroQuestInfoTitle) )
  {
LABEL_43:
    sub_2213CDC(Instance, heroQuestInfo);
  }
  UILabel__set_text(heroQuestInfoTitle, (System_String_o *)Instance, 0);
  if ( v16 && v16->fields._size >= 1 )
  {
    for ( i = 0; i < v16->fields._size; ++i )
    {
      if ( System_Collections_Generic_List_int___get_Item(
             v16,
             i,
             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) >= 1 )
      {
        Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
        Instance = (clsQuestCheck_o *)System_Collections_Generic_List_int___get_Item(
                                        v16,
                                        i,
                                        (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !MasterData_object )
          goto LABEL_43;
        Instance = (clsQuestCheck_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        (int32_t)Instance,
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_43;
        monitor = (int)Instance[1].monitor;
        v22 = Instance;
        switch ( monitor )
        {
          case 6:
            heroQuestInfoDetail = this->fields.heroQuestInfoDetail;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, heroQuestInfo, v20);
            v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10037/*"OPEN_EVENT_QUEST_NAME"*/, 0);
            Instance = (clsQuestCheck_o *)System_String__Format(v36, (Il2CppObject *)v22->fields.cQuestReleaseListP, 0);
            if ( !heroQuestInfoDetail )
              goto LABEL_43;
            UILabel__set_text(heroQuestInfoDetail, (System_String_o *)Instance, 0);
            Instance = (clsQuestCheck_o *)this->fields.resInfoList;
            if ( !Instance )
              goto LABEL_43;
            cQuestReleaseListP_high = HIDWORD(Instance->fields.cQuestReleaseListP);
            qrs = Instance->fields.qrs;
            heroQuestInfo = (Il2CppObject *)this->fields.heroQuestInfo;
            goto LABEL_36;
          case 5:
            eventQuestInfoDetail = this->fields.eventQuestInfoDetail;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, heroQuestInfo, v20);
            v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10037/*"OPEN_EVENT_QUEST_NAME"*/, 0);
            Instance = (clsQuestCheck_o *)System_String__Format(v34, (Il2CppObject *)v22->fields.cQuestReleaseListP, 0);
            if ( !eventQuestInfoDetail )
              goto LABEL_43;
            UILabel__set_text(eventQuestInfoDetail, (System_String_o *)Instance, 0);
            Instance = (clsQuestCheck_o *)this->fields.resInfoList;
            if ( !Instance )
              goto LABEL_43;
            cQuestReleaseListP_high = HIDWORD(Instance->fields.cQuestReleaseListP);
            qrs = Instance->fields.qrs;
            heroQuestInfo = (Il2CppObject *)this->fields.eventQuestInfo;
            goto LABEL_36;
          case 3:
            storyQuestInfoDetail = this->fields.storyQuestInfoDetail;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, heroQuestInfo, v20);
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10037/*"OPEN_EVENT_QUEST_NAME"*/, 0);
            Instance = (clsQuestCheck_o *)System_String__Format(v24, (Il2CppObject *)v22->fields.cQuestReleaseListP, 0);
            if ( !storyQuestInfoDetail )
              goto LABEL_43;
            UILabel__set_text(storyQuestInfoDetail, (System_String_o *)Instance, 0);
            Instance = (clsQuestCheck_o *)this->fields.resInfoList;
            if ( !Instance )
              goto LABEL_43;
            cQuestReleaseListP_high = HIDWORD(Instance->fields.cQuestReleaseListP);
            qrs = Instance->fields.qrs;
            heroQuestInfo = (Il2CppObject *)this->fields.storyQuestInfo;
LABEL_36:
            HIDWORD(Instance->fields.cQuestReleaseListP) = cQuestReleaseListP_high + 1;
            if ( !qrs )
              goto LABEL_43;
            cQuestReleaseListP_low = SLODWORD(Instance->fields.cQuestReleaseListP);
            if ( (unsigned int)cQuestReleaseListP_low >= qrs->fields._size )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                heroQuestInfo,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_GameObject__Add__
                                                           + 4)
                                                         + 192LL)
                                             + 112LL));
            }
            else
            {
              v38 = (__int64)qrs + 8 * cQuestReleaseListP_low;
              LODWORD(Instance->fields.cQuestReleaseListP) = cQuestReleaseListP_low + 1;
              *(_QWORD *)(v38 + 32) = heroQuestInfo;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v38 + 32),
                (int32_t)heroQuestInfo,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
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
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *gameObject; // x21
  int v10; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x20

  if ( (byte_596A1C0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A1C0 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      if ( (unsigned int)--v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_2213CDC(currentLimitCntGrid, method);
  }
LABEL_15:
  if ( childCount >= 1 )
  {
    v10 = childCount + 1;
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
                                                         v10 - 2,
                                                         0);
      if ( !currentLimitCntGrid )
        break;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currentLimitCntGrid, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      UnityEngine_Object__Destroy_83459800(v13, 0);
      if ( (unsigned int)--v10 <= 1 )
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
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *gameObject; // x21
  int v10; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x20

  if ( (byte_596A1C1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A1C1 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      if ( (unsigned int)--v6 <= 1 )
        goto LABEL_15;
    }
LABEL_24:
    sub_2213CDC(resLimitCntGrid, method);
  }
LABEL_15:
  if ( childCount >= 1 )
  {
    v10 = childCount + 1;
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
                                                     v10 - 2,
                                                     0);
      if ( !resLimitCntGrid )
        break;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resLimitCntGrid, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      UnityEngine_Object__Destroy_83459800(v13, 0);
      if ( (unsigned int)--v10 <= 1 )
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
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(lvUpInfo, this->fields.endDispLvInfoFlg, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtCombineResultWindowComponent__setAfterSvtResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *resData,
        int32_t svtCollectionLv,
        System_Action_o *callback,
        System_Action_o *endTutorialCb,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  __int64 v14; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t LevelMax; // w0
  _BOOL4 isEqCombine; // w8
  int32_t childCount; // w23
  UnityEngine_Transform_o *transform; // x24
  System_Collections_Generic_List_object__o *v20; // x26
  struct System_Collections_Generic_List_GameObject__o **p_resLimitCntList; // x25
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w26
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_List_object__o *v41; // x8
  struct System_Object_array *items; // x9
  _QWORD *v43; // x10
  __int64 size; // x11
  UserServantEntity_o *v45; // x1
  Il2CppClass **v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_List_object__o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  const MethodInfo_47A29F8 *v60; // x0
  __int64 v61; // x2
  struct UserServantEntity_o *v62; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x20
  __int64 v64; // x21
  __int64 v65; // x22
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_596A1B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A1B6 = 1;
  }
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  this->fields.resUsrSvtData = resData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData,
    (int32_t)resData,
    *(System_String_o **)&svtCollectionLv,
    (System_String_o *)callback,
    (int32_t)endTutorialCb,
    (int32_t)method,
    v6,
    v7);
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
  v20 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  p_resLimitCntList = &this->fields.resLimitCntList;
  this->fields.resLimitCntList = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resLimitCntList,
    (int32_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( childCount >= 1 )
  {
    if ( transform )
    {
      v34 = 0;
      while ( 1 )
      {
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Transform__GetChild(transform, v34, 0);
        if ( !resUsrSvtData )
          break;
        resUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)resUsrSvtData,
                                                 0);
        v41 = (System_Collections_Generic_List_object__o *)*p_resLimitCntList;
        if ( !*p_resLimitCntList )
          break;
        items = v41->fields._items;
        v43 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v41->fields._version;
        if ( !items )
          break;
        size = v41->fields._size;
        v45 = resUsrSvtData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v41,
            (Il2CppObject *)resUsrSvtData,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v41->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v45;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 4), (int32_t)v45, v35, v36, v37, v38, v39, v40);
        }
        if ( childCount == ++v34 )
          goto LABEL_23;
      }
    }
LABEL_32:
    sub_2213CDC(resUsrSvtData, v14);
  }
LABEL_23:
  this->fields.openCallBack = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
    (int32_t)callback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.endTutorialCallBack = endTutorialCb;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endTutorialCallBack,
    (int32_t)endTutorialCb,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resInfoList = (struct System_Collections_Generic_List_GameObject__o *)v53;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resInfoList, (int32_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *(_WORD *)&this->fields.isGetNewSkill = 0;
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v60);
  if ( !resUsrSvtData )
    goto LABEL_32;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v62 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
    goto LABEL_32;
  v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)resUsrSvtData;
  v64 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v61);
  *(_QWORD *)&v68.fields.currentCryptoKey = v64;
  *(_QWORD *)&v68.fields.fakeValue = v65;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v68, 0);
  if ( !v63 )
    goto LABEL_32;
  resUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           v63,
                                           (int32_t)resUsrSvtData,
                                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !resUsrSvtData )
    goto LABEL_32;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)resUsrSvtData, 0) )
  {
    SvtCombineResultWindowComponent__checkQuestOpen(this, v66);
    SvtCombineResultWindowComponent__checkGetSkill(this, v67);
  }
  SvtCombineResultWindowComponent__showGetExp(this, v66);
}


void SvtCombineResultWindowComponent__setBaseAdjustInfo(
        SvtCombineResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  __int64 v4; // x2
  struct UserServantEntity_o *v5; // x8
  int32_t adjustHp; // w21
  const MethodInfo *v7; // x2
  struct UserServantEntity_o *v8; // x8
  const MethodInfo *v9; // x2
  int32_t atkData[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596A1B3 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1B3 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  *(_QWORD *)atkData = 0;
  if ( !baseUsrSvtData )
    goto LABEL_13;
  UserServantEntity__GetAdjustMaxData(baseUsrSvtData, &atkData[1], atkData, 0);
  v5 = this->fields.baseUsrSvtData;
  if ( !v5 )
    goto LABEL_13;
  adjustHp = v5->fields.adjustHp;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v4);
  baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustHpIconLabel;
  if ( !baseUsrSvtData )
    goto LABEL_13;
  UIIconLabel__Set_48071660(
    (UIIconLabel_o *)baseUsrSvtData,
    44,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * adjustHp,
    atkData[1],
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !baseUsrSvtData
    || (UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0),
        SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.baseUsrSvtData, v7),
        (v8 = this->fields.baseUsrSvtData) == 0)
    || (baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustAtkIconLabel) == 0
    || (UIIconLabel__Set_48071660(
          (UIIconLabel_o *)baseUsrSvtData,
          45,
          v8->fields.adjustAtk * BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk,
          atkData[0],
          0,
          0,
          0,
          0,
          0,
          0,
          0),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.currentAdjustAtkMaxLabel) == 0) )
  {
LABEL_13:
    sub_2213CDC(baseUsrSvtData, method);
  }
  UILabel__set_text((UILabel_o *)baseUsrSvtData, (System_String_o *)StringLiteral_1/*""*/, 0);
  SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.baseUsrSvtData, v9);
}


void SvtCombineResultWindowComponent__setBefResultState(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *baseData,
        int32_t resultIdx,
        const MethodInfo *method)
{
  void *skipCollider; // x0
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x2
  struct UILabel_o *successInfoLabel; // x22
  System_String_o **v17; // x8
  System_String_o *v18; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x21
  struct UserServantEntity_o *v22; // x8
  UIExtrusionLabel_o *resLvLb; // x21
  UILabel_o *resMaxLvLb; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *v32; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x0
  struct UIWidget_o **p_resHpWidget; // x22
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  Il2CppObject *v48; // x0
  struct UIWidget_o **p_resAtkWidget; // x23
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  UILabel_o *currentExpValLb; // x21
  __int64 v57; // x2
  struct UserServantEntity_o *v58; // x8
  int32_t v59; // w21
  __int64 v60; // x20
  __int64 v61; // x22
  UserServantEntity_o *v62; // x8
  int32_t v63; // w8
  int32_t v64; // w9
  _DWORD *v65; // x20
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v68; // x4
  int32_t v69; // w22
  UnityEngine_Transform_o *v70; // x0
  const MethodInfo *v71; // x4
  UILabel_o *currentHpLb; // x21
  UILabel_o *resHpLb; // x21
  UILabel_o *currentAtkLb; // x21
  int v75; // w8
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v77; // x1
  struct UnityEngine_GameObject_o *lvInfo; // x1
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  System_Action_o *v85; // x20
  __int64 barExp; // [xsp+0h] [xbp-40h] BYREF
  __int64 lateExp; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A1B1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SvtCombineResultWindowComponent_EndOpen__);
    sub_2213A60(&StringLiteral_13007/*"SUPER_SUCCESS_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_8600/*"LARGE_SUCCESS_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1B1 = 1;
  }
  skipCollider = this->fields.skipCollider;
  barExp = 0;
  lateExp = 0;
  if ( !skipCollider )
    goto LABEL_54;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  skipCollider = this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 0;
  if ( !skipCollider )
    goto LABEL_54;
  this->fields.baseLvMax = UserServantEntity__getLevelMax((UserServantEntity_o *)skipCollider, 0);
  if ( (resultIdx & 0xFFFFFFFE) == 2 )
  {
    successInfoLabel = this->fields.successInfoLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, baseData, v15);
    v17 = (System_String_o **)&StringLiteral_8600/*"LARGE_SUCCESS_INFO_TITLE"*/;
    if ( resultIdx != 2 )
      v17 = (System_String_o **)&StringLiteral_13007/*"SUPER_SUCCESS_INFO_TITLE"*/;
    skipCollider = LocalizationManager__Get(*v17, 0);
    if ( successInfoLabel )
    {
      v18 = (System_String_o *)skipCollider;
      skipCollider = successInfoLabel;
      goto LABEL_14;
    }
LABEL_54:
    sub_2213CDC(skipCollider, baseData);
  }
  skipCollider = this->fields.successInfoLabel;
  if ( !skipCollider )
    goto LABEL_54;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_14:
  UILabel__set_text((UILabel_o *)skipCollider, v18, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_54;
  currentLvLb = this->fields.currentLvLb;
  skipCollider = System_Int32__ToString((int)baseUsrSvtData + 400, 0);
  if ( !currentLvLb )
    goto LABEL_54;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skipCollider, 0);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  skipCollider = System_Int32__ToString((int)this + 720, 0);
  if ( !currentMaxLvLb )
    goto LABEL_54;
  UILabel__set_text(currentMaxLvLb, (System_String_o *)skipCollider, 0);
  v22 = this->fields.baseUsrSvtData;
  if ( !v22 )
    goto LABEL_54;
  resLvLb = this->fields.resLvLb;
  skipCollider = System_Int32__ToString((int)v22 + 400, 0);
  if ( !resLvLb )
    goto LABEL_54;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skipCollider, 0);
  resMaxLvLb = this->fields.resMaxLvLb;
  skipCollider = System_Int32__ToString((int)this + 720, 0);
  if ( !resMaxLvLb )
    goto LABEL_54;
  UILabel__set_text(resMaxLvLb, (System_String_o *)skipCollider, 0);
  skipCollider = this->fields.resLvLb;
  if ( !skipCollider )
    goto LABEL_54;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)skipCollider,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resLvWidget,
    (int32_t)Component_object,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  skipCollider = this->fields.resMaxLvLb;
  if ( !skipCollider )
    goto LABEL_54;
  v32 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resMaxLvWidget,
    (int32_t)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  skipCollider = this->fields.resHpLb;
  if ( !skipCollider )
    goto LABEL_54;
  v40 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resHpWidget, (int32_t)v40, v42, v43, v44, v45, v46, v47);
  skipCollider = this->fields.resAtkLb;
  if ( !skipCollider )
    goto LABEL_54;
  v48 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v48;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resAtkWidget,
    (int32_t)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  skipCollider = this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_54;
  v89.fields.r = 1.0;
  v89.fields.g = 1.0;
  v89.fields.b = 1.0;
  v89.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v89, 0);
  skipCollider = *p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_54;
  v90.fields.r = 1.0;
  v90.fields.g = 1.0;
  v90.fields.b = 1.0;
  v90.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v90, 0);
  skipCollider = *p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_54;
  v91.fields.r = 1.0;
  v91.fields.g = 1.0;
  v91.fields.b = 1.0;
  v91.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v91, 0);
  skipCollider = *p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_54;
  v92.fields.r = 1.0;
  v92.fields.g = 1.0;
  v92.fields.b = 1.0;
  v92.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v92, 0);
  skipCollider = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_54;
  UserServantEntity__getExpInfo(
    (UserServantEntity_o *)skipCollider,
    (int32_t *)&lateExp + 1,
    (int32_t *)&lateExp,
    (float *)&barExp + 1,
    0);
  skipCollider = this->fields.currentExpBar;
  if ( !skipCollider )
    goto LABEL_54;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, *((float *)&barExp + 1), 0);
  currentExpValLb = this->fields.currentExpValLb;
  skipCollider = System_Int32__ToString_77138656((int32_t)&lateExp, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
  if ( !currentExpValLb )
    goto LABEL_54;
  UILabel__set_text(currentExpValLb, (System_String_o *)skipCollider, 0);
  skipCollider = this->fields.resCrExpBar;
  if ( !skipCollider )
    goto LABEL_54;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, *((float *)&barExp + 1), 0);
  skipCollider = this->fields.resExpBar;
  if ( !skipCollider )
    goto LABEL_54;
  skipCollider = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skipCollider, 0);
  if ( !skipCollider )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_54;
  skipCollider = (void *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)skipCollider, 0);
  v58 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_54;
  v59 = (int)skipCollider;
  v60 = *(_QWORD *)&v58->fields.limitCount.fields.currentCryptoKey;
  v61 = *(_QWORD *)&v58->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseData, v57);
  *(_QWORD *)&v88.fields.currentCryptoKey = v60;
  *(_QWORD *)&v88.fields.fakeValue = v61;
  skipCollider = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v88, 0);
  v62 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v62 )
    goto LABEL_54;
  skipCollider = UserServantEntity__GetOverwriteStatus(v62, 0, 0);
  if ( !skipCollider )
    goto LABEL_54;
  v63 = *((_DWORD *)skipCollider + 4);
  v64 = *((_DWORD *)skipCollider + 5);
  v65 = skipCollider;
  skipCollider = this->fields.currentLimitCntGrid;
  this->fields.baseHpVal = v63;
  this->fields.baseAtkVal = v64;
  if ( !skipCollider )
    goto LABEL_54;
  baseLimitCnt = this->fields.baseLimitCnt;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v59, baseLimitCnt, transform, v68);
  skipCollider = this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_54;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0);
  skipCollider = this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_54;
  v69 = this->fields.baseLimitCnt;
  v70 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v59, v69, v70, v71);
  skipCollider = this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_54;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0);
  currentHpLb = this->fields.currentHpLb;
  LODWORD(barExp) = v65[4];
  skipCollider = System_Int32__ToString_77138656((int32_t)&barExp, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  if ( !currentHpLb )
    goto LABEL_54;
  UILabel__set_text(currentHpLb, (System_String_o *)skipCollider, 0);
  resHpLb = this->fields.resHpLb;
  LODWORD(barExp) = v65[4];
  skipCollider = System_Int32__ToString_77138656((int32_t)&barExp, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  if ( !resHpLb )
    goto LABEL_54;
  UILabel__set_text(resHpLb, (System_String_o *)skipCollider, 0);
  currentAtkLb = this->fields.currentAtkLb;
  LODWORD(barExp) = v65[5];
  skipCollider = System_Int32__ToString_77138656((int32_t)&barExp, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  if ( !currentAtkLb )
    goto LABEL_54;
  UILabel__set_text(currentAtkLb, (System_String_o *)skipCollider, 0);
  v75 = v65[5];
  resAtkLb = this->fields.resAtkLb;
  LODWORD(barExp) = v75;
  skipCollider = System_Int32__ToString_77138656((int32_t)&barExp, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  if ( !resAtkLb )
    goto LABEL_54;
  UILabel__set_text(resAtkLb, (System_String_o *)skipCollider, 0);
  skipCollider = this->fields.msgInfo;
  if ( !skipCollider )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = this->fields.AdjustInfo;
  if ( !skipCollider )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  SvtCombineResultWindowComponent__setBaseAdjustInfo(this, v77);
  lvInfo = this->fields.lvInfo;
  this->fields.lvUpInfo = lvInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.lvUpInfo, (int32_t)lvInfo, v79, v80, v81, v82, v83, v84);
  skipCollider = this->fields.svtCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  skipCollider = this->fields.svtEqCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !skipCollider )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  v85 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v85, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v85, 0, 0, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UserServantEntity_o *baseUsrSvtData; // x8
  UIExtrusionLabel_o *currentSvtEqLvLb; // x22
  UILabel_o *currentSvtEqMaxLvLb; // x22
  struct UserServantEntity_o *v20; // x8
  UIExtrusionLabel_o *resSvtEqLvLb; // x22
  UILabel_o *resSvtEqMaxLvLb; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x0
  struct UIWidget_o **p_resMaxLvWidget; // x22
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *v38; // x0
  struct UIWidget_o **p_resHpWidget; // x23
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppObject *v46; // x0
  struct UIWidget_o **p_resAtkWidget; // x24
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  UILabel_o *currentSvtEqExpValLb; // x22
  __int64 v55; // x2
  struct UserServantEntity_o *v56; // x8
  int32_t v57; // w21
  __int64 v58; // x22
  __int64 v59; // x23
  struct UserServantEntity_o *v60; // x8
  int32_t v61; // w22
  int32_t hp; // w9
  int32_t atk; // w8
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v65; // x4
  int32_t baseLimitCnt; // w22
  UnityEngine_Transform_o *v67; // x0
  const MethodInfo *v68; // x4
  struct UserServantEntity_o *v69; // x8
  UILabel_o *currentSvtEqHpLb; // x21
  struct UserServantEntity_o *v71; // x8
  UILabel_o *resSvtEqHpLb; // x21
  struct UserServantEntity_o *v73; // x8
  UILabel_o *currentSvtEqAtkLb; // x21
  struct UserServantEntity_o *v75; // x8
  UILabel_o *resSvtEqAtkLb; // x21
  UILabel_o *normalExpLb; // x21
  UILabel_o *normalExpOverSpLb; // x21
  UIWidget_o *v79; // x22
  UIWidget_o *v80; // x23
  UnityEngine_GameObject_o *v81; // x21
  Il2CppObject *v82; // x24
  Il2CppObject *v83; // x0
  Il2CppObject *v84; // x21
  __int64 v85; // x1
  __int64 v86; // x2
  UILabel_o *successInfoLabel; // x25
  System_String_o **v88; // x8
  __int64 v89; // x1
  __int64 v90; // x2
  SvtCombineResultWindowComponent_c *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x2
  Il2CppObject *v95; // x0
  System_String_o *v96; // x20
  UnityEngine_Transform_o *v97; // x0
  UnityEngine_GameObject_o *v98; // x20
  UnityEngine_Transform_o *v99; // x21
  Il2CppObject *ComponentInChildren_object; // x21
  __int64 v101; // x1
  __int64 v102; // x2
  Il2CppObject *v103; // x20
  __int64 v104; // x2
  UILabel_o *addExpLb; // x20
  struct UnityEngine_GameObject_o *svtEqLvInfo; // x1
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  System_Action_o *v113; // x20
  int m_CachedPtr; // [xsp+0h] [xbp-60h] BYREF
  float barExp; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v117; // [xsp+18h] [xbp-48h] BYREF
  int32_t v118; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v122; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v123; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v124; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v125; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v117 = addExp;
  v118 = normalExp;
  if ( (byte_596A1B2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SvtCombineResultWindowComponent_EndOpen__);
    sub_2213A60(&SvtCombineResultWindowComponent_TypeInfo);
    sub_2213A60(&StringLiteral_13007/*"SUPER_SUCCESS_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_8600/*"LARGE_SUCCESS_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_4752/*"CombineSuccessEffect_{0:D2}"*/);
    byte_596A1B2 = 1;
  }
  skipCollider = this->fields.skipCollider;
  *(_QWORD *)lateExp = 0;
  barExp = 0.0;
  if ( !skipCollider )
    goto LABEL_97;
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0);
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.baseUsrSvtData = baseData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  skipCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  this->fields.isEqCombine = 1;
  if ( !skipCollider )
    goto LABEL_97;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)skipCollider, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  this->fields.baseLvMax = (int)skipCollider;
  if ( !baseUsrSvtData )
    goto LABEL_97;
  currentSvtEqLvLb = this->fields.currentSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)baseUsrSvtData + 400, 0);
  if ( !currentSvtEqLvLb )
    goto LABEL_97;
  UIExtrusionLabel__set_text(currentSvtEqLvLb, (System_String_o *)skipCollider, 0);
  currentSvtEqMaxLvLb = this->fields.currentSvtEqMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 720, 0);
  if ( !currentSvtEqMaxLvLb )
    goto LABEL_97;
  UILabel__set_text(currentSvtEqMaxLvLb, (System_String_o *)skipCollider, 0);
  v20 = this->fields.baseUsrSvtData;
  if ( !v20 )
    goto LABEL_97;
  resSvtEqLvLb = this->fields.resSvtEqLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)v20 + 400, 0);
  if ( !resSvtEqLvLb )
    goto LABEL_97;
  UIExtrusionLabel__set_text(resSvtEqLvLb, (System_String_o *)skipCollider, 0);
  resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int)this + 720, 0);
  if ( !resSvtEqMaxLvLb )
    goto LABEL_97;
  UILabel__set_text(resSvtEqMaxLvLb, (System_String_o *)skipCollider, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLvLb;
  if ( !skipCollider )
    goto LABEL_97;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)skipCollider,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.resLvWidget = (struct UIWidget_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resLvWidget,
    (int32_t)Component_object,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqMaxLvLb;
  if ( !skipCollider )
    goto LABEL_97;
  v30 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resMaxLvWidget = &this->fields.resMaxLvWidget;
  this->fields.resMaxLvWidget = (struct UIWidget_o *)v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resMaxLvWidget,
    (int32_t)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqHpLb;
  if ( !skipCollider )
    goto LABEL_97;
  v38 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resHpWidget = &this->fields.resHpWidget;
  this->fields.resHpWidget = (struct UIWidget_o *)v38;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resHpWidget, (int32_t)v38, v40, v41, v42, v43, v44, v45);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqAtkLb;
  if ( !skipCollider )
    goto LABEL_97;
  v46 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)skipCollider,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  p_resAtkWidget = &this->fields.resAtkWidget;
  this->fields.resAtkWidget = (struct UIWidget_o *)v46;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resAtkWidget,
    (int32_t)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLvWidget;
  if ( !skipCollider )
    goto LABEL_97;
  v121.fields.r = 1.0;
  v121.fields.g = 1.0;
  v121.fields.b = 1.0;
  v121.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v121, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_resMaxLvWidget;
  if ( !*p_resMaxLvWidget )
    goto LABEL_97;
  v122.fields.r = 1.0;
  v122.fields.g = 1.0;
  v122.fields.b = 1.0;
  v122.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v122, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_resHpWidget;
  if ( !*p_resHpWidget )
    goto LABEL_97;
  v123.fields.r = 1.0;
  v123.fields.g = 1.0;
  v123.fields.b = 1.0;
  v123.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v123, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_resAtkWidget;
  if ( !*p_resAtkWidget )
    goto LABEL_97;
  v124.fields.r = 1.0;
  v124.fields.g = 1.0;
  v124.fields.b = 1.0;
  v124.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)skipCollider, v124, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_97;
  UserServantEntity__getExpInfo((UserServantEntity_o *)skipCollider, &lateExp[1], lateExp, &barExp, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_97;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0);
  currentSvtEqExpValLb = this->fields.currentSvtEqExpValLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_77138656(
                                             (int32_t)lateExp,
                                             (System_String_o *)StringLiteral_422/*"#,0"*/,
                                             0);
  if ( !currentSvtEqExpValLb )
    goto LABEL_97;
  UILabel__set_text(currentSvtEqExpValLb, (System_String_o *)skipCollider, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqCrExpBar;
  if ( !skipCollider )
    goto LABEL_97;
  UIProgressBar__set_value((UIProgressBar_o *)skipCollider, barExp, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqExpBar;
  if ( !skipCollider )
    goto LABEL_97;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0);
  if ( !skipCollider )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = (UnityEngine_Collider_o *)*p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_97;
  skipCollider = (UnityEngine_Collider_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)skipCollider, 0);
  v56 = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_97;
  v57 = (int)skipCollider;
  v58 = *(_QWORD *)&v56->fields.limitCount.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v56->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseData, v55);
  *(_QWORD *)&v119.fields.currentCryptoKey = v58;
  *(_QWORD *)&v119.fields.fakeValue = v59;
  skipCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v119, 0);
  v60 = this->fields.baseUsrSvtData;
  this->fields.baseLimitCnt = (int)skipCollider;
  if ( !v60 )
    goto LABEL_97;
  v61 = (int)skipCollider;
  hp = v60->fields.hp;
  atk = v60->fields.atk;
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentSvtEqLimitCntGrid;
  this->fields.baseHpVal = hp;
  this->fields.baseAtkVal = atk;
  if ( !skipCollider )
    goto LABEL_97;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v57, v61, transform, v65);
  skipCollider = (UnityEngine_Collider_o *)this->fields.currentLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_97;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resSvtEqLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_97;
  baseLimitCnt = this->fields.baseLimitCnt;
  v67 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
  SvtCombineResultWindowComponent__setLimitCntInfo(this, v57, baseLimitCnt, v67, v68);
  skipCollider = (UnityEngine_Collider_o *)this->fields.resLimitCntGrid;
  if ( !skipCollider )
    goto LABEL_97;
  UIGrid__set_repositionNow((UIGrid_o *)skipCollider, 1, 0);
  v69 = this->fields.baseUsrSvtData;
  if ( !v69 )
    goto LABEL_97;
  currentSvtEqHpLb = this->fields.currentSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_77138656(
                                             (int)v69 + 412,
                                             (System_String_o *)StringLiteral_9617/*"N0"*/,
                                             0);
  if ( !currentSvtEqHpLb )
    goto LABEL_97;
  UILabel__set_text(currentSvtEqHpLb, (System_String_o *)skipCollider, 0);
  v71 = this->fields.baseUsrSvtData;
  if ( !v71 )
    goto LABEL_97;
  resSvtEqHpLb = this->fields.resSvtEqHpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_77138656(
                                             (int)v71 + 412,
                                             (System_String_o *)StringLiteral_9617/*"N0"*/,
                                             0);
  if ( !resSvtEqHpLb )
    goto LABEL_97;
  UILabel__set_text(resSvtEqHpLb, (System_String_o *)skipCollider, 0);
  v73 = this->fields.baseUsrSvtData;
  if ( !v73 )
    goto LABEL_97;
  currentSvtEqAtkLb = this->fields.currentSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_77138656(
                                             (int)v73 + 408,
                                             (System_String_o *)StringLiteral_9617/*"N0"*/,
                                             0);
  if ( !currentSvtEqAtkLb )
    goto LABEL_97;
  UILabel__set_text(currentSvtEqAtkLb, (System_String_o *)skipCollider, 0);
  v75 = this->fields.baseUsrSvtData;
  if ( !v75 )
    goto LABEL_97;
  resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_77138656(
                                             (int)v75 + 408,
                                             (System_String_o *)StringLiteral_9617/*"N0"*/,
                                             0);
  if ( !resSvtEqAtkLb )
    goto LABEL_97;
  UILabel__set_text(resSvtEqAtkLb, (System_String_o *)skipCollider, 0);
  normalExpLb = this->fields.normalExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_77138656(
                                             (int32_t)&v118,
                                             (System_String_o *)StringLiteral_9617/*"N0"*/,
                                             0);
  if ( !normalExpLb )
    goto LABEL_97;
  UILabel__set_text(normalExpLb, (System_String_o *)skipCollider, 0);
  normalExpOverSpLb = this->fields.normalExpOverSpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_77138656(
                                             (int32_t)&v118,
                                             (System_String_o *)StringLiteral_9617/*"N0"*/,
                                             0);
  if ( !normalExpOverSpLb )
    goto LABEL_97;
  UILabel__set_text(normalExpOverSpLb, (System_String_o *)skipCollider, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpLb;
  if ( !skipCollider )
    goto LABEL_97;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !skipCollider )
    goto LABEL_97;
  v125.fields.r = 1.0;
  v125.fields.g = 1.0;
  v125.fields.b = 1.0;
  v125.fields.a = 1.0;
  v79 = (UIWidget_o *)skipCollider;
  UIWidget__set_color((UIWidget_o *)skipCollider, v125, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_97;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)skipCollider,
                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_97;
  v80 = (UIWidget_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0);
  if ( !this->fields.normalExpOverSpLb )
    goto LABEL_97;
  v81 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.normalExpOverSpLb,
                                             0);
  if ( !skipCollider )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  if ( !v81 )
    goto LABEL_97;
  v82 = UnityEngine_GameObject__GetComponent_object_(
          v81,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  v83 = UnityEngine_GameObject__GetComponent_object_(
          v81,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (resInfo & 0xFFFFFFFE) != 2 )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.successInfoLabel;
    if ( !skipCollider )
      goto LABEL_97;
    UILabel__set_text((UILabel_o *)skipCollider, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_85;
  }
  v84 = v83;
  skipCollider = (UnityEngine_Collider_o *)this->fields.normalExpOverSpLb;
  if ( !skipCollider )
    goto LABEL_97;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skipCollider,
                                             0);
  if ( !skipCollider )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  successInfoLabel = this->fields.successInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v85, v86);
  v88 = (System_String_o **)&StringLiteral_8600/*"LARGE_SUCCESS_INFO_TITLE"*/;
  if ( resInfo != 2 )
    v88 = (System_String_o **)&StringLiteral_13007/*"SUPER_SUCCESS_INFO_TITLE"*/;
  skipCollider = (UnityEngine_Collider_o *)LocalizationManager__Get(*v88, 0);
  if ( !successInfoLabel )
    goto LABEL_97;
  UILabel__set_text(successInfoLabel, (System_String_o *)skipCollider, 0);
  v91 = SvtCombineResultWindowComponent_TypeInfo;
  if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v89, v90);
    v91 = SvtCombineResultWindowComponent_TypeInfo;
  }
  UIWidget__set_color(v79, v91->static_fields->COLOR_VAL, 0);
  if ( !v80 )
    goto LABEL_97;
  UIWidget__set_color(v80, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v92, v93);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v82, 0, 0);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v82 )
      goto LABEL_97;
    LODWORD(v82[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v82, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, baseData, v94);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v84, 0, 0);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !v84 )
      goto LABEL_97;
    LODWORD(v84[3].monitor) = 0x40000000;
    UITweener__PlayForward((UITweener_o *)v84, 0);
  }
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString((int32_t)&v118, 0);
  if ( !skipCollider )
    goto LABEL_97;
  m_CachedPtr = skipCollider->fields.m_CachedPtr;
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &m_CachedPtr);
  skipCollider = (UnityEngine_Collider_o *)System_String__Format((System_String_o *)StringLiteral_4752/*"CombineSuccessEffect_{0:D2}"*/, v95, 0);
  if ( !this->fields.dispNodeObj )
    goto LABEL_97;
  v96 = (System_String_o *)skipCollider;
  v97 = UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0);
  skipCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__GetEffect(v96, v97, 0);
  if ( !skipCollider
    || (v98 = (UnityEngine_GameObject_o *)skipCollider,
        skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)skipCollider,
                                                   0),
        !this->fields.dispNodeObj)
    || (v99 = (UnityEngine_Transform_o *)skipCollider,
        (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispNodeObj, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skipCollider, 0), !v99) )
  {
LABEL_97:
    sub_2213CDC(skipCollider, baseData);
  }
  UnityEngine_Transform__set_localPosition(v99, localPosition, 0);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v98,
                                 (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v103 = UnityEngine_GameObject__GetComponentInChildren_object_(
           v98,
           (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v101, v102);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)ComponentInChildren_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)skipCollider & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_97;
    SimpleAnimation__Play((SimpleAnimation_o *)ComponentInChildren_object, 0);
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, baseData, v104);
    skipCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v103, 0, 0);
    if ( ((unsigned __int8)skipCollider & 1) != 0 )
    {
      if ( !v103 )
        goto LABEL_97;
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v103, 0);
    }
  }
LABEL_85:
  addExpLb = this->fields.addExpLb;
  skipCollider = (UnityEngine_Collider_o *)System_Int32__ToString_77138656(
                                             (int32_t)&v117,
                                             (System_String_o *)StringLiteral_9617/*"N0"*/,
                                             0);
  if ( !addExpLb )
    goto LABEL_97;
  UILabel__set_text(addExpLb, (System_String_o *)skipCollider, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.msgInfo;
  if ( !skipCollider )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.AdjustInfo;
  if ( !skipCollider )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  svtEqLvInfo = this->fields.svtEqLvInfo;
  this->fields.lvUpInfo = svtEqLvInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lvUpInfo,
    (int32_t)svtEqLvInfo,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtEqCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  skipCollider = (UnityEngine_Collider_o *)this->fields.svtCombineInfoObject;
  if ( !skipCollider )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 0, 0);
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !skipCollider )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipCollider, 1, 0);
  v113 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v113, (Il2CppObject *)this, Method_SvtCombineResultWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v113, 0, 0, 0);
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
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x24
  UnityEngine_Transform_o *v13; // x25

  if ( (byte_596A1BF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
    byte_596A1BF = 1;
  }
  if ( maxLimitCnt >= 1 )
  {
    v9 = 0;
    do
    {
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.limitCntInfoObject, root, 0, 0);
      if ( !Object )
        goto LABEL_12;
      v12 = Object;
      Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0);
      v13 = (UnityEngine_Transform_o *)Object;
      if ( !byte_5969AE0 )
      {
        Object = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v13
        || (UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v12,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___)) == 0) )
      {
LABEL_12:
        sub_2213CDC(Object, v11);
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
  __int64 v6; // x2
  int32_t adjustAtk; // w20
  BalanceConfig_c *v8; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t StatusUpAdjustAtk; // w23
  int32_t v11; // w20
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v13; // x2
  BalanceConfig_c *v14; // x8
  int monitor; // w21
  int32_t v16; // w23
  __int64 v17; // x2
  BalanceConfig_c *v18; // x0
  int v19; // w24
  int32_t v20; // w9
  int v21; // w8
  int v22; // w10
  int v23; // w9
  bool v24; // cc
  bool v25; // w10
  bool v26; // cc
  bool v27; // w8
  int32_t addParamMaxAdjust2[2]; // [xsp+18h] [xbp-58h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+20h] [xbp-50h] BYREF
  __int64 maxAjustAtk; // [xsp+28h] [xbp-48h] BYREF
  int32_t atkData[2]; // [xsp+38h] [xbp-38h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A1B5 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1B5 = 1;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  *(_QWORD *)atkData = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  maxAjustAtk = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_40;
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       resAdjustAtkIconLabel,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustAtkIconLabel )
    goto LABEL_40;
  v32.fields.r = 1.0;
  v32.fields.g = 1.0;
  v32.fields.b = 1.0;
  v32.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustAtkIconLabel, v32, 0);
  if ( !targetData )
    goto LABEL_40;
  adjustAtk = targetData->fields.adjustAtk;
  v8 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, targetData, v6);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  *(_QWORD *)atkData = 0;
  StatusUpAdjustAtk = static_fields->StatusUpAdjustAtk;
  UserServantEntity__GetAdjustMaxData(targetData, &atkData[1], atkData, 0);
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_40;
  v11 = StatusUpAdjustAtk * adjustAtk;
  UIIconLabel__Set_48071660((UIIconLabel_o *)resAdjustAtkIconLabel, 45, v11, atkData[0], 0, 0, 0, 0, 0, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_40;
  if ( System_Int32__Equals_77138484((_DWORD)baseUsrSvtData + 416, targetData->fields.adjustAtk, 0) )
    goto LABEL_38;
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.baseUsrSvtData;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_40;
  v14 = BalanceConfig_TypeInfo;
  monitor = (int)resAdjustAtkIconLabel[17].monitor;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, targetData, v13);
    resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.baseUsrSvtData;
    if ( !resAdjustAtkIconLabel )
      goto LABEL_40;
    v14 = BalanceConfig_TypeInfo;
  }
  v16 = v14->static_fields->StatusUpAdjustAtk;
  if ( UserServantEntity__GetAdjustMaxDetail(
         (UserServantEntity_o *)resAdjustAtkIconLabel,
         (int32_t *)&maxAjustAtk + 1,
         (int32_t *)&maxAjustAtk,
         &secondMaxAdjustAtk[1],
         secondMaxAdjustAtk,
         &addParamMaxAdjust2[1],
         addParamMaxAdjust2,
         0) )
  {
    v18 = BalanceConfig_TypeInfo;
    v19 = maxAjustAtk;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, targetData, v17);
      v18 = BalanceConfig_TypeInfo;
    }
    v20 = v18->static_fields->StatusUpAdjustAtk;
    v21 = v16 * monitor;
    v22 = v20 * v19;
    v23 = secondMaxAdjustAtk[0] * v20;
    if ( v22 < 1 )
    {
      v25 = 0;
    }
    else
    {
      v24 = v21 >= v22 || v11 < v22;
      v25 = !v24;
    }
    this->fields.isAtkLimitUp = v25;
    if ( v23 < 1 )
    {
      v27 = 0;
    }
    else
    {
      v26 = v21 >= v23 || v11 < v23;
      v27 = !v26;
    }
    this->fields.isParam2Bounded = v27;
  }
  else
  {
    this->fields.isAtkLimitUp = 0;
    this->fields.isParam2Bounded = 0;
  }
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
  if ( !resAdjustAtkIconLabel )
LABEL_40:
    sub_2213CDC(resAdjustAtkIconLabel, targetData);
  UIIconLabel__SetCombineResTxt((UIIconLabel_o *)resAdjustAtkIconLabel, v11, atkData[0], v11 >= atkData[0], 0);
LABEL_38:
  resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkMaxLabel;
  if ( !resAdjustAtkIconLabel )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)resAdjustAtkIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void SvtCombineResultWindowComponent__setResAdjustHpInfo(
        SvtCombineResultWindowComponent_o *this,
        UserServantEntity_o *targetData,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resAdjustHpIconLabel; // x0
  __int64 v6; // x2
  int32_t adjustHp; // w20
  BalanceConfig_c *v8; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t StatusUpAdjustHp; // w23
  int32_t v11; // w20
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v13; // x2
  BalanceConfig_c *v14; // x8
  int monitor_high; // w21
  int32_t v16; // w23
  __int64 v17; // x2
  BalanceConfig_c *v18; // x0
  int v19; // w24
  int32_t v20; // w9
  int v21; // w8
  int v22; // w10
  int v23; // w9
  bool v24; // cc
  bool v25; // w10
  bool v26; // cc
  bool v27; // w8
  int32_t addParamMaxAdjust2[2]; // [xsp+18h] [xbp-58h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+20h] [xbp-50h] BYREF
  __int64 maxAjustAtk; // [xsp+28h] [xbp-48h] BYREF
  int32_t atkData[2]; // [xsp+38h] [xbp-38h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A1B4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1B4 = 1;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  *(_QWORD *)atkData = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  maxAjustAtk = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  if ( !resAdjustHpIconLabel )
    goto LABEL_40;
  resAdjustHpIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      resAdjustHpIconLabel,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !resAdjustHpIconLabel )
    goto LABEL_40;
  v32.fields.r = 1.0;
  v32.fields.g = 1.0;
  v32.fields.b = 1.0;
  v32.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)resAdjustHpIconLabel, v32, 0);
  if ( !targetData )
    goto LABEL_40;
  adjustHp = targetData->fields.adjustHp;
  v8 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, targetData, v6);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  *(_QWORD *)atkData = 0;
  StatusUpAdjustHp = static_fields->StatusUpAdjustHp;
  UserServantEntity__GetAdjustMaxData(targetData, &atkData[1], atkData, 0);
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_40;
  v11 = StatusUpAdjustHp * adjustHp;
  UIIconLabel__Set_48071660((UIIconLabel_o *)resAdjustHpIconLabel, 44, v11, atkData[1], 0, 0, 0, 0, 0, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_40;
  if ( System_Int32__Equals_77138484((_DWORD)baseUsrSvtData + 420, targetData->fields.adjustHp, 0) )
    goto LABEL_38;
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.baseUsrSvtData;
  if ( !resAdjustHpIconLabel )
    goto LABEL_40;
  v14 = BalanceConfig_TypeInfo;
  monitor_high = HIDWORD(resAdjustHpIconLabel[17].monitor);
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, targetData, v13);
    resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.baseUsrSvtData;
    if ( !resAdjustHpIconLabel )
      goto LABEL_40;
    v14 = BalanceConfig_TypeInfo;
  }
  v16 = v14->static_fields->StatusUpAdjustHp;
  if ( UserServantEntity__GetAdjustMaxDetail(
         (UserServantEntity_o *)resAdjustHpIconLabel,
         (int32_t *)&maxAjustAtk + 1,
         (int32_t *)&maxAjustAtk,
         &secondMaxAdjustAtk[1],
         secondMaxAdjustAtk,
         &addParamMaxAdjust2[1],
         addParamMaxAdjust2,
         0) )
  {
    v18 = BalanceConfig_TypeInfo;
    v19 = HIDWORD(maxAjustAtk);
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, targetData, v17);
      v18 = BalanceConfig_TypeInfo;
    }
    v20 = v18->static_fields->StatusUpAdjustHp;
    v21 = v16 * monitor_high;
    v22 = v20 * v19;
    v23 = secondMaxAdjustAtk[1] * v20;
    if ( v22 < 1 )
    {
      v25 = 0;
    }
    else
    {
      v24 = v21 >= v22 || v11 < v22;
      v25 = !v24;
    }
    this->fields.isHpLimitUp = v25;
    if ( v23 < 1 )
    {
      v27 = 0;
    }
    else
    {
      v26 = v21 >= v23 || v11 < v23;
      v27 = !v26;
    }
    this->fields.isParam1Bounded = v27;
  }
  else
  {
    this->fields.isHpLimitUp = 0;
    this->fields.isParam1Bounded = 0;
  }
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
  if ( !resAdjustHpIconLabel )
LABEL_40:
    sub_2213CDC(resAdjustHpIconLabel, targetData);
  UIIconLabel__SetCombineResTxt((UIIconLabel_o *)resAdjustHpIconLabel, v11, atkData[1], v11 >= atkData[1], 0);
LABEL_38:
  resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpMaxLabel;
  if ( !resAdjustHpIconLabel )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)resAdjustHpIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596A1B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A1B8 = 1;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  LevelMax = UserServantEntity__getLevelMax(resUsrSvtData, 0);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_26;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
    sub_2213CDC(resUsrSvtData, *(_QWORD *)&getExp);
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
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  Il2CppObject *Entity; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UserServantEntity_o *resUsrSvtData; // x8
  UserServantEntity_o *v18; // x8
  const MethodInfo *v19; // x4
  struct UserServantEntity_o *v20; // x9
  struct UserServantEntity_o *v21; // x8
  struct UserServantEntity_o *v22; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Object_array *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x22
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  Il2CppObject *v54; // x22
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  int32_t v68; // w1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  int32_t v75; // w1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  int32_t v82; // w1
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  int32_t v89; // w1
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  int32_t v96; // w1
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  int32_t v103; // w1
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  Il2CppObject *v110; // x22
  __int64 v111; // x1
  __int64 v112; // x2
  System_Collections_Hashtable_o *v113; // x0
  struct UserServantEntity_o *v114; // x8
  struct UserServantEntity_o *v115; // x9
  UILabel_o *resSvtEqHpLb; // x20
  __int64 v117; // x2
  UILabel_o *resSvtEqMaxLvLb; // x20
  __int64 v119; // x2
  UIWidget_o *resMaxLvWidget; // x20
  __int64 v121; // x1
  __int64 v122; // x2
  UILabel_o *infoLb; // x20
  System_String_o *v124; // x21
  Il2CppObject *v125; // x22
  Il2CppObject *v126; // x0
  int32_t v127; // w20
  UILabel_o *resHpLb; // x20
  const MethodInfo *v129; // x2
  UIWidget_o *resHpWidget; // x20
  UILabel_o *resSvtEqAtkLb; // x20
  __int64 v132; // x2
  UILabel_o *resAtkLb; // x20
  const MethodInfo *v134; // x2
  UIWidget_o *resAtkWidget; // x19
  __int64 v136; // x0
  int v137; // [xsp+Ch] [xbp-44h] BYREF
  int32_t resLvMax; // [xsp+18h] [xbp-38h] BYREF
  int32_t baseLvMax; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  if ( (byte_596A1B7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SvtCombineResultWindowComponent_TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_8977/*"MAX_LVUP_TXT"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_15808/*"UpdateValue"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_13609/*"StartUpdateValue"*/);
    sub_2213A60(&StringLiteral_23570/*"onstart"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&StringLiteral_6257/*"EndExpUpdateGauge"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_596A1B7 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_81;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
  *(_QWORD *)&v140.fields.currentCryptoKey = v8;
  *(_QWORD *)&v140.fields.fakeValue = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v140, 0);
  if ( !v7 )
    goto LABEL_81;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v7,
             Instance,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.baseSvtData = (struct ServantEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtData,
    (int32_t)Entity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_81;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(resUsrSvtData->fields.limitCount, 0);
  v18 = this->fields.resUsrSvtData;
  this->fields.resLimitCnt = Instance;
  if ( !v18 )
    goto LABEL_81;
  Instance = (__int64)UserServantEntity__GetOverwriteStatus(v18, 0, 0);
  if ( !Instance )
    goto LABEL_81;
  v20 = this->fields.resUsrSvtData;
  this->fields.resHpVal = *(_DWORD *)(Instance + 16);
  this->fields.resAtkVal = *(_DWORD *)(Instance + 20);
  if ( !v20 )
    goto LABEL_81;
  v21 = this->fields.baseUsrSvtData;
  if ( !v21 )
    goto LABEL_81;
  Instance = SvtCombineResultWindowComponent__setSvtExp(this, v4, v21->fields.exp, v21->fields.lv, v19);
  v22 = this->fields.baseUsrSvtData;
  if ( !v22 )
    goto LABEL_81;
  this->fields.PrevLevel = v22->fields.lv;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Instance = sub_2213B20(object___TypeInfo, 12);
  if ( !Instance )
    goto LABEL_81;
  v30 = (System_Object_array *)Instance;
  v31 = StringLiteral_20622/*"from"*/;
  if ( StringLiteral_20622/*"from"*/ )
  {
    v31 = sub_2213BB4(StringLiteral_20622/*"from"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( !LODWORD(v30->max_length) )
    goto LABEL_99;
  v33 = StringLiteral_20622/*"from"*/;
  v30->m_Items[0] = (Il2CppObject *)StringLiteral_20622/*"from"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v30->m_Items, v33, v24, v25, v26, v27, v28, v29);
  baseLvMax = 0;
  v31 = j_il2cpp_value_box_0(qword_5984378, &baseLvMax);
  v40 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_2213BB4(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( (v30->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_99;
  v30->m_Items[1] = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[1], (int32_t)v40, v34, v35, v36, v37, v38, v39);
  v31 = StringLiteral_25406/*"to"*/;
  if ( StringLiteral_25406/*"to"*/ )
  {
    v31 = sub_2213BB4(StringLiteral_25406/*"to"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( LODWORD(v30->max_length) <= 2 )
    goto LABEL_99;
  v47 = StringLiteral_25406/*"to"*/;
  v30->m_Items[2] = (Il2CppObject *)StringLiteral_25406/*"to"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[2], v47, v41, v42, v43, v44, v45, v46);
  resLvMax = 1065353216;
  v31 = j_il2cpp_value_box_0(qword_5984378, &resLvMax);
  v54 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_2213BB4(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( (v30->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_99;
  v30->m_Items[3] = v54;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[3], (int32_t)v54, v48, v49, v50, v51, v52, v53);
  v31 = StringLiteral_23570/*"onstart"*/;
  if ( StringLiteral_23570/*"onstart"*/ )
  {
    v31 = sub_2213BB4(StringLiteral_23570/*"onstart"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( LODWORD(v30->max_length) <= 4 )
    goto LABEL_99;
  v61 = StringLiteral_23570/*"onstart"*/;
  v30->m_Items[4] = (Il2CppObject *)StringLiteral_23570/*"onstart"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[4], v61, v55, v56, v57, v58, v59, v60);
  v31 = StringLiteral_13609/*"StartUpdateValue"*/;
  if ( StringLiteral_13609/*"StartUpdateValue"*/ )
  {
    v31 = sub_2213BB4(StringLiteral_13609/*"StartUpdateValue"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( LODWORD(v30->max_length) <= 5 )
    goto LABEL_99;
  v68 = StringLiteral_13609/*"StartUpdateValue"*/;
  v30->m_Items[5] = (Il2CppObject *)StringLiteral_13609/*"StartUpdateValue"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[5], v68, v62, v63, v64, v65, v66, v67);
  v31 = StringLiteral_23573/*"onupdate"*/;
  if ( StringLiteral_23573/*"onupdate"*/ )
  {
    v31 = sub_2213BB4(StringLiteral_23573/*"onupdate"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( LODWORD(v30->max_length) <= 6 )
    goto LABEL_99;
  v75 = StringLiteral_23573/*"onupdate"*/;
  v30->m_Items[6] = (Il2CppObject *)StringLiteral_23573/*"onupdate"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[6], v75, v69, v70, v71, v72, v73, v74);
  v31 = StringLiteral_15808/*"UpdateValue"*/;
  if ( StringLiteral_15808/*"UpdateValue"*/ )
  {
    v31 = sub_2213BB4(StringLiteral_15808/*"UpdateValue"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( (v30->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_99;
  v82 = StringLiteral_15808/*"UpdateValue"*/;
  v30->m_Items[7] = (Il2CppObject *)StringLiteral_15808/*"UpdateValue"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[7], v82, v76, v77, v78, v79, v80, v81);
  v31 = StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    v31 = sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( LODWORD(v30->max_length) <= 8 )
    goto LABEL_99;
  v89 = StringLiteral_23565/*"oncomplete"*/;
  v30->m_Items[8] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[8], v89, v83, v84, v85, v86, v87, v88);
  v31 = StringLiteral_6257/*"EndExpUpdateGauge"*/;
  if ( StringLiteral_6257/*"EndExpUpdateGauge"*/ )
  {
    v31 = sub_2213BB4(StringLiteral_6257/*"EndExpUpdateGauge"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( LODWORD(v30->max_length) <= 9 )
    goto LABEL_99;
  v96 = StringLiteral_6257/*"EndExpUpdateGauge"*/;
  v30->m_Items[9] = (Il2CppObject *)StringLiteral_6257/*"EndExpUpdateGauge"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[9], v96, v90, v91, v92, v93, v94, v95);
  v31 = StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v31 = sub_2213BB4(StringLiteral_25366/*"time"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_100;
  }
  if ( LODWORD(v30->max_length) <= 0xA )
    goto LABEL_99;
  v103 = StringLiteral_25366/*"time"*/;
  v30->m_Items[10] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[10], v103, v97, v98, v99, v100, v101, v102);
  v137 = 0x40000000;
  v31 = j_il2cpp_value_box_0(qword_5984378, &v137);
  v110 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_2213BB4(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
    {
LABEL_100:
      v136 = sub_2213D00(v31, v32);
      sub_2213BA0(v136, 0);
    }
  }
  if ( LODWORD(v30->max_length) <= 0xB )
LABEL_99:
    sub_2213CE4(v31);
  v30->m_Items[11] = v110;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->m_Items[11], (int32_t)v110, v104, v105, v106, v107, v108, v109);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v111, v112);
  v113 = iTween__Hash(v30, 0);
  iTween__ValueTo(gameObject, v113, 0);
  if ( this->fields.baseLimitCnt != this->fields.resLimitCnt )
  {
    if ( this->fields.isEqCombine )
      resSvtEqMaxLvLb = this->fields.resSvtEqMaxLvLb;
    else
      resSvtEqMaxLvLb = this->fields.resMaxLvLb;
    Instance = (__int64)System_Int32__ToString((int)this + 724, 0);
    if ( !resSvtEqMaxLvLb )
      goto LABEL_81;
    UILabel__set_text(resSvtEqMaxLvLb, (System_String_o *)Instance, 0);
    resMaxLvWidget = this->fields.resMaxLvWidget;
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v4, v119);
    if ( !resMaxLvWidget )
      goto LABEL_81;
    UIWidget__set_color(resMaxLvWidget, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
    infoLb = this->fields.infoLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121, v122);
    v124 = LocalizationManager__Get((System_String_o *)StringLiteral_8977/*"MAX_LVUP_TXT"*/, 0);
    baseLvMax = this->fields.baseLvMax;
    v125 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &baseLvMax);
    resLvMax = this->fields.resLvMax;
    v126 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &resLvMax);
    Instance = (__int64)System_String__Format_75697880(v124, v125, v126, 0);
    if ( !infoLb )
      goto LABEL_81;
    UILabel__set_text(infoLb, (System_String_o *)Instance, 0);
    Instance = (__int64)this->fields.infoLb;
    if ( !Instance )
      goto LABEL_81;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_81;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (__int64)this->fields.infoLb;
    if ( !Instance )
      goto LABEL_81;
    Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)Instance,
                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_81;
    UITweener__PlayForward((UITweener_o *)Instance, 0);
    Instance = (__int64)this->fields.resLimitCntList;
    if ( !Instance )
      goto LABEL_81;
    v127 = 0;
    while ( v127 < *(_DWORD *)(Instance + 24) )
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v127,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SetLimitCntInfoComponent___);
        if ( Instance )
        {
          SetLimitCntInfoComponent__setEnableOnImg(
            (SetLimitCntInfoComponent_o *)Instance,
            v127 < this->fields.resLimitCnt,
            0);
          Instance = (__int64)this->fields.resLimitCntList;
          ++v127;
          if ( Instance )
            continue;
        }
      }
      goto LABEL_81;
    }
  }
  v114 = this->fields.baseUsrSvtData;
  if ( !v114 )
    goto LABEL_81;
  v115 = this->fields.resUsrSvtData;
  if ( !v115 )
    goto LABEL_81;
  if ( v114->fields.lv != v115->fields.lv )
    return;
  if ( this->fields.baseHpVal != this->fields.resHpVal )
  {
    if ( this->fields.isEqCombine )
    {
      resSvtEqHpLb = this->fields.resSvtEqHpLb;
      Instance = (__int64)System_Int32__ToString_77138656((int)this + 732, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
      if ( !resSvtEqHpLb )
        goto LABEL_81;
      UILabel__set_text(resSvtEqHpLb, (System_String_o *)Instance, 0);
    }
    else
    {
      resHpLb = this->fields.resHpLb;
      Instance = (__int64)System_Int32__ToString_77138656((int)this + 732, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
      if ( !resHpLb )
        goto LABEL_81;
      UILabel__set_text(resHpLb, (System_String_o *)Instance, 0);
      SvtCombineResultWindowComponent__setResAdjustHpInfo(this, this->fields.resUsrSvtData, v129);
    }
    resHpWidget = this->fields.resHpWidget;
    Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
    if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v4, v117);
    if ( !resHpWidget )
      goto LABEL_81;
    UIWidget__set_color(resHpWidget, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
  }
  if ( this->fields.baseAtkVal == this->fields.resAtkVal )
    return;
  if ( this->fields.isEqCombine )
  {
    resSvtEqAtkLb = this->fields.resSvtEqAtkLb;
    Instance = (__int64)System_Int32__ToString_77138656((int)this + 740, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
    if ( !resSvtEqAtkLb )
      goto LABEL_81;
    UILabel__set_text(resSvtEqAtkLb, (System_String_o *)Instance, 0);
  }
  else
  {
    resAtkLb = this->fields.resAtkLb;
    Instance = (__int64)System_Int32__ToString_77138656((int)this + 740, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
    if ( !resAtkLb )
      goto LABEL_81;
    UILabel__set_text(resAtkLb, (System_String_o *)Instance, 0);
    SvtCombineResultWindowComponent__setResAdjustAtkInfo(this, this->fields.resUsrSvtData, v134);
  }
  resAtkWidget = this->fields.resAtkWidget;
  Instance = (__int64)SvtCombineResultWindowComponent_TypeInfo;
  if ( !*(&SvtCombineResultWindowComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtCombineResultWindowComponent_TypeInfo, v4, v132);
  if ( !resAtkWidget )
LABEL_81:
    sub_2213CDC(Instance, v4);
  UIWidget__set_color(resAtkWidget, SvtCombineResultWindowComponent_TypeInfo->static_fields->COLOR_VAL, 0);
}


void SvtCombineResultWindowComponent__skipExp(
        SvtCombineResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v8; // x1

  if ( (byte_596A1BC & 1) == 0 )
  {
    sub_2213A60(&iTween_TypeInfo);
    byte_596A1BC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v5, v6);
  iTween__Stop_75402912(gameObject, 0);
  SvtCombineResultWindowComponent__UpdateValue(this, 1.0, v8);
  ActionExtensions__Call(callback, 0);
}


void SvtCombineResultWindowComponent___c__DisplayClass132_0___ctor(
        SvtCombineResultWindowComponent___c__DisplayClass132_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SvtCombineResultWindowComponent___c__DisplayClass132_0___EndOpen_b__0(
        SvtCombineResultWindowComponent___c__DisplayClass132_0_o *this,
        const MethodInfo *method)
{
  struct SvtCombineResultWindowComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  *(_DWORD *)&_4__this->fields.isAtkLimitUp = 0;
  ActionExtensions__Call(this->fields.callback, 0);
}


void SvtCombineResultWindowComponent___c__DisplayClass132_0___EndOpen_b__1(
        SvtCombineResultWindowComponent___c__DisplayClass132_0_o *this,
        const MethodInfo *method)
{
  SvtCombineResultWindowComponent___c__DisplayClass132_0_o *v2; // x19
  Il2CppObject *Instance; // x20
  SvtCombineResultWindowComponent___c__DisplayClass132_0_o *v4; // x21
  System_Action_o *_9__3; // x23
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Action_o *endTutorial; // x8

  v2 = this;
  if ( (byte_596A1C8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (SvtCombineResultWindowComponent___c__DisplayClass132_0_o *)sub_2213A60(&Method_SvtCombineResultWindowComponent___c__DisplayClass132_0__EndOpen_b__3__);
    byte_596A1C8 = 1;
  }
  if ( v2->fields.addTutorialImageId > 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (SvtCombineResultWindowComponent___c__DisplayClass132_0_o *)sub_2213B20(int___TypeInfo, 1);
    if ( this )
    {
      v4 = this;
      if ( !LODWORD(this->fields.callback) )
        sub_2213CE4(this);
      _9__3 = v2->fields.__9__3;
      this->fields.addTutorialImageId = v2->fields.addTutorialImageId;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v2,
          Method_SvtCombineResultWindowComponent___c__DisplayClass132_0__EndOpen_b__3__,
          0);
        v2->fields.__9__3 = _9__3;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v6, v7, v8, v9, v10, v11);
      }
      if ( Instance )
      {
        CommonUI__OpenImageDialogAssets((CommonUI_o *)Instance, (System_Int32_array *)v4, 2, _9__3, 0);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(this, method);
  }
  endTutorial = v2->fields.endTutorial;
  if ( !endTutorial )
    goto LABEL_12;
  ((void (__fastcall *)(intptr_t, intptr_t))endTutorial->fields.invoke_impl)(
    endTutorial->fields.method_code,
    endTutorial->fields.method);
}


void SvtCombineResultWindowComponent___c__DisplayClass132_0___EndOpen_b__2(
        SvtCombineResultWindowComponent___c__DisplayClass132_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *openAdd; // x8

  openAdd = this->fields.openAdd;
  if ( !openAdd )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))openAdd->fields.invoke_impl)(
    openAdd->fields.method_code,
    openAdd->fields.method);
}


void SvtCombineResultWindowComponent___c__DisplayClass132_0___EndOpen_b__3(
        SvtCombineResultWindowComponent___c__DisplayClass132_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endTutorial; // x8

  endTutorial = this->fields.endTutorial;
  if ( !endTutorial )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))endTutorial->fields.invoke_impl)(
    endTutorial->fields.method_code,
    endTutorial->fields.method);
}