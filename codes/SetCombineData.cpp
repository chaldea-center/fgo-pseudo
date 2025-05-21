void __fastcall SetCombineData___ctor(SetCombineData_o *this, const MethodInfo *method)
{
  this->fields.selectMax = 5;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetCombineData__Clear(SetCombineData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  *(_WORD *)&this->fields.isAdjustMax = 0;
  *(_QWORD *)&this->fields.selectSum = 0LL;
  *(_QWORD *)&this->fields.getExp = 0LL;
  *(_QWORD *)&this->fields.getHpAdjustVal = 0LL;
  this->fields.materialUsrSvtIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.materialUsrSvtIdList, 0, v2, v3);
  this->fields.svtEqMaterialList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtEqMaterialList, 0, v5, v6);
}