void __fastcall BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
        BattleServantSnapShotGroupDefault_o *this,
        BattleServantData_o *baseSvtData,
        BattleServantData_o *opponentSvtData,
        BattleCommandData_o *commandOpponent,
        System_Int32_array *addOpponentIndividualityArray,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int32_array *ConcatSvtIndividualities; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  BattleBuffData_CheckIndividualitiesData_o *v21; // x0
  int64_t v22; // x22
  BattleServantData_o *v23; // x1
  BattleServantData_o *v24; // x2
  System_Int32_array *v25; // x4
  BattleDataDefine_c *v26; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x21
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x21
  __int64 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int32_t uniqueId; // w8

  if ( (byte_4B18CF0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, baseSvtData, opponentSvtData);
    sub_1BCA7E0(&BattleServantSnapShot_TypeInfo, v11, v12);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__, v15, v16);
    byte_4B18CF0 = 1;
  }
  if ( opponentSvtData )
  {
    ConcatSvtIndividualities = BattleServantData__getConcatSvtIndividualities(
                                 opponentSvtData,
                                 commandOpponent,
                                 addOpponentIndividualityArray,
                                 0LL,
                                 0LL);
    v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v18,
                                                         v19,
                                                         v20);
    v22 = (int64_t)v21;
    v23 = baseSvtData;
    v24 = opponentSvtData;
    v25 = ConcatSvtIndividualities;
  }
  else
  {
    v26 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, baseSvtData);
      v26 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v26->static_fields->NO_INDIVIDUALITY_ARRAY;
    v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         baseSvtData,
                                                         opponentSvtData,
                                                         commandOpponent);
    v22 = (int64_t)v21;
    v23 = baseSvtData;
    v24 = 0LL;
    v25 = NO_INDIVIDUALITY_ARRAY;
  }
  BattleBuffData_CheckIndividualitiesData___ctor_43382356(v21, v23, v24, 0LL, v25, 0LL, 0LL, 0LL);
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  v32 = sub_1BCAA2C(BattleServantSnapShot_TypeInfo, v29, v30, v31);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !baseSvtData
    || (uniqueId = baseSvtData->fields.uniqueId,
        *(_QWORD *)(v32 + 16) = v22,
        *(_DWORD *)(v32 + 24) = uniqueId,
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), v22, v35, v36, v37, v38, v39, v40),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_1BCAA3C(v33, v34);
  }
  System_Collections_Generic_LinkedList_object___AddLast(
    SnapShotLinkedList_k__BackingField,
    (Il2CppObject *)v32,
    (const MethodInfo_34E371C *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  BattleServantSnapShotGroupDefault___c_c *v13; // x0
  struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  System_Func_object__object__o *_9__2_0; // x20
  Il2CppObject *v16; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B18CF1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___, v5, v6);
    sub_1BCA7E0(&System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__, v9, v10);
    sub_1BCA7E0(&BattleServantSnapShotGroupDefault___c_TypeInfo, v11, v12);
    byte_4B18CF1 = 1;
  }
  v13 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  if ( !BattleServantSnapShotGroupDefault___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantSnapShotGroupDefault___c_TypeInfo, method);
    v13 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__object__o *)v13->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = BattleServantSnapShotGroupDefault___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__2_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__object____ctor(
      _9__2_0,
      v16,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      0LL);
    static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleServantSnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_object_(
                                                            v24,
                                                            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void __fastcall BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18CF2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantSnapShotGroupDefault___c_TypeInfo, v1, v2);
    byte_4B18CF2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleServantSnapShotGroupDefault___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}