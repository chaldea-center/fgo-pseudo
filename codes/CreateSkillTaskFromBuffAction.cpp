void __fastcall CreateSkillTaskFromBuffAction___ctor(CreateSkillTaskFromBuffAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicTask_array *__fastcall CreateSkillTaskFromBuffAction__CreateTaskArray(
        CreateSkillTaskFromBuffAction_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  long double inited; // q0
  BattleServantData_o *TargetSvt_k__BackingField; // x22
  BattleServantData_o *ActSvt_k__BackingField; // x23
  BattleCommandData_o *Command_k__BackingField; // x20
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4B697B1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_BattleLogicTask___, logic);
    byte_4B697B1 = 1;
  }
  v7 = ((__int64 (__fastcall *)(CreateSkillTaskFromBuffAction_o *, BattleLogic_o *, BattleAddSkillTaskAroundTargetTask_Argument_o *, void *))this->klass->vtable._5_IsCreatable.method)(
         this,
         logic,
         arg,
         this->klass[1]._1.image);
  if ( (v7 & 1) != 0 )
  {
    if ( !arg
      || (ActSvt_k__BackingField = arg->fields._ActSvt_k__BackingField,
          TargetSvt_k__BackingField = arg->fields._TargetSvt_k__BackingField,
          Command_k__BackingField = arg->fields._Command_k__BackingField,
          v7 = ((__int64 (__fastcall *)(CreateSkillTaskFromBuffAction_o *, Il2CppMethodPointer))this->klass->vtable._4_get_TargetActs.method)(
                 this,
                 this->klass->vtable._5_IsCreatable.methodPtr),
          !logic) )
    {
      sub_1BE4D28(v7, v8);
    }
    return BattleLogic__GetTargetBuffFunctionTaskArray(
             logic,
             ActSvt_k__BackingField,
             TargetSvt_k__BackingField,
             Command_k__BackingField,
             (BuffList_ACTION_array *)v7,
             0LL);
  }
  else
  {
    v14 = Method_System_Array_Empty_BattleLogicTask___;
    v15 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
    if ( !v15 )
    {
      sub_1C36A04(Method_System_Array_Empty_BattleLogicTask___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C369A8(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C369A8(inited);
    return **(BattleLogicTask_array ***)(v17 + 184);
  }
}


bool __fastcall CreateSkillTaskFromBuffAction__IsCreatable(
        CreateSkillTaskFromBuffAction_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *v4; // x0

  v4 = (System_Collections_ICollection_o *)((__int64 (__fastcall *)(CreateSkillTaskFromBuffAction_o *, Il2CppMethodPointer, BattleAddSkillTaskAroundTargetTask_Argument_o *, const MethodInfo *))this->klass->vtable._4_get_TargetActs.method)(
                                             this,
                                             this->klass->vtable._5_IsCreatable.methodPtr,
                                             arg,
                                             method);
  return !BasicHelper__IsNullOrEmpty(v4, 0LL);
}


BuffList_ACTION_array *__fastcall CreateSkillTaskFromBuffAction__get_TargetActs(
        CreateSkillTaskFromBuffAction_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x0

  if ( (byte_4B697B0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_BuffList_ACTION___, method);
    byte_4B697B0 = 1;
  }
  v3 = Method_System_Array_Empty_BuffList_ACTION___;
  v4 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v4 )
  {
    sub_1C36A04(Method_System_Array_Empty_BuffList_ACTION___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C369A8(inited);
  if ( !*(_DWORD *)(v5 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C369A8(inited);
  return **(BuffList_ACTION_array ***)(v6 + 184);
}