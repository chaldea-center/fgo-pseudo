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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *stateLabel; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *turnLabel; // x0
  UnityEngine_GameObject_o *v8; // x0

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (stateLabel = (UnityEngine_Component_o *)this->fields.stateLabel) == 0LL)
    || (v6 = UnityEngine_Component__get_gameObject(stateLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v6, 0, 0LL),
        (turnLabel = (UnityEngine_Component_o *)this->fields.turnLabel) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(turnLabel, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(
        WarBoardServantPieceBuffTurnComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *barrierEffectBasePrefab; // x21
  bool v7; // w0
  UnityEngine_GameObject_o *v8; // x21
  struct UnityEngine_GameObject_o *v9; // x20

  if ( (byte_40FBA88 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, parent);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FBA88 = 1;
  }
  barrierEffectBasePrefab = (UnityEngine_Object_o *)this->fields.barrierEffectBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(barrierEffectBasePrefab, 0LL, 0LL);
  v8 = 0LL;
  if ( !v7 )
  {
    v9 = this->fields.barrierEffectBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)v9,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_27425996(v8, parent, 0LL);
  }
  return v8;
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
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CommonEffectActionComponent_o *Component_srcLineSprite; // x0
  CommonEffectActionComponent_o *v17; // x23
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UnityEngine_Animation_o *v20; // x0

  if ( (byte_40FBA8B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, startAction);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__, v10);
    sub_B16FFC(&StringLiteral_2147, v11);
    sub_B16FFC(&StringLiteral_16380, v12);
    byte_40FBA8B = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !v14 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    Component_srcLineSprite = (CommonEffectActionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 gameObject,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_16;
    v17 = Component_srcLineSprite;
    CommonEffectActionComponent__SetEventAction(Component_srcLineSprite, 4, startAction, 0LL);
    CommonEffectActionComponent__SetEventAction(v17, 5, endAction, 0LL);
    if ( isPlaySe )
    {
      v18 = Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__ + 75) & 2) != 0 )
        v18 = (_QWORD *)sub_B17004(Method_WarBoardServantPieceBuffTurnComponent_EndBarrierAnim__);
      v19 = (System_Reflection_MethodBase_o *)sub_B16FE0(v18, v18[3]);
      OverwriteAssetSoundName__PlaySe(v19, (System_String_o *)StringLiteral_16380, 0LL);
    }
    v20 = this->fields.barrierAnimation;
    if ( !v20 )
LABEL_16:
      sub_B170D4();
    UnityEngine_Animation__Play_49744236(v20, (System_String_o *)StringLiteral_2147, 0LL);
  }
}


BattleBuffData_BuffData_o *__fastcall WarBoardServantPieceBuffTurnComponent__GetCurrentWarBoardNotAttackedBuff(
        WarBoardServantPieceBuffTurnComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleBuffData_BuffData_o *result; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentWarBoardNotAttackedBuff; // x19
  bool v6; // w8

  if ( (byte_40FBA87 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v3);
    byte_40FBA87 = 1;
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
             (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
      result = 0LL;
      if ( v6 )
      {
        if ( !CurrentWarBoardNotAttackedBuff )
          sub_B170D4();
        if ( !CurrentWarBoardNotAttackedBuff->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  UnityEngine_Component_o **p_barrierAnimation; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Animation_o *barrierAnimation; // t1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FBA8C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBA8C = 1;
  }
  barrierAnimation = this->fields.barrierAnimation;
  p_barrierAnimation = (UnityEngine_Component_o **)&this->fields.barrierAnimation;
  v4 = (UnityEngine_Object_o *)barrierAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    if ( !*p_barrierAnimation
      || (gameObject = UnityEngine_Component__get_gameObject(*p_barrierAnimation, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), !*p_barrierAnimation) )
    {
      sub_B170D4();
    }
    v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_barrierAnimation, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v7, 0LL);
    *p_barrierAnimation = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_barrierAnimation, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPieceBuffTurnComponent__SetDispActive(
        WarBoardServantPieceBuffTurnComponent_o *this,
        bool isActive,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x21
  UnityEngine_Component_o *bgSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeSelf; // w0
  const MethodInfo *v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int v30; // w8
  bool v31; // w23
  const MethodInfo *v32; // x3
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x4

  if ( (byte_40FBA86 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isActive);
    sub_B16FFC(&Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__, v8);
    sub_B16FFC(&WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__, v10);
    byte_40FBA86 = 1;
  }
  v11 = sub_B170CC(WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_TypeInfo, isActive, isPlaySe, method, v4);
  WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0___ctor(
    (WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v11 + 24) = isActive;
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_WarBoardServantPieceBuffTurnComponent___c__DisplayClass12_0__SetDispActive_b__0__,
    0LL);
  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(bgSprite, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  v30 = *(unsigned __int8 *)(v11 + 24);
  v31 = activeSelf;
  if ( *(_BYTE *)(v11 + 24) && !activeSelf )
  {
    WarBoardServantPieceBuffTurnComponent__SetupBarrierAnim(this, v26);
    WarBoardServantPieceBuffTurnComponent__StartBarrierAnim(this, v22, isPlaySe, v32);
    v30 = *(unsigned __int8 *)(v11 + 24);
  }
  if ( v30 == 0 || !v31 )
  {
    if ( v31 && !v30 )
      goto LABEL_16;
    return;
  }
  if ( !v22 )
LABEL_17:
    sub_B170D4();
  System_Action__Invoke(v22, 0LL);
  if ( !*(_BYTE *)(v11 + 24) )
  {
LABEL_16:
    v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
    System_Action___ctor(
      v33,
      (Il2CppObject *)this,
      Method_WarBoardServantPieceBuffTurnComponent_ReleaseBarrierAnim__,
      0LL);
    WarBoardServantPieceBuffTurnComponent__EndBarrierAnim(this, v22, v33, isPlaySe, v34);
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
  sub_B16F98(
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
  __int64 v3; // x1
  WarBoardPieceData_o *pieceData; // x0
  BattleServantConfConponent_o *p_barrierAnimation; // x19
  UnityEngine_Object_o *barrierAnimation; // x21
  WarBoardPieceData_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *BarrierEffectObject; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FBA89 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FBA89 = 1;
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
      BarrierEffectObject = WarBoardServantPieceBuffTurnComponent__CreateBarrierEffectObject(this, gameObject, v9);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)BarrierEffectObject, 0LL, 0LL) )
      {
        if ( BarrierEffectObject )
        {
          Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             BarrierEffectObject,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
          p_barrierAnimation->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
          sub_B16F98(p_barrierAnimation, Component_srcLineSprite, v12, v13, v14, v15, v16, v17);
          return;
        }
LABEL_17:
        sub_B170D4();
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
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  CommonEffectActionComponent_o *Component_srcLineSprite; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  UnityEngine_Animation_o *v19; // x0

  if ( (byte_40FBA8A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, endAction);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__, v8);
    sub_B16FFC(&StringLiteral_16379, v9);
    sub_B16FFC(&StringLiteral_2148, v10);
    byte_40FBA8A = 1;
  }
  barrierAnimation = (UnityEngine_Object_o *)this->fields.barrierAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(barrierAnimation, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !v12 )
      goto LABEL_18;
    gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v14 = (UnityEngine_Component_o *)this->fields.barrierAnimation;
    if ( !v14 )
      goto LABEL_18;
    v15 = UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !v15 )
      goto LABEL_18;
    Component_srcLineSprite = (CommonEffectActionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v15,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_18;
    CommonEffectActionComponent__SetEventAction(Component_srcLineSprite, 1, endAction, 0LL);
    if ( isPlaySe )
    {
      v17 = Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__;
      if ( (*((_BYTE *)Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__ + 75) & 2) != 0 )
        v17 = (_QWORD *)sub_B17004(Method_WarBoardServantPieceBuffTurnComponent_StartBarrierAnim__);
      v18 = (System_Reflection_MethodBase_o *)sub_B16FE0(v17, v17[3]);
      OverwriteAssetSoundName__PlaySe(v18, (System_String_o *)StringLiteral_16379, 0LL);
    }
    v19 = this->fields.barrierAnimation;
    if ( !v19 )
LABEL_18:
      sub_B170D4();
    UnityEngine_Animation__Play_49744236(v19, (System_String_o *)StringLiteral_2148, 0LL);
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
    sub_B16F98(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct WarBoardServantPieceBuffTurnComponent_o *_4__this; // x8
  UnityEngine_Component_o *bgSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v11; // x8
  UnityEngine_Component_o *stateLabel; // x0
  UnityEngine_GameObject_o *v13; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v14; // x8
  UnityEngine_Component_o *turnLabel; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v17; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v19; // x8
  struct BattleBuffData_BuffData_o *buffData; // x8
  struct WarBoardServantPieceBuffTurnComponent_o *v21; // x8
  UILabel_o *v22; // x20
  System_String_o *BuffStateNoticeName; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v24; // x8
  UILabel_o *v25; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v26; // x8
  UILabel_o *v27; // x20
  System_String_o *v28; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v29; // x8
  System_String_o *v30; // x21
  BattleBuffData_BuffData_o *v31; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  struct WarBoardServantPieceBuffTurnComponent_o *v34; // x8
  UILabel_o *v35; // x0
  int32_t DispTurn; // [xsp+Ch] [xbp-24h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F786D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_15178, v7);
    byte_40F786D = 1;
  }
  entity = 0LL;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  bgSprite = (UnityEngine_Component_o *)_4__this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject(bgSprite, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(gameObject, this->fields.isActive, 0LL);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_38;
  stateLabel = (UnityEngine_Component_o *)v11->fields.stateLabel;
  if ( !stateLabel )
    goto LABEL_38;
  v13 = UnityEngine_Component__get_gameObject(stateLabel, 0LL);
  if ( !v13 )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(v13, this->fields.isActive, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_38;
  turnLabel = (UnityEngine_Component_o *)v14->fields.turnLabel;
  if ( !turnLabel )
    goto LABEL_38;
  v16 = UnityEngine_Component__get_gameObject(turnLabel, 0LL);
  if ( !v16 )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(v16, this->fields.isActive, 0LL);
  if ( !this->fields.isActive )
    return;
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_38;
  if ( !v17->fields.buffData )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_38;
  buffData = v19->fields.buffData;
  if ( !buffData || !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          buffData->fields.buffId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return;
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_38;
  if ( !entity )
    goto LABEL_38;
  v22 = v21->fields.stateLabel;
  BuffStateNoticeName = BuffEntity__GetBuffStateNoticeName((BuffEntity_o *)entity, 0LL);
  if ( !v22 )
    goto LABEL_38;
  UILabel__set_text(v22, BuffStateNoticeName, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_38;
  v25 = v24->fields.stateLabel;
  if ( !v25 )
    goto LABEL_38;
  UILabel__SetCondensedScale(v25, v24->fields.stateLabelWidth, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_38;
  v27 = v26->fields.turnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15178, 0LL);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_38;
  v30 = v28;
  v31 = v29->fields.buffData;
  if ( !v31
    || (DispTurn = BattleBuffData_BuffData__get_DispTurn(v31, 0LL),
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DispTurn),
        v33 = System_String__Format(v30, v32, 0LL),
        !v27)
    || (UILabel__set_text(v27, v33, 0LL), (v34 = this->fields.__4__this) == 0LL)
    || (v35 = v34->fields.turnLabel) == 0LL )
  {
LABEL_38:
    sub_B170D4();
  }
  UILabel__SetCondensedScale(v35, v34->fields.turnLabelWidth, 0LL);
}