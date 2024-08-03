void __fastcall ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC1AC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__, method);
    byte_49FC1AC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    428,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardLockMaster__IsOpen(ClassBoardLockMaster_o *this, int32_t releaseId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  int32_t klass_high; // w19
  int32_t klass; // w21
  int64_t monitor_low; // x20

  if ( (byte_49FC1AB & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&releaseId);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v6);
    byte_49FC1AB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          releaseId,
                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Master_object);
  }
  klass_high = HIDWORD(Master_object[3].klass);
  if ( !klass_high )
    return 1;
  klass = (int32_t)Master_object[3].klass;
  monitor_low = SLODWORD(Master_object[3].monitor);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL);
}