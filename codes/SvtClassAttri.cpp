void __fastcall SvtClassAttri___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BFC72D & 1) == 0 )
  {
    sub_1C2E12C(&SvtClassAttri_TypeInfo, v1);
    byte_4BFC72D = 1;
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ServantClassMaster_o *v8; // x21
  int32_t RelationId; // w20
  int32_t v10; // w1

  if ( (byte_4BFC72C & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&defense);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BFC72C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1C2E388(Instance, v7);
  }
  v8 = (ServantClassMaster_o *)Instance;
  RelationId = ServantClassMaster__getRelationId((ServantClassMaster_o *)Instance, attack, 0LL);
  v10 = ServantClassMaster__getRelationId(v8, defense, 0LL);
  return ClassRelationMaster__getRate(RelationId, v10, 0LL);
}