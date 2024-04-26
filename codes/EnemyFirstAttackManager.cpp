void __fastcall EnemyFirstAttackManager___ctor(EnemyFirstAttackManager_o *this, const MethodInfo *method)
{
  BattleAttackManager___ctor((BattleAttackManager_o *)this, 0LL);
}


BattleAttackManager_o *__fastcall EnemyFirstAttackManager__Init(
        EnemyFirstAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogic_LOGICTYPE__o *v5; // x21
  System_Collections_Generic_List_T__o *Range; // x0
  __int64 v7; // x1
  int32_t v8; // w0
  int32_t v9; // w22
  BattleLogic_LOGICTYPE_array *v10; // x20
  Voice_BATTLE_array *v11; // x0
  struct System_Collections_Generic_List_BattleAttack__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v13; // x23
  BattleAttackEnemy_o *v14; // x22
  struct System_Collections_Generic_List_BattleAttack__o *v15; // x21
  BattleAttackPlayer_o *v16; // x22

  if ( (byte_435641D & 1) == 0 )
  {
    sub_B70694(&BattleAttackEnemy_TypeInfo);
    sub_B70694(&BattleAttackPlayer_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleAttack__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__);
    sub_B70694(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
    byte_435641D = 1;
  }
  v5 = (System_Collections_Generic_List_BattleLogic_LOGICTYPE__o *)sub_B70764(System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
  System_Collections_Generic_List_BattleLogic_LOGICTYPE____ctor(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_30B864C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v5 )
    goto LABEL_11;
  v8 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
         (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v5,
         58,
         (const MethodInfo_30BA228 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v8 != -1 )
  {
    v9 = v8 + 1;
    Range = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
              v5,
              0,
              v8 + 1,
              (const MethodInfo_30BA138 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
    if ( Range )
    {
      v10 = (BattleLogic_LOGICTYPE_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)Range,
                                             (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
      Range = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
                v5,
                v9,
                v5->fields._size - v9,
                (const MethodInfo_30BA138 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
      if ( Range )
      {
        v11 = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                (System_Collections_Generic_List_Voice_BATTLE__o *)Range,
                (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
        attackList = this->fields.attackList;
        v13 = (BattleLogic_LOGICTYPE_array *)v11;
        v14 = (BattleAttackEnemy_o *)sub_B70764(BattleAttackEnemy_TypeInfo);
        BattleAttackEnemy___ctor(v14, v13, 0LL);
        if ( attackList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attackList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
          v15 = this->fields.attackList;
          v16 = (BattleAttackPlayer_o *)sub_B70764(BattleAttackPlayer_TypeInfo);
          BattleAttackPlayer___ctor(v16, v10, 0LL);
          if ( v15 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
            return (BattleAttackManager_o *)this;
          }
        }
      }
    }
LABEL_11:
    sub_B7076C(Range, v7);
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
    sub_B7076C(this, data);
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}