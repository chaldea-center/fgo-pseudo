void __fastcall BattleDropPointAdjustSetting___ctor(BattleDropPointAdjustSetting_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall BattleDropPointAdjustSetting__get_AdjustPosition(
        BattleDropPointAdjustSetting_o *this,
        const MethodInfo *method)
{
  float y; // s0
  float z; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = this->fields.adjustPosition.fields.y;
  z = this->fields.adjustPosition.fields.z;
  v4 = *((float *)&this->fields + 5);
  result.fields.z = v4;
  result.fields.y = z;
  result.fields.x = y;
  return result;
}


bool __fastcall BattleDropPointAdjustSetting__get_IsForceActorPosition(
        BattleDropPointAdjustSetting_o *this,
        const MethodInfo *method)
{
  return LOBYTE(this->fields.adjustPosition.fields.x);
}