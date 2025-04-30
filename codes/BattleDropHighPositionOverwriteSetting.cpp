void __fastcall BattleDropHighPositionOverwriteSetting___ctor(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  LODWORD(this[1].klass) = 0;
  *(_OWORD *)&this->fields.startPos.fields.y = xmmword_BC3970;
  *(_OWORD *)&this->fields.localGravity.fields.z = xmmword_BC3540;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall BattleDropHighPositionOverwriteSetting__get_LocalGravity(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  float y; // s0
  float z; // s1
  float x; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = this->fields.localGravity.fields.y;
  z = this->fields.localGravity.fields.z;
  x = this->fields.startAcceleration.fields.x;
  result.fields.z = x;
  result.fields.y = z;
  result.fields.x = y;
  return result;
}


UnityEngine_Vector3_o __fastcall BattleDropHighPositionOverwriteSetting__get_StartAcceleration(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  float y; // s0
  float z; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = this->fields.startAcceleration.fields.y;
  z = this->fields.startAcceleration.fields.z;
  v4 = *(float *)&this[1].klass;
  result.fields.z = v4;
  result.fields.y = z;
  result.fields.x = y;
  return result;
}


UnityEngine_Vector3_o __fastcall BattleDropHighPositionOverwriteSetting__get_StartPos(
        BattleDropHighPositionOverwriteSetting_o *this,
        const MethodInfo *method)
{
  float y; // s0
  float z; // s1
  float x; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = this->fields.startPos.fields.y;
  z = this->fields.startPos.fields.z;
  x = this->fields.localGravity.fields.x;
  result.fields.z = x;
  result.fields.y = z;
  result.fields.x = y;
  return result;
}