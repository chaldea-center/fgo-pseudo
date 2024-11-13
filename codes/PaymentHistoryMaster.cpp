void __fastcall PaymentHistoryMaster___ctor(PaymentHistoryMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1661D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string___ctor__, method, v2);
    byte_4B1661D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    498,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_PaymentHistoryMaster__PaymentHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_PaymentHistoryEntity__o *__fastcall PaymentHistoryMaster__GetEntityList(
        PaymentHistoryMaster_o *this,
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  PaymentHistoryMaster___c_c *v17; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v20; // x21
  struct PaymentHistoryMaster___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_List_TOutput__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  PaymentHistoryMaster___c_c *v32; // x8
  System_Collections_Generic_List_object__o *v33; // x19
  System_Comparison_T__o *_9__1_1; // x20
  Il2CppObject *v35; // x21
  struct PaymentHistoryMaster___c_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B1661E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_PaymentHistoryEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Converter_DataEntityBase__PaymentHistoryEntity__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PaymentHistoryEntity__Sort__, v7, v8);
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__PaymentHistoryEntity___, v9, v10);
    sub_1BCA7E0(&Method_PaymentHistoryMaster___c__GetEntityList_b__1_0__, v11, v12);
    sub_1BCA7E0(&Method_PaymentHistoryMaster___c__GetEntityList_b__1_1__, v13, v14);
    sub_1BCA7E0(&PaymentHistoryMaster___c_TypeInfo, v15, v16);
    byte_4B1661E = 1;
  }
  v17 = PaymentHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !PaymentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryMaster___c_TypeInfo, method);
    v17 = PaymentHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v17->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, method);
      v17 = PaymentHistoryMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                       System_Converter_DataEntityBase__PaymentHistoryEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
    System_Converter_object__object____ctor(_9__1_0, v20, Method_PaymentHistoryMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = PaymentHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_DataEntityBase__PaymentHistoryEntity__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_2F98238 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__PaymentHistoryEntity___);
  v32 = PaymentHistoryMaster___c_TypeInfo;
  v33 = (System_Collections_Generic_List_object__o *)v28;
  if ( !PaymentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PaymentHistoryMaster___c_TypeInfo, v29);
    v32 = PaymentHistoryMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Comparison_T__o *)v32->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v29);
      v32 = PaymentHistoryMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__1_1 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_PaymentHistoryEntity__TypeInfo, v29, v30, v31);
    System_Comparison_object____ctor(_9__1_1, v35, Method_PaymentHistoryMaster___c__GetEntityList_b__1_1__, 0LL);
    v36 = PaymentHistoryMaster___c_TypeInfo->static_fields;
    v36->__9__1_1 = (struct System_Comparison_PaymentHistoryEntity__o *)_9__1_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v36->__9__1_1, (int64_t)_9__1_1, v37, v38, v39, v40, v41, v42);
  }
  if ( !v33 )
    sub_1BCAA3C(v28, v29);
  System_Collections_Generic_List_object___Sort_56244000(
    v33,
    _9__1_1,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__Sort__);
  return (System_Collections_Generic_List_PaymentHistoryEntity__o *)v33;
}


System_Collections_Generic_IEnumerator_PaymentHistoryEntity__o *__fastcall PaymentHistoryMaster__GetEnumerator(
        PaymentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1661F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__, v4, v5);
    byte_4B1661F = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)PaymentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1BCAA3C(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    &v10,
    EntityList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
  v9 = v10;
  return (System_Collections_Generic_IEnumerator_PaymentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                             System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__TypeInfo,
                                                                             &v9);
}


void __fastcall PaymentHistoryMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16620 & 1) == 0 )
  {
    sub_1BCA7E0(&PaymentHistoryMaster___c_TypeInfo, v1, v2);
    byte_4B16620 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PaymentHistoryMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PaymentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct PaymentHistoryMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PaymentHistoryMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B16621 & 1) == 0 )
  {
    sub_1BCA7E0(&PaymentHistoryEntity_TypeInfo, entity, method);
    byte_4B16621 = 1;
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
    sub_1BCAA3C(this, a);
  return a->fields.idx - b->fields.idx;
}