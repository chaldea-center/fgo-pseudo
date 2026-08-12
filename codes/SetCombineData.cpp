void SetCombineData___ctor(SetCombineData_o *this, const MethodInfo *method)
{
  this->fields.selectMax = 5;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetCombineData__Clear(SetCombineData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  *(_WORD *)&this->fields.isAdjustMax = 0;
  *(_QWORD *)&this->fields.selectSum = 0;
  *(_QWORD *)&this->fields.getExp = 0;
  *(_QWORD *)&this->fields.getHpAdjustVal = 0;
  this->fields.materialUsrSvtIdList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.materialUsrSvtIdList, 0, v2, v3, v4, v5, v6, v7);
  this->fields.svtEqMaterialList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.svtEqMaterialList, 0, v9, v10, v11, v12, v13, v14);
}