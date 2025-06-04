void __fastcall SkillInfoObject___ctor(SkillInfoObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UIRangeLabel_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UILabel_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4AFD728 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BC3008(&SkillIconComponent___TypeInfo, v4);
    sub_1BC3008(&UILabel___TypeInfo, v5);
    sub_1BC3008(&UIRangeLabel___TypeInfo, v6);
    byte_4AFD728 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1BC30B0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1BC30B0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIconList = v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipSkillIconList, (int32_t)v11, v12, v13);
  v14 = (struct UIRangeLabel_array *)sub_1BC30B0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipSkillTitleRangeLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1BC30B0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipSkillExplanationLabelList, (int32_t)v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}