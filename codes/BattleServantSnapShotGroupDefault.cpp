void __fastcall BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
        BattleServantSnapShotGroupDefault_o *this,
        BattleServantData_o *baseSvtData,
        BattleServantData_o *opponentSvtData,
        BattleCommandData_o *commandOpponent,
        System_Int32_array *addOpponentIndividualityArray,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Int32_array *ConcatSvtIndividualities; // x23
  BattleBuffData_CheckIndividualitiesData_o *v15; // x0
  BattleBuffData_CheckIndividualitiesData_o *v16; // x22
  BattleServantData_o *v17; // x1
  BattleServantData_o *v18; // x2
  System_Int32_array *v19; // x4
  BattleDataDefine_c *v20; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x21
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x20
  __int64 v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t uniqueId; // w8

  if ( (byte_48E4FA9 & 1) == 0 )
  {
    sub_1B00CCC(&BattleDataDefine_TypeInfo, baseSvtData);
    sub_1B00CCC(&BattleServantSnapShot_TypeInfo, v11);
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__, v13);
    byte_48E4FA9 = 1;
  }
  if ( opponentSvtData )
  {
    ConcatSvtIndividualities = BattleServantData__getConcatSvtIndividualities(
                                 opponentSvtData,
                                 commandOpponent,
                                 addOpponentIndividualityArray,
                                 0LL);
    v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v16 = v15;
    v17 = baseSvtData;
    v18 = opponentSvtData;
    v19 = ConcatSvtIndividualities;
  }
  else
  {
    v20 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v20 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v20->static_fields->NO_INDIVIDUALITY_ARRAY;
    v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v16 = v15;
    v17 = baseSvtData;
    v18 = 0LL;
    v19 = NO_INDIVIDUALITY_ARRAY;
  }
  BattleBuffData_CheckIndividualitiesData___ctor_41311248(v15, v17, v18, 0LL, v19, 0LL, 0LL);
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  v23 = sub_1B00F18(BattleServantSnapShot_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !baseSvtData
    || (uniqueId = baseSvtData->fields.uniqueId,
        *(_QWORD *)(v23 + 16) = v16,
        *(_DWORD *)(v23 + 24) = uniqueId,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)v16, v26, v27),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_1B00F28(v24, v25);
  }
  System_Collections_Generic_LinkedList_object___AddLast(
    SnapShotLinkedList_k__BackingField,
    (Il2CppObject *)v23,
    (const MethodInfo_3305DC4 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleServantSnapShotGroupDefault___c_c *v7; // x0
  struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  System_Func_object__object__o *_9__2_0; // x20
  Il2CppObject *v10; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_48E4FAA & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___,
      method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___, v3);
    sub_1B00CCC(&System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo, v4);
    sub_1B00CCC(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__, v5);
    sub_1B00CCC(&BattleServantSnapShotGroupDefault___c_TypeInfo, v6);
    byte_48E4FAA = 1;
  }
  v7 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  if ( !BattleServantSnapShotGroupDefault___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantSnapShotGroupDefault___c_TypeInfo);
    v7 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__object__o *)v7->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleServantSnapShotGroupDefault___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__2_0 = (System_Func_object__object__o *)sub_1B00F18(System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    System_Func_object__object____ctor(
      _9__2_0,
      v10,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      0LL);
    static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_2D8FA10 *)Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_object_(
                                                            v14,
                                                            (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void __fastcall BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E4FAB & 1) == 0 )
  {
    sub_1B00CCC(&BattleServantSnapShotGroupDefault___c_TypeInfo, v1);
    byte_48E4FAB = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BattleServantSnapShotGroupDefault___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, 0LL);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}