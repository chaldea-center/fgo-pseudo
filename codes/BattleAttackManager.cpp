void BattleAttackManager___ctor(BattleAttackManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593AF35 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleAttack___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleAttack__TypeInfo);
    byte_593AF35 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleAttack__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleAttack___ctor__);
  this->fields.attackList = (struct System_Collections_Generic_List_BattleAttack__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.attackList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
  ((void (__fastcall *)(BattleAttackManager_o *, const MethodInfo *))this->klass->vtable._7_InitTurn.methodPtr)(
    this,
    this->klass->vtable._7_InitTurn.method);
}


void BattleAttackManager__AfterLoadQuest(BattleAttackManager_o *this, BattleData_o *data, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleAttackManager__GetLogicType(BattleAttackManager_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  BattleAttack_o *Current; // x0
  __int64 v7; // x1

  if ( (byte_593AF37 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___);
    byte_593AF37 = 1;
  }
  if ( !BattleAttackManager__get_Current(this, *(const MethodInfo **)&index) )
    return 75;
  Current = BattleAttackManager__get_Current(this, v5);
  if ( !Current )
    sub_21FFECC(0, v7);
  return BasicHelper__IndexValue_Int32Enum_(
           (System_Int32Enum_array *)Current->fields._LogicArray_k__BackingField,
           index,
           75,
           (const MethodInfo_37E1858 *)Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___);
}


void BattleAttackManager__GetSaveData(
        BattleAttackManager_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_21FFECC(this, 0);
  save->fields.attackIndex = this->fields.attackIndex;
}


BattleAttackManager_o *BattleAttackManager__Init(
        BattleAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *attackList; // x20
  BattleAttack_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_593AF36 & 1) == 0 )
  {
    sub_21FFC50(&BattleAttackPlayer_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleAttack__Add__);
    byte_593AF36 = 1;
  }
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v6 = (BattleAttack_o *)sub_21FFEBC(BattleAttackPlayer_TypeInfo);
  BattleAttack___ctor(v6, allLogicArray, v7);
  if ( !attackList
    || (items = attackList->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++attackList->fields._version,
        !items) )
  {
    sub_21FFECC(v8, v9);
  }
  size = attackList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v6,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
  }
  return this;
}


void BattleAttackManager__InitTurn(BattleAttackManager_o *this, const MethodInfo *method)
{
  this->fields._IsTurnEnd_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
bool BattleAttackManager__IsAfterUpdateShiftServant(
        BattleAttackManager_o *this,
        int32_t logicIndex,
        const MethodInfo *method)
{
  BattleAttack_o *Current; // x0
  const MethodInfo *v6; // x1
  BattleAttack_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w0

  if ( (byte_593AF39 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_BattleLogic_LOGICTYPE___);
    byte_593AF39 = 1;
  }
  Current = BattleAttackManager__get_Current(this, *(const MethodInfo **)&logicIndex);
  if ( Current )
  {
    if ( Current->fields._LogicArray_k__BackingField )
    {
      v7 = BattleAttackManager__get_Current(this, v6);
      if ( !v7 )
        sub_21FFECC(0, v8);
      v9 = System_Array__IndexOf_Int32Enum_(
             (System_Int32Enum_array *)v7->fields._LogicArray_k__BackingField,
             55,
             (const MethodInfo_39FB04C *)Method_System_Array_IndexOf_BattleLogic_LOGICTYPE___);
      LOBYTE(Current) = v9 >= 0 && v9 <= logicIndex;
    }
    else
    {
      LOBYTE(Current) = 0;
    }
  }
  return (char)Current;
}


bool BattleAttackManager__IsEnemyTurnAfterBuffTurnProgress(
        BattleAttackManager_o *this,
        int32_t logicIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return BattleAttackManager__IsLogicIndexBetweenAndNotIncludeEnd(this, logicIndex, 26, 59, v3);
}


// local variable allocation has failed, the output may be wrong!
bool BattleAttackManager__IsLogicIndexBetweenAndNotIncludeEnd(
        BattleAttackManager_o *this,
        int32_t logicIndex,
        int32_t startType,
        int32_t endType,
        const MethodInfo *method)
{
  BattleAttack_o *Current; // x0
  const MethodInfo *v10; // x1
  BattleAttack_o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w22
  const MethodInfo *v14; // x1
  int32_t v15; // w0

  if ( (byte_593AF3A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_BattleLogic_LOGICTYPE___);
    byte_593AF3A = 1;
  }
  Current = BattleAttackManager__get_Current(this, *(const MethodInfo **)&logicIndex);
  if ( Current )
  {
    if ( Current->fields._LogicArray_k__BackingField )
    {
      v11 = BattleAttackManager__get_Current(this, v10);
      if ( !v11
        || (v13 = System_Array__IndexOf_Int32Enum_(
                    (System_Int32Enum_array *)v11->fields._LogicArray_k__BackingField,
                    startType,
                    (const MethodInfo_39FB04C *)Method_System_Array_IndexOf_BattleLogic_LOGICTYPE___),
            (v11 = BattleAttackManager__get_Current(this, v14)) == 0) )
      {
        sub_21FFECC(v11, v12);
      }
      v15 = System_Array__IndexOf_Int32Enum_(
              (System_Int32Enum_array *)v11->fields._LogicArray_k__BackingField,
              endType,
              (const MethodInfo_39FB04C *)Method_System_Array_IndexOf_BattleLogic_LOGICTYPE___);
      LOBYTE(Current) = v13 <= logicIndex && v15 > logicIndex;
    }
    else
    {
      LOBYTE(Current) = 0;
    }
  }
  return (char)Current;
}


// local variable allocation has failed, the output may be wrong!
bool BattleAttackManager__IsNextActionAttacked(BattleAttackManager_o *this, bool isEnemy, const MethodInfo *method)
{
  BattleAttack_o *Current; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1

  Current = BattleAttackManager__get_Current(this, (const MethodInfo *)isEnemy);
  if ( Current )
  {
    Current = BattleAttackManager__get_Current(this, v6);
    if ( !Current )
      sub_21FFECC(0, v7);
    LODWORD(Current) = ((unsigned int)Current->fields._AttackedInAction_k__BackingField >> isEnemy) & 1;
  }
  return (char)Current;
}


bool BattleAttackManager__IsPlayerTurnAfterBuffTurnProgress(
        BattleAttackManager_o *this,
        int32_t logicIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return BattleAttackManager__IsLogicIndexBetweenAndNotIncludeEnd(this, logicIndex, 25, 58, v3);
}


// local variable allocation has failed, the output may be wrong!
bool BattleAttackManager__IsPrevActionAttacked(BattleAttackManager_o *this, bool isEnemy, const MethodInfo *method)
{
  BattleAttack_o *Previous; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1

  Previous = BattleAttackManager__get_Previous(this, (const MethodInfo *)isEnemy);
  if ( Previous )
  {
    Previous = BattleAttackManager__get_Previous(this, v6);
    if ( !Previous )
      sub_21FFECC(0, v7);
    LODWORD(Previous) = ((unsigned int)Previous->fields._AttackedInAction_k__BackingField >> isEnemy) & 1;
  }
  return (char)Previous;
}


BattleAttackManager_o *BattleAttackManager__Make(
        bool isPrecedingPlayer,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  _QWORD *v5; // x8
  BattleAttackManager_o *v6; // x20
  const MethodInfo *v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_593AF32 & 1) == 0 )
  {
    sub_21FFC50(&EnemyFirstAttackManager_TypeInfo);
    sub_21FFC50(&PlayerFirstAttackManager_TypeInfo);
    byte_593AF32 = 1;
  }
  if ( isPrecedingPlayer )
    v5 = &PlayerFirstAttackManager_TypeInfo;
  else
    v5 = &EnemyFirstAttackManager_TypeInfo;
  v6 = (BattleAttackManager_o *)sub_21FFEBC(*v5);
  BattleAttackManager___ctor(v6, v7);
  if ( !v6 )
    sub_21FFECC(v8, v9);
  return (BattleAttackManager_o *)((__int64 (__fastcall *)(BattleAttackManager_o *, BattleLogic_LOGICTYPE_array *, const MethodInfo *))v6->klass->vtable._5_Init.methodPtr)(
                                    v6,
                                    allLogicArray,
                                    v6->klass->vtable._5_Init.method);
}


void BattleAttackManager__Next(BattleAttackManager_o *this, const MethodInfo *method)
{
  _BOOL4 IsTurnEnd_k__BackingField; // w9

  IsTurnEnd_k__BackingField = this->fields._IsTurnEnd_k__BackingField;
  ++this->fields.attackIndex;
  if ( IsTurnEnd_k__BackingField )
    ((void (__fastcall *)(BattleAttackManager_o *, const MethodInfo *))this->klass->vtable._6_Reset.methodPtr)(
      this,
      this->klass->vtable._6_Reset.method);
}


int32_t BattleAttackManager__PrevIndex(BattleAttackManager_o *this, const MethodInfo *method)
{
  int32_t attackIndex; // w8
  __int64 v4; // x0
  struct System_Collections_Generic_List_BattleAttack__o *attackList; // x8

  if ( (byte_593AF38 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleAttack__get_Count__);
    byte_593AF38 = 1;
  }
  attackIndex = this->fields.attackIndex;
  v4 = (unsigned int)(attackIndex - 1);
  if ( attackIndex - 1 < 0 )
  {
    attackList = this->fields.attackList;
    if ( !attackList )
      sub_21FFECC(v4, method);
    LODWORD(v4) = attackList->fields._size - 1;
  }
  return v4;
}


void BattleAttackManager__PrevProcTactical(BattleAttackManager_o *this, BattleData_o *data, const MethodInfo *method)
{
  ;
}


void BattleAttackManager__Reset(BattleAttackManager_o *this, const MethodInfo *method)
{
  this->fields.attackIndex = 0;
}


void BattleAttackManager__SetEndActionAttack(BattleAttackManager_o *this, bool isPlayer, const MethodInfo *method)
{
  if ( ((((unsigned int (__fastcall *)(BattleAttackManager_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_IsTurnLastAttackPlayer.methodPtr)(
           this,
           this->klass->vtable._4_get_IsTurnLastAttackPlayer.method,
           method)
       ^ isPlayer)
      & 1) == 0 )
    this->fields._IsTurnEnd_k__BackingField = 1;
}


void BattleAttackManager__SetSaveData(
        BattleAttackManager_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_21FFECC(this, 0);
  this->fields.attackIndex = save->fields.attackIndex;
}


BattleAttack_o *BattleAttackManager__get_Current(BattleAttackManager_o *this, const MethodInfo *method)
{
  if ( (byte_593AF33 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_BattleAttack___);
    byte_593AF33 = 1;
  }
  return (BattleAttack_o *)BasicHelper__IndexValue_object__58595452(
                             (System_Collections_Generic_List_T__o *)this->fields.attackList,
                             this->fields.attackIndex,
                             0,
                             (const MethodInfo_37E187C *)Method_BasicHelper_IndexValue_BattleAttack___);
}


bool BattleAttackManager__get_IsEnemyAttack(BattleAttackManager_o *this, const MethodInfo *method)
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
      sub_21FFECC(0, v6);
    LOBYTE(Current) = ((__int64 (__fastcall *)(BattleAttack_o *, void *))v5->klass[1]._1.image)(
                        v5,
                        v5->klass[1]._1.gc_desc);
  }
  return (char)Current;
}


bool BattleAttackManager__get_IsTurnEnd(BattleAttackManager_o *this, const MethodInfo *method)
{
  return this->fields._IsTurnEnd_k__BackingField;
}


bool BattleAttackManager__get_IsTurnLastAttackPlayer(BattleAttackManager_o *this, const MethodInfo *method)
{
  return 0;
}


bool BattleAttackManager__get_IsTurnStart(BattleAttackManager_o *this, const MethodInfo *method)
{
  return this->fields.attackIndex == 0;
}


BattleAttack_o *BattleAttackManager__get_Previous(BattleAttackManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *attackList; // x20
  int32_t Index; // w1

  if ( (byte_593AF34 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_BattleAttack___);
    byte_593AF34 = 1;
  }
  attackList = (System_Collections_Generic_List_T__o *)this->fields.attackList;
  Index = BattleAttackManager__PrevIndex(this, method);
  return (BattleAttack_o *)BasicHelper__IndexValue_object__58595452(
                             attackList,
                             Index,
                             0,
                             (const MethodInfo_37E187C *)Method_BasicHelper_IndexValue_BattleAttack___);
}


void BattleAttackManager__set_IsTurnEnd(BattleAttackManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsTurnEnd_k__BackingField = value;
}