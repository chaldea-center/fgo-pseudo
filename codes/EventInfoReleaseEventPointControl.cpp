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

  if ( (byte_4A5C7E4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_22052/*"next_release_title_fade_in"*/);
    sub_1B885B0(&StringLiteral_22053/*"next_release_title_fade_out"*/);
    byte_4A5C7E4 = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    animation = this->fields.pointLabel;
    if ( !animation )
      goto LABEL_12;
    UILabel__UpdateNGUIText(animation, 0LL);
  }
  animation = (UILabel_o *)this->fields.animation;
  if ( !animation )
LABEL_12:
    sub_1B8880C(animation, v6);
  v8 = (System_String_o **)&StringLiteral_22052/*"next_release_title_fade_in"*/;
  if ( !isFadeIn )
    v8 = (System_String_o **)&StringLiteral_22053/*"next_release_title_fade_out"*/;
  SimpleAnimation__Play_63844704((SimpleAnimation_o *)animation, *v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoReleaseEventPointControl__PlayCheckInAnim(
        EventInfoReleaseEventPointControl_o *this,
        bool isFreeQuestCheck,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questClearCheck; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *pointClearCheck; // x20

  if ( (byte_4A5C7E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17952/*"check_in"*/);
    byte_4A5C7E5 = 1;
  }
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       questClearCheck,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( isFreeQuestCheck )
    {
      questClearCheck = this->fields.questClearCheck;
      if ( !questClearCheck )
        goto LABEL_21;
      UnityEngine_GameObject__SetActive(questClearCheck, 1, 0LL);
      questClearCheck = this->fields.pointClearCheck;
      if ( !questClearCheck )
        goto LABEL_21;
      questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(questClearCheck, 0LL);
      if ( ((unsigned __int8)questClearCheck & 1) == 0 )
        EventInfoReleaseEventPointControl__PlaySe(
          (EventInfoReleaseEventPointControl_o *)questClearCheck,
          this->fields.releaseScenarioCheckSE,
          v7);
    }
    else
    {
      pointClearCheck = (UnityEngine_Object_o *)this->fields.pointClearCheck;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(pointClearCheck, 0LL, 0LL) )
        return;
      questClearCheck = this->fields.pointClearCheck;
      if ( !questClearCheck
        || (UnityEngine_GameObject__SetActive(questClearCheck, 1, 0LL),
            (questClearCheck = this->fields.pointClearCheck) == 0LL) )
      {
LABEL_21:
        sub_1B8880C(questClearCheck, isFreeQuestCheck);
      }
      questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      questClearCheck,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      Component_object = (Il2CppObject *)questClearCheck;
    }
    if ( Component_object )
    {
      SimpleAnimation__Play_63844704((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_17952/*"check_in"*/, 0LL);
      return;
    }
    goto LABEL_21;
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
  System_String_array *IsNullOrEmpty; // x0
  __int64 v5; // x1
  int max_length; // w8
  System_String_array *v7; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  SePlayer_o *v10; // x0
  SePlayer_o *v11; // x20
  float result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5C7E6 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5C7E6 = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name )
      goto LABEL_18;
    IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_18;
    max_length = IsNullOrEmpty->max_length;
    v7 = IsNullOrEmpty;
    if ( !max_length )
      sub_1B88814(IsNullOrEmpty, v5);
    v8 = IsNullOrEmpty->m_Items[0];
    if ( max_length < 2 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playSe(v8, 0LL);
      return;
    }
    v9 = IsNullOrEmpty->m_Items[1];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v10 = SoundManager__playSe_38700752(v8, v9, 0LL);
    result = 0.0;
    if ( (int)v7->max_length >= 3 )
    {
      v11 = v10;
      IsNullOrEmpty = (System_String_array *)System_Single__TryParse(v7->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v11 )
        {
          SePlayer__set_Pitch(v11, result, 0LL);
          return;
        }
LABEL_18:
        sub_1B8880C(IsNullOrEmpty, v5);
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
    sub_1B8880C(0LL, v5);
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

  if ( (byte_4A5C7E3 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C7E3 = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0LL, 0LL) )
  {
    v6 = this->fields.pointLabel;
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v7->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Min_62526020(point, UserPointEventMax, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(v9, 0LL);
    if ( !v6 )
      sub_1B8880C(NumberFormatLong, v11);
    UILabel__set_text(v6, NumberFormatLong, 0LL);
  }
}


void __fastcall EventInfoReleaseEventPointControl__Setup(
        EventInfoReleaseEventPointControl_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  UnityEngine_GameObject_o *questClearCheck; // x0
  _BOOL8 IsFreeQuestClear; // x1
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *v10; // x21
  Il2CppObject *Component_object; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v13; // x8

  if ( (byte_4A5C7E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C7E2 = 1;
  }
  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.progressData,
    (int32_t)progressData_,
    (int32_t)method,
    v3);
  if ( !progressData_ )
    goto LABEL_24;
  EventInfoReleaseEventPointControl__SetPointLabel(this, progressData_->fields.NextPoint, v9);
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_24;
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  questClearCheck,
                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !this->fields.pointClearCheck )
    goto LABEL_24;
  v10 = questClearCheck;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.pointClearCheck,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( ((unsigned __int8)questClearCheck & 1) != 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0LL,
                                                    0LL);
    if ( ((unsigned __int8)questClearCheck & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_24;
      LOBYTE(v10[4].monitor) = 0;
      if ( !Component_object )
        goto LABEL_24;
      LOBYTE(Component_object[6].monitor) = 0;
    }
  }
  if ( (progressData = this->fields.progressData) == 0LL
    || (questClearCheck = this->fields.questClearCheck) == 0LL
    || (UnityEngine_GameObject__SetActive(questClearCheck, progressData->fields.IsFreeQuestClear, 0LL),
        (v13 = *p_progressData) == 0LL)
    || (v13->fields.OldTotalPoint < v13->fields.NextPoint || !v13->fields.IsReleaseScenarioAnimEnd
      ? (IsFreeQuestClear = 0LL)
      : (IsFreeQuestClear = v13->fields.IsFreeQuestClear),
        (questClearCheck = this->fields.pointClearCheck) == 0LL) )
  {
LABEL_24:
    sub_1B8880C(questClearCheck, IsFreeQuestClear);
  }
  UnityEngine_GameObject__SetActive(questClearCheck, IsFreeQuestClear, 0LL);
}