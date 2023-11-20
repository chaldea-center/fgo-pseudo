void __fastcall BattleAttackManager___ctor(BattleAttackManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDB1E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleAttack___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_BattleAttack__TypeInfo, v6);
    byte_40FDB1E = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleAttack__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleAttack___ctor__);
  this->fields.attackList = (struct System_Collections_Generic_List_BattleAttack__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.attackList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  ((void (__fastcall *)(BattleAttackManager_o *, Il2CppMethodPointer))this->klass->vtable._7_InitTurn.method)(
    this,
    this->klass->vtable._8_GetSaveData.methodPtr);
}


void __fastcall BattleAttackManager__AfterLoadQuest(
        BattleAttackManager_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleAttackManager__GetLogicType(
        BattleAttackManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  BattleAttack_o *Current; // x0

  if ( (byte_40FDB20 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___, *(_QWORD *)&index);
    byte_40FDB20 = 1;
  }
  if ( !BattleAttackManager__get_Current(this, *(const MethodInfo **)&index) )
    return 76;
  Current = BattleAttackManager__get_Current(this, v5);
  if ( !Current )
    sub_B170D4();
  return BasicHelper__IndexValue_BattleLogic_LOGICTYPE_(
           Current->fields._LogicArray_k__BackingField,
           index,
           76,
           (const MethodInfo_18B81F0 *)Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___);
}


void __fastcall BattleAttackManager__GetSaveData(
        BattleAttackManager_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_B170D4();
  save->fields.attackIndex = this->fields.attackIndex;
}


BattleAttackManager_o *__fastcall BattleAttackManager__Init(
        BattleAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleAttack__o *attackList; // x21
  BattleAttackPlayer_o *v9; // x22

  if ( (byte_40FDB1F & 1) == 0 )
  {
    sub_B16FFC(&BattleAttackPlayer_TypeInfo, allLogicArray);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleAttack__Add__, v7);
    byte_40FDB1F = 1;
  }
  attackList = this->fields.attackList;
  v9 = (BattleAttackPlayer_o *)sub_B170CC(BattleAttackPlayer_TypeInfo, allLogicArray, method, v3, v4);
  BattleAttackPlayer___ctor(v9, allLogicArray, 0LL);
  if ( !attackList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attackList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
  return this;
}


void __fastcall BattleAttackManager__InitTurn(BattleAttackManager_o *this, const MethodInfo *method)
{
  this->fields._IsTurnEnd_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleAttackManager__IsNextActionAttacked(
        BattleAttackManager_o *this,
        bool isEnemy,
        const MethodInfo *method)
{
  BattleAttack_o *Current; // x0
  const MethodInfo *v6; // x1
  char v7; // vf
  BattleAttack_o *v8; // x0

  Current = BattleAttackManager__get_Current(this, (const MethodInfo *)isEnemy);
  if ( Current )
  {
    v8 = BattleAttackManager__get_Current(this, v6);
    if ( !v8 )
      sub_B170D4();
    if ( ((v8->fields._AttackedInAction_k__BackingField & (1 << isEnemy)) < 0) ^ v7 | ((v8->fields._AttackedInAction_k__BackingField & (1 << isEnemy)) == 0) )
      LOBYTE(Current) = 0;
    else
      LOBYTE(Current) = 1;
  }
  return (char)Current;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleAttackManager__IsPrevActionAttacked(
        BattleAttackManager_o *this,
        bool isEnemy,
        const MethodInfo *method)
{
  BattleAttack_o *Previous; // x0
  const MethodInfo *v6; // x1
  char v7; // vf
  BattleAttack_o *v8; // x0

  Previous = BattleAttackManager__get_Previous(this, (const MethodInfo *)isEnemy);
  if ( Previous )
  {
    v8 = BattleAttackManager__get_Previous(this, v6);
    if ( !v8 )
      sub_B170D4();
    if ( ((v8->fields._AttackedInAction_k__BackingField & (1 << isEnemy)) < 0) ^ v7 | ((v8->fields._AttackedInAction_k__BackingField & (1 << isEnemy)) == 0) )
      LOBYTE(Previous) = 0;
    else
      LOBYTE(Previous) = 1;
  }
  return (char)Previous;
}


BattleAttackManager_o *__fastcall BattleAttackManager__Make(
        bool isPrecedingPlayer,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  PlayerFirstAttackManager_o *v8; // x20

  if ( (byte_40FDB1B & 1) == 0 )
  {
    sub_B16FFC(&EnemyFirstAttackManager_TypeInfo, allLogicArray);
    sub_B16FFC(&PlayerFirstAttackManager_TypeInfo, v7);
    byte_40FDB1B = 1;
  }
  if ( isPrecedingPlayer )
  {
    v8 = (PlayerFirstAttackManager_o *)sub_B170CC(PlayerFirstAttackManager_TypeInfo, allLogicArray, method, v3, v4);
    PlayerFirstAttackManager___ctor(v8, 0LL);
    if ( !v8 )
LABEL_8:
      sub_B170D4();
  }
  else
  {
    v8 = (PlayerFirstAttackManager_o *)sub_B170CC(EnemyFirstAttackManager_TypeInfo, allLogicArray, method, v3, v4);
    EnemyFirstAttackManager___ctor((EnemyFirstAttackManager_o *)v8, 0LL);
    if ( !v8 )
      goto LABEL_8;
  }
  return (BattleAttackManager_o *)((__int64 (__fastcall *)(PlayerFirstAttackManager_o *, BattleLogic_LOGICTYPE_array *, Il2CppMethodPointer))v8->klass->vtable._5_Init.method)(
                                    v8,
                                    allLogicArray,
                                    v8->klass->vtable._6_Reset.methodPtr);
}


void __fastcall BattleAttackManager__Next(BattleAttackManager_o *this, const MethodInfo *method)
{
  _BOOL4 IsTurnEnd_k__BackingField; // w9

  IsTurnEnd_k__BackingField = this->fields._IsTurnEnd_k__BackingField;
  ++this->fields.attackIndex;
  if ( IsTurnEnd_k__BackingField )
    ((void (__fastcall *)(BattleAttackManager_o *, Il2CppMethodPointer))this->klass->vtable._6_Reset.method)(
      this,
      this->klass->vtable._7_InitTurn.methodPtr);
}


int32_t __fastcall BattleAttackManager__PrevIndex(BattleAttackManager_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  struct System_Collections_Generic_List_BattleAttack__o *attackList; // x8

  if ( (byte_40FDB21 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleAttack__get_Count__, method);
    byte_40FDB21 = 1;
  }
  result = this->fields.attackIndex - 1;
  if ( result < 0 )
  {
    attackList = this->fields.attackList;
    if ( !attackList )
      sub_B170D4();
    return attackList->fields._size - 1;
  }
  return result;
}


void __fastcall BattleAttackManager__PrevProcTactical(
        BattleAttackManager_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleAttackManager__Reset(BattleAttackManager_o *this, const MethodInfo *method)
{
  this->fields.attackIndex = 0;
}


void __fastcall BattleAttackManager__SetEndActionAttack(
        BattleAttackManager_o *this,
        bool isPlayer,
        const MethodInfo *method)
{
  if ( ((((__int64 (__fastcall *)(BattleAttackManager_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_IsTurnLastAttackPlayer.method)(
           this,
           this->klass->vtable._5_Init.methodPtr,
           method) ^ isPlayer) & 1) == 0 )
    this->fields._IsTurnEnd_k__BackingField = 1;
}


void __fastcall BattleAttackManager__SetSaveData(
        BattleAttackManager_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_B170D4();
  this->fields.attackIndex = save->fields.attackIndex;
}


BattleAttack_o *__fastcall BattleAttackManager__get_Current(BattleAttackManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FDB1C & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_BattleAttack___, method);
    byte_40FDB1C = 1;
  }
  return (BattleAttack_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                             (System_Collections_Generic_List_T__o *)this->fields.attackList,
                             this->fields.attackIndex,
                             0LL,
                             (const MethodInfo_18B822C *)Method_BasicHelper_IndexValue_BattleAttack___);
}


bool __fastcall BattleAttackManager__get_IsEnemyAttack(BattleAttackManager_o *this, const MethodInfo *method)
{
  BattleAttack_o *Current; // x0
  const MethodInfo *v4; // x1
  BattleAttack_o *v5; // x0

  Current = BattleAttackManager__get_Current(this, method);
  if ( Current )
  {
    v5 = BattleAttackManager__get_Current(this, v4);
    if ( !v5 )
      sub_B170D4();
    LOBYTE(Current) = ((__int64 (__fastcall *)(BattleAttack_o *, const char *))v5->klass[1]._1.gc_desc)(
                        v5,
                        v5->klass[1]._1.name);
  }
  return (char)Current;
}


bool __fastcall BattleAttackManager__get_IsTurnEnd(BattleAttackManager_o *this, const MethodInfo *method)
{
  return this->fields._IsTurnEnd_k__BackingField;
}


bool __fastcall BattleAttackManager__get_IsTurnLastAttackPlayer(BattleAttackManager_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleAttackManager__get_IsTurnStart(BattleAttackManager_o *this, const MethodInfo *method)
{
  return this->fields.attackIndex == 0;
}


BattleAttack_o *__fastcall BattleAttackManager__get_Previous(BattleAttackManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *attackList; // x20
  int32_t Index; // w1

  if ( (byte_40FDB1D & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_BattleAttack___, method);
    byte_40FDB1D = 1;
  }
  attackList = (System_Collections_Generic_List_T__o *)this->fields.attackList;
  Index = BattleAttackManager__PrevIndex(this, method);
  return (BattleAttack_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                             attackList,
                             Index,
                             0LL,
                             (const MethodInfo_18B822C *)Method_BasicHelper_IndexValue_BattleAttack___);
}


void __fastcall BattleAttackManager__set_IsTurnEnd(BattleAttackManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsTurnEnd_k__BackingField = value;
}