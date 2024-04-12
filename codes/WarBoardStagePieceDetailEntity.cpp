void __fastcall WarBoardStagePieceDetailEntity___ctor(WarBoardStagePieceDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2285 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2285 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0LL;
  *(_QWORD *)&this->fields.groupId = 0LL;
}


void __fastcall WarBoardStagePieceDetailEntity___ctor_29105844(
        WarBoardStagePieceDetailEntity_o *this,
        WarBoardStagePieceDetailEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42B2286 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2286 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B52A5C(v5, v6);
  this->fields.stageId = cSrc->fields.stageId;
  this->fields.forceId = cSrc->fields.forceId;
  this->fields.groupId = cSrc->fields.groupId;
  this->fields.pieceIndex = cSrc->fields.pieceIndex;
}


System_String_o *__fastcall WarBoardStagePieceDetailEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  if ( (byte_42B2284 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_42B2284 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           stageId,
           forceId,
           groupId,
           pieceIndex,
           (const MethodInfo_1A4E810 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_42B228E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18040/*"deadEffect"*/);
    byte_42B228E = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18040/*"deadEffect"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetMoveAfterAttackType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B228F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21267/*"noMoveAfterAttack"*/);
    byte_42B228F = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21267/*"noMoveAfterAttack"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetMovedAfterDefendType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B2290 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21270/*"noMovedAfterDefend"*/);
    byte_42B2290 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21270/*"noMovedAfterDefend"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteAttackCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B228C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21522/*"overwriteAttackCost"*/);
    byte_42B228C = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21522/*"overwriteAttackCost"*/, -1, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteBaseActionPoint(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B228B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21523/*"overwriteBaseActionPoint"*/);
    byte_42B228B = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21523/*"overwriteBaseActionPoint"*/, -1, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteMoveCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B228D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21542/*"overwriteMoveCost"*/);
    byte_42B228D = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21542/*"overwriteMoveCost"*/, -1, v2);
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

  if ( (byte_42B228A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21559/*"overwriteWallAttackCost"*/);
    byte_42B228A = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21559/*"overwriteWallAttackCost"*/, -1, v2);
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

  if ( (byte_42B2289 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_23408/*"warBoardSvtDetail"*/);
    byte_42B2289 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23408/*"warBoardSvtDetail"*/, 0, v2);
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
  WarBoardStagePieceDetailEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defVal;
  if ( (byte_42B2287 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    byte_42B2287 = 1;
  }
  ScriptObj = WarBoardStagePieceDetailEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B52D50(ScriptObj);
  return (unsigned int)WarBoardStagePieceDetailEntity__getScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall WarBoardStagePieceDetailEntity__getScriptObj(
        WarBoardStagePieceDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B2288 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_42B2288 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}