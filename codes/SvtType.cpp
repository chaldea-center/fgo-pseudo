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


bool __fastcall SvtType__IsEnemy_31552800(int32_t type, const MethodInfo *method)
{
  return type == 4;
}


bool __fastcall SvtType__IsExpUp(int32_t type, const MethodInfo *method)
{
  return type == 3 || type == 8;
}


bool __fastcall SvtType__IsKeepServant(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 1) < 3 || type == 7 || type == 12;
}


bool __fastcall SvtType__IsKeepServantEquip(int32_t type, const MethodInfo *method)
{
  return type == 6 || type == 8;
}


bool __fastcall SvtType__IsLock(int32_t type, const MethodInfo *method)
{
  return (unsigned int)type <= 6 && ((1 << type) & 0x4E) != 0 || (unsigned int)(type - 7) < 2;
}


bool __fastcall SvtType__IsOrganization(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 1) < 2;
}


bool __fastcall SvtType__IsServant(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 1) < 2 || (type | 1) == 5;
}


bool __fastcall SvtType__IsServantCollection(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 1) < 2 || type == 5 || type == 9;
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