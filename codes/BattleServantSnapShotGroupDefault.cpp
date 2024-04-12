void __fastcall BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
        BattleServantSnapShotGroupDefault_o *this,
        BattleServantData_o *baseSvtData,
        BattleServantData_o *opponentSvtData,
        BattleCommandData_o *commandOpponent,
        const MethodInfo *method)
{
  BattleBuffData_CheckIndividualitiesData_o *v9; // x21
  BattleDataDefine_c *v10; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x22
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42B2A8A & 1) == 0 )
  {
    sub_B52984(&BattleDataDefine_TypeInfo);
    sub_B52984(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__AddLast__);
    sub_B52984(&BattleServantSnapShotGroupBase_SnapShot_TypeInfo);
    byte_42B2A8A = 1;
  }
  if ( opponentSvtData )
  {
    v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B52A54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v9, baseSvtData, opponentSvtData, 0LL, commandOpponent, 0LL, 0LL);
  }
  else
  {
    v10 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v10 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v10->static_fields->NO_INDIVIDUALITY_ARRAY;
    v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B52A54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_23402588(v9, baseSvtData, 0LL, 0LL, NO_INDIVIDUALITY_ARRAY, 0LL, 0LL);
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  v13 = sub_B52A54(BattleServantSnapShotGroupBase_SnapShot_TypeInfo);
  BattleServantSnapShotGroupBase_SnapShot___ctor((BattleServantSnapShotGroupBase_SnapShot_o *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = v9,
        sub_B52920((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)v9, v16, v17, v18, v19, v20, v21),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_B52A5C(v14, v15);
  }
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___AddLast(
    SnapShotLinkedList_k__BackingField,
    (BattleServantSnapShotGroupBase_SnapShot_o *)v13,
    (const MethodInfo_2296310 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x19
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

  if ( (byte_42B2A8B & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
    sub_B52984(&Method_System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___ctor__);
    sub_B52984(&System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    sub_B52984(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__);
    sub_B52984(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_42B2A8B = 1;
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
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__2_0,
      v7,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___ctor__);
    v8 = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    v8->__9__2_0 = (struct System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_B52920(
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
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                            v15,
                                                            (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void __fastcall BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0

  if ( (byte_42AD873 & 1) == 0 )
  {
    sub_B52984(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_42AD873 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleServantSnapShotGroupDefault___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}