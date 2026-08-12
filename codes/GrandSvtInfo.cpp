void GrandSvtInfo___ctor(
        GrandSvtInfo_o *this,
        int32_t grandGraphId,
        int64_t userSvtId,
        System_Int64_array *userSvtEquipIds,
        int32_t equipTarget2SkillChange,
        const MethodInfo *method)
{
  GrandSvtInfo_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.userSvtEquipIds = userSvtEquipIds;
  v10 = (GrandSvtInfo_o *)((char *)v10 + 32);
  LODWORD(v10[-1].fields.userSvtEquipIds) = grandGraphId;
  *(_QWORD *)&v10[-1].fields.equipTarget2SkillChange = userSvtId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v10, (int32_t)userSvtEquipIds, v11, v12, v13, v14, v15, v16);
  LODWORD(v10->monitor) = equipTarget2SkillChange;
}