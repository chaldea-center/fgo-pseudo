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

  WarBoardAPIRequestTask___ctor_22956192(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.attackPieceData,
    (System_Int32_array **)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_B16F98(
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
  WebViewManager_o *Instance; // x0
  struct WarBoardPieceData_o *attackPieceData; // x1
  struct WarBoardPieceData_o *targetPieceData; // x2
  WarBoardData_o *monitor; // x20
  int32_t nowSquareIndex_k__BackingField; // w26
  int32_t v22; // w25
  WarBoardData_BattleParticipantInfo_o *BattleParticipantInfo; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x23
  WarBoardAPIServantAttackRequestTask___c_c *v35; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_1; // x25
  int32_t v38; // w27
  Il2CppObject *v39; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Int64_array *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x25
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x24
  WarBoardAPIServantAttackRequestTask___c_c *v59; // x8
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v60; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_3; // x25
  int32_t v62; // w21
  Il2CppObject *v63; // x26
  struct WarBoardAPIServantAttackRequestTask___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Int64_array *v72; // x24
  WarBoardBattleSetupRequest_o *Request_WarBoardWallAttackRequest; // x25
  int32_t id; // w0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  int32_t aftSquareIndex; // [xsp+Ch] [xbp-54h]

  if ( (byte_40F8C09 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_long___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__long___ctor__, v6);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__long__TypeInfo, v8);
    sub_B16FFC(&Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__, v12);
    sub_B16FFC(&Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__, v13);
    sub_B16FFC(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v14);
    sub_B16FFC(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__, v15);
    sub_B16FFC(&Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__, v16);
    byte_40F8C09 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  attackPieceData = this->fields.attackPieceData;
  if ( !attackPieceData )
    goto LABEL_31;
  targetPieceData = this->fields.targetPieceData;
  if ( !targetPieceData )
    goto LABEL_31;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_31;
  nowSquareIndex_k__BackingField = attackPieceData->fields._nowSquareIndex_k__BackingField;
  v22 = targetPieceData->fields._nowSquareIndex_k__BackingField;
  BattleParticipantInfo = WarBoardData__CreateBattleParticipantInfo(
                            (WarBoardData_o *)Instance[4].monitor,
                            attackPieceData,
                            targetPieceData,
                            0LL);
  if ( !BattleParticipantInfo )
    goto LABEL_31;
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)BattleParticipantInfo->fields._Participants_k__BackingField;
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v24,
                                                                             v25,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Participants_k__BackingField,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  aftSquareIndex = v22;
  v35 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v35 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v38 = nowSquareIndex_k__BackingField;
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v38 = nowSquareIndex_k__BackingField;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__3_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B170CC(
                                                                              System_Func_WarBoardPieceData__long__TypeInfo,
                                                                              v30,
                                                                              v31,
                                                                              v32,
                                                                              v33);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_1,
      v39,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_1__,
      (const MethodInfo_2B6BEAC *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v40 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v40->__9__3_1 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__3_1,
      (System_Int32_array **)_9__3_1,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    nowSquareIndex_k__BackingField = v38;
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v34,
                                                               (System_Func_TSource__TResult__o *)_9__3_1,
                                                               (const MethodInfo_19C0870 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v48 = System_Linq_Enumerable__ToArray_long_(
          v47,
          (const MethodInfo_19C4B40 *)Method_System_Linq_Enumerable_ToArray_long___);
  v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v49,
                                                                             v50,
                                                                             v51,
                                                                             v52);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v53,
    (Il2CppObject *)this,
    Method_WarBoardAPIServantAttackRequestTask__SetRequest_b__3_2__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v58 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Participants_k__BackingField,
          (System_Func_TSource__bool__o *)v53,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v59 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  if ( (BYTE3(WarBoardAPIServantAttackRequestTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAPIServantAttackRequestTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAPIServantAttackRequestTask___c_TypeInfo);
    v59 = WarBoardAPIServantAttackRequestTask___c_TypeInfo;
  }
  v60 = v59->static_fields;
  _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v60->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v62 = nowSquareIndex_k__BackingField;
      if ( !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        v60 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v62 = nowSquareIndex_k__BackingField;
    }
    v63 = (Il2CppObject *)v60->__9;
    _9__3_3 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B170CC(
                                                                              System_Func_WarBoardPieceData__long__TypeInfo,
                                                                              v54,
                                                                              v55,
                                                                              v56,
                                                                              v57);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_3,
      v63,
      Method_WarBoardAPIServantAttackRequestTask___c__SetRequest_b__3_3__,
      (const MethodInfo_2B6BEAC *)Method_System_Func_WarBoardPieceData__long___ctor__);
    v64 = WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
    v64->__9__3_3 = (struct System_Func_WarBoardPieceData__long__o *)_9__3_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v64->__9__3_3,
      (System_Int32_array **)_9__3_3,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    nowSquareIndex_k__BackingField = v62;
  }
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v58,
                                                               (System_Func_TSource__TResult__o *)_9__3_3,
                                                               (const MethodInfo_19C0870 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__long___);
  v72 = System_Linq_Enumerable__ToArray_long_(
          v71,
          (const MethodInfo_19C4B40 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (WarBoardBattleSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        0LL,
                                                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_WarBoardBattleSetupRequest___);
  id = WarBoardData__get_id(monitor, 0LL);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_31:
    sub_B170D4();
  WarBoardBattleSetupRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    id,
    v48,
    v72,
    nowSquareIndex_k__BackingField,
    aftSquareIndex,
    monitor,
    0LL);
  this->fields.request = (struct RequestBase_o *)Request_WarBoardWallAttackRequest;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)Request_WarBoardWallAttackRequest,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_0(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *attackPieceData; // x8

  if ( !x || (attackPieceData = this->fields.attackPieceData) == 0LL )
    sub_B170D4();
  return x->fields._forceId_k__BackingField == attackPieceData->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAPIServantAttackRequestTask___SetRequest_b__3_2(
        WarBoardAPIServantAttackRequestTask_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPieceData; // x8

  if ( !x || (targetPieceData = this->fields.targetPieceData) == 0LL )
    sub_B170D4();
  return x->fields._forceId_k__BackingField == targetPieceData->fields._forceId_k__BackingField;
}


void __fastcall WarBoardAPIServantAttackRequestTask___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7ABC & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1);
    byte_40F7ABC = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardAPIServantAttackRequestTask___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAPIServantAttackRequestTask___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}


int64_t __fastcall WarBoardAPIServantAttackRequestTask___c___SetRequest_b__3_3(
        WarBoardAPIServantAttackRequestTask___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return WarBoardPieceData__get_WarBoardUserServantDataId(x, 0LL);
}