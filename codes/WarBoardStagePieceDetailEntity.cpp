void __fastcall WarBoardStagePieceDetailEntity___ctor(WarBoardStagePieceDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189304 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189304 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0LL;
  *(_QWORD *)&this->fields.groupId = 0LL;
}


void __fastcall WarBoardStagePieceDetailEntity___ctor_27811528(
        WarBoardStagePieceDetailEntity_o *this,
        WarBoardStagePieceDetailEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4189305 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_4189305 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.stageId = cSrc->fields.stageId;
  this->fields.forceId = cSrc->fields.forceId;
  this->fields.groupId = cSrc->fields.groupId;
  this->fields.pieceIndex = cSrc->fields.pieceIndex;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStagePieceDetailEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  if ( (byte_4189303 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&forceId);
    byte_4189303 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           stageId,
           forceId,
           groupId,
           pieceIndex,
           (const MethodInfo_1733078 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_418930D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17915/*"deadEffect"*/, method);
    byte_418930D = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17915/*"deadEffect"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetMoveAfterAttackType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418930E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21095/*"noMoveAfterAttack"*/, method);
    byte_418930E = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21095/*"noMoveAfterAttack"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetMovedAfterDefendType(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418930F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21098/*"noMovedAfterDefend"*/, method);
    byte_418930F = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21098/*"noMovedAfterDefend"*/, 0, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteAttackCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418930B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21352/*"overwriteAttackCost"*/, method);
    byte_418930B = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21352/*"overwriteAttackCost"*/, -1, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteBaseActionPoint(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418930A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21353/*"overwriteBaseActionPoint"*/, method);
    byte_418930A = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21353/*"overwriteBaseActionPoint"*/, -1, v2);
}


int32_t __fastcall WarBoardStagePieceDetailEntity__GetOverwriteMoveCost(
        WarBoardStagePieceDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418930C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21372/*"overwriteMoveCost"*/, method);
    byte_418930C = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21372/*"overwriteMoveCost"*/, -1, v2);
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

  if ( (byte_4189309 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21388/*"overwriteWallAttackCost"*/, method);
    byte_4189309 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21388/*"overwriteWallAttackCost"*/, -1, v2);
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

  if ( (byte_4189308 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23216/*"warBoardSvtDetail"*/, method);
    byte_4189308 = 1;
  }
  return WarBoardStagePieceDetailEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23216/*"warBoardSvtDetail"*/, 0, v2);
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
  if ( (byte_4189306 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_4189306 = 1;
  }
  ScriptObj = WarBoardStagePieceDetailEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (WarBoardStagePieceDetailEntity_o *)sub_B2C728(ScriptObj);
  return (unsigned int)WarBoardStagePieceDetailEntity__getScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall WarBoardStagePieceDetailEntity__getScriptObj(
        WarBoardStagePieceDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4189307 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4189307 = 1;
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
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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