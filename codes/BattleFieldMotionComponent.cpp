void __fastcall BattleFieldMotionComponent___ctor(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  void *v11; // x1
  System_Collections_Generic_Queue_T__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B69299 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v10);
    byte_4B69299 = 1;
  }
  v11 = StringLiteral_1/*""*/;
  this->fields._AssetName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._AssetName_k__BackingField,
    (int64_t)v11,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = (System_Collections_Generic_Queue_T__o *)sub_1BE4D18(System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v12,
    (const MethodInfo_375E55C *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__);
  this->fields.replaceMember = (struct System_Collections_Generic_Queue_BattleActionData_ReplaceMember__o *)v12;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.replaceMember, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleFieldMotionComponent__CameraCoroutine(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B69292 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleFieldMotionComponent__CameraCoroutine_d__49_TypeInfo, method);
    byte_4B69292 = 1;
  }
  v3 = sub_1BE4D18(BattleFieldMotionComponent__CameraCoroutine_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleFieldMotionComponent__DisplayDefenceTarget(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1BE4D28(0LL, method);
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
    sub_1BE4D28(0LL, isBefore);
  BattlePerformance__FieldCallEffect(perf, isBefore, 0LL);
}


void __fastcall BattleFieldMotionComponent__FieldCallServant(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1BE4D28(0LL, method);
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
  if ( (byte_4B69291 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_8855/*"MOTION_"*/, method);
    baData = (BattleActionData_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, v3);
    byte_4B69291 = 1;
  }
  if ( !v2 )
    sub_1BE4D28(baData, method);
  result = v2->fields.motionname;
  if ( !result )
  {
    v5 = System_Int32__ToString((int)v2 + 48, 0LL);
    return System_String__Concat_62698808((System_String_o *)StringLiteral_8855/*"MOTION_"*/, v5, 0LL);
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

  if ( (byte_4B69290 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_Transform___, *(_QWORD *)&type);
    byte_4B69290 = 1;
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
                                          (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_Transform___);
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
                                          (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_Transform___);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AssetName_k__BackingField = name;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._AssetName_k__BackingField,
    (int64_t)name,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
        sub_1BE4D30(myFsm, name);
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
    sub_1BE4D28(myFsm, name);
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
    sub_1BE4D28(0LL, method);
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
    || (BattlePerformance__EndActionDataFromAnyMotion(perf, 0LL), (v4 = this->fields.perf) == 0LL)
    || (perf = (BattlePerformance_o *)v4->fields.logic) == 0LL )
  {
    sub_1BE4D28(perf, method);
  }
  if ( BattleLogic__CheckEnemyDropItemAll((BattleLogic_o *)perf, 0LL) )
  {
    v6 = BattleFieldMotionComponent__CameraCoroutine(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    sub_1BE4D28(this, index);
  max_length = battle_enemyTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BE4D30(this, *(_QWORD *)&index);
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
    sub_1BE4D28(this, index);
  max_length = tactical_enemyTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BE4D30(this, *(_QWORD *)&index);
  return tactical_enemyTr->m_Items[index];
}


PlayMakerFSM_o *__fastcall BattleFieldMotionComponent__getFsm(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *myFsm; // x21
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B69298 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B69298 = 1;
  }
  myFsm = (UnityEngine_Object_o *)this->fields.myFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(myFsm, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.myFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.myFsm, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4B69297 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, name);
    byte_4B69297 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
  if ( !v7 )
    return 0LL;
  if ( !NodeFromName )
    sub_1BE4D28(v7, v8);
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
    sub_1BE4D28(this, index);
  max_length = battle_playerTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BE4D30(this, *(_QWORD *)&index);
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
    sub_1BE4D28(this, index);
  max_length = tactical_playerTr->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1BE4D30(this, *(_QWORD *)&index);
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
    sub_1BE4D28(0LL, method);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattlePerformance_o *perf; // x19
  System_Action_o *v23; // x20

  if ( (byte_4B69296 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, name);
    sub_1BE4ACC(&Method_BattleFieldMotionComponent___c__DisplayClass64_0__loadPt_b__0__, v5);
    sub_1BE4ACC(&BattleFieldMotionComponent___c__DisplayClass64_0_TypeInfo, v6);
    byte_4B69296 = 1;
  }
  v7 = sub_1BE4D18(BattleFieldMotionComponent___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 24) = name,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)name, v16, v17, v18, v19, v20, v21),
        perf = this->fields.perf,
        v23 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v7,
          Method_BattleFieldMotionComponent___c__DisplayClass64_0__loadPt_b__0__,
          0LL),
        !perf) )
  {
    sub_1BE4D28(v8, v9);
  }
  BattlePerformance__loadPt(perf, v23, 0LL);
}


void __fastcall BattleFieldMotionComponent__loadReplace(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  BattlePerformance_o *perf; // x20
  BattleActionData_ReplaceMember_o *targetReplaceData; // x21
  System_Action_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B69295 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, endEvent);
    sub_1BE4ACC(&Method_BattleFieldMotionComponent_endLoadReplaceActor__, v10);
    byte_4B69295 = 1;
  }
  this->fields.replaceEndEvent = endEvent;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.replaceEndEvent,
    (int64_t)endEvent,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  perf = this->fields.perf;
  targetReplaceData = this->fields.targetReplaceData;
  v13 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleFieldMotionComponent_endLoadReplaceActor__, 0LL);
  if ( !perf )
    sub_1BE4D28(v14, v15);
  BattlePerformance__replaceMember(perf, targetReplaceData, v13, 0LL);
}


void __fastcall BattleFieldMotionComponent__loadReplaceActor(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *replaceMember; // x0
  Il2CppObject *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattleActionData_ReplaceMember_o *targetReplaceData; // x8
  UnityEngine_GameObject_o *v15; // x21

  if ( (byte_4B69294 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__, endEvent);
    sub_1BE4ACC(&StringLiteral_2261/*"ActorObject"*/, v5);
    byte_4B69294 = 1;
  }
  replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.replaceMember;
  if ( !replaceMember )
    goto LABEL_12;
  v7 = System_Collections_Generic_Queue_object___Dequeue(
         replaceMember,
         (const MethodInfo_375ECB4 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__);
  this->fields.targetReplaceData = (struct BattleActionData_ReplaceMember_o *)v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.targetReplaceData, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
    || (v15 = (UnityEngine_GameObject_o *)replaceMember,
        (replaceMember = (System_Collections_Generic_Queue_T__o *)PlayMakerFSM__get_Fsm(this->fields.myFsm, 0LL)) == 0LL)
    || (replaceMember = (System_Collections_Generic_Queue_T__o *)replaceMember[1].fields._syncRoot) == 0LL
    || (replaceMember = (System_Collections_Generic_Queue_T__o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)replaceMember,
                                                                   (System_String_o *)StringLiteral_2261/*"ActorObject"*/,
                                                                   0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)replaceMember, v15, 0LL),
        (replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.myFsm) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(replaceMember, endEvent);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)replaceMember, endEvent, 0LL);
}


void __fastcall BattleFieldMotionComponent__playBattleActionData(
        BattleFieldMotionComponent_o *this,
        BattleActionData_o *badata,
        System_String_o *motionName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleActionData_o **p_badata; // x0
  BattlePerformance_o *perf; // x0
  __int64 v13; // x1

  this->fields.badata = badata;
  p_badata = &this->fields.badata;
  *((_BYTE *)p_badata + 16) = 1;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)p_badata,
    (int64_t)badata,
    (int64_t)motionName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
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
    sub_1BE4D28(perf, v13);
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
    sub_1BE4D28(0LL, name);
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
    sub_1BE4D28(0LL, eventstr);
  PlayMakerFSM__SendEvent(myFsm, eventstr, 0LL);
}


void __fastcall BattleFieldMotionComponent__setPerf(
        BattleFieldMotionComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_perf; // x19
  __int64 v11; // x1
  PlayMakerFSM_o *monitor; // x0
  UnityEngine_Component_o *klass; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v14; // x19

  if ( (byte_4B6928F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_10762/*"Performance"*/, inperf);
    byte_4B6928F = 1;
  }
  this->fields.perf = inperf;
  p_perf = (PartyOrganizationUtility_o *)&this->fields.perf;
  sub_1BE4A70(p_perf, (int64_t)inperf, (int64_t)method, v3, v4, v5, v6, v7);
  monitor = (PlayMakerFSM_o *)p_perf->monitor;
  p_perf->fields._IsQuestStartMenuMode_k__BackingField = 0;
  if ( !monitor
    || (monitor = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(monitor, 0LL)) == 0LL
    || (monitor = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                      (HutongGames_PlayMaker_FsmVariables_o *)monitor,
                                      (System_String_o *)StringLiteral_10762/*"Performance"*/,
                                      0LL),
        (klass = (UnityEngine_Component_o *)p_perf->klass) == 0LL)
    || (v14 = (HutongGames_PlayMaker_FsmGameObject_o *)monitor,
        monitor = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(klass, 0LL),
        !v14) )
  {
    sub_1BE4D28(monitor, v11);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v14, (UnityEngine_GameObject_o *)monitor, 0LL);
}


void __fastcall BattleFieldMotionComponent__set_AssetName(
        BattleFieldMotionComponent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AssetName_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._AssetName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4B69293 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__, endEvent);
    this = (BattleFieldMotionComponent_o *)sub_1BE4ACC(&StringLiteral_2261/*"ActorObject"*/, v5);
    byte_4B69293 = 1;
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
            (const MethodInfo_375EB24 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__);
          LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
          if ( (__int64)++v9 >= (int)m_CancellationTokenSource )
            goto LABEL_13;
        }
LABEL_24:
        sub_1BE4D30(this, endEvent);
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
                                                         (System_String_o *)StringLiteral_2261/*"ActorObject"*/,
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
      sub_1BE4D28(this, endEvent);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleFieldMotionComponent__CameraCoroutine_d__49_o *v8; // x19
  __int64 v9; // x1
  int32_t _1__state; // w8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct BattleFieldMotionComponent_o *_4__this; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x19
  struct BattlePerformance_o *v16; // x8

  v8 = this;
  if ( (byte_4B6929A & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    this = (BattleFieldMotionComponent__CameraCoroutine_d__49_o *)sub_1BE4ACC(&StringLiteral_12338/*"SKILL_E_ALL_PLAYER"*/, v9);
    byte_4B6929A = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
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
    v16 = _4__this->fields.perf;
    if ( !v16 || (this = (BattleFieldMotionComponent__CameraCoroutine_d__49_o *)v16->fields.actioncamera) == 0LL )
LABEL_15:
      sub_1BE4D28(this, method);
    BattleActionCamera__sendMainEvent((BattleActionCamera_o *)this, (System_String_o *)StringLiteral_12338/*"SKILL_E_ALL_PLAYER"*/, 0LL);
  }
  else if ( !_1__state )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
    sub_1BE4A70(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_BattleFieldMotionComponent__CameraCoroutine_d__49_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
    sub_1BE4D28(this, method);
  PlayMakerFSM__SendEvent(myFsm, this->fields.name, 0LL);
}