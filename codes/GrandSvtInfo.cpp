void GrandSvtInfo___ctor(
        GrandSvtInfo_o *this,
        int32_t grandGraphId,
        int64_t userSvtId,
        System_Int64_array *userSvtEquipIds,
        int32_t equipTarget2SkillChange,
        const MethodInfo *method)
{
  GrandSvtInfo_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.userSvtEquipIds = userSvtEquipIds;
  v10 = (GrandSvtInfo_o *)((char *)v10 + 32);
  LODWORD(v10[-1].fields.userSvtEquipIds) = grandGraphId;
  *(_QWORD *)&v10[-1].fields.equipTarget2SkillChange = userSvtId;
  sub_1C36FFC((CGThumbnailListItem_o *)v10, (int32_t)userSvtEquipIds, v11, v12);
  LODWORD(v10->monitor) = equipTarget2SkillChange;
}