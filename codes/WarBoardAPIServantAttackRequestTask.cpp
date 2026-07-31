void WarBoardAPIServantAttackRequestTask___ctor(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardPieceData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  WarBoardAPIRequestTask___ctor_45133660(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.attackPieceData,
    (int32_t)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetPieceData,
    (int32_t)target,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void WarBoardAPIServantAttackRequestTask__SetRequest(
        WarBoardAPIServantAttackRequestTask_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  struct WarBoardPieceData_o *attackPieceData; // x1
  struct WarBoardPieceData_o *targetPieceData; // x2
  WarBoardData_o *v6; // x22
  int32_t nowSquareIndex_k__BackingField; // w26
  int32_t v8; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x24
  System_Func_object__bool__o *v10; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  WarBoardAPIServantAttackRequestTask___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x23
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x9
  System_Func_object__long__o *_9__3_1; // x25
  int32_t v18; // w29
  Il2CppObject *v19; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Int64_array *v28; // x23
  System_Func_object__bool__o *v29; // x25
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v33; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v34; // x9
  System_Func_object__long__o *_9__3_3; // x25
  int32_t v36; // w22
  Il2CppObject *v37; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  System_Int64_array *v48; // x24
  Il2CppObject *Request_object; // x25
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  WarBoardData_o *v56; // [xsp+8h] [xbp-68h]

  if ( (byte_593622A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__long__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__);
    sub_21FFC50(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__);
    sub_21FFC50(&WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    sub_21FFC50(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__);
    sub_21FFC50(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__);
    byte_593622A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  attackPieceData = this->fields.attackPieceData;
  if ( !attackPieceData )
    goto LABEL_24;
  targetPieceData = this->fields.targetPieceData;
  if ( !targetPieceData )
    goto LABEL_24;
  v6 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  if ( !v6 )
    goto LABEL_24;
  nowSquareIndex_k__BackingField = attackPieceData->fields._nowSquareIndex_k__BackingField;
  v8 = targetPieceData->fields._nowSquareIndex_k__BackingField;
  Instance = WarBoardData__CreateBattleParticipantInfo(
               *((WarBoardData_o **)Instance + 55),
               attackPieceData,
               targetPieceData,
               0);
  if ( !Instance )
    goto LABEL_24;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)Instance + 2);
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          v9,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v14 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  v15 = v11;
  v56 = v6;
  if ( !*(&WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo, v12, v13);
    v14 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__3_1 = (System_Func_object__long__o *)static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    v18 = nowSquareIndex_k__BackingField;
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v12, v13);
      static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__3_1 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_1,
      v19,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      0);
    v20 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v20->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__3_1, (int32_t)_9__3_1, v21, v22, v23, v24, v25, v26);
    nowSquareIndex_k__BackingField = v18;
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v15,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v28 = System_Linq_Enumerable__ToArray_long_(
          v27,
          (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
  v29 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    0);
  v32 = System_Linq_Enumerable__Where_object_(
          v9,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v33 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( !*(&WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo, v30, v31);
    v33 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  v34 = v33->static_fields;
  _9__3_3 = (System_Func_object__long__o *)v34->__9__3_3;
  if ( !_9__3_3 )
  {
    v36 = nowSquareIndex_k__BackingField;
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v30, v31);
      v34 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v34->__9;
    _9__3_3 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_3,
      v37,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      0);
    v38 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v38->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->__9__3_3, (int32_t)_9__3_3, v39, v40, v41, v42, v43, v44);
    nowSquareIndex_k__BackingField = v36;
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v32,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v48 = System_Linq_Enumerable__ToArray_long_(
          v45,
          (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v46, v47);
  Request_object = NetworkManager__getRequest_object_(
                     0,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  Instance = (void *)WarBoardData__get_id(v56, 0);
  if ( !Request_object )
LABEL_24:
    sub_21FFECC(Instance, attackPieceData);
  WarBoardBattleSetupRequest__beginRequest(
    (WarBoardBattleSetupRequest_o *)Request_object,
    (int32_t)Instance,
    v28,
    v48,
    nowSquareIndex_k__BackingField,
    v8,
    v56,
    0);
  this->fields.request = (struct RequestBase_o *)Request_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.request,
    (int32_t)Request_object,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
}


bool WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0 )
    sub_21FFECC(this, x);
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0 )
    sub_21FFECC(this, x);
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593622B & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    byte_593622B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields->__9 = (struct WarBoardAPIServantAttackRequestTask___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardAPIServantAttackRequestTask___c___ctor(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_1(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0);
}


int64_t WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0);
}