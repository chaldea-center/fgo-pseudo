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


void __fastcall EventInfoReleaseEventPointControl__PlayChangeNextPointAnim(
        EventInfoReleaseEventPointControl_o *this,
        bool isFadeIn,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pointLabel; // x21
  __int64 v6; // x1
  UILabel_o *animation; // x0
  System_String_o **v8; // x8

  if ( (byte_438C26D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_21501/*"next_release_title_fade_in"*/);
    sub_B775C4(&StringLiteral_21502/*"next_release_title_fade_out"*/);
    byte_438C26D = 1;
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
    sub_B7769C(animation, v6);
  v8 = (System_String_o **)&StringLiteral_21501/*"next_release_title_fade_in"*/;
  if ( !isFadeIn )
    v8 = (System_String_o **)&StringLiteral_21502/*"next_release_title_fade_out"*/;
  SimpleAnimation__Play_16815192((SimpleAnimation_o *)animation, *v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoReleaseEventPointControl__PlayCheckInAnim(
        EventInfoReleaseEventPointControl_o *this,
        bool isFreeQuestCheck,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questClearCheck; // x0
  SimpleAnimation_o *Component_srcLineSprite; // x20
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *pointClearCheck; // x20

  if ( (byte_438C26E & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17759/*"check_in"*/);
    byte_438C26E = 1;
  }
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_24;
  Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   questClearCheck,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
              v7);
            if ( !Component_srcLineSprite )
              goto LABEL_24;
LABEL_23:
            SimpleAnimation__Play_16815192(Component_srcLineSprite, (System_String_o *)StringLiteral_17759/*"check_in"*/, 0LL);
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
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          Component_srcLineSprite = (SimpleAnimation_o *)questClearCheck;
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_B7769C(questClearCheck, isFreeQuestCheck);
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
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  int max_length; // w8
  System_String_array *v7; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  SePlayer_o *v10; // x0
  SePlayer_o *v11; // x20
  __int64 v12; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438C26F & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C26F = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v4 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !v4 )
      goto LABEL_22;
    v5 = v4;
    if ( !v4->max_length )
      goto LABEL_23;
    LOWORD(v4->m_Items[0]) = 58;
    if ( !name )
      goto LABEL_22;
    v4 = System_String__Split(name, (System_Char_array *)v4, 0LL);
    if ( !v4 )
      goto LABEL_22;
    max_length = v4->max_length;
    v7 = v4;
    if ( !max_length )
    {
LABEL_23:
      v12 = sub_B776C8(v4);
      sub_B77668(v12, 0LL);
    }
    v8 = v4->m_Items[0];
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
    v9 = v4->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v10 = SoundManager__playSe_23512032(v8, v9, 0LL);
    result = 0.0;
    if ( (int)v7->max_length >= 3 )
    {
      v11 = v10;
      v4 = (System_String_array *)System_Single__TryParse(v7->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        if ( v11 )
        {
          SePlayer__set_Pitch(v11, result, 0LL);
          return;
        }
LABEL_22:
        sub_B7769C(v4, v5);
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
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall EventInfoReleaseEventPointControl__SetPointLabel(
        EventInfoReleaseEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pointLabel; // x21
  UILabel_o *v6; // x20
  BalanceConfig_c *v7; // x0
  int64_t UserPointEventMax; // x21
  int64_t v9; // x19
  System_String_o *NumberFormatLong; // x0
  __int64 v11; // x1

  if ( (byte_438C26C & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C26C = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0LL, 0LL) )
  {
    v6 = this->fields.pointLabel;
    v7 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v7->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Min_45851612(point, UserPointEventMax, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(v9, 0LL);
    if ( !v6 )
      sub_B7769C(NumberFormatLong, v11);
    UILabel__set_text(v6, NumberFormatLong, 0LL);
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
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  UnityEngine_GameObject_o *questClearCheck; // x0
  _BOOL8 IsFreeQuestClear; // x1
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x21
  srcLineSprite_o *Component_srcLineSprite; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x8

  if ( (byte_438C26B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C26B = 1;
  }
  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_B77560(
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
                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !this->fields.pointClearCheck )
    goto LABEL_26;
  v14 = questClearCheck;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              this->fields.pointClearCheck,
                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
      ? (IsFreeQuestClear = 0LL)
      : (IsFreeQuestClear = v17->fields.IsFreeQuestClear),
        (questClearCheck = this->fields.pointClearCheck) == 0LL) )
  {
LABEL_26:
    sub_B7769C(questClearCheck, IsFreeQuestClear);
  }
  UnityEngine_GameObject__SetActive(questClearCheck, IsFreeQuestClear, 0LL);
}