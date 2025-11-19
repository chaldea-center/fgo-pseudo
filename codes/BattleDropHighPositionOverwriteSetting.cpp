void BattleDropHighPositionOverwriteSetting___ctor(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  this->fields.startAcceleration.fields.z = 0.0;
  *(_OWORD *)&this->fields.startPos.fields.x = xmmword_CED1A0;
  *(_OWORD *)&this->fields.localGravity.fields.y = xmmword_CECD70;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


UnityEngine_Vector3_o BattleDropHighPositionOverwriteSetting__get_LocalGravity(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.localGravity.fields.x;
  y = this->fields.localGravity.fields.y;
  z = this->fields.localGravity.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o BattleDropHighPositionOverwriteSetting__get_StartAcceleration(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.startAcceleration.fields.x;
  y = this->fields.startAcceleration.fields.y;
  z = this->fields.startAcceleration.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o BattleDropHighPositionOverwriteSetting__get_StartPos(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.startPos.fields.x;
  y = this->fields.startPos.fields.y;
  z = this->fields.startPos.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}