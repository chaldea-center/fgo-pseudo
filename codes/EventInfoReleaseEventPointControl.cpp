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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *pointLabel; // x21
  __int64 v13; // x1
  UILabel_o *animation; // x0
  System_String_o **v15; // x8

  if ( (byte_42E9537 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isFadeIn, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21342/*"next_release_title_fade_in"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21343/*"next_release_title_fade_out"*/, v9, v10, v11);
    byte_42E9537 = 1;
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
    sub_B5D69C(animation, v13);
  v15 = (System_String_o **)&StringLiteral_21342/*"next_release_title_fade_in"*/;
  if ( !isFadeIn )
    v15 = (System_String_o **)&StringLiteral_21343/*"next_release_title_fade_out"*/;
  SimpleAnimation__Play_16676044((SimpleAnimation_o *)animation, *v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoReleaseEventPointControl__PlayCheckInAnim(
        EventInfoReleaseEventPointControl_o *this,
        bool isFreeQuestCheck,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *questClearCheck; // x0
  SimpleAnimation_o *Component_srcLineSprite; // x20
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *pointClearCheck; // x20

  if ( (byte_42E9538 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, isFreeQuestCheck, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17629/*"check_in"*/, v9, v10, v11);
    byte_42E9538 = 1;
  }
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_24;
  Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   questClearCheck,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
              v14);
            if ( !Component_srcLineSprite )
              goto LABEL_24;
LABEL_23:
            SimpleAnimation__Play_16676044(Component_srcLineSprite, (System_String_o *)StringLiteral_17629/*"check_in"*/, 0LL);
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          Component_srcLineSprite = (SimpleAnimation_o *)questClearCheck;
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_B5D69C(questClearCheck, isFreeQuestCheck);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x0
  System_String_array *v9; // x1
  int max_length; // w8
  System_String_array *v11; // x19
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  SePlayer_o *v14; // x0
  SePlayer_o *v15; // x20
  __int64 v16; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9539 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E9539 = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v8 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v8 )
      goto LABEL_22;
    v9 = v8;
    if ( !v8->max_length )
      goto LABEL_23;
    LOWORD(v8->m_Items[0]) = 58;
    if ( !name )
      goto LABEL_22;
    v8 = System_String__Split(name, (System_Char_array *)v8, 0LL);
    if ( !v8 )
      goto LABEL_22;
    max_length = v8->max_length;
    v11 = v8;
    if ( !max_length )
    {
LABEL_23:
      v16 = sub_B5D6C8(v8);
      sub_B5D668(v16, 0LL);
    }
    v12 = v8->m_Items[0];
    if ( max_length < 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v12, 0LL);
      return;
    }
    v13 = v8->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v14 = SoundManager__playSe_23390804(v12, v13, 0LL);
    result = 0.0;
    if ( (int)v11->max_length >= 3 )
    {
      v15 = v14;
      v8 = (System_String_array *)System_Single__TryParse(v11->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( v15 )
        {
          SePlayer__set_Pitch(v15, result, 0LL);
          return;
        }
LABEL_22:
        sub_B5D69C(v8, v9);
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
    sub_B5D69C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall EventInfoReleaseEventPointControl__SetPointLabel(
        EventInfoReleaseEventPointControl_o *this,
        int64_t point,
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
  UnityEngine_Object_o *pointLabel; // x21
  UILabel_o *v16; // x20
  BalanceConfig_c *v17; // x0
  int64_t UserPointEventMax; // x21
  int64_t v19; // x19
  System_String_o *NumberFormatLong; // x0
  __int64 v21; // x1

  if ( (byte_42E9536 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, point, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Math_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E9536 = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0LL, 0LL) )
  {
    v16 = this->fields.pointLabel;
    v17 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v17->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v19 = System_Math__Min_45149944(point, UserPointEventMax, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(v19, 0LL);
    if ( !v16 )
      sub_B5D69C(NumberFormatLong, v21);
    UILabel__set_text(v16, NumberFormatLong, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  UnityEngine_GameObject_o *questClearCheck; // x0
  _BOOL8 IsFreeQuestClear; // x1
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *v17; // x21
  srcLineSprite_o *Component_srcLineSprite; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v20; // x8

  if ( (byte_42E9535 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___,
      (_DWORD)progressData_,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    byte_42E9535 = 1;
  }
  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_B5D560(
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
  EventInfoReleaseEventPointControl__SetPointLabel(this, progressData_->fields.NextPoint, v16);
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_26;
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  questClearCheck,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !this->fields.pointClearCheck )
    goto LABEL_26;
  v17 = questClearCheck;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              this->fields.pointClearCheck,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
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
      if ( !v17 )
        goto LABEL_26;
      LOBYTE(v17[4].klass) = 0;
      if ( !Component_srcLineSprite )
        goto LABEL_26;
      LOBYTE(Component_srcLineSprite->fields.mcTo.fields.y) = 0;
    }
  }
  if ( (progressData = this->fields.progressData) == 0LL
    || (questClearCheck = this->fields.questClearCheck) == 0LL
    || (UnityEngine_GameObject__SetActive(questClearCheck, progressData->fields.IsFreeQuestClear, 0LL),
        (v20 = *p_progressData) == 0LL)
    || (v20->fields.OldTotalPoint < v20->fields.NextPoint || !v20->fields.IsReleaseScenarioAnimEnd
      ? (IsFreeQuestClear = 0LL)
      : (IsFreeQuestClear = v20->fields.IsFreeQuestClear),
        (questClearCheck = this->fields.pointClearCheck) == 0LL) )
  {
LABEL_26:
    sub_B5D69C(questClearCheck, IsFreeQuestClear);
  }
  UnityEngine_GameObject__SetActive(questClearCheck, IsFreeQuestClear, 0LL);
}