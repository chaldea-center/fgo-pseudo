void SetCombineData___ctor(SetCombineData_o *this, const MethodInfo *method)
{
  this->fields.selectMax = 5;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetCombineData__Clear(SetCombineData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  *(_WORD *)&this->fields.isAdjustMax = 0;
  *(_QWORD *)&this->fields.selectSum = 0;
  *(_QWORD *)&this->fields.getExp = 0;
  *(_QWORD *)&this->fields.getHpAdjustVal = 0;
  this->fields.materialUsrSvtIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.materialUsrSvtIdList, 0, v2, v3);
  this->fields.svtEqMaterialList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtEqMaterialList, 0, v5, v6);
}