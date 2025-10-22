// local variable allocation has failed, the output may be wrong!
int32_t RarityRestrictedSkillUtil__GetOverwrittenRarity(
        ServantEntity_o *servantEntity,
        int32_t defaultRarity,
        const MethodInfo *method)
{
  if ( !servantEntity )
    sub_1C3E7C0(0, *(_QWORD *)&defaultRarity);
  if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0) )
    return 3;
  else
    return defaultRarity;
}


bool RarityRestrictedSkillUtil__IsDisabled(
        SkillLvEntity_o *skillLvEntity,
        ServantEntity_o *servantEntity,
        int32_t servantRarity,
        const MethodInfo *method)
{
  ServantEntity_o *v5; // x20
  SkillLvEntity_o *v6; // x21
  System_Int32_array *v7; // x21
  _BOOL4 v8; // w0

  v5 = servantEntity;
  v6 = skillLvEntity;
  if ( (byte_4C5812C & 1) == 0 )
  {
    skillLvEntity = (SkillLvEntity_o *)sub_1C3E564(&Method_System_Array_IndexOf_int___);
    byte_4C5812C = 1;
  }
  if ( !v6
    || (skillLvEntity = (SkillLvEntity_o *)SkillLvEntity__GetActRarity(v6, 0), !v5)
    || ((v7 = (System_Int32_array *)skillLvEntity,
         skillLvEntity = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v5, 0),
         ((unsigned __int8)skillLvEntity & 1) == 0)
      ? (servantEntity = (ServantEntity_o *)(unsigned int)servantRarity)
      : (servantEntity = (ServantEntity_o *)(&dword_0 + 3)),
        !v7) )
  {
    sub_1C3E7C0(skillLvEntity, servantEntity);
  }
  if ( v7->max_length )
    return (unsigned int)System_Array__IndexOf_int_(
                           v7,
                           (int32_t)servantEntity,
                           (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___) >> 31;
  else
    LOBYTE(v8) = 0;
  return v8;
}