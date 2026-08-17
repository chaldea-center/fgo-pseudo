void WarBoardCost___ctor(WarBoardCost_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.overwirteBaseActionPoint = -1;
  *(_QWORD *)&this->fields.overwirteAttack = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._CurrentActionPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields.baseActionPoint = 0;
  *(_QWORD *)&this->fields.attack = 0;
  *(_QWORD *)&this->fields.overwirteBaseActionPoint = -1;
  *(_QWORD *)&this->fields.overwirteAttack = -1;
}


void WarBoardCost___ctor_44823712(
        WarBoardCost_o *this,
        int32_t classId,
        int32_t baseActionPoint,
        int32_t attack,
        int32_t move,
        int32_t wallAttack,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.overwirteBaseActionPoint = -1;
  *(_QWORD *)&this->fields.overwirteAttack = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._CurrentActionPoint_k__BackingField = baseActionPoint;
  this->fields._ClassId_k__BackingField = classId;
  this->fields.baseActionPoint = baseActionPoint;
  this->fields.move = move;
  this->fields.attack = attack;
  this->fields.wallAttack = wallAttack;
}


void WarBoardCost__ActionAttack(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 48;
  if ( this->fields.overwirteAttack < 0 )
    v2 = 32;
  this->fields._CurrentActionPoint_k__BackingField -= *(_DWORD *)((char *)&this->klass + v2);
}


void WarBoardCost__ActionMove(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 44;
  if ( this->fields.overwirteMove < 0 )
    v2 = 28;
  this->fields._CurrentActionPoint_k__BackingField -= *(_DWORD *)((char *)&this->klass + v2);
}


void WarBoardCost__ActionWallAttack(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 52;
  if ( this->fields.overwirteWallAttack < 0 )
    v2 = 36;
  this->fields._CurrentActionPoint_k__BackingField -= *(_DWORD *)((char *)&this->klass + v2);
}


bool WarBoardCost__CanAction(
        WarBoardCost_o *this,
        int32_t substructPoint,
        bool isIncludeWallAttack,
        const MethodInfo *method)
{
  __int64 v4; // x8
  int32_t CurrentActionPoint_k__BackingField; // w10
  int v6; // w9
  __int64 v7; // x8
  int v8; // w8
  bool v9; // cc
  bool v10; // w8
  __int64 v11; // x8

  v4 = 44;
  CurrentActionPoint_k__BackingField = this->fields._CurrentActionPoint_k__BackingField;
  if ( this->fields.overwirteMove < 0 )
    v4 = 28;
  v6 = CurrentActionPoint_k__BackingField - substructPoint;
  if ( CurrentActionPoint_k__BackingField - substructPoint >= *(_DWORD *)((char *)&this->klass + v4) )
    return 1;
  v7 = 48;
  if ( this->fields.overwirteAttack < 0 )
    v7 = 32;
  v8 = *(_DWORD *)((char *)&this->klass + v7);
  v9 = v6 < v8;
  v10 = v6 >= v8;
  if ( v9 && isIncludeWallAttack )
  {
    v11 = 52;
    if ( this->fields.overwirteWallAttack < 0 )
      v11 = 36;
    return v6 >= *(_DWORD *)((char *)&this->klass + v11);
  }
  return v10;
}


WarBoardCost_o *WarBoardCost__Create(
        WarBoardActionPointClassEntity_o *entity,
        WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity,
        WarBoardReinforcementsEntity_o *reinforcementsEntity,
        const MethodInfo *method)
{
  int32_t classId; // w22
  int32_t baseActionPoint; // w23
  int32_t wallAttackCost; // w24
  int32x2_t v10; // d8
  __int64 v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_596E12C & 1) == 0 )
  {
    sub_2213A60(&WarBoardCost_TypeInfo);
    byte_596E12C = 1;
  }
  if ( entity )
  {
    classId = entity->fields.classId;
    baseActionPoint = entity->fields.baseActionPoint;
    wallAttackCost = entity->fields.wallAttackCost;
    v10.n64_u64[0] = *(unsigned __int64 *)&entity->fields.attackCost;
    v11 = sub_2213CCC(WarBoardCost_TypeInfo);
    *(_QWORD *)(v11 + 40) = -1;
    *(_QWORD *)(v11 + 48) = -1;
    System_Object___ctor((Il2CppObject *)v11, 0);
    *(_DWORD *)(v11 + 16) = baseActionPoint;
    *(_DWORD *)(v11 + 20) = classId;
    *(_DWORD *)(v11 + 24) = baseActionPoint;
    *(_DWORD *)(v11 + 36) = wallAttackCost;
    *(int32x2_t *)(v11 + 28) = vrev64_s32(v10);
    if ( stagePieceDetailEntity )
      WarBoardCost__SetOverwriteCost((WarBoardCost_o *)v11, stagePieceDetailEntity, v12);
    if ( reinforcementsEntity )
      WarBoardCost__SetOverwriteCost_44823928((WarBoardCost_o *)v11, reinforcementsEntity, v12);
  }
  else
  {
    v11 = sub_2213CCC(WarBoardCost_TypeInfo);
    *(_QWORD *)(v11 + 40) = -1;
    *(_QWORD *)(v11 + 48) = -1;
    System_Object___ctor((Il2CppObject *)v11, 0);
    *(_DWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 32) = 0;
    *(_QWORD *)(v11 + 40) = -1;
    *(_QWORD *)(v11 + 48) = -1;
  }
  return (WarBoardCost_o *)v11;
}


System_String_o *WarBoardCost__CurrentAndMaxPointToString(WarBoardCost_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x8
  Il2CppObject *v5; // x0
  int v7; // [xsp+8h] [xbp-28h] BYREF
  int32_t CurrentActionPoint_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596E12B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26548/*"{0}/{1}"*/);
    byte_596E12B = 1;
  }
  CurrentActionPoint_k__BackingField = this->fields._CurrentActionPoint_k__BackingField;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &CurrentActionPoint_k__BackingField);
  v4 = 40;
  if ( this->fields.overwirteBaseActionPoint < 0 )
    v4 = 24;
  v7 = *(_DWORD *)((char *)&this->klass + v4);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v7);
  return System_String__Format_75697880((System_String_o *)StringLiteral_26548/*"{0}/{1}"*/, v3, v5, 0);
}


bool WarBoardCost__IsAttack(WarBoardCost_o *this, int32_t substructPoint, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 48;
  if ( this->fields.overwirteAttack < 0 )
    v3 = 32;
  return this->fields._CurrentActionPoint_k__BackingField - substructPoint >= *(_DWORD *)((char *)&this->klass + v3);
}


bool WarBoardCost__IsMove(WarBoardCost_o *this, int32_t substructPoint, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 44;
  if ( this->fields.overwirteMove < 0 )
    v3 = 28;
  return this->fields._CurrentActionPoint_k__BackingField - substructPoint >= *(_DWORD *)((char *)&this->klass + v3);
}


bool WarBoardCost__IsSameClass(WarBoardCost_o *this, int32_t classId, const MethodInfo *method)
{
  return this->fields._ClassId_k__BackingField == classId;
}


bool WarBoardCost__IsWallAttack(WarBoardCost_o *this, int32_t substructPoint, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 52;
  if ( this->fields.overwirteWallAttack < 0 )
    v3 = 36;
  return this->fields._CurrentActionPoint_k__BackingField - substructPoint >= *(_DWORD *)((char *)&this->klass + v3);
}


void WarBoardCost__Reset(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 40;
  if ( this->fields.overwirteBaseActionPoint < 0 )
    v2 = 24;
  this->fields._CurrentActionPoint_k__BackingField = *(_DWORD *)((char *)&this->klass + v2);
}


void WarBoardCost__SetOverwriteCost(
        WarBoardCost_o *this,
        WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity,
        const MethodInfo *method)
{
  int32_t OverwriteWallAttackCost; // w0
  int32_t overwirteBaseActionPoint; // w8
  bool v7; // nf
  __int64 v8; // x8

  if ( !stagePieceDetailEntity )
    sub_2213CDC(this, 0);
  this->fields.overwirteBaseActionPoint = WarBoardStagePieceDetailEntity__GetOverwriteBaseActionPoint(
                                            stagePieceDetailEntity,
                                            0);
  this->fields.overwirteAttack = WarBoardStagePieceDetailEntity__GetOverwriteAttackCost(stagePieceDetailEntity, 0);
  this->fields.overwirteMove = WarBoardStagePieceDetailEntity__GetOverwriteMoveCost(stagePieceDetailEntity, 0);
  OverwriteWallAttackCost = WarBoardStagePieceDetailEntity__GetOverwriteWallAttackCost(stagePieceDetailEntity, 0);
  overwirteBaseActionPoint = this->fields.overwirteBaseActionPoint;
  this->fields.overwirteWallAttack = OverwriteWallAttackCost;
  v7 = overwirteBaseActionPoint < 0;
  v8 = 40;
  if ( v7 )
    v8 = 24;
  this->fields._CurrentActionPoint_k__BackingField = *(_DWORD *)((char *)&this->klass + v8);
}


void WarBoardCost__SetOverwriteCost_44823928(
        WarBoardCost_o *this,
        WarBoardReinforcementsEntity_o *reinforcementsEntity,
        const MethodInfo *method)
{
  bool OverwriteBaseActionPoint; // w21
  __int64 v6; // x8
  int32_t v7[2]; // [xsp+0h] [xbp-30h] BYREF
  int32_t value[2]; // [xsp+8h] [xbp-28h] BYREF

  *(_QWORD *)v7 = 0;
  *(_QWORD *)value = 0;
  if ( !reinforcementsEntity )
    sub_2213CDC(this, 0);
  OverwriteBaseActionPoint = WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
                               reinforcementsEntity,
                               &value[1],
                               0);
  if ( OverwriteBaseActionPoint )
    this->fields.overwirteBaseActionPoint = value[1];
  if ( WarBoardReinforcementsEntity__TryGetOverwriteAttackCost(reinforcementsEntity, value, 0) )
  {
    OverwriteBaseActionPoint = 1;
    this->fields.overwirteAttack = value[0];
  }
  if ( WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(reinforcementsEntity, &v7[1], 0) )
  {
    this->fields.overwirteMove = v7[1];
    if ( !WarBoardReinforcementsEntity__TryGetOverwriteWallAttackCost(reinforcementsEntity, v7, 0) )
      goto LABEL_11;
  }
  else if ( !WarBoardReinforcementsEntity__TryGetOverwriteWallAttackCost(reinforcementsEntity, v7, 0) )
  {
    if ( !OverwriteBaseActionPoint )
      return;
    goto LABEL_11;
  }
  this->fields.overwirteWallAttack = v7[0];
LABEL_11:
  v6 = 40;
  if ( this->fields.overwirteBaseActionPoint < 0 )
    v6 = 24;
  this->fields._CurrentActionPoint_k__BackingField = *(_DWORD *)((char *)&this->klass + v6);
}


void WarBoardCost__UpdateClassCost(WarBoardCost_o *this, WarBoardCost_o *changeClassCost, const MethodInfo *method)
{
  int32_t overwirteBaseActionPoint; // w11
  __int64 v4; // x8
  int32_t overwirteWallAttack; // w12
  bool v6; // nf
  __int64 v7; // x9
  int32_t v8; // w8
  __int64 v9; // x9
  int32_t v10; // w8
  __int64 v11; // x9
  int32_t v12; // w8

  if ( !changeClassCost )
    sub_2213CDC(this, 0);
  overwirteBaseActionPoint = changeClassCost->fields.overwirteBaseActionPoint;
  if ( changeClassCost->fields.overwirteMove >= 0 )
    v4 = 44;
  else
    v4 = 28;
  overwirteWallAttack = changeClassCost->fields.overwirteWallAttack;
  v6 = changeClassCost->fields.overwirteAttack < 0;
  v7 = 32;
  this->fields.move = *(_DWORD *)((char *)&changeClassCost->klass + v4);
  if ( !v6 )
    v7 = 48;
  v8 = *(_DWORD *)((char *)&changeClassCost->klass + v7);
  v9 = 52;
  if ( overwirteWallAttack < 0 )
    v9 = 36;
  this->fields.attack = v8;
  v10 = *(_DWORD *)((char *)&changeClassCost->klass + v9);
  v11 = 40;
  if ( overwirteBaseActionPoint < 0 )
    v11 = 24;
  this->fields.wallAttack = v10;
  v12 = *(_DWORD *)((char *)&changeClassCost->klass + v11);
  this->fields._ClassId_k__BackingField = changeClassCost->fields._ClassId_k__BackingField;
  this->fields.baseActionPoint = v12;
}


void WarBoardCost__UpdateCurrentPointBySaveData(WarBoardCost_o *this, int32_t point, const MethodInfo *method)
{
  this->fields._CurrentActionPoint_k__BackingField = point;
}


void WarBoardCost__UpdateCurrentPointByServerData(WarBoardCost_o *this, int32_t point, const MethodInfo *method)
{
  this->fields._CurrentActionPoint_k__BackingField = point;
}


int32_t WarBoardCost__get_Attack(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 48;
  if ( this->fields.overwirteAttack < 0 )
    v2 = 32;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t WarBoardCost__get_BaseActionPoint(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 40;
  if ( this->fields.overwirteBaseActionPoint < 0 )
    v2 = 24;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t WarBoardCost__get_ClassId(WarBoardCost_o *this, const MethodInfo *method)
{
  return this->fields._ClassId_k__BackingField;
}


int32_t WarBoardCost__get_CurrentActionPoint(WarBoardCost_o *this, const MethodInfo *method)
{
  return this->fields._CurrentActionPoint_k__BackingField;
}


bool WarBoardCost__get_HasCost(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v3; // x8
  __int64 v5; // x8

  v2 = 48;
  if ( this->fields.overwirteAttack < 0 )
    v2 = 32;
  if ( *(int *)((char *)&this->klass + v2) > 0 )
    return 1;
  v3 = 44;
  if ( this->fields.overwirteMove < 0 )
    v3 = 28;
  if ( *(int *)((char *)&this->klass + v3) > 0 )
    return 1;
  v5 = 52;
  if ( this->fields.overwirteWallAttack < 0 )
    v5 = 36;
  return *(_DWORD *)((char *)&this->klass + v5) > 0;
}


int32_t WarBoardCost__get_Move(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 44;
  if ( this->fields.overwirteMove < 0 )
    v2 = 28;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t WarBoardCost__get_WallAttack(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 52;
  if ( this->fields.overwirteWallAttack < 0 )
    v2 = 36;
  return *(_DWORD *)((char *)&this->klass + v2);
}


void WarBoardCost__set_ClassId(WarBoardCost_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ClassId_k__BackingField = value;
}


void WarBoardCost__set_CurrentActionPoint(WarBoardCost_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentActionPoint_k__BackingField = value;
}