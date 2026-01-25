void NpcServantAiActArgument___ctor(
        NpcServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        BattleLogicNpcAi_o *npcAi,
        int32_t fromProcState,
        const MethodInfo *method)
{
  NpcServantAiActArgument_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  v9 = this;
  BaseAiActArgument___ctor((BaseAiActArgument_o *)this, aiActEnt, aiEnt, fromProcState, (const MethodInfo *)npcAi);
  v9->fields._SvtData_k__BackingField = svtData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v9->fields._SvtData_k__BackingField,
    (int32_t)svtData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v9->fields._NpcAi_k__BackingField = npcAi;
  v9 = (NpcServantAiActArgument_o *)((char *)v9 + 56);
  LOBYTE(v9[-1].fields._NpcAi_k__BackingField) = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v9, (int32_t)npcAi, v16, v17, v18, v19, v20, v21);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BattleActionData_o *v17; // x23
  BattleLogicNpcAi_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  BattleActionData_o *v25; // x20
  __int64 v26; // x0

  if ( (byte_4CF16E3 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleActionData___TypeInfo);
    byte_4CF16E3 = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, method);
  NpcAi_k__BackingField = (__int64)this->fields._NpcAi_k__BackingField;
  if ( !NpcAi_k__BackingField )
    goto LABEL_21;
  NpcAi_k__BackingField = (*(__int64 (__fastcall **)(__int64, struct AiBaseEntity_o *, _QWORD))(*(_QWORD *)NpcAi_k__BackingField
                                                                                              + 744LL))(
                            NpcAi_k__BackingField,
                            this->fields._AiEnt_k__BackingField,
                            *(_QWORD *)(*(_QWORD *)NpcAi_k__BackingField + 752LL));
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
    v7 = (*(__int64 (__fastcall **)(__int64, struct AiBaseEntity_o *, _QWORD))(*(_QWORD *)NpcAi_k__BackingField + 760LL))(
           NpcAi_k__BackingField,
           this->fields._AiEnt_k__BackingField,
           *(_QWORD *)(*(_QWORD *)NpcAi_k__BackingField + 768LL));
  }
  v8 = sub_1C7BB90(BattleActionData___TypeInfo, 2);
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
    NpcAi_k__BackingField = sub_1C7BC24(NpcAi_k__BackingField, v10->obj.klass->_1.element_class);
    if ( !NpcAi_k__BackingField )
    {
LABEL_23:
      v26 = sub_1C7BD64(NpcAi_k__BackingField);
      sub_1C7BC10(v26, 0);
    }
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_22;
  v10->m_Items[0] = v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v10->m_Items, (int32_t)v17, v11, v12, v13, v14, v15, v16);
  v18 = this->fields._NpcAi_k__BackingField;
  NpcAi_k__BackingField = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, const MethodInfo *))this->klass->vtable._4_get_UniqueId.methodPtr)(
                            this,
                            this->klass->vtable._4_get_UniqueId.method);
  if ( !v18 )
LABEL_21:
    sub_1C7BD40(NpcAi_k__BackingField, v5);
  NpcAi_k__BackingField = (__int64)BattleLogicNpcAi__MakeStepInAction(v18, NpcAi_k__BackingField, v7 & 1, 0);
  v25 = (BattleActionData_o *)NpcAi_k__BackingField;
  if ( NpcAi_k__BackingField )
  {
    NpcAi_k__BackingField = sub_1C7BC24(NpcAi_k__BackingField, v10->obj.klass->_1.element_class);
    if ( !NpcAi_k__BackingField )
      goto LABEL_23;
  }
  if ( LODWORD(v10->max_length) <= 1 )
LABEL_22:
    sub_1C7BD48(NpcAi_k__BackingField);
  v10->m_Items[1] = v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10->m_Items[1], (int32_t)v25, v19, v20, v21, v22, v23, v24);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._NpcAi_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._NpcAi_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}