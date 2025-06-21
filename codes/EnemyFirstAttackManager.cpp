BattleAttackManager_o *__fastcall EnemyFirstAttackManager__Init(
        EnemyFirstAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_T__o *v13; // x21
  System_Collections_Generic_List_T__o *Range; // x0
  __int64 v15; // x1
  int32_t v16; // w0
  int32_t v17; // w22
  System_Int32Enum_array *v18; // x20
  System_Int32Enum_array *v19; // x0
  System_Collections_Generic_List_object__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v21; // x23
  BattleAttack_o *v22; // x22
  const MethodInfo *v23; // x2
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_object__o *v30; // x21
  BattleAttack_o *v31; // x22
  const MethodInfo *v32; // x2
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4B1EA63 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleAttackEnemy_TypeInfo, allLogicArray);
    sub_1BCAFF8(&BattleAttackPlayer_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleAttack__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo, v12);
    byte_4B1EA63 = 1;
  }
  v13 = (System_Collections_Generic_List_T__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_57273516(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_369ECAC *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v13 )
    goto LABEL_18;
  v16 = System_Collections_Generic_List_Int32Enum___IndexOf(
          v13,
          58,
          (const MethodInfo_36A0054 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v16 == -1 )
    return (BattleAttackManager_o *)this;
  v17 = v16 + 1;
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v13,
            0,
            v16 + 1,
            (const MethodInfo_369FF84 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v18 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v13,
            v17,
            v13->fields._size - v17,
            (const MethodInfo_369FF84 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v19 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_36A0E90 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v21 = (BattleLogic_LOGICTYPE_array *)v19;
  v22 = (BattleAttack_o *)sub_1BCB244(BattleAttackEnemy_TypeInfo);
  BattleAttack___ctor(v22, v21, v23);
  if ( !attackList )
    goto LABEL_18;
  items = attackList->fields._items;
  v27 = Method_System_Collections_Generic_List_BattleAttack__Add__;
  ++attackList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = attackList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v22,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v22;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
  }
  v30 = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v31 = (BattleAttack_o *)sub_1BCB244(BattleAttackPlayer_TypeInfo);
  BattleAttack___ctor(v31, (BattleLogic_LOGICTYPE_array *)v18, v32);
  if ( !v30
    || (v35 = v30->fields._items,
        v36 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++v30->fields._version,
        !v35) )
  {
LABEL_18:
    sub_1BCB254(Range, v15);
  }
  v37 = v30->fields._size;
  if ( (unsigned int)v37 >= v35->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      (Il2CppObject *)v31,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &v35->obj.klass + v37;
    v30->fields._size = v37 + 1;
    v38[4] = (Il2CppClass *)v31;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v31, v33, v34);
  }
  return (BattleAttackManager_o *)this;
}


void __fastcall EnemyFirstAttackManager__PrevProcTactical(
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
      BattleLogic__drawCommand((BattleLogic_o *)this, 0LL);
      return;
    }
LABEL_6:
    sub_1BCB254(this, data);
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}