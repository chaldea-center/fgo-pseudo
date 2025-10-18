void WarBoardServantPieceBuffTurnComponent___ctor(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  this->fields.stateLabelWidth = 350;
  this->fields.turnLabelWidth = 350;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardServantPieceBuffTurnComponent__Awake(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0),
        (bgSprite = (UnityEngine_Component_o *)this->fields.stateLabel) == 0)
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0),
        (bgSprite = (UnityEngine_Component_o *)this->fields.turnLabel) == 0)
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0)) == 0 )
  {
    sub_1C372B4(bgSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0);
}


UnityEngine_GameObject_o *WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
        WarBoardServantPieceBuffTurnComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barrierEffectBasePrefab; // x21
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x20

  if ( (byte_4C4089E & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4089E = 1;
  }
  barrierEffectBasePrefab = (UnityEngine_Object_o *)this->fields.barrierEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(barrierEffectBasePrefab, 0, 0) )
    return 0;
  v7 = (Il2CppObject *)this->fields.barrierEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__Instantiate_object_(
         v7,
         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_36138184((UnityEngine_GameObject_o *)v8, parent, 0);
  return (UnityEngine_GameObject_o *)v8;
}


void WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        System_Action_o *startAction,
        System_Action_o *endAction,
        bool isPlaySe,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barrierAnimation; // x23
  UnityEngine_Component_o *gameObject; // x0
  CommonEffectActionComponent_o *v11; // x23
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_4C408A1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
    sub_1C37058(&StringLiteral_2432/*"AttackUnable_end"*/);
    sub_1C37058(&StringLiteral_16861/*"ar256"*/);
    byte_4C408A1 = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(barrierAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
      goto LABEL_15;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_15;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_15;
    v11 = (CommonEffectActionComponent_o *)gameObject;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 4, startAction, 0);
    CommonEffectActionComponent__SetEventAction(v11, 5, endAction, 0);
    if ( isPlaySe )
    {
      v12 = Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C37070(Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C3703C(v12, v12[4]);
      OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_16861/*"ar256"*/, 0, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_15:
      sub_1C372B4(gameObject);
    UnityEngine_Animation__Play_71012036(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2432/*"AttackUnable_end"*/,
      0);
  }
}


BattleBuffData_BuffData_o *WarBoardServantPieceBuffTurnComponent__GetCurrentWarBoardNotAttackedBuff(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x19
  _BOOL8 v6; // x0

  if ( (byte_4C4089D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_4C4089D = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    return 0;
  BuffData = WarBoardPieceData__get_BuffData(pieceData, 0);
  if ( !BuffData )
    return 0;
  CurrentWarBoardNotAttackedBuff = BattleBuffData__GetCurrentWarBoardNotAttackedBuff(BuffData, 0);
  v6 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)CurrentWarBoardNotAttackedBuff,
         (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
  if ( !v6 )
    return 0;
  if ( !CurrentWarBoardNotAttackedBuff )
    sub_1C372B4(v6);
  return (BattleBuffData_BuffData_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)CurrentWarBoardNotAttackedBuff,
                                        0,
                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
}


bool WarBoardServantPieceBuffTurnComponent__IsEqualBuffData(
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
      DispTurn = BattleBuffData_BuffData__get_DispTurn(oldBuff, 0);
      return DispTurn == BattleBuffData_BuffData__get_DispTurn(newBuff, 0);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void WarBoardServantPieceBuffTurnComponent__ReleaseBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Animation_o *barrierAnimation; // t1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C408A2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C408A2 = 1;
  }
  barrierAnimation = this->fields.barrierAnimation;
  p_barrierAnimation = (CGThumbnailListItem_o *)&this->fields.barrierAnimation;
  v4 = (UnityEngine_Object_o *)barrierAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)p_barrierAnimation->klass;
    if ( !p_barrierAnimation->klass
      || (klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0),
          (klass = (UnityEngine_Component_o *)p_barrierAnimation->klass) == 0) )
    {
      sub_1C372B4(klass);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
    p_barrierAnimation->klass = 0;
    sub_1C36FFC(p_barrierAnimation, 0, v8, v9);
  }
}


void WarBoardServantPieceBuffTurnComponent__SetDispActive(
        WarBoardServantPieceBuffTurnComponent_o *this,
        bool isActive,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v7; // x22
  UnityEngine_Component_o *bgSprite; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x21
  const MethodInfo *v12; // x1
  int v13; // w8
  int v14; // w23
  const MethodInfo *v15; // x3
  char v16; // w23
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x4

  if ( (byte_4C4089C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__);
    sub_1C37058(&WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo);
    sub_1C37058(&Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__);
    byte_4C4089C = 1;
  }
  v7 = sub_1C372A4(WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_BYTE *)(v7 + 24) = isActive;
  v11 = sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v11,
    (Il2CppObject *)v7,
    Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__,
    0);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_16;
  bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0);
  if ( !bgSprite )
    goto LABEL_16;
  bgSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)bgSprite, 0);
  v13 = *(unsigned __int8 *)(v7 + 24);
  v14 = (int)bgSprite;
  if ( (v13 & ~(_DWORD)bgSprite & 1) != 0 )
  {
    WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(this, v12);
    WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(this, (System_Action_o *)v11, isPlaySe, v15);
    v13 = *(unsigned __int8 *)(v7 + 24);
  }
  if ( (v14 & v13 & 1) == 0 )
  {
    if ( (v14 & 1) == 0 )
      return;
    goto LABEL_13;
  }
  if ( !v11 )
LABEL_16:
    sub_1C372B4(bgSprite);
  v16 = v14 & v13;
  (*(void (__fastcall **)(_QWORD, _QWORD))(v11 + 24))(*(_QWORD *)(v11 + 64), *(_QWORD *)(v11 + 40));
  if ( (v16 & 1) == 0 )
    return;
  v13 = *(unsigned __int8 *)(v7 + 24);
LABEL_13:
  if ( !v13 )
  {
    v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__,
      0);
    WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(this, (System_Action_o *)v11, v17, isPlaySe, v18);
  }
}


void WarBoardServantPieceBuffTurnComponent__Setup(
        WarBoardServantPieceBuffTurnComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x2

  this->fields.pieceData = pieceData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.pieceData, (int32_t)pieceData, (int32_t)method, v3);
  WarBoardServantPieceBuffTurnComponent__UpdateDisp(this, 0, v5);
}


void WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  CGThumbnailListItem_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *barrierAnimation; // x21
  WarBoardPieceData_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Object_o *BarrierEffectObject; // x20
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C4089F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4089F = 1;
  }
  pieceData = this->fields.pieceData;
  if ( pieceData && WarBoardPieceData__get_IsStageBoss(pieceData, 0) )
  {
    p_barrierAnimation = (CGThumbnailListItem_o *)&this->fields.barrierAnimation;
    barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(barrierAnimation, 0, 0) )
    {
      v6 = this->fields.pieceData;
      if ( !v6 )
        goto LABEL_15;
      gameObject = WarBoardPieceData__get_gameObject(v6, 0);
      BarrierEffectObject = (UnityEngine_Object_o *)WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
                                                      this,
                                                      gameObject,
                                                      v8);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (WarBoardPieceData_o *)UnityEngine_Object__op_Inequality(BarrierEffectObject, 0, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( BarrierEffectObject )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)BarrierEffectObject,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_barrierAnimation->klass = (CGThumbnailListItem_c *)Component_object;
          sub_1C36FFC(p_barrierAnimation, (int32_t)Component_object, v11, v12);
          return;
        }
LABEL_15:
        sub_1C372B4(v6);
      }
    }
  }
}


void WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        System_Action_o *endAction,
        bool isPlaySe,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barrierAnimation; // x22
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4C408A0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
    sub_1C37058(&StringLiteral_16860/*"ar255"*/);
    sub_1C37058(&StringLiteral_2433/*"AttackUnable_start"*/);
    byte_4C408A0 = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(barrierAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_17;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 1, endAction, 0);
    if ( isPlaySe )
    {
      v9 = Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C37070(Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySe(v10, (System_String_o *)StringLiteral_16860/*"ar255"*/, 0, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_17:
      sub_1C372B4(gameObject);
    UnityEngine_Animation__Play_71012036(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2433/*"AttackUnable_start"*/,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardServantPieceBuffTurnComponent__UpdateDisp(
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.buffData, (int32_t)CurrentWarBoardNotAttackedBuff, v8, v9);
    if ( *p_buffData )
      v11 = BattleBuffData_BuffData__get_DispTurn(*p_buffData, 0) > 0;
    else
      v11 = 0;
    WarBoardServantPieceBuffTurnComponent__SetDispActive(this, v11, isPlaySe, v10);
  }
}


void WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0___ctor(
        WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0___SetDispActive_b__0(
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
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v23; // x8
  int32_t DispTurn; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4C408A3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)sub_1C37058(&StringLiteral_15378/*"WARBOARD_BUFF_STATE_REST_TURN"*/);
    byte_4C408A3 = 1;
  }
  entity = 0;
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)_4__this->fields.bgSprite;
  if ( !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v4->fields.stateLabel;
  if ( !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v5->fields.turnLabel;
  if ( !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0);
  if ( !v2->fields.isActive )
    return;
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_36;
  if ( !v6->fields.buffData )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BuffMaster___);
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
                                                                            (const MethodInfo_33A10EC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
                                                                            0);
  if ( !stateLabel )
    goto LABEL_36;
  UILabel__set_text(stateLabel, (System_String_o *)this, 0);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v11->fields.stateLabel;
  if ( !this )
    goto LABEL_36;
  UILabel__SetCondensedScale((UILabel_o *)this, v11->fields.stateLabelWidth, 0, 0);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_36;
  turnLabel = v12->fields.turnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_15378/*"WARBOARD_BUFF_STATE_REST_TURN"*/,
                                                                            0);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_36;
  v15 = this;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v14->fields.buffData;
  if ( !this
    || (DispTurn = BattleBuffData_BuffData__get_DispTurn((BattleBuffData_BuffData_o *)this, 0),
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DispTurn, v16, v17, v18, v19, v20, v21),
        this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)System_String__Format(
                                                                                  (System_String_o *)v15,
                                                                                  v22,
                                                                                  0),
        !turnLabel)
    || (UILabel__set_text(turnLabel, (System_String_o *)this, 0), (v23 = v2->fields.__4__this) == 0)
    || (this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v23->fields.turnLabel) == 0 )
  {
LABEL_36:
    sub_1C372B4(this);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v23->fields.turnLabelWidth, 0, 0);
}