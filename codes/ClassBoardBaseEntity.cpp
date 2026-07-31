void ClassBoardBaseEntity___ctor(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59383D2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59383D2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t ClassBoardBaseEntity__CreatePrimaryKey(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t ClassBoardBaseEntity__GetQuestOpenDialogCondSignNum(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59383CF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24006/*"questOpenDialogCondSignNum"*/);
    byte_59383CF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24006/*"questOpenDialogCondSignNum"*/, 0, 0);
}


int32_t ClassBoardBaseEntity__GetQuestOpenDialogTransitionQuestId(
        ClassBoardBaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_59383D0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24007/*"questOpenDialogTransitionQuestId"*/);
    byte_59383D0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24007/*"questOpenDialogTransitionQuestId"*/, 0, 0);
}


bool ClassBoardBaseEntity__IsDispBeastText(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  __int64 v4; // x1
  int32_t v5; // w19

  if ( (byte_59383D1 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&StringLiteral_23381/*"notDispBeastTextCondQuestId"*/);
    byte_59383D1 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23381/*"notDispBeastTextCondQuestId"*/, 0, 0);
  if ( IntValue < 1 )
  {
    return 0;
  }
  else
  {
    v5 = IntValue;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
    return !CondType__IsQuestClear_47254560(v5, -1, 0, 0);
  }
}


bool ClassBoardBaseEntity__IsGrand(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.parentClassBoardBaseId > 0;
}


bool ClassBoardBaseEntity__IsOpen(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condTargetId; // w21
  int64_t condNum; // x19

  if ( (byte_59383CE & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_59383CE = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}