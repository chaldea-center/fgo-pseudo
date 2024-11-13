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
    sub_1BCAA3C(bgSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
        WarBoardServantPieceBuffTurnComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *barrierEffectBasePrefab; // x21
  __int64 v8; // x1
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x20

  if ( (byte_4B13C03 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, parent, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B13C03 = 1;
  }
  barrierEffectBasePrefab = (UnityEngine_Object_o *)this->fields.barrierEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  if ( UnityEngine_Object__op_Equality(barrierEffectBasePrefab, 0LL, 0LL) )
    return 0LL;
  v10 = (Il2CppObject *)this->fields.barrierEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v11 = UnityEngine_Object__Instantiate_object_(
          v10,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v11, parent, 0LL);
  return (UnityEngine_GameObject_o *)v11;
}


void __fastcall WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        System_Action_o *startAction,
        System_Action_o *endAction,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *barrierAnimation; // x23
  __int64 v18; // x1
  UnityEngine_Component_o *gameObject; // x0
  CommonEffectActionComponent_o *v20; // x23
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0

  if ( (byte_4B13C06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, startAction, endAction);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__, v11, v12);
    sub_1BCA7E0(&StringLiteral_2570/*"AttackUnable_end"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17052/*"ar256"*/, v15, v16);
    byte_4B13C06 = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, startAction);
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
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_15;
    v20 = (CommonEffectActionComponent_o *)gameObject;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 4, startAction, 0LL);
    CommonEffectActionComponent__SetEventAction(v20, 5, endAction, 0LL);
    if ( isPlaySe )
    {
      v21 = Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1BCA7F8(Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
      v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
      OverwriteAssetSoundName__PlaySe(v22, (System_String_o *)StringLiteral_17052/*"ar256"*/, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_15:
      sub_1BCAA3C(gameObject, v18);
    UnityEngine_Animation__Play_69899248(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2570/*"AttackUnable_end"*/,
      0LL);
  }
}


BattleBuffData_BuffData_o *__fastcall WarBoardServantPieceBuffTurnComponent__GetCurrentWarBoardNotAttackedBuff(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardPieceData_o *pieceData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B13C02 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v4, v5);
    byte_4B13C02 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    return 0LL;
  BuffData = WarBoardPieceData__get_BuffData(pieceData, 0LL);
  if ( !BuffData )
    return 0LL;
  CurrentWarBoardNotAttackedBuff = BattleBuffData__GetCurrentWarBoardNotAttackedBuff(BuffData, 0LL);
  v9 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)CurrentWarBoardNotAttackedBuff,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
  if ( !v9 )
    return 0LL;
  if ( !CurrentWarBoardNotAttackedBuff )
    sub_1BCAA3C(v9, v10);
  return (BattleBuffData_BuffData_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)CurrentWarBoardNotAttackedBuff,
                                        0,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
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
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_Animation_o *barrierAnimation; // t1
  __int64 v7; // x1
  UnityEngine_Component_o *klass; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B13C07 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13C07 = 1;
  }
  barrierAnimation = this->fields.barrierAnimation;
  p_barrierAnimation = (PartyOrganizationUtility_o *)&this->fields.barrierAnimation;
  v5 = (UnityEngine_Object_o *)barrierAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_barrierAnimation->klass;
    if ( !p_barrierAnimation->klass
      || (klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0LL),
          (klass = (UnityEngine_Component_o *)p_barrierAnimation->klass) == 0LL) )
    {
      sub_1BCAA3C(klass, v7);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    p_barrierAnimation->klass = 0LL;
    sub_1BCA784(p_barrierAnimation, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceBuffTurnComponent__SetDispActive(
        WarBoardServantPieceBuffTurnComponent_o *this,
        bool isActive,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  UnityEngine_Component_o *bgSprite; // x0
  const MethodInfo *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  int v28; // w8
  int v29; // w23
  const MethodInfo *v30; // x3
  char v31; // w23
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x4

  if ( (byte_4B13C01 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isActive, isPlaySe);
    sub_1BCA7E0(&Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__, v7, v8);
    sub_1BCA7E0(&WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__, v11, v12);
    byte_4B13C01 = 1;
  }
  v13 = sub_1BCAA2C(WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo, isActive, isPlaySe, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_BYTE *)(v13 + 24) = isActive;
  v25 = sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
  System_Action___ctor(
    (System_Action_o *)v25,
    (Il2CppObject *)v13,
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
  v28 = *(unsigned __int8 *)(v13 + 24);
  v29 = (int)bgSprite;
  if ( (v28 & ~(_DWORD)bgSprite & 1) != 0 )
  {
    WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(this, v15);
    WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(this, (System_Action_o *)v25, isPlaySe, v30);
    v28 = *(unsigned __int8 *)(v13 + 24);
  }
  if ( (v29 & v28 & 1) == 0 )
  {
    if ( (v29 & 1) == 0 )
      return;
    goto LABEL_13;
  }
  if ( !v25 )
LABEL_16:
    sub_1BCAA3C(bgSprite, v15);
  v31 = v29 & v28;
  (*(void (__fastcall **)(_QWORD, _QWORD))(v25 + 24))(*(_QWORD *)(v25 + 64), *(_QWORD *)(v25 + 40));
  if ( (v31 & 1) == 0 )
    return;
  v28 = *(unsigned __int8 *)(v13 + 24);
LABEL_13:
  if ( !v28 )
  {
    v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v26, v27);
    System_Action___ctor(
      v32,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__,
      0LL);
    WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(this, (System_Action_o *)v25, v32, isPlaySe, v33);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardPieceData_o *pieceData; // x0
  __int64 v7; // x1
  PartyOrganizationUtility_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *barrierAnimation; // x21
  __int64 v10; // x1
  WarBoardPieceData_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  UnityEngine_Object_o *BarrierEffectObject; // x20
  Il2CppObject *Component_object; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B13C04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B13C04 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( pieceData && WarBoardPieceData__get_IsStageBoss(pieceData, 0LL) )
  {
    p_barrierAnimation = (PartyOrganizationUtility_o *)&this->fields.barrierAnimation;
    barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
    {
      v11 = this->fields.pieceData;
      if ( !v11 )
        goto LABEL_15;
      gameObject = WarBoardPieceData__get_gameObject(v11, 0LL);
      BarrierEffectObject = (UnityEngine_Object_o *)WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
                                                      this,
                                                      gameObject,
                                                      v13);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      v11 = (WarBoardPieceData_o *)UnityEngine_Object__op_Inequality(BarrierEffectObject, 0LL, 0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( BarrierEffectObject )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)BarrierEffectObject,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_barrierAnimation->klass = (PartyOrganizationUtility_c *)Component_object;
          sub_1BCA784(p_barrierAnimation, (int64_t)Component_object, v17, v18, v19, v20, v21, v22);
          return;
        }
LABEL_15:
        sub_1BCAA3C(v11, v10);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        System_Action_o *endAction,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *barrierAnimation; // x22
  __int64 v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0

  if ( (byte_4B13C05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, endAction, isPlaySe);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__, v9, v10);
    sub_1BCA7E0(&StringLiteral_17051/*"ar255"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2571/*"AttackUnable_start"*/, v13, v14);
    byte_4B13C05 = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endAction);
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
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_17;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 1, endAction, 0LL);
    if ( isPlaySe )
    {
      v18 = Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BCA7F8(Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
      OverwriteAssetSoundName__PlaySe(v19, (System_String_o *)StringLiteral_17051/*"ar255"*/, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_17:
      sub_1BCAA3C(gameObject, v16);
    UnityEngine_Animation__Play_69899248(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2571/*"AttackUnable_start"*/,
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
    sub_1BCA784(
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
  __int64 v2; // x2
  WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct WarBoardServantPieceBuffTurnComponent_o *_4__this; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v15; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v16; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v17; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v18; // x8
  struct BattleBuffData_BuffData_o *buffData; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v20; // x8
  UILabel_o *stateLabel; // x20
  struct WarBoardServantPieceBuffTurnComponent_o *v22; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v23; // x8
  UILabel_o *turnLabel; // x20
  struct WarBoardServantPieceBuffTurnComponent_o *v25; // x8
  WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *v26; // x21
  Il2CppObject *v27; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v28; // x8
  int32_t DispTurn; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4B13C08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)sub_1BCA7E0(&StringLiteral_15557/*"WARBOARD_BUFF_STATE_REST_TURN"*/, v12, v13);
    byte_4B13C08 = 1;
  }
  entity = 0LL;
  _4__this = v3->fields.__4__this;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
  v15 = v3->fields.__4__this;
  if ( !v15 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v15->fields.stateLabel;
  if ( !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
  v16 = v3->fields.__4__this;
  if ( !v16 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v16->fields.turnLabel;
  if ( !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isActive, 0LL);
  if ( !v3->fields.isActive )
    return;
  v17 = v3->fields.__4__this;
  if ( !v17 )
    goto LABEL_36;
  if ( !v17->fields.buffData )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffMaster___);
  v18 = v3->fields.__4__this;
  if ( !v18 )
    goto LABEL_36;
  buffData = v18->fields.buffData;
  if ( !buffData || !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                            &entity,
                                                                            buffData->fields.buffId,
                                                                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v20 = v3->fields.__4__this;
  if ( !v20 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)entity;
  if ( !entity )
    goto LABEL_36;
  stateLabel = v20->fields.stateLabel;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)BuffEntity__GetBuffStateNoticeName(
                                                                            (BuffEntity_o *)entity,
                                                                            0LL);
  if ( !stateLabel )
    goto LABEL_36;
  UILabel__set_text(stateLabel, (System_String_o *)this, 0LL);
  v22 = v3->fields.__4__this;
  if ( !v22 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v22->fields.stateLabel;
  if ( !this )
    goto LABEL_36;
  UILabel__SetCondensedScale((UILabel_o *)this, v22->fields.stateLabelWidth, 0LL);
  v23 = v3->fields.__4__this;
  if ( !v23 )
    goto LABEL_36;
  turnLabel = v23->fields.turnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_15557/*"WARBOARD_BUFF_STATE_REST_TURN"*/,
                                                                            0LL);
  v25 = v3->fields.__4__this;
  if ( !v25 )
    goto LABEL_36;
  v26 = this;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v25->fields.buffData;
  if ( !this
    || (DispTurn = BattleBuffData_BuffData__get_DispTurn((BattleBuffData_BuffData_o *)this, 0LL),
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DispTurn),
        this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)System_String__Format(
                                                                                  (System_String_o *)v26,
                                                                                  v27,
                                                                                  0LL),
        !turnLabel)
    || (UILabel__set_text(turnLabel, (System_String_o *)this, 0LL), (v28 = v3->fields.__4__this) == 0LL)
    || (this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v28->fields.turnLabel) == 0LL )
  {
LABEL_36:
    sub_1BCAA3C(this, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v28->fields.turnLabelWidth, 0LL);
}