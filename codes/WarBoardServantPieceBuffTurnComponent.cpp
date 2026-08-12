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
    sub_2213CDC(bgSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0);
}


UnityEngine_GameObject_o *WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
        WarBoardServantPieceBuffTurnComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barrierEffectBasePrefab; // x21
  bool v6; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x20

  if ( (byte_596E008 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E008 = 1;
  }
  barrierEffectBasePrefab = (UnityEngine_Object_o *)this->fields.barrierEffectBasePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, method);
  v6 = UnityEngine_Object__op_Equality(barrierEffectBasePrefab, 0, 0);
  v9 = 0;
  if ( !v6 )
  {
    v10 = (Il2CppObject *)this->fields.barrierEffectBasePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    v9 = UnityEngine_Object__Instantiate_object_(
           v10,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_42897308((UnityEngine_GameObject_o *)v9, parent, 0);
  }
  return (UnityEngine_GameObject_o *)v9;
}


void WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(
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

  if ( (byte_596E00B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
    sub_2213A60(&StringLiteral_2539/*"AttackUnable_end"*/);
    sub_2213A60(&StringLiteral_17571/*"ar256"*/);
    byte_596E00B = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, startAction, endAction);
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
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_15;
    v12 = (CommonEffectActionComponent_o *)gameObject;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 4, startAction, 0);
    CommonEffectActionComponent__SetEventAction(v12, 5, endAction, 0);
    if ( isPlaySe )
    {
      v13 = Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_2213A78(Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
      v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
      OverwriteAssetSoundName__PlaySe(v14, (System_String_o *)StringLiteral_17571/*"ar256"*/, 0, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_15:
      sub_2213CDC(gameObject, v10);
    UnityEngine_Animation__Play_83078544(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2539/*"AttackUnable_end"*/,
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
  __int64 v7; // x1

  if ( (byte_596E007 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_596E007 = 1;
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
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
  if ( !v6 )
    return 0;
  if ( !CurrentWarBoardNotAttackedBuff )
    sub_2213CDC(v6, v7);
  return (BattleBuffData_BuffData_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)CurrentWarBoardNotAttackedBuff,
                                        0,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
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
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_Animation_o *barrierAnimation; // t1
  __int64 v7; // x1
  UnityEngine_Component_o *klass; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596E00C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E00C = 1;
  }
  barrierAnimation = this->fields.barrierAnimation;
  p_barrierAnimation = (MissionNaviTransitionBoardItem_o *)&this->fields.barrierAnimation;
  v5 = (UnityEngine_Object_o *)barrierAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)p_barrierAnimation->klass;
    if ( !p_barrierAnimation->klass
      || (klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0),
          (klass = (UnityEngine_Component_o *)p_barrierAnimation->klass) == 0) )
    {
      sub_2213CDC(klass, v7);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    p_barrierAnimation->klass = 0;
    sub_2213A04(p_barrierAnimation, 0, v12, v13, v14, v15, v16, v17);
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
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_c *v16; // x0
  __int64 v17; // x21
  int v18; // w8
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x4

  if ( (byte_596E006 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__);
    sub_2213A60(&WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__);
    byte_596E006 = 1;
  }
  v7 = sub_2213CCC(WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = System_Action_TypeInfo;
  *(_BYTE *)(v7 + 24) = isActive;
  v17 = sub_2213CCC(v16);
  System_Action___ctor(
    (System_Action_o *)v17,
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
  v18 = *(unsigned __int8 *)(v7 + 24);
  if ( ((unsigned __int8)bgSprite & 1) == 0 && *(_BYTE *)(v7 + 24) )
  {
    WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(this, v9);
    WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(this, (System_Action_o *)v17, isPlaySe, v19);
    return;
  }
  if ( v18 == 0 || ((unsigned __int8)bgSprite & 1) == 0 )
  {
    if ( ((unsigned __int8)bgSprite & 1) == 0 )
      return;
    goto LABEL_13;
  }
  if ( !v17 )
LABEL_16:
    sub_2213CDC(bgSprite, v9);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 24))(*(_QWORD *)(v17 + 64), *(_QWORD *)(v17 + 40));
  v18 = *(unsigned __int8 *)(v7 + 24);
LABEL_13:
  if ( !v18 )
  {
    v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__,
      0);
    WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(this, (System_Action_o *)v17, v20, isPlaySe, v21);
  }
}


void WarBoardServantPieceBuffTurnComponent__Setup(
        WarBoardServantPieceBuffTurnComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x2

  this->fields.pieceData = pieceData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pieceData,
    (int32_t)pieceData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  WarBoardServantPieceBuffTurnComponent__UpdateDisp(this, 0, v9);
}


void WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  MissionNaviTransitionBoardItem_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *barrierAnimation; // x21
  __int64 v8; // x1
  WarBoardPieceData_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *BarrierEffectObject; // x20
  Il2CppObject *Component_object; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596E009 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E009 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( pieceData && WarBoardPieceData__get_IsStageBoss(pieceData, 0) )
  {
    p_barrierAnimation = (MissionNaviTransitionBoardItem_o *)&this->fields.barrierAnimation;
    barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    if ( UnityEngine_Object__op_Equality(barrierAnimation, 0, 0) )
    {
      v9 = this->fields.pieceData;
      if ( !v9 )
        goto LABEL_15;
      gameObject = WarBoardPieceData__get_gameObject(v9, 0);
      BarrierEffectObject = (UnityEngine_Object_o *)WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
                                                      this,
                                                      gameObject,
                                                      v11);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      v9 = (WarBoardPieceData_o *)UnityEngine_Object__op_Inequality(BarrierEffectObject, 0, 0);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        if ( BarrierEffectObject )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)BarrierEffectObject,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_barrierAnimation->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
          sub_2213A04(p_barrierAnimation, (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
          return;
        }
LABEL_15:
        sub_2213CDC(v9, v8);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(
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

  if ( (byte_596E00A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
    sub_2213A60(&StringLiteral_17570/*"ar255"*/);
    sub_2213A60(&StringLiteral_2540/*"AttackUnable_start"*/);
    byte_596E00A = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endAction, isPlaySe);
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
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_17;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 1, endAction, 0);
    if ( isPlaySe )
    {
      v10 = Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_2213A78(Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
      v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
      OverwriteAssetSoundName__PlaySe(v11, (System_String_o *)StringLiteral_17570/*"ar255"*/, 0, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_17:
      sub_2213CDC(gameObject, v8);
    UnityEngine_Animation__Play_83078544(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2540/*"AttackUnable_start"*/,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardServantPieceBuffTurnComponent__UpdateDisp(
        WarBoardServantPieceBuffTurnComponent_o *this,
        bool isPlaySe,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *CurrentWarBoardNotAttackedBuff; // x22
  BattleBuffData_BuffData_o **p_buffData; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x3
  bool v15; // w1

  CurrentWarBoardNotAttackedBuff = WarBoardServantPieceBuffTurnComponent__GetCurrentWarBoardNotAttackedBuff(
                                     this,
                                     (const MethodInfo *)isPlaySe);
  p_buffData = &this->fields.buffData;
  if ( !WarBoardServantPieceBuffTurnComponent__IsEqualBuffData(
          (WarBoardServantPieceBuffTurnComponent_o *)CurrentWarBoardNotAttackedBuff,
          this->fields.buffData,
          CurrentWarBoardNotAttackedBuff,
          v7) )
  {
    *p_buffData = CurrentWarBoardNotAttackedBuff;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.buffData,
      (int32_t)CurrentWarBoardNotAttackedBuff,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( *p_buffData )
      v15 = BattleBuffData_BuffData__get_DispTurn(*p_buffData, 0) > 0;
    else
      v15 = 0;
    WarBoardServantPieceBuffTurnComponent__SetDispActive(this, v15, isPlaySe, v14);
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
  __int64 v6; // x2
  struct WarBoardServantPieceBuffTurnComponent_o *v7; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v8; // x8
  struct BattleBuffData_BuffData_o *buffData; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v10; // x8
  UILabel_o *stateLabel; // x20
  struct WarBoardServantPieceBuffTurnComponent_o *v12; // x8
  __int64 v13; // x2
  struct WarBoardServantPieceBuffTurnComponent_o *v14; // x8
  UILabel_o *turnLabel; // x20
  struct WarBoardServantPieceBuffTurnComponent_o *v16; // x8
  WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *v17; // x21
  Il2CppObject *v18; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v19; // x8
  int32_t DispTurn; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_596E00D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BuffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)sub_2213A60(&StringLiteral_15989/*"WARBOARD_BUFF_STATE_REST_TURN"*/);
    byte_596E00D = 1;
  }
  _4__this = v2->fields.__4__this;
  entity = 0;
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
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_36;
  if ( !v7->fields.buffData )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v6);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BuffMaster___);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_36;
  buffData = v8->fields.buffData;
  if ( !buffData || !this )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                            &entity,
                                                                            buffData->fields.buffId,
                                                                            (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)entity;
  if ( !entity )
    goto LABEL_36;
  stateLabel = v10->fields.stateLabel;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)BuffEntity__GetBuffStateNoticeName(
                                                                            (BuffEntity_o *)entity,
                                                                            0);
  if ( !stateLabel )
    goto LABEL_36;
  UILabel__set_text(stateLabel, (System_String_o *)this, 0);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_36;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v12->fields.stateLabel;
  if ( !this )
    goto LABEL_36;
  UILabel__SetCondensedScale((UILabel_o *)this, v12->fields.stateLabelWidth, 0, 0);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_36;
  turnLabel = v14->fields.turnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v13);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_15989/*"WARBOARD_BUFF_STATE_REST_TURN"*/,
                                                                            0);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_36;
  v17 = this;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v16->fields.buffData;
  if ( !this
    || (DispTurn = BattleBuffData_BuffData__get_DispTurn((BattleBuffData_BuffData_o *)this, 0),
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &DispTurn),
        this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)System_String__Format(
                                                                                  (System_String_o *)v17,
                                                                                  v18,
                                                                                  0),
        !turnLabel)
    || (UILabel__set_text(turnLabel, (System_String_o *)this, 0), (v19 = v2->fields.__4__this) == 0)
    || (this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v19->fields.turnLabel) == 0 )
  {
LABEL_36:
    sub_2213CDC(this, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v19->fields.turnLabelWidth, 0, 0);
}