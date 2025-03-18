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
  __int64 v8; // x1
  UILabel_o *animation; // x0
  System_String_o **v10; // x8

  if ( (byte_4C2362B & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isFadeIn);
    sub_1C3B764(&StringLiteral_22504/*"ref "*/, v5);
    sub_1C3B764(&StringLiteral_22505/*"refer"*/, v6);
    byte_4C2362B = 1;
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
    sub_1C3B9C0(animation, v8);
  v10 = (System_String_o **)&StringLiteral_22504/*"ref "*/;
  if ( !isFadeIn )
    v10 = (System_String_o **)&StringLiteral_22505/*"refer"*/;
  SimpleAnimation__Play_65506988((SimpleAnimation_o *)animation, *v10, 0LL);
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
  Il2CppObject *Component_object; // x20
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *pointClearCheck; // x20

  if ( (byte_4C2362C & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, isFreeQuestCheck);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_18299/*"dispMaskTreasureDevices"*/, v6);
    byte_4C2362C = 1;
  }
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       questClearCheck,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
          v9);
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
        sub_1C3B9C0(questClearCheck, isFreeQuestCheck);
      }
      questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      questClearCheck,
                                                      (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      Component_object = (Il2CppObject *)questClearCheck;
    }
    if ( Component_object )
    {
      SimpleAnimation__Play_65506988((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_18299/*"dispMaskTreasureDevices"*/, 0LL);
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
  System_String_array *v6; // x19
  int max_length; // w20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_String_o *v10; // x1
  unsigned int v11; // w8
  SePlayer_o *v12; // x0
  SePlayer_o *v13; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C2362D & 1) == 0 )
  {
    sub_1C3B764(&Method_EventInfoReleaseEventPointControl_PlaySe__, name);
    byte_4C2362D = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name )
      goto LABEL_17;
    IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_17;
    v6 = IsNullOrEmpty;
    max_length = IsNullOrEmpty->max_length;
    v8 = Method_EventInfoReleaseEventPointControl_PlaySe__;
    if ( (*((_BYTE *)Method_EventInfoReleaseEventPointControl_PlaySe__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C3B77C(Method_EventInfoReleaseEventPointControl_PlaySe__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3B748(v8, v8[4]);
    v11 = v6->max_length;
    if ( !v11 )
      goto LABEL_18;
    v10 = v6->m_Items[0];
    if ( max_length < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v9, v10, 0, 0LL);
      return;
    }
    if ( v11 <= 1 )
LABEL_18:
      sub_1C3B9C8(v9, v10);
    v12 = OverwriteAssetSoundName__PlaySe_40039436(v9, v10, v6->m_Items[1], 1.0, 0LL, 0, 0LL);
    result = 0.0;
    if ( (int)v6->max_length >= 3 )
    {
      v13 = v12;
      IsNullOrEmpty = (System_String_array *)System_Single__TryParse(v6->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v13 )
        {
          SePlayer__set_Pitch(v13, result, 0LL);
          return;
        }
LABEL_17:
        sub_1C3B9C0(IsNullOrEmpty, v5);
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
    sub_1C3B9C0(0LL, v5);
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
  __int64 v14; // x1

  if ( (byte_4C2362A & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, point);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&System_Math_TypeInfo, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C2362A = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0LL, 0LL) )
  {
    v9 = this->fields.pointLabel;
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v10->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = System_Math__Min_64188096(point, UserPointEventMax, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(v12, 0LL);
    if ( !v9 )
      sub_1C3B9C0(NumberFormatLong, v14);
    UILabel__set_text(v9, NumberFormatLong, 0LL);
  }
}


void __fastcall EventInfoReleaseEventPointControl__Setup(
        EventInfoReleaseEventPointControl_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  UnityEngine_GameObject_o *questClearCheck; // x0
  _BOOL8 IsFreeQuestClear; // x1
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *v15; // x21
  Il2CppObject *Component_object; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8

  if ( (byte_4C23629 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, progressData_);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C23629 = 1;
  }
  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.progressData,
    (int64_t)progressData_,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !progressData_ )
    goto LABEL_24;
  EventInfoReleaseEventPointControl__SetPointLabel(this, progressData_->fields.NextPoint, v14);
  questClearCheck = this->fields.questClearCheck;
  if ( !questClearCheck )
    goto LABEL_24;
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  questClearCheck,
                                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !this->fields.pointClearCheck )
    goto LABEL_24;
  v15 = questClearCheck;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.pointClearCheck,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  questClearCheck = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
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
      if ( !v15 )
        goto LABEL_24;
      LOBYTE(v15[4].monitor) = 0;
      if ( !Component_object )
        goto LABEL_24;
      LOBYTE(Component_object[6].monitor) = 0;
    }
  }
  if ( (progressData = this->fields.progressData) == 0LL
    || (questClearCheck = this->fields.questClearCheck) == 0LL
    || (UnityEngine_GameObject__SetActive(questClearCheck, progressData->fields.IsFreeQuestClear, 0LL),
        (v18 = *p_progressData) == 0LL)
    || (v18->fields.OldTotalPoint < v18->fields.NextPoint || !v18->fields.IsReleaseScenarioAnimEnd
      ? (IsFreeQuestClear = 0LL)
      : (IsFreeQuestClear = v18->fields.IsFreeQuestClear),
        (questClearCheck = this->fields.pointClearCheck) == 0LL) )
  {
LABEL_24:
    sub_1C3B9C0(questClearCheck, IsFreeQuestClear);
  }
  UnityEngine_GameObject__SetActive(questClearCheck, IsFreeQuestClear, 0LL);
}