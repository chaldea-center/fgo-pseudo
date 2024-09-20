void __fastcall ClassBoardBaseEntity___ctor(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AEDD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5AEDD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4A5AEDC & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5AEDC = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
}