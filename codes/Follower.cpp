bool __fastcall Follower__IsAnySupport(int32_t type, const MethodInfo *method)
{
  return type != 0;
}


bool __fastcall Follower__IsNotNpc(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)type > 4 )
    LOBYTE(v2) = 1;
  else
    return (6u >> type) & 1;
  return v2;
}


bool __fastcall Follower__IsNotUsedTreasure(int32_t type, const MethodInfo *method)
{
  return type == 2 || type == 4;
}


bool __fastcall Follower__IsNpc(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 3) < 2;
}


int32_t __fastcall Follower__getInt(int32_t type, const MethodInfo *method)
{
  return type;
}


int32_t __fastcall Follower__getType(int32_t type, const MethodInfo *method)
{
  return type;
}


bool __fastcall Follower__isNpc(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 3) < 2;
}


bool __fastcall Follower__isUseTreasure(int32_t type, const MethodInfo *method)
{
  return type != 4;
}