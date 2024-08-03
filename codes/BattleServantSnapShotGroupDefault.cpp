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
  __int64 v15; // x1
  __int64 v16; // x2
  BattleBuffData_CheckIndividualitiesData_o *v17; // x0
  BattleBuffData_CheckIndividualitiesData_o *v18; // x22
  BattleServantData_o *v19; // x1
  BattleServantData_o *v20; // x2
  System_Int32_array *v21; // x4
  BattleDataDefine_c *v22; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x21
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x21
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t uniqueId; // w8

  if ( (byte_49FED5B & 1) == 0 )
  {
    sub_1B640C8(&BattleDataDefine_TypeInfo, baseSvtData);
    sub_1B640C8(&BattleServantSnapShot_TypeInfo, v11);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__, v13);
    byte_49FED5B = 1;
  }
  if ( opponentSvtData )
  {
    ConcatSvtIndividualities = BattleServantData__getConcatSvtIndividualities(
                                 opponentSvtData,
                                 commandOpponent,
                                 addOpponentIndividualityArray,
                                 0LL);
    v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v15,
                                                         v16);
    v18 = v17;
    v19 = baseSvtData;
    v20 = opponentSvtData;
    v21 = ConcatSvtIndividualities;
  }
  else
  {
    v22 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v22 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v22->static_fields->NO_INDIVIDUALITY_ARRAY;
    v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         baseSvtData,
                                                         opponentSvtData);
    v18 = v17;
    v19 = baseSvtData;
    v20 = 0LL;
    v21 = NO_INDIVIDUALITY_ARRAY;
  }
  BattleBuffData_CheckIndividualitiesData___ctor_42147648(v17, v19, v20, 0LL, v21, 0LL, 0LL);
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  v27 = sub_1B64314(BattleServantSnapShot_TypeInfo, v25, v26);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !baseSvtData
    || (uniqueId = baseSvtData->fields.uniqueId,
        *(_QWORD *)(v27 + 16) = v18,
        *(_DWORD *)(v27 + 24) = uniqueId,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)v18, v29, v30),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_1B64324(v28);
  }
  System_Collections_Generic_LinkedList_object___AddLast(
    SnapShotLinkedList_k__BackingField,
    (Il2CppObject *)v27,
    (const MethodInfo_33EF518 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
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
  BattleServantSnapShotGroupDefault___c_c *v8; // x0
  struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  System_Func_object__object__o *_9__2_0; // x20
  Il2CppObject *v11; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FED5C & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___,
      method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___, v4);
    sub_1B640C8(&System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__, v6);
    sub_1B640C8(&BattleServantSnapShotGroupDefault___c_TypeInfo, v7);
    byte_49FED5C = 1;
  }
  v8 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  if ( !BattleServantSnapShotGroupDefault___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantSnapShotGroupDefault___c_TypeInfo);
    v8 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__object__o *)v8->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleServantSnapShotGroupDefault___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__2_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo,
                                                 method,
                                                 v2);
    System_Func_object__object____ctor(
      _9__2_0,
      v11,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      0LL);
    static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_object_(
                                                            v15,
                                                            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void __fastcall BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FED5D & 1) == 0 )
  {
    sub_1B640C8(&BattleServantSnapShotGroupDefault___c_TypeInfo, v1);
    byte_49FED5D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleServantSnapShotGroupDefault___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}