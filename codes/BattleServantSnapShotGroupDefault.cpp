void BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
        BattleServantSnapShotGroupDefault_o *this,
        BattleServantData_o *baseSvtData,
        BattleServantData_o *opponentSvtData,
        BattleCommandData_o *commandOpponent,
        System_Int32_array *addOpponentIndividualityArray,
        const MethodInfo *method)
{
  System_Int32_array *ConcatSvtIndividualities; // x23
  BattleBuffData_CheckIndividualitiesData_o *v12; // x0
  BattleBuffData_CheckIndividualitiesData_o *v13; // x22
  BattleServantData_o *v14; // x1
  BattleServantData_o *v15; // x2
  System_Int32_array *v16; // x4
  BattleDataDefine_c *v17; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x21
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x20
  __int64 v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t uniqueId; // w8

  if ( (byte_4C59CB0 & 1) == 0 )
  {
    sub_1C3E564(&BattleDataDefine_TypeInfo);
    sub_1C3E564(&BattleServantSnapShot_TypeInfo);
    sub_1C3E564(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
    byte_4C59CB0 = 1;
  }
  if ( opponentSvtData )
  {
    ConcatSvtIndividualities = BattleServantData__getConcatSvtIndividualities(
                                 opponentSvtData,
                                 commandOpponent,
                                 addOpponentIndividualityArray,
                                 0,
                                 1,
                                 0);
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C3E7B0(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v13 = v12;
    v14 = baseSvtData;
    v15 = opponentSvtData;
    v16 = ConcatSvtIndividualities;
  }
  else
  {
    v17 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v17 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v17->static_fields->NO_INDIVIDUALITY_ARRAY;
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C3E7B0(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v13 = v12;
    v14 = baseSvtData;
    v15 = 0;
    v16 = NO_INDIVIDUALITY_ARRAY;
  }
  BattleBuffData_CheckIndividualitiesData___ctor_45725812(v12, v14, v15, 0, v16, 0, 0, 0);
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  v20 = sub_1C3E7B0(BattleServantSnapShot_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  if ( !baseSvtData
    || (uniqueId = baseSvtData->fields.uniqueId,
        *(_QWORD *)(v20 + 16) = v13,
        *(_DWORD *)(v20 + 24) = uniqueId,
        sub_1C3E508((CGThumbnailListItem_o *)(v20 + 16), (int32_t)v13, v23, v24),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_1C3E7C0(v21, v22);
  }
  System_Collections_Generic_LinkedList_object___AddLast(
    SnapShotLinkedList_k__BackingField,
    (Il2CppObject *)v20,
    (const MethodInfo_36F8CB8 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
        const MethodInfo *method)
{
  BattleServantSnapShotGroupDefault___c_c *v3; // x0
  struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  System_Func_object__object__o *_9__2_0; // x20
  Il2CppObject *v6; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C59CB1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
    sub_1C3E564(&System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    sub_1C3E564(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__);
    sub_1C3E564(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_4C59CB1 = 1;
  }
  v3 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  if ( !BattleServantSnapShotGroupDefault___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantSnapShotGroupDefault___c_TypeInfo);
    v3 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__object__o *)v3->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleServantSnapShotGroupDefault___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__2_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    System_Func_object__object____ctor(
      _9__2_0,
      v6,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      0);
    static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_object_(
                                                            v10,
                                                            (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C59CB2 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_4C59CB2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleServantSnapShotGroupDefault___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void BattleServantSnapShotGroupDefault___c___ctor(
        BattleServantSnapShotGroupDefault___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleBuffData_CheckIndividualitiesData_o *BattleServantSnapShotGroupDefault___c___get_CheckIndividualitiesDataArray_b__2_0(
        BattleServantSnapShotGroupDefault___c_o *this,
        BattleServantSnapShot_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}