void __fastcall ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D3CC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
    byte_438D3CC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    427,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}


bool __fastcall ClassBoardLockMaster__IsOpen(ClassBoardLockMaster_o *this, int32_t releaseId, const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  int32_t seriazlier_high; // w19
  int32_t seriazlier; // w21
  int64_t sb_low; // x20

  if ( (byte_438D3CB & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    byte_438D3CB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          releaseId,
                                                                                          (const MethodInfo_21FB894 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v5);
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