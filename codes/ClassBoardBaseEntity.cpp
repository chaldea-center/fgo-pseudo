void __fastcall ClassBoardBaseEntity___ctor(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C3F9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438C3F9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ClassBoardBaseEntity__CreatePrimaryKey(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall ClassBoardBaseEntity__IsOpen(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_438C3F8 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    byte_438C3F8 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
}