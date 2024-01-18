void __fastcall ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189505 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__, method);
    byte_4189505 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    426,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardLockMaster__IsOpen(ClassBoardLockMaster_o *this, int32_t releaseId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  int32_t seriazlier_high; // w19
  int32_t seriazlier; // w21
  int64_t sb_low; // x20

  if ( (byte_4189504 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&releaseId);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v6);
    byte_4189504 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          releaseId,
                                                                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v8);
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