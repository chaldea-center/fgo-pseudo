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
void __fastcall ClassBoardCondData___ctor_46172264(ClassBoardCondData_o this, int32_t lockId, const MethodInfo *method)
{
  int32_t Num; // w20
  _DWORD *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int klass_high; // w8
  int klass; // w9
  int monitor; // w10

  Num = this.fields.Num;
  v4 = *(_DWORD **)&this.fields.Type;
  if ( (byte_4C25693 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardLockMaster___, *(_QWORD *)&this.fields.Num);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v6);
    byte_4C25693 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          Num,
                          (const MethodInfo_329AE48 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C3B9C0(Master_object, v8);
  }
  klass_high = HIDWORD(Master_object[3].klass);
  if ( klass_high )
  {
    klass = (int)Master_object[3].klass;
    monitor = (int)Master_object[3].monitor;
  }
  else
  {
    klass = 0;
    monitor = 0;
  }
  *v4 = klass;
  v4[1] = klass_high;
  v4[2] = monitor;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardCondData__IsOpen(ClassBoardCondData_o this, const MethodInfo *method)
{
  int32_t *v2; // x19
  int32_t v3; // w20
  int32_t v4; // w21
  int64_t v5; // x19

  v2 = *(int32_t **)&this.fields.Type;
  if ( (byte_4C25694 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&this.fields.Num);
    byte_4C25694 = 1;
  }
  v4 = *v2;
  v3 = v2[1];
  v5 = v2[2];
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(v4, v3, v5, 0, 0LL, 0LL);
}


bool __fastcall ClassBoardCondData__get_HasCond(ClassBoardCondData_o this, const MethodInfo *method)
{
  return *(_DWORD *)(*(_QWORD *)&this.fields.Type + 4LL) != 0;
}