void __fastcall SvtClassAttri___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421A057 & 1) == 0 )
  {
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v1);
    byte_421A057 = 1;
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

  if ( classId <= 25 )
  {
    result = 1;
    if ( classId != 10 && classId != 25 )
      return 0;
  }
  else
  {
    result = 1;
    if ( classId != 28 && classId != 33 )
      return 0;
  }
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
  DataManager_o *Instance; // x0
  ServantClassMaster_o *v7; // x21
  int32_t RelationId; // w20
  int32_t v9; // w1

  if ( (byte_421A056 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&defense);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A056 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  v7 = (ServantClassMaster_o *)Instance;
  RelationId = ServantClassMaster__getRelationId((ServantClassMaster_o *)Instance, attack, 0LL);
  v9 = ServantClassMaster__getRelationId(v7, defense, 0LL);
  return ClassRelationMaster__getRate(RelationId, v9, 0LL);
}