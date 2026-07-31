void SvtClassAttri___cctor(const MethodInfo *method)
{
  if ( (byte_593756C & 1) == 0 )
  {
    sub_21FFC50(&SvtClassAttri_TypeInfo);
    byte_593756C = 1;
  }
  *SvtClassAttri_TypeInfo->static_fields = (struct SvtClassAttri_StaticFields)0x500000006LL;
}


void SvtClassAttri___ctor(SvtClassAttri_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SvtClassAttri__IsExtraClass(int32_t classId, const MethodInfo *method)
{
  return (unsigned int)(classId - 8) < 0xFFFFFFF9;
}


bool SvtClassAttri__IsExtraClass1(int32_t classId, const MethodInfo *method)
{
  return ((unsigned int)classId < 0x18) & (0x800A00u >> classId);
}


bool SvtClassAttri__IsExtraClass2(int32_t classId, const MethodInfo *method)
{
  int v2; // w8
  int v3; // w9

  if ( classId <= 25 )
    v2 = 10;
  else
    v2 = 28;
  if ( classId <= 25 )
    v3 = 25;
  else
    v3 = 33;
  return v2 == classId || v3 == classId;
}


int32_t SvtClassAttri__getClassId(int32_t type, const MethodInfo *method)
{
  return type;
}


float SvtClassAttri__getMagnification(int32_t attack, int32_t defense, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ServantClassMaster_o *v7; // x21
  int32_t RelationId; // w20
  int32_t v9; // w1

  if ( (byte_593756B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593756B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  v7 = (ServantClassMaster_o *)Instance;
  RelationId = ServantClassMaster__getRelationId((ServantClassMaster_o *)Instance, attack, 0);
  v9 = ServantClassMaster__getRelationId(v7, defense, 0);
  return ClassRelationMaster__getRate(RelationId, v9, 0);
}