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
  int64_t v13; // x22
  BattleServantData_o *v14; // x1
  BattleServantData_o *v15; // x2
  System_Int32_array *v16; // x4
  BattleDataDefine_c *v17; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x21
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x20
  __int64 v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int32_t uniqueId; // w8

  if ( (byte_4BDF0FF & 1) == 0 )
  {
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&BattleServantSnapShot_TypeInfo);
    sub_1C21E38(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
    byte_4BDF0FF = 1;
  }
  if ( opponentSvtData )
  {
    ConcatSvtIndividualities = BattleServantData__getConcatSvtIndividualities(
                                 opponentSvtData,
                                 commandOpponent,
                                 addOpponentIndividualityArray,
                                 0LL,
                                 0LL);
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C22084(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v13 = (int64_t)v12;
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
    v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C22084(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    v13 = (int64_t)v12;
    v14 = baseSvtData;
    v15 = 0LL;
    v16 = NO_INDIVIDUALITY_ARRAY;
  }
  BattleBuffData_CheckIndividualitiesData___ctor_43956780(v12, v14, v15, 0LL, v16, 0LL, 0LL, 0LL);
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  v20 = sub_1C22084(BattleServantSnapShot_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !baseSvtData
    || (uniqueId = baseSvtData->fields.uniqueId,
        *(_QWORD *)(v20 + 16) = v13,
        *(_DWORD *)(v20 + 24) = uniqueId,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 16), v13, v23, v24, v25, v26, v27, v28),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_1C22094(v21, v22);
  }
  System_Collections_Generic_LinkedList_object___AddLast(
    SnapShotLinkedList_k__BackingField,
    (Il2CppObject *)v20,
    (const MethodInfo_35912F8 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
        const MethodInfo *method)
{
  BattleServantSnapShotGroupDefault___c_c *v3; // x0
  struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  System_Func_object__object__o *_9__2_0; // x20
  Il2CppObject *v6; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4BDF100 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
    sub_1C21E38(&System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    sub_1C21E38(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__);
    sub_1C21E38(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_4BDF100 = 1;
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
    _9__2_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    System_Func_object__object____ctor(
      _9__2_0,
      v6,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      0LL);
    static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_object_(
                                                            v14,
                                                            (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void __fastcall BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF101 & 1) == 0 )
  {
    sub_1C21E38(&BattleServantSnapShotGroupDefault___c_TypeInfo);
    byte_4BDF101 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleServantSnapShotGroupDefault___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}