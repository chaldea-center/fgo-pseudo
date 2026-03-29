void ClassBoardBaseEntity___ctor(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3074E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D3074E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t ClassBoardBaseEntity__CreatePrimaryKey(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t ClassBoardBaseEntity__GetQuestOpenDialogCondSignNum(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3074B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23148/*"questOpenDialogCondSignNum"*/);
    byte_4D3074B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23148/*"questOpenDialogCondSignNum"*/, 0, 0);
}


int32_t ClassBoardBaseEntity__GetQuestOpenDialogTransitionQuestId(
        ClassBoardBaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D3074C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23149/*"questOpenDialogTransitionQuestId"*/);
    byte_4D3074C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23149/*"questOpenDialogTransitionQuestId"*/, 0, 0);
}


bool ClassBoardBaseEntity__IsDispBeastText(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  int32_t v4; // w19

  if ( (byte_4D3074D & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&StringLiteral_22568/*"notDispBeastTextCondQuestId"*/);
    byte_4D3074D = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22568/*"notDispBeastTextCondQuestId"*/, 0, 0);
  if ( IntValue < 1 )
  {
    return 0;
  }
  else
  {
    v4 = IntValue;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_41038904(v4, -1, 0, 0);
  }
}


bool ClassBoardBaseEntity__IsGrand(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.parentClassBoardBaseId > 0;
}


bool ClassBoardBaseEntity__IsOpen(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4D3074A & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    byte_4D3074A = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}