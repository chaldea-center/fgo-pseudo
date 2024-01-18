void __fastcall EnemyFirstAttackManager___ctor(EnemyFirstAttackManager_o *this, const MethodInfo *method)
{
  BattleAttackManager___ctor((BattleAttackManager_o *)this, 0LL);
}


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
  System_Collections_Generic_List_BattleLogic_LOGICTYPE__o *v13; // x21
  System_Collections_Generic_List_T__o *Range; // x0
  __int64 v15; // x1
  int32_t v16; // w0
  int32_t v17; // w22
  BattleLogic_LOGICTYPE_array *v18; // x20
  Voice_BATTLE_array *v19; // x0
  struct System_Collections_Generic_List_BattleAttack__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v21; // x23
  BattleAttackEnemy_o *v22; // x22
  struct System_Collections_Generic_List_BattleAttack__o *v23; // x21
  BattleAttackPlayer_o *v24; // x22

  if ( (byte_418BD96 & 1) == 0 )
  {
    sub_B2C35C(&BattleAttackEnemy_TypeInfo, allLogicArray);
    sub_B2C35C(&BattleAttackPlayer_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleAttack__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__, v11);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo, v12);
    byte_418BD96 = 1;
  }
  v13 = (System_Collections_Generic_List_BattleLogic_LOGICTYPE__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
  System_Collections_Generic_List_BattleLogic_LOGICTYPE____ctor(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_2F6946C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v13 )
    goto LABEL_11;
  v16 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
          (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v13,
          58,
          (const MethodInfo_2F6B048 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v16 != -1 )
  {
    v17 = v16 + 1;
    Range = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
              v13,
              0,
              v16 + 1,
              (const MethodInfo_2F6AF58 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
    if ( Range )
    {
      v18 = (BattleLogic_LOGICTYPE_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)Range,
                                             (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
      Range = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
                v13,
                v17,
                v13->fields._size - v17,
                (const MethodInfo_2F6AF58 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
      if ( Range )
      {
        v19 = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                (System_Collections_Generic_List_Voice_BATTLE__o *)Range,
                (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
        attackList = this->fields.attackList;
        v21 = (BattleLogic_LOGICTYPE_array *)v19;
        v22 = (BattleAttackEnemy_o *)sub_B2C42C(BattleAttackEnemy_TypeInfo);
        BattleAttackEnemy___ctor(v22, v21, 0LL);
        if ( attackList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attackList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
          v23 = this->fields.attackList;
          v24 = (BattleAttackPlayer_o *)sub_B2C42C(BattleAttackPlayer_TypeInfo);
          BattleAttackPlayer___ctor(v24, v18, 0LL);
          if ( v23 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
            return (BattleAttackManager_o *)this;
          }
        }
      }
    }
LABEL_11:
    sub_B2C434(Range, v15);
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
    sub_B2C434(this, data);
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}