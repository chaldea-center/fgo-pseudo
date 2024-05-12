void __fastcall BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
        BattleServantSnapShotGroupDefault_o *this,
        BattleServantData_o *baseSvtData,
        BattleServantData_o *opponentSvtData,
        BattleCommandData_o *commandOpponent,
        System_Int32_array *addOpponentIndividualityArray,
        const MethodInfo *method)
{
  System_Int32_array *ConcatSvtIndividualities; // x23
  BattleBuffData_CheckIndividualitiesData_o *v12; // x0
  System_Int32_array **v13; // x21
  BattleServantData_o *v14; // x1
  BattleServantData_o *v15; // x2
  System_Int32_array *v16; // x4
  BattleDataDefine_c *v17; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x22
  struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *SnapShotLinkedList_k__BackingField; // x20
  __int64 v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_438E20E & 1) == 0 )
  {
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&BattleServantSnapShot_TypeInfo);
    sub_B775C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
    byte_438E20E = 1;
  }
  if ( opponentSvtData )
  {
    ConcatSvtIndividualities = BattleServantData__getConcatSvtIndividualities(
                                 opponentSvtData,
                                 commandOpponent,
                                 addOpponentIndividualityArray,
                                 0LL);
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B77694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v13 = (System_Int32_array **)v12;
    v14 = baseSvtData;
    v15 = opponentSvtData;
    v16 = ConcatSvtIndividualities;
  }
  else
  {
    v17 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v17 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v17->static_fields->NO_INDIVIDUALITY_ARRAY;
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B77694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v13 = (System_Int32_array **)v12;
    v14 = baseSvtData;
    v15 = 0LL;
    v16 = NO_INDIVIDUALITY_ARRAY;
  }
  BattleBuffData_CheckIndividualitiesData___ctor_24553672(v12, v14, v15, 0LL, v16, 0LL, 0LL);
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  v20 = sub_B77694(BattleServantSnapShot_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !baseSvtData
    || (*(_DWORD *)(v20 + 24) = baseSvtData->fields.uniqueId, !v20)
    || (*(_QWORD *)(v20 + 16) = v13,
        sub_B77560((BattleServantConfConponent_o *)(v20 + 16), v13, v23, v24, v25, v26, v27, v28),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_B7769C(v21, v22);
  }
  System_Collections_Generic_LinkedList_WebOperation___AddLast(
    (System_Collections_Generic_LinkedList_WebOperation__o *)SnapShotLinkedList_k__BackingField,
    (System_Net_WebOperation_o *)v20,
    (const MethodInfo_2EE93B8 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  BattleServantSnapShotGroupDefault___c_c *v4; // x0
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__2_0; // x20
  Il2CppObject *v7; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_438E20F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
    sub_B775C4(&Method_System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___ctor__);
    sub_B775C4(&System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    sub_B775C4(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__);
    sub_B775C4(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_438E20F = 1;
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  v4 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  if ( (BYTE3(BattleServantSnapShotGroupDefault___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantSnapShotGroupDefault___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantSnapShotGroupDefault___c_TypeInfo);
    v4 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__2_0,
      v7,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      (const MethodInfo_29EAA10 *)Method_System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___ctor__);
    v8 = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    v8->__9__2_0 = (struct System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                            v15,
                                                            (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void __fastcall BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0

  if ( (byte_43884FB & 1) == 0 )
  {
    sub_B775C4(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_43884FB = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleServantSnapShotGroupDefault___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall BattleServantSnapShotGroupDefault___c___ctor(
        BattleServantSnapShotGroupDefault___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleServantSnapShotGroupDefault___c___get_CheckIndividualitiesDataArray_b__2_0(
        BattleServantSnapShotGroupDefault___c_o *this,
        BattleServantSnapShot_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}