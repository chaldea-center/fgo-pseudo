int32_t __fastcall RarityRestrictedSkillUtil__GetOverwrittenRarity(
        ServantEntity_o *servantEntity,
        int32_t defaultRarity,
        const MethodInfo *method)
{
  if ( !servantEntity )
    sub_B2C434(0LL, defaultRarity);
  if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    return 3;
  else
    return defaultRarity;
}


bool __fastcall RarityRestrictedSkillUtil__IsDisabled(
        SkillLvEntity_o *skillLvEntity,
        ServantEntity_o *servantEntity,
        int32_t servantRarity,
        const MethodInfo *method)
{
  ServantEntity_o *v5; // x20
  SkillLvEntity_o *v6; // x21
  SkillLvEntity_o *v7; // x21
  _BOOL4 v8; // w0

  v5 = servantEntity;
  v6 = skillLvEntity;
  if ( (byte_41860F2 & 1) == 0 )
  {
    skillLvEntity = (SkillLvEntity_o *)sub_B2C35C(&Method_System_Array_IndexOf_int___, servantEntity);
    byte_41860F2 = 1;
  }
  if ( !v6
    || (skillLvEntity = (SkillLvEntity_o *)SkillLvEntity__GetActRarity(v6, 0LL), !v5)
    || ((v7 = skillLvEntity,
         skillLvEntity = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v5, 0LL),
         ((unsigned __int8)skillLvEntity & 1) == 0)
      ? (servantEntity = (ServantEntity_o *)(unsigned int)servantRarity)
      : (servantEntity = (ServantEntity_o *)(&dword_0 + 3)),
        !v7) )
  {
    sub_B2C434(skillLvEntity, servantEntity);
  }
  if ( *(_QWORD *)&v7->fields.chargeTurn )
    return (unsigned int)System_Array__IndexOf_int_(
                           (System_Int32_array *)v7,
                           (int32_t)servantEntity,
                           (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) >> 31;
  else
    LOBYTE(v8) = 0;
  return v8;
}