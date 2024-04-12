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


void __fastcall ClassBoardCondData___ctor_31633240(ClassBoardCondData_o this, int32_t lockId, const MethodInfo *method)
{
  int32_t Num; // w20
  _DWORD *v4; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  int seriazlier_high; // w8

  Num = this.fields.Num;
  v4 = *(_DWORD **)&this.fields.Type;
  if ( (byte_42B3819 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    byte_42B3819 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          Num,
                                                                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  }
  seriazlier_high = HIDWORD(Master_WarQuestSelectionMaster->fields.seriazlier);
  if ( seriazlier_high )
  {
    *v4 = Master_WarQuestSelectionMaster->fields.seriazlier;
    v4[1] = HIDWORD(Master_WarQuestSelectionMaster->fields.seriazlier);
    seriazlier_high = (int)Master_WarQuestSelectionMaster->fields.sb;
  }
  else
  {
    *(_QWORD *)v4 = 0LL;
  }
  v4[2] = seriazlier_high;
}


bool __fastcall ClassBoardCondData__IsOpen(ClassBoardCondData_o this, const MethodInfo *method)
{
  int32_t *v2; // x19
  int32_t v3; // w20
  int32_t v4; // w21
  int64_t v5; // x19

  v2 = *(int32_t **)&this.fields.Type;
  if ( (byte_42B381A & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42B381A = 1;
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