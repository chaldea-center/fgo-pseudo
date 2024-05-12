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
    sub_B7769C(bgSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
        WarBoardServantPieceBuffTurnComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *barrierEffectBasePrefab; // x21
  bool v6; // w0
  UnityEngine_GameObject_o *v7; // x21
  struct UnityEngine_GameObject_o *v8; // x20

  if ( (byte_438D237 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D237 = 1;
  }
  barrierEffectBasePrefab = (UnityEngine_Object_o *)this->fields.barrierEffectBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(barrierEffectBasePrefab, 0LL, 0LL);
  v7 = 0LL;
  if ( !v6 )
  {
    v8 = this->fields.barrierEffectBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)v8,
                                       (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_32813688(v7, parent, 0LL);
  }
  return v7;
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

  if ( (byte_438D23A & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
    sub_B775C4(&StringLiteral_2233/*"AttackUnable_end"*/);
    sub_B775C4(&StringLiteral_16765/*"ar256"*/);
    byte_438D23A = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_16;
    v12 = (CommonEffectActionComponent_o *)gameObject;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 4, startAction, 0LL);
    CommonEffectActionComponent__SetEventAction(v12, 5, endAction, 0LL);
    if ( isPlaySe )
    {
      v13 = Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__ + 75) & 2) != 0 )
        v13 = (_QWORD *)sub_B775CC(Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
      v14 = (System_Reflection_MethodBase_o *)sub_B775A8(v13, v13[3]);
      OverwriteAssetSoundName__PlaySe(v14, (System_String_o *)StringLiteral_16765/*"ar256"*/, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_16:
      sub_B7769C(gameObject, v10);
    UnityEngine_Animation__Play_51745976(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2233/*"AttackUnable_end"*/,
      0LL);
  }
}


BattleBuffData_BuffData_o *__fastcall WarBoardServantPieceBuffTurnComponent__GetCurrentWarBoardNotAttackedBuff(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *result; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x19
  __int64 v5; // x1
  bool v6; // w8

  if ( (byte_438D236 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_438D236 = 1;
  }
  result = (BattleBuffData_BuffData_o *)this->fields.pieceData;
  if ( result )
  {
    result = (BattleBuffData_BuffData_o *)WarBoardPieceData__get_BuffData((WarBoardPieceData_o *)result, 0LL);
    if ( result )
    {
      CurrentWarBoardNotAttackedBuff = BattleBuffData__GetCurrentWarBoardNotAttackedBuff(
                                         (BattleBuffData_o *)result,
                                         0LL);
      v6 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)CurrentWarBoardNotAttackedBuff,
             (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
      result = 0LL;
      if ( v6 )
      {
        if ( !CurrentWarBoardNotAttackedBuff )
          sub_B7769C(0LL, v5);
        if ( !CurrentWarBoardNotAttackedBuff->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        return CurrentWarBoardNotAttackedBuff->fields._items->m_Items[0];
      }
    }
  }
  return result;
}


bool __fastcall WarBoardServantPieceBuffTurnComponent__IsEqualBuffData(
        WarBoardServantPieceBuffTurnComponent_o *this,
        BattleBuffData_BuffData_o *oldBuff,
        BattleBuffData_BuffData_o *newBuff,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t DispTurn; // w20

  result = ((unsigned __int64)newBuff | (unsigned __int64)oldBuff) == 0;
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
  BattleServantConfConponent_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Animation_o *barrierAnimation; // t1
  __int64 v6; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438D23B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D23B = 1;
  }
  barrierAnimation = this->fields.barrierAnimation;
  p_barrierAnimation = (BattleServantConfConponent_o *)&this->fields.barrierAnimation;
  v4 = (UnityEngine_Object_o *)barrierAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_barrierAnimation->klass;
    if ( !p_barrierAnimation->klass
      || (klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0LL),
          (klass = (UnityEngine_Component_o *)p_barrierAnimation->klass) == 0LL) )
    {
      sub_B7769C(klass, v6);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    p_barrierAnimation->klass = 0LL;
    sub_B77560(p_barrierAnimation, 0LL, v9, v10, v11, v12, v13, v14);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x21
  int v17; // w8
  char v18; // w23
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x4

  if ( (byte_438D235 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__);
    sub_B775C4(&WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__);
    byte_438D235 = 1;
  }
  v7 = sub_B77694(WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo);
  WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0___ctor(
    (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_17;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 24) = isActive;
  v16 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__,
    0LL);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_17;
  bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL);
  if ( !bgSprite )
    goto LABEL_17;
  bgSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                          (UnityEngine_GameObject_o *)bgSprite,
                                          0LL);
  v17 = *(unsigned __int8 *)(v7 + 24);
  v18 = (char)bgSprite;
  if ( *(_BYTE *)(v7 + 24) && ((unsigned __int8)bgSprite & 1) == 0 )
  {
    WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(this, v9);
    WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(this, v16, isPlaySe, v19);
    v17 = *(unsigned __int8 *)(v7 + 24);
  }
  if ( v17 == 0 || (v18 & 1) == 0 )
  {
    if ( (v18 & 1) != 0 && !v17 )
      goto LABEL_16;
    return;
  }
  if ( !v16 )
LABEL_17:
    sub_B7769C(bgSprite, v9);
  System_Action__Invoke(v16, 0LL);
  if ( !*(_BYTE *)(v7 + 24) )
  {
LABEL_16:
    v20 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__,
      0LL);
    WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(this, v16, v20, isPlaySe, v21);
  }
}


void __fastcall WarBoardServantPieceBuffTurnComponent__Setup(
        WarBoardServantPieceBuffTurnComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x2

  this->fields.pieceData = pieceData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.pieceData,
    (System_Int32_array **)pieceData,
    (System_String_array **)method,
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
  BattleServantConfConponent_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *barrierAnimation; // x21
  __int64 v6; // x1
  WarBoardPieceData_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *BarrierEffectObject; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438D238 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D238 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( pieceData && WarBoardPieceData__get_IsStageBoss(pieceData, 0LL) )
  {
    p_barrierAnimation = (BattleServantConfConponent_o *)&this->fields.barrierAnimation;
    barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
    {
      v7 = this->fields.pieceData;
      if ( !v7 )
        goto LABEL_17;
      gameObject = WarBoardPieceData__get_gameObject(v7, 0LL);
      BarrierEffectObject = (UnityEngine_Object_o *)WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
                                                      this,
                                                      gameObject,
                                                      v9);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v7 = (WarBoardPieceData_o *)UnityEngine_Object__op_Inequality(BarrierEffectObject, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        if ( BarrierEffectObject )
        {
          Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)BarrierEffectObject,
                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_barrierAnimation->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
          sub_B77560(p_barrierAnimation, Component_srcLineSprite, v12, v13, v14, v15, v16, v17);
          return;
        }
LABEL_17:
        sub_B7769C(v7, v6);
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

  if ( (byte_438D239 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
    sub_B775C4(&StringLiteral_16764/*"ar255"*/);
    sub_B775C4(&StringLiteral_2234/*"AttackUnable_start"*/);
    byte_438D239 = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !gameObject )
      goto LABEL_18;
    CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)gameObject, 1, endAction, 0LL);
    if ( isPlaySe )
    {
      v10 = Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__ + 75) & 2) != 0 )
        v10 = (_QWORD *)sub_B775CC(Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
      v11 = (System_Reflection_MethodBase_o *)sub_B775A8(v10, v10[3]);
      OverwriteAssetSoundName__PlaySe(v11, (System_String_o *)StringLiteral_16764/*"ar255"*/, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !gameObject )
LABEL_18:
      sub_B7769C(gameObject, v8);
    UnityEngine_Animation__Play_51745976(
      (UnityEngine_Animation_o *)gameObject,
      (System_String_o *)StringLiteral_2234/*"AttackUnable_start"*/,
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
  System_Int32_array **CurrentWarBoardNotAttackedBuff; // x22
  const MethodInfo *v7; // x3
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x3
  bool v15; // w1

  p_buffData = &this->fields.buffData;
  CurrentWarBoardNotAttackedBuff = (System_Int32_array **)WarBoardServantPieceBuffTurnComponent__GetCurrentWarBoardNotAttackedBuff(
                                                            this,
                                                            (const MethodInfo *)isPlaySe);
  if ( !WarBoardServantPieceBuffTurnComponent__IsEqualBuffData(
          (WarBoardServantPieceBuffTurnComponent_o *)CurrentWarBoardNotAttackedBuff,
          *p_buffData,
          (BattleBuffData_BuffData_o *)CurrentWarBoardNotAttackedBuff,
          v7) )
  {
    *p_buffData = (BattleBuffData_BuffData_o *)CurrentWarBoardNotAttackedBuff;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.buffData,
      CurrentWarBoardNotAttackedBuff,
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
  System_String_o *v15; // x21
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v18; // x8
  int32_t DispTurn; // [xsp+Ch] [xbp-24h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  v2 = this;
  if ( (byte_438927C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)sub_B775C4(&StringLiteral_15498/*"WARBOARD_BUFF_STATE_REST_TURN"*/);
    byte_438927C = 1;
  }
  entity = 0LL;
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)_4__this->fields.bgSprite;
  if ( !this )
    goto LABEL_38;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_38;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v4->fields.stateLabel;
  if ( !this )
    goto LABEL_38;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_38;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v5->fields.turnLabel;
  if ( !this )
    goto LABEL_38;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isActive, 0LL);
  if ( !v2->fields.isActive )
    return;
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_38;
  if ( !v6->fields.buffData )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BuffMaster___);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_38;
  buffData = v7->fields.buffData;
  if ( !buffData || !this )
    goto LABEL_38;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                            &entity,
                                                                            buffData->fields.buffId,
                                                                            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_38;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)entity;
  if ( !entity )
    goto LABEL_38;
  stateLabel = v9->fields.stateLabel;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)BuffEntity__GetBuffStateNoticeName(
                                                                            (BuffEntity_o *)entity,
                                                                            0LL);
  if ( !stateLabel )
    goto LABEL_38;
  UILabel__set_text(stateLabel, (System_String_o *)this, 0LL);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_38;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v11->fields.stateLabel;
  if ( !this )
    goto LABEL_38;
  UILabel__SetCondensedScale((UILabel_o *)this, v11->fields.stateLabelWidth, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_38;
  turnLabel = v12->fields.turnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_15498/*"WARBOARD_BUFF_STATE_REST_TURN"*/,
                                                                            0LL);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_38;
  v15 = (System_String_o *)this;
  this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v14->fields.buffData;
  if ( !this
    || (DispTurn = BattleBuffData_BuffData__get_DispTurn((BattleBuffData_BuffData_o *)this, 0LL),
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DispTurn, v16),
        this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)System_String__Format(v15, v17, 0LL),
        !turnLabel)
    || (UILabel__set_text(turnLabel, (System_String_o *)this, 0LL), (v18 = v2->fields.__4__this) == 0LL)
    || (this = (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v18->fields.turnLabel) == 0LL )
  {
LABEL_38:
    sub_B7769C(this, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v18->fields.turnLabelWidth, 0LL);
}