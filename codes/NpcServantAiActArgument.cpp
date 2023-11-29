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
  sub_B16F98(
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
  __int64 v5; // x2
  __int64 v6; // x0
  BattleLogicNpcAi_o *NpcAi_k__BackingField; // x22
  struct BattleActionData_array *v8; // x20
  int32_t v9; // w0
  BattleActionData_o *LoadNpcPreStepInAction; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x22
  BattleLogicNpcAi_o *v19; // x22
  int32_t v20; // w0
  AiBaseEntity_o *AiEnt_k__BackingField; // x8
  int32_t v22; // w21
  bool IsForcedStepInSpeedAnyTime; // w0
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_40F7F2C & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData___TypeInfo, task);
    byte_40F7F2C = 1;
  }
  ServantAiActArgument__InitCommonTask((ServantAiActArgument_o *)this, task, 0LL);
  v6 = sub_B17014(BattleActionData___TypeInfo, 2LL, v5);
  NpcAi_k__BackingField = this->fields._NpcAi_k__BackingField;
  v8 = (struct BattleActionData_array *)v6;
  v9 = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
         this,
         this->klass->vtable._5_InitCommonTask.methodPtr);
  if ( !NpcAi_k__BackingField )
    goto LABEL_15;
  LoadNpcPreStepInAction = BattleLogicNpcAi__MakeLoadNpcPreStepInAction(NpcAi_k__BackingField, v9, 0LL);
  if ( !v8 )
    goto LABEL_15;
  v18 = (System_Int32_array **)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = (BattleActionData_o *)sub_B170BC(LoadNpcPreStepInAction, v8->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
    {
LABEL_17:
      sub_B170F4(LoadNpcPreStepInAction);
      sub_B170A0();
    }
  }
  if ( !v8->max_length )
    goto LABEL_16;
  v8->m_Items[0] = (BattleActionData_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)v8->m_Items, v18, v12, v13, v14, v15, v16, v17);
  v19 = this->fields._NpcAi_k__BackingField;
  v20 = ((__int64 (__fastcall *)(NpcServantAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_get_UniqueId.method)(
          this,
          this->klass->vtable._5_InitCommonTask.methodPtr);
  AiEnt_k__BackingField = this->fields._AiEnt_k__BackingField;
  if ( !AiEnt_k__BackingField
    || (v22 = v20,
        IsForcedStepInSpeedAnyTime = AiBaseEntity__IsForcedStepInSpeedAnyTime(AiEnt_k__BackingField, 0LL),
        !v19) )
  {
LABEL_15:
    sub_B170D4();
  }
  LoadNpcPreStepInAction = BattleLogicNpcAi__MakeStepInAction(v19, v22, IsForcedStepInSpeedAnyTime, 0LL);
  v29 = (System_Int32_array **)LoadNpcPreStepInAction;
  if ( LoadNpcPreStepInAction )
  {
    LoadNpcPreStepInAction = (BattleActionData_o *)sub_B170BC(LoadNpcPreStepInAction, v8->obj.klass->_1.element_class);
    if ( !LoadNpcPreStepInAction )
      goto LABEL_17;
  }
  if ( v8->max_length <= 1 )
  {
LABEL_16:
    sub_B17100(LoadNpcPreStepInAction, v11, v12);
    sub_B170A0();
  }
  v8->m_Items[1] = (BattleActionData_o *)v29;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[1], v29, v12, v24, v25, v26, v27, v28);
  if ( !task )
    goto LABEL_15;
  task->fields.interruptActions = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&task->fields.interruptActions,
    (System_Int32_array **)v8,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._NpcAi_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}