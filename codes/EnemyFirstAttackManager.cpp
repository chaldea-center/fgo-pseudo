BattleAttackManager_o *EnemyFirstAttackManager__Init(
        EnemyFirstAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  System_Collections_Generic_List_T__o *Range; // x0
  __int64 v7; // x1
  int32_t v8; // w0
  int32_t v9; // w22
  System_Int32Enum_array *v10; // x20
  System_Int32Enum_array *v11; // x0
  System_Collections_Generic_List_object__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v13; // x23
  BattleAttack_o *v14; // x22
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_object__o *v22; // x21
  BattleAttack_o *v23; // x22
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4C5944A & 1) == 0 )
  {
    sub_1C3E564(&BattleAttackEnemy_TypeInfo);
    sub_1C3E564(&BattleAttackPlayer_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleAttack__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
    byte_4C5944A = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_58303804(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_379A53C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v5 )
    goto LABEL_18;
  v8 = System_Collections_Generic_List_Int32Enum___IndexOf(
         v5,
         58,
         (const MethodInfo_379B8E4 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v8 == -1 )
    return (BattleAttackManager_o *)this;
  v9 = v8 + 1;
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v5,
            0,
            v8 + 1,
            (const MethodInfo_379B814 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v10 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v5,
            v9,
            v5->fields._size - v9,
            (const MethodInfo_379B814 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v11 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v13 = (BattleLogic_LOGICTYPE_array *)v11;
  v14 = (BattleAttack_o *)sub_1C3E7B0(BattleAttackEnemy_TypeInfo);
  BattleAttack___ctor(v14, v13, v15);
  if ( !attackList )
    goto LABEL_18;
  items = attackList->fields._items;
  v19 = Method_System_Collections_Generic_List_BattleAttack__Add__;
  ++attackList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = attackList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v14,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v14;
    sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
  }
  v22 = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v23 = (BattleAttack_o *)sub_1C3E7B0(BattleAttackPlayer_TypeInfo);
  BattleAttack___ctor(v23, (BattleLogic_LOGICTYPE_array *)v10, v24);
  if ( !v22
    || (v27 = v22->fields._items,
        v28 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++v22->fields._version,
        !v27) )
  {
LABEL_18:
    sub_1C3E7C0(Range, v7);
  }
  v29 = v22->fields._size;
  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v23,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &v27->obj.klass + v29;
    v22->fields._size = v29 + 1;
    v30[4] = (Il2CppClass *)v23;
    sub_1C3E508((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
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
    sub_1C3E7C0(this, data);
  }
}


bool EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(EnemyFirstAttackManager_o *this, const MethodInfo *method)
{
  return 1;
}