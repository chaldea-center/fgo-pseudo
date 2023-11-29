void __fastcall ClassBoardCondData___ctor(
        ClassBoardCondData_o this,
        int32_t type,
        int32_t targetId,
        int32_t num,
        const MethodInfo *method)
{
  **(_DWORD **)&this.fields.Type = this.fields.Num;
  *(_DWORD *)(*(_QWORD *)&this.fields.Type + 4LL) = type;
  *(_DWORD *)(*(_QWORD *)&this.fields.Type + 8LL) = targetId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardCondData___ctor_26975256(ClassBoardCondData_o this, int32_t lockId, const MethodInfo *method)
{
  int32_t Num; // w20
  int32_t *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t priority; // w8

  Num = this.fields.Num;
  v4 = *(int32_t **)&this.fields.Type;
  if ( (byte_40FAFBE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardLockMaster___, *(_QWORD *)&this.fields.Num);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v6);
    byte_40FAFBE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   Master_WarQuestSelectionMaster,
                   Num,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  priority = Entity->fields.priority;
  if ( priority )
  {
    *v4 = Entity->fields.bannerId;
    v4[1] = Entity->fields.priority;
    priority = Entity->fields.parentWarId;
  }
  else
  {
    *(_QWORD *)v4 = 0LL;
  }
  v4[2] = priority;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCondData__IsOpen(ClassBoardCondData_o this, const MethodInfo *method)
{
  int32_t *v2; // x19
  int32_t v3; // w20
  int32_t v4; // w21
  int64_t v5; // x19

  v2 = *(int32_t **)&this.fields.Type;
  if ( (byte_40FAFBF & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&this.fields.Num);
    byte_40FAFBF = 1;
  }
  v4 = *v2;
  v3 = v2[1];
  v5 = v2[2];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(v4, v3, v5, 0, 0LL);
}


bool __fastcall ClassBoardCondData__get_HasCond(ClassBoardCondData_o this, const MethodInfo *method)
{
  return *(_DWORD *)(*(_QWORD *)&this.fields.Type + 4LL) != 0;
}