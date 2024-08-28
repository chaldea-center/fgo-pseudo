bool __fastcall SvtType__IsAll(int32_t classId, const MethodInfo *method)
{
  return classId == 1001;
}


bool __fastcall SvtType__IsCombineMaterial(int32_t type, const MethodInfo *method)
{
  return type == 3;
}


bool __fastcall SvtType__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool __fastcall SvtType__IsEnemy(int32_t type, const MethodInfo *method)
{
  return type == 4;
}


bool __fastcall SvtType__IsEnemyCollection(int32_t type, const MethodInfo *method)
{
  return type == 5;
}


bool __fastcall SvtType__IsEnemyCollectionDetail(int32_t type, const MethodInfo *method)
{
  return type == 9;
}


bool __fastcall SvtType__IsEnemy_37463376(int32_t type, const MethodInfo *method)
{
  return type == 4;
}


bool __fastcall SvtType__IsExpUp(int32_t type, const MethodInfo *method)
{
  return type == 3 || type == 8;
}


bool __fastcall SvtType__IsKeepServant(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 0xB )
    LOBYTE(v2) = 0;
  else
    return (0x847u >> (type - 1)) & 1;
  return v2;
}


bool __fastcall SvtType__IsKeepServantEquip(int32_t type, const MethodInfo *method)
{
  return type == 6 || type == 8;
}


bool __fastcall SvtType__IsLock(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 7 )
    LOBYTE(v2) = 0;
  else
    return (0xE7u >> (type - 1)) & 1;
  return v2;
}


bool __fastcall SvtType__IsOrganization(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 1) < 2;
}


bool __fastcall SvtType__IsServant(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 4 )
    LOBYTE(v2) = 0;
  else
    return (0x1Bu >> (type - 1)) & 1;
  return v2;
}


bool __fastcall SvtType__IsServantCollection(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 8 )
    LOBYTE(v2) = 0;
  else
    return (0x113u >> (type - 1)) & 1;
  return v2;
}


bool __fastcall SvtType__IsServantEquip(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall SvtType__IsStatusUp(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall SvtType__IsSvtEqMaterial(int32_t type, const MethodInfo *method)
{
  return type == 8;
}


bool __fastcall SvtType__IsSvtMaterialTd(int32_t type, const MethodInfo *method)
{
  return type == 12;
}