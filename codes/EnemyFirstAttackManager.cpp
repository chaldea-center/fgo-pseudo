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
  int32_t v15; // w0
  int32_t v16; // w22
  BattleLogic_LOGICTYPE_array *v17; // x20
  Voice_BATTLE_array *v18; // x0
  struct System_Collections_Generic_List_BattleAttack__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  BattleAttackEnemy_o *v23; // x22
  struct System_Collections_Generic_List_BattleAttack__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  BattleAttackPlayer_o *v27; // x22

  if ( (byte_4218BB9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleAttackEnemy_TypeInfo, allLogicArray);
    sub_B0D8A4(&BattleAttackPlayer_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleAttack__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo, v12);
    byte_4218BB9 = 1;
  }
  v13 = (System_Collections_Generic_List_BattleLogic_LOGICTYPE__o *)sub_B0D974(
                                                                      System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo,
                                                                      allLogicArray,
                                                                      method);
  System_Collections_Generic_List_BattleLogic_LOGICTYPE____ctor(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_2FB2374 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v13 )
    goto LABEL_11;
  v15 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
          (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v13,
          58,
          (const MethodInfo_2FB3F50 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v15 != -1 )
  {
    v16 = v15 + 1;
    Range = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
              v13,
              0,
              v15 + 1,
              (const MethodInfo_2FB3E60 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
    if ( Range )
    {
      v17 = (BattleLogic_LOGICTYPE_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)Range,
                                             (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
      Range = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
                v13,
                v16,
                v13->fields._size - v16,
                (const MethodInfo_2FB3E60 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
      if ( Range )
      {
        v18 = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                (System_Collections_Generic_List_Voice_BATTLE__o *)Range,
                (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
        attackList = this->fields.attackList;
        v20 = (BattleLogic_LOGICTYPE_array *)v18;
        v23 = (BattleAttackEnemy_o *)sub_B0D974(BattleAttackEnemy_TypeInfo, v21, v22);
        BattleAttackEnemy___ctor(v23, v20, 0LL);
        if ( attackList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attackList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
          v24 = this->fields.attackList;
          v27 = (BattleAttackPlayer_o *)sub_B0D974(BattleAttackPlayer_TypeInfo, v25, v26);
          BattleAttackPlayer___ctor(v27, v17, 0LL);
          if ( v24 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
            return (BattleAttackManager_o *)this;
          }
        }
      }
    }
LABEL_11:
    sub_B0D97C(Range);
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
    sub_B0D97C(this);
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}