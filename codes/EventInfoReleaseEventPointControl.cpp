void EventInfoReleaseEventPointControl___ctor(EventInfoReleaseEventPointControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoReleaseEventPointControl__Awake(EventInfoReleaseEventPointControl_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoReleaseEventPointControl__PlayChangeNextPointAnim(
        EventInfoReleaseEventPointControl_o *this,
        bool isFadeIn,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pointLabel; // x21
  __int64 v6; // x1
  UILabel_o *animation; // x0
  System_String_o **v8; // x8

  if ( (byte_593A43C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_23287/*"next_release_title_fade_in"*/);
    sub_21FFC50(&StringLiteral_23288/*"next_release_title_fade_out"*/);
    byte_593A43C = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFadeIn);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0, 0) )
  {
    animation = this->fields.pointLabel;
    if ( !animation )
      goto LABEL_12;
    UILabel__UpdateNGUIText(animation, 0);
  }
  animation = (UILabel_o *)this->fields.animation;
  if ( !animation )
LABEL_12:
    sub_21FFECC(animation, v6);
  v8 = (System_String_o **)&StringLiteral_23287/*"next_release_title_fade_in"*/;
  if ( !isFadeIn )
    v8 = (System_String_o **)&StringLiteral_23288/*"next_release_title_fade_out"*/;
  SimpleAnimation__Play_78338864((SimpleAnimation_o *)animation, *v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoReleaseEventPointControl__PlayCheckInAnim(
        EventInfoReleaseEventPointControl_o *this,
        bool isFreeQuestCheck,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questClearCheck; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v8; // x2
  UnityEngine_Object_o *pointClearCheck; // x20

  if ( (byte_593A43D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18703/*"check_in"*/);
    byte_593A43D = 1;
  }
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       questClearCheck,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( isFreeQuestCheck )
    {
      questClearCheck = this->fields.questClearCheck;
      if ( !questClearCheck )
        goto LABEL_21;
      UnityEngine_GameObject__SetActive(questClearCheck, 1, 0);
      questClearCheck = this->fields.pointClearCheck;
      if ( !questClearCheck )
        goto LABEL_21;
      questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(questClearCheck, 0);
      if ( ((unsigned __int8)questClearCheck & 1) == 0 )
        EventInfoReleaseEventPointControl__PlaySe(
          (EventInfoReleaseEventPointControl_o *)questClearCheck,
          this->fields.releaseScenarioCheckSE,
          v8);
    }
    else
    {
      pointClearCheck = (UnityEngine_Object_o *)this->fields.pointClearCheck;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFreeQuestCheck);
      if ( UnityEngine_Object__op_Equality(pointClearCheck, 0, 0) )
        return;
      questClearCheck = this->fields.pointClearCheck;
      if ( !questClearCheck
        || (UnityEngine_GameObject__SetActive(questClearCheck, 1, 0),
            (questClearCheck = this->fields.pointClearCheck) == 0) )
      {
LABEL_21:
        sub_21FFECC(questClearCheck, isFreeQuestCheck);
      }
      questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      questClearCheck,
                                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      Component_object = (Il2CppObject *)questClearCheck;
    }
    if ( Component_object )
    {
      SimpleAnimation__Play_78338864((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_18703/*"check_in"*/, 0);
      return;
    }
    goto LABEL_21;
  }
}


void EventInfoReleaseEventPointControl__PlayCheckSE(
        EventInfoReleaseEventPointControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoReleaseEventPointControl__PlaySe(this, this->fields.releaseScenarioCheckSE, v2);
}


void EventInfoReleaseEventPointControl__PlaySe(
        EventInfoReleaseEventPointControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_array *IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_String_array *v6; // x19
  int max_length; // w9
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  SePlayer_o *v10; // x0
  int v11; // w8
  SePlayer_o *v12; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_593A43E & 1) == 0 )
  {
    sub_21FFC50(&Method_EventInfoReleaseEventPointControl_PlaySe__);
    byte_593A43E = 1;
  }
  result = 0.0;
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( name )
    {
      IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0);
      if ( IsNullOrEmpty )
      {
        v6 = IsNullOrEmpty;
        max_length = IsNullOrEmpty->max_length;
        v8 = Method_EventInfoReleaseEventPointControl_PlaySe__;
        if ( max_length < 2 )
        {
          if ( (*((_BYTE *)Method_EventInfoReleaseEventPointControl_PlaySe__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_21FFC68(Method_EventInfoReleaseEventPointControl_PlaySe__);
          v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
          if ( LODWORD(v6->max_length) )
          {
            OverwriteAssetSoundName__PlaySe(v9, v6->m_Items[0], 0, 0);
            return;
          }
LABEL_20:
          sub_21FFED4(v9);
        }
        if ( (*((_BYTE *)Method_EventInfoReleaseEventPointControl_PlaySe__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_21FFC68(Method_EventInfoReleaseEventPointControl_PlaySe__);
        v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
        if ( LODWORD(v6->max_length) < 2 )
          goto LABEL_20;
        v10 = OverwriteAssetSoundName__PlaySe_48366604(v9, v6->m_Items[0], v6->m_Items[1], 1.0, 0, 0, 0);
        v11 = v6->max_length;
        result = 0.0;
        if ( v11 < 3 )
          return;
        v12 = v10;
        IsNullOrEmpty = (System_String_array *)System_Single__TryParse(v6->m_Items[2], &result, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          return;
        if ( v12 )
        {
          SePlayer__set_Pitch(v12, result, 0);
          return;
        }
      }
    }
    sub_21FFECC(IsNullOrEmpty, v5);
  }
}


void EventInfoReleaseEventPointControl__SetActive(
        EventInfoReleaseEventPointControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


void EventInfoReleaseEventPointControl__SetPointLabel(
        EventInfoReleaseEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pointLabel; // x21
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  UILabel_o *v8; // x20
  int64_t UserPointEventMax; // x21
  __int64 v10; // x1
  int64_t v11; // x19
  System_String_o *NumberFormatLong; // x0
  __int64 v13; // x1

  if ( (byte_593A43B & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A43B = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point);
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0, 0) )
  {
    v7 = BalanceConfig_TypeInfo;
    v8 = this->fields.pointLabel;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
      v7 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v7->static_fields->UserPointEventMax;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    v11 = System_Math__Min_76940304(point, UserPointEventMax, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(v11, 0);
    if ( !v8 )
      sub_21FFECC(NumberFormatLong, v13);
    UILabel__set_text(v8, NumberFormatLong, 0);
  }
}


void EventInfoReleaseEventPointControl__Setup(
        EventInfoReleaseEventPointControl_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  UnityEngine_GameObject_o *questClearCheck; // x0
  _BOOL8 IsFreeQuestClear; // x1
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x21
  __int64 v15; // x1
  Il2CppObject *Component_object; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8

  if ( (byte_593A43A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A43A = 1;
  }
  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progressData,
    (int32_t)progressData_,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !progressData_ )
    goto LABEL_24;
  EventInfoReleaseEventPointControl__SetPointLabel(this, progressData_->fields.NextPoint, v13);
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_24;
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  questClearCheck,
                                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !this->fields.pointClearCheck )
    goto LABEL_24;
  v14 = questClearCheck;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.pointClearCheck,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
  if ( ((unsigned __int8)questClearCheck & 1) != 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsFreeQuestClear);
    questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0,
                                                    0);
    if ( ((unsigned __int8)questClearCheck & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_24;
      LOBYTE(v14[4].monitor) = 0;
      if ( !Component_object )
        goto LABEL_24;
      LOBYTE(Component_object[6].monitor) = 0;
    }
  }
  if ( (progressData = this->fields.progressData) == 0
    || (questClearCheck = this->fields.questClearCheck) == 0
    || (UnityEngine_GameObject__SetActive(questClearCheck, progressData->fields.IsFreeQuestClear, 0),
        (v18 = *p_progressData) == 0)
    || (v18->fields.OldTotalPoint < v18->fields.NextPoint || !v18->fields.IsReleaseScenarioAnimEnd
      ? (IsFreeQuestClear = 0)
      : (IsFreeQuestClear = v18->fields.IsFreeQuestClear),
        (questClearCheck = this->fields.pointClearCheck) == 0) )
  {
LABEL_24:
    sub_21FFECC(questClearCheck, IsFreeQuestClear);
  }
  UnityEngine_GameObject__SetActive(questClearCheck, IsFreeQuestClear, 0);
}