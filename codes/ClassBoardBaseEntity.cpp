void ClassBoardBaseEntity___ctor(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27023 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27023 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t ClassBoardBaseEntity__CreatePrimaryKey(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t ClassBoardBaseEntity__GetQuestOpenDialogCondSignNum(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27020 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22842/*"questOpenDialogCondSignNum"*/);
    byte_4C27020 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22842/*"questOpenDialogCondSignNum"*/, 0, 0);
}


int32_t ClassBoardBaseEntity__GetQuestOpenDialogTransitionQuestId(
        ClassBoardBaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C27021 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22843/*"questOpenDialogTransitionQuestId"*/);
    byte_4C27021 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22843/*"questOpenDialogTransitionQuestId"*/, 0, 0);
}


bool ClassBoardBaseEntity__IsDispBeastText(ClassBoardBaseEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  int32_t v4; // w19

  if ( (byte_4C27022 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&StringLiteral_22279/*"notDispBeastTextCondQuestId"*/);
    byte_4C27022 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22279/*"notDispBeastTextCondQuestId"*/, 0, 0);
  if ( IntValue < 1 )
  {
    return 0;
  }
  else
  {
    v4 = IntValue;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_40102980(v4, -1, 0, 0);
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

  if ( (byte_4C2701F & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    byte_4C2701F = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}