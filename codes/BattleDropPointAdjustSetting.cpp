void BattleDropPointAdjustSetting___ctor(BattleDropPointAdjustSetting_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


UnityEngine_Vector3_o BattleDropPointAdjustSetting__get_AdjustPosition(
        BattleDropPointAdjustSetting_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.adjustPosition.fields.x;
  result.fields.y = this->fields.adjustPosition.fields.y;
  result.fields.z = this->fields.adjustPosition.fields.z;
  return result;
}


bool BattleDropPointAdjustSetting__get_IsForceActorPosition(
        BattleDropPointAdjustSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.isForceActorPosition;
}