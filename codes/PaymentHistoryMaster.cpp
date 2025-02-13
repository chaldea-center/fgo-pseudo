void __fastcall PaymentHistoryMaster___ctor(PaymentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC995 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string___ctor__);
    byte_4BDC995 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    502,
    (const MethodInfo_325E55C *)Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_PaymentHistoryEntity__o *__fastcall PaymentHistoryMaster__GetEntityList(
        PaymentHistoryMaster_o *this,
        const MethodInfo *method)
{
  PaymentHistoryMaster___c_c *v3; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct PaymentHistoryMaster___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_TOutput__o *v14; // x0
  __int64 v15; // x1
  PaymentHistoryMaster___c_c *v16; // x8
  System_Collections_Generic_List_object__o *v17; // x19
  System_Comparison_T__o *_9__1_1; // x20
  Il2CppObject *v19; // x21
  struct PaymentHistoryMaster___c_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BDC996 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_PaymentHistoryEntity__TypeInfo);
    sub_1C21E38(&System_Converter_PaymentHistoryEntity__PaymentHistoryEntity__TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string__getEntityList__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PaymentHistoryEntity__Sort__);
    sub_1C21E38(&Method_ObservableCollectionExtensions_ConvertAll_PaymentHistoryEntity__PaymentHistoryEntity___);
    sub_1C21E38(&Method_PaymentHistoryMaster___c__GetEntityList_b__1_0__);
    sub_1C21E38(&Method_PaymentHistoryMaster___c__GetEntityList_b__1_1__);
    sub_1C21E38(&PaymentHistoryMaster___c_TypeInfo);
    byte_4BDC996 = 1;
  }
  v3 = PaymentHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !PaymentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryMaster___c_TypeInfo);
    v3 = PaymentHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = PaymentHistoryMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1C22084(System_Converter_PaymentHistoryEntity__PaymentHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v6, Method_PaymentHistoryMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = PaymentHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_PaymentHistoryEntity__PaymentHistoryEntity__o *)_9__1_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_3036358 *)Method_ObservableCollectionExtensions_ConvertAll_PaymentHistoryEntity__PaymentHistoryEntity___);
  v16 = PaymentHistoryMaster___c_TypeInfo;
  v17 = (System_Collections_Generic_List_object__o *)v14;
  if ( !PaymentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryMaster___c_TypeInfo);
    v16 = PaymentHistoryMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Comparison_T__o *)v16->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = PaymentHistoryMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__1_1 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_PaymentHistoryEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_1, v19, Method_PaymentHistoryMaster___c__GetEntityList_b__1_1__, 0LL);
    v20 = PaymentHistoryMaster___c_TypeInfo->static_fields;
    v20->__9__1_1 = (struct System_Comparison_PaymentHistoryEntity__o *)_9__1_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v20->__9__1_1, (int64_t)_9__1_1, v21, v22, v23, v24, v25, v26);
  }
  if ( !v17 )
    sub_1C22094(v14, v15);
  System_Collections_Generic_List_object___Sort_56953720(
    v17,
    _9__1_1,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__Sort__);
  return (System_Collections_Generic_List_PaymentHistoryEntity__o *)v17;
}


System_Collections_Generic_IEnumerator_PaymentHistoryEntity__o *__fastcall PaymentHistoryMaster__GetEnumerator(
        PaymentHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BDC997 & 1) == 0 )
  {
    sub_1C21E38(&System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
    byte_4BDC997 = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)PaymentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    &v10,
    EntityList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
  v9 = v10;
  return (System_Collections_Generic_IEnumerator_PaymentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                             System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__TypeInfo,
                                                                             &v9,
                                                                             v5,
                                                                             v6,
                                                                             v7);
}


void __fastcall PaymentHistoryMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC998 & 1) == 0 )
  {
    sub_1C21E38(&PaymentHistoryMaster___c_TypeInfo);
    byte_4BDC998 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(PaymentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PaymentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct PaymentHistoryMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)PaymentHistoryMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentHistoryMaster___c___ctor(PaymentHistoryMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


PaymentHistoryEntity_o *__fastcall PaymentHistoryMaster___c___GetEntityList_b__1_0(
        PaymentHistoryMaster___c_o *this,
        PaymentHistoryEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}


int32_t __fastcall PaymentHistoryMaster___c___GetEntityList_b__1_1(
        PaymentHistoryMaster___c_o *this,
        PaymentHistoryEntity_o *a,
        PaymentHistoryEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.idx - b->fields.idx;
}