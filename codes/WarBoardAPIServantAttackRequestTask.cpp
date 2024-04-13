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

  WarBoardAPIRequestTask___ctor_21403204(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.attackPieceData,
    (System_Int32_array **)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  void *Instance; // x0
  struct WarBoardPieceData_o *attackPieceData; // x1
  struct WarBoardPieceData_o *targetPieceData; // x2
  WarBoardData_o *v50; // x20
  int32_t nowSquareIndex_k__BackingField; // w26
  int32_t v52; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v54; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x23
  WarBoardAPIServantAttackRequestTask___c_c *v56; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_1; // x25
  int32_t v59; // w27
  Il2CppObject *v60; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Int64_array *v69; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v70; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v72; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v73; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_3; // x25
  int32_t v75; // w21
  Il2CppObject *v76; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  System_Int64_array *v85; // x24
  WarBoardBattleSetupRequest_o *Request_WarBoardWallAttackRequest; // x25
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  int32_t aftSquareIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_42E6911 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_long___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__long___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Func_WarBoardPieceData__long__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__, v32, v33, v34);
    sub_B5D5C4(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__, v35, v36, v37);
    sub_B5D5C4(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__, v41, v42, v43);
    sub_B5D5C4(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__, v44, v45, v46);
    byte_42E6911 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  attackPieceData = this->fields.attackPieceData;
  if ( !attackPieceData )
    goto LABEL_31;
  targetPieceData = this->fields.targetPieceData;
  if ( !targetPieceData )
    goto LABEL_31;
  v50 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( !v50 )
    goto LABEL_31;
  nowSquareIndex_k__BackingField = attackPieceData->fields._nowSquareIndex_k__BackingField;
  v52 = targetPieceData->fields._nowSquareIndex_k__BackingField;
  Instance = WarBoardData__CreateBattleParticipantInfo(
               *((WarBoardData_o **)Instance + 54),
               attackPieceData,
               targetPieceData,
               0LL);
  if ( !Instance )
    goto LABEL_31;
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)Instance + 2);
  v54 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v54,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v55 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v53,
          (System_Func_TSource__bool__o *)v54,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  aftSquareIndex = v52;
  v56 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v56 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  static_fields = v56->static_fields;
  _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v59 = nowSquareIndex_k__BackingField;
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v59 = nowSquareIndex_k__BackingField;
    }
    v60 = (Il2CppObject *)static_fields->__9;
    _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_1,
      v60,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      (const MethodInfo_2C3003C *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v61 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v61->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v61->__9__3_1,
      (System_Int32_array **)_9__3_1,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    nowSquareIndex_k__BackingField = v59;
  }
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v55,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_1CB32A0 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v69 = System_Linq_Enumerable__ToArray_long_(
          v68,
          (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
  v70 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v70,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v71 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v53,
          (System_Func_TSource__bool__o *)v70,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v72 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v72 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  v73 = v72->static_fields;
  _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v73->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v75 = nowSquareIndex_k__BackingField;
      if ( !v72->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v72);
        v73 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v75 = nowSquareIndex_k__BackingField;
    }
    v76 = (Il2CppObject *)v73->__9;
    _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_WarBoardPieceData__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_3,
      v76,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      (const MethodInfo_2C3003C *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v77 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v77->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v77->__9__3_3,
      (System_Int32_array **)_9__3_3,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    nowSquareIndex_k__BackingField = v75;
  }
  v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v71,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_1CB32A0 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v85 = System_Linq_Enumerable__ToArray_long_(
          v84,
          (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardBattleSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        0LL,
                                                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  Instance = (void *)WarBoardData__get_id(v50, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_31:
    sub_B5D69C(Instance, attackPieceData);
  WarBoardBattleSetupRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    (int32_t)Instance,
    v69,
    v85,
    nowSquareIndex_k__BackingField,
    aftSquareIndex,
    v50,
    0LL);
  this->fields.request = (struct RequestBase_o *)Request_WarBoardWallAttackRequest;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)Request_WarBoardWallAttackRequest,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0LL )
    sub_B5D69C(this, x);
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0LL )
    sub_B5D69C(this, x);
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E706D & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1, v2, v3);
    byte_42E706D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}


int64_t __fastcall WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}