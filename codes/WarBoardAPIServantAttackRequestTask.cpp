void WarBoardAPIServantAttackRequestTask___ctor(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardPieceData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  WarBoardAPIRequestTask___ctor_38043512(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.attackPieceData, (int32_t)attacker, v9, v10);
  this->fields.targetPieceData = target;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetPieceData, (int32_t)target, v11, v12);
}


void WarBoardAPIServantAttackRequestTask__SetRequest(
        WarBoardAPIServantAttackRequestTask_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  struct WarBoardPieceData_o *attackPieceData; // x1
  struct WarBoardPieceData_o *targetPieceData; // x2
  WarBoardData_o *v6; // x20
  int32_t nowSquareIndex_k__BackingField; // w26
  int32_t v8; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x24
  System_Func_object__bool__o *v10; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  WarBoardAPIServantAttackRequestTask___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x23
  System_Func_object__long__o *_9__3_1; // x25
  int32_t v15; // w22
  Il2CppObject *v16; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Int64_array *v21; // x23
  System_Func_object__bool__o *v22; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v24; // x8
  System_Func_object__long__o *_9__3_3; // x25
  int32_t v26; // w22
  Il2CppObject *v27; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int64_array *v32; // x24
  Il2CppObject *Request_object; // x25
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4C24F5F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C2D490(&System_Func_WarBoardPieceData__long__TypeInfo);
    sub_1C2D490(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__);
    sub_1C2D490(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__);
    sub_1C2D490(&WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    sub_1C2D490(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__);
    sub_1C2D490(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__);
    byte_4C24F5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v10 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          v9,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v12 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  v13 = v11;
  if ( !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v12 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__long__o *)v12->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    v15 = nowSquareIndex_k__BackingField;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v12->static_fields->__9;
    _9__3_1 = (System_Func_object__long__o *)sub_1C2D6DC(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_1,
      v16,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      0);
    static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_1, (int32_t)_9__3_1, v18, v19);
    nowSquareIndex_k__BackingField = v15;
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_3104D28 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v21 = System_Linq_Enumerable__ToArray_long_(
          v20,
          (const MethodInfo_310DF64 *)Method_System_Linq_Enumerable_ToArray_long___);
  v22 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    0);
  v23 = System_Linq_Enumerable__Where_object_(
          v9,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v24 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v24 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__long__o *)v24->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    v26 = nowSquareIndex_k__BackingField;
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__3_3 = (System_Func_object__long__o *)sub_1C2D6DC(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_3,
      v27,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      0);
    v28 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v28->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_1C2D434((CGThumbnailListItem_o *)&v28->__9__3_3, (int32_t)_9__3_3, v29, v30);
    nowSquareIndex_k__BackingField = v26;
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v23,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_3104D28 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v32 = System_Linq_Enumerable__ToArray_long_(
          v31,
          (const MethodInfo_310DF64 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  Instance = (void *)WarBoardData__get_id(v6, 0);
  if ( !Request_object )
LABEL_24:
    sub_1C2D6EC(Instance, attackPieceData);
  WarBoardBattleSetupRequest__beginRequest(
    (WarBoardBattleSetupRequest_o *)Request_object,
    (int32_t)Instance,
    v21,
    v32,
    nowSquareIndex_k__BackingField,
    v8,
    v6,
    0);
  this->fields.request = (struct RequestBase_o *)Request_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.request, (int32_t)Request_object, v34, v35);
}


bool WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C24F60 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    byte_4C24F60 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields->__9 = (struct WarBoardAPIServantAttackRequestTask___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C2D6EC(this, 0);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0);
}


int64_t WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0);
}