void AttriRelationMaster___ctor(AttriRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C26ECF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__);
    byte_4C26ECF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    112,
    (const MethodInfo_338A52C *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AttriRelationEntity_o *AttriRelationMaster__GetEntity(
        AttriRelationMaster_o *this,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C26ECD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__);
    byte_4C26ECD = 1;
  }
  PK = (Il2CppObject *)AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&defAttri);
  return (AttriRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_338C850 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool AttriRelationMaster__TryGetEntity(
        AttriRelationMaster_o *this,
        AttriRelationEntity_o **entity,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C26ECE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__);
    byte_4C26ECE = 1;
  }
  PK = (Il2CppObject *)AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&atkAttri);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__);
}


float AttriRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v8; // x3
  float v9; // s8
  AttriRelationEntity_o *Entity; // x0

  if ( (byte_4C26ED0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_AttriRelationMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C26ED0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_AttriRelationMaster___);
  v9 = 1.0;
  if ( MasterData_object )
  {
    Entity = AttriRelationMaster__GetEntity((AttriRelationMaster_o *)MasterData_object, atk, def, v8);
    if ( Entity )
      return (float)Entity->fields.attackRate / 1000.0;
  }
  return v9;
}