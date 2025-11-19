void ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB603C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
    byte_4CB603C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    434,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}


bool ClassBoardLockMaster__IsOpen(ClassBoardLockMaster_o *this, int32_t releaseId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  int32_t klass_high; // w19
  int32_t klass; // w21
  int64_t monitor_low; // x20

  if ( (byte_4CB603B & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    byte_4CB603B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          releaseId,
                          (const MethodInfo_33F90DC *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0 )
  {
    sub_1C6BC60(Master_object, v5);
  }
  klass_high = HIDWORD(Master_object[3].klass);
  if ( !klass_high )
    return 1;
  klass = (int32_t)Master_object[3].klass;
  monitor_low = SLODWORD(Master_object[3].monitor);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0);
}