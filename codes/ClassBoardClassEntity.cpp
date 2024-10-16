void __fastcall ClassBoardClassEntity___ctor(ClassBoardClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5AD2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5AD2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardClassEntity__CreatePK(
        int32_t classBoardBaseId,
        int32_t classId,
        const MethodInfo *method)
{
  if ( (byte_4AB5AD1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&classId);
    byte_4AB5AD1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           classId,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ClassBoardClassEntity__CreatePrimaryKey(
        ClassBoardClassEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardClassEntity__CreatePK(this->fields.classBoardBaseId, this->fields.classId, v2);
}


bool __fastcall ClassBoardClassEntity__IsOpen(ClassBoardClassEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4AB5AD0 & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, method);
    byte_4AB5AD0 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
}