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

  WarBoardAPIRequestTask___ctor_21112220(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.attackPieceData,
    (System_Int32_array **)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_B0D840(
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
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x23
  WarBoardAPIServantAttackRequestTask___c_c *v30; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_1; // x25
  int32_t v33; // w27
  Il2CppObject *v34; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Int64_array *v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v46; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v50; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v51; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_3; // x25
  int32_t v53; // w21
  Il2CppObject *v54; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Int64_array *v63; // x24
  WarBoardBattleSetupRequest_o *Request_WarBoardWallAttackRequest; // x25
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int32_t aftSquareIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_4212B41 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_long___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__long___ctor__, v6);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_B0D8A4(&System_Func_WarBoardPieceData__long__TypeInfo, v8);
    sub_B0D8A4(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B0D8A4(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__, v12);
    sub_B0D8A4(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__, v13);
    sub_B0D8A4(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v14);
    sub_B0D8A4(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__, v15);
    sub_B0D8A4(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__, v16);
    byte_4212B41 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)Instance + 2);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v23,
                                                                             v24);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v25,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  aftSquareIndex = v22;
  v30 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v30 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v33 = nowSquareIndex_k__BackingField;
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v33 = nowSquareIndex_k__BackingField;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B0D974(
                                                                              System_Func_WarBoardPieceData__long__TypeInfo,
                                                                              v27,
                                                                              v28);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_1,
      v34,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      (const MethodInfo_2619D24 *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v35 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v35->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v35->__9__3_1,
      (System_Int32_array **)_9__3_1,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    nowSquareIndex_k__BackingField = v33;
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v29,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_1B51D60 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v43 = System_Linq_Enumerable__ToArray_long_(
          v42,
          (const MethodInfo_1B56208 *)Method_System_Linq_Enumerable_ToArray_long___);
  v46 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v44,
                                                                             v45);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v46,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v49 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v25,
          (System_Func_TSource__bool__o *)v46,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v50 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v50 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  v51 = v50->static_fields;
  _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v51->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v53 = nowSquareIndex_k__BackingField;
      if ( !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50);
        v51 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v53 = nowSquareIndex_k__BackingField;
    }
    v54 = (Il2CppObject *)v51->__9;
    _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B0D974(
                                                                              System_Func_WarBoardPieceData__long__TypeInfo,
                                                                              v47,
                                                                              v48);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_3,
      v54,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      (const MethodInfo_2619D24 *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v55 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v55->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v55->__9__3_3,
      (System_Int32_array **)_9__3_3,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    nowSquareIndex_k__BackingField = v53;
  }
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v49,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_1B51D60 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v63 = System_Linq_Enumerable__ToArray_long_(
          v62,
          (const MethodInfo_1B56208 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardBattleSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        0LL,
                                                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  Instance = (void *)WarBoardData__get_id(v20, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_31:
    sub_B0D97C(Instance);
  WarBoardBattleSetupRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    (int32_t)Instance,
    v43,
    v63,
    nowSquareIndex_k__BackingField,
    aftSquareIndex,
    v20,
    0LL);
  this->fields.request = (struct RequestBase_o *)Request_WarBoardWallAttackRequest;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)Request_WarBoardWallAttackRequest,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0LL )
    sub_B0D97C(this);
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0LL )
    sub_B0D97C(this);
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x0

  if ( (byte_4212691 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1);
    byte_4212691 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAPIServantAttackRequestTask___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}


int64_t __fastcall WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}