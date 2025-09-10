void ClassRelationMaster___ctor(ClassRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27051 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__);
    byte_4C27051 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    113,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassRelationEntity_o *ClassRelationMaster__GetEntity(
        ClassRelationMaster_o *this,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2704F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__);
    byte_4C2704F = 1;
  }
  PK = (Il2CppObject *)ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&defClass);
  return (ClassRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_338C850 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ClassRelationMaster__TryGetEntity(
        ClassRelationMaster_o *this,
        ClassRelationEntity_o **entity,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27050 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__);
    byte_4C27050 = 1;
  }
  PK = (Il2CppObject *)ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&atkClass);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__);
}


float ClassRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v8; // x4
  float v9; // s8
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C27052 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ClassRelationMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27052 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v9 = 1.0;
  if ( MasterData_object )
  {
    Instance = (Il2CppObject *)ClassRelationMaster__TryGetEntity(
                                 (ClassRelationMaster_o *)MasterData_object,
                                 &entity,
                                 atk,
                                 def,
                                 v8);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (float)entity->fields.attackRate / 1000.0;
LABEL_9:
      sub_1C2D6EC(Instance, v6);
    }
  }
  return v9;
}