void SkillInfoObject___ctor(SkillInfoObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UnityEngine_GameObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SkillIconComponent_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UIRangeLabel_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UILabel_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_593395D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    sub_21FFC50(&SkillIconComponent___TypeInfo);
    sub_21FFC50(&UILabel___TypeInfo);
    sub_21FFC50(&UIRangeLabel___TypeInfo);
    byte_593395D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_21FFD10(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct SkillIconComponent_array *)sub_21FFD10(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIconList = v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillIconList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct UIRangeLabel_array *)sub_21FFD10(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillTitleRangeLabelList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct UILabel_array *)sub_21FFD10(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillExplanationLabelList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  System_Object___ctor((Il2CppObject *)this, 0);
}