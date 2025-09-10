bool Follower__IsAnySupport(int32_t type, const MethodInfo *method)
{
  return type != 0;
}


bool Follower__IsNotNpc(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)type > 4 )
    LOBYTE(v2) = 1;
  else
    return (6u >> type) & 1;
  return v2;
}


bool Follower__IsNotUsedTreasure(int32_t type, const MethodInfo *method)
{
  return type == 2 || type == 4;
}


bool Follower__IsNpc(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 3) < 2;
}


int32_t Follower__getInt(int32_t type, const MethodInfo *method)
{
  return type;
}


int32_t Follower__getType(int32_t type, const MethodInfo *method)
{
  return type;
}


bool Follower__isNpc(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 3) < 2;
}


bool Follower__isUseTreasure(int32_t type, const MethodInfo *method)
{
  return type != 4;
}