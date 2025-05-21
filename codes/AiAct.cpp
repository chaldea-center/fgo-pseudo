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
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 17) > 0xD )
    LOBYTE(v2) = 0;
  else
    return (0x2007u >> (type - 17)) & 1;
  return v2;
}


bool __fastcall AiAct__isAttackQuick(int32_t type, const MethodInfo *method)
{
  return type == 16 || type == 19;
}


bool __fastcall AiAct__isAttackType(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 2) > 0x1C )
    LOBYTE(v2) = 0;
  else
    return (0x1003F001u >> (type - 2)) & 1;
  return v2;
}


bool __fastcall AiAct__isSkillType(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 11) > 0x1E )
    LOBYTE(v2) = 0;
  else
    return (0x60000007u >> (type - 11)) & 1;
  return v2;
}


bool __fastcall AiAct__isThinkEnd(int32_t intype, const MethodInfo *method)
{
  return intype != 99;
}


bool __fastcall AiAct__isThinkEnd_39307688(int32_t type, const MethodInfo *method)
{
  return type != 99;
}