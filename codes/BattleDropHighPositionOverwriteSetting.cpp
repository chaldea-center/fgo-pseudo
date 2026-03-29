void BattleDropHighPositionOverwriteSetting___ctor(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  this->fields.startAcceleration.fields.z = 0.0;
  *(_OWORD *)&this->fields.startPos.fields.x = xmmword_D01920;
  *(_OWORD *)&this->fields.localGravity.fields.y = xmmword_D01500;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


UnityEngine_Vector3_o BattleDropHighPositionOverwriteSetting__get_LocalGravity(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.localGravity.fields.x;
  result.fields.y = this->fields.localGravity.fields.y;
  result.fields.z = this->fields.localGravity.fields.z;
  return result;
}


UnityEngine_Vector3_o BattleDropHighPositionOverwriteSetting__get_StartAcceleration(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.startAcceleration.fields.x;
  result.fields.y = this->fields.startAcceleration.fields.y;
  result.fields.z = this->fields.startAcceleration.fields.z;
  return result;
}


UnityEngine_Vector3_o BattleDropHighPositionOverwriteSetting__get_StartPos(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.startPos.fields.x;
  result.fields.y = this->fields.startPos.fields.y;
  result.fields.z = this->fields.startPos.fields.z;
  return result;
}