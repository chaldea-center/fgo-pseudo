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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_object__o *v34; // x21
  BattleAttack_o *v35; // x22
  const MethodInfo *v36; // x2
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0

  if ( (byte_4BB6A48 & 1) == 0 )
  {
    sub_1C13D24(&BattleAttackEnemy_TypeInfo, allLogicArray);
    sub_1C13D24(&BattleAttackPlayer_TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleAttack__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__, v11);
    sub_1C13D24(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo, v12);
    byte_4BB6A48 = 1;
  }
  v13 = (System_Collections_Generic_List_T__o *)sub_1C13F70(System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_56697512(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_36122A8 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v13 )
    goto LABEL_18;
  v16 = System_Collections_Generic_List_Int32Enum___IndexOf(
          v13,
          58,
          (const MethodInfo_3613650 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v16 == -1 )
    return (BattleAttackManager_o *)this;
  v17 = v16 + 1;
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v13,
            0,
            v16 + 1,
            (const MethodInfo_3613580 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v18 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_361448C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v13,
            v17,
            v13->fields._size - v17,
            (const MethodInfo_3613580 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v19 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_361448C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v21 = (BattleLogic_LOGICTYPE_array *)v19;
  v22 = (BattleAttack_o *)sub_1C13F70(BattleAttackEnemy_TypeInfo);
  BattleAttack___ctor(v22, v21, v23);
  if ( !attackList )
    goto LABEL_18;
  items = attackList->fields._items;
  v31 = Method_System_Collections_Generic_List_BattleAttack__Add__;
  ++attackList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = attackList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v22,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v22;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v22, v24, v25, v26, v27, v28, v29);
  }
  v34 = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v35 = (BattleAttack_o *)sub_1C13F70(BattleAttackPlayer_TypeInfo);
  BattleAttack___ctor(v35, (BattleLogic_LOGICTYPE_array *)v18, v36);
  if ( !v34
    || (v43 = v34->fields._items,
        v44 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++v34->fields._version,
        !v43) )
  {
LABEL_18:
    sub_1C13F80(Range, v15);
  }
  v45 = v34->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      (Il2CppObject *)v35,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v34->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v35;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v35, v37, v38, v39, v40, v41, v42);
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
    sub_1C13F80(this, data);
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}