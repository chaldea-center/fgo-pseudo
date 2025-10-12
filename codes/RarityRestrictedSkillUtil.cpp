int32_t RarityRestrictedSkillUtil__GetOverwrittenRarity(
        ServantEntity_o *servantEntity,
        int32_t defaultRarity,
        const MethodInfo *method)
{
  if ( !servantEntity )
    sub_1C32E7C(0);
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
  SkillLvEntity_o *v6; // x21
  System_Int32_array *v7; // x21
  int32_t v8; // w1
  _BOOL4 v9; // w0

  v6 = skillLvEntity;
  if ( (byte_4C38D6A & 1) == 0 )
  {
    skillLvEntity = (SkillLvEntity_o *)sub_1C32C20(&Method_System_Array_IndexOf_int___);
    byte_4C38D6A = 1;
  }
  if ( !v6
    || (skillLvEntity = (SkillLvEntity_o *)SkillLvEntity__GetActRarity(v6, 0), !servantEntity)
    || ((v7 = (System_Int32_array *)skillLvEntity,
         skillLvEntity = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(servantEntity, 0),
         ((unsigned __int8)skillLvEntity & 1) == 0)
      ? (v8 = servantRarity)
      : (v8 = 3),
        !v7) )
  {
    sub_1C32E7C(skillLvEntity);
  }
  if ( v7->max_length )
    return (unsigned int)System_Array__IndexOf_int_(
                           v7,
                           v8,
                           (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___) >> 31;
  else
    LOBYTE(v9) = 0;
  return v9;
}