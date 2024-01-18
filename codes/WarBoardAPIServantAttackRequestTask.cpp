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

  WarBoardAPIRequestTask___ctor_22725128(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.attackPieceData,
    (System_Int32_array **)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *Instance; // x0
  struct WarBoardPieceData_o *attackPieceData; // x1
  struct WarBoardPieceData_o *targetPieceData; // x2
  WarBoardData_o *v20; // x20
  int32_t nowSquareIndex_k__BackingField; // w26
  int32_t v22; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x23
  WarBoardAPIServantAttackRequestTask___c_c *v26; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_1; // x25
  int32_t v29; // w27
  Il2CppObject *v30; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Int64_array *v39; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v42; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v43; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_3; // x25
  int32_t v45; // w21
  Il2CppObject *v46; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Int64_array *v55; // x24
  WarBoardBattleSetupRequest_o *Request_WarBoardWallAttackRequest; // x25
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t aftSquareIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_418679B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_long___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__long___ctor__, v6);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_B2C35C(&System_Func_WarBoardPieceData__long__TypeInfo, v8);
    sub_B2C35C(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B2C35C(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__, v12);
    sub_B2C35C(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__, v13);
    sub_B2C35C(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v14);
    sub_B2C35C(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__, v15);
    sub_B2C35C(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__, v16);
    byte_418679B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  attackPieceData = this->fields.attackPieceData;
  if ( !attackPieceData )
    goto LABEL_31;
  targetPieceData = this->fields.targetPieceData;
  if ( !targetPieceData )
    goto LABEL_31;
  v20 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( !v20 )
    goto LABEL_31;
  nowSquareIndex_k__BackingField = attackPieceData->fields._nowSquareIndex_k__BackingField;
  v22 = targetPieceData->fields._nowSquareIndex_k__BackingField;
  Instance = WarBoardData__CreateBattleParticipantInfo(
               *((WarBoardData_o **)Instance + 54),
               attackPieceData,
               targetPieceData,
               0LL);
  if ( !Instance )
    goto LABEL_31;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)Instance + 2);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v23,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  aftSquareIndex = v22;
  v26 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v26 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v29 = nowSquareIndex_k__BackingField;
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v29 = nowSquareIndex_k__BackingField;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B2C42C(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_1,
      v30,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      (const MethodInfo_2712F70 *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v31 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v31->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__3_1,
      (System_Int32_array **)_9__3_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    nowSquareIndex_k__BackingField = v29;
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v25,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_1A96A94 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v39 = System_Linq_Enumerable__ToArray_long_(
          v38,
          (const MethodInfo_1A9AF3C *)Method_System_Linq_Enumerable_ToArray_long___);
  v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v40,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v41 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v23,
          (System_Func_TSource__bool__o *)v40,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v42 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v42 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  v43 = v42->static_fields;
  _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v43->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v45 = nowSquareIndex_k__BackingField;
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v43 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v45 = nowSquareIndex_k__BackingField;
    }
    v46 = (Il2CppObject *)v43->__9;
    _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B2C42C(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_3,
      v46,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      (const MethodInfo_2712F70 *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v47 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v47->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v47->__9__3_3,
      (System_Int32_array **)_9__3_3,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    nowSquareIndex_k__BackingField = v45;
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v41,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_1A96A94 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v55 = System_Linq_Enumerable__ToArray_long_(
          v54,
          (const MethodInfo_1A9AF3C *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardBattleSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        0LL,
                                                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  Instance = (void *)WarBoardData__get_id(v20, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_31:
    sub_B2C434(Instance, attackPieceData);
  WarBoardBattleSetupRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    (int32_t)Instance,
    v39,
    v55,
    nowSquareIndex_k__BackingField,
    aftSquareIndex,
    v20,
    0LL);
  this->fields.request = (struct RequestBase_o *)Request_WarBoardWallAttackRequest;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)Request_WarBoardWallAttackRequest,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0LL )
    sub_B2C434(this, x);
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0LL )
    sub_B2C434(this, x);
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x0

  if ( (byte_418571A & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1);
    byte_418571A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAPIServantAttackRequestTask___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}


int64_t __fastcall WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}