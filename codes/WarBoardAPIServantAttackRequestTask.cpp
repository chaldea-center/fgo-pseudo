void __fastcall WarBoardAPIServantAttackRequestTask___ctor(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardPieceData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  WarBoardAPIRequestTask___ctor_35375264((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
  this->fields.attackPieceData = attacker;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.attackPieceData, (int32_t)attacker, v9, v10);
  this->fields.targetPieceData = target;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetPieceData, (int32_t)target, v11, v12);
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
  void *Instance; // x0
  struct WarBoardPieceData_o *attackPieceData; // x1
  struct WarBoardPieceData_o *targetPieceData; // x2
  WarBoardData_o *v18; // x20
  int32_t nowSquareIndex_k__BackingField; // w26
  int32_t v20; // w27
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x24
  System_Func_object__bool__o *v24; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  WarBoardAPIServantAttackRequestTask___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x23
  System_Func_T__TResult__o *_9__3_1; // x25
  int32_t v31; // w22
  Il2CppObject *v32; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int64_array *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  System_Func_object__bool__o *v40; // x25
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v44; // x8
  System_Func_T__TResult__o *_9__3_3; // x25
  int32_t v46; // w22
  Il2CppObject *v47; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Int64_array *v52; // x24
  Il2CppObject *Request_object; // x25
  int32_t v54; // w2
  int32_t v55; // w3

  if ( (byte_49FA311 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_long___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_1B640C8(&System_Func_WarBoardPieceData__long__TypeInfo, v5);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_1B640C8(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__, v10);
    sub_1B640C8(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__, v11);
    sub_1B640C8(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v12);
    sub_1B640C8(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__, v13);
    sub_1B640C8(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__, v14);
    byte_49FA311 = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  attackPieceData = this->fields.attackPieceData;
  if ( !attackPieceData )
    goto LABEL_24;
  targetPieceData = this->fields.targetPieceData;
  if ( !targetPieceData )
    goto LABEL_24;
  v18 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  if ( !v18 )
    goto LABEL_24;
  nowSquareIndex_k__BackingField = attackPieceData->fields._nowSquareIndex_k__BackingField;
  v20 = targetPieceData->fields._nowSquareIndex_k__BackingField;
  Instance = WarBoardData__CreateBattleParticipantInfo(
               *((WarBoardData_o **)Instance + 55),
               attackPieceData,
               targetPieceData,
               0LL);
  if ( !Instance )
    goto LABEL_24;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)Instance + 2);
  v24 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v21, v22);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v28 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  v29 = v25;
  if ( !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v28 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  _9__3_1 = (System_Func_T__TResult__o *)v28->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    v31 = nowSquareIndex_k__BackingField;
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_1 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_WarBoardPieceData__long__TypeInfo, v26, v27);
    System_Func_object__long____ctor(
      _9__3_1,
      v32,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      0LL);
    static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_1, (int32_t)_9__3_1, v34, v35);
    nowSquareIndex_k__BackingField = v31;
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v29,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_2E690B8 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v37 = System_Linq_Enumerable__ToArray_long_(
          v36,
          (const MethodInfo_2E7133C *)Method_System_Linq_Enumerable_ToArray_long___);
  v40 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v38, v39);
  System_Func_object__bool____ctor(
    v40,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    0LL);
  v43 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)v40,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v44 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v44 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  _9__3_3 = (System_Func_T__TResult__o *)v44->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    v46 = nowSquareIndex_k__BackingField;
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v44->static_fields->__9;
    _9__3_3 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_WarBoardPieceData__long__TypeInfo, v41, v42);
    System_Func_object__long____ctor(
      _9__3_3,
      v47,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      0LL);
    v48 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v48->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v48->__9__3_3, (int32_t)_9__3_3, v49, v50);
    nowSquareIndex_k__BackingField = v46;
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v43,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_2E690B8 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v52 = System_Linq_Enumerable__ToArray_long_(
          v51,
          (const MethodInfo_2E7133C *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  Instance = (void *)WarBoardData__get_id(v18, 0LL);
  if ( !Request_object )
LABEL_24:
    sub_1B64324(Instance);
  WarBoardBattleSetupRequest__beginRequest(
    (WarBoardBattleSetupRequest_o *)Request_object,
    (int32_t)Instance,
    v37,
    v52,
    nowSquareIndex_k__BackingField,
    v20,
    v18,
    0LL);
  this->fields.request = (struct RequestBase_o *)Request_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)Request_object, v54, v55);
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0LL )
    sub_1B64324(this);
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0LL )
    sub_1B64324(this);
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA312 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1);
    byte_49FA312 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields->__9 = (struct WarBoardAPIServantAttackRequestTask___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}


int64_t __fastcall WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}