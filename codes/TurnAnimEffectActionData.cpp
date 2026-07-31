// local variable allocation has failed, the output may be wrong!
void TurnAnimEffectActionData___ctor(
        TurnAnimEffectActionData_o *this,
        bool isEndEnemyTurn,
        BattleLogic_o *logic,
        BattleLogicFunction_o *logicFunction,
        System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____o *turnProgressBuffDict,
        const MethodInfo *method)
{
  BattleActionData_c **v6; // x29
  int v10; // w8
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_String_o **v17; // x8
  struct System_String_o *v18; // x1
  __int64 v19; // x1
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  BattlePerformance_o *perf; // x0
  int32_t key; // w23
  Il2CppObject *value; // x21
  __int64 v27; // x1
  UnityEngine_Object_o *ServantActor; // x19
  __int64 v29; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v32; // x24
  BattleBuffData_CheckIndividualitiesData_o *v33; // x25
  BattleActionData_TurnAnimEffectData_o *Entity; // x0
  const MethodInfo *v35; // x1
  void *monitor; // x8
  unsigned __int64 v37; // x24
  BattleBuffData_BuffData_o *v38; // x25
  int32_t v39; // w26
  int32_t ExecutePriority; // w0
  __int64 v41; // x1
  int32_t turn; // w8
  int32_t v43; // w27
  int32_t SelfTurnProgressGroup; // w28
  int v45; // w19
  BattleActionData_TurnAnimEffectData_o *v46; // x26
  BuffEntity_o *v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x19
  __int64 v51; // x1
  BattleActionData_o *v52; // x27
  __int64 v53; // x0
  __int64 v54; // x1
  BattleActionData_TurnAnimEffectData_o *v55; // x19
  BattleActionData_c **v56; // x28
  System_Int32_array *v57; // x29
  __int64 v58; // x1
  DataVals_array *DataValsList; // x3
  const MethodInfo *v60; // x1
  __int64 v61; // x0
  __int64 v62; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x25
  System_Action_object__o *v64; // x19
  const MethodInfo *isTreasureDvc; // [xsp+0h] [xbp-120h]
  SkillLvMaster_o *skillLvMst; // [xsp+48h] [xbp-D8h]
  Il2CppObject *object; // [xsp+50h] [xbp-D0h]
  System_Int32_array *indiv; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+68h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v72; // [xsp+90h] [xbp-90h] BYREF

  v6 = &BattleActionData_TypeInfo;
  if ( (byte_593AF20 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_21FFC50(&BattleActionData_TypeInfo);
    sub_21FFC50(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_TurnAnimEffectActionData___c__DisplayClass0_0___ctor_b__0__);
    sub_21FFC50(&TurnAnimEffectActionData___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&StringLiteral_9117/*"MOTION_PLAYER_TURN_END_PROGRESS"*/);
    sub_21FFC50(&StringLiteral_9106/*"MOTION_ENEMY_TURN_END_PROGRESS"*/);
    byte_593AF20 = 1;
  }
  v10 = *(&BattleActionData_TypeInfo->_2.cctor_finished + 1);
  memset(&v72, 0, sizeof(v72));
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, isEndEnemyTurn);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
  BattleActionData__setStateField((BattleActionData_o *)this, 0);
  if ( isEndEnemyTurn )
    v17 = (struct System_String_o **)&StringLiteral_9106/*"MOTION_ENEMY_TURN_END_PROGRESS"*/;
  else
    v17 = (struct System_String_o **)&StringLiteral_9117/*"MOTION_PLAYER_TURN_END_PROGRESS"*/;
  v18 = *v17;
  this->fields.motionname = *v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.motionname, (int32_t)v18, v11, v12, v13, v14, v15, v16);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  skillLvMst = (SkillLvMaster_o *)Master_object;
  if ( !turnProgressBuffDict )
    sub_21FFECC(Master_object, v21);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v71,
    (System_Collections_Generic_Dictionary_int__object__o *)turnProgressBuffDict,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v72 = v71;
  v71.fields._dictionary = 0;
  *(_QWORD *)&v71.fields._version = &v72;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v72,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( !v22 )
      break;
    if ( !logic )
      sub_21FFECC(v22, v23);
    perf = logic->fields.perf;
    if ( !perf )
      sub_21FFECC(0, v23);
    key = (int32_t)v72.fields._current.fields.key;
    value = v72.fields._current.fields.value;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             perf,
                                             (int32_t)v72.fields._current.fields.key,
                                             0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( !UnityEngine_Object__op_Equality(ServantActor, 0, 0) )
    {
      data = logic->fields.data;
      if ( !data )
        sub_21FFECC(0, v29);
      ServantData = BattleData__getServantData(data, key, 0);
      v32 = ServantData;
      if ( ServantData && BattleServantData__isAlive(ServantData, 0, 0) && BattleServantData__isAliveLogic(v32, 1, 0) )
      {
        v33 = (BattleBuffData_CheckIndividualitiesData_o *)sub_21FFEBC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
        BattleBuffData_CheckIndividualitiesData___ctor_52746792(v33, v32, v32, 0, 0, 0, 0, 1, isTreasureDvc);
        if ( !v33 )
          sub_21FFECC(Entity, v35);
        if ( !value )
          sub_21FFECC(Entity, v35);
        monitor = value[1].monitor;
        if ( (int)monitor >= 1 )
        {
          v37 = 0;
          indiv = v33->fields._selfConcatSvtIndividualities_k__BackingField;
          do
          {
            if ( v37 >= (unsigned int)monitor )
              sub_21FFED4(Entity);
            v38 = (BattleBuffData_BuffData_o *)*((_QWORD *)&value[2].klass + v37);
            if ( v38 )
            {
              Entity = (BattleActionData_TurnAnimEffectData_o *)BattleBuffData_BuffData__get_Entity(
                                                                  *((BattleBuffData_BuffData_o **)&value[2].klass + v37),
                                                                  v35);
              if ( Entity )
              {
                Entity = (BattleActionData_TurnAnimEffectData_o *)BattleBuffData_BuffData__GetTurnAnimEffectId(v38, v35);
                v39 = (int)Entity;
                if ( (int)Entity < 1 )
                {
                  v46 = 0;
                }
                else
                {
                  ExecutePriority = BattleBuffData_BuffData__GetExecutePriority(v38, v35);
                  turn = v38->fields.turn;
                  v43 = ExecutePriority;
                  SelfTurnProgressGroup = v38->fields.SelfTurnProgressGroup;
                  if ( turn + 1 >= 0 )
                    v45 = turn + 1;
                  else
                    v45 = turn + 2;
                  if ( !*(&(*v6)->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(*v6, v41);
                  Entity = BattleActionData__AddTurnAnimEffectData(
                             (BattleActionData_o *)this,
                             v43,
                             key,
                             v39,
                             v45 >> 1,
                             SelfTurnProgressGroup,
                             0);
                  v46 = Entity;
                }
                if ( v38->fields.turn <= 0 )
                {
                  v47 = BattleBuffData_BuffData__get_Entity(v38, v35);
                  if ( !v47 )
                    sub_21FFECC(0, v48);
                  Entity = (BattleActionData_TurnAnimEffectData_o *)BuffEntity__IsEndProgressAct(v47, indiv, 0);
                  if ( ((unsigned __int8)Entity & 1) != 0 )
                  {
                    Entity = (BattleActionData_TurnAnimEffectData_o *)BattleBuffData_BuffData__checkAct(v38, 1, 1, v49);
                    if ( ((unsigned __int8)Entity & 1) != 0 )
                    {
                      v50 = (Il2CppObject *)sub_21FFEBC(TurnAnimEffectActionData___c__DisplayClass0_0_TypeInfo);
                      System_Object___ctor(v50, 0);
                      v52 = (BattleActionData_o *)sub_21FFEBC(*v6);
                      if ( !*(&(*v6)->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(*v6, v51);
                      BattleActionData___ctor(v52, 0);
                      object = v50;
                      if ( !v52 )
                        sub_21FFECC(v53, v54);
                      v52->fields.actorId = key;
                      v52->fields.targetId = key;
                      Entity = (BattleActionData_TurnAnimEffectData_o *)BattleServantData__getSkillFromBuff(
                                                                          skillLvMst,
                                                                          v38,
                                                                          0);
                      v55 = Entity;
                      if ( Entity )
                      {
                        v56 = v6;
                        v57 = *(System_Int32_array **)&Entity->fields._ShowBuffGroupId_k__BackingField;
                        DataValsList = SkillLvEntity__getDataValsList((SkillLvEntity_o *)Entity, 0);
                        if ( !logicFunction )
                          sub_21FFECC(0, v58);
                        BattleLogicFunction__procList(
                          logicFunction,
                          v52,
                          v57,
                          DataValsList,
                          0,
                          1,
                          0,
                          0,
                          0,
                          1,
                          1,
                          0,
                          v55->fields._ExecutePriority_k__BackingField,
                          0);
                        v61 = BattleBuffData_BuffData__GetExecutePriority(v38, v60);
                        if ( !object )
                          sub_21FFECC(v61, v62);
                        LODWORD(object[1].klass) = v61;
                        v6 = v56;
                        buffdatalist = (System_Collections_Generic_List_object__o *)v52->fields.buffdatalist;
                        if ( buffdatalist )
                        {
                          v64 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleActionData_BuffData__TypeInfo);
                          System_Action_object____ctor(
                            v64,
                            object,
                            Method_TurnAnimEffectActionData___c__DisplayClass0_0___ctor_b__0__,
                            0);
                          System_Collections_Generic_List_object___ForEach(
                            buffdatalist,
                            (System_Action_T__o *)v64,
                            (const MethodInfo_445054C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
                        }
                        if ( !*(&(*v56)->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(*v56, v62);
                        BattleActionData__SetTurnAnimEffectData(v52, v46, 0);
                        BattleActionData__addAction((BattleActionData_o *)this, v52, 0);
                      }
                    }
                  }
                }
              }
            }
            LODWORD(monitor) = value[1].monitor;
            ++v37;
          }
          while ( (__int64)v37 < (int)monitor );
        }
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v72,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
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
    sub_21FFECC(this, 0);
  d->fields.executePriority = this->fields.sourcePriority;
}