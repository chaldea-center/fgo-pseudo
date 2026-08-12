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
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t uniqueId; // w8

  if ( (byte_597387E & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&BattleServantSnapShot_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
    byte_597387E = 1;
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
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v13 = v12;
    v14 = baseSvtData;
    v15 = opponentSvtData;
    v16 = ConcatSvtIndividualities;
  }
  else
  {
    v17 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, baseSvtData);
      v17 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v17->static_fields->NO_INDIVIDUALITY_ARRAY;
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v13 = v12;
    v14 = baseSvtData;
    v15 = 0;
    v16 = NO_INDIVIDUALITY_ARRAY;
  }
  BattleBuffData_CheckIndividualitiesData___ctor_52852796(v12, v14, v15, 0, v16, 0, 0, 0);
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  v20 = sub_2213CCC(BattleServantSnapShot_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  if ( !baseSvtData
    || (uniqueId = baseSvtData->fields.uniqueId,
        *(_QWORD *)(v20 + 16) = v13,
        *(_DWORD *)(v20 + 24) = uniqueId,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 16), (int32_t)v13, v23, v24, v25, v26, v27, v28),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_2213CDC(v21, v22);
  }
  System_Collections_Generic_LinkedList_object___AddLast(
    SnapShotLinkedList_k__BackingField,
    (Il2CppObject *)v20,
    (const MethodInfo_43B0258 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
        const MethodInfo *method)
{
  BattleServantSnapShotGroupDefault___c_c *v3; // x0
  struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__2_0; // x20
  Il2CppObject *v7; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_597387F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
    sub_2213A60(&System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    sub_2213A60(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__);
    sub_2213A60(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_597387F = 1;
  }
  v3 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  if ( !*(&BattleServantSnapShotGroupDefault___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantSnapShotGroupDefault___c_TypeInfo, method);
    v3 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__2_0 = (System_Func_object__object__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    System_Func_object__object____ctor(
      _9__2_0,
      v7,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      0);
    v8 = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    v8->__9__2_0 = (struct System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__2_0, (int32_t)_9__2_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_object_(
                                                            v15,
                                                            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973880 & 1) == 0 )
  {
    sub_2213A60(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_5973880 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleServantSnapShotGroupDefault___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}