void __fastcall BattleFieldMotionComponent___ctor(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v7; // x20

  if ( (byte_40F7307 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo, v6);
    byte_40F7307 = 1;
  }
  v7 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B170CC(
                                                                       System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo,
                                                                       method,
                                                                       v2,
                                                                       v3,
                                                                       v4);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v7,
    (const MethodInfo_2B15EA4 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__);
  this->fields.replaceMember = (struct System_Collections_Generic_Queue_BattleActionData_ReplaceMember__o *)v7;
  sub_B16F98(&this->fields.replaceMember, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleFieldMotionComponent__CameraCoroutine(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleFieldMotionComponent__CameraCoroutine_d__44_o *v6; // x20

  if ( (byte_40F7300 & 1) == 0 )
  {
    sub_B16FFC(&BattleFieldMotionComponent__CameraCoroutine_d__44_TypeInfo, method);
    byte_40F7300 = 1;
  }
  v6 = (BattleFieldMotionComponent__CameraCoroutine_d__44_o *)sub_B170CC(
                                                                BattleFieldMotionComponent__CameraCoroutine_d__44_TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
  BattleFieldMotionComponent__CameraCoroutine_d__44___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  v6->fields.__4__this = this;
  sub_B16F98(&v6->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleFieldMotionComponent__DisplayDefenceTarget(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  BattlePerformance__DisplayDefenceTarget(perf, 0LL);
}


void __fastcall BattleFieldMotionComponent__FieldCallEffect(
        BattleFieldMotionComponent_o *this,
        bool isBefore,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  BattlePerformance__FieldCallEffect(perf, isBefore, 0LL);
}


void __fastcall BattleFieldMotionComponent__FieldCallServant(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  BattlePerformance__FieldCallServant(perf, 0LL);
}


System_String_o *__fastcall BattleFieldMotionComponent__GetMotionName(
        BattleActionData_o *baData,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *result; // x0
  System_String_o *v5; // x0

  if ( (byte_40F72FF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8758/*"MOTION_"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F72FF = 1;
  }
  if ( !baData )
    sub_B170D4();
  result = baData->fields.motionname;
  if ( !result )
  {
    v5 = System_Int32__ToString((int)baData + 48, 0LL);
    return System_String__Concat_43743732((System_String_o *)StringLiteral_8758/*"MOTION_"*/, v5, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__GetTargetTr(
        BattleFieldMotionComponent_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array **p_npcBattleTr; // x8
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *v8; // x0

  if ( (byte_40F72FE & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_Transform___, *(_QWORD *)&type);
    byte_40F72FE = 1;
  }
  switch ( type )
  {
    case 6:
      p_npcBattleTr = &this->fields.npcBattleTr;
      goto LABEL_7;
    case 7:
      p_npcBattleTr = &this->fields.npcTacticalTr;
LABEL_7:
      v8 = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)*p_npcBattleTr;
      return (UnityEngine_Transform_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                          v8,
                                          index,
                                          0LL,
                                          (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_Transform___);
    case 8:
      return this->fields.fieldPopupBattleTr;
    case 9:
      return this->fields.fieldPopupTacticalTr;
    case 10:
      return this->fields.fieldEffectBattleTr;
    case 11:
      return this->fields.fieldEffectTacticalTr;
    case 12:
      return this->fields.fieldEffectNpTr;
    default:
      v8 = 0LL;
      return (UnityEngine_Transform_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                          v8,
                                          index,
                                          0LL,
                                          (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_Transform___);
  }
}


void __fastcall BattleFieldMotionComponent__OnMotionComplete(
        BattleFieldMotionComponent_o *this,
        System_String_o *eventstr,
        const MethodInfo *method)
{
  ++this->fields._motionCompleteCount_k__BackingField;
}


void __fastcall BattleFieldMotionComponent__SetActiveMotion(
        BattleFieldMotionComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  this->fields._isActiveMotion_k__BackingField = active;
}


bool __fastcall BattleFieldMotionComponent__checkMotionEvent(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  HutongGames_PlayMaker_FsmTransition_array *v9; // x20
  unsigned int v10; // w21
  HutongGames_PlayMaker_FsmTransition_o *v11; // x0
  System_String_o *EventName; // x0

  myFsm = this->fields.myFsm;
  if ( !myFsm || (FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(myFsm, 0LL)) == 0LL )
LABEL_11:
    sub_B170D4();
  max_length = FsmGlobalTransitions->max_length;
  v9 = FsmGlobalTransitions;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      sub_B17100(FsmGlobalTransitions, v6, v7);
      sub_B170A0();
    }
    v11 = v9->m_Items[v10];
    if ( !v11 )
      goto LABEL_11;
    EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(v11, 0LL);
    FsmGlobalTransitions = (HutongGames_PlayMaker_FsmTransition_array *)System_String__op_Equality(EventName, name, 0LL);
    if ( ((unsigned __int8)FsmGlobalTransitions & 1) != 0 )
      return 1;
    max_length = v9->max_length;
    if ( (int)++v10 >= max_length )
      return 0;
  }
}


void __fastcall BattleFieldMotionComponent__endFieldStep(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  this->fields.flgStep = 0;
}


void __fastcall BattleFieldMotionComponent__endLoadReplaceActor(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, this->fields.replaceEndEvent, 0LL);
}


void __fastcall BattleFieldMotionComponent__finishMotion(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BaseMotionSkip_o *MotionSkip; // x0
  BattlePerformance_o *v5; // x0
  const MethodInfo *v6; // x1
  struct BattlePerformance_o *v7; // x8
  BattleLogic_o *logic; // x0
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *v10; // x1

  perf = this->fields.perf;
  if ( !perf
    || (MotionSkip = BattlePerformance__get_MotionSkip(perf, 0LL)) == 0LL
    || (((void (__fastcall *)(BaseMotionSkip_o *, Il2CppMethodPointer))MotionSkip->klass->vtable._10_MotionEnd.method)(
          MotionSkip,
          MotionSkip->klass->vtable._11_ConvertSkipDuration.methodPtr),
        v5 = this->fields.perf,
        this->fields._isActiveMotion_k__BackingField = 0,
        !v5)
    || (BattlePerformance__endActionData(v5, 0LL), (v7 = this->fields.perf) == 0LL)
    || (logic = v7->fields.logic) == 0LL )
  {
    sub_B170D4();
  }
  if ( BattleLogic__CheckEnemyDropItemAll(logic, v6) )
  {
    v10 = BattleFieldMotionComponent__CameraCoroutine(this, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getEnemyPopPoint(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *battle_enemyTr; // x8
  int32_t max_length; // w9

  battle_enemyTr = this->fields.battle_enemyTr;
  if ( !battle_enemyTr )
    sub_B170D4();
  max_length = battle_enemyTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  return battle_enemyTr->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getEnemyTacticalTr(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *tactical_enemyTr; // x8
  int32_t max_length; // w9

  tactical_enemyTr = this->fields.tactical_enemyTr;
  if ( !tactical_enemyTr )
    sub_B170D4();
  max_length = tactical_enemyTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  return tactical_enemyTr->m_Items[index];
}


PlayMakerFSM_o *__fastcall BattleFieldMotionComponent__getFsm(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *myFsm; // x21
  struct PlayMakerFSM_o *Component_WebViewObject; // x0

  if ( (byte_40F7306 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7306 = 1;
  }
  myFsm = (UnityEngine_Object_o *)this->fields.myFsm;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(myFsm, 0LL, 0LL) )
  {
    Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.myFsm = Component_WebViewObject;
    sub_B16F98(&this->fields.myFsm, Component_WebViewObject);
  }
  return this->fields.myFsm;
}


UnityEngine_GameObject_o *__fastcall BattleFieldMotionComponent__getGameObject(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x19

  if ( (byte_40F7305 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    byte_40F7305 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL) )
    return 0LL;
  if ( !NodeFromName )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getPlayerPopTr(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *battle_playerTr; // x8
  int32_t max_length; // w9

  battle_playerTr = this->fields.battle_playerTr;
  if ( !battle_playerTr )
    sub_B170D4();
  max_length = battle_playerTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  return battle_playerTr->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getPlayerTacticalTr(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *tactical_playerTr; // x8
  int32_t max_length; // w9

  tactical_playerTr = this->fields.tactical_playerTr;
  if ( !tactical_playerTr )
    sub_B170D4();
  max_length = tactical_playerTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  return tactical_playerTr->m_Items[index];
}


UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getPopEnemy(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pop_enemyTr;
}


UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getPopPlayer(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pop_playerTr;
}


BaseMotionSkip_o *__fastcall BattleFieldMotionComponent__get_MotionSkip(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  return BattlePerformance__get_MotionSkip(perf, 0LL);
}


bool __fastcall BattleFieldMotionComponent__get_isActiveMotion(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._isActiveMotion_k__BackingField;
}


int32_t __fastcall BattleFieldMotionComponent__get_motionCompleteCount(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._motionCompleteCount_k__BackingField;
}


bool __fastcall BattleFieldMotionComponent__isStep(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  return this->fields.flgStep;
}


void __fastcall BattleFieldMotionComponent__loadPt(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  BattleFieldMotionComponent___c__DisplayClass59_0_o *v9; // x21
  BattlePerformance_o *perf; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F7304 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, name);
    sub_B16FFC(&Method_BattleFieldMotionComponent___c__DisplayClass59_0__loadPt_b__0__, v7);
    sub_B16FFC(&BattleFieldMotionComponent___c__DisplayClass59_0_TypeInfo, v8);
    byte_40F7304 = 1;
  }
  v9 = (BattleFieldMotionComponent___c__DisplayClass59_0_o *)sub_B170CC(
                                                               BattleFieldMotionComponent___c__DisplayClass59_0_TypeInfo,
                                                               name,
                                                               method,
                                                               v3,
                                                               v4);
  BattleFieldMotionComponent___c__DisplayClass59_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.__4__this = this,
        sub_B16F98(&v9->fields, this),
        v9->fields.name = name,
        sub_B16F98(&v9->fields.name, name),
        perf = this->fields.perf,
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_BattleFieldMotionComponent___c__DisplayClass59_0__loadPt_b__0__,
          0LL),
        !perf) )
  {
    sub_B170D4();
  }
  BattlePerformance__loadPt(perf, v15, 0LL);
}


void __fastcall BattleFieldMotionComponent__loadReplace(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformance_o *perf; // x20
  BattleActionData_ReplaceMember_o *targetReplaceData; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x22

  if ( (byte_40F7303 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endEvent);
    sub_B16FFC(&Method_BattleFieldMotionComponent_endLoadReplaceActor__, v5);
    byte_40F7303 = 1;
  }
  this->fields.replaceEndEvent = endEvent;
  sub_B16F98(&this->fields.replaceEndEvent, endEvent);
  perf = this->fields.perf;
  targetReplaceData = this->fields.targetReplaceData;
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleFieldMotionComponent_endLoadReplaceActor__, 0LL);
  if ( !perf )
    sub_B170D4();
  BattlePerformance__replaceMember(perf, targetReplaceData, v12, 0LL);
}


void __fastcall BattleFieldMotionComponent__loadReplaceActor(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *replaceMember; // x0
  Mono_Net_CFNetwork_GetProxyData_o *ProxyData___Dequeue; // x0
  struct BattleActionData_ReplaceMember_o *targetReplaceData; // x8
  BattlePerformance_o *perf; // x0
  UnityEngine_GameObject_o *ServantGameObject; // x0
  UnityEngine_GameObject_o *v11; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40F7302 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__, endEvent);
    sub_B16FFC(&StringLiteral_1826/*"ActorObject"*/, v5);
    byte_40F7302 = 1;
  }
  replaceMember = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.replaceMember;
  if ( !replaceMember )
    goto LABEL_12;
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          replaceMember,
                          (const MethodInfo_2B166B0 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__);
  this->fields.targetReplaceData = (struct BattleActionData_ReplaceMember_o *)ProxyData___Dequeue;
  sub_B16F98(&this->fields.targetReplaceData, ProxyData___Dequeue);
  targetReplaceData = this->fields.targetReplaceData;
  if ( !targetReplaceData )
    goto LABEL_12;
  perf = this->fields.perf;
  if ( !perf
    || (ServantGameObject = BattlePerformance__getServantGameObject(perf, targetReplaceData->fields.outUniqeId, 0LL),
        !this->fields.myFsm)
    || (v11 = ServantGameObject, (Fsm = PlayMakerFSM__get_Fsm(this->fields.myFsm, 0LL)) == 0LL)
    || (variables = Fsm->fields.variables) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          variables,
                          (System_String_o *)StringLiteral_1826/*"ActorObject"*/,
                          0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v11, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, endEvent, 0LL);
}


void __fastcall BattleFieldMotionComponent__playBattleActionData(
        BattleFieldMotionComponent_o *this,
        BattleActionData_o *badata,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct BattleActionData_o **p_badata; // x0
  BattlePerformance_o *perf; // x0
  BaseMotionSkip_o *MotionSkip; // x0
  PlayMakerFSM_o *myFsm; // x0

  this->fields.badata = badata;
  p_badata = &this->fields.badata;
  *((_BYTE *)p_badata + 16) = 1;
  sub_B16F98(p_badata, badata);
  if ( !badata )
    goto LABEL_9;
  perf = this->fields.perf;
  if ( badata->fields.noOperation )
  {
    if ( perf )
    {
      BattlePerformance__endActionData(perf, 0LL);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
  if ( !perf )
    goto LABEL_9;
  MotionSkip = BattlePerformance__get_MotionSkip(perf, 0LL);
  if ( !MotionSkip )
    goto LABEL_9;
  ((void (__fastcall *)(BaseMotionSkip_o *, Il2CppMethodPointer))MotionSkip->klass->vtable._9_MotionStart.method)(
    MotionSkip,
    MotionSkip->klass->vtable._10_MotionEnd.methodPtr);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_9;
  PlayMakerFSM__SendEvent(myFsm, motionName, 0LL);
}


void __fastcall BattleFieldMotionComponent__procBuff(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleFieldMotionComponent__ptStepOut(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  BattlePerformance__stepOutPT(perf, 0LL);
}


void __fastcall BattleFieldMotionComponent__resetMotionCompleteCount(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  this->fields._motionCompleteCount_k__BackingField = 0;
}


void __fastcall BattleFieldMotionComponent__sendEvent(
        BattleFieldMotionComponent_o *this,
        System_String_o *eventstr,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, eventstr, 0LL);
}


void __fastcall BattleFieldMotionComponent__setPerf(
        BattleFieldMotionComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  struct BattlePerformance_o **p_perf; // x19
  PlayMakerFSM_o *v6; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  UnityEngine_Component_o *v9; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v10; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F72FD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10602/*"Performance"*/, inperf);
    byte_40F72FD = 1;
  }
  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_B16F98(p_perf, inperf);
  v6 = (PlayMakerFSM_o *)p_perf[1];
  *((_BYTE *)p_perf + 152) = 0;
  if ( !v6
    || (FsmVariables = PlayMakerFSM__get_FsmVariables(v6, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                          FsmVariables,
                          (System_String_o *)StringLiteral_10602/*"Performance"*/,
                          0LL),
        (v9 = (UnityEngine_Component_o *)*p_perf) == 0LL)
    || (v10 = FsmGameObject, gameObject = UnityEngine_Component__get_gameObject(v9, 0LL), !v10) )
  {
    sub_B170D4();
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v10, gameObject, 0LL);
}


void __fastcall BattleFieldMotionComponent__set_isActiveMotion(
        BattleFieldMotionComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isActiveMotion_k__BackingField = value;
}


void __fastcall BattleFieldMotionComponent__set_motionCompleteCount(
        BattleFieldMotionComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._motionCompleteCount_k__BackingField = value;
}


void __fastcall BattleFieldMotionComponent__startFieldStep(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  this->fields.flgStep = 1;
}


void __fastcall BattleFieldMotionComponent__startReplaceActor(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x0
  BattleActionData_o *badata; // x0
  BattleActionData_ReplaceMember_array *ReplaceMember; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  BattleActionData_ReplaceMember_array *v13; // x21
  unsigned __int64 v14; // x22
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v15; // x0
  BattleActionData_ReplaceMember_o *v16; // x8
  BattlePerformance_o *v17; // x0
  UnityEngine_GameObject_o *ServantGameObject; // x0
  UnityEngine_GameObject_o *v19; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40F7301 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__, endEvent);
    sub_B16FFC(&StringLiteral_1826/*"ActorObject"*/, v5);
    byte_40F7301 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_23;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_23;
  BattleData__onProgressflg(data, 1024, 0LL);
  badata = this->fields.badata;
  if ( !badata )
    goto LABEL_23;
  ReplaceMember = BattleActionData__getReplaceMember(badata, -1, 0LL);
  if ( ReplaceMember )
  {
    v12 = *(_QWORD *)&ReplaceMember->max_length;
    v13 = ReplaceMember;
    if ( v12 )
    {
      if ( (int)v12 >= 1 )
      {
        v14 = 0LL;
        while ( v14 < (unsigned int)v12 )
        {
          v15 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.replaceMember;
          if ( !v15 )
            goto LABEL_23;
          System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
            v15,
            (Mono_Net_CFNetwork_GetProxyData_o *)v13->m_Items[v14],
            (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__);
          LODWORD(v12) = v13->max_length;
          if ( (__int64)++v14 >= (int)v12 )
            goto LABEL_13;
        }
LABEL_24:
        sub_B17100(ReplaceMember, v10, v11);
        sub_B170A0();
      }
LABEL_13:
      if ( !(_DWORD)v12 )
        goto LABEL_24;
      v16 = v13->m_Items[0];
      if ( v16 )
      {
        v17 = this->fields.perf;
        if ( v17 )
        {
          ServantGameObject = BattlePerformance__getServantGameObject(v17, v16->fields.outUniqeId, 0LL);
          if ( this->fields.myFsm )
          {
            v19 = ServantGameObject;
            Fsm = PlayMakerFSM__get_Fsm(this->fields.myFsm, 0LL);
            if ( Fsm )
            {
              variables = Fsm->fields.variables;
              if ( variables )
              {
                FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                  variables,
                                  (System_String_o *)StringLiteral_1826/*"ActorObject"*/,
                                  0LL);
                if ( FsmGameObject )
                {
                  HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v19, 0LL);
                  myFsm = this->fields.myFsm;
                  if ( myFsm )
                  {
                    PlayMakerFSM__SendEvent(myFsm, endEvent, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_B170D4();
    }
  }
  BattleFieldMotionComponent__finishMotion(this, v10);
}


void __fastcall BattleFieldMotionComponent__CameraCoroutine_d__44___ctor(
        BattleFieldMotionComponent__CameraCoroutine_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleFieldMotionComponent__CameraCoroutine_d__44__MoveNext(
        BattleFieldMotionComponent__CameraCoroutine_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleFieldMotionComponent_o *_4__this; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x19
  struct BattlePerformance_o *v10; // x8
  BattleActionCamera_o *v11; // x0

  if ( (byte_40F8517 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12199/*"SKILL_E_ALL_PLAYER"*/, v3);
    byte_40F8517 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_16;
    perf = _4__this->fields.perf;
    if ( !perf )
      goto LABEL_16;
    actioncamera = (UnityEngine_Object_o *)perf->fields.actioncamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(actioncamera, 0LL, 0LL) )
      return 0;
    v10 = _4__this->fields.perf;
    if ( !v10 || (v11 = v10->fields.actioncamera) == 0LL )
LABEL_16:
      sub_B170D4();
    BattleActionCamera__sendMainEvent(v11, (System_String_o *)StringLiteral_12199/*"SKILL_E_ALL_PLAYER"*/, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B16F98(p__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleFieldMotionComponent__CameraCoroutine_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleFieldMotionComponent__CameraCoroutine_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleFieldMotionComponent__CameraCoroutine_d__44__System_Collections_IEnumerator_Reset(
        BattleFieldMotionComponent__CameraCoroutine_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleFieldMotionComponent__CameraCoroutine_d__44_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleFieldMotionComponent__CameraCoroutine_d__44__System_Collections_IEnumerator_get_Current(
        BattleFieldMotionComponent__CameraCoroutine_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleFieldMotionComponent__CameraCoroutine_d__44__System_IDisposable_Dispose(
        BattleFieldMotionComponent__CameraCoroutine_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleFieldMotionComponent___c__DisplayClass59_0___ctor(
        BattleFieldMotionComponent___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldMotionComponent___c__DisplayClass59_0___loadPt_b__0(
        BattleFieldMotionComponent___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  struct BattleFieldMotionComponent_o *_4__this; // x8
  PlayMakerFSM_o *myFsm; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (myFsm = _4__this->fields.myFsm) == 0LL )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, this->fields.name, 0LL);
}