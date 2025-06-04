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


void __fastcall WarBoardCost___ctor_36912260(
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
  __int64 v2; // x8

  v2 = 48LL;
  if ( this->fields.overwirteAttack < 0 )
    v2 = 32LL;
  this->fields._CurrentActionPoint_k__BackingField -= *(_DWORD *)((char *)&this->klass + v2);
}


void __fastcall WarBoardCost__ActionMove(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 44LL;
  if ( this->fields.overwirteMove < 0 )
    v2 = 28LL;
  this->fields._CurrentActionPoint_k__BackingField -= *(_DWORD *)((char *)&this->klass + v2);
}


void __fastcall WarBoardCost__ActionWallAttack(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 52LL;
  if ( this->fields.overwirteWallAttack < 0 )
    v2 = 36LL;
  this->fields._CurrentActionPoint_k__BackingField -= *(_DWORD *)((char *)&this->klass + v2);
}


bool __fastcall WarBoardCost__CanAction(
        WarBoardCost_o *this,
        int32_t substructPoint,
        bool isIncludeWallAttack,
        const MethodInfo *method)
{
  __int64 v4; // x8
  int v5; // w9
  __int64 v6; // x8
  int v7; // w8
  bool v8; // cc
  bool v9; // w8
  __int64 v10; // x8

  v4 = 44LL;
  if ( this->fields.overwirteMove < 0 )
    v4 = 28LL;
  v5 = this->fields._CurrentActionPoint_k__BackingField - substructPoint;
  if ( v5 >= *(_DWORD *)((char *)&this->klass + v4) )
    return 1;
  v6 = 48LL;
  if ( this->fields.overwirteAttack < 0 )
    v6 = 32LL;
  v7 = *(_DWORD *)((char *)&this->klass + v6);
  v8 = v5 < v7;
  v9 = v5 >= v7;
  if ( v8 && isIncludeWallAttack )
  {
    v10 = 52LL;
    if ( this->fields.overwirteWallAttack < 0 )
      v10 = 36LL;
    return v5 >= *(_DWORD *)((char *)&this->klass + v10);
  }
  return v9;
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
  const MethodInfo *v11; // x2
  int v13; // [xsp+4h] [xbp-4Ch]

  if ( (byte_4AFFA07 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardCost_TypeInfo, stagePieceDetailEntity);
    byte_4AFFA07 = 1;
  }
  if ( entity )
  {
    wallAttackCost = entity->fields.wallAttackCost;
    v13 = HIDWORD(*(_QWORD *)&entity->fields.classId);
    v8 = vrev64_s32(*(int32x2_t *)&entity->fields.classId).n64_u64[0];
    v9 = vrev64_s32(*(int32x2_t *)&entity->fields.attackCost).n64_u64[0];
    v10 = sub_1BC3254(WarBoardCost_TypeInfo);
    *(_QWORD *)(v10 + 40) = -1LL;
    *(_QWORD *)(v10 + 48) = -1LL;
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    *(_QWORD *)(v10 + 16) = v8;
    *(_DWORD *)(v10 + 24) = v13;
    *(_QWORD *)(v10 + 28) = v9;
    *(_DWORD *)(v10 + 36) = wallAttackCost;
    if ( stagePieceDetailEntity )
      WarBoardCost__SetOverwriteCost((WarBoardCost_o *)v10, stagePieceDetailEntity, v11);
    if ( reinforcementsEntity )
      WarBoardCost__SetOverwriteCost_36912476((WarBoardCost_o *)v10, reinforcementsEntity, v11);
  }
  else
  {
    v10 = sub_1BC3254(WarBoardCost_TypeInfo);
    *(_QWORD *)(v10 + 40) = -1LL;
    *(_QWORD *)(v10 + 48) = -1LL;
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    *(_DWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_QWORD *)(v10 + 40) = -1LL;
    *(_QWORD *)(v10 + 48) = -1LL;
  }
  return (WarBoardCost_o *)v10;
}


System_String_o *__fastcall WarBoardCost__CurrentAndMaxPointToString(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x20
  __int64 v11; // x8
  Il2CppObject *v12; // x0
  int v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t CurrentActionPoint_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFFA06 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&StringLiteral_24915/*"{0}/{1}"*/, v6);
    byte_4AFFA06 = 1;
  }
  CurrentActionPoint_k__BackingField = this->fields._CurrentActionPoint_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CurrentActionPoint_k__BackingField, v2, v3, v4);
  v11 = 40LL;
  if ( this->fields.overwirteBaseActionPoint < 0 )
    v11 = 24LL;
  v14 = *(_DWORD *)((char *)&this->klass + v11);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v7, v8, v9);
  return System_String__Format_62389940((System_String_o *)StringLiteral_24915/*"{0}/{1}"*/, v10, v12, 0LL);
}


bool __fastcall WarBoardCost__IsAttack(WarBoardCost_o *this, int32_t substructPoint, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 48LL;
  if ( this->fields.overwirteAttack < 0 )
    v3 = 32LL;
  return this->fields._CurrentActionPoint_k__BackingField - substructPoint >= *(_DWORD *)((char *)&this->klass + v3);
}


bool __fastcall WarBoardCost__IsMove(WarBoardCost_o *this, int32_t substructPoint, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 44LL;
  if ( this->fields.overwirteMove < 0 )
    v3 = 28LL;
  return this->fields._CurrentActionPoint_k__BackingField - substructPoint >= *(_DWORD *)((char *)&this->klass + v3);
}


bool __fastcall WarBoardCost__IsSameClass(WarBoardCost_o *this, int32_t classId, const MethodInfo *method)
{
  return this->fields._ClassId_k__BackingField == classId;
}


bool __fastcall WarBoardCost__IsWallAttack(WarBoardCost_o *this, int32_t substructPoint, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 52LL;
  if ( this->fields.overwirteWallAttack < 0 )
    v3 = 36LL;
  return this->fields._CurrentActionPoint_k__BackingField - substructPoint >= *(_DWORD *)((char *)&this->klass + v3);
}


void __fastcall WarBoardCost__Reset(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 40LL;
  if ( this->fields.overwirteBaseActionPoint < 0 )
    v2 = 24LL;
  this->fields._CurrentActionPoint_k__BackingField = *(_DWORD *)((char *)&this->klass + v2);
}


void __fastcall WarBoardCost__SetOverwriteCost(
        WarBoardCost_o *this,
        WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity,
        const MethodInfo *method)
{
  int32_t OverwriteWallAttackCost; // w0
  int32_t overwirteBaseActionPoint; // w8
  bool v7; // nf
  __int64 v8; // x8

  if ( !stagePieceDetailEntity )
    sub_1BC3264(this, 0LL);
  this->fields.overwirteBaseActionPoint = WarBoardStagePieceDetailEntity__GetOverwriteBaseActionPoint(
                                            stagePieceDetailEntity,
                                            0LL);
  this->fields.overwirteAttack = WarBoardStagePieceDetailEntity__GetOverwriteAttackCost(stagePieceDetailEntity, 0LL);
  this->fields.overwirteMove = WarBoardStagePieceDetailEntity__GetOverwriteMoveCost(stagePieceDetailEntity, 0LL);
  OverwriteWallAttackCost = WarBoardStagePieceDetailEntity__GetOverwriteWallAttackCost(stagePieceDetailEntity, 0LL);
  overwirteBaseActionPoint = this->fields.overwirteBaseActionPoint;
  this->fields.overwirteWallAttack = OverwriteWallAttackCost;
  v7 = overwirteBaseActionPoint < 0;
  v8 = 40LL;
  if ( v7 )
    v8 = 24LL;
  this->fields._CurrentActionPoint_k__BackingField = *(_DWORD *)((char *)&this->klass + v8);
}


void __fastcall WarBoardCost__SetOverwriteCost_36912476(
        WarBoardCost_o *this,
        WarBoardReinforcementsEntity_o *reinforcementsEntity,
        const MethodInfo *method)
{
  bool OverwriteBaseActionPoint; // w21
  __int64 v6; // x8
  int32_t v7[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v8; // [xsp+8h] [xbp-28h] BYREF

  *(_QWORD *)v7 = 0LL;
  v8 = 0LL;
  if ( !reinforcementsEntity )
    sub_1BC3264(this, 0LL);
  OverwriteBaseActionPoint = WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
                               reinforcementsEntity,
                               (int32_t *)&v8 + 1,
                               0LL);
  if ( OverwriteBaseActionPoint )
    this->fields.overwirteBaseActionPoint = HIDWORD(v8);
  if ( WarBoardReinforcementsEntity__TryGetOverwriteAttackCost(reinforcementsEntity, (int32_t *)&v8, 0LL) )
  {
    OverwriteBaseActionPoint = 1;
    this->fields.overwirteAttack = v8;
  }
  if ( WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(reinforcementsEntity, &v7[1], 0LL) )
  {
    this->fields.overwirteMove = v7[1];
    if ( !WarBoardReinforcementsEntity__TryGetOverwriteWallAttackCost(reinforcementsEntity, v7, 0LL) )
      goto LABEL_12;
  }
  else if ( !WarBoardReinforcementsEntity__TryGetOverwriteWallAttackCost(reinforcementsEntity, v7, 0LL) )
  {
    if ( !OverwriteBaseActionPoint )
      return;
    goto LABEL_12;
  }
  this->fields.overwirteWallAttack = v7[0];
LABEL_12:
  v6 = 40LL;
  if ( this->fields.overwirteBaseActionPoint < 0 )
    v6 = 24LL;
  this->fields._CurrentActionPoint_k__BackingField = *(_DWORD *)((char *)&this->klass + v6);
}


void __fastcall WarBoardCost__UpdateClassCost(
        WarBoardCost_o *this,
        WarBoardCost_o *changeClassCost,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8

  if ( !changeClassCost )
    sub_1BC3264(this, 0LL);
  v3 = 44LL;
  if ( changeClassCost->fields.overwirteMove < 0 )
    v3 = 28LL;
  this->fields.move = *(_DWORD *)((char *)&changeClassCost->klass + v3);
  v4 = 48LL;
  if ( changeClassCost->fields.overwirteAttack < 0 )
    v4 = 32LL;
  this->fields.attack = *(_DWORD *)((char *)&changeClassCost->klass + v4);
  v5 = 52LL;
  if ( changeClassCost->fields.overwirteWallAttack < 0 )
    v5 = 36LL;
  this->fields.wallAttack = *(_DWORD *)((char *)&changeClassCost->klass + v5);
  v6 = 40LL;
  if ( changeClassCost->fields.overwirteBaseActionPoint < 0 )
    v6 = 24LL;
  this->fields.baseActionPoint = *(_DWORD *)((char *)&changeClassCost->klass + v6);
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
  __int64 v2; // x8

  v2 = 48LL;
  if ( this->fields.overwirteAttack < 0 )
    v2 = 32LL;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t __fastcall WarBoardCost__get_BaseActionPoint(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 40LL;
  if ( this->fields.overwirteBaseActionPoint < 0 )
    v2 = 24LL;
  return *(_DWORD *)((char *)&this->klass + v2);
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
  __int64 v2; // x8
  __int64 v3; // x8
  __int64 v5; // x8

  v2 = 48LL;
  if ( this->fields.overwirteAttack < 0 )
    v2 = 32LL;
  if ( *(int *)((char *)&this->klass + v2) > 0 )
    return 1;
  v3 = 44LL;
  if ( this->fields.overwirteMove < 0 )
    v3 = 28LL;
  if ( *(int *)((char *)&this->klass + v3) > 0 )
    return 1;
  v5 = 52LL;
  if ( this->fields.overwirteWallAttack < 0 )
    v5 = 36LL;
  return *(_DWORD *)((char *)&this->klass + v5) > 0;
}


int32_t __fastcall WarBoardCost__get_Move(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 44LL;
  if ( this->fields.overwirteMove < 0 )
    v2 = 28LL;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t __fastcall WarBoardCost__get_WallAttack(WarBoardCost_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 52LL;
  if ( this->fields.overwirteWallAttack < 0 )
    v2 = 36LL;
  return *(_DWORD *)((char *)&this->klass + v2);
}


void __fastcall WarBoardCost__set_ClassId(WarBoardCost_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ClassId_k__BackingField = value;
}


void __fastcall WarBoardCost__set_CurrentActionPoint(WarBoardCost_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentActionPoint_k__BackingField = value;
}