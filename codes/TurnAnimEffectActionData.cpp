// local variable allocation has failed, the output may be wrong!
void TurnAnimEffectActionData___ctor(
        TurnAnimEffectActionData_o *this,
        bool isEndEnemyTurn,
        BattleLogic_o *logic,
        BattleLogicFunction_o *logicFunction,
        System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____o *turnProgressBuffDict,
        const MethodInfo *method)
{
  int v9; // w8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_String_o **v16; // x8
  struct System_String_o *v17; // x1
  __int64 v18; // x1
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  BattlePerformance_o *perf; // x0
  int32_t key; // w23
  Il2CppObject *value; // x21
  __int64 v26; // x1
  UnityEngine_Object_o *ServantActor; // x19
  __int64 v28; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v31; // x24
  BattleBuffData_CheckIndividualitiesData_o *v32; // x19
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v34; // x1
  void *monitor; // x8
  unsigned __int64 v36; // x24
  BattleBuffData_BuffData_o *v37; // x25
  const MethodInfo *v38; // x1
  int TurnAnimEffectId; // w26
  int32_t ExecutePriority; // w0
  __int64 v41; // x1
  int32_t turn; // w8
  int32_t v43; // w19
  int32_t SelfTurnProgressGroup; // w22
  int v45; // w27
  BattleActionData_TurnAnimEffectData_o *v46; // x26
  BuffEntity_o *v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  bool IsProgressAct; // w27
  bool v52; // w28
  int32_t state; // w8
  int v54; // w8
  BuffEntity_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x28
  __int64 v58; // x1
  BattleActionData_o *v59; // x27
  __int64 v60; // x0
  __int64 v61; // x1
  SkillLvEntity_o *v62; // x29
  BattleLogicFunction_FunctionArgument_o *argument; // x19
  __int64 v64; // x0
  __int64 v65; // x1
  System_Int32_array *funcId; // x22
  __int64 v67; // x1
  DataVals_array *DataValsList; // x3
  const MethodInfo *v69; // x1
  __int64 v70; // x0
  __int64 v71; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x19
  System_Action_object__o *v73; // x22
  const MethodInfo *isTreasureDvc; // [xsp+0h] [xbp-120h]
  SkillLvMaster_o *skillLvMst; // [xsp+48h] [xbp-D8h]
  System_Int32_array *indiv; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+90h] [xbp-90h] BYREF

  if ( (byte_5973105 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_2213A60(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TurnAnimEffectActionData___c__DisplayClass0_0___ctor_b__0__);
    sub_2213A60(&TurnAnimEffectActionData___c__DisplayClass0_0_TypeInfo);
    sub_2213A60(&StringLiteral_9130/*"MOTION_PLAYER_TURN_END_PROGRESS"*/);
    sub_2213A60(&StringLiteral_9119/*"MOTION_ENEMY_TURN_END_PROGRESS"*/);
    byte_5973105 = 1;
  }
  v9 = *(&BattleActionData_TypeInfo->_2.cctor_finished + 1);
  memset(&v80, 0, sizeof(v80));
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, isEndEnemyTurn);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
  BattleActionData__setStateField((BattleActionData_o *)this, 0);
  if ( isEndEnemyTurn )
    v16 = (struct System_String_o **)&StringLiteral_9119/*"MOTION_ENEMY_TURN_END_PROGRESS"*/;
  else
    v16 = (struct System_String_o **)&StringLiteral_9130/*"MOTION_PLAYER_TURN_END_PROGRESS"*/;
  v17 = *v16;
  this->fields.motionname = *v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.motionname, (int32_t)v17, v10, v11, v12, v13, v14, v15);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  skillLvMst = (SkillLvMaster_o *)Master_object;
  if ( !turnProgressBuffDict )
    sub_2213CDC(Master_object, v20);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v79,
    (System_Collections_Generic_Dictionary_int__object__o *)turnProgressBuffDict,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v80 = v79;
  v79.fields._dictionary = 0;
  *(_QWORD *)&v79.fields._version = &v80;
  while ( 1 )
  {
    v21 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v80,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( !v21 )
      break;
    if ( !logic )
      sub_2213CDC(v21, v22);
    perf = logic->fields.perf;
    if ( !perf )
      sub_2213CDC(0, v22);
    key = (int32_t)v80.fields._current.fields.key;
    value = v80.fields._current.fields.value;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             perf,
                                             (int32_t)v80.fields._current.fields.key,
                                             0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( !UnityEngine_Object__op_Equality(ServantActor, 0, 0) )
    {
      data = logic->fields.data;
      if ( !data )
        sub_2213CDC(0, v28);
      ServantData = BattleData__getServantData(data, key, 0);
      v31 = ServantData;
      if ( ServantData && BattleServantData__isAlive(ServantData, 0, 0) && BattleServantData__isAliveLogic(v31, 1, 0) )
      {
        v32 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
        BattleBuffData_CheckIndividualitiesData___ctor_52826232(v32, v31, v31, 0, 0, 0, 0, 1, isTreasureDvc);
        if ( !v32 )
          sub_2213CDC(Entity, v34);
        if ( !value )
          sub_2213CDC(Entity, v34);
        monitor = value[1].monitor;
        if ( (int)monitor >= 1 )
        {
          v36 = 0;
          indiv = v32->fields._selfConcatSvtIndividualities_k__BackingField;
          do
          {
            if ( v36 >= (unsigned int)monitor )
              sub_2213CE4(Entity);
            v37 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + v36);
            if ( v37 )
            {
              Entity = (SkillLvEntity_o *)BattleBuffData_BuffData__get_Entity(
                                            *((BattleBuffData_BuffData_o **)&value[2].klass + v36),
                                            v34);
              if ( Entity )
              {
                TurnAnimEffectId = BattleBuffData_BuffData__GetTurnAnimEffectId(v37, v34);
                if ( TurnAnimEffectId < 1 )
                {
                  v46 = 0;
                }
                else
                {
                  ExecutePriority = BattleBuffData_BuffData__GetExecutePriority(v37, v38);
                  turn = v37->fields.turn;
                  v43 = ExecutePriority;
                  SelfTurnProgressGroup = v37->fields.SelfTurnProgressGroup;
                  if ( turn + 1 >= 0 )
                    v45 = turn + 1;
                  else
                    v45 = turn + 2;
                  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, v41);
                  v46 = BattleActionData__AddTurnAnimEffectData(
                          (BattleActionData_o *)this,
                          v43,
                          key,
                          TurnAnimEffectId,
                          v45 >> 1,
                          SelfTurnProgressGroup,
                          0);
                }
                v47 = BattleBuffData_BuffData__get_Entity(v37, v38);
                if ( !v47 )
                  sub_2213CDC(0, v48);
                IsProgressAct = BuffEntity__IsProgressAct(v47, indiv, 0);
                if ( IsProgressAct )
                {
                  Entity = (SkillLvEntity_o *)BattleBuffData_BuffData__IsApplySourceActable(v37, 0, v49);
                  v52 = 0;
                  if ( ((unsigned __int8)Entity & 1) != 0 )
                  {
                    state = v37->fields.state;
                    v52 = (state & 0x224011) == 0 && (state & 0x4000000) == 0;
                  }
                }
                else
                {
                  Entity = (SkillLvEntity_o *)BattleBuffData_BuffData__checkAct(v37, 1, 1, v50);
                  v52 = (char)Entity;
                }
                if ( v37->fields.turn <= 0 )
                {
                  v55 = BattleBuffData_BuffData__get_Entity(v37, v34);
                  if ( !v55 )
                    sub_2213CDC(0, v56);
                  Entity = (SkillLvEntity_o *)BuffEntity__IsEndProgressAct(v55, indiv, 0);
                  v54 = (unsigned __int8)Entity & 1;
                }
                else
                {
                  v54 = 0;
                }
                if ( v52 && (v54 | IsProgressAct) != 0 )
                {
                  v57 = sub_2213CCC(TurnAnimEffectActionData___c__DisplayClass0_0_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v57, 0);
                  v59 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
                  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, v58);
                  BattleActionData___ctor(v59, 0);
                  if ( !v59 )
                    sub_2213CDC(v60, v61);
                  v59->fields.actorId = key;
                  v59->fields.targetId = key;
                  Entity = BattleServantData__getSkillFromBuff(skillLvMst, v37, 0);
                  v62 = Entity;
                  if ( Entity )
                  {
                    argument = (BattleLogicFunction_FunctionArgument_o *)sub_2213CCC(BattleLogicFunction_FunctionArgument_TypeInfo);
                    BattleLogicFunction_FunctionArgument___ctor(argument, 0);
                    if ( !argument )
                      sub_2213CDC(v64, v65);
                    argument->fields._IsSetSubstituteBuffAction_k__BackingField = 1;
                    funcId = v62->fields.funcId;
                    DataValsList = SkillLvEntity__getDataValsList(v62, 0);
                    if ( !logicFunction )
                      sub_2213CDC(0, v67);
                    BattleLogicFunction__procList(
                      logicFunction,
                      v59,
                      funcId,
                      DataValsList,
                      0,
                      1,
                      0,
                      0,
                      0,
                      1,
                      1,
                      argument,
                      v62->fields.skillId,
                      0);
                    v70 = BattleBuffData_BuffData__GetExecutePriority(v37, v69);
                    if ( !v57 )
                      sub_2213CDC(v70, v71);
                    *(_DWORD *)(v57 + 16) = v70;
                    buffdatalist = (System_Collections_Generic_List_object__o *)v59->fields.buffdatalist;
                    if ( buffdatalist )
                    {
                      v73 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
                      System_Action_object____ctor(
                        v73,
                        (Il2CppObject *)v57,
                        Method_TurnAnimEffectActionData___c__DisplayClass0_0___ctor_b__0__,
                        0);
                      System_Collections_Generic_List_object___ForEach(
                        buffdatalist,
                        (System_Action_T__o *)v73,
                        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
                    }
                    if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, v71);
                    BattleActionData__SetTurnAnimEffectData(v59, v46, 0);
                    BattleActionData__addAction((BattleActionData_o *)this, v59, 0);
                  }
                }
              }
            }
            LODWORD(monitor) = value[1].monitor;
            ++v36;
          }
          while ( (__int64)v36 < (int)monitor );
        }
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v80,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
}


void TurnAnimEffectActionData___c__DisplayClass0_0___ctor(
        TurnAnimEffectActionData___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TurnAnimEffectActionData___c__DisplayClass0_0____ctor_b__0(
        TurnAnimEffectActionData___c__DisplayClass0_0_o *this,
        BattleActionData_BuffData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
  d->fields.executePriority = this->fields.sourcePriority;
}