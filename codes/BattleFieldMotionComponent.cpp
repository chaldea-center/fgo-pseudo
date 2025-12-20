void BattleFieldMotionComponent___ctor(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Queue_T__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2F439 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__);
    sub_1C94098(&System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo);
    sub_1C94098(&StringLiteral_2132/*"ActorObject"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F439 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields._AssetName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._AssetName_k__BackingField, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_2132/*"ActorObject"*/;
  this->fields.findActorObjectName = (struct System_String_o *)StringLiteral_2132/*"ActorObject"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.findActorObjectName, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_Queue_T__o *)sub_1C942E4(System_Collections_Generic_Queue_BattleActionData_ReplaceMember__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v17,
    (const MethodInfo_3A15C30 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember___ctor__);
  this->fields.replaceMember = (struct System_Collections_Generic_Queue_BattleActionData_ReplaceMember__o *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.replaceMember, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *BattleFieldMotionComponent__CameraCoroutine(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2F42C & 1) == 0 )
  {
    sub_1C94098(&BattleFieldMotionComponent__CameraCoroutine_d__51_TypeInfo);
    byte_4D2F42C = 1;
  }
  v3 = sub_1C942E4(BattleFieldMotionComponent__CameraCoroutine_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleFieldMotionComponent__DisplayDefenceTarget(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1C942F0(0, method);
  BattlePerformance__DisplayDefenceTarget(perf, 0);
}


void BattleFieldMotionComponent__EndSwapStepIn(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *replaceMember; // x0
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2F437 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Clear__);
    sub_1C94098(&string_TypeInfo);
    byte_4D2F437 = 1;
  }
  replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.replaceMember;
  if ( !replaceMember
    || (System_Collections_Generic_Queue_object___Clear(
          replaceMember,
          (const MethodInfo_3A15EB8 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Clear__),
        (replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.myFsm) == 0) )
  {
    sub_1C942F0(replaceMember, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)replaceMember, this->fields.endSwapEvent, 0);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.endSwapEvent = static_fields->Empty;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.endSwapEvent, (int32_t)Empty, v6, v7, v8, v9, v10, v11);
}


void BattleFieldMotionComponent__FieldCallEffect(
        BattleFieldMotionComponent_o *this,
        bool isBefore,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1C942F0(0, isBefore);
  BattlePerformance__FieldCallEffect(perf, isBefore, 0);
}


void BattleFieldMotionComponent__FieldCallServant(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1C942F0(0, method);
  BattlePerformance__FieldCallServant(perf, 0);
}


void BattleFieldMotionComponent__FieldEntryAllAtOnce(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1C942F0(0, method);
  BattlePerformance__FieldEntryAllAtOnce(perf, 0);
}


System_String_o *BattleFieldMotionComponent__GetMotionName(BattleActionData_o *baData, const MethodInfo *method)
{
  BattleActionData_o *v2; // x19
  System_String_o *result; // x0
  System_String_o *v4; // x0

  v2 = baData;
  if ( (byte_4D2F42B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_8760/*"MOTION_"*/);
    baData = (BattleActionData_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F42B = 1;
  }
  if ( !v2 )
    sub_1C942F0(baData, method);
  result = v2->fields.motionname;
  if ( !result )
  {
    v4 = System_Int32__ToString((int)v2 + 48, 0);
    return System_String__Concat_64417744((System_String_o *)StringLiteral_8760/*"MOTION_"*/, v4, 0);
  }
  return result;
}


UnityEngine_Transform_o *BattleFieldMotionComponent__GetTargetTr(
        BattleFieldMotionComponent_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array **p_npcBattleTr; // x8
  System_Object_array *v8; // x0

  if ( (byte_4D2F42A & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_Transform___);
    byte_4D2F42A = 1;
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
                                          0,
                                          (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_Transform___);
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
      v8 = 0;
      return (UnityEngine_Transform_o *)BasicHelper__IndexValue_object_(
                                          v8,
                                          index,
                                          0,
                                          (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_Transform___);
  }
}


void BattleFieldMotionComponent__OnMotionComplete(
        BattleFieldMotionComponent_o *this,
        System_String_o *eventstr,
        const MethodInfo *method)
{
  ++this->fields._motionCompleteCount_k__BackingField;
}


void BattleFieldMotionComponent__OpenBattleDialogRetire(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *v4; // x8
  BattleFieldMotionComponent_o *v5; // x20
  System_String_o *RetireMessageKey; // x21
  Il2CppObject *Instance; // x0
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  CommonUI_o *v10; // x22
  System_Action_o *v11; // x23
  System_String_o *v12; // [xsp+40h] [xbp-50h] BYREF
  System_String_o *resultText; // [xsp+48h] [xbp-48h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4D2F438 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleFieldMotionComponent__OpenBattleDialogRetire_b__77_0__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_2745/*"BATTLE_DIALOG_RETIRE_TITLE"*/);
    sub_1C94098(&StringLiteral_2743/*"BATTLE_DIALOG_RETIRE_CONF"*/);
    this = (BattleFieldMotionComponent_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F438 = 1;
  }
  v12 = 0;
  resultText = 0;
  klass = v2[2].klass;
  if ( !klass )
    goto LABEL_11;
  this = *(BattleFieldMotionComponent_o **)&klass->_1.byval_arg.bits;
  if ( !this )
    goto LABEL_11;
  this = (BattleFieldMotionComponent_o *)BattleData__MakeRetireMessageKey(
                                           (BattleData_o *)this,
                                           (System_String_o *)StringLiteral_2745/*"BATTLE_DIALOG_RETIRE_TITLE"*/,
                                           1,
                                           0);
  v4 = v2[2].klass;
  if ( !v4 )
    goto LABEL_11;
  v5 = this;
  this = *(BattleFieldMotionComponent_o **)&v4->_1.byval_arg.bits;
  if ( !this )
    goto LABEL_11;
  RetireMessageKey = BattleData__MakeRetireMessageKey((BattleData_o *)this, (System_String_o *)StringLiteral_2743/*"BATTLE_DIALOG_RETIRE_CONF"*/, 1, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__TryGet(&resultText, (System_String_o *)v5, (System_String_o *)StringLiteral_1/*""*/, 0);
  LocalizationManager__TryGet(&v12, RetireMessageKey, (System_String_o *)StringLiteral_1/*""*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = v12;
  v8 = resultText;
  v10 = (CommonUI_o *)Instance;
  v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v11, v2, Method_BattleFieldMotionComponent__OpenBattleDialogRetire_b__77_0__, 0);
  if ( !v10 )
LABEL_11:
    sub_1C942F0(this, method);
  CommonUI__OpenNotificationDialog(v10, v8, v9, v11, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
}


void BattleFieldMotionComponent__SetActiveMotion(
        BattleFieldMotionComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  this->fields._isActiveMotion_k__BackingField = active;
}


void BattleFieldMotionComponent__SetAssetName(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._AssetName_k__BackingField = name;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._AssetName_k__BackingField,
    (int32_t)name,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleFieldMotionComponent__StartSwapPosition(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  BattleActionData_o *badata; // x0
  BattleActionData_ReplaceMember_array *ReplaceMember; // x22
  int max_length; // w8
  unsigned int v8; // w25
  UnityEngine_Object_o *gameObject; // x21
  BattleActionData_ReplaceMember_o *v10; // x23
  UnityEngine_Object_o *ServantActor; // x24
  BattleServantData_o *monitor; // x0

  if ( (byte_4D2F434 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__);
    byte_4D2F434 = 1;
  }
  badata = this->fields.badata;
  if ( !badata )
    goto LABEL_32;
  ReplaceMember = BattleActionData__getReplaceMember(badata, -1, 0);
  badata = (BattleActionData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ReplaceMember, 0);
  if ( ((unsigned __int8)badata & 1) != 0 )
  {
    BattleFieldMotionComponent__finishMotion(this, (const MethodInfo *)endEvent);
    return;
  }
  if ( !ReplaceMember )
    goto LABEL_32;
  max_length = ReplaceMember->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    gameObject = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C942F8(badata);
      v10 = ReplaceMember->m_Items[v8];
      if ( !v10 )
        goto LABEL_32;
      badata = (BattleActionData_o *)this->fields.perf;
      if ( !badata )
        goto LABEL_32;
      ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                               (BattlePerformance_o *)badata,
                                               v10->fields.outUniqeId,
                                               0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      badata = (BattleActionData_o *)UnityEngine_Object__op_Inequality(ServantActor, 0, 0);
      if ( ((unsigned __int8)badata & 1) != 0 )
      {
        if ( !ServantActor )
          goto LABEL_32;
        monitor = (BattleServantData_o *)ServantActor[22].monitor;
        if ( monitor && BattleServantData__isAlive(monitor, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)ServantActor,
                                                   0);
        }
      }
      badata = (BattleActionData_o *)this->fields.replaceMember;
      if ( !badata )
        goto LABEL_32;
      System_Collections_Generic_Queue_object___Enqueue(
        (System_Collections_Generic_Queue_T__o *)badata,
        (Il2CppObject *)v10,
        (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__);
      max_length = ReplaceMember->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_26;
    }
  }
  gameObject = 0;
LABEL_26:
  badata = (BattleActionData_o *)this->fields.myFsm;
  if ( !badata
    || (badata = (BattleActionData_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)badata, 0)) == 0
    || (badata = (BattleActionData_o *)badata->fields.prevTargetObject) == 0
    || (badata = (BattleActionData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                         (HutongGames_PlayMaker_FsmVariables_o *)badata,
                                         this->fields.findActorObjectName,
                                         0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)badata,
          (UnityEngine_GameObject_o *)gameObject,
          0),
        (badata = (BattleActionData_o *)this->fields.myFsm) == 0) )
  {
LABEL_32:
    sub_1C942F0(badata, endEvent);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)badata, endEvent, 0);
}


void BattleFieldMotionComponent__SwapBackStep(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *replaceMember; // x0
  Il2CppObject *Current; // x0
  __int64 v8; // x1
  BattleActorControl_o *ServantActor; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  struct BattlePerformance_o *perf; // x8
  __int64 v13; // x1
  FieldMotionManager_o *fmManager_k__BackingField; // x0
  UnityEngine_Component_o *Transform; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v18; // x0
  System_Collections_Generic_Queue_Enumerator_T__o v19; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v20; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4D2F435 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_BattleActionData_ReplaceMember__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_BattleActionData_ReplaceMember__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_BattleActionData_ReplaceMember__get_Current__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__GetEnumerator__);
    sub_1C94098(&StringLiteral_6037/*"EndSwapPositionBackStep"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F435 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.replaceMember, 0) )
  {
    replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.replaceMember;
    if ( !replaceMember )
      goto LABEL_29;
    System_Collections_Generic_Queue_object___GetEnumerator(
      &v19,
      replaceMember,
      (const MethodInfo_3A162B0 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__GetEnumerator__);
    v20 = v19;
    while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_35EC5CC *)Method_System_Collections_Generic_Queue_Enumerator_BattleActionData_ReplaceMember__MoveNext__) )
    {
      Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                  &v20,
                  (const MethodInfo_35EC6BC *)Method_System_Collections_Generic_Queue_Enumerator_BattleActionData_ReplaceMember__get_Current__);
      if ( !Current )
        sub_1C942F0(0, v8);
      if ( !this->fields.perf )
        sub_1C942F0(Current, v8);
      ServantActor = BattlePerformance__getServantActor(this->fields.perf, HIDWORD(Current[2].klass), 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ServantActor, 0, 0);
      if ( !v10 )
      {
        if ( !ServantActor )
          sub_1C942F0(v10, v11);
        perf = this->fields.perf;
        if ( ServantActor->fields.isEnemy )
          v13 = 1;
        else
          v13 = 3;
        if ( !perf )
          sub_1C942F0(v10, v13);
        fmManager_k__BackingField = perf->fields._fmManager_k__BackingField;
        if ( !fmManager_k__BackingField )
          sub_1C942F0(0, v13);
        Transform = (UnityEngine_Component_o *)FieldMotionManager__GetTransform(fmManager_k__BackingField, v13, -1, 0);
        if ( !Transform )
          sub_1C942F0(0, v16);
        gameObject = UnityEngine_Component__get_gameObject(Transform, 0);
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ServantActor, 0);
        BattleActorControl__motion_BackStep(
          ServantActor,
          gameObject,
          0.2,
          0.15,
          2,
          (System_String_o *)StringLiteral_1/*""*/,
          v18,
          (System_String_o *)StringLiteral_6037/*"EndSwapPositionBackStep"*/,
          0);
      }
    }
    System_Collections_Generic_Queue_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_35EC5BC *)Method_System_Collections_Generic_Queue_Enumerator_BattleActionData_ReplaceMember__Dispose__);
  }
  replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.myFsm;
  if ( !replaceMember )
LABEL_29:
    sub_1C942F0(replaceMember, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)replaceMember, endEvent, 0);
}


void BattleFieldMotionComponent__SwapStepIn(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Object_o *Value; // x20
  Il2CppObject *Component_object; // x0
  BattlePerformance_o *perf; // x20
  System_Collections_Generic_Queue_BattleActionData_ReplaceMember__o *replaceMember; // x21
  Il2CppObject *v16; // x22
  System_Action_o *v17; // x23

  if ( (byte_4D2F436 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleFieldMotionComponent_EndSwapStepIn__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F436 = 1;
  }
  this->fields.endSwapEvent = endEvent;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.endSwapEvent,
    (int32_t)endEvent,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_15;
  myFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(myFsm, 0);
  if ( !myFsm )
    goto LABEL_15;
  myFsm = (PlayMakerFSM_o *)myFsm[1].fields.m_CancellationTokenSource;
  if ( !myFsm )
    goto LABEL_15;
  myFsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)myFsm,
                              this->fields.findActorObjectName,
                              0);
  if ( !myFsm )
    goto LABEL_15;
  Value = (UnityEngine_Object_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                    (HutongGames_PlayMaker_FsmGameObject_o *)myFsm,
                                    0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  myFsm = (PlayMakerFSM_o *)UnityEngine_Object__op_Equality(Value, 0, 0);
  if ( ((unsigned __int8)myFsm & 1) != 0 )
  {
    BattleFieldMotionComponent__EndSwapStepIn(this, v10);
    return;
  }
  if ( !Value
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Value,
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        perf = this->fields.perf,
        replaceMember = this->fields.replaceMember,
        v16 = Component_object,
        v17 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v17, (Il2CppObject *)this, Method_BattleFieldMotionComponent_EndSwapStepIn__, 0),
        !v16)
    || !perf )
  {
LABEL_15:
    sub_1C942F0(myFsm, v10);
  }
  BattlePerformance__SwapStepIn(perf, replaceMember, v17, LOBYTE(v16[35].klass) == 0, 0);
}


void BattleFieldMotionComponent___OpenBattleDialogRetire_b__77_0(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4D2F43A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_4990/*"DIALOG_CLOSE"*/);
    byte_4D2F43A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_4990/*"DIALOG_CLOSE"*/, 0);
}


bool BattleFieldMotionComponent__checkMotionEvent(
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
  myFsm = PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)myFsm, 0);
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
        sub_1C942F8(myFsm);
      myFsm = (void *)*((_QWORD *)v6 + v8 + 4);
      if ( !myFsm )
        break;
      EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)myFsm, 0);
      myFsm = (void *)System_String__op_Equality(EventName, name, 0);
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
    sub_1C942F0(myFsm, name);
  }
  return v7;
}


void BattleFieldMotionComponent__endFieldStep(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  this->fields.flgStep = 0;
}


void BattleFieldMotionComponent__endLoadReplaceActor(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(myFsm, this->fields.replaceEndEvent, 0);
}


void BattleFieldMotionComponent__finishMotion(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattlePerformance_o *v4; // x8
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *v6; // x1

  perf = this->fields.perf;
  if ( !perf
    || (perf = (BattlePerformance_o *)BattlePerformance__get_MotionSkip(perf, 0)) == 0
    || (((void (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.generic_class)(
          perf,
          perf->klass[1]._1.typeMetadataHandle),
        perf = this->fields.perf,
        this->fields._isActiveMotion_k__BackingField = 0,
        !perf)
    || (BattlePerformance__EndActionDataFromAnyMotion(perf, 0), (v4 = this->fields.perf) == 0)
    || (perf = (BattlePerformance_o *)v4->fields.logic) == 0 )
  {
    sub_1C942F0(perf, method);
  }
  if ( BattleLogic__CheckEnemyDropItemAll((BattleLogic_o *)perf, 0) )
  {
    v6 = BattleFieldMotionComponent__CameraCoroutine(this, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  }
}


UnityEngine_Transform_o *BattleFieldMotionComponent__getEnemyPopPoint(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *battle_enemyTr; // x8
  int32_t max_length; // w9

  battle_enemyTr = this->fields.battle_enemyTr;
  if ( !battle_enemyTr )
    sub_1C942F0(this, index);
  max_length = battle_enemyTr->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C942F8(this);
  return battle_enemyTr->m_Items[index];
}


UnityEngine_Transform_o *BattleFieldMotionComponent__getEnemyTacticalTr(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *tactical_enemyTr; // x8
  int32_t max_length; // w9

  tactical_enemyTr = this->fields.tactical_enemyTr;
  if ( !tactical_enemyTr )
    sub_1C942F0(this, index);
  max_length = tactical_enemyTr->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C942F8(this);
  return tactical_enemyTr->m_Items[index];
}


PlayMakerFSM_o *BattleFieldMotionComponent__getFsm(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myFsm; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2F433 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F433 = 1;
  }
  myFsm = (UnityEngine_Object_o *)this->fields.myFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(myFsm, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.myFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.myFsm, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.myFsm;
}


UnityEngine_GameObject_o *BattleFieldMotionComponent__getGameObject(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D2F432 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F432 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, name, 1, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
  if ( !v7 )
    return 0;
  if ( !NodeFromName )
    sub_1C942F0(v7, v8);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0);
}


UnityEngine_Transform_o *BattleFieldMotionComponent__getPlayerPopTr(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *battle_playerTr; // x8
  int32_t max_length; // w9

  battle_playerTr = this->fields.battle_playerTr;
  if ( !battle_playerTr )
    sub_1C942F0(this, index);
  max_length = battle_playerTr->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C942F8(this);
  return battle_playerTr->m_Items[index];
}


UnityEngine_Transform_o *BattleFieldMotionComponent__getPlayerTacticalTr(
        BattleFieldMotionComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *tactical_playerTr; // x8
  int32_t max_length; // w9

  tactical_playerTr = this->fields.tactical_playerTr;
  if ( !tactical_playerTr )
    sub_1C942F0(this, index);
  max_length = tactical_playerTr->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C942F8(this);
  return tactical_playerTr->m_Items[index];
}


UnityEngine_Transform_o *BattleFieldMotionComponent__getPopEnemy(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pop_enemyTr;
}


UnityEngine_Transform_o *BattleFieldMotionComponent__getPopPlayer(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pop_playerTr;
}


System_String_o *BattleFieldMotionComponent__get_AssetName(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._AssetName_k__BackingField;
}


BaseMotionSkip_o *BattleFieldMotionComponent__get_MotionSkip(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf )
    sub_1C942F0(0, method);
  return BattlePerformance__get_MotionSkip(perf, 0);
}


bool BattleFieldMotionComponent__get_isActiveMotion(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  return this->fields._isActiveMotion_k__BackingField;
}


int32_t BattleFieldMotionComponent__get_motionCompleteCount(
        BattleFieldMotionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._motionCompleteCount_k__BackingField;
}


bool BattleFieldMotionComponent__isStep(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  return this->fields.flgStep;
}


void BattleFieldMotionComponent__loadPt(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        bool isTactical,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
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
  BattlePerformance_o *perf; // x20
  System_Action_o *v23; // x21

  if ( (byte_4D2F431 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleFieldMotionComponent___c__DisplayClass66_0__loadPt_b__0__);
    sub_1C94098(&BattleFieldMotionComponent___c__DisplayClass66_0_TypeInfo);
    byte_4D2F431 = 1;
  }
  v7 = sub_1C942E4(BattleFieldMotionComponent___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 24) = name,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)name, v16, v17, v18, v19, v20, v21),
        perf = this->fields.perf,
        v23 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v7,
          Method_BattleFieldMotionComponent___c__DisplayClass66_0__loadPt_b__0__,
          0),
        !perf) )
  {
    sub_1C942F0(v8, v9);
  }
  BattlePerformance__loadPt(perf, v23, isTactical, 0);
}


void BattleFieldMotionComponent__loadReplace(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattlePerformance_o *perf; // x20
  BattleActionData_ReplaceMember_o *targetReplaceData; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4D2F42F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleFieldMotionComponent_endLoadReplaceActor__);
    byte_4D2F42F = 1;
  }
  this->fields.replaceEndEvent = endEvent;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.replaceEndEvent,
    (int32_t)endEvent,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  perf = this->fields.perf;
  targetReplaceData = this->fields.targetReplaceData;
  v12 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleFieldMotionComponent_endLoadReplaceActor__, 0);
  if ( !perf )
    sub_1C942F0(v13, v14);
  BattlePerformance__replaceMember(perf, targetReplaceData, v12, 0);
}


void BattleFieldMotionComponent__loadReplaceActor(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *replaceMember; // x0
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleActionData_ReplaceMember_o *targetReplaceData; // x8
  UnityEngine_GameObject_o *v14; // x21

  if ( (byte_4D2F42E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__);
    sub_1C94098(&StringLiteral_2132/*"ActorObject"*/);
    byte_4D2F42E = 1;
  }
  replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.replaceMember;
  if ( !replaceMember )
    goto LABEL_12;
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         replaceMember,
         (const MethodInfo_3A16388 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Dequeue__);
  this->fields.targetReplaceData = (struct BattleActionData_ReplaceMember_o *)v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.targetReplaceData, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  targetReplaceData = this->fields.targetReplaceData;
  if ( !targetReplaceData )
    goto LABEL_12;
  replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.perf;
  if ( !replaceMember
    || (replaceMember = (System_Collections_Generic_Queue_T__o *)BattlePerformance__getServantGameObject(
                                                                   (BattlePerformance_o *)replaceMember,
                                                                   targetReplaceData->fields.outUniqeId,
                                                                   0),
        !this->fields.myFsm)
    || (v14 = (UnityEngine_GameObject_o *)replaceMember,
        (replaceMember = (System_Collections_Generic_Queue_T__o *)PlayMakerFSM__get_Fsm(this->fields.myFsm, 0)) == 0)
    || (replaceMember = (System_Collections_Generic_Queue_T__o *)replaceMember[1].fields._syncRoot) == 0
    || (replaceMember = (System_Collections_Generic_Queue_T__o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)replaceMember,
                                                                   (System_String_o *)StringLiteral_2132/*"ActorObject"*/,
                                                                   0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)replaceMember, v14, 0),
        (replaceMember = (System_Collections_Generic_Queue_T__o *)this->fields.myFsm) == 0) )
  {
LABEL_12:
    sub_1C942F0(replaceMember, endEvent);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)replaceMember, endEvent, 0);
}


void BattleFieldMotionComponent__playBattleActionData(
        BattleFieldMotionComponent_o *this,
        BattleActionData_o *badata,
        System_String_o *motionName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleActionData_o **p_badata; // x0
  BattlePerformance_o *perf; // x0
  __int64 v13; // x1

  this->fields.badata = badata;
  p_badata = &this->fields.badata;
  *((_BYTE *)p_badata + 16) = 1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)p_badata,
    (int32_t)badata,
    (int32_t)motionName,
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
      BattlePerformance__endActionData(perf, 0);
      return;
    }
LABEL_9:
    sub_1C942F0(perf, v13);
  }
  if ( !perf )
    goto LABEL_9;
  perf = (BattlePerformance_o *)BattlePerformance__get_MotionSkip(perf, 0);
  if ( !perf )
    goto LABEL_9;
  ((void (__fastcall *)(BattlePerformance_o *, Il2CppClass *))perf->klass[1]._1.declaringType)(
    perf,
    perf->klass[1]._1.parent);
  perf = (BattlePerformance_o *)this->fields.myFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, motionName, 0);
}


void BattleFieldMotionComponent__procBuff(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  ;
}


void BattleFieldMotionComponent__ptStepOut(
        BattleFieldMotionComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattlePerformance_o *perf; // x19
  System_Action_o *v21; // x20

  if ( (byte_4D2F430 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleFieldMotionComponent___c__DisplayClass65_0__ptStepOut_b__0__);
    sub_1C94098(&BattleFieldMotionComponent___c__DisplayClass65_0_TypeInfo);
    byte_4D2F430 = 1;
  }
  v5 = sub_1C942E4(BattleFieldMotionComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = name,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)name, v14, v15, v16, v17, v18, v19),
        perf = this->fields.perf,
        v21 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_BattleFieldMotionComponent___c__DisplayClass65_0__ptStepOut_b__0__,
          0),
        !perf) )
  {
    sub_1C942F0(v6, v7);
  }
  BattlePerformance__stepOutPT(perf, v21, 0);
}


void BattleFieldMotionComponent__resetMotionCompleteCount(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  this->fields._motionCompleteCount_k__BackingField = 0;
}


void BattleFieldMotionComponent__sendEvent(
        BattleFieldMotionComponent_o *this,
        System_String_o *eventstr,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C942F0(0, eventstr);
  PlayMakerFSM__SendEvent(myFsm, eventstr, 0);
}


void BattleFieldMotionComponent__setPerf(
        BattleFieldMotionComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattlePerformance_o **p_perf; // x19
  __int64 v11; // x1
  PlayMakerFSM_o *FsmVariables; // x0
  UnityEngine_Component_o *v13; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v14; // x19

  if ( (byte_4D2F429 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10636/*"Performance"*/);
    byte_4D2F429 = 1;
  }
  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_perf, (int32_t)inperf, (int32_t)method, v3, v4, v5, v6, v7);
  FsmVariables = (PlayMakerFSM_o *)p_perf[1];
  *((_BYTE *)p_perf + 152) = 0;
  if ( !FsmVariables
    || (FsmVariables = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(FsmVariables, 0)) == 0
    || (FsmVariables = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)FsmVariables,
                                           (System_String_o *)StringLiteral_10636/*"Performance"*/,
                                           0),
        (v13 = (UnityEngine_Component_o *)*p_perf) == 0)
    || (v14 = (HutongGames_PlayMaker_FsmGameObject_o *)FsmVariables,
        FsmVariables = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v13, 0),
        !v14) )
  {
    sub_1C942F0(FsmVariables, v11);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v14, (UnityEngine_GameObject_o *)FsmVariables, 0);
}


void BattleFieldMotionComponent__set_AssetName(
        BattleFieldMotionComponent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._AssetName_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._AssetName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleFieldMotionComponent__set_isActiveMotion(
        BattleFieldMotionComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isActiveMotion_k__BackingField = value;
}


void BattleFieldMotionComponent__set_motionCompleteCount(
        BattleFieldMotionComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._motionCompleteCount_k__BackingField = value;
}


void BattleFieldMotionComponent__startFieldStep(BattleFieldMotionComponent_o *this, const MethodInfo *method)
{
  this->fields.flgStep = 1;
}


void BattleFieldMotionComponent__startReplaceActor(
        BattleFieldMotionComponent_o *this,
        System_String_o *endEvent,
        const MethodInfo *method)
{
  BattleFieldMotionComponent_o *v4; // x20
  struct BattlePerformance_o *perf; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleFieldMotionComponent_o *v7; // x21
  unsigned __int64 v8; // x22
  struct BattlePerformance_o *v9; // x8
  BattleFieldMotionComponent_o *v10; // x21

  v4 = this;
  if ( (byte_4D2F42D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__);
    this = (BattleFieldMotionComponent_o *)sub_1C94098(&StringLiteral_2132/*"ActorObject"*/);
    byte_4D2F42D = 1;
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_23;
  this = (BattleFieldMotionComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_23;
  BattleData__onProgressflg((BattleData_o *)this, 1024, 0);
  this = (BattleFieldMotionComponent_o *)v4->fields.badata;
  if ( !this )
    goto LABEL_23;
  this = (BattleFieldMotionComponent_o *)BattleActionData__getReplaceMember((BattleActionData_o *)this, -1, 0);
  if ( this )
  {
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v7 = this;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        v8 = 0;
        while ( v8 < (unsigned int)m_CancellationTokenSource )
        {
          this = (BattleFieldMotionComponent_o *)v4->fields.replaceMember;
          if ( !this )
            goto LABEL_23;
          System_Collections_Generic_Queue_object___Enqueue(
            (System_Collections_Generic_Queue_T__o *)this,
            *((Il2CppObject **)&v7->fields.perf + v8),
            (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_BattleActionData_ReplaceMember__Enqueue__);
          LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
          if ( (__int64)++v8 >= (int)m_CancellationTokenSource )
            goto LABEL_13;
        }
LABEL_24:
        sub_1C942F8(this);
      }
LABEL_13:
      if ( !(_DWORD)m_CancellationTokenSource )
        goto LABEL_24;
      v9 = v7->fields.perf;
      if ( v9 )
      {
        this = (BattleFieldMotionComponent_o *)v4->fields.perf;
        if ( this )
        {
          this = (BattleFieldMotionComponent_o *)BattlePerformance__getServantGameObject(
                                                   (BattlePerformance_o *)this,
                                                   HIDWORD(v9->fields.fsm),
                                                   0);
          if ( v4->fields.myFsm )
          {
            v10 = this;
            this = (BattleFieldMotionComponent_o *)PlayMakerFSM__get_Fsm(v4->fields.myFsm, 0);
            if ( this )
            {
              this = (BattleFieldMotionComponent_o *)this->fields.tactical_enemyTr;
              if ( this )
              {
                this = (BattleFieldMotionComponent_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                         (System_String_o *)StringLiteral_2132/*"ActorObject"*/,
                                                         0);
                if ( this )
                {
                  HutongGames_PlayMaker_FsmGameObject__set_Value(
                    (HutongGames_PlayMaker_FsmGameObject_o *)this,
                    (UnityEngine_GameObject_o *)v10,
                    0);
                  this = (BattleFieldMotionComponent_o *)v4->fields.myFsm;
                  if ( this )
                  {
                    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, endEvent, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_1C942F0(this, endEvent);
    }
  }
  BattleFieldMotionComponent__finishMotion(v4, (const MethodInfo *)endEvent);
}


void BattleFieldMotionComponent__CameraCoroutine_d__51___ctor(
        BattleFieldMotionComponent__CameraCoroutine_d__51_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleFieldMotionComponent__CameraCoroutine_d__51__MoveNext(
        BattleFieldMotionComponent__CameraCoroutine_d__51_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleFieldMotionComponent__CameraCoroutine_d__51_o *v8; // x19
  int32_t _1__state; // w8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  struct BattleFieldMotionComponent_o *_4__this; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actioncamera; // x19
  struct BattlePerformance_o *v15; // x8

  v8 = this;
  if ( (byte_4D2F43B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (BattleFieldMotionComponent__CameraCoroutine_d__51_o *)sub_1C94098(&StringLiteral_12284/*"SKILL_P_ALL_ENEMY"*/);
    byte_4D2F43B = 1;
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
    this = (BattleFieldMotionComponent__CameraCoroutine_d__51_o *)UnityEngine_Object__op_Inequality(actioncamera, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    v15 = _4__this->fields.perf;
    if ( !v15 || (this = (BattleFieldMotionComponent__CameraCoroutine_d__51_o *)v15->fields.actioncamera) == 0 )
LABEL_15:
      sub_1C942F0(this, method);
    BattleActionCamera__sendMainEvent((BattleActionCamera_o *)this, (System_String_o *)StringLiteral_12284/*"SKILL_P_ALL_ENEMY"*/, 0);
  }
  else if ( !_1__state )
  {
    v8->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = -1;
    sub_1C9403C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattleFieldMotionComponent__CameraCoroutine_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleFieldMotionComponent__CameraCoroutine_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleFieldMotionComponent__CameraCoroutine_d__51__System_Collections_IEnumerator_Reset(
        BattleFieldMotionComponent__CameraCoroutine_d__51_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleFieldMotionComponent__CameraCoroutine_d__51_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleFieldMotionComponent__CameraCoroutine_d__51__System_Collections_IEnumerator_get_Current(
        BattleFieldMotionComponent__CameraCoroutine_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleFieldMotionComponent__CameraCoroutine_d__51__System_IDisposable_Dispose(
        BattleFieldMotionComponent__CameraCoroutine_d__51_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleFieldMotionComponent___c__DisplayClass65_0___ctor(
        BattleFieldMotionComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldMotionComponent___c__DisplayClass65_0___ptStepOut_b__0(
        BattleFieldMotionComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct BattleFieldMotionComponent_o *_4__this; // x8
  PlayMakerFSM_o *myFsm; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (myFsm = _4__this->fields.myFsm) == 0 )
    sub_1C942F0(this, method);
  PlayMakerFSM__SendEvent(myFsm, this->fields.name, 0);
}


void BattleFieldMotionComponent___c__DisplayClass66_0___ctor(
        BattleFieldMotionComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldMotionComponent___c__DisplayClass66_0___loadPt_b__0(
        BattleFieldMotionComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  struct BattleFieldMotionComponent_o *_4__this; // x8
  PlayMakerFSM_o *myFsm; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (myFsm = _4__this->fields.myFsm) == 0 )
    sub_1C942F0(this, method);
  PlayMakerFSM__SendEvent(myFsm, this->fields.name, 0);
}