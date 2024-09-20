void __fastcall WarBoardActionPointClassMaster___ctor(WarBoardActionPointClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C0AD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string___ctor__);
    byte_4A5C0AD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    338,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointClassEntity_o *__fastcall WarBoardActionPointClassMaster__GetEntity(
        WarBoardActionPointClassMaster_o *this,
        int32_t id,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C0AE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string__GetEntity__);
    byte_4A5C0AE = 1;
  }
  PK = (Il2CppObject *)WarBoardActionPointClassEntity__CreatePK(id, classId, *(const MethodInfo **)&classId);
  return (WarBoardActionPointClassEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_311DC8C *)Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string__GetEntity__);
}


WarBoardActionPointClassEntity_o *__fastcall WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
        WarBoardActionPointClassMaster_o *this,
        WarBoardActionPointEntity_o *actionPointEntity,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t actionPointClassId; // w1

  if ( actionPointEntity && (actionPointClassId = actionPointEntity->fields.actionPointClassId) != 0 )
    return WarBoardActionPointClassMaster__GetEntitySafe(this, actionPointClassId, classId, method);
  else
    return 0LL;
}


WarBoardActionPointClassEntity_o *__fastcall WarBoardActionPointClassMaster__GetEntitySafe(
        WarBoardActionPointClassMaster_o *this,
        int32_t id,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  WarBoardActionPointClassEntity_o *result; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4A5C0AF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5C0AF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  if ( !Master_object )
    goto LABEL_11;
  result = WarBoardActionPointClassMaster__GetEntity((WarBoardActionPointClassMaster_o *)Master_object, id, classId, v8);
  if ( result )
    return result;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  if ( !Master_object )
LABEL_11:
    sub_1B8880C(Master_object, v7);
  return WarBoardActionPointClassMaster__GetEntity((WarBoardActionPointClassMaster_o *)Master_object, id, -1, v10);
}


WarBoardActionPointClassEntity_o *__fastcall WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
        WarBoardActionPointClassMaster_o *this,
        WarBoardActionPointEntity_o *actionPointEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t actionPointClassId; // w1

  if ( actionPointEntity && (actionPointClassId = actionPointEntity->fields.actionPointClassId) != 0 )
    return WarBoardActionPointClassMaster__GetEntitySafe(this, actionPointClassId, 0, v3);
  else
    return 0LL;
}