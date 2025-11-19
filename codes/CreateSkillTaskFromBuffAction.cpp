void CreateSkillTaskFromBuffAction___ctor(CreateSkillTaskFromBuffAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleLogicTask_array *CreateSkillTaskFromBuffAction__CreateTaskArray(
        CreateSkillTaskFromBuffAction_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  long double inited; // q0
  BattleServantData_o *TargetSvt_k__BackingField; // x23
  BattleServantData_o *ActSvt_k__BackingField; // x24
  BattleCommandData_o *CommandOpponent_k__BackingField; // x20
  BattleCommandData_o *Command_k__BackingField; // x22
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_4CB9302 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4CB9302 = 1;
  }
  v7 = ((__int64 (__fastcall *)(CreateSkillTaskFromBuffAction_o *, BattleLogic_o *, BattleAddSkillTaskAroundTargetTask_Argument_o *, const MethodInfo *))this->klass->vtable._5_IsCreatable.methodPtr)(
         this,
         logic,
         arg,
         this->klass->vtable._5_IsCreatable.method);
  if ( (v7 & 1) != 0 )
  {
    if ( !arg
      || (ActSvt_k__BackingField = arg->fields._ActSvt_k__BackingField,
          TargetSvt_k__BackingField = arg->fields._TargetSvt_k__BackingField,
          Command_k__BackingField = arg->fields._Command_k__BackingField,
          CommandOpponent_k__BackingField = arg->fields._CommandOpponent_k__BackingField,
          v7 = ((__int64 (__fastcall *)(CreateSkillTaskFromBuffAction_o *, const MethodInfo *))this->klass->vtable._4_get_TargetActs.methodPtr)(
                 this,
                 this->klass->vtable._4_get_TargetActs.method),
          !logic) )
    {
      sub_1C6BC60(v7, v8);
    }
    return BattleLogic__GetTargetBuffFunctionTaskArray(
             logic,
             ActSvt_k__BackingField,
             TargetSvt_k__BackingField,
             Command_k__BackingField,
             CommandOpponent_k__BackingField,
             (BuffList_ACTION_array *)v7,
             0);
  }
  else
  {
    v15 = Method_System_Array_Empty_BattleLogicTask___;
    v16 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
    if ( !v16 )
    {
      sub_1C41AF8(Method_System_Array_Empty_BattleLogicTask___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v17 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v17);
    v18 = *(_QWORD *)(v15[7] + 16LL);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C41A9C(inited);
    return **(BattleLogicTask_array ***)(v18 + 184);
  }
}


bool CreateSkillTaskFromBuffAction__IsCreatable(
        CreateSkillTaskFromBuffAction_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *v4; // x0

  v4 = (System_Collections_ICollection_o *)((__int64 (__fastcall *)(CreateSkillTaskFromBuffAction_o *, const MethodInfo *, BattleAddSkillTaskAroundTargetTask_Argument_o *, const MethodInfo *))this->klass->vtable._4_get_TargetActs.methodPtr)(
                                             this,
                                             this->klass->vtable._4_get_TargetActs.method,
                                             arg,
                                             method);
  return !BasicHelper__IsNullOrEmpty(v4, 0);
}


BuffList_ACTION_array *CreateSkillTaskFromBuffAction__get_TargetActs(
        CreateSkillTaskFromBuffAction_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x0

  if ( (byte_4CB9301 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BuffList_ACTION___);
    byte_4CB9301 = 1;
  }
  v3 = Method_System_Array_Empty_BuffList_ACTION___;
  v4 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v4 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BuffList_ACTION___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v5 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C(inited);
  return **(BuffList_ACTION_array ***)(v6 + 184);
}