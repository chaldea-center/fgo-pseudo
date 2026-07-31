void ClassBoardClassEntity___ctor(ClassBoardClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59383D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59383D8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassBoardClassEntity__CreatePK(int32_t classBoardBaseId, int32_t classId, const MethodInfo *method)
{
  if ( (byte_59383D7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59383D7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           classId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ClassBoardClassEntity__CreatePrimaryKey(ClassBoardClassEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardClassEntity__CreatePK(this->fields.classBoardBaseId, this->fields.classId, v2);
}


bool ClassBoardClassEntity__HasFlag(ClassBoardClassEntity_o *this, int64_t flagType, const MethodInfo *method)
{
  return (this->fields.flag & (unsigned __int64)flagType) != 0;
}


bool ClassBoardClassEntity__IsOpen(ClassBoardClassEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condTargetId; // w21
  int64_t condNum; // x19

  if ( (byte_59383D6 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_59383D6 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}