void __fastcall NpcServantAiActArgument___ctor(
        NpcServantAiActArgument_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        BattleServantData_o *svtData,
        BattleLogicNpcAi_o *npcAi,
        const MethodInfo *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  ServantAiActArgument___ctor((ServantAiActArgument_o *)this, aiActEnt, aiEnt, svtData, 0, 0LL);
  this->fields._NpcAi_k__BackingField = npcAi;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._NpcAi_k__BackingField,
    (System_Int32_array **)npcAi,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall NpcServantAiActArgument__InitCommonTask(
        NpcServantAiActArgument_o *this,
        BaseAiActBattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x0
  BattleLogicNpcAi_o *NpcAi_k__BackingField; // x22
  struct BattleActionData_array *v7; // x20
  BattleActionData_o *LoadNpcPreStepInAction; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x22
  BattleLogicNpcAi_o *v17; // x22
  AiBaseEntity_o *AiEnt_k__BackingField; // x8
  int32_t v19; // w21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_4350B92 & 1) == 0 )
  {
    sub_B70694(&BattleActionData___TypeInfo);
    byte_4350B92 = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, 0LL);
  v5 = sub_B706AC(BattleActionData___TypeInfo, 2LL);
  NpcAi_k__BackingField = this->fields._NpcAi_k__BackingField;
  v7 = (struct BattleActionData_array *)v5;
  LoadNpcPreStepInAction = (BattleActionData_o *)((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
                                                   this,
                                                   this->klass->vtable._5_InitCommonTask.methodPtr);
  if ( !NpcAi_k__BackingField )
    goto LABEL_15;
  LoadNpcPreStepInAction = BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
                             NpcAi_k__BackingField,
                             (int32_t)LoadNpcPreStepInAction,
                             0LL);
  if ( !v7 )
    goto LABEL_15;
  v16 = (System_Int32_array **)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = (BattleActionData_o *)sub_B70754(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
    {
LABEL_17:
      v34 = sub_B7078C(LoadNpcPreStepInAction);
      sub_B70738(v34, 0LL);
    }
  }
  if ( !v7->max_length )
    goto LABEL_16;
  v7->m_Items[0] = (BattleActionData_o *)v16;
  sub_B70630((BattleServantConfConponent_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
  v17 = this->fields._NpcAi_k__BackingField;
  LoadNpcPreStepInAction = (BattleActionData_o *)((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
                                                   this,
                                                   this->klass->vtable._5_InitCommonTask.methodPtr);
  AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
  if ( !AiEnt_k__BackingField
    || (v19 = (int)LoadNpcPreStepInAction,
        LoadNpcPreStepInAction = (BattleActionData_o *)AiBaseEntity__IsForcedStepInSpeedAnyTime(
                                                         AiEnt_k__BackingField,
                                                         0LL),
        !v17) )
  {
LABEL_15:
    sub_B7076C(LoadNpcPreStepInAction, v9);
  }
  LoadNpcPreStepInAction = BattleLogicNpcAi__MakeStepInAction(
                             v17,
                             v19,
                             (unsigned __int8)LoadNpcPreStepInAction & 1,
                             0LL);
  v26 = (System_Int32_array **)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = (BattleActionData_o *)sub_B70754(LoadNpcPreStepInAction, v7->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
      goto LABEL_17;
  }
  if ( v7->max_length <= 1 )
  {
LABEL_16:
    v33 = sub_B70798(LoadNpcPreStepInAction);
    sub_B70738(v33, 0LL);
  }
  v7->m_Items[1] = (BattleActionData_o *)v26;
  sub_B70630((BattleServantConfConponent_o *)&v7->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  if ( !task )
    goto LABEL_15;
  task->fields.interruptActions = v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&task->fields.interruptActions,
    (System_Int32_array **)v7,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


BattleLogicNpcAi_o *__fastcall NpcServantAiActArgument__get_NpcAi(
        NpcServantAiActArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._NpcAi_k__BackingField;
}


void __fastcall NpcServantAiActArgument__set_NpcAi(
        NpcServantAiActArgument_o *this,
        BattleLogicNpcAi_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._NpcAi_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._NpcAi_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}