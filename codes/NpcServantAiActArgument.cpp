void NpcServantAiActArgument___ctor(
        NpcServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        BattleLogicNpcAi_o *npcAi,
        int32_t fromProcState,
        const MethodInfo *method)
{
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, fromProcState, (const MethodInfo *)npcAi);
  this->fields._SvtData_k__BackingField = svtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SvtData_k__BackingField,
    (int32_t)svtData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields._NpcAi_k__BackingField = npcAi;
  this->fields._IsNoMessage_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NpcAi_k__BackingField,
    (int32_t)npcAi,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void NpcServantAiActArgument__InitCommonTask(
        NpcServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 NpcAi_k__BackingField; // x0
  char v7; // w22
  __int64 v8; // x0
  BattleLogicNpcAi_o *v9; // x23
  BattleActionData_array *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BattleActionData_o *v17; // x23
  __int64 v18; // x1
  BattleLogicNpcAi_o *v19; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  BattleActionData_o *v26; // x20
  __int64 v27; // x0

  if ( (byte_5973A76 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData___TypeInfo);
    byte_5973A76 = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, method);
  NpcAi_k__BackingField = (__int64)this->fields._NpcAi_k__BackingField;
  if ( !NpcAi_k__BackingField )
    goto LABEL_21;
  NpcAi_k__BackingField = (*(__int64 (__fastcall **)(__int64, struct AiBaseEntity_o *, _QWORD))(*(_QWORD *)NpcAi_k__BackingField
                                                                                              + 776LL))(
                            NpcAi_k__BackingField,
                            this->fields._AiEnt_k__BackingField,
                            *(_QWORD *)(*(_QWORD *)NpcAi_k__BackingField + 784LL));
  if ( !task )
    goto LABEL_21;
  task->fields.isForcedSpeedOne |= NpcAi_k__BackingField & 1;
  if ( (NpcAi_k__BackingField & 1) != 0 )
    goto LABEL_8;
  NpcAi_k__BackingField = (__int64)this->fields._AiEnt_k__BackingField;
  if ( !NpcAi_k__BackingField )
    goto LABEL_21;
  if ( AiBaseEntity__IsForcedStepInSpeedAnyTime((AiBaseEntity_o *)NpcAi_k__BackingField, 0) )
  {
LABEL_8:
    v7 = 1;
  }
  else
  {
    NpcAi_k__BackingField = (__int64)this->fields._NpcAi_k__BackingField;
    if ( !NpcAi_k__BackingField )
      goto LABEL_21;
    v7 = (*(__int64 (__fastcall **)(__int64, struct AiBaseEntity_o *, _QWORD))(*(_QWORD *)NpcAi_k__BackingField + 792LL))(
           NpcAi_k__BackingField,
           this->fields._AiEnt_k__BackingField,
           *(_QWORD *)(*(_QWORD *)NpcAi_k__BackingField + 800LL));
  }
  v8 = sub_2213B20(BattleActionData___TypeInfo, 2);
  v9 = this->fields._NpcAi_k__BackingField;
  v10 = (BattleActionData_array *)v8;
  NpcAi_k__BackingField = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, const MethodInfo *))this->klass->vtable._4_get_UniqueId.methodPtr)(
                            this,
                            this->klass->vtable._4_get_UniqueId.method);
  if ( !v9 )
    goto LABEL_21;
  NpcAi_k__BackingField = (__int64)BattleLogicNpcAi__MakeLoadNpcPreStepInAction(v9, NpcAi_k__BackingField, 0);
  if ( !v10 )
    goto LABEL_21;
  v17 = (BattleActionData_o *)NpcAi_k__BackingField;
  if ( NpcAi_k__BackingField )
  {
    NpcAi_k__BackingField = sub_2213BB4(NpcAi_k__BackingField, v10->obj.klass->_1.element_class);
    if ( !NpcAi_k__BackingField )
    {
LABEL_23:
      v27 = sub_2213D00(NpcAi_k__BackingField, v18);
      sub_2213BA0(v27, 0);
    }
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_22;
  v10->m_Items[0] = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v10->m_Items, (int32_t)v17, v11, v12, v13, v14, v15, v16);
  v19 = this->fields._NpcAi_k__BackingField;
  NpcAi_k__BackingField = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, const MethodInfo *))this->klass->vtable._4_get_UniqueId.methodPtr)(
                            this,
                            this->klass->vtable._4_get_UniqueId.method);
  if ( !v19 )
LABEL_21:
    sub_2213CDC(NpcAi_k__BackingField, v5);
  NpcAi_k__BackingField = (__int64)BattleLogicNpcAi__MakeStepInAction(v19, NpcAi_k__BackingField, v7 & 1, 0);
  v26 = (BattleActionData_o *)NpcAi_k__BackingField;
  if ( NpcAi_k__BackingField )
  {
    NpcAi_k__BackingField = sub_2213BB4(NpcAi_k__BackingField, v10->obj.klass->_1.element_class);
    if ( !NpcAi_k__BackingField )
      goto LABEL_23;
  }
  if ( (v10->max_length & 0xFFFFFFFE) == 0 )
LABEL_22:
    sub_2213CE4(NpcAi_k__BackingField);
  v10->m_Items[1] = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->m_Items[1], (int32_t)v26, v20, v21, v22, v23, v24, v25);
  BattleLogicTask__SetInterruptAction((BattleLogicTask_o *)task, v10, 0);
}


BattleLogicNpcAi_o *NpcServantAiActArgument__get_NpcAi(NpcServantAiActArgument_o *this, const MethodInfo *method)
{
  return this->fields._NpcAi_k__BackingField;
}


void NpcServantAiActArgument__set_NpcAi(
        NpcServantAiActArgument_o *this,
        BattleLogicNpcAi_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._NpcAi_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NpcAi_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}