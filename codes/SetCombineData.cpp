void SetCombineData___ctor(SetCombineData_o *this, const MethodInfo *method)
{
  this->fields.selectMax = 5;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetCombineData__Clear(SetCombineData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  *(_WORD *)&this->fields.isAdjustMax = 0;
  *(_QWORD *)&this->fields.selectSum = 0;
  *(_QWORD *)&this->fields.getExp = 0;
  *(_QWORD *)&this->fields.getHpAdjustVal = 0;
  this->fields.materialUsrSvtIdList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.materialUsrSvtIdList, 0, v2, v3, v4, v5, v6, v7);
  this->fields.svtEqMaterialList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEqMaterialList, 0, v9, v10, v11, v12, v13, v14);
}