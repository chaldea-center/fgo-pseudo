BattleAttackManager_o *__fastcall EnemyFirstAttackManager__Init(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_object__o *v26; // x21
  BattleAttack_o *v27; // x22
  const MethodInfo *v28; // x2
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4BDE8D8 & 1) == 0 )
  {
    sub_1C21E38(&BattleAttackEnemy_TypeInfo);
    sub_1C21E38(&BattleAttackPlayer_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleAttack__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
    byte_4BDE8D8 = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_56836496(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_3634190 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v5 )
    goto LABEL_18;
  v8 = System_Collections_Generic_List_Int32Enum___IndexOf(
         v5,
         58,
         (const MethodInfo_3635538 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v8 == -1 )
    return (BattleAttackManager_o *)this;
  v9 = v8 + 1;
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v5,
            0,
            v8 + 1,
            (const MethodInfo_3635468 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v10 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v5,
            v9,
            v5->fields._size - v9,
            (const MethodInfo_3635468 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v11 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_3636374 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v13 = (BattleLogic_LOGICTYPE_array *)v11;
  v14 = (BattleAttack_o *)sub_1C22084(BattleAttackEnemy_TypeInfo);
  BattleAttack___ctor(v14, v13, v15);
  if ( !attackList )
    goto LABEL_18;
  items = attackList->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleAttack__Add__;
  ++attackList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = attackList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v14,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v14;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v14, v16, v17, v18, v19, v20, v21);
  }
  v26 = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v27 = (BattleAttack_o *)sub_1C22084(BattleAttackPlayer_TypeInfo);
  BattleAttack___ctor(v27, (BattleLogic_LOGICTYPE_array *)v10, v28);
  if ( !v26
    || (v35 = v26->fields._items,
        v36 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++v26->fields._version,
        !v35) )
  {
LABEL_18:
    sub_1C22094(Range, v7);
  }
  v37 = v26->fields._size;
  if ( (unsigned int)v37 >= v35->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)v27,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &v35->obj.klass + v37;
    v26->fields._size = v37 + 1;
    v38[4] = (Il2CppClass *)v27;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v27, v29, v30, v31, v32, v33, v34);
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
    sub_1C22094(this, data);
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}