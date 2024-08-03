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
  int32_t v15; // w0
  int32_t v16; // w22
  System_Int32Enum_array *v17; // x20
  System_Int32Enum_array *v18; // x0
  System_Collections_Generic_List_object__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  BattleAttack_o *v23; // x22
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x21
  BattleAttack_o *v34; // x22
  const MethodInfo *v35; // x2
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0

  if ( (byte_49FE655 & 1) == 0 )
  {
    sub_1B640C8(&BattleAttackEnemy_TypeInfo, allLogicArray);
    sub_1B640C8(&BattleAttackPlayer_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleAttack__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__, v11);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo, v12);
    byte_49FE655 = 1;
  }
  v13 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo,
                                                  allLogicArray,
                                                  method);
  System_Collections_Generic_List_Int32Enum____ctor_55124092(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_349207C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v13 )
    goto LABEL_18;
  v15 = System_Collections_Generic_List_Int32Enum___IndexOf(
          v13,
          58,
          (const MethodInfo_34934C4 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v15 == -1 )
    return (BattleAttackManager_o *)this;
  v16 = v15 + 1;
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v13,
            0,
            v15 + 1,
            (const MethodInfo_34933F4 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v17 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v13,
            v16,
            v13->fields._size - v16,
            (const MethodInfo_34933F4 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v18 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v20 = (BattleLogic_LOGICTYPE_array *)v18;
  v23 = (BattleAttack_o *)sub_1B64314(BattleAttackEnemy_TypeInfo, v21, v22);
  BattleAttack___ctor(v23, v20, v24);
  if ( !attackList )
    goto LABEL_18;
  items = attackList->fields._items;
  v28 = Method_System_Collections_Generic_List_BattleAttack__Add__;
  ++attackList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = attackList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v23,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
  }
  v33 = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v34 = (BattleAttack_o *)sub_1B64314(BattleAttackPlayer_TypeInfo, v31, v32);
  BattleAttack___ctor(v34, (BattleLogic_LOGICTYPE_array *)v17, v35);
  if ( !v33
    || (v38 = v33->fields._items,
        v39 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++v33->fields._version,
        !v38) )
  {
LABEL_18:
    sub_1B64324(Range);
  }
  v40 = v33->fields._size;
  if ( (unsigned int)v40 >= v38->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v34,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v38->obj.klass + v40;
    v33->fields._size = v40 + 1;
    v41[4] = (Il2CppClass *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v34, v36, v37);
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
    sub_1B64324(this);
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}