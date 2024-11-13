void __fastcall SvtClassAttri___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B151F9 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v1, v2);
    byte_4B151F9 = 1;
  }
  SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY = 5;
}


void __fastcall SvtClassAttri___ctor(SvtClassAttri_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SvtClassAttri__IsExtraClass(int32_t classId, const MethodInfo *method)
{
  return (unsigned int)(classId - 1) > 6;
}


bool __fastcall SvtClassAttri__IsExtraClass1(int32_t classId, const MethodInfo *method)
{
  return (classId | 2) == 11 || classId == 23;
}


bool __fastcall SvtClassAttri__IsExtraClass2(int32_t classId, const MethodInfo *method)
{
  bool result; // w0

  if ( classId > 25 )
  {
    result = 1;
    if ( classId == 28 || classId == 33 )
      return result;
    return 0;
  }
  result = 1;
  if ( classId != 10 && classId != 25 )
    return 0;
  return result;
}


int32_t __fastcall SvtClassAttri__getClassId(int32_t type, const MethodInfo *method)
{
  return type;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall SvtClassAttri__getMagnification(int32_t attack, int32_t defense, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  ServantClassMaster_o *v9; // x21
  int32_t RelationId; // w20
  int32_t v11; // w1

  if ( (byte_4B151F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&defense, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B151F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  v9 = (ServantClassMaster_o *)Instance;
  RelationId = ServantClassMaster__getRelationId((ServantClassMaster_o *)Instance, attack, 0LL);
  v11 = ServantClassMaster__getRelationId(v9, defense, 0LL);
  return ClassRelationMaster__getRate(RelationId, v11, 0LL);
}