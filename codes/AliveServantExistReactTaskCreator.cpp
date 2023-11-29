void __fastcall AliveServantExistReactTaskCreator___ctor(
        AliveServantExistReactTaskCreator_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  ServantReactTaskCreator___ctor((ServantReactTaskCreator_o *)this, procState, 0LL);
}


bool __fastcall AliveServantExistReactTaskCreator__IsCreatable(
        AliveServantExistReactTaskCreator_o *this,
        BattleLogic_o *logic,
        BattleServantData_o *svtData,
        int32_t priority,
        const MethodInfo *method)
{
  if ( !AliveServantReactTaskCreator__IsCreatable(
          (AliveServantReactTaskCreator_o *)this,
          logic,
          svtData,
          priority,
          method) )
    return 0;
  if ( !svtData )
    sub_B170D4();
  return ((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, _QWORD, _QWORD, Il2CppMethodPointer))svtData->klass->vtable._19_ExistAiThinking.method)(
           svtData,
           logic,
           (unsigned int)this->fields._ProcState_k__BackingField,
           (unsigned int)priority,
           svtData->klass->vtable._20_GetLogicServantAi.methodPtr);
}