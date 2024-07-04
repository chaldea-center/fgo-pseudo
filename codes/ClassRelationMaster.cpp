void __fastcall ClassRelationMaster___ctor(ClassRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E25B8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__, method);
    byte_48E25B8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    108,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassRelationEntity_o *__fastcall ClassRelationMaster__GetEntity(
        ClassRelationMaster_o *this,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_48E25B6 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__,
      *(_QWORD *)&atkClass);
    byte_48E25B6 = 1;
  }
  PK = (Il2CppObject *)ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&defClass);
  return (ClassRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassRelationMaster__TryGetEntity(
        ClassRelationMaster_o *this,
        ClassRelationEntity_o **entity,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_48E25B7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__, entity);
    byte_48E25B7 = 1;
  }
  PK = (Il2CppObject *)ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&atkClass);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ClassRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v9; // x4
  float v10; // s8
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E25B9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ClassRelationMaster___, *(_QWORD *)&def);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48E25B9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v10 = 1.0;
  if ( MasterData_object )
  {
    Instance = (Il2CppObject *)ClassRelationMaster__TryGetEntity(
                                 (ClassRelationMaster_o *)MasterData_object,
                                 &entity,
                                 atk,
                                 def,
                                 v9);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (float)entity->fields.attackRate / 1000.0;
LABEL_9:
      sub_1B00F28(Instance, v7);
    }
  }
  return v10;
}