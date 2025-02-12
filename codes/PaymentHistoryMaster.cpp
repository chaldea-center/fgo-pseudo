void __fastcall PaymentHistoryMaster___ctor(PaymentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7EF9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string___ctor__, method);
    byte_4BC7EF9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    502,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_PaymentHistoryEntity__o *__fastcall PaymentHistoryMaster__GetEntityList(
        PaymentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PaymentHistoryMaster___c_c *v10; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v13; // x21
  struct PaymentHistoryMaster___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_TOutput__o *v21; // x0
  __int64 v22; // x1
  PaymentHistoryMaster___c_c *v23; // x8
  System_Collections_Generic_List_object__o *v24; // x19
  System_Comparison_T__o *_9__1_1; // x20
  Il2CppObject *v26; // x21
  struct PaymentHistoryMaster___c_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BC7EFA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Comparison_PaymentHistoryEntity__TypeInfo, method);
    sub_1C1ABD4(&System_Converter_PaymentHistoryEntity__PaymentHistoryEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string__getEntityList__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PaymentHistoryEntity__Sort__, v5);
    sub_1C1ABD4(&Method_ObservableCollectionExtensions_ConvertAll_PaymentHistoryEntity__PaymentHistoryEntity___, v6);
    sub_1C1ABD4(&Method_PaymentHistoryMaster___c__GetEntityList_b__1_0__, v7);
    sub_1C1ABD4(&Method_PaymentHistoryMaster___c__GetEntityList_b__1_1__, v8);
    sub_1C1ABD4(&PaymentHistoryMaster___c_TypeInfo, v9);
    byte_4BC7EFA = 1;
  }
  v10 = PaymentHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !PaymentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryMaster___c_TypeInfo);
    v10 = PaymentHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v10->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = PaymentHistoryMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1C1AE20(System_Converter_PaymentHistoryEntity__PaymentHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v13, Method_PaymentHistoryMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = PaymentHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_PaymentHistoryEntity__PaymentHistoryEntity__o *)_9__1_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_30259E4 *)Method_ObservableCollectionExtensions_ConvertAll_PaymentHistoryEntity__PaymentHistoryEntity___);
  v23 = PaymentHistoryMaster___c_TypeInfo;
  v24 = (System_Collections_Generic_List_object__o *)v21;
  if ( !PaymentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryMaster___c_TypeInfo);
    v23 = PaymentHistoryMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Comparison_T__o *)v23->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = PaymentHistoryMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__1_1 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_PaymentHistoryEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_1, v26, Method_PaymentHistoryMaster___c__GetEntityList_b__1_1__, 0LL);
    v27 = PaymentHistoryMaster___c_TypeInfo->static_fields;
    v27->__9__1_1 = (struct System_Comparison_PaymentHistoryEntity__o *)_9__1_1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v27->__9__1_1, (int64_t)_9__1_1, v28, v29, v30, v31, v32, v33);
  }
  if ( !v24 )
    sub_1C1AE30(v21, v22);
  System_Collections_Generic_List_object___Sort_56877908(
    v24,
    _9__1_1,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__Sort__);
  return (System_Collections_Generic_List_PaymentHistoryEntity__o *)v24;
}


System_Collections_Generic_IEnumerator_PaymentHistoryEntity__o *__fastcall PaymentHistoryMaster__GetEnumerator(
        PaymentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BC7EFB & 1) == 0 )
  {
    sub_1C1ABD4(&System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__, v3);
    byte_4BC7EFB = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)PaymentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1C1AE30(0LL, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    &v11,
    EntityList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
  v10 = v11;
  return (System_Collections_Generic_IEnumerator_PaymentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                             System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__TypeInfo,
                                                                             &v10,
                                                                             v6,
                                                                             v7,
                                                                             v8);
}


void __fastcall PaymentHistoryMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC7EFC & 1) == 0 )
  {
    sub_1C1ABD4(&PaymentHistoryMaster___c_TypeInfo, v1);
    byte_4BC7EFC = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(PaymentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PaymentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct PaymentHistoryMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)PaymentHistoryMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
  return a->fields.idx - b->fields.idx;
}