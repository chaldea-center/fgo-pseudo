int32_t __fastcall RarityRestrictedSkillUtil__GetOverwrittenRarity(
        ServantEntity_o *servantEntity,
        int32_t defaultRarity,
        const MethodInfo *method)
{
  if ( !servantEntity )
    sub_B0D97C(0LL);
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
  SkillLvEntity_o *v6; // x21
  SkillLvEntity_o *v7; // x21
  int32_t v8; // w1
  _BOOL4 v9; // w0

  v6 = skillLvEntity;
  if ( (byte_4212EFD & 1) == 0 )
  {
    skillLvEntity = (SkillLvEntity_o *)sub_B0D8A4(&Method_System_Array_IndexOf_int___, servantEntity);
    byte_4212EFD = 1;
  }
  if ( !v6
    || (skillLvEntity = (SkillLvEntity_o *)SkillLvEntity__GetActRarity(v6, 0LL), !servantEntity)
    || ((v7 = skillLvEntity,
         skillLvEntity = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(servantEntity, 0LL),
         ((unsigned __int8)skillLvEntity & 1) == 0)
      ? (v8 = servantRarity)
      : (v8 = 3),
        !v7) )
  {
    sub_B0D97C(skillLvEntity);
  }
  if ( *(_QWORD *)&v7->fields.chargeTurn )
    return (unsigned int)System_Array__IndexOf_int_(
                           (System_Int32_array *)v7,
                           v8,
                           (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) >> 31;
  else
    LOBYTE(v9) = 0;
  return v9;
}