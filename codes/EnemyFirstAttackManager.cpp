BattleAttackManager_o *EnemyFirstAttackManager__Init(
        EnemyFirstAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  System_Collections_Generic_List_T__o *Range; // x0
  int32_t v7; // w0
  int32_t v8; // w22
  System_Int32Enum_array *v9; // x20
  System_Int32Enum_array *v10; // x0
  System_Collections_Generic_List_object__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v12; // x23
  BattleAttack_o *v13; // x22
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *v21; // x21
  BattleAttack_o *v22; // x22
  const MethodInfo *v23; // x2
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4C39FA4 & 1) == 0 )
  {
    sub_1C32C20(&BattleAttackEnemy_TypeInfo);
    sub_1C32C20(&BattleAttackPlayer_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleAttack__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
    byte_4C39FA4 = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_58185880(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_377D898 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v5 )
    goto LABEL_18;
  v7 = System_Collections_Generic_List_Int32Enum___IndexOf(
         v5,
         58,
         (const MethodInfo_377EC40 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v7 == -1 )
    return (BattleAttackManager_o *)this;
  v8 = v7 + 1;
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v5,
            0,
            v7 + 1,
            (const MethodInfo_377EB70 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v9 = System_Collections_Generic_List_Int32Enum___ToArray(
         Range,
         (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v5,
            v8,
            v5->fields._size - v8,
            (const MethodInfo_377EB70 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v10 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_377FA7C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v12 = (BattleLogic_LOGICTYPE_array *)v10;
  v13 = (BattleAttack_o *)sub_1C32E6C(BattleAttackEnemy_TypeInfo);
  BattleAttack___ctor(v13, v12, v14);
  if ( !attackList )
    goto LABEL_18;
  items = attackList->fields._items;
  v18 = Method_System_Collections_Generic_List_BattleAttack__Add__;
  ++attackList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = attackList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v13,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v13;
    sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
  }
  v21 = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v22 = (BattleAttack_o *)sub_1C32E6C(BattleAttackPlayer_TypeInfo);
  BattleAttack___ctor(v22, (BattleLogic_LOGICTYPE_array *)v9, v23);
  if ( !v21
    || (v26 = v21->fields._items,
        v27 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++v21->fields._version,
        !v26) )
  {
LABEL_18:
    sub_1C32E7C(Range);
  }
  v28 = v21->fields._size;
  if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v22,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->obj.klass + v28;
    v21->fields._size = v28 + 1;
    v29[4] = (Il2CppClass *)v22;
    sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
  }
  return (BattleAttackManager_o *)this;
}


void EnemyFirstAttackManager__PrevProcTactical(
        EnemyFirstAttackManager_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    goto LABEL_6;
  if ( data->fields.isWaitDrawCard )
  {
    this = (EnemyFirstAttackManager_o *)data->fields.logic;
    if ( this )
    {
      BattleLogic__drawCommand((BattleLogic_o *)this, 0);
      return;
    }
LABEL_6:
    sub_1C32E7C(this);
  }
}


bool EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(EnemyFirstAttackManager_o *this, const MethodInfo *method)
{
  return 1;
}