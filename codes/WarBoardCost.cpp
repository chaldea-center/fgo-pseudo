void __fastcall WarBoardCost___ctor(WarBoardCost_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.overwirteBaseActionPoint = -1LL;
  *(_QWORD *)&this->fields.overwirteAttack = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._CurrentActionPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields.baseActionPoint = 0LL;
  *(_QWORD *)&this->fields.attack = 0LL;
  *(_QWORD *)&this->fields.overwirteBaseActionPoint = -1LL;
  *(_QWORD *)&this->fields.overwirteAttack = -1LL;
}


void __fastcall WarBoardCost___ctor_22535156(
        WarBoardCost_o *this,
        int32_t classId,
        int32_t baseActionPoint,
        int32_t attack,
        int32_t move,
        int32_t wallAttack,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.overwirteBaseActionPoint = -1LL;
  *(_QWORD *)&this->fields.overwirteAttack = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._CurrentActionPoint_k__BackingField = baseActionPoint;
  this->fields._ClassId_k__BackingField = classId;
  this->fields.baseActionPoint = baseActionPoint;
  this->fields.move = move;
  this->fields.attack = attack;
  this->fields.wallAttack = wallAttack;
}


void __fastcall WarBoardCost__ActionAttack(WarBoardCost_o *this, const MethodInfo *method)
{
  int32_t overwirteAttack; // w9

  overwirteAttack = this->fields.overwirteAttack;
  if ( (overwirteAttack & 0x80000000) != 0 )
    overwirteAttack = this->fields.attack;
  this->fields._CurrentActionPoint_k__BackingField -= overwirteAttack;
}


void __fastcall WarBoardCost__ActionMove(WarBoardCost_o *this, const MethodInfo *method)
{
  int32_t overwirteMove; // w9

  overwirteMove = this->fields.overwirteMove;
  if ( (overwirteMove & 0x80000000) != 0 )
    overwirteMove = this->fields.move;
  this->fields._CurrentActionPoint_k__BackingField -= overwirteMove;
}


void __fastcall WarBoardCost__ActionWallAttack(WarBoardCost_o *this, const MethodInfo *method)
{
  int32_t overwirteWallAttack; // w9

  overwirteWallAttack = this->fields.overwirteWallAttack;
  if ( (overwirteWallAttack & 0x80000000) != 0 )
    overwirteWallAttack = this->fields.wallAttack;
  this->fields._CurrentActionPoint_k__BackingField -= overwirteWallAttack;
}


bool __fastcall WarBoardCost__CanAction(
        WarBoardCost_o *this,
        int32_t substructPoint,
        bool isIncludeWallAttack,
        const MethodInfo *method)
{
  int32_t overwirteMove; // w8
  int v5; // w9
  int32_t overwirteAttack; // w8
  bool v7; // cc
  bool v8; // w8
  int32_t overwirteWallAttack; // w8

  overwirteMove = this->fields.overwirteMove;
  if ( (overwirteMove & 0x80000000) != 0 )
    overwirteMove = this->fields.move;
  v5 = this->fields._CurrentActionPoint_k__BackingField - substructPoint;
  if ( v5 >= overwirteMove )
    return 1;
  overwirteAttack = this->fields.overwirteAttack;
  if ( (overwirteAttack & 0x80000000) != 0 )
    overwirteAttack = this->fields.attack;
  v7 = v5 < overwirteAttack;
  v8 = v5 >= overwirteAttack;
  if ( v7 && isIncludeWallAttack )
  {
    overwirteWallAttack = this->fields.overwirteWallAttack;
    if ( (overwirteWallAttack & 0x80000000) != 0 )
      overwirteWallAttack = this->fields.wallAttack;
    return v5 >= overwirteWallAttack;
  }
  return v8;
}


WarBoardCost_o *__fastcall WarBoardCost__Create(
        WarBoardActionPointClassEntity_o *entity,
        WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity,
        WarBoardReinforcementsEntity_o *reinforcementsEntity,
        const MethodInfo *method)
{
  int32_t wallAttackCost; // w22
  unsigned __int64 v8; // d8
  unsigned __int64 v9; // d9
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int v15; // [xsp+4h] [xbp-3Ch]

  if ( (byte_418664E & 1) == 0 )
  {
    sub_B2C35C(&WarBoardCost_TypeInfo, stagePieceDetailEntity);
    byte_418664E = 1;
  }
  if ( !entity )
  {
    v10 = sub_B2C42C(WarBoardCost_TypeInfo);
    *(_QWORD *)(v10 + 40) = -1LL;
    *(_QWORD *)(v10 + 48) = -1LL;
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    *(_DWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_QWORD *)(v10 + 40) = -1LL;
    *(_QWORD *)(v10 + 48) = -1LL;
    return (WarBoardCost_o *)v10;
  }
  wallAttackCost = entity->fields.wallAttackCost;
  v15 = HIDWORD(*(_QWORD *)&entity->fields.classId);
  v8 = vrev64_s32(*(int32x2_t *)&entity->fields.classId).n64_u64[0];
  v9 = vrev64_s32(*(int32x2_t *)&entity->fields.attackCost).n64_u64[0];
  v10 = sub_B2C42C(WarBoardCost_TypeInfo);
  *(_QWORD *)(v10 + 40) = -1LL;
  *(_QWORD *)(v10 + 48) = -1LL;
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_QWORD *)(v10 + 16) = v8;
  *(_DWORD *)(v10 + 24) = v15;
  *(_QWORD *)(v10 + 28) = v9;
  *(_DWORD *)(v10 + 36) = wallAttackCost;
  if ( stagePieceDetailEntity )
  {
    if ( !v10 )
      goto LABEL_12;
    WarBoardCost__SetOverwriteCost((WarBoardCost_o *)v10, stagePieceDetailEntity, v13);
  }
  if ( reinforcementsEntity )
  {
    if ( v10 )
    {
      WarBoardCost__SetOverwriteCost_22535368((WarBoardCost_o *)v10, reinforcementsEntity, v13);
      return (WarBoardCost_o *)v10;
    }
LABEL_12:
    sub_B2C434(v11, v12);
  }
  return (WarBoardCost_o *)v10;
}


System_String_o *__fastcall WarBoardCost__CurrentAndMaxPointToString(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  int32_t overwirteBaseActionPoint; // w8
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+8h] [xbp-18h] BYREF
  int32_t CurrentActionPoint_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418664D & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, v3);
    byte_418664D = 1;
  }
  CurrentActionPoint_k__BackingField = this->fields._CurrentActionPoint_k__BackingField;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &CurrentActionPoint_k__BackingField);
  overwirteBaseActionPoint = this->fields.overwirteBaseActionPoint;
  v6 = (Il2CppObject *)v4;
  if ( (overwirteBaseActionPoint & 0x80000000) != 0 )
    overwirteBaseActionPoint = this->fields.baseActionPoint;
  v9 = overwirteBaseActionPoint;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format_44301068((System_String_o *)StringLiteral_23610/*"{0}/{1}"*/, v6, v7, 0LL);
}


bool __fastcall WarBoardCost__IsAttack(WarBoardCost_o *this, int32_t substructPoint, const MethodInfo *method)
{
  int32_t overwirteAttack; // w8

  overwirteAttack = this->fields.overwirteAttack;
  if ( (overwirteAttack & 0x80000000) != 0 )
    overwirteAttack = this->fields.attack;
  return this->fields._CurrentActionPoint_k__BackingField - substructPoint >= overwirteAttack;
}


bool __fastcall WarBoardCost__IsMove(WarBoardCost_o *this, int32_t substructPoint, const MethodInfo *method)
{
  int32_t overwirteMove; // w8

  overwirteMove = this->fields.overwirteMove;
  if ( (overwirteMove & 0x80000000) != 0 )
    overwirteMove = this->fields.move;
  return this->fields._CurrentActionPoint_k__BackingField - substructPoint >= overwirteMove;
}


bool __fastcall WarBoardCost__IsSameClass(WarBoardCost_o *this, int32_t classId, const MethodInfo *method)
{
  return this->fields._ClassId_k__BackingField == classId;
}


bool __fastcall WarBoardCost__IsWallAttack(WarBoardCost_o *this, int32_t substructPoint, const MethodInfo *method)
{
  int32_t overwirteWallAttack; // w8

  overwirteWallAttack = this->fields.overwirteWallAttack;
  if ( (overwirteWallAttack & 0x80000000) != 0 )
    overwirteWallAttack = this->fields.wallAttack;
  return this->fields._CurrentActionPoint_k__BackingField - substructPoint >= overwirteWallAttack;
}


void __fastcall WarBoardCost__Reset(WarBoardCost_o *this, const MethodInfo *method)
{
  int32_t overwirteBaseActionPoint; // w8

  overwirteBaseActionPoint = this->fields.overwirteBaseActionPoint;
  if ( (overwirteBaseActionPoint & 0x80000000) != 0 )
    overwirteBaseActionPoint = this->fields.baseActionPoint;
  this->fields._CurrentActionPoint_k__BackingField = overwirteBaseActionPoint;
}


void __fastcall WarBoardCost__SetOverwriteCost(
        WarBoardCost_o *this,
        WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity,
        const MethodInfo *method)
{
  int32_t OverwriteWallAttackCost; // w0
  int32_t overwirteBaseActionPoint; // w8

  if ( !stagePieceDetailEntity )
    sub_B2C434(this, 0LL);
  this->fields.overwirteBaseActionPoint = WarBoardStagePieceDetailEntity__GetOverwriteBaseActionPoint(
                                            stagePieceDetailEntity,
                                            0LL);
  this->fields.overwirteAttack = WarBoardStagePieceDetailEntity__GetOverwriteAttackCost(stagePieceDetailEntity, 0LL);
  this->fields.overwirteMove = WarBoardStagePieceDetailEntity__GetOverwriteMoveCost(stagePieceDetailEntity, 0LL);
  OverwriteWallAttackCost = WarBoardStagePieceDetailEntity__GetOverwriteWallAttackCost(stagePieceDetailEntity, 0LL);
  overwirteBaseActionPoint = this->fields.overwirteBaseActionPoint;
  this->fields.overwirteWallAttack = OverwriteWallAttackCost;
  if ( (overwirteBaseActionPoint & 0x80000000) != 0 )
    overwirteBaseActionPoint = this->fields.baseActionPoint;
  this->fields._CurrentActionPoint_k__BackingField = overwirteBaseActionPoint;
}


void __fastcall WarBoardCost__SetOverwriteCost_22535368(
        WarBoardCost_o *this,
        WarBoardReinforcementsEntity_o *reinforcementsEntity,
        const MethodInfo *method)
{
  int v5; // w21
  int32_t overwirteBaseActionPoint; // w8
  int32_t v7[2]; // [xsp+8h] [xbp-28h] BYREF
  int32_t v8; // [xsp+18h] [xbp-18h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-14h] BYREF

  value = 0;
  v8 = 0;
  if ( !reinforcementsEntity )
    sub_B2C434(this, 0LL);
  if ( WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(reinforcementsEntity, &value, 0LL) )
  {
    v5 = 1;
    this->fields.overwirteBaseActionPoint = value;
  }
  else
  {
    v5 = 0;
  }
  if ( WarBoardReinforcementsEntity__TryGetOverwriteAttackCost(reinforcementsEntity, &v8, 0LL) )
  {
    v5 = 1;
    this->fields.overwirteAttack = v8;
  }
  if ( WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(reinforcementsEntity, &v7[1], 0LL) )
  {
    v5 = 1;
    this->fields.overwirteMove = v7[1];
  }
  if ( WarBoardReinforcementsEntity__TryGetOverwriteWallAttackCost(reinforcementsEntity, v7, 0LL) )
  {
    this->fields.overwirteWallAttack = v7[0];
  }
  else if ( !v5 )
  {
    return;
  }
  overwirteBaseActionPoint = this->fields.overwirteBaseActionPoint;
  if ( (overwirteBaseActionPoint & 0x80000000) != 0 )
    overwirteBaseActionPoint = this->fields.baseActionPoint;
  this->fields._CurrentActionPoint_k__BackingField = overwirteBaseActionPoint;
}


void __fastcall WarBoardCost__UpdateClassCost(
        WarBoardCost_o *this,
        WarBoardCost_o *changeClassCost,
        const MethodInfo *method)
{
  int32_t overwirteMove; // w8
  int32_t overwirteAttack; // w8
  int32_t overwirteWallAttack; // w8
  int32_t overwirteBaseActionPoint; // w8

  if ( !changeClassCost )
    sub_B2C434(this, 0LL);
  overwirteMove = changeClassCost->fields.overwirteMove;
  if ( (overwirteMove & 0x80000000) != 0 )
    overwirteMove = changeClassCost->fields.move;
  this->fields.move = overwirteMove;
  overwirteAttack = changeClassCost->fields.overwirteAttack;
  if ( (overwirteAttack & 0x80000000) != 0 )
    overwirteAttack = changeClassCost->fields.attack;
  this->fields.attack = overwirteAttack;
  overwirteWallAttack = changeClassCost->fields.overwirteWallAttack;
  if ( (overwirteWallAttack & 0x80000000) != 0 )
    overwirteWallAttack = changeClassCost->fields.wallAttack;
  this->fields.wallAttack = overwirteWallAttack;
  overwirteBaseActionPoint = changeClassCost->fields.overwirteBaseActionPoint;
  if ( (overwirteBaseActionPoint & 0x80000000) != 0 )
    overwirteBaseActionPoint = changeClassCost->fields.baseActionPoint;
  this->fields.baseActionPoint = overwirteBaseActionPoint;
  this->fields._ClassId_k__BackingField = changeClassCost->fields._ClassId_k__BackingField;
}


void __fastcall WarBoardCost__UpdateCurrentPointBySaveData(
        WarBoardCost_o *this,
        int32_t point,
        const MethodInfo *method)
{
  this->fields._CurrentActionPoint_k__BackingField = point;
}


void __fastcall WarBoardCost__UpdateCurrentPointByServerData(
        WarBoardCost_o *this,
        int32_t point,
        const MethodInfo *method)
{
  this->fields._CurrentActionPoint_k__BackingField = point;
}


int32_t __fastcall WarBoardCost__get_Attack(WarBoardCost_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.overwirteAttack;
  if ( (result & 0x80000000) != 0 )
    return this->fields.attack;
  return result;
}


int32_t __fastcall WarBoardCost__get_BaseActionPoint(WarBoardCost_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.overwirteBaseActionPoint;
  if ( (result & 0x80000000) != 0 )
    return this->fields.baseActionPoint;
  return result;
}


int32_t __fastcall WarBoardCost__get_ClassId(WarBoardCost_o *this, const MethodInfo *method)
{
  return this->fields._ClassId_k__BackingField;
}


int32_t __fastcall WarBoardCost__get_CurrentActionPoint(WarBoardCost_o *this, const MethodInfo *method)
{
  return this->fields._CurrentActionPoint_k__BackingField;
}


bool __fastcall WarBoardCost__get_HasCost(WarBoardCost_o *this, const MethodInfo *method)
{
  int32_t overwirteAttack; // w8
  int32_t overwirteMove; // w8
  int32_t overwirteWallAttack; // w8

  overwirteAttack = this->fields.overwirteAttack;
  if ( (overwirteAttack & 0x80000000) != 0 )
    overwirteAttack = this->fields.attack;
  if ( overwirteAttack > 0 )
    return 1;
  overwirteMove = this->fields.overwirteMove;
  if ( (overwirteMove & 0x80000000) != 0 )
    overwirteMove = this->fields.move;
  if ( overwirteMove > 0 )
    return 1;
  overwirteWallAttack = this->fields.overwirteWallAttack;
  if ( (overwirteWallAttack & 0x80000000) != 0 )
    overwirteWallAttack = this->fields.wallAttack;
  return overwirteWallAttack > 0;
}


int32_t __fastcall WarBoardCost__get_Move(WarBoardCost_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.overwirteMove;
  if ( (result & 0x80000000) != 0 )
    return this->fields.move;
  return result;
}


int32_t __fastcall WarBoardCost__get_WallAttack(WarBoardCost_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.overwirteWallAttack;
  if ( (result & 0x80000000) != 0 )
    return this->fields.wallAttack;
  return result;
}


void __fastcall WarBoardCost__set_ClassId(WarBoardCost_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ClassId_k__BackingField = value;
}


void __fastcall WarBoardCost__set_CurrentActionPoint(WarBoardCost_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentActionPoint_k__BackingField = value;
}