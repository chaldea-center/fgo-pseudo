void __fastcall WarBoardServantPieceBuffTurnComponent___ctor(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  this->fields.stateLabelWidth = 350;
  this->fields.turnLabelWidth = 350;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardServantPieceBuffTurnComponent__Awake(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0LL),
        (bgSprite = (UnityEngine_Component_o *)this->fields.stateLabel) == 0LL)
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0LL),
        (bgSprite = (UnityEngine_Component_o *)this->fields.turnLabel) == 0LL)
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL )
  {
    sub_1C22094(bgSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
        WarBoardServantPieceBuffTurnComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barrierEffectBasePrefab; // x21
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x20

  if ( (byte_4BD9EFE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9EFE = 1;
  }
  barrierEffectBasePrefab = (UnityEngine_Object_o *)this->fields.barrierEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(barrierEffectBasePrefab, 0LL, 0LL) )
    return 0LL;
  v7 = (Il2CppObject *)this->fields.barrierEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         v7,
         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_34803616((UnityEngine_GameObject_o *)v8, parent, 0LL);
  return (UnityEngine_GameObject_o *)v8;
}


void __fastcall WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        System_Action_o *startAction,
        System_Action_o *endAction,
        bool isPlaySe,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barrierAnimation; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  CommonEffectActionComponent_o *v12; // x23
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4BD9F01 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
    sub_1C21E38(&StringLiteral_2589/*"AttackUnable_end"*/);
    sub_1C21E38(&StringLiteral_17166/*"ar256"*/);
    byte_4BD9F01 = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
      goto LABEL_15;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_15;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_15;
    v12 = (CommonEffectActionComponent_o *)gameObject;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 4, startAction, 0LL);
    CommonEffectActionComponent__SetEventAction(v12, 5, endAction, 0LL);
    if ( isPlaySe )
    {
      v13 = Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C21E50(Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v13, v13[4]);
      OverwriteAssetSoundName__PlaySe(v14, (System_String_o *)StringLiteral_17166/*"ar256"*/, 0, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_15:
      sub_1C22094(gameObject, v10);
    UnityEngine_Animation__Play_70614020(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2589/*"AttackUnable_end"*/,
      0LL);
  }
}


BattleBuffData_BuffData_o *__fastcall WarBoardServantPieceBuffTurnComponent__GetCurrentWarBoardNotAttackedBuff(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BD9EFD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_4BD9EFD = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    return 0LL;
  BuffData = WarBoardPieceData__get_BuffData(pieceData, 0LL);
  if ( !BuffData )
    return 0LL;
  CurrentWarBoardNotAttackedBuff = BattleBuffData__GetCurrentWarBoardNotAttackedBuff(BuffData, 0LL);
  v6 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)CurrentWarBoardNotAttackedBuff,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
  if ( !v6 )
    return 0LL;
  if ( !CurrentWarBoardNotAttackedBuff )
    sub_1C22094(v6, v7);
  return (BattleBuffData_BuffData_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)CurrentWarBoardNotAttackedBuff,
                                        0,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
}


bool __fastcall WarBoardServantPieceBuffTurnComponent__IsEqualBuffData(
        WarBoardServantPieceBuffTurnComponent_o *this,
        BattleBuffData_BuffData_o *oldBuff,
        BattleBuffData_BuffData_o *newBuff,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t DispTurn; // w20

  result = ((unsigned __int64)oldBuff | (unsigned __int64)newBuff) == 0;
  if ( oldBuff && newBuff )
  {
    if ( oldBuff->fields.addOrder == newBuff->fields.addOrder )
    {
      DispTurn = BattleBuffData_BuffData__get_DispTurn(oldBuff, 0LL);
      return DispTurn == BattleBuffData_BuffData__get_DispTurn(newBuff, 0LL);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void __fastcall WarBoardServantPieceBuffTurnComponent__ReleaseBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Animation_o *barrierAnimation; // t1
  __int64 v6; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BD9F02 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9F02 = 1;
  }
  barrierAnimation = this->fields.barrierAnimation;
  p_barrierAnimation = (PartyOrganizationUtility_o *)&this->fields.barrierAnimation;
  v4 = (UnityEngine_Object_o *)barrierAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_barrierAnimation->klass;
    if ( !p_barrierAnimation->klass
      || (klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0LL),
          (klass = (UnityEngine_Component_o *)p_barrierAnimation->klass) == 0LL) )
    {
      sub_1C22094(klass, v6);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    p_barrierAnimation->klass = 0LL;
    sub_1C21DDC(p_barrierAnimation, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall WarBoardServantPieceBuffTurnComponent__SetDispActive(
        WarBoardServantPieceBuffTurnComponent_o *this,
        bool isActive,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v7; // x22
  UnityEngine_Component_o *bgSprite; // x0
  const MethodInfo *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x21
  int v17; // w8
  int v18; // w23
  const MethodInfo *v19; // x3
  char v20; // w23
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x4

  if ( (byte_4BD9EFC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__);
    sub_1C21E38(&WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo);
    sub_1C21E38(&Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__);
    byte_4BD9EFC = 1;
  }
  v7 = sub_1C22084(WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 24) = isActive;
  v16 = sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v16,
    (Il2CppObject *)v7,
    Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__,
    0LL);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_16;
  bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL);
  if ( !bgSprite )
    goto LABEL_16;
  bgSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                          (UnityEngine_GameObject_o *)bgSprite,
                                          0LL);
  v17 = *(unsigned __int8 *)(v7 + 24);
  v18 = (int)bgSprite;
  if ( (v17 & ~(_DWORD)bgSprite & 1) != 0 )
  {
    WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(this, v9);
    WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(this, (System_Action_o *)v16, isPlaySe, v19);
    v17 = *(unsigned __int8 *)(v7 + 24);
  }
  if ( (v18 & v17 & 1) == 0 )
  {
    if ( (v18 & 1) == 0 )
      return;
    goto LABEL_13;
  }
  if ( !v16 )
LABEL_16:
    sub_1C22094(bgSprite, v9);
  v20 = v18 & v17;
  (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 24))(*(_QWORD *)(v16 + 64), *(_QWORD *)(v16 + 40));
  if ( (v20 & 1) == 0 )
    return;
  v17 = *(unsigned __int8 *)(v7 + 24);
LABEL_13:
  if ( !v17 )
  {
    v21 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__,
      0LL);
    WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(this, (System_Action_o *)v16, v21, isPlaySe, v22);
  }
}


void __fastcall WarBoardServantPieceBuffTurnComponent__Setup(
        WarBoardServantPieceBuffTurnComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x2

  this->fields.pieceData = pieceData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.pieceData,
    (int64_t)pieceData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  WarBoardServantPieceBuffTurnComponent__UpdateDisp(this, 0, v9);
}


void __fastcall WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  PartyOrganizationUtility_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *barrierAnimation; // x21
  __int64 v6; // x1
  WarBoardPieceData_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *BarrierEffectObject; // x20
  Il2CppObject *Component_object; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BD9EFF & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9EFF = 1;
  }
  pieceData = this->fields.pieceData;
  if ( pieceData && WarBoardPieceData__get_IsStageBoss(pieceData, 0LL) )
  {
    p_barrierAnimation = (PartyOrganizationUtility_o *)&this->fields.barrierAnimation;
    barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
    {
      v7 = this->fields.pieceData;
      if ( !v7 )
        goto LABEL_15;
      gameObject = WarBoardPieceData__get_gameObject(v7, 0LL);
      BarrierEffectObject = (UnityEngine_Object_o *)WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
                                                      this,
                                                      gameObject,
                                                      v9);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (WarBoardPieceData_o *)UnityEngine_Object__op_Inequality(BarrierEffectObject, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        if ( BarrierEffectObject )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)BarrierEffectObject,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_barrierAnimation->klass = (PartyOrganizationUtility_c *)Component_object;
          sub_1C21DDC(p_barrierAnimation, (int64_t)Component_object, v12, v13, v14, v15, v16, v17);
          return;
        }
LABEL_15:
        sub_1C22094(v7, v6);
      }
    }
  }
}


void __fastcall WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        System_Action_o *endAction,
        bool isPlaySe,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barrierAnimation; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4BD9F00 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
    sub_1C21E38(&StringLiteral_17165/*"ar255"*/);
    sub_1C21E38(&StringLiteral_2590/*"AttackUnable_start"*/);
    byte_4BD9F00 = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_17;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 1, endAction, 0LL);
    if ( isPlaySe )
    {
      v10 = Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C21E50(Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v10, v10[4]);
      OverwriteAssetSoundName__PlaySe(v11, (System_String_o *)StringLiteral_17165/*"ar255"*/, 0, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_17:
      sub_1C22094(gameObject, v8);
    UnityEngine_Animation__Play_70614020(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2590/*"AttackUnable_start"*/,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceBuffTurnComponent__UpdateDisp(
        WarBoardServantPieceBuffTurnComponent_o *this,
        bool isPlaySe,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o **p_buffData; // x21
  BattleBuffData_BuffData_o *CurrentWarBoardNotAttackedBuff; // x22
  const MethodInfo *v7; // x3
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x3
  bool v15; // w1

  p_buffData = &this->fields.buffData;
  CurrentWarBoardNotAttackedBuff = WarBoardServantPieceBuffTurnComponent__GetCurrentWarBoardNotAttackedBuff(
                                     this,
                                     (const MethodInfo *)isPlaySe);
  if ( !WarBoardServantPieceBuffTurnComponent__IsEqualBuffData(
          (WarBoardServantPieceBuffTurnComponent_o *)CurrentWarBoardNotAttackedBuff,
          *p_buffData,
          CurrentWarBoardNotAttackedBuff,
          v7) )
  {
    *p_buffData = CurrentWarBoardNotAttackedBuff;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.buffData,
      (int64_t)CurrentWarBoardNotAttackedBuff,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( *p_buffData )
      v15 = BattleBuffData_BuffData__get_DispTurn(*p_buffData, 0LL) > 0;
    else
      v15 = 0;
    WarBoardServantPieceBuffTurnComponent__SetDispActive(this, v15, isPlaySe, v14);
  }
}


void __fastcall WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0___ctor(
        WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0___SetDispActive_b__0(
        WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *v2; // x19
  struct WarBoardServantPieceBuffTurnComponent_o *_4__this; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v4; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v5; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v6; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v7; // x8
  struct BattleBuffData_BuffData_o *buffData; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v9; // x8
  UILabel_o *stateLabel; // x20
  struct WarBoardServantPieceBuffTurnComponent_o *v11; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v12; // x8
  UILabel_o *turnLabel; // x20
  struct WarBoardServantPieceBuffTurnComponent_o *v14; // x8
  WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v20; // x8
  int32_t DispTurn; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4BD9F03 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)sub_1C21E38(&StringLiteral_15656/*"WARBOARD_BUFF_STATE_REST_TURN"*/);
    byte_4BD9F03 = 1;
  }
  entity = 0LL;
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)_4__this->fields.bgSprite;
  if ( !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v4->fields.stateLabel;
  if ( !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v5->fields.turnLabel;
  if ( !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0LL);
  if ( !v2->fields.isActive )
    return;
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_36;
  if ( !v6->fields.buffData )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BuffMaster___);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_36;
  buffData = v7->fields.buffData;
  if ( !buffData || !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                            &entity,
                                                                            buffData->fields.buffId,
                                                                            (const MethodInfo_325BE14 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)entity;
  if ( !entity )
    goto LABEL_36;
  stateLabel = v9->fields.stateLabel;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)BuffEntity__GetBuffStateNoticeName(
                                                                            (BuffEntity_o *)entity,
                                                                            0LL);
  if ( !stateLabel )
    goto LABEL_36;
  UILabel__set_text(stateLabel, (System_String_o *)this, 0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v11->fields.stateLabel;
  if ( !this )
    goto LABEL_36;
  UILabel__SetCondensedScale((UILabel_o *)this, v11->fields.stateLabelWidth, 0, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_36;
  turnLabel = v12->fields.turnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_15656/*"WARBOARD_BUFF_STATE_REST_TURN"*/,
                                                                            0LL);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_36;
  v15 = this;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v14->fields.buffData;
  if ( !this
    || (DispTurn = BattleBuffData_BuffData__get_DispTurn((BattleBuffData_BuffData_o *)this, 0LL),
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DispTurn, v16, v17, v18),
        this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)System_String__Format(
                                                                                  (System_String_o *)v15,
                                                                                  v19,
                                                                                  0LL),
        !turnLabel)
    || (UILabel__set_text(turnLabel, (System_String_o *)this, 0LL), (v20 = v2->fields.__4__this) == 0LL)
    || (this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v20->fields.turnLabel) == 0LL )
  {
LABEL_36:
    sub_1C22094(this, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v20->fields.turnLabelWidth, 0, 0LL);
}