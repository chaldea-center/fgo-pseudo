void __fastcall BattleFieldMotionComponent___ctor(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v4; // x20

  if ( (byte_4184B9D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo, v3);
    byte_4184B9D = 1;
  }
  v4 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B2C42C(System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v4,
    (const MethodInfo_295D884 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__);
  this->fields.replaceMember = (struct System_Collections_Generic_Queue_BattleActionData_ReplaceMember__o *)v4;
  sub_B2C2F8(&this->fields.replaceMember, v4);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleFieldMotionComponent__CameraCoroutine(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattleFieldMotionComponent__CameraCoroutine_d__44_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4184B96 & 1) == 0 )
  {
    sub_B2C35C(&BattleFieldMotionComponent__CameraCoroutine_d__44_TypeInfo, method);
    byte_4184B96 = 1;
  }
  v3 = (BattleFieldMotionComponent__CameraCoroutine_d__44_o *)sub_B2C42C(BattleFieldMotionComponent__CameraCoroutine_d__44_TypeInfo);
  BattleFieldMotionComponent__CameraCoroutine_d__44___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleFieldMotionComponent__DisplayDefenceTarget(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, isBefore);
  BattlePerformance__FieldCallEffect(perf, isBefore, 0LL);
}


void __fastcall BattleFieldMotionComponent__FieldCallServant(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_B2C434(0LL, method);
  BattlePerformance__FieldCallServant(perf, 0LL);
}


System_String_o *__fastcall BattleFieldMotionComponent__GetMotionName(
        BattleActionData_o *baData,
        const MethodInfo *method)
{
  BattleActionData_o *v2; // x19
  __int64 v3; // x1
  System_String_o *result; // x0
  System_String_o *v5; // x0

  v2 = baData;
  if ( (byte_4184B95 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8787/*"MOTION_"*/, method);
    baData = (BattleActionData_o *)sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4184B95 = 1;
  }
  if ( !v2 )
    sub_B2C434(baData, method);
  result = v2->fields.motionname;
  if ( !result )
  {
    v5 = System_Int32__ToString((int)v2 + 48, 0LL);
    return System_String__Concat_44305532((System_String_o *)StringLiteral_8787/*"MOTION_"*/, v5, 0LL);
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

  if ( (byte_4184B94 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_Transform___, *(_QWORD *)&type);
    byte_4184B94 = 1;
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
                                          (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_Transform___);
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
                                          (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_Transform___);
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
  void *myFsm; // x0
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w21
  System_String_o *EventName; // x0
  __int64 v10; // x0

  myFsm = this->fields.myFsm;
  if ( !myFsm || (myFsm = PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)myFsm, 0LL)) == 0LL )
LABEL_11:
    sub_B2C434(myFsm, name);
  v5 = *((_DWORD *)myFsm + 6);
  v6 = myFsm;
  if ( v5 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v5 )
    {
      v10 = sub_B2C460(myFsm);
      sub_B2C400(v10, 0LL);
    }
    myFsm = (void *)*((_QWORD *)v6 + (int)v7 + 4);
    if ( !myFsm )
      goto LABEL_11;
    EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)myFsm, 0LL);
    myFsm = (void *)System_String__op_Equality(EventName, name, 0LL);
    if ( ((unsigned __int8)myFsm & 1) != 0 )
      return 1;
    v5 = *((_DWORD *)v6 + 6);
    if ( (int)++v7 >= v5 )
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
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, this->fields.replaceEndEvent, 0LL);
}


void __fastcall BattleFieldMotionComponent__finishMotion(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattlePerformance_o *v4; // x8
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  perf = this->fields.perf;
  if ( !perf
    || (perf = (BattlePerformance_o *)BattlePerformance__get_MotionSkip(perf, 0LL)) == 0LL
    || (((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.typeMetadataHandle)(
          perf,
          perf->klass[1]._1.interopData),
        perf = this->fields.perf,
        this->fields._isActiveMotion_k__BackingField = 0,
        !perf)
    || (BattlePerformance__endActionData(perf, 0LL), (v4 = this->fields.perf) == 0LL)
    || (perf = (BattlePerformance_o *)v4->fields.logic) == 0LL )
  {
    sub_B2C434(perf, method);
  }
  if ( BattleLogic__CheckEnemyDropItemAll((BattleLogic_o *)perf, method) )
  {
    v6 = BattleFieldMotionComponent__CameraCoroutine(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getEnemyPopPoint(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *battle_enemyTr; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  battle_enemyTr = this->fields.battle_enemyTr;
  if ( !battle_enemyTr )
    sub_B2C434(this, index);
  max_length = battle_enemyTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  return battle_enemyTr->m_Items[index];
}


UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getEnemyTacticalTr(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *tactical_enemyTr; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  tactical_enemyTr = this->fields.tactical_enemyTr;
  if ( !tactical_enemyTr )
    sub_B2C434(this, index);
  max_length = tactical_enemyTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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

  if ( (byte_4184B9C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4184B9C = 1;
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
                                                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.myFsm = Component_WebViewObject;
    sub_B2C2F8(&this->fields.myFsm, Component_WebViewObject);
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
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4184B9B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    byte_4184B9B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
  if ( !v7 )
    return 0LL;
  if ( !NodeFromName )
    sub_B2C434(v7, v8);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getPlayerPopTr(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *battle_playerTr; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  battle_playerTr = this->fields.battle_playerTr;
  if ( !battle_playerTr )
    sub_B2C434(this, index);
  max_length = battle_playerTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  return battle_playerTr->m_Items[index];
}


UnityEngine_Transform_o *__fastcall BattleFieldMotionComponent__getPlayerTacticalTr(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *tactical_playerTr; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  tactical_playerTr = this->fields.tactical_playerTr;
  if ( !tactical_playerTr )
    sub_B2C434(this, index);
  max_length = tactical_playerTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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
    sub_B2C434(0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  BattleFieldMotionComponent___c__DisplayClass59_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  BattlePerformance_o *perf; // x19
  System_Action_o *v11; // x20

  if ( (byte_4184B9A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, name);
    sub_B2C35C(&Method_BattleFieldMotionComponent___c__DisplayClass59_0__loadPt_b__0__, v5);
    sub_B2C35C(&BattleFieldMotionComponent___c__DisplayClass59_0_TypeInfo, v6);
    byte_4184B9A = 1;
  }
  v7 = (BattleFieldMotionComponent___c__DisplayClass59_0_o *)sub_B2C42C(BattleFieldMotionComponent___c__DisplayClass59_0_TypeInfo);
  BattleFieldMotionComponent___c__DisplayClass59_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.__4__this = this,
        sub_B2C2F8(&v7->fields, this),
        v7->fields.name = name,
        sub_B2C2F8(&v7->fields.name, name),
        perf = this->fields.perf,
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_BattleFieldMotionComponent___c__DisplayClass59_0__loadPt_b__0__,
          0LL),
        !perf) )
  {
    sub_B2C434(v8, v9);
  }
  BattlePerformance__loadPt(perf, v11, 0LL);
}


void __fastcall BattleFieldMotionComponent__loadReplace(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformance_o *perf; // x20
  BattleActionData_ReplaceMember_o *targetReplaceData; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4184B99 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, endEvent);
    sub_B2C35C(&Method_BattleFieldMotionComponent_endLoadReplaceActor__, v5);
    byte_4184B99 = 1;
  }
  this->fields.replaceEndEvent = endEvent;
  sub_B2C2F8(&this->fields.replaceEndEvent, endEvent);
  perf = this->fields.perf;
  targetReplaceData = this->fields.targetReplaceData;
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleFieldMotionComponent_endLoadReplaceActor__, 0LL);
  if ( !perf )
    sub_B2C434(v9, v10);
  BattlePerformance__replaceMember(perf, targetReplaceData, v8, 0LL);
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
  UnityEngine_GameObject_o *v9; // x21

  if ( (byte_4184B98 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__, endEvent);
    sub_B2C35C(&StringLiteral_1832/*"ActorObject"*/, v5);
    byte_4184B98 = 1;
  }
  replaceMember = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.replaceMember;
  if ( !replaceMember )
    goto LABEL_12;
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          replaceMember,
                          (const MethodInfo_295E090 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__);
  this->fields.targetReplaceData = (struct BattleActionData_ReplaceMember_o *)ProxyData___Dequeue;
  sub_B2C2F8(&this->fields.targetReplaceData, ProxyData___Dequeue);
  targetReplaceData = this->fields.targetReplaceData;
  if ( !targetReplaceData )
    goto LABEL_12;
  replaceMember = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.perf;
  if ( !replaceMember
    || (replaceMember = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)BattlePerformance__getServantGameObject(
                                                                                        (BattlePerformance_o *)replaceMember,
                                                                                        targetReplaceData->fields.outUniqeId,
                                                                                        0LL),
        !this->fields.myFsm)
    || (v9 = (UnityEngine_GameObject_o *)replaceMember,
        (replaceMember = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)PlayMakerFSM__get_Fsm(
                                                                                         this->fields.myFsm,
                                                                                         0LL)) == 0LL)
    || (replaceMember = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)replaceMember[1].fields._syncRoot) == 0LL
    || (replaceMember = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                                                        (HutongGames_PlayMaker_FsmVariables_o *)replaceMember,
                                                                                        (System_String_o *)StringLiteral_1832/*"ActorObject"*/,
                                                                                        0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)replaceMember, v9, 0LL),
        (replaceMember = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.myFsm) == 0LL) )
  {
LABEL_12:
    sub_B2C434(replaceMember, endEvent);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)replaceMember, endEvent, 0LL);
}


void __fastcall BattleFieldMotionComponent__playBattleActionData(
        BattleFieldMotionComponent_o *this,
        BattleActionData_o *badata,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct BattleActionData_o **p_badata; // x0
  BattlePerformance_o *perf; // x0
  __int64 v9; // x1

  this->fields.badata = badata;
  p_badata = &this->fields.badata;
  *((_BYTE *)p_badata + 16) = 1;
  sub_B2C2F8(p_badata, badata);
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
    sub_B2C434(perf, v9);
  }
  if ( !perf )
    goto LABEL_9;
  perf = (BattlePerformance_o *)BattlePerformance__get_MotionSkip(perf, 0LL);
  if ( !perf )
    goto LABEL_9;
  ((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.parent)(perf, perf->klass[1]._1.generic_class);
  perf = (BattlePerformance_o *)this->fields.myFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, motionName, 0LL);
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
    sub_B2C434(0LL, name);
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
    sub_B2C434(0LL, eventstr);
  PlayMakerFSM__SendEvent(myFsm, eventstr, 0LL);
}


void __fastcall BattleFieldMotionComponent__setPerf(
        BattleFieldMotionComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  struct BattlePerformance_o **p_perf; // x19
  __int64 v6; // x1
  PlayMakerFSM_o *FsmVariables; // x0
  UnityEngine_Component_o *v8; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v9; // x19

  if ( (byte_4184B93 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10636/*"Performance"*/, inperf);
    byte_4184B93 = 1;
  }
  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_B2C2F8(p_perf, inperf);
  FsmVariables = (PlayMakerFSM_o *)p_perf[1];
  *((_BYTE *)p_perf + 152) = 0;
  if ( !FsmVariables
    || (FsmVariables = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(FsmVariables, 0LL)) == 0LL
    || (FsmVariables = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)FsmVariables,
                                           (System_String_o *)StringLiteral_10636/*"Performance"*/,
                                           0LL),
        (v8 = (UnityEngine_Component_o *)*p_perf) == 0LL)
    || (v9 = (HutongGames_PlayMaker_FsmGameObject_o *)FsmVariables,
        FsmVariables = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v8, 0LL),
        !v9) )
  {
    sub_B2C434(FsmVariables, v6);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v9, (UnityEngine_GameObject_o *)FsmVariables, 0LL);
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
  BattleFieldMotionComponent_o *v4; // x20
  __int64 v5; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v7; // x8
  BattleFieldMotionComponent_o *v8; // x21
  unsigned __int64 v9; // x22
  struct PlayMakerFSM_o *myFsm; // x8
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4184B97 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__, endEvent);
    this = (BattleFieldMotionComponent_o *)sub_B2C35C(&StringLiteral_1832/*"ActorObject"*/, v5);
    byte_4184B97 = 1;
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_23;
  this = (BattleFieldMotionComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_23;
  BattleData__onProgressflg((BattleData_o *)this, 1024, 0LL);
  this = (BattleFieldMotionComponent_o *)v4->fields.badata;
  if ( !this )
    goto LABEL_23;
  this = (BattleFieldMotionComponent_o *)BattleActionData__getReplaceMember((BattleActionData_o *)this, -1, 0LL);
  if ( this )
  {
    v7 = this->fields.perf;
    v8 = this;
    if ( v7 )
    {
      if ( (int)v7 >= 1 )
      {
        v9 = 0LL;
        while ( v9 < (unsigned int)v7 )
        {
          this = (BattleFieldMotionComponent_o *)v4->fields.replaceMember;
          if ( !this )
            goto LABEL_23;
          System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
            (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this,
            *((Mono_Net_CFNetwork_GetProxyData_o **)&v8->fields.myFsm + v9),
            (const MethodInfo_295DE78 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__);
          LODWORD(v7) = v8->fields.perf;
          if ( (__int64)++v9 >= (int)v7 )
            goto LABEL_13;
        }
LABEL_24:
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
LABEL_13:
      if ( !(_DWORD)v7 )
        goto LABEL_24;
      myFsm = v8->fields.myFsm;
      if ( myFsm )
      {
        this = (BattleFieldMotionComponent_o *)v4->fields.perf;
        if ( this )
        {
          this = (BattleFieldMotionComponent_o *)BattlePerformance__getServantGameObject(
                                                   (BattlePerformance_o *)this,
                                                   (int32_t)myFsm->fields.fsmTemplate,
                                                   0LL);
          if ( v4->fields.myFsm )
          {
            v11 = (UnityEngine_GameObject_o *)this;
            this = (BattleFieldMotionComponent_o *)PlayMakerFSM__get_Fsm(v4->fields.myFsm, 0LL);
            if ( this )
            {
              this = (BattleFieldMotionComponent_o *)this->fields.playerStage;
              if ( this )
              {
                this = (BattleFieldMotionComponent_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                         (System_String_o *)StringLiteral_1832/*"ActorObject"*/,
                                                         0LL);
                if ( this )
                {
                  HutongGames_PlayMaker_FsmGameObject__set_Value(
                    (HutongGames_PlayMaker_FsmGameObject_o *)this,
                    v11,
                    0LL);
                  this = (BattleFieldMotionComponent_o *)v4->fields.myFsm;
                  if ( this )
                  {
                    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, endEvent, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_B2C434(this, endEvent);
    }
  }
  BattleFieldMotionComponent__finishMotion(v4, (const MethodInfo *)endEvent);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleFieldMotionComponent__CameraCoroutine_d__44_o *v8; // x19
  __int64 v9; // x1
  int32_t _1__state; // w8
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  struct BattleFieldMotionComponent_o *_4__this; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x19
  struct BattlePerformance_o *v16; // x8

  v8 = this;
  if ( (byte_4186A79 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    this = (BattleFieldMotionComponent__CameraCoroutine_d__44_o *)sub_B2C35C(&StringLiteral_12252/*"SKILL_E_ALL_PLAYER"*/, v9);
    byte_4186A79 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
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
    this = (BattleFieldMotionComponent__CameraCoroutine_d__44_o *)UnityEngine_Object__op_Inequality(
                                                                    actioncamera,
                                                                    0LL,
                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    v16 = _4__this->fields.perf;
    if ( !v16 || (this = (BattleFieldMotionComponent__CameraCoroutine_d__44_o *)v16->fields.actioncamera) == 0LL )
LABEL_16:
      sub_B2C434(this, method);
    BattleActionCamera__sendMainEvent((BattleActionCamera_o *)this, (System_String_o *)StringLiteral_12252/*"SKILL_E_ALL_PLAYER"*/, 0LL);
  }
  else if ( !_1__state )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = -1;
    sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleFieldMotionComponent__CameraCoroutine_d__44_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
    sub_B2C434(this, method);
  PlayMakerFSM__SendEvent(myFsm, this->fields.name, 0LL);
}