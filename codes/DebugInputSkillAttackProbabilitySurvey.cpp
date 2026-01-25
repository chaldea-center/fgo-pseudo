void DebugInputSkillAttackProbabilitySurvey___ctor(
        DebugInputSkillAttackProbabilitySurvey_o *this,
        const MethodInfo *method)
{
  this->fields.attackNum = 10;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugInputSkillAttackProbabilitySurvey__Cancel(
        DebugInputSkillAttackProbabilitySurvey_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *debugMenuTran; // x0

  debugMenuTran = (UnityEngine_Component_o *)this->fields.debugMenuTran;
  if ( !debugMenuTran
    || (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(debugMenuTran, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 1, 0),
        (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
    sub_1C7BD40(debugMenuTran, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 0, 0);
}


void DebugInputSkillAttackProbabilitySurvey__OnSubmitAttackNum(
        DebugInputSkillAttackProbabilitySurvey_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0;
  if ( System_Int32__TryParse(value, &result, 0) )
    this->fields.attackNum = result;
}


void DebugInputSkillAttackProbabilitySurvey__Open(
        DebugInputSkillAttackProbabilitySurvey_o *this,
        BattleData_o *inputData,
        UnityEngine_Transform_o *inputDebugMenuTran,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UnityEngine_Transform_o **p_debugMenuTran; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1

  this->fields.data = inputData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.data,
    (int32_t)inputData,
    (int32_t)inputDebugMenuTran,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = &this->fields.debugMenuTran;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.debugMenuTran,
    (int32_t)inputDebugMenuTran,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)*p_debugMenuTran) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C7BD40(gameObject, v18);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void DebugInputSkillAttackProbabilitySurvey__RequestReset(
        DebugInputSkillAttackProbabilitySurvey_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugInputSkillAttackProbabilitySurvey__ShowResult(
        DebugInputSkillAttackProbabilitySurvey_o *this,
        bool show,
        const MethodInfo *method)
{
  ;
}


void DebugInputSkillAttackProbabilitySurvey__Submit(
        DebugInputSkillAttackProbabilitySurvey_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugInputSkillAttackProbabilitySurvey__TurnLeft(
        DebugInputSkillAttackProbabilitySurvey_o *this,
        System_String_o *buttonName,
        const MethodInfo *method)
{
  DebugInputSkillAttackProbabilitySurvey_o *v4; // x19
  int32_t v5; // w21
  int32_t v6; // w0
  UILabel_o *attackNumLabel; // x21
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4CEFBF7 & 1) == 0 )
  {
    this = (DebugInputSkillAttackProbabilitySurvey_o *)sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CEFBF7 = 1;
  }
  result = 0;
  if ( !buttonName )
    goto LABEL_12;
  this = (DebugInputSkillAttackProbabilitySurvey_o *)System_String__Split(buttonName, 0x5Fu, 0, 0);
  if ( !this )
    goto LABEL_12;
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
    sub_1C7BD48(this);
  if ( System_Int32__TryParse(*(System_String_o **)&this->fields.attackNum, &result, 0) )
  {
    v5 = v4->fields.attackNum - result;
    v4->fields.attackNum = v5;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v6 = System_Math__Max_65698740(v5, 1, 0);
    attackNumLabel = v4->fields.attackNumLabel;
    v4->fields.attackNum = v6;
    this = (DebugInputSkillAttackProbabilitySurvey_o *)System_Int32__ToString((int)v4 + 40, 0);
    if ( attackNumLabel )
    {
      UILabel__set_text(attackNumLabel, (System_String_o *)this, 0);
      return;
    }
LABEL_12:
    sub_1C7BD40(this, buttonName);
  }
}


void DebugInputSkillAttackProbabilitySurvey__TurnRight(
        DebugInputSkillAttackProbabilitySurvey_o *this,
        System_String_o *buttonName,
        const MethodInfo *method)
{
  DebugInputSkillAttackProbabilitySurvey_o *v4; // x19
  int32_t v5; // w21
  int32_t v6; // w0
  UILabel_o *attackNumLabel; // x21
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4CEFBF6 & 1) == 0 )
  {
    this = (DebugInputSkillAttackProbabilitySurvey_o *)sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CEFBF6 = 1;
  }
  result = 0;
  if ( !buttonName )
    goto LABEL_12;
  this = (DebugInputSkillAttackProbabilitySurvey_o *)System_String__Split(buttonName, 0x5Fu, 0, 0);
  if ( !this )
    goto LABEL_12;
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
    sub_1C7BD48(this);
  if ( System_Int32__TryParse(*(System_String_o **)&this->fields.attackNum, &result, 0) )
  {
    v5 = result + v4->fields.attackNum;
    v4->fields.attackNum = v5;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v6 = System_Math__Min_65699068(v5, 1000, 0);
    attackNumLabel = v4->fields.attackNumLabel;
    v4->fields.attackNum = v6;
    this = (DebugInputSkillAttackProbabilitySurvey_o *)System_Int32__ToString((int)v4 + 40, 0);
    if ( attackNumLabel )
    {
      UILabel__set_text(attackNumLabel, (System_String_o *)this, 0);
      return;
    }
LABEL_12:
    sub_1C7BD40(this, buttonName);
  }
}