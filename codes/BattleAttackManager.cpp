void __fastcall BattleAttackManager___ctor(BattleAttackManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D3F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleAttack___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleAttack__TypeInfo);
    byte_4A5D3F0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleAttack__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleAttack___ctor__);
  this->fields.attackList = (struct System_Collections_Generic_List_BattleAttack__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.attackList, (int32_t)v3, v4, v5);
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
  __int64 v7; // x1

  if ( (byte_4A5D3F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___);
    byte_4A5D3F2 = 1;
  }
  if ( !BattleAttackManager__get_Current(this, *(const MethodInfo **)&index) )
    return 78;
  Current = BattleAttackManager__get_Current(this, v5);
  if ( !Current )
    sub_1B8880C(0LL, v7);
  return BasicHelper__IndexValue_Int32Enum_(
           (System_Int32Enum_array *)Current->fields._LogicArray_k__BackingField,
           index,
           78,
           (const MethodInfo_2E6E6A4 *)Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___);
}


void __fastcall BattleAttackManager__GetSaveData(
        BattleAttackManager_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_1B8880C(this, 0LL);
  save->fields.attackIndex = this->fields.attackIndex;
}


BattleAttackManager_o *__fastcall BattleAttackManager__Init(
        BattleAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *attackList; // x20
  BattleAttack_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5D3F1 & 1) == 0 )
  {
    sub_1B885B0(&BattleAttackPlayer_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleAttack__Add__);
    byte_4A5D3F1 = 1;
  }
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v6 = (BattleAttack_o *)sub_1B887FC(BattleAttackPlayer_TypeInfo);
  BattleAttack___ctor(v6, allLogicArray, v7);
  if ( !attackList
    || (items = attackList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++attackList->fields._version,
        !items) )
  {
    sub_1B8880C(v8, v9);
  }
  size = attackList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v6,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
  }
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
  __int64 v7; // x1

  Current = BattleAttackManager__get_Current(this, (const MethodInfo *)isEnemy);
  if ( Current )
  {
    Current = BattleAttackManager__get_Current(this, v6);
    if ( !Current )
      sub_1B8880C(0LL, v7);
    LODWORD(Current) = ((unsigned int)Current->fields._AttackedInAction_k__BackingField >> isEnemy) & 1;
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
  __int64 v7; // x1

  Previous = BattleAttackManager__get_Previous(this, (const MethodInfo *)isEnemy);
  if ( Previous )
  {
    Previous = BattleAttackManager__get_Previous(this, v6);
    if ( !Previous )
      sub_1B8880C(0LL, v7);
    LODWORD(Previous) = ((unsigned int)Previous->fields._AttackedInAction_k__BackingField >> isEnemy) & 1;
  }
  return (char)Previous;
}


BattleAttackManager_o *__fastcall BattleAttackManager__Make(
        bool isPrecedingPlayer,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  _QWORD *v5; // x8
  BattleAttackManager_o *v6; // x20
  const MethodInfo *v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5D3ED & 1) == 0 )
  {
    sub_1B885B0(&EnemyFirstAttackManager_TypeInfo);
    sub_1B885B0(&PlayerFirstAttackManager_TypeInfo);
    byte_4A5D3ED = 1;
  }
  if ( isPrecedingPlayer )
    v5 = &PlayerFirstAttackManager_TypeInfo;
  else
    v5 = &EnemyFirstAttackManager_TypeInfo;
  v6 = (BattleAttackManager_o *)sub_1B887FC(*v5);
  BattleAttackManager___ctor(v6, v7);
  if ( !v6 )
    sub_1B8880C(v8, v9);
  return (BattleAttackManager_o *)((__int64 (__fastcall *)(BattleAttackManager_o *, BattleLogic_LOGICTYPE_array *, Il2CppMethodPointer))v6->klass->vtable._5_Init.method)(
                                    v6,
                                    allLogicArray,
                                    v6->klass->vtable._6_Reset.methodPtr);
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
  int32_t attackIndex; // w8
  __int64 v4; // x0
  struct System_Collections_Generic_List_BattleAttack__o *attackList; // x8

  if ( (byte_4A5D3F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleAttack__get_Count__);
    byte_4A5D3F3 = 1;
  }
  attackIndex = this->fields.attackIndex;
  v4 = (unsigned int)(attackIndex - 1);
  if ( attackIndex - 1 < 0 )
  {
    attackList = this->fields.attackList;
    if ( !attackList )
      sub_1B8880C(v4, method);
    LODWORD(v4) = attackList->fields._size - 1;
  }
  return v4;
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
    sub_1B8880C(this, 0LL);
  this->fields.attackIndex = save->fields.attackIndex;
}


BattleAttack_o *__fastcall BattleAttackManager__get_Current(BattleAttackManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5D3EE & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_BattleAttack___);
    byte_4A5D3EE = 1;
  }
  return (BattleAttack_o *)BasicHelper__IndexValue_object__48686808(
                             (System_Collections_Generic_List_T__o *)this->fields.attackList,
                             this->fields.attackIndex,
                             0LL,
                             (const MethodInfo_2E6E6D8 *)Method_BasicHelper_IndexValue_BattleAttack___);
}


bool __fastcall BattleAttackManager__get_IsEnemyAttack(BattleAttackManager_o *this, const MethodInfo *method)
{
  BattleAttack_o *Current; // x0
  const MethodInfo *v4; // x1
  BattleAttack_o *v5; // x0
  __int64 v6; // x1

  Current = BattleAttackManager__get_Current(this, method);
  if ( Current )
  {
    v5 = BattleAttackManager__get_Current(this, v4);
    if ( !v5 )
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5D3EF & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_BattleAttack___);
    byte_4A5D3EF = 1;
  }
  attackList = (System_Collections_Generic_List_T__o *)this->fields.attackList;
  Index = BattleAttackManager__PrevIndex(this, method);
  return (BattleAttack_o *)BasicHelper__IndexValue_object__48686808(
                             attackList,
                             Index,
                             0LL,
                             (const MethodInfo_2E6E6D8 *)Method_BasicHelper_IndexValue_BattleAttack___);
}


void __fastcall BattleAttackManager__set_IsTurnEnd(BattleAttackManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsTurnEnd_k__BackingField = value;
}