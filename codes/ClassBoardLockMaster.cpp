void __fastcall ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__, method, v2);
    byte_4B15F8A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    428,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardLockMaster__IsOpen(ClassBoardLockMaster_o *this, int32_t releaseId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  int32_t klass_high; // w19
  int32_t klass; // w21
  int64_t monitor_low; // x20

  if ( (byte_4B15F89 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&releaseId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardLockMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v8, v9);
    byte_4B15F89 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&releaseId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          releaseId,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Master_object, v11);
  }
  klass_high = HIDWORD(Master_object[3].klass);
  if ( !klass_high )
    return 1;
  klass = (int32_t)Master_object[3].klass;
  monitor_low = SLODWORD(Master_object[3].monitor);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
  return CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL, 0LL);
}