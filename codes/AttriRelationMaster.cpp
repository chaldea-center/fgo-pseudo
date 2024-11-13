void __fastcall AttriRelationMaster___ctor(AttriRelationMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E37 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__, method, v2);
    byte_4B15E37 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    108,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AttriRelationEntity_o *__fastcall AttriRelationMaster__GetEntity(
        AttriRelationMaster_o *this,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15E35 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__,
      *(_QWORD *)&atkAttri,
      *(_QWORD *)&defAttri);
    byte_4B15E35 = 1;
  }
  PK = (Il2CppObject *)AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&defAttri);
  return (AttriRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__);
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

  if ( (byte_4B15E36 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&atkAttri);
    byte_4B15E36 = 1;
  }
  PK = (Il2CppObject *)AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&atkAttri);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall AttriRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v10; // x3
  float v11; // s8
  AttriRelationEntity_o *Entity; // x0

  if ( (byte_4B15E38 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_AttriRelationMaster___, *(_QWORD *)&def, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B15E38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_AttriRelationMaster___);
  v11 = 1.0;
  if ( MasterData_object )
  {
    Entity = AttriRelationMaster__GetEntity((AttriRelationMaster_o *)MasterData_object, atk, def, v10);
    if ( Entity )
      return (float)Entity->fields.attackRate / 1000.0;
  }
  return v11;
}