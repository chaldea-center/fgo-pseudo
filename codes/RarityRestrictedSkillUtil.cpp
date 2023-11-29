int32_t __fastcall RarityRestrictedSkillUtil__GetOverwrittenRarity(
        ServantEntity_o *servantEntity,
        int32_t defaultRarity,
        const MethodInfo *method)
{
  if ( !servantEntity )
    sub_B170D4();
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
  System_Int32_array *ActRarity; // x0
  System_Int32_array *v8; // x21
  int32_t v9; // w1
  _BOOL4 v10; // w0

  if ( (byte_40F829B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, servantEntity);
    byte_40F829B = 1;
  }
  if ( !skillLvEntity
    || (ActRarity = SkillLvEntity__GetActRarity(skillLvEntity, 0LL), !servantEntity)
    || ((v8 = ActRarity, !ServantEntity__checkIsHeroineSvt(servantEntity, 0LL)) ? (v9 = servantRarity) : (v9 = 3), !v8) )
  {
    sub_B170D4();
  }
  if ( *(_QWORD *)&v8->max_length )
    return (unsigned int)System_Array__IndexOf_int_(
                           v8,
                           v9,
                           (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) >> 31;
  else
    LOBYTE(v10) = 0;
  return v10;
}