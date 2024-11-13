void __fastcall ClassRelationMaster___ctor(ClassRelationMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F96 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__, method, v2);
    byte_4B15F96 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    109,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassRelationEntity_o *__fastcall ClassRelationMaster__GetEntity(
        ClassRelationMaster_o *this,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15F94 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__,
      *(_QWORD *)&atkClass,
      *(_QWORD *)&defClass);
    byte_4B15F94 = 1;
  }
  PK = (Il2CppObject *)ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&defClass);
  return (ClassRelationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__);
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

  if ( (byte_4B15F95 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&atkClass);
    byte_4B15F95 = 1;
  }
  PK = (Il2CppObject *)ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&atkClass);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ClassRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v10; // x4
  float v11; // s8
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15F97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ClassRelationMaster___, *(_QWORD *)&def, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B15F97 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v11 = 1.0;
  if ( MasterData_object )
  {
    Instance = (Il2CppObject *)ClassRelationMaster__TryGetEntity(
                                 (ClassRelationMaster_o *)MasterData_object,
                                 &entity,
                                 atk,
                                 def,
                                 v10);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (float)entity->fields.attackRate / 1000.0;
LABEL_9:
      sub_1BCAA3C(Instance, v8);
    }
  }
  return v11;
}