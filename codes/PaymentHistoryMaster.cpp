void __fastcall PaymentHistoryMaster___ctor(PaymentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A0906F & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string___ctor__, method);
    byte_4A0906F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    498,
    (const MethodInfo_30E47D8 *)Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string___ctor__);
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
  PaymentHistoryMaster___c_c *v9; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v12; // x21
  struct PaymentHistoryMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_TOutput__o *v16; // x0
  __int64 v17; // x1
  PaymentHistoryMaster___c_c *v18; // x8
  System_Collections_Generic_List_object__o *v19; // x19
  System_Comparison_T__o *_9__1_1; // x20
  Il2CppObject *v21; // x21
  struct PaymentHistoryMaster___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A09070 & 1) == 0 )
  {
    sub_1B686D4(&System_Comparison_PaymentHistoryEntity__TypeInfo, method);
    sub_1B686D4(&System_Converter_DataEntityBase__PaymentHistoryEntity__TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_PaymentHistoryEntity__Sort__, v4);
    sub_1B686D4(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__PaymentHistoryEntity___, v5);
    sub_1B686D4(&Method_PaymentHistoryMaster___c__GetEntityList_b__1_0__, v6);
    sub_1B686D4(&Method_PaymentHistoryMaster___c__GetEntityList_b__1_1__, v7);
    sub_1B686D4(&PaymentHistoryMaster___c_TypeInfo, v8);
    byte_4A09070 = 1;
  }
  v9 = PaymentHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !PaymentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryMaster___c_TypeInfo);
    v9 = PaymentHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v9->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = PaymentHistoryMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1B68920(System_Converter_DataEntityBase__PaymentHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v12, Method_PaymentHistoryMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = PaymentHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_DataEntityBase__PaymentHistoryEntity__o *)_9__1_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v14, v15);
  }
  v16 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_2ECD1B4 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__PaymentHistoryEntity___);
  v18 = PaymentHistoryMaster___c_TypeInfo;
  v19 = (System_Collections_Generic_List_object__o *)v16;
  if ( !PaymentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryMaster___c_TypeInfo);
    v18 = PaymentHistoryMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Comparison_T__o *)v18->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = PaymentHistoryMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__1_1 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_PaymentHistoryEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_1, v21, Method_PaymentHistoryMaster___c__GetEntityList_b__1_1__, 0LL);
    v22 = PaymentHistoryMaster___c_TypeInfo->static_fields;
    v22->__9__1_1 = (struct System_Comparison_PaymentHistoryEntity__o *)_9__1_1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v22->__9__1_1, (int32_t)_9__1_1, v23, v24);
  }
  if ( !v19 )
    sub_1B68930(v16, v17);
  System_Collections_Generic_List_object___Sort_55303484(
    v19,
    _9__1_1,
    (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_PaymentHistoryEntity__Sort__);
  return (System_Collections_Generic_List_PaymentHistoryEntity__o *)v19;
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

  if ( (byte_4A09071 & 1) == 0 )
  {
    sub_1B686D4(&System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__, v3);
    byte_4A09071 = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)PaymentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1B68930(0LL, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    &v11,
    EntityList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A09072 & 1) == 0 )
  {
    sub_1B686D4(&PaymentHistoryMaster___c_TypeInfo, v1);
    byte_4A09072 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(PaymentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PaymentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct PaymentHistoryMaster___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)PaymentHistoryMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall PaymentHistoryMaster___c___ctor(PaymentHistoryMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


PaymentHistoryEntity_o *__fastcall PaymentHistoryMaster___c___GetEntityList_b__1_0(
        PaymentHistoryMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A09073 & 1) == 0 )
  {
    sub_1B686D4(&PaymentHistoryEntity_TypeInfo, entity);
    byte_4A09073 = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(PaymentHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PaymentHistoryEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == PaymentHistoryEntity_TypeInfo )
    return (PaymentHistoryEntity_o *)entity;
  return 0LL;
}


int32_t __fastcall PaymentHistoryMaster___c___GetEntityList_b__1_1(
        PaymentHistoryMaster___c_o *this,
        PaymentHistoryEntity_o *a,
        PaymentHistoryEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B68930(this, a);
  return a->fields.idx - b->fields.idx;
}