void __fastcall AttriRelationMaster___ctor(AttriRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B667EF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__, method);
    byte_4B667EF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    112,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AttriRelationEntity_o *__fastcall AttriRelationMaster__GetEntity(
        AttriRelationMaster_o *this,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B667ED & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__,
      *(_QWORD *)&atkAttri);
    byte_4B667ED = 1;
  }
  PK = (Il2CppObject *)AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&defAttri);
  return (AttriRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31FDB1C *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AttriRelationMaster__TryGetEntity(
        AttriRelationMaster_o *this,
        AttriRelationEntity_o **entity,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B667EE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__, entity);
    byte_4B667EE = 1;
  }
  PK = (Il2CppObject *)AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&atkAttri);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall AttriRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v9; // x3
  float v10; // s8
  AttriRelationEntity_o *Entity; // x0

  if ( (byte_4B667F0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_AttriRelationMaster___, *(_QWORD *)&def);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B667F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v7);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_AttriRelationMaster___);
  v10 = 1.0;
  if ( MasterData_object )
  {
    Entity = AttriRelationMaster__GetEntity((AttriRelationMaster_o *)MasterData_object, atk, def, v9);
    if ( Entity )
      return (float)Entity->fields.attackRate / 1000.0;
  }
  return v10;
}