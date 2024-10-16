void __fastcall BattleAttackManager___ctor(BattleAttackManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4AB7FFC & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleAttack___ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_List_BattleAttack__TypeInfo, v3);
    byte_4AB7FFC = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BattleAttack__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BattleAttack___ctor__);
  this->fields.attackList = (struct System_Collections_Generic_List_BattleAttack__o *)v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.attackList, (int32_t)v4, v5, v6);
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

  if ( (byte_4AB7FFE & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___, *(_QWORD *)&index);
    byte_4AB7FFE = 1;
  }
  if ( !BattleAttackManager__get_Current(this, *(const MethodInfo **)&index) )
    return 78;
  Current = BattleAttackManager__get_Current(this, v5);
  if ( !Current )
    sub_1BAB678(0LL, v7);
  return BasicHelper__IndexValue_Int32Enum_(
           (System_Int32Enum_array *)Current->fields._LogicArray_k__BackingField,
           index,
           78,
           (const MethodInfo_2EB3110 *)Method_BasicHelper_IndexValue_BattleLogic_LOGICTYPE___);
}


void __fastcall BattleAttackManager__GetSaveData(
        BattleAttackManager_o *this,
        BattleData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_1BAB678(this, 0LL);
  save->fields.attackIndex = this->fields.attackIndex;
}


BattleAttackManager_o *__fastcall BattleAttackManager__Init(
        BattleAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *attackList; // x20
  BattleAttack_o *v7; // x21
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4AB7FFD & 1) == 0 )
  {
    sub_1BAB41C(&BattleAttackPlayer_TypeInfo, allLogicArray);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleAttack__Add__, v5);
    byte_4AB7FFD = 1;
  }
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v7 = (BattleAttack_o *)sub_1BAB668(BattleAttackPlayer_TypeInfo);
  BattleAttack___ctor(v7, allLogicArray, v8);
  if ( !attackList
    || (items = attackList->fields._items,
        v14 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++attackList->fields._version,
        !items) )
  {
    sub_1BAB678(v9, v10);
  }
  size = attackList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v7,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v7;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v7, v11, v12);
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
      sub_1BAB678(0LL, v7);
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
      sub_1BAB678(0LL, v7);
    LODWORD(Previous) = ((unsigned int)Previous->fields._AttackedInAction_k__BackingField >> isEnemy) & 1;
  }
  return (char)Previous;
}


BattleAttackManager_o *__fastcall BattleAttackManager__Make(
        bool isPrecedingPlayer,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x8
  BattleAttackManager_o *v7; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4AB7FF9 & 1) == 0 )
  {
    sub_1BAB41C(&EnemyFirstAttackManager_TypeInfo, allLogicArray);
    sub_1BAB41C(&PlayerFirstAttackManager_TypeInfo, v5);
    byte_4AB7FF9 = 1;
  }
  if ( isPrecedingPlayer )
    v6 = &PlayerFirstAttackManager_TypeInfo;
  else
    v6 = &EnemyFirstAttackManager_TypeInfo;
  v7 = (BattleAttackManager_o *)sub_1BAB668(*v6);
  BattleAttackManager___ctor(v7, v8);
  if ( !v7 )
    sub_1BAB678(v9, v10);
  return (BattleAttackManager_o *)((__int64 (__fastcall *)(BattleAttackManager_o *, BattleLogic_LOGICTYPE_array *, Il2CppMethodPointer))v7->klass->vtable._5_Init.method)(
                                    v7,
                                    allLogicArray,
                                    v7->klass->vtable._6_Reset.methodPtr);
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

  if ( (byte_4AB7FFF & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleAttack__get_Count__, method);
    byte_4AB7FFF = 1;
  }
  attackIndex = this->fields.attackIndex;
  v4 = (unsigned int)(attackIndex - 1);
  if ( attackIndex - 1 < 0 )
  {
    attackList = this->fields.attackList;
    if ( !attackList )
      sub_1BAB678(v4, method);
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
    sub_1BAB678(this, 0LL);
  this->fields.attackIndex = save->fields.attackIndex;
}


BattleAttack_o *__fastcall BattleAttackManager__get_Current(BattleAttackManager_o *this, const MethodInfo *method)
{
  if ( (byte_4AB7FFA & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_IndexValue_BattleAttack___, method);
    byte_4AB7FFA = 1;
  }
  return (BattleAttack_o *)BasicHelper__IndexValue_object__48968004(
                             (System_Collections_Generic_List_T__o *)this->fields.attackList,
                             this->fields.attackIndex,
                             0LL,
                             (const MethodInfo_2EB3144 *)Method_BasicHelper_IndexValue_BattleAttack___);
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
      sub_1BAB678(0LL, v6);
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

  if ( (byte_4AB7FFB & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_IndexValue_BattleAttack___, method);
    byte_4AB7FFB = 1;
  }
  attackList = (System_Collections_Generic_List_T__o *)this->fields.attackList;
  Index = BattleAttackManager__PrevIndex(this, method);
  return (BattleAttack_o *)BasicHelper__IndexValue_object__48968004(
                             attackList,
                             Index,
                             0LL,
                             (const MethodInfo_2EB3144 *)Method_BasicHelper_IndexValue_BattleAttack___);
}


void __fastcall BattleAttackManager__set_IsTurnEnd(BattleAttackManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsTurnEnd_k__BackingField = value;
}