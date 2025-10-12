void SvtClassAttri___cctor(const MethodInfo *method)
{
  if ( (byte_4C368E6 & 1) == 0 )
  {
    sub_1C32C20(&SvtClassAttri_TypeInfo);
    byte_4C368E6 = 1;
  }
  SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY = 5;
}


void SvtClassAttri___ctor(SvtClassAttri_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SvtClassAttri__IsExtraClass(int32_t classId, const MethodInfo *method)
{
  return (unsigned int)(classId - 1) > 6;
}


bool SvtClassAttri__IsExtraClass1(int32_t classId, const MethodInfo *method)
{
  return (classId | 2) == 0xB || classId == 23;
}


bool SvtClassAttri__IsExtraClass2(int32_t classId, const MethodInfo *method)
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


int32_t SvtClassAttri__getClassId(int32_t type, const MethodInfo *method)
{
  return type;
}


float SvtClassAttri__getMagnification(int32_t attack, int32_t defense, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  ServantClassMaster_o *v6; // x21
  int32_t RelationId; // w20
  int32_t v8; // w1

  if ( (byte_4C368E5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C368E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  v6 = (ServantClassMaster_o *)Instance;
  RelationId = ServantClassMaster__getRelationId((ServantClassMaster_o *)Instance, attack, 0);
  v8 = ServantClassMaster__getRelationId(v6, defense, 0);
  return ClassRelationMaster__getRate(RelationId, v8, 0);
}