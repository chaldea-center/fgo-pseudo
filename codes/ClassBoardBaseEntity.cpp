void __fastcall ClassBoardBaseEntity___ctor(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01D79 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, method);
    byte_4B01D79 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ClassBoardBaseEntity__CreatePrimaryKey(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall ClassBoardBaseEntity__GetQuestOpenDialogCondSignNum(
        ClassBoardBaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B01D77 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22637/*"questOpenDialogCondSignNum"*/, method);
    byte_4B01D77 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22637/*"questOpenDialogCondSignNum"*/, 0, 0LL);
}


int32_t __fastcall ClassBoardBaseEntity__GetQuestOpenDialogTransitionQuestId(
        ClassBoardBaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B01D78 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22638/*"questOpenDialogTransitionQuestId"*/, method);
    byte_4B01D78 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22638/*"questOpenDialogTransitionQuestId"*/, 0, 0LL);
}


bool __fastcall ClassBoardBaseEntity__IsGrand(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.parentClassBoardBaseId > 0;
}


bool __fastcall ClassBoardBaseEntity__IsOpen(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4B01D76 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, method);
    byte_4B01D76 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
}