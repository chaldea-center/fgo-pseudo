void __fastcall EventInfoReleaseEventPointControl___ctor(
        EventInfoReleaseEventPointControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoReleaseEventPointControl__Awake(
        EventInfoReleaseEventPointControl_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoReleaseEventPointControl__PlayChangeNextPointAnim(
        EventInfoReleaseEventPointControl_o *this,
        bool isFadeIn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *pointLabel; // x21
  UILabel_o *animation; // x0
  System_String_o **v9; // x8

  if ( (byte_421561B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isFadeIn);
    sub_B0D8A4(&StringLiteral_21134/*"next_release_title_fade_in"*/, v5);
    sub_B0D8A4(&StringLiteral_21135/*"next_release_title_fade_out"*/, v6);
    byte_421561B = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    animation = this->fields.pointLabel;
    if ( !animation )
      goto LABEL_13;
    UILabel__UpdateNGUIText(animation, 0LL);
  }
  animation = (UILabel_o *)this->fields.animation;
  if ( !animation )
LABEL_13:
    sub_B0D97C(animation);
  v9 = (System_String_o **)&StringLiteral_21134/*"next_release_title_fade_in"*/;
  if ( !isFadeIn )
    v9 = (System_String_o **)&StringLiteral_21135/*"next_release_title_fade_out"*/;
  SimpleAnimation__Play_50482404((SimpleAnimation_o *)animation, *v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoReleaseEventPointControl__PlayCheckInAnim(
        EventInfoReleaseEventPointControl_o *this,
        bool isFreeQuestCheck,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *questClearCheck; // x0
  SimpleAnimation_o *Component_srcLineSprite; // x20
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *pointClearCheck; // x20

  if ( (byte_421561C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, isFreeQuestCheck);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_17466/*"check_in"*/, v6);
    byte_421561C = 1;
  }
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_24;
  Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   questClearCheck,
                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( isFreeQuestCheck )
    {
      questClearCheck = this->fields.questClearCheck;
      if ( questClearCheck )
      {
        UnityEngine_GameObject__SetActive(questClearCheck, 1, 0LL);
        questClearCheck = this->fields.pointClearCheck;
        if ( questClearCheck )
        {
          questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(questClearCheck, 0LL);
          if ( ((unsigned __int8)questClearCheck & 1) == 0 )
          {
            EventInfoReleaseEventPointControl__PlaySe(
              (EventInfoReleaseEventPointControl_o *)questClearCheck,
              this->fields.releaseScenarioCheckSE,
              v9);
            if ( !Component_srcLineSprite )
              goto LABEL_24;
LABEL_23:
            SimpleAnimation__Play_50482404(Component_srcLineSprite, (System_String_o *)StringLiteral_17466/*"check_in"*/, 0LL);
            return;
          }
LABEL_22:
          if ( !Component_srcLineSprite )
            goto LABEL_24;
          goto LABEL_23;
        }
      }
    }
    else
    {
      pointClearCheck = (UnityEngine_Object_o *)this->fields.pointClearCheck;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(pointClearCheck, 0LL, 0LL) )
        return;
      questClearCheck = this->fields.pointClearCheck;
      if ( questClearCheck )
      {
        UnityEngine_GameObject__SetActive(questClearCheck, 1, 0LL);
        questClearCheck = this->fields.pointClearCheck;
        if ( questClearCheck )
        {
          questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          questClearCheck,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          Component_srcLineSprite = (SimpleAnimation_o *)questClearCheck;
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_B0D97C(questClearCheck);
  }
}


void __fastcall EventInfoReleaseEventPointControl__PlayCheckSE(
        EventInfoReleaseEventPointControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoReleaseEventPointControl__PlaySe(this, this->fields.releaseScenarioCheckSE, v2);
}


void __fastcall EventInfoReleaseEventPointControl__PlaySe(
        EventInfoReleaseEventPointControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x0
  int max_length; // w8
  System_String_array *v7; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  SePlayer_o *v10; // x0
  SePlayer_o *v11; // x20
  __int64 v12; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421561D & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, name);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_421561D = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v5 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v5 )
      goto LABEL_22;
    if ( !v5->max_length )
      goto LABEL_23;
    LOWORD(v5->m_Items[0]) = 58;
    if ( !name )
      goto LABEL_22;
    v5 = System_String__Split(name, (System_Char_array *)v5, 0LL);
    if ( !v5 )
      goto LABEL_22;
    max_length = v5->max_length;
    v7 = v5;
    if ( !max_length )
    {
LABEL_23:
      v12 = sub_B0D9A8(v5);
      sub_B0D948(v12, 0LL);
    }
    v8 = v5->m_Items[0];
    if ( max_length < 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v8, 0LL);
      return;
    }
    v9 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v10 = SoundManager__playSe_24977004(v8, v9, 0LL);
    result = 0.0;
    if ( (int)v7->max_length >= 3 )
    {
      v11 = v10;
      v5 = (System_String_array *)System_Single__TryParse(v7->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( v11 )
        {
          SePlayer__set_Pitch(v11, result, 0LL);
          return;
        }
LABEL_22:
        sub_B0D97C(v5);
      }
    }
  }
}


void __fastcall EventInfoReleaseEventPointControl__SetActive(
        EventInfoReleaseEventPointControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall EventInfoReleaseEventPointControl__SetPointLabel(
        EventInfoReleaseEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *pointLabel; // x21
  UILabel_o *v9; // x20
  BalanceConfig_c *v10; // x0
  int64_t UserPointEventMax; // x21
  int64_t v12; // x19
  System_String_o *NumberFormatLong; // x0

  if ( (byte_421561A & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, point);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&System_Math_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421561A = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0LL, 0LL) )
  {
    v9 = this->fields.pointLabel;
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v10->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = System_Math__Min_44560000(point, UserPointEventMax, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(v12, 0LL);
    if ( !v9 )
      sub_B0D97C(NumberFormatLong);
    UILabel__set_text(v9, NumberFormatLong, 0LL);
  }
}


void __fastcall EventInfoReleaseEventPointControl__Setup(
        EventInfoReleaseEventPointControl_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  UnityEngine_GameObject_o *questClearCheck; // x0
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x21
  srcLineSprite_o *Component_srcLineSprite; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x8
  bool IsFreeQuestClear; // w1

  if ( (byte_4215619 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, progressData_);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_4215619 = 1;
  }
  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    (System_Int32_array **)progressData_,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !progressData_ )
    goto LABEL_26;
  EventInfoReleaseEventPointControl__SetPointLabel(this, progressData_->fields.NextPoint, v13);
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_26;
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  questClearCheck,
                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !this->fields.pointClearCheck )
    goto LABEL_26;
  v14 = questClearCheck;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              this->fields.pointClearCheck,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)questClearCheck & 1) != 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_srcLineSprite,
                                                    0LL,
                                                    0LL);
    if ( ((unsigned __int8)questClearCheck & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_26;
      LOBYTE(v14[4].klass) = 0;
      if ( !Component_srcLineSprite )
        goto LABEL_26;
      LOBYTE(Component_srcLineSprite->fields.mcTo.fields.y) = 0;
    }
  }
  if ( (progressData = this->fields.progressData) == 0LL
    || (questClearCheck = this->fields.questClearCheck) == 0LL
    || (UnityEngine_GameObject__SetActive(questClearCheck, progressData->fields.IsFreeQuestClear, 0LL),
        (v17 = *p_progressData) == 0LL)
    || (v17->fields.OldTotalPoint < v17->fields.NextPoint || !v17->fields.IsReleaseScenarioAnimEnd
      ? (IsFreeQuestClear = 0)
      : (IsFreeQuestClear = v17->fields.IsFreeQuestClear),
        (questClearCheck = this->fields.pointClearCheck) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(questClearCheck);
  }
  UnityEngine_GameObject__SetActive(questClearCheck, IsFreeQuestClear, 0LL);
}