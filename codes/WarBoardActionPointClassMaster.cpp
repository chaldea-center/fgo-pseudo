void __fastcall WarBoardActionPointClassMaster___ctor(WarBoardActionPointClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41867A1 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string___ctor__,
      method);
    byte_41867A1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    336,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointClassEntity_o *__fastcall WarBoardActionPointClassMaster__GetEntity(
        WarBoardActionPointClassMaster_o *this,
        int32_t id,
        int32_t classId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41867A2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_41867A2 = 1;
  }
  PK = WarBoardActionPointClassEntity__CreatePK(id, classId, *(const MethodInfo **)&classId);
  return (WarBoardActionPointClassEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardActionPointClassMaster__WarBoardActionPointClassEntity__string__GetEntity__);
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
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  WarBoardActionPointClassEntity_o *result; // x0
  const MethodInfo *v11; // x3

  if ( (byte_41867A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, *(_QWORD *)&id);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    byte_41867A3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_13;
  result = WarBoardActionPointClassMaster__GetEntity(Master_WarQuestSelectionMaster, id, classId, v9);
  if ( result )
    return result;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_13:
    sub_B2C434(Master_WarQuestSelectionMaster, v8);
  return WarBoardActionPointClassMaster__GetEntity(Master_WarQuestSelectionMaster, id, -1, v11);
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