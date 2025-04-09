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
    sub_1B4D1EC(bgSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
        WarBoardServantPieceBuffTurnComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *barrierEffectBasePrefab; // x21
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x20

  if ( (byte_49B88CD & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, parent);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B88CD = 1;
  }
  barrierEffectBasePrefab = (UnityEngine_Object_o *)this->fields.barrierEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(barrierEffectBasePrefab, 0LL, 0LL) )
    return 0LL;
  v8 = (Il2CppObject *)this->fields.barrierEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         v8,
         (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_34075504((UnityEngine_GameObject_o *)v9, parent, 0LL);
  return (UnityEngine_GameObject_o *)v9;
}


void __fastcall WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        System_Action_o *startAction,
        System_Action_o *endAction,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *barrierAnimation; // x23
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  CommonEffectActionComponent_o *v16; // x23
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  if ( (byte_49B88D0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, startAction);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__, v10);
    sub_1B4CF90(&StringLiteral_2441/*"AttackUnable_end"*/, v11);
    sub_1B4CF90(&StringLiteral_16574/*"ar256"*/, v12);
    byte_49B88D0 = 1;
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
                                              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_15;
    v16 = (CommonEffectActionComponent_o *)gameObject;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 4, startAction, 0LL);
    CommonEffectActionComponent__SetEventAction(v16, 5, endAction, 0LL);
    if ( isPlaySe )
    {
      v17 = Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B4CFA8(Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v17, v17[4]);
      OverwriteAssetSoundName__PlaySe(v18, (System_String_o *)StringLiteral_16574/*"ar256"*/, 0, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_15:
      sub_1B4D1EC(gameObject, v14);
    UnityEngine_Animation__Play_68548868(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2441/*"AttackUnable_end"*/,
      0LL);
  }
}


BattleBuffData_BuffData_o *__fastcall WarBoardServantPieceBuffTurnComponent__GetCurrentWarBoardNotAttackedBuff(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardPieceData_o *pieceData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_49B88CC & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v3);
    byte_49B88CC = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    return 0LL;
  BuffData = WarBoardPieceData__get_BuffData(pieceData, 0LL);
  if ( !BuffData )
    return 0LL;
  CurrentWarBoardNotAttackedBuff = BattleBuffData__GetCurrentWarBoardNotAttackedBuff(BuffData, 0LL);
  v7 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)CurrentWarBoardNotAttackedBuff,
         (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
  if ( !v7 )
    return 0LL;
  if ( !CurrentWarBoardNotAttackedBuff )
    sub_1B4D1EC(v7, v8);
  return (BattleBuffData_BuffData_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)CurrentWarBoardNotAttackedBuff,
                                        0,
                                        (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
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
  CGThumbnailListItem_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Animation_o *barrierAnimation; // t1
  __int64 v6; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_49B88D1 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B88D1 = 1;
  }
  barrierAnimation = this->fields.barrierAnimation;
  p_barrierAnimation = (CGThumbnailListItem_o *)&this->fields.barrierAnimation;
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
      sub_1B4D1EC(klass, v6);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
    p_barrierAnimation->klass = 0LL;
    sub_1B4CF34(p_barrierAnimation, 0, v9, v10);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  UnityEngine_Component_o *bgSprite; // x0
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x21
  int v16; // w8
  int v17; // w23
  const MethodInfo *v18; // x3
  char v19; // w23
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x4

  if ( (byte_49B88CB & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isActive);
    sub_1B4CF90(&Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__, v7);
    sub_1B4CF90(&WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo, v8);
    sub_1B4CF90(&Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__, v9);
    byte_49B88CB = 1;
  }
  v10 = sub_1B4D1DC(WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_16;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_BYTE *)(v10 + 24) = isActive;
  v15 = sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v15,
    (Il2CppObject *)v10,
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
  v16 = *(unsigned __int8 *)(v10 + 24);
  v17 = (int)bgSprite;
  if ( (v16 & ~(_DWORD)bgSprite & 1) != 0 )
  {
    WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(this, v12);
    WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(this, (System_Action_o *)v15, isPlaySe, v18);
    v16 = *(unsigned __int8 *)(v10 + 24);
  }
  if ( (v17 & v16 & 1) == 0 )
  {
    if ( (v17 & 1) == 0 )
      return;
    goto LABEL_13;
  }
  if ( !v15 )
LABEL_16:
    sub_1B4D1EC(bgSprite, v12);
  v19 = v17 & v16;
  (*(void (__fastcall **)(_QWORD, _QWORD))(v15 + 24))(*(_QWORD *)(v15 + 64), *(_QWORD *)(v15 + 40));
  if ( (v19 & 1) == 0 )
    return;
  v16 = *(unsigned __int8 *)(v10 + 24);
LABEL_13:
  if ( !v16 )
  {
    v20 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__,
      0LL);
    WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(this, (System_Action_o *)v15, v20, isPlaySe, v21);
  }
}


void __fastcall WarBoardServantPieceBuffTurnComponent__Setup(
        WarBoardServantPieceBuffTurnComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x2

  this->fields.pieceData = pieceData;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.pieceData, (int32_t)pieceData, (int32_t)method, v3);
  WarBoardServantPieceBuffTurnComponent__UpdateDisp(this, 0, v5);
}


void __fastcall WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardPieceData_o *pieceData; // x0
  CGThumbnailListItem_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *barrierAnimation; // x21
  __int64 v7; // x1
  WarBoardPieceData_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *BarrierEffectObject; // x20
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_49B88CE & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B88CE = 1;
  }
  pieceData = this->fields.pieceData;
  if ( pieceData && WarBoardPieceData__get_IsStageBoss(pieceData, 0LL) )
  {
    p_barrierAnimation = (CGThumbnailListItem_o *)&this->fields.barrierAnimation;
    barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
    {
      v8 = this->fields.pieceData;
      if ( !v8 )
        goto LABEL_15;
      gameObject = WarBoardPieceData__get_gameObject(v8, 0LL);
      BarrierEffectObject = (UnityEngine_Object_o *)WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
                                                      this,
                                                      gameObject,
                                                      v10);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (WarBoardPieceData_o *)UnityEngine_Object__op_Inequality(BarrierEffectObject, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( BarrierEffectObject )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)BarrierEffectObject,
                               (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_barrierAnimation->klass = (CGThumbnailListItem_c *)Component_object;
          sub_1B4CF34(p_barrierAnimation, (int32_t)Component_object, v13, v14);
          return;
        }
LABEL_15:
        sub_1B4D1EC(v8, v7);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *barrierAnimation; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_49B88CF & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, endAction);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__, v8);
    sub_1B4CF90(&StringLiteral_16573/*"ar255"*/, v9);
    sub_1B4CF90(&StringLiteral_2442/*"AttackUnable_start"*/, v10);
    byte_49B88CF = 1;
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
                                              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_17;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 1, endAction, 0LL);
    if ( isPlaySe )
    {
      v14 = Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1B4CFA8(Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
      v15 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v14, v14[4]);
      OverwriteAssetSoundName__PlaySe(v15, (System_String_o *)StringLiteral_16573/*"ar255"*/, 0, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_17:
      sub_1B4D1EC(gameObject, v12);
    UnityEngine_Animation__Play_68548868(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2442/*"AttackUnable_start"*/,
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  bool v11; // w1

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
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.buffData, (int32_t)CurrentWarBoardNotAttackedBuff, v8, v9);
    if ( *p_buffData )
      v11 = BattleBuffData_BuffData__get_DispTurn(*p_buffData, 0LL) > 0;
    else
      v11 = 0;
    WarBoardServantPieceBuffTurnComponent__SetDispActive(this, v11, isPlaySe, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct WarBoardServantPieceBuffTurnComponent_o *_4__this; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v9; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v10; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v11; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v12; // x8
  struct BattleBuffData_BuffData_o *buffData; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v14; // x8
  UILabel_o *stateLabel; // x20
  struct WarBoardServantPieceBuffTurnComponent_o *v16; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v17; // x8
  UILabel_o *turnLabel; // x20
  struct WarBoardServantPieceBuffTurnComponent_o *v19; // x8
  WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v25; // x8
  int32_t DispTurn; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_49B88D2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v4);
    sub_1B4CF90(&int_TypeInfo, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)sub_1B4CF90(&StringLiteral_15089/*"WARBOARD_BUFF_STATE_REST_TURN"*/, v7);
    byte_49B88D2 = 1;
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
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v9->fields.stateLabel;
  if ( !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v10->fields.turnLabel;
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
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_36;
  if ( !v11->fields.buffData )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BuffMaster___);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_36;
  buffData = v12->fields.buffData;
  if ( !buffData || !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                            &entity,
                                                                            buffData->fields.buffId,
                                                                            (const MethodInfo_319D9E8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)entity;
  if ( !entity )
    goto LABEL_36;
  stateLabel = v14->fields.stateLabel;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)BuffEntity__GetBuffStateNoticeName(
                                                                            (BuffEntity_o *)entity,
                                                                            0LL);
  if ( !stateLabel )
    goto LABEL_36;
  UILabel__set_text(stateLabel, (System_String_o *)this, 0LL);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v16->fields.stateLabel;
  if ( !this )
    goto LABEL_36;
  UILabel__SetCondensedScale((UILabel_o *)this, v16->fields.stateLabelWidth, 0, 0LL);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_36;
  turnLabel = v17->fields.turnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_15089/*"WARBOARD_BUFF_STATE_REST_TURN"*/,
                                                                            0LL);
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_36;
  v20 = this;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v19->fields.buffData;
  if ( !this
    || (DispTurn = BattleBuffData_BuffData__get_DispTurn((BattleBuffData_BuffData_o *)this, 0LL),
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DispTurn, v21, v22, v23),
        this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)System_String__Format(
                                                                                  (System_String_o *)v20,
                                                                                  v24,
                                                                                  0LL),
        !turnLabel)
    || (UILabel__set_text(turnLabel, (System_String_o *)this, 0LL), (v25 = v2->fields.__4__this) == 0LL)
    || (this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v25->fields.turnLabel) == 0LL )
  {
LABEL_36:
    sub_1B4D1EC(this, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v25->fields.turnLabelWidth, 0, 0LL);
}