bool __fastcall Follower__IsAnySupport(int32_t type, const MethodInfo *method)
{
  return type != 0;
}


bool __fastcall Follower__IsNotNpc(int32_t type, const MethodInfo *method)
{
  if ( type )
    LOBYTE(type) = (unsigned int)(type - 3) > 1;
  return type;
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