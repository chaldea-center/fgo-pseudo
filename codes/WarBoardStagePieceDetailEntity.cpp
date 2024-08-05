void __fastcall WarBoardStagePieceDetailEntity___ctor(WarBoardStagePieceDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF51B & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF51B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0LL;
  *(_QWORD *)&this->fields.groupId = 0LL;
}


void __fastcall WarBoardStagePieceDetailEntity___ctor_40033072(
        WarBoardStagePieceDetailEntity_o *this,
        WarBoardStagePieceDetailEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_49FF51C & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_49FF51C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B64ACC(v5, v6);
  *(_OWORD *)&this->fields.stageId = *(_OWORD *)&cSrc->fields.stageId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStagePieceDetailEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  if ( (byte_49FF51A & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&forceId);
    byte_49FF51A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           stageId,
           forceId,
           groupId,
           pieceIndex,
           (const MethodInfo_2E3A23C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall WarBoardStagePieceDetailEntity__CreatePrimaryKey(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return WarBoardStagePieceDetailEntity__CreatePK(
           this->fields.stageId,
           this->fields.forceId,
           this->fields.groupId,
           this->fields.pieceIndex,
           v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetDeadEffectType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF524 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18438/*"deadEffect"*/, method);
    byte_49FF524 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18438/*"deadEffect"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetDispLimitCnt(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF527 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18571/*"dispLimitCount"*/, method);
    byte_49FF527 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18571/*"dispLimitCount"*/, -1, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetImageSvtId(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF528 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_20161/*"imageSvtId"*/, method);
    byte_49FF528 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20161/*"imageSvtId"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetMoveAfterAttackType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF525 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22005/*"noMoveAfterAttack"*/, method);
    byte_49FF525 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22005/*"noMoveAfterAttack"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetMovedAfterDefendType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF526 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22008/*"noMovedAfterDefend"*/, method);
    byte_49FF526 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22008/*"noMovedAfterDefend"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteAttackCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF522 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22289/*"overwriteAttackCost"*/, method);
    byte_49FF522 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22289/*"overwriteAttackCost"*/, -1, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteBaseActionPoint(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF521 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22291/*"overwriteBaseActionPoint"*/, method);
    byte_49FF521 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22291/*"overwriteBaseActionPoint"*/, -1, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteMoveCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF523 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22311/*"overwriteMoveCost"*/, method);
    byte_49FF523 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22311/*"overwriteMoveCost"*/, -1, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteValue(
        WarBoardStagePieceDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, key, -1, v3);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteWallAttackCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF520 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22330/*"overwriteWallAttackCost"*/, method);
    byte_49FF520 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22330/*"overwriteWallAttackCost"*/, -1, v2);
}


bool __fastcall WarBoardStagePieceDetailEntity__HasFlag(
        WarBoardStagePieceDetailEntity_o *this,
        int32_t targetFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool __fastcall WarBoardStagePieceDetailEntity__IsNotIncludeWin(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.flag & 1;
}


int32_t __fastcall WarBoardStagePieceDetailEntity__getRoleType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FF51F & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_24532/*"warBoardSvtDetail"*/, method);
    byte_49FF51F = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24532/*"warBoardSvtDetail"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardStagePieceDetailEntity__getScriptIntParam(
        WarBoardStagePieceDetailEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  WarBoardStagePieceDetailEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  v4 = defVal;
  if ( (byte_49FF51D & 1) == 0 )
  {
    sub_1B64870(&long_TypeInfo, key);
    byte_49FF51D = 1;
  }
  ScriptObj = WarBoardStagePieceDetailEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B64D8C(ScriptObj);
  return (unsigned int)WarBoardStagePieceDetailEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall WarBoardStagePieceDetailEntity__getScriptObj(
        WarBoardStagePieceDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF51E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FF51E = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317CEE0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}