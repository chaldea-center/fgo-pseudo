void __fastcall ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4465 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__, method);
    byte_4BB4465 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    432,
    (const MethodInfo_3236300 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardLockMaster__IsOpen(ClassBoardLockMaster_o *this, int32_t releaseId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t klass_high; // w19
  int32_t klass; // w21
  int64_t monitor_low; // x20

  if ( (byte_4BB4464 & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, *(_QWORD *)&releaseId);
    sub_1C13D24(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v4);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v6);
    byte_4BB4464 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          releaseId,
                          (const MethodInfo_3238624 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C13F80(Master_object, v8);
  }
  klass_high = HIDWORD(Master_object[3].klass);
  if ( !klass_high )
    return 1;
  klass = (int32_t)Master_object[3].klass;
  monitor_low = SLODWORD(Master_object[3].monitor);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL, 0LL);
}