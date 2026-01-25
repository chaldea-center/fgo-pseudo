void WarBoardStagePieceDetailEntity___ctor(WarBoardStagePieceDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF867 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF867 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0;
  *(_QWORD *)&this->fields.groupId = 0;
}


System_String_o *WarBoardStagePieceDetailEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  if ( (byte_4CEF866 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4CEF866 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           stageId,
           forceId,
           groupId,
           pieceIndex,
           (const MethodInfo_316EECC *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *WarBoardStagePieceDetailEntity__CreatePrimaryKey(
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


int32_t WarBoardStagePieceDetailEntity__GetDeadEffectType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF86F & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18616/*"deadEffect"*/);
    byte_4CEF86F = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18616/*"deadEffect"*/, 0, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetDispLimitCnt(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF872 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18758/*"dispLimitCount"*/);
    byte_4CEF872 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18758/*"dispLimitCount"*/, -1, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetImageSvtId(WarBoardStagePieceDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF873 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20459/*"imageSvtId"*/);
    byte_4CEF873 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20459/*"imageSvtId"*/, 0, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetMoveAfterAttackType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF870 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22450/*"noMoveAfterAttack"*/);
    byte_4CEF870 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22450/*"noMoveAfterAttack"*/, 0, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetMovedAfterDefendType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF871 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22453/*"noMovedAfterDefend"*/);
    byte_4CEF871 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22453/*"noMovedAfterDefend"*/, 0, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetOverwriteAttackCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF86D & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22740/*"overwriteAttackCost"*/);
    byte_4CEF86D = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22740/*"overwriteAttackCost"*/, -1, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetOverwriteBaseActionPoint(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF86C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22742/*"overwriteBaseActionPoint"*/);
    byte_4CEF86C = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22742/*"overwriteBaseActionPoint"*/, -1, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetOverwriteMoveCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF86E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22778/*"overwriteMoveCost"*/);
    byte_4CEF86E = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22778/*"overwriteMoveCost"*/, -1, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetOverwriteValue(
        WarBoardStagePieceDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, key, -1, v3);
}


int32_t WarBoardStagePieceDetailEntity__GetOverwriteWallAttackCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF86B & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22806/*"overwriteWallAttackCost"*/);
    byte_4CEF86B = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22806/*"overwriteWallAttackCost"*/, -1, v2);
}


bool WarBoardStagePieceDetailEntity__HasFlag(
        WarBoardStagePieceDetailEntity_o *this,
        int32_t targetFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool WarBoardStagePieceDetailEntity__IsNotIncludeWin(WarBoardStagePieceDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}


int32_t WarBoardStagePieceDetailEntity__getRoleType(WarBoardStagePieceDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF86A & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24999/*"warBoardSvtDetail"*/);
    byte_4CEF86A = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24999/*"warBoardSvtDetail"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t WarBoardStagePieceDetailEntity__getScriptIntParam(
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
  if ( (byte_4CEF868 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    byte_4CEF868 = 1;
  }
  ScriptObj = WarBoardStagePieceDetailEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C7C0DC(ScriptObj);
  return (unsigned int)WarBoardStagePieceDetailEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *WarBoardStagePieceDetailEntity__getScriptObj(
        WarBoardStagePieceDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF869 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CEF869 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}