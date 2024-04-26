void __fastcall WarBoardAPIServantAttackRequestTask___ctor(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardPieceData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  WarBoardAPIRequestTask___ctor_21188152(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.attackPieceData,
    (System_Int32_array **)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetPieceData,
    (System_Int32_array **)target,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall WarBoardAPIServantAttackRequestTask__SetRequest(
        WarBoardAPIServantAttackRequestTask_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  struct WarBoardPieceData_o *attackPieceData; // x1
  struct WarBoardPieceData_o *targetPieceData; // x2
  WarBoardData_o *v6; // x20
  int32_t nowSquareIndex_k__BackingField; // w26
  int32_t v8; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x23
  WarBoardAPIServantAttackRequestTask___c_c *v12; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_1; // x25
  int32_t v15; // w27
  Il2CppObject *v16; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int64_array *v25; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v28; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v29; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_3; // x25
  int32_t v31; // w21
  Il2CppObject *v32; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Int64_array *v41; // x24
  WarBoardBattleSetupRequest_o *Request_WarBoardWallAttackRequest; // x25
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int32_t aftSquareIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_434FA18 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B70694(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B70694(&Method_System_Func_WarBoardPieceData__long___ctor__);
    sub_B70694(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B70694(&System_Func_WarBoardPieceData__long__TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__);
    sub_B70694(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__);
    sub_B70694(&WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    sub_B70694(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__);
    sub_B70694(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__);
    byte_434FA18 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  attackPieceData = this->fields.attackPieceData;
  if ( !attackPieceData )
    goto LABEL_31;
  targetPieceData = this->fields.targetPieceData;
  if ( !targetPieceData )
    goto LABEL_31;
  v6 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( !v6 )
    goto LABEL_31;
  nowSquareIndex_k__BackingField = attackPieceData->fields._nowSquareIndex_k__BackingField;
  v8 = targetPieceData->fields._nowSquareIndex_k__BackingField;
  Instance = WarBoardData__CreateBattleParticipantInfo(
               *((WarBoardData_o **)Instance + 54),
               attackPieceData,
               targetPieceData,
               0LL);
  if ( !Instance )
    goto LABEL_31;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)Instance + 2);
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    (const MethodInfo_29AC578 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v11 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v9,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  aftSquareIndex = v8;
  v12 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v12 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v15 = nowSquareIndex_k__BackingField;
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v15 = nowSquareIndex_k__BackingField;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B70764(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_1,
      v16,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      (const MethodInfo_29AD8E4 *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v17 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v17->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v17->__9__3_1,
      (System_Int32_array **)_9__3_1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    nowSquareIndex_k__BackingField = v15;
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_1CC3F6C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v25 = System_Linq_Enumerable__ToArray_long_(
          v24,
          (const MethodInfo_1CC8708 *)Method_System_Linq_Enumerable_ToArray_long___);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    (const MethodInfo_29AC578 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v9,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v28 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v28 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  v29 = v28->static_fields;
  _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v29->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v31 = nowSquareIndex_k__BackingField;
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v29 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v31 = nowSquareIndex_k__BackingField;
    }
    v32 = (Il2CppObject *)v29->__9;
    _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B70764(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_3,
      v32,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      (const MethodInfo_29AD8E4 *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v33 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v33->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_B70630(
      (BattleServantConfConponent_o *)&v33->__9__3_3,
      (System_Int32_array **)_9__3_3,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    nowSquareIndex_k__BackingField = v31;
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v27,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_1CC3F6C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v41 = System_Linq_Enumerable__ToArray_long_(
          v40,
          (const MethodInfo_1CC8708 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardBattleSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        0LL,
                                                                        (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  Instance = (void *)WarBoardData__get_id(v6, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_31:
    sub_B7076C(Instance, attackPieceData);
  WarBoardBattleSetupRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    (int32_t)Instance,
    v25,
    v41,
    nowSquareIndex_k__BackingField,
    aftSquareIndex,
    v6,
    0LL);
  this->fields.request = (struct RequestBase_o *)Request_WarBoardWallAttackRequest;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)Request_WarBoardWallAttackRequest,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0LL )
    sub_B7076C(this, x);
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0LL )
    sub_B7076C(this, x);
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F935 & 1) == 0 )
  {
    sub_B70694(&WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    byte_434F935 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardAPIServantAttackRequestTask___c___ctor(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_1(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}


int64_t __fastcall WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}