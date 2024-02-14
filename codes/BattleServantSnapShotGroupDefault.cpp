void __fastcall BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
        BattleServantSnapShotGroupDefault_o *this,
        BattleServantData_o *baseSvtData,
        BattleServantData_o *opponentSvtData,
        BattleCommandData_o *commandOpponent,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleBuffData_CheckIndividualitiesData_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  BattleDataDefine_c *v15; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x22
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  __int64 v18; // x20
  __int64 v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42172AD & 1) == 0 )
  {
    sub_B0D8A4(&BattleDataDefine_TypeInfo, baseSvtData);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__AddLast__, v10);
    sub_B0D8A4(&BattleServantSnapShotGroupBase_SnapShot_TypeInfo, v11);
    byte_42172AD = 1;
  }
  if ( opponentSvtData )
  {
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         baseSvtData,
                                                         opponentSvtData);
    BattleBuffData_CheckIndividualitiesData___ctor(v12, baseSvtData, opponentSvtData, 0LL, commandOpponent, 0LL, 0LL);
  }
  else
  {
    v15 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v15 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v15->static_fields->NO_INDIVIDUALITY_ARRAY;
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         baseSvtData,
                                                         opponentSvtData);
    BattleBuffData_CheckIndividualitiesData___ctor_22771868(
      v12,
      baseSvtData,
      0LL,
      0LL,
      NO_INDIVIDUALITY_ARRAY,
      0LL,
      0LL);
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  v18 = sub_B0D974(BattleServantSnapShotGroupBase_SnapShot_TypeInfo, v13, v14);
  BattleServantSnapShotGroupBase_SnapShot___ctor((BattleServantSnapShotGroupBase_SnapShot_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = v12,
        sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)v12, v20, v21, v22, v23, v24, v25),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_B0D97C(v19);
  }
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___AddLast(
    SnapShotLinkedList_k__BackingField,
    (BattleServantSnapShotGroupBase_SnapShot_o *)v18,
    (const MethodInfo_2D1CF50 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  BattleServantSnapShotGroupDefault___c_c *v10; // x0
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__2_0; // x20
  Il2CppObject *v13; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_42172AE & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_Select_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___,
      method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___, v4);
    sub_B0D8A4(
      &Method_System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___ctor__,
      v5);
    sub_B0D8A4(
      &System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo,
      v6);
    sub_B0D8A4(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__, v7);
    sub_B0D8A4(&BattleServantSnapShotGroupDefault___c_TypeInfo, v8);
    byte_42172AE = 1;
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  v10 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  if ( (BYTE3(BattleServantSnapShotGroupDefault___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantSnapShotGroupDefault___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantSnapShotGroupDefault___c_TypeInfo);
    v10 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo,
                                                                                                method,
                                                                                                v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__2_0,
      v13,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      (const MethodInfo_261A104 *)Method_System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___ctor__);
    v14 = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    v14->__9__2_0 = (struct System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                            v21,
                                                            (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void __fastcall BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0

  if ( (byte_4211F07 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantSnapShotGroupDefault___c_TypeInfo, v1);
    byte_4211F07 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleServantSnapShotGroupDefault___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall BattleServantSnapShotGroupDefault___c___ctor(
        BattleServantSnapShotGroupDefault___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleServantSnapShotGroupDefault___c___get_CheckIndividualitiesDataArray_b__2_0(
        BattleServantSnapShotGroupDefault___c_o *this,
        BattleServantSnapShotGroupBase_SnapShot_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}