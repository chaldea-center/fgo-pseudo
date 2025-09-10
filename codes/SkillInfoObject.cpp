void SkillInfoObject___ctor(SkillInfoObject_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct SkillIconComponent_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIRangeLabel_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UILabel_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C227C5 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&SkillIconComponent___TypeInfo);
    sub_1C2D490(&UILabel___TypeInfo);
    sub_1C2D490(&UIRangeLabel___TypeInfo);
    byte_4C227C5 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C2D538(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (struct SkillIconComponent_array *)sub_1C2D538(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIconList = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipSkillIconList, (int32_t)v7, v8, v9);
  v10 = (struct UIRangeLabel_array *)sub_1C2D538(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipSkillTitleRangeLabelList, (int32_t)v10, v11, v12);
  v13 = (struct UILabel_array *)sub_1C2D538(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipSkillExplanationLabelList, (int32_t)v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
}