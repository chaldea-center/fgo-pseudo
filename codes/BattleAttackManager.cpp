void BattleAttackManager___ctor(BattleAttackManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C29891 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleAttack___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleAttack__TypeInfo);
    byte_4C29891 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleAttack__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleAttack___ctor__);
  this->fields.attackList = (struct System_Collections_Generic_List_BattleAttack__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.attackList, (int32_t)v3, v4, v5);
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

  if ( (byte_4C29893 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___);
    byte_4C29893 = 1;
  }
  if ( !BattleAttackManager__get_Current(this, *(const MethodInfo **)&index) )
    return 78;
  Current = BattleAttackManager__get_Current(this, v5);
  if ( !Current )
    sub_1C2D6EC(0, v7);
  return BasicHelper__IndexValue_Int32Enum_(
           (System_Int32Enum_array *)Current->fields._LogicArray_k__BackingField,
           index,
           78,
           (const MethodInfo_30BCE40 *)Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___);
}


void BattleAttackManager__GetSaveData(
        BattleAttackManager_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_1C2D6EC(this, 0);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C29892 & 1) == 0 )
  {
    sub_1C2D490(&BattleAttackPlayer_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleAttack__Add__);
    byte_4C29892 = 1;
  }
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v6 = (BattleAttack_o *)sub_1C2D6DC(BattleAttackPlayer_TypeInfo);
  BattleAttack___ctor(v6, allLogicArray, v7);
  if ( !attackList
    || (items = attackList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++attackList->fields._version,
        !items) )
  {
    sub_1C2D6EC(v8, v9);
  }
  size = attackList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v6,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v6;
    sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
  }
  return this;
}


void BattleAttackManager__InitTurn(BattleAttackManager_o *this, const MethodInfo *method)
{
  this->fields._IsTurnEnd_k__BackingField = 0;
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

  if ( (byte_4C29895 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_BattleLogic_LOGICTYPE___);
    byte_4C29895 = 1;
  }
  Current = BattleAttackManager__get_Current(this, *(const MethodInfo **)&logicIndex);
  if ( !Current || !Current->fields._LogicArray_k__BackingField )
    return 0;
  v11 = BattleAttackManager__get_Current(this, v10);
  if ( !v11
    || (v13 = System_Array__IndexOf_Int32Enum_(
                (System_Int32Enum_array *)v11->fields._LogicArray_k__BackingField,
                startType,
                (const MethodInfo_31D5A58 *)Method_System_Array_IndexOf_BattleLogic_LOGICTYPE___),
        (v11 = BattleAttackManager__get_Current(this, v14)) == 0) )
  {
    sub_1C2D6EC(v11, v12);
  }
  return (v13 <= logicIndex)
       & (System_Array__IndexOf_Int32Enum_(
            (System_Int32Enum_array *)v11->fields._LogicArray_k__BackingField,
            endType,
            (const MethodInfo_31D5A58 *)Method_System_Array_IndexOf_BattleLogic_LOGICTYPE___) > logicIndex);
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
      sub_1C2D6EC(0, v7);
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
      sub_1C2D6EC(0, v7);
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

  if ( (byte_4C2988E & 1) == 0 )
  {
    sub_1C2D490(&EnemyFirstAttackManager_TypeInfo);
    sub_1C2D490(&PlayerFirstAttackManager_TypeInfo);
    byte_4C2988E = 1;
  }
  if ( isPrecedingPlayer )
    v5 = &PlayerFirstAttackManager_TypeInfo;
  else
    v5 = &EnemyFirstAttackManager_TypeInfo;
  v6 = (BattleAttackManager_o *)sub_1C2D6DC(*v5);
  BattleAttackManager___ctor(v6, v7);
  if ( !v6 )
    sub_1C2D6EC(v8, v9);
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

  if ( (byte_4C29894 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleAttack__get_Count__);
    byte_4C29894 = 1;
  }
  attackIndex = this->fields.attackIndex;
  v4 = (unsigned int)(attackIndex - 1);
  if ( attackIndex - 1 < 0 )
  {
    attackList = this->fields.attackList;
    if ( !attackList )
      sub_1C2D6EC(v4, method);
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
    sub_1C2D6EC(this, 0);
  this->fields.attackIndex = save->fields.attackIndex;
}


BattleAttack_o *BattleAttackManager__get_Current(BattleAttackManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C2988F & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_BattleAttack___);
    byte_4C2988F = 1;
  }
  return (BattleAttack_o *)BasicHelper__IndexValue_object__51105396(
                             (System_Collections_Generic_List_T__o *)this->fields.attackList,
                             this->fields.attackIndex,
                             0,
                             (const MethodInfo_30BCE74 *)Method_BasicHelper_IndexValue_BattleAttack___);
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
      sub_1C2D6EC(0, v6);
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

  if ( (byte_4C29890 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_BattleAttack___);
    byte_4C29890 = 1;
  }
  attackList = (System_Collections_Generic_List_T__o *)this->fields.attackList;
  Index = BattleAttackManager__PrevIndex(this, method);
  return (BattleAttack_o *)BasicHelper__IndexValue_object__51105396(
                             attackList,
                             Index,
                             0,
                             (const MethodInfo_30BCE74 *)Method_BasicHelper_IndexValue_BattleAttack___);
}


void BattleAttackManager__set_IsTurnEnd(BattleAttackManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsTurnEnd_k__BackingField = value;
}