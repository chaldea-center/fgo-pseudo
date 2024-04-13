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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_BattleLogic_LOGICTYPE__o *v30; // x21
  System_Collections_Generic_List_T__o *Range; // x0
  __int64 v32; // x1
  int32_t v33; // w0
  int32_t v34; // w22
  BattleLogic_LOGICTYPE_array *v35; // x20
  Voice_BATTLE_array *v36; // x0
  struct System_Collections_Generic_List_BattleAttack__o *attackList; // x21
  BattleLogic_LOGICTYPE_array *v38; // x23
  BattleAttackEnemy_o *v39; // x22
  struct System_Collections_Generic_List_BattleAttack__o *v40; // x21
  BattleAttackPlayer_o *v41; // x22

  if ( (byte_42ECFFE & 1) == 0 )
  {
    sub_B5D5C4(&BattleAttackEnemy_TypeInfo, (_DWORD)allLogicArray, (_DWORD)method, v3);
    sub_B5D5C4(&BattleAttackPlayer_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleAttack__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__get_Count__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo, v27, v28, v29);
    byte_42ECFFE = 1;
  }
  v30 = (System_Collections_Generic_List_BattleLogic_LOGICTYPE__o *)sub_B5D694(System_Collections_Generic_List_BattleLogic_LOGICTYPE__TypeInfo);
  System_Collections_Generic_List_BattleLogic_LOGICTYPE____ctor(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)allLogicArray,
    (const MethodInfo_3043C4C *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE___ctor__);
  if ( !v30 )
    goto LABEL_11;
  v33 = System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind___IndexOf(
          (System_Collections_Generic_List_ServantStatusListViewItemDraw_Kind__o *)v30,
          58,
          (const MethodInfo_3045828 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__IndexOf__);
  if ( v33 != -1 )
  {
    v34 = v33 + 1;
    Range = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
              v30,
              0,
              v33 + 1,
              (const MethodInfo_3045738 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
    if ( Range )
    {
      v35 = (BattleLogic_LOGICTYPE_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)Range,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
      Range = System_Collections_Generic_List_BattleLogic_LOGICTYPE___GetRange(
                v30,
                v34,
                v30->fields._size - v34,
                (const MethodInfo_3045738 *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__GetRange__);
      if ( Range )
      {
        v36 = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                (System_Collections_Generic_List_Voice_BATTLE__o *)Range,
                (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_BattleLogic_LOGICTYPE__ToArray__);
        attackList = this->fields.attackList;
        v38 = (BattleLogic_LOGICTYPE_array *)v36;
        v39 = (BattleAttackEnemy_o *)sub_B5D694(BattleAttackEnemy_TypeInfo);
        BattleAttackEnemy___ctor(v39, v38, 0LL);
        if ( attackList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attackList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
          v40 = this->fields.attackList;
          v41 = (BattleAttackPlayer_o *)sub_B5D694(BattleAttackPlayer_TypeInfo);
          BattleAttackPlayer___ctor(v41, v35, 0LL);
          if ( v40 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v40,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleAttack__Add__);
            return (BattleAttackManager_o *)this;
          }
        }
      }
    }
LABEL_11:
    sub_B5D69C(Range, v32);
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
    sub_B5D69C(this, data);
  }
}


bool __fastcall EnemyFirstAttackManager__get_IsTurnLastAttackPlayer(
        EnemyFirstAttackManager_o *this,
        const MethodInfo *method)
{
  return 1;
}