void __fastcall WarBoardActionPointClassMaster___ctor(WarBoardActionPointClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2EE7D & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string___ctor__,
      method);
    byte_4A2EE7D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    338,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointClassEntity_o *__fastcall WarBoardActionPointClassMaster__GetEntity(
        WarBoardActionPointClassMaster_o *this,
        int32_t id,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A2EE7E & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4A2EE7E = 1;
  }
  PK = (Il2CppObject *)WarBoardActionPointClassEntity__CreatePK(id, classId, *(const MethodInfo **)&classId);
  return (WarBoardActionPointClassEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_30FFAD8 *)Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string__GetEntity__);
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


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointClassEntity_o *__fastcall WarBoardActionPointClassMaster__GetEntitySafe(
        WarBoardActionPointClassMaster_o *this,
        int32_t id,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  WarBoardActionPointClassEntity_o *result; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4A2EE7F & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, *(_QWORD *)&id);
    sub_1B761C0(&DataManager_TypeInfo, v6);
    byte_4A2EE7F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  if ( !Master_object )
    goto LABEL_11;
  result = WarBoardActionPointClassMaster__GetEntity((WarBoardActionPointClassMaster_o *)Master_object, id, classId, v9);
  if ( result )
    return result;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  if ( !Master_object )
LABEL_11:
    sub_1B7641C(Master_object, v8);
  return WarBoardActionPointClassMaster__GetEntity((WarBoardActionPointClassMaster_o *)Master_object, id, -1, v11);
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