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
  BattleDataDefine_c *v13; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x22
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_418A585 & 1) == 0 )
  {
    sub_B2C35C(&BattleDataDefine_TypeInfo, baseSvtData);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__AddLast__, v10);
    sub_B2C35C(&BattleServantSnapShotGroupBase_SnapShot_TypeInfo, v11);
    byte_418A585 = 1;
  }
  if ( opponentSvtData )
  {
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v12, baseSvtData, opponentSvtData, 0LL, commandOpponent, 0LL, 0LL);
  }
  else
  {
    v13 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v13 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v13->static_fields->NO_INDIVIDUALITY_ARRAY;
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_23203976(
      v12,
      baseSvtData,
      0LL,
      0LL,
      NO_INDIVIDUALITY_ARRAY,
      0LL,
      0LL);
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  v16 = sub_B2C42C(BattleServantSnapShotGroupBase_SnapShot_TypeInfo);
  BattleServantSnapShotGroupBase_SnapShot___ctor((BattleServantSnapShotGroupBase_SnapShot_o *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = v12,
        sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)v12, v19, v20, v21, v22, v23, v24),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_B2C434(v17, v18);
  }
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___AddLast(
    SnapShotLinkedList_k__BackingField,
    (BattleServantSnapShotGroupBase_SnapShot_o *)v16,
    (const MethodInfo_210B1C4 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  BattleServantSnapShotGroupDefault___c_c *v9; // x0
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__2_0; // x20
  Il2CppObject *v12; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_418A586 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_Select_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___,
      method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___, v3);
    sub_B2C35C(
      &Method_System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___ctor__,
      v4);
    sub_B2C35C(
      &System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo,
      v5);
    sub_B2C35C(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__, v6);
    sub_B2C35C(&BattleServantSnapShotGroupDefault___c_TypeInfo, v7);
    byte_418A586 = 1;
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  v9 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  if ( (BYTE3(BattleServantSnapShotGroupDefault___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantSnapShotGroupDefault___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantSnapShotGroupDefault___c_TypeInfo);
    v9 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__2_0,
      v12,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      (const MethodInfo_2713350 *)Method_System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___ctor__);
    v13 = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    v13->__9__2_0 = (struct System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                            v20,
                                                            (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void __fastcall BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0

  if ( (byte_41850DB & 1) == 0 )
  {
    sub_B2C35C(&BattleServantSnapShotGroupDefault___c_TypeInfo, v1);
    byte_41850DB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleServantSnapShotGroupDefault___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}