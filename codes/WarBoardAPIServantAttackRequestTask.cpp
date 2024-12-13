void __fastcall WarBoardAPIServantAttackRequestTask___ctor(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardPieceData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  WarBoardAPIRequestTask___ctor_36429844(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.attackPieceData,
    (int64_t)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.targetPieceData,
    (int64_t)target,
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
  void *Instance; // x0
  struct WarBoardPieceData_o *attackPieceData; // x1
  struct WarBoardPieceData_o *targetPieceData; // x2
  WarBoardData_o *v18; // x20
  int32_t nowSquareIndex_k__BackingField; // w26
  int32_t v20; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x24
  System_Func_object__bool__o *v22; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  WarBoardAPIServantAttackRequestTask___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x23
  System_Func_T__TResult__o *_9__3_1; // x25
  int32_t v27; // w22
  Il2CppObject *v28; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int64_array *v37; // x23
  System_Func_object__bool__o *v38; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v40; // x8
  System_Func_T__TResult__o *_9__3_3; // x25
  int32_t v42; // w22
  Il2CppObject *v43; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Int64_array *v52; // x24
  Il2CppObject *Request_object; // x25
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B34FF0 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___, method);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_long___, v3);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_1BD3458(&System_Func_WarBoardPieceData__long__TypeInfo, v5);
    sub_1BD3458(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_1BD3458(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___, v7);
    sub_1BD3458(&NetworkManager_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1BD3458(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__, v10);
    sub_1BD3458(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__, v11);
    sub_1BD3458(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v12);
    sub_1BD3458(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__, v13);
    sub_1BD3458(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__, v14);
    byte_4B34FF0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)Instance + 2);
  v22 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    0LL);
  v23 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v24 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  v25 = v23;
  if ( !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v24 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  _9__3_1 = (System_Func_T__TResult__o *)v24->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    v27 = nowSquareIndex_k__BackingField;
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v24->static_fields->__9;
    _9__3_1 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_1,
      v28,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      0LL);
    static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__3_1, (int64_t)_9__3_1, v30, v31, v32, v33, v34, v35);
    nowSquareIndex_k__BackingField = v27;
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v25,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_2F62B28 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v37 = System_Linq_Enumerable__ToArray_long_(
          v36,
          (const MethodInfo_2F6AD2C *)Method_System_Linq_Enumerable_ToArray_long___);
  v38 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    0LL);
  v39 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v40 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v40 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  _9__3_3 = (System_Func_T__TResult__o *)v40->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    v42 = nowSquareIndex_k__BackingField;
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__3_3 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_3,
      v43,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      0LL);
    v44 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v44->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v44->__9__3_3, (int64_t)_9__3_3, v45, v46, v47, v48, v49, v50);
    nowSquareIndex_k__BackingField = v42;
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v39,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_2F62B28 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v52 = System_Linq_Enumerable__ToArray_long_(
          v51,
          (const MethodInfo_2F6AD2C *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2FB5954 *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  Instance = (void *)WarBoardData__get_id(v18, 0LL);
  if ( !Request_object )
LABEL_24:
    sub_1BD36B4(Instance, attackPieceData);
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
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.request,
    (int64_t)Request_object,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0LL )
    sub_1BD36B4(this, x);
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0LL )
    sub_1BD36B4(this, x);
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B34FF1 & 1) == 0 )
  {
    sub_1BD3458(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1);
    byte_4B34FF1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields->__9 = (struct WarBoardAPIServantAttackRequestTask___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}


int64_t __fastcall WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}