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


void __fastcall ClassBoardCondData___ctor_27230432(ClassBoardCondData_o this, int32_t lockId, const MethodInfo *method)
{
  int32_t Num; // w20
  _DWORD *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  int seriazlier_high; // w8

  Num = this.fields.Num;
  v4 = *(_DWORD **)&this.fields.Type;
  if ( (byte_42E9BFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardLockMaster___, this.fields.Num, lockId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v8, v9, v10);
    byte_42E9BFB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          Num,
                                                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
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
  __int64 v2; // x3
  int32_t *v3; // x19
  int32_t v4; // w20
  int32_t v5; // w21
  int64_t v6; // x19

  v3 = *(int32_t **)&this.fields.Type;
  if ( (byte_42E9BFC & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, this.fields.Num, (_DWORD)method, v2);
    byte_42E9BFC = 1;
  }
  v5 = *v3;
  v4 = v3[1];
  v6 = v3[2];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(v5, v4, v6, 0, 0LL);
}


bool __fastcall ClassBoardCondData__get_HasCond(ClassBoardCondData_o this, const MethodInfo *method)
{
  return *(_DWORD *)(*(_QWORD *)&this.fields.Type + 4LL) != 0;
}