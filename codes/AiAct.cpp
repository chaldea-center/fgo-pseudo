bool AiAct__Check(int32_t type, int32_t intype, const MethodInfo *method)
{
  return type == intype;
}


int32_t AiAct__getInt(int32_t type, const MethodInfo *method)
{
  return type;
}


int32_t AiAct__getType(int32_t intype, const MethodInfo *method)
{
  return intype;
}


bool AiAct__isAttackArts(int32_t type, const MethodInfo *method)
{
  return type == 14 || type == 17;
}


bool AiAct__isAttackBuster(int32_t type, const MethodInfo *method)
{
  return type == 15 || type == 18;
}


bool AiAct__isAttackCritical(int32_t type, const MethodInfo *method)
{
  return ((unsigned int)type < 0x1F) & (0x400E0000u >> type);
}


bool AiAct__isAttackQuick(int32_t type, const MethodInfo *method)
{
  return type == 16 || type == 19;
}


bool AiAct__isAttackType(int32_t type, const MethodInfo *method)
{
  return ((unsigned int)type < 0x1F) & (0x400FC004u >> type);
}


bool AiAct__isSkillType(int32_t type, const MethodInfo *method)
{
  return ((unsigned int)type < 0x2A) & (0x30000003800uLL >> type);
}


bool AiAct__isThinkEnd(int32_t intype, const MethodInfo *method)
{
  return intype != 99;
}


bool AiAct__isThinkEnd_47235196(int32_t type, const MethodInfo *method)
{
  return type != 99;
}