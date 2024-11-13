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

  WarBoardAPIRequestTask___ctor_36369024(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.attackPieceData,
    (int64_t)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  void *Instance; // x0
  struct WarBoardPieceData_o *attackPieceData; // x1
  struct WarBoardPieceData_o *targetPieceData; // x2
  WarBoardData_o *v31; // x20
  int32_t nowSquareIndex_k__BackingField; // w26
  int32_t v33; // w27
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x24
  System_Func_object__bool__o *v37; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  WarBoardAPIServantAttackRequestTask___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x23
  System_Func_T__TResult__o *_9__3_1; // x25
  int32_t v45; // w22
  Il2CppObject *v46; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Int64_array *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Func_object__bool__o *v59; // x25
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v64; // x8
  System_Func_T__TResult__o *_9__3_3; // x25
  int32_t v66; // w22
  Il2CppObject *v67; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  __int64 v76; // x1
  System_Int64_array *v77; // x24
  Il2CppObject *Request_object; // x25
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7

  if ( (byte_4B1405A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_long___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6, v7);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__long__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__, v18, v19);
    sub_1BCA7E0(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__, v20, v21);
    sub_1BCA7E0(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__, v24, v25);
    sub_1BCA7E0(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__, v26, v27);
    byte_4B1405A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  attackPieceData = this->fields.attackPieceData;
  if ( !attackPieceData )
    goto LABEL_24;
  targetPieceData = this->fields.targetPieceData;
  if ( !targetPieceData )
    goto LABEL_24;
  v31 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  if ( !v31 )
    goto LABEL_24;
  nowSquareIndex_k__BackingField = attackPieceData->fields._nowSquareIndex_k__BackingField;
  v33 = targetPieceData->fields._nowSquareIndex_k__BackingField;
  Instance = WarBoardData__CreateBattleParticipantInfo(
               *((WarBoardData_o **)Instance + 55),
               attackPieceData,
               targetPieceData,
               0LL);
  if ( !Instance )
    goto LABEL_24;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)Instance + 2);
  v37 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_WarBoardPieceData__bool__TypeInfo,
                                         attackPieceData,
                                         v34,
                                         v35);
  System_Func_object__bool____ctor(
    v37,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    0LL);
  v38 = System_Linq_Enumerable__Where_object_(
          v36,
          (System_Func_TSource__bool__o *)v37,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v42 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  v43 = v38;
  if ( !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo, v39);
    v42 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  _9__3_1 = (System_Func_T__TResult__o *)v42->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    v45 = nowSquareIndex_k__BackingField;
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42, v39);
      v42 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v42->static_fields->__9;
    _9__3_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__long__TypeInfo, v39, v40, v41);
    System_Func_object__long____ctor(
      _9__3_1,
      v46,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      0LL);
    static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_1, (int64_t)_9__3_1, v48, v49, v50, v51, v52, v53);
    nowSquareIndex_k__BackingField = v45;
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v43,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v55 = System_Linq_Enumerable__ToArray_long_(
          v54,
          (const MethodInfo_2F4B980 *)Method_System_Linq_Enumerable_ToArray_long___);
  v59 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v56, v57, v58);
  System_Func_object__bool____ctor(
    v59,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    0LL);
  v63 = System_Linq_Enumerable__Where_object_(
          v36,
          (System_Func_TSource__bool__o *)v59,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v64 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo, v60);
    v64 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  _9__3_3 = (System_Func_T__TResult__o *)v64->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    v66 = nowSquareIndex_k__BackingField;
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64, v60);
      v64 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v64->static_fields->__9;
    _9__3_3 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__long__TypeInfo, v60, v61, v62);
    System_Func_object__long____ctor(
      _9__3_3,
      v67,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      0LL);
    v68 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v68->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v68->__9__3_3, (int64_t)_9__3_3, v69, v70, v71, v72, v73, v74);
    nowSquareIndex_k__BackingField = v66;
  }
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v63,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v77 = System_Linq_Enumerable__ToArray_long_(
          v75,
          (const MethodInfo_2F4B980 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v76);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  Instance = (void *)WarBoardData__get_id(v31, 0LL);
  if ( !Request_object )
LABEL_24:
    sub_1BCAA3C(Instance, attackPieceData);
  WarBoardBattleSetupRequest__beginRequest(
    (WarBoardBattleSetupRequest_o *)Request_object,
    (int32_t)Instance,
    v55,
    v77,
    nowSquareIndex_k__BackingField,
    v33,
    v31,
    0LL);
  this->fields.request = (struct RequestBase_o *)Request_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.request,
    (int64_t)Request_object,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0LL )
    sub_1BCAA3C(this, x);
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0LL )
    sub_1BCAA3C(this, x);
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1405B & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1, v2);
    byte_4B1405B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields->__9 = (struct WarBoardAPIServantAttackRequestTask___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}


int64_t __fastcall WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}