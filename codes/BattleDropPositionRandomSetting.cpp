void BattleDropPositionRandomSetting___ctor(BattleDropPositionRandomSetting_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


System_Collections_Generic_List_BattleDropPositionRandomSetting_PositionRandom__o *BattleDropPositionRandomSetting__get_PositionRandomList(
        BattleDropPositionRandomSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.positionRandomList;
}


void BattleDropPositionRandomSetting_PositionRandom___ctor(
        BattleDropPositionRandomSetting_PositionRandom_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *BattleDropPositionRandomSetting_PositionRandom__get_GiftIdArray(
        BattleDropPositionRandomSetting_PositionRandom_o *this,
        const MethodInfo *method)
{
  return this->fields.giftIdArray;
}


int32_t BattleDropPositionRandomSetting_PositionRandom__get_ItemCountPerRow(
        BattleDropPositionRandomSetting_PositionRandom_o *this,
        const MethodInfo *method)
{
  return this->fields.itemCountPerRow;
}


float BattleDropPositionRandomSetting_PositionRandom__get_RandomShiftX(
        BattleDropPositionRandomSetting_PositionRandom_o *this,
        const MethodInfo *method)
{
  return this->fields.randomShiftX;
}


float BattleDropPositionRandomSetting_PositionRandom__get_RandomShiftY(
        BattleDropPositionRandomSetting_PositionRandom_o *this,
        const MethodInfo *method)
{
  return this->fields.randomShiftY;
}


UnityEngine_Vector3_o BattleDropPositionRandomSetting_PositionRandom__get_RectBasePoint(
        BattleDropPositionRandomSetting_PositionRandom_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.rectBasePoint.fields.x;
  y = this->fields.rectBasePoint.fields.y;
  z = this->fields.rectBasePoint.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float BattleDropPositionRandomSetting_PositionRandom__get_RectHeight(
        BattleDropPositionRandomSetting_PositionRandom_o *this,
        const MethodInfo *method)
{
  return this->fields.rectHeight;
}


float BattleDropPositionRandomSetting_PositionRandom__get_RectWidth(
        BattleDropPositionRandomSetting_PositionRandom_o *this,
        const MethodInfo *method)
{
  return this->fields.rectWidth;
}