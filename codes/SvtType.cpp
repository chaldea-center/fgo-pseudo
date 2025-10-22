bool SvtType__IsAll(int32_t classId, const MethodInfo *method)
{
  return classId == 1001;
}


bool SvtType__IsCombineMaterial(int32_t type, const MethodInfo *method)
{
  return type == 3;
}


bool SvtType__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool SvtType__IsEnemy(int32_t type, const MethodInfo *method)
{
  return type == 4;
}


bool SvtType__IsEnemyCollection(int32_t type, const MethodInfo *method)
{
  return type == 5;
}


bool SvtType__IsEnemyCollectionDetail(int32_t type, const MethodInfo *method)
{
  return type == 9;
}


bool SvtType__IsEnemy_40501088(int32_t type, const MethodInfo *method)
{
  return type == 4;
}


bool SvtType__IsExpUp(int32_t type, const MethodInfo *method)
{
  return type == 3 || type == 8;
}


bool SvtType__IsKeepServant(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 0xB )
    LOBYTE(v2) = 0;
  else
    return (0x847u >> (type - 1)) & 1;
  return v2;
}


bool SvtType__IsKeepServantEquip(int32_t type, const MethodInfo *method)
{
  return type == 6 || type == 8;
}


bool SvtType__IsLock(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 7 )
    LOBYTE(v2) = 0;
  else
    return (0xE7u >> (type - 1)) & 1;
  return v2;
}


bool SvtType__IsOrganization(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 1) < 2;
}


bool SvtType__IsServant(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 4 )
    LOBYTE(v2) = 0;
  else
    return (0x1Bu >> (type - 1)) & 1;
  return v2;
}


bool SvtType__IsServantCollection(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 8 )
    LOBYTE(v2) = 0;
  else
    return (0x113u >> (type - 1)) & 1;
  return v2;
}


bool SvtType__IsServantEquip(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool SvtType__IsStatusUp(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool SvtType__IsSvtEqMaterial(int32_t type, const MethodInfo *method)
{
  return type == 8;
}


bool SvtType__IsSvtMaterialTd(int32_t type, const MethodInfo *method)
{
  return type == 12;
}