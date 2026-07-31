void WarBoardStagePieceDetailEntity___ctor(WarBoardStagePieceDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59399FF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59399FF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_59399FE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_59399FE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           stageId,
           forceId,
           groupId,
           pieceIndex,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_5939A06 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19303/*"deadEffect"*/);
    byte_5939A06 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19303/*"deadEffect"*/, 0, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetDispLimitCnt(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939A09 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19451/*"dispLimitCount"*/);
    byte_5939A09 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19451/*"dispLimitCount"*/, -1, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetImageSvtId(WarBoardStagePieceDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939A0A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21233/*"imageSvtId"*/);
    byte_5939A0A = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21233/*"imageSvtId"*/, 0, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetMoveAfterAttackType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939A07 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23321/*"noMoveAfterAttack"*/);
    byte_5939A07 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23321/*"noMoveAfterAttack"*/, 0, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetMovedAfterDefendType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939A08 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23324/*"noMovedAfterDefend"*/);
    byte_5939A08 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23324/*"noMovedAfterDefend"*/, 0, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetOverwriteAttackCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939A04 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23623/*"overwriteAttackCost"*/);
    byte_5939A04 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23623/*"overwriteAttackCost"*/, -1, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetOverwriteBaseActionPoint(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939A03 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23625/*"overwriteBaseActionPoint"*/);
    byte_5939A03 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23625/*"overwriteBaseActionPoint"*/, -1, v2);
}


int32_t WarBoardStagePieceDetailEntity__GetOverwriteMoveCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939A05 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23665/*"overwriteMoveCost"*/);
    byte_5939A05 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23665/*"overwriteMoveCost"*/, -1, v2);
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

  if ( (byte_5939A02 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23700/*"overwriteWallAttackCost"*/);
    byte_5939A02 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23700/*"overwriteWallAttackCost"*/, -1, v2);
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

  if ( (byte_5939A01 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26068/*"warBoardSvtDetail"*/);
    byte_5939A01 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26068/*"warBoardSvtDetail"*/, 0, v2);
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
  __int64 v6; // x2
  WarBoardStagePieceDetailEntity_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  v4 = defVal;
  ScriptObj = WarBoardStagePieceDetailEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_594C090, v6);
  sub_220024C(ScriptObj, qword_594C090, v6);
  return (unsigned int)WarBoardStagePieceDetailEntity__getScriptObj(v8, v9, v10);
}


Il2CppObject *WarBoardStagePieceDetailEntity__getScriptObj(
        WarBoardStagePieceDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939A00 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5939A00 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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