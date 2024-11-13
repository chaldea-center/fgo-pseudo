BattleAttackManager_o *__fastcall EnemyFirstAttackManager__Init(
        EnemyFirstAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_T__o *v22; // x21
  System_Collections_Generic_List_T__o *Range; // x0
  __int64 v24; // x1
  int32_t v25; // w0
  int32_t v26; // w22
  System_Int32Enum_array *v27; // x20
  System_Int32Enum_array *v28; // x0
  System_Collections_Generic_List_object__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  BattleAttack_o *v34; // x22
  const MethodInfo *v35; // x2
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_object__o *v49; // x21
  BattleAttack_o *v50; // x22
  const MethodInfo *v51; // x2
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0

  if ( (byte_4B184CA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleAttackEnemy_TypeInfo, allLogicArray, method);
    sub_1BCA7E0(&BattleAttackPlayer_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleAttack__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo, v20, v21);
    byte_4B184CA = 1;
  }
  v22 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo,
                                                  allLogicArray,
                                                  method,
                                                  v3);
  System_Collections_Generic_List_Int32Enum____ctor_56126776(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_3586D38 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v22 )
    goto LABEL_18;
  v25 = System_Collections_Generic_List_Int32Enum___IndexOf(
          v22,
          58,
          (const MethodInfo_35880E0 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v25 == -1 )
    return (BattleAttackManager_o *)this;
  v26 = v25 + 1;
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v22,
            0,
            v25 + 1,
            (const MethodInfo_3588010 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v27 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  Range = System_Collections_Generic_List_Int32Enum___GetRange(
            v22,
            v26,
            v22->fields._size - v26,
            (const MethodInfo_3588010 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
  if ( !Range )
    goto LABEL_18;
  v28 = System_Collections_Generic_List_Int32Enum___ToArray(
          Range,
          (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
  attackList = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v30 = (BattleLogic_LOGICTYPE_array *)v28;
  v34 = (BattleAttack_o *)sub_1BCAA2C(BattleAttackEnemy_TypeInfo, v31, v32, v33);
  BattleAttack___ctor(v34, v30, v35);
  if ( !attackList )
    goto LABEL_18;
  items = attackList->fields._items;
  v43 = Method_System_Collections_Generic_List_BattleAttack__Add__;
  ++attackList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = attackList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      attackList,
      (Il2CppObject *)v34,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &items->obj.klass + size;
    attackList->fields._size = size + 1;
    v45[4] = (Il2CppClass *)v34;
    sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v34, v36, v37, v38, v39, v40, v41);
  }
  v49 = (System_Collections_Generic_List_object__o *)this->fields.attackList;
  v50 = (BattleAttack_o *)sub_1BCAA2C(BattleAttackPlayer_TypeInfo, v46, v47, v48);
  BattleAttack___ctor(v50, (BattleLogic_LOGICTYPE_array *)v27, v51);
  if ( !v49
    || (v58 = v49->fields._items,
        v59 = Method_System_Collections_Generic_List_BattleAttack__Add__,
        ++v49->fields._version,
        !v58) )
  {
LABEL_18:
    sub_1BCAA3C(Range, v24);
  }
  v60 = v49->fields._size;
  if ( (unsigned int)v60 >= v58->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      (Il2CppObject *)v50,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = &v58->obj.klass + v60;
    v49->fields._size = v60 + 1;
    v61[4] = (Il2CppClass *)v50;
    sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v50, v52, v53, v54, v55, v56, v57);
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
    sub_1BCAA3C(this, data);
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}