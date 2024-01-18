bool __fastcall AiAct__Check(int32_t type, int32_t intype, const MethodInfo *method)
{
  return type == intype;
}


int32_t __fastcall AiAct__getInt(int32_t type, const MethodInfo *method)
{
  return type;
}


int32_t __fastcall AiAct__getType(int32_t intype, const MethodInfo *method)
{
  return intype;
}


bool __fastcall AiAct__isAttackArts(int32_t type, const MethodInfo *method)
{
  return type == 14 || type == 17;
}


bool __fastcall AiAct__isAttackBuster(int32_t type, const MethodInfo *method)
{
  return type == 15 || type == 18;
}


bool __fastcall AiAct__isAttackCritical(int32_t type, const MethodInfo *method)
{
  return type == 17 || type == 30 || (type | 1) == 19;
}


bool __fastcall AiAct__isAttackQuick(int32_t type, const MethodInfo *method)
{
  return type == 16 || type == 19;
}


bool __fastcall AiAct__isAttackType(int32_t type, const MethodInfo *method)
{
  return (unsigned int)type <= 0x1E && ((1 << type) & 0x4003C004) != 0 || (type | 1) == 19;
}


bool __fastcall AiAct__isSkillType(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 11) < 3 || (type | 1) == 41;
}


bool __fastcall AiAct__isThinkEnd(int32_t intype, const MethodInfo *method)
{
  return intype != 99;
}


bool __fastcall AiAct__isThinkEnd_21164284(int32_t type, const MethodInfo *method)
{
  return type != 99;
}