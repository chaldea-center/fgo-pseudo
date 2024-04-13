void __fastcall ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA81A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA81A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    427,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}


bool __fastcall ClassBoardLockMaster__IsOpen(ClassBoardLockMaster_o *this, int32_t releaseId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  int32_t seriazlier_high; // w19
  int32_t seriazlier; // w21
  int64_t sb_low; // x20

  if ( (byte_42EA819 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, releaseId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v11, v12, v13);
    byte_42EA819 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          releaseId,
                                                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v15);
  }
  seriazlier_high = HIDWORD(Master_WarQuestSelectionMaster->fields.seriazlier);
  if ( !seriazlier_high )
    return 1;
  seriazlier = (int32_t)Master_WarQuestSelectionMaster->fields.seriazlier;
  sb_low = SLODWORD(Master_WarQuestSelectionMaster->fields.sb);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(seriazlier, seriazlier_high, sb_low, 0, 0LL);
}