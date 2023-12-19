void __fastcall EnemyFirstAttackManager___ctor(EnemyFirstAttackManager_o *this, const MethodInfo *method)
{
  BattleAttackManager___ctor((BattleAttackManager_o *)this, 0LL);
}


BattleAttackManager_o *__fastcall EnemyFirstAttackManager__Init(
        EnemyFirstAttackManager_o *this,
        BattleLogic_LOGICTYPE_array *allLogicArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_BattleLogic_LOGICTYPE__o *v15; // x21
  int32_t v16; // w0
  int32_t v17; // w22
  System_Collections_Generic_List_T__o *Range; // x0
  BattleLogic_LOGICTYPE_array *v19; // x20
  System_Collections_Generic_List_T__o *v20; // x0
  Voice_BATTLE_array *v21; // x0
  struct System_Collections_Generic_List_BattleAttack__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  BattleAttackEnemy_o *v28; // x22
  struct System_Collections_Generic_List_BattleAttack__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  BattleAttackPlayer_o *v34; // x22

  if ( (byte_40FE2B4 & 1) == 0 )
  {
    sub_B16FFC(&BattleAttackEnemy_TypeInfo, allLogicArray);
    sub_B16FFC(&BattleAttackPlayer_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleAttack__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__, v13);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo, v14);
    byte_40FE2B4 = 1;
  }
  v15 = (System_Collections_Generic_List_BattleLogic_LOGICTYPE__o *)sub_B170CC(
                                                                      System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo,
                                                                      allLogicArray,
                                                                      method,
                                                                      v3,
                                                                      v4);
  System_Collections_Generic_List_BattleLogic_LOGICTYPE____ctor(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_2F12964 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v15 )
    goto LABEL_11;
  v16 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
          (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v15,
          58,
          (const MethodInfo_2F14540 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v16 != -1 )
  {
    v17 = v16 + 1;
    Range = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
              v15,
              0,
              v16 + 1,
              (const MethodInfo_2F14450 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
    if ( Range )
    {
      v19 = (BattleLogic_LOGICTYPE_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)Range,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
      v20 = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
              v15,
              v17,
              v15->fields._size - v17,
              (const MethodInfo_2F14450 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
      if ( v20 )
      {
        v21 = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                (System_Collections_Generic_List_Voice_BATTLE__o *)v20,
                (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
        attackList = this->fields.attackList;
        v23 = (BattleLogic_LOGICTYPE_array *)v21;
        v28 = (BattleAttackEnemy_o *)sub_B170CC(BattleAttackEnemy_TypeInfo, v24, v25, v26, v27);
        BattleAttackEnemy___ctor(v28, v23, 0LL);
        if ( attackList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attackList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
          v29 = this->fields.attackList;
          v34 = (BattleAttackPlayer_o *)sub_B170CC(BattleAttackPlayer_TypeInfo, v30, v31, v32, v33);
          BattleAttackPlayer___ctor(v34, v19, 0LL);
          if ( v29 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
            return (BattleAttackManager_o *)this;
          }
        }
      }
    }
LABEL_11:
    sub_B170D4();
  }
  return (BattleAttackManager_o *)this;
}


void __fastcall EnemyFirstAttackManager__PrevProcTactical(
        EnemyFirstAttackManager_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( !data )
    goto LABEL_6;
  if ( data->fields.isWaitDrawCard )
  {
    logic = data->fields.logic;
    if ( logic )
    {
      BattleLogic__drawCommand(logic, 0LL);
      return;
    }
LABEL_6:
    sub_B170D4();
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}