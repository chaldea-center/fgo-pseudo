void __fastcall BattleFieldMotionComponent___ctor(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  System_Collections_Generic_Queue_T__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB8386 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_1/*""*/, v6);
    byte_4AB8386 = 1;
  }
  v7 = (int)StringLiteral_1/*""*/;
  this->fields._AssetName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._AssetName_k__BackingField, v7, v2, v3);
  v8 = (System_Collections_Generic_Queue_T__o *)sub_1BAB668(System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v8,
    (const MethodInfo_36BF608 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__);
  this->fields.replaceMember = (struct System_Collections_Generic_Queue_BattleActionData_ReplaceMember__o *)v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.replaceMember, (int32_t)v8, v9, v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleFieldMotionComponent__CameraCoroutine(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB837F & 1) == 0 )
  {
    sub_1BAB41C(&BattleFieldMotionComponent__CameraCoroutine_d__49_TypeInfo, method);
    byte_4AB837F = 1;
  }
  v3 = sub_1BAB668(BattleFieldMotionComponent__CameraCoroutine_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleFieldMotionComponent__DisplayDefenceTarget(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(0LL, isBefore);
  BattlePerformance__FieldCallEffect(perf, isBefore, 0LL);
}


void __fastcall BattleFieldMotionComponent__FieldCallServant(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1BAB678(0LL, method);
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
  if ( (byte_4AB837E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_8713/*"MOTION_"*/, method);
    baData = (BattleActionData_o *)sub_1BAB41C(&StringLiteral_1/*""*/, v3);
    byte_4AB837E = 1;
  }
  if ( !v2 )
    sub_1BAB678(baData, method);
  result = v2->fields.motionname;
  if ( !result )
  {
    v5 = System_Int32__ToString((int)v2 + 48, 0LL);
    return System_String__Concat_62048128((System_String_o *)StringLiteral_8713/*"MOTION_"*/, v5, 0LL);
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
  System_Object_array *v8; // x0

  if ( (byte_4AB837D & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_IndexValue_Transform___, *(_QWORD *)&type);
    byte_4AB837D = 1;
  }
  switch ( type )
  {
    case 6:
      p_npcBattleTr = &this->fields.npcBattleTr;
      goto LABEL_7;
    case 7:
      p_npcBattleTr = &this->fields.npcTacticalTr;
LABEL_7:
      v8 = (System_Object_array *)*p_npcBattleTr;
      return (UnityEngine_Transform_o *)BasicHelper__IndexValue_object_(
                                          v8,
                                          index,
                                          0LL,
                                          (const MethodInfo_2EB31C0 *)Method_BasicHelper_IndexValue_Transform___);
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
      return (UnityEngine_Transform_o *)BasicHelper__IndexValue_object_(
                                          v8,
                                          index,
                                          0LL,
                                          (const MethodInfo_2EB31C0 *)Method_BasicHelper_IndexValue_Transform___);
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


void __fastcall BattleFieldMotionComponent__SetAssetName(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._AssetName_k__BackingField = name;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._AssetName_k__BackingField,
    (int32_t)name,
    (int32_t)method,
    v3);
}


bool __fastcall BattleFieldMotionComponent__checkMotionEvent(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  void *myFsm; // x0
  int v5; // w8
  void *v6; // x20
  bool v7; // w21
  int v8; // w22
  System_String_o *EventName; // x0

  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_10;
  myFsm = PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)myFsm, 0LL);
  if ( !myFsm )
    goto LABEL_10;
  v5 = *((_DWORD *)myFsm + 6);
  v6 = myFsm;
  v7 = v5 > 0;
  if ( v5 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v5 )
        sub_1BAB680(myFsm, name);
      myFsm = (void *)*((_QWORD *)v6 + v8 + 4);
      if ( !myFsm )
        break;
      EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(
                    (HutongGames_PlayMaker_FsmTransition_o *)myFsm,
                    0LL);
      myFsm = (void *)System_String__op_Equality(EventName, name, 0LL);
      if ( ((unsigned __int8)myFsm & 1) == 0 )
      {
        v5 = *((_DWORD *)v6 + 6);
        v7 = ++v8 < v5;
        if ( v8 < v5 )
          continue;
      }
      return v7;
    }
LABEL_10:
    sub_1BAB678(myFsm, name);
  }
  return v7;
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(perf, method);
  }
  if ( BattleLogic__CheckEnemyDropItemAll((BattleLogic_o *)perf, 0LL) )
  {
    v6 = BattleFieldMotionComponent__CameraCoroutine(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    sub_1BAB678(this, index);
  max_length = battle_enemyTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BAB680(this, *(_QWORD *)&index);
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
    sub_1BAB678(this, index);
  max_length = tactical_enemyTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BAB680(this, *(_QWORD *)&index);
  return tactical_enemyTr->m_Items[index];
}


PlayMakerFSM_o *__fastcall BattleFieldMotionComponent__getFsm(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *myFsm; // x21
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB8385 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB8385 = 1;
  }
  myFsm = (UnityEngine_Object_o *)this->fields.myFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(myFsm, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.myFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.myFsm, (int32_t)Component_object, v6, v7);
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

  if ( (byte_4AB8384 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, name);
    byte_4AB8384 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
  if ( !v7 )
    return 0LL;
  if ( !NodeFromName )
    sub_1BAB678(v7, v8);
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
    sub_1BAB678(this, index);
  max_length = battle_playerTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BAB680(this, *(_QWORD *)&index);
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
    sub_1BAB678(this, index);
  max_length = tactical_playerTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BAB680(this, *(_QWORD *)&index);
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


System_String_o *__fastcall BattleFieldMotionComponent__get_AssetName(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._AssetName_k__BackingField;
}


BaseMotionSkip_o *__fastcall BattleFieldMotionComponent__get_MotionSkip(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1BAB678(0LL, method);
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
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  BattlePerformance_o *perf; // x19
  System_Action_o *v15; // x20

  if ( (byte_4AB8383 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, name);
    sub_1BAB41C(&Method_BattleFieldMotionComponent___c__DisplayClass64_0__loadPt_b__0__, v5);
    sub_1BAB41C(&BattleFieldMotionComponent___c__DisplayClass64_0_TypeInfo, v6);
    byte_4AB8383 = 1;
  }
  v7 = sub_1BAB668(BattleFieldMotionComponent___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 24) = name,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)name, v12, v13),
        perf = this->fields.perf,
        v15 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v7,
          Method_BattleFieldMotionComponent___c__DisplayClass64_0__loadPt_b__0__,
          0LL),
        !perf) )
  {
    sub_1BAB678(v8, v9);
  }
  BattlePerformance__loadPt(perf, v15, 0LL);
}


void __fastcall BattleFieldMotionComponent__loadReplace(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  BattlePerformance_o *perf; // x20
  BattleActionData_ReplaceMember_o *targetReplaceData; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4AB8382 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, endEvent);
    sub_1BAB41C(&Method_BattleFieldMotionComponent_endLoadReplaceActor__, v6);
    byte_4AB8382 = 1;
  }
  this->fields.replaceEndEvent = endEvent;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.replaceEndEvent,
    (int32_t)endEvent,
    (int32_t)method,
    v3);
  perf = this->fields.perf;
  targetReplaceData = this->fields.targetReplaceData;
  v9 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleFieldMotionComponent_endLoadReplaceActor__, 0LL);
  if ( !perf )
    sub_1BAB678(v10, v11);
  BattlePerformance__replaceMember(perf, targetReplaceData, v9, 0LL);
}


void __fastcall BattleFieldMotionComponent__loadReplaceActor(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *replaceMember; // x0
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleActionData_ReplaceMember_o *targetReplaceData; // x8
  UnityEngine_GameObject_o *v11; // x21

  if ( (byte_4AB8381 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__, endEvent);
    sub_1BAB41C(&StringLiteral_2232/*"ActorObject"*/, v5);
    byte_4AB8381 = 1;
  }
  replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.replaceMember;
  if ( !replaceMember )
    goto LABEL_12;
  v7 = System_Collections_Generic_Queue_object___Dequeue(
         replaceMember,
         (const MethodInfo_36BFD60 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__);
  this->fields.targetReplaceData = (struct BattleActionData_ReplaceMember_o *)v7;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.targetReplaceData, (int32_t)v7, v8, v9);
  targetReplaceData = this->fields.targetReplaceData;
  if ( !targetReplaceData )
    goto LABEL_12;
  replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.perf;
  if ( !replaceMember
    || (replaceMember = (System_Collections_Generic_Queue_T__o *)BattlePerformance__getServantGameObject(
                                                                   (BattlePerformance_o *)replaceMember,
                                                                   targetReplaceData->fields.outUniqeId,
                                                                   0LL),
        !this->fields.myFsm)
    || (v11 = (UnityEngine_GameObject_o *)replaceMember,
        (replaceMember = (System_Collections_Generic_Queue_T__o *)PlayMakerFSM__get_Fsm(this->fields.myFsm, 0LL)) == 0LL)
    || (replaceMember = (System_Collections_Generic_Queue_T__o *)replaceMember[1].fields._syncRoot) == 0LL
    || (replaceMember = (System_Collections_Generic_Queue_T__o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)replaceMember,
                                                                   (System_String_o *)StringLiteral_2232/*"ActorObject"*/,
                                                                   0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)replaceMember, v11, 0LL),
        (replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.myFsm) == 0LL) )
  {
LABEL_12:
    sub_1BAB678(replaceMember, endEvent);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_badata, (int32_t)badata, (int32_t)motionName, (int32_t)method);
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
    sub_1BAB678(perf, v9);
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
    sub_1BAB678(0LL, name);
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
    sub_1BAB678(0LL, eventstr);
  PlayMakerFSM__SendEvent(myFsm, eventstr, 0LL);
}


void __fastcall BattleFieldMotionComponent__setPerf(
        BattleFieldMotionComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct BattlePerformance_o **p_perf; // x19
  __int64 v7; // x1
  PlayMakerFSM_o *FsmVariables; // x0
  UnityEngine_Component_o *v9; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v10; // x19

  if ( (byte_4AB837C & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_10606/*"Performance"*/, inperf);
    byte_4AB837C = 1;
  }
  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_perf, (int32_t)inperf, (int32_t)method, v3);
  FsmVariables = (PlayMakerFSM_o *)p_perf[1];
  *((_BYTE *)p_perf + 152) = 0;
  if ( !FsmVariables
    || (FsmVariables = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(FsmVariables, 0LL)) == 0LL
    || (FsmVariables = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)FsmVariables,
                                           (System_String_o *)StringLiteral_10606/*"Performance"*/,
                                           0LL),
        (v9 = (UnityEngine_Component_o *)*p_perf) == 0LL)
    || (v10 = (HutongGames_PlayMaker_FsmGameObject_o *)FsmVariables,
        FsmVariables = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v9, 0LL),
        !v10) )
  {
    sub_1BAB678(FsmVariables, v7);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v10, (UnityEngine_GameObject_o *)FsmVariables, 0LL);
}


void __fastcall BattleFieldMotionComponent__set_AssetName(
        BattleFieldMotionComponent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._AssetName_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._AssetName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleFieldMotionComponent_o *v8; // x21
  unsigned __int64 v9; // x22
  struct BattlePerformance_o *v10; // x8
  BattleFieldMotionComponent_o *v11; // x21

  v4 = this;
  if ( (byte_4AB8380 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__, endEvent);
    this = (BattleFieldMotionComponent_o *)sub_1BAB41C(&StringLiteral_2232/*"ActorObject"*/, v5);
    byte_4AB8380 = 1;
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
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v8 = this;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        v9 = 0LL;
        while ( v9 < (unsigned int)m_CancellationTokenSource )
        {
          this = (BattleFieldMotionComponent_o *)v4->fields.replaceMember;
          if ( !this )
            goto LABEL_23;
          System_Collections_Generic_Queue_object___Enqueue(
            (System_Collections_Generic_Queue_T__o *)this,
            *((Il2CppObject **)&v8->fields.perf + v9),
            (const MethodInfo_36BFBD0 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__);
          LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
          if ( (__int64)++v9 >= (int)m_CancellationTokenSource )
            goto LABEL_13;
        }
LABEL_24:
        sub_1BAB680(this, endEvent);
      }
LABEL_13:
      if ( !(_DWORD)m_CancellationTokenSource )
        goto LABEL_24;
      v10 = v8->fields.perf;
      if ( v10 )
      {
        this = (BattleFieldMotionComponent_o *)v4->fields.perf;
        if ( this )
        {
          this = (BattleFieldMotionComponent_o *)BattlePerformance__getServantGameObject(
                                                   (BattlePerformance_o *)this,
                                                   (int32_t)v10->fields.fsm,
                                                   0LL);
          if ( v4->fields.myFsm )
          {
            v11 = this;
            this = (BattleFieldMotionComponent_o *)PlayMakerFSM__get_Fsm(v4->fields.myFsm, 0LL);
            if ( this )
            {
              this = (BattleFieldMotionComponent_o *)this->fields.tactical_enemyTr;
              if ( this )
              {
                this = (BattleFieldMotionComponent_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                         (System_String_o *)StringLiteral_2232/*"ActorObject"*/,
                                                         0LL);
                if ( this )
                {
                  HutongGames_PlayMaker_FsmGameObject__set_Value(
                    (HutongGames_PlayMaker_FsmGameObject_o *)this,
                    (UnityEngine_GameObject_o *)v11,
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
      sub_1BAB678(this, endEvent);
    }
  }
  BattleFieldMotionComponent__finishMotion(v4, (const MethodInfo *)endEvent);
}


void __fastcall BattleFieldMotionComponent__CameraCoroutine_d__49___ctor(
        BattleFieldMotionComponent__CameraCoroutine_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleFieldMotionComponent__CameraCoroutine_d__49__MoveNext(
        BattleFieldMotionComponent__CameraCoroutine_d__49_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleFieldMotionComponent__CameraCoroutine_d__49_o *v4; // x19
  __int64 v5; // x1
  int32_t _1__state; // w8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct BattleFieldMotionComponent_o *_4__this; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x19
  struct BattlePerformance_o *v12; // x8

  v4 = this;
  if ( (byte_4AB8387 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    this = (BattleFieldMotionComponent__CameraCoroutine_d__49_o *)sub_1BAB41C(&StringLiteral_12176/*"SKILL_E_ALL_PLAYER"*/, v5);
    byte_4AB8387 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_15;
    perf = _4__this->fields.perf;
    if ( !perf )
      goto LABEL_15;
    actioncamera = (UnityEngine_Object_o *)perf->fields.actioncamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleFieldMotionComponent__CameraCoroutine_d__49_o *)UnityEngine_Object__op_Inequality(
                                                                    actioncamera,
                                                                    0LL,
                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    v12 = _4__this->fields.perf;
    if ( !v12 || (this = (BattleFieldMotionComponent__CameraCoroutine_d__49_o *)v12->fields.actioncamera) == 0LL )
LABEL_15:
      sub_1BAB678(this, method);
    BattleActionCamera__sendMainEvent((BattleActionCamera_o *)this, (System_String_o *)StringLiteral_12176/*"SKILL_E_ALL_PLAYER"*/, 0LL);
  }
  else if ( !_1__state )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isMine = -1;
    sub_1BAB3C0(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleFieldMotionComponent__CameraCoroutine_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleFieldMotionComponent__CameraCoroutine_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleFieldMotionComponent__CameraCoroutine_d__49__System_Collections_IEnumerator_Reset(
        BattleFieldMotionComponent__CameraCoroutine_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_BattleFieldMotionComponent__CameraCoroutine_d__49_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
}


Il2CppObject *__fastcall BattleFieldMotionComponent__CameraCoroutine_d__49__System_Collections_IEnumerator_get_Current(
        BattleFieldMotionComponent__CameraCoroutine_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleFieldMotionComponent__CameraCoroutine_d__49__System_IDisposable_Dispose(
        BattleFieldMotionComponent__CameraCoroutine_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleFieldMotionComponent___c__DisplayClass64_0___ctor(
        BattleFieldMotionComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldMotionComponent___c__DisplayClass64_0___loadPt_b__0(
        BattleFieldMotionComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  struct BattleFieldMotionComponent_o *_4__this; // x8
  PlayMakerFSM_o *myFsm; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (myFsm = _4__this->fields.myFsm) == 0LL )
    sub_1BAB678(this, method);
  PlayMakerFSM__SendEvent(myFsm, this->fields.name, 0LL);
}