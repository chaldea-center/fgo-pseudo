void ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939249 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
    byte_5939249 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    47,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool ShopMaster__CheckExistsPayType(ShopMaster_o *this, int32_t eventId, int32_t payType, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  bool v11; // w25

  if ( (byte_593925A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    byte_593925A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list[1].klass) != eventId || HIDWORD(list[2].fields.items) != payType )
      {
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_14:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool ShopMaster__CloseLimitEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t EventShopBaseShopId; // w0
  const MethodInfo *v5; // x2

  EventShopBaseShopId = ShopMaster__GetEventShopBaseShopId(this, eventId, method);
  if ( EventShopBaseShopId )
    LOBYTE(EventShopBaseShopId) = ShopMaster__IsPurchaseCloseEventShopItem(this, EventShopBaseShopId, v5);
  return EventShopBaseShopId;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *ShopMaster__GetEnableEntitiyList(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v8; // x1
  int64_t v9; // x22
  System_Collections_Generic_List_object__o *v10; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  ShopEntity_o *v23; // x0
  const MethodInfo *v24; // x2
  ShopEntity_o *v25; // x23
  const MethodInfo *v26; // x1
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v45; // x21
  struct ShopMaster___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_IEnumerator_T__o *v54; // [xsp+18h] [xbp-48h]

  if ( (byte_593924A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&System_Comparison_ShopEntity__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__);
    sub_21FFC50(&ShopMaster___c_TypeInfo);
    byte_593924A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&purchaseType);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_54;
  v9 = Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (int64_t)this->fields.list;
  if ( !Time )
    goto LABEL_54;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Time,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  v54 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v12);
  for ( i = Enumerator; ; i = v54 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_13;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            i,
            *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v54 )
      sub_21FFECC(v18, v8);
    v19 = v54->klass;
    v20 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_21;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_21:
      v22 = sub_2237E2C(v54, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v23 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            v54,
                            *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( v23
      && !v23->fields.eventId
      && (purchaseType < 1 || v23->fields.purchaseType == purchaseType)
      && v23->fields.shopType == shopType
      && ShopEntity__IsEnable(v23, v9, v24) )
    {
      IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v25, v26);
      if ( !IsHiddenInCaseOfBuying )
      {
        if ( !v10
          || (items = v10->fields._items,
              v36 = Method_System_Collections_Generic_List_ShopEntity__Add__,
              ++v10->fields._version,
              !items) )
        {
          sub_21FFECC(IsHiddenInCaseOfBuying, v28);
        }
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v25,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v25;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v25, v29, v30, v31, v32, v33, v34);
        }
      }
    }
  }
  if ( v54 )
  {
    v39 = v54->klass;
    v40 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_41;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_41:
      v42 = sub_2237E2C(v54, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(v54, *(_QWORD *)(v42 + 8));
  }
  Time = (int64_t)ShopMaster___c_TypeInfo;
  if ( !*(&ShopMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v8);
    Time = (int64_t)ShopMaster___c_TypeInfo;
  }
  static_fields = *(struct ShopMaster___c_StaticFields **)(Time + 184);
  _9__1_0 = (System_Comparison_T__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v8);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v45, Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, 0);
    v46 = ShopMaster___c_TypeInfo->static_fields;
    v46->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v46->__9__1_0, (int32_t)_9__1_0, v47, v48, v49, v50, v51, v52);
  }
  if ( !v10 )
LABEL_54:
    sub_21FFECC(Time, v8);
  System_Collections_Generic_List_object___Sort_71636404(
    v10,
    _9__1_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v10,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *ShopMaster__GetEnableEntitiyList_49818968(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        int32_t flag,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v10; // x1
  int64_t v11; // x24
  System_Collections_Generic_List_object__o *v12; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  ShopEntity_o *v25; // x0
  const MethodInfo *v26; // x2
  ShopEntity_o *v27; // x25
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  _BOOL8 IsOpenPurchaseCloseShop; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v48; // x21
  struct ShopMaster___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_IEnumerator_T__o *v57; // [xsp+18h] [xbp-58h]

  if ( (byte_593924B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&System_Comparison_ShopEntity__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__);
    sub_21FFC50(&ShopMaster___c_TypeInfo);
    byte_593924B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&purchaseType);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_55;
  v11 = Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (int64_t)this->fields.list;
  if ( !Time )
    goto LABEL_55;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Time,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  v57 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v14);
  for ( i = Enumerator; ; i = v57 )
  {
    klass = i->klass;
    v17 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_13;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v19 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            i,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v57 )
      sub_21FFECC(v20, v10);
    v21 = v57->klass;
    v22 = *(unsigned __int16 *)&v57->klass->_2.rank;
    if ( *(_WORD *)&v57->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_21;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_21:
      v24 = sub_2237E2C(v57, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v25 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            v57,
                            *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( v25
      && (v25->fields.flag & flag) != 0
      && (purchaseType < 1 || v25->fields.purchaseType == purchaseType)
      && v25->fields.shopType == shopType
      && ShopEntity__IsEnable(v25, v11, v26)
      && !ShopEntity__IsHiddenInCaseOfBuying(v27, v28) )
    {
      IsOpenPurchaseCloseShop = ShopMaster__IsOpenPurchaseCloseShop(this, v27, v29);
      if ( !IsOpenPurchaseCloseShop )
      {
        if ( !v12
          || (items = v12->fields._items,
              v39 = Method_System_Collections_Generic_List_ShopEntity__Add__,
              ++v12->fields._version,
              !items) )
        {
          sub_21FFECC(IsOpenPurchaseCloseShop, v31);
        }
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v27,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v27;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v27, v32, v33, v34, v35, v36, v37);
        }
      }
    }
  }
  if ( v57 )
  {
    v42 = v57->klass;
    v43 = *(unsigned __int16 *)&v57->klass->_2.rank;
    if ( *(_WORD *)&v57->klass->_2.rank )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_43;
      }
      v45 = (__int64)&v42->vtable[*v44];
    }
    else
    {
LABEL_43:
      v45 = sub_2237E2C(v57, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(v57, *(_QWORD *)(v45 + 8));
  }
  Time = (int64_t)ShopMaster___c_TypeInfo;
  if ( !*(&ShopMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v10);
    Time = (int64_t)ShopMaster___c_TypeInfo;
  }
  static_fields = *(struct ShopMaster___c_StaticFields **)(Time + 184);
  _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v10);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v48, Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, 0);
    v49 = ShopMaster___c_TypeInfo->static_fields;
    v49->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->__9__2_0, (int32_t)_9__2_0, v50, v51, v52, v53, v54, v55);
  }
  if ( !v12 )
LABEL_55:
    sub_21FFECC(Time, v10);
  System_Collections_Generic_List_object___Sort_71636404(
    v12,
    _9__2_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v12,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *ShopMaster__GetEnableEntitiyList_49820452(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t payType,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v8; // x1
  int64_t v9; // x22
  System_Collections_Generic_List_object__o *v10; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  ShopEntity_o *v23; // x0
  const MethodInfo *v24; // x2
  ShopEntity_o *v25; // x23
  const MethodInfo *v26; // x1
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v45; // x21
  struct ShopMaster___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_IEnumerator_T__o *v54; // [xsp+18h] [xbp-48h]

  if ( (byte_593924C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&System_Comparison_ShopEntity__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__);
    sub_21FFC50(&ShopMaster___c_TypeInfo);
    byte_593924C = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&purchaseType);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_54;
  v9 = Time;
  System_Collections_ObjectModel_Collection_object___get_Count(
    (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
    (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (int64_t)this->fields.list;
  if ( !Time )
    goto LABEL_54;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Time,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  v54 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v12);
  for ( i = Enumerator; ; i = v54 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_13;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            i,
            *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v54 )
      sub_21FFECC(v18, v8);
    v19 = v54->klass;
    v20 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_21;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_21:
      v22 = sub_2237E2C(v54, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v23 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            v54,
                            *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( v23
      && !v23->fields.eventId
      && (purchaseType < 1 || v23->fields.purchaseType == purchaseType)
      && v23->fields.payType == payType
      && ShopEntity__IsEnable(v23, v9, v24) )
    {
      IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v25, v26);
      if ( !IsHiddenInCaseOfBuying )
      {
        if ( !v10
          || (items = v10->fields._items,
              v36 = Method_System_Collections_Generic_List_ShopEntity__Add__,
              ++v10->fields._version,
              !items) )
        {
          sub_21FFECC(IsHiddenInCaseOfBuying, v28);
        }
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v25,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v25;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v25, v29, v30, v31, v32, v33, v34);
        }
      }
    }
  }
  if ( v54 )
  {
    v39 = v54->klass;
    v40 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_41;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_41:
      v42 = sub_2237E2C(v54, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(v54, *(_QWORD *)(v42 + 8));
  }
  Time = (int64_t)ShopMaster___c_TypeInfo;
  if ( !*(&ShopMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v8);
    Time = (int64_t)ShopMaster___c_TypeInfo;
  }
  static_fields = *(struct ShopMaster___c_StaticFields **)(Time + 184);
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v8);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v45, Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, 0);
    v46 = ShopMaster___c_TypeInfo->static_fields;
    v46->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v46->__9__3_0, (int32_t)_9__3_0, v47, v48, v49, v50, v51, v52);
  }
  if ( !v10 )
LABEL_54:
    sub_21FFECC(Time, v8);
  System_Collections_Generic_List_object___Sort_71636404(
    v10,
    _9__3_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v10,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *ShopMaster__GetEnableEventEntitiyList(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 v7; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  ShopEntity_o *Item; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x25
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x19
  Il2CppObject *v27; // x20
  struct ShopMaster___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_593924E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_21FFC50(&System_Comparison_ShopEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__5_0__);
    sub_21FFC50(&ShopMaster___c_TypeInfo);
    byte_593924E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v11,
                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v14 = (Il2CppObject *)Item;
        if ( Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, v13);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v6 )
              break;
            items = v6->fields._items;
            v22 = Method_System_Collections_Generic_List_ShopEntity__Add__;
            ++v6->fields._version;
            if ( !items )
              break;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                v14,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v14;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_18;
    }
LABEL_26:
    sub_21FFECC(list, v7);
  }
LABEL_18:
  list = ShopMaster___c_TypeInfo;
  if ( !*(&ShopMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v7);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v7);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v27, Method_ShopMaster___c__GetEnableEventEntitiyList_b__5_0__, 0);
    v28 = ShopMaster___c_TypeInfo->static_fields;
    v28->__9__5_0 = (struct System_Comparison_ShopEntity__o *)_9__5_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__5_0, (int32_t)_9__5_0, v29, v30, v31, v32, v33, v34);
  }
  if ( !v6 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_71636404(
    v6,
    _9__5_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *ShopMaster__GetEnableEventEntityList(
        ShopMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  int64_t Time; // x23
  System_Collections_Generic_List_object__o *v8; // x22
  const MethodInfo *v9; // x1
  void *list; // x0
  __int64 v11; // x1
  int32_t Count; // w24
  Il2CppObject *Master_object; // x0
  ShopAddMaster_o *v14; // x25
  int32_t v15; // w26
  ShopEntity_o *Item; // x0
  const MethodInfo *v17; // x2
  ShopEntity_o *v18; // x27
  const MethodInfo *v19; // x2
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__6_0; // x19
  Il2CppObject *v32; // x20
  struct ShopMaster___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_593924F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_21FFC50(&System_Comparison_ShopEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ShopMaster___c__GetEnableEventEntityList_b__6_0__);
    sub_21FFC50(&ShopMaster___c_TypeInfo);
    byte_593924F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopAddMaster___);
  if ( Count >= 1 )
  {
    v14 = (ShopAddMaster_o *)Master_object;
    v15 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               (System_Collections_ObjectModel_Collection_T__o *)list,
                               v15,
                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        v18 = Item;
        if ( Item->fields.eventId == eventId && Item->fields.slot == slot )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, v17);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v14 )
              break;
            if ( !ShopAddMaster__IsItemHidden(v14, v18->fields.id, v19) )
            {
              list = (void *)ShopEntity__IsHiddenInCaseOfBuyingShopId(v18, v9);
              if ( ((unsigned __int8)list & 1) == 0 )
              {
                if ( !v8 )
                  break;
                items = v8->fields._items;
                v27 = Method_System_Collections_Generic_List_ShopEntity__Add__;
                ++v8->fields._version;
                if ( !items )
                  break;
                size = v8->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)v18,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                }
                else
                {
                  v29 = &items->obj.klass + size;
                  v8->fields._size = size + 1;
                  v29[4] = (Il2CppClass *)v18;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v18, v20, v21, v22, v23, v24, v25);
                }
              }
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_24;
    }
LABEL_32:
    sub_21FFECC(list, v9);
  }
LABEL_24:
  list = ShopMaster___c_TypeInfo;
  if ( !*(&ShopMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v9);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__6_0 = (System_Comparison_T__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v9);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v32, Method_ShopMaster___c__GetEnableEventEntityList_b__6_0__, 0);
    v33 = ShopMaster___c_TypeInfo->static_fields;
    v33->__9__6_0 = (struct System_Comparison_ShopEntity__o *)_9__6_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->__9__6_0, (int32_t)_9__6_0, v34, v35, v36, v37, v38, v39);
  }
  if ( !v8 )
    goto LABEL_32;
  System_Collections_Generic_List_object___Sort_71636404(
    v8,
    _9__6_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v8,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


bool ShopMaster__GetEnableEventPeriod(
        ShopMaster_o *this,
        int64_t *openedAt,
        int64_t *closedAt,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int64_t Time; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  Il2CppObject *Item; // x0
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_5939251 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5939251 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, openedAt);
  Time = NetworkManager__getTime(0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  *openedAt = -1;
  *closedAt = -1;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v14,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( Item )
      {
        if ( LODWORD(Item[1].monitor) == eventId )
        {
          klass = (int64_t)Item[8].klass;
          if ( klass <= Time )
          {
            if ( *openedAt < 0 || *openedAt > klass )
              *openedAt = klass;
            if ( *closedAt )
            {
              monitor = (int64_t)Item[8].monitor;
              if ( !monitor || *closedAt < monitor )
                *closedAt = monitor;
            }
          }
        }
      }
      if ( v13 == ++v14 )
        return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
    }
LABEL_23:
    sub_21FFECC(list, v9);
  }
  return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *ShopMaster__GetEnableExchangeSvtCoinEntitiyList(
        ShopMaster_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x1
  void *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  ShopEntity_o *v21; // x0
  const MethodInfo *v22; // x2
  ShopEntity_o *v23; // x22
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v44; // x21
  struct ShopMaster___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_IEnumerator_T__o *v53; // [xsp+18h] [xbp-48h]

  if ( (byte_5939250 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_21FFC50(&System_Comparison_ShopEntity__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ShopMaster___c__GetEnableExchangeSvtCoinEntitiyList_b__7_0__);
    sub_21FFC50(&ShopMaster___c_TypeInfo);
    byte_5939250 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtCoinType);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  v53 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v10);
  for ( i = Enumerator; ; i = v53 )
  {
    klass = i->klass;
    v13 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            i,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v53 )
      sub_21FFECC(v16, v7);
    v17 = v53->klass;
    v18 = *(unsigned __int16 *)&v53->klass->_2.rank;
    if ( *(_WORD *)&v53->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_20;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_20:
      v20 = sub_2237E2C(v53, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v21 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            v53,
                            *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( v21 )
    {
      if ( !v21->fields.eventId
        && v21->fields.shopType == 17
        && ShopEntity__IsEnable(v21, Time, v22)
        && ShopEntity__GetExchangeSvtCoinType(v23, v24) == svtCoinType )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v23, v25);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v6
            || (items = v6->fields._items,
                v35 = Method_System_Collections_Generic_List_ShopEntity__Add__,
                ++v6->fields._version,
                !items) )
          {
            sub_21FFECC(IsHiddenInCaseOfBuying, v27);
          }
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v23,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v23;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)v23, v28, v29, v30, v31, v32, v33);
          }
        }
      }
    }
  }
  if ( v53 )
  {
    v38 = v53->klass;
    v39 = *(unsigned __int16 *)&v53->klass->_2.rank;
    if ( *(_WORD *)&v53->klass->_2.rank )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_40;
      }
      v41 = (__int64)&v38->vtable[*v40];
    }
    else
    {
LABEL_40:
      v41 = sub_2237E2C(v53, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(v53, *(_QWORD *)(v41 + 8));
  }
  list = ShopMaster___c_TypeInfo;
  if ( !*(&ShopMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v7);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__7_0 = (System_Comparison_T__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v7);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__7_0,
      v44,
      Method_ShopMaster___c__GetEnableExchangeSvtCoinEntitiyList_b__7_0__,
      0);
    v45 = ShopMaster___c_TypeInfo->static_fields;
    v45->__9__7_0 = (struct System_Comparison_ShopEntity__o *)_9__7_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->__9__7_0, (int32_t)_9__7_0, v46, v47, v48, v49, v50, v51);
  }
  if ( !v6 )
LABEL_52:
    sub_21FFECC(list, v7);
  System_Collections_Generic_List_object___Sort_71636404(
    v6,
    _9__7_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_o *ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  ShopEntity_o *v19; // x20
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__o *v25; // [xsp+18h] [xbp-28h]

  if ( (byte_5939259 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5939259 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  v25 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v5);
  for ( i = Enumerator; ; i = v25 )
  {
    klass = i->klass;
    v8 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            i,
            *(_QWORD *)(v10 + 8));
    if ( (v11 & 1) == 0 )
      break;
    if ( !v25 )
      sub_21FFECC(v11, v12);
    v13 = v25->klass;
    v14 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_2237E2C(v25, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v25,
            *(_QWORD *)(v16 + 8));
    v19 = (ShopEntity_o *)v17;
    if ( !v17 )
      sub_21FFECC(0, v18);
    if ( *(_DWORD *)(v17 + 72) == 6 && *(_DWORD *)(v17 + 68) == 8 )
      goto LABEL_26;
  }
  v19 = 0;
LABEL_26:
  if ( v25 )
  {
    v20 = v25->klass;
    v21 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_31;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_31:
      v23 = sub_2237E2C(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(v25, *(_QWORD *)(v23 + 8));
  }
  return v19;
}


ShopEntity_array *ShopMaster__GetEventEntitiyList(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v23; // x21
  struct ShopMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_593924D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_21FFC50(&System_Comparison_ShopEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__);
    sub_21FFC50(&ShopMaster___c_TypeInfo);
    byte_593924D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_ShopEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  list = ShopMaster___c_TypeInfo;
  if ( !*(&ShopMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, v6);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v23, Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, 0);
    v24 = ShopMaster___c_TypeInfo->static_fields;
    v24->__9__4_0 = (struct System_Comparison_ShopEntity__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__4_0, (int32_t)_9__4_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_71636404(
    v5,
    _9__4_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ShopMaster__GetEventItemList(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  void *list; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  Il2CppObject *IsHideItem; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x22
  Il2CppClass *v24; // x8
  const char *namespaze; // x8
  unsigned __int64 v26; // x29
  __int64 v27; // x25
  Il2CppClass *v28; // x8
  int32_t v29; // w2
  int32_t v30; // w23
  Il2CppClass *v31; // x8
  Il2CppClass *v32; // x8
  Il2CppObject *Entity; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  __int64 v45; // x20
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__9_0; // x20
  Il2CppObject *v52; // x21
  struct ShopMaster___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x21
  unsigned __int64 v61; // x22
  unsigned __int64 v62; // x9
  System_Collections_Generic_IEnumerator_T__o *v64; // [xsp+18h] [xbp-68h]

  if ( (byte_5939252 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&System_Comparison_ItemEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_ShopMaster___c__GetEventItemList_b__9_0__);
    sub_21FFC50(&ShopMaster___c_TypeInfo);
    byte_5939252 = 1;
  }
  if ( eventId < 1 )
    return 0;
  list = this->fields.list;
  if ( !list )
    goto LABEL_84;
  if ( !System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)list,
          (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__) )
    return 0;
  list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_84;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  v64 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v64 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_14;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v64 )
      sub_21FFECC(v15, *(_QWORD *)&eventId);
    v16 = v64->klass;
    v17 = *(unsigned __int16 *)&v64->klass->_2.rank;
    if ( *(_WORD *)&v64->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_22;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_22:
      v19 = sub_2237E2C(v64, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    IsHideItem = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                   v64,
                                   *(_QWORD *)(v19 + 8));
    v23 = IsHideItem;
    if ( !IsHideItem )
      sub_21FFECC(0, v21);
    if ( LODWORD(IsHideItem[1].monitor) == eventId )
    {
      v24 = IsHideItem[2].klass;
      if ( !v24 )
        sub_21FFECC(IsHideItem, v21);
      namespaze = v24->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v26 = 0;
        v27 = (unsigned int)namespaze;
        do
        {
          v28 = v23[2].klass;
          if ( !v28 )
            sub_21FFECC(IsHideItem, v21);
          if ( v26 >= LODWORD(v28->_1.namespaze) )
            sub_21FFED4(IsHideItem);
          v29 = *((_DWORD *)&v28->_1.byval_arg.data + v26);
          if ( v29 >= 1 )
          {
            IsHideItem = (Il2CppObject *)ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v29, v22);
            if ( ((unsigned __int8)IsHideItem & 1) == 0 )
            {
              if ( !v7 )
                sub_21FFECC(IsHideItem, v21);
              if ( v7->fields._size < 1 )
              {
LABEL_41:
                v32 = v23[2].klass;
                if ( !v32 )
                  sub_21FFECC(IsHideItem, v21);
                if ( v26 >= LODWORD(v32->_1.namespaze) )
                  sub_21FFED4(IsHideItem);
                if ( !MasterData_object )
                  sub_21FFECC(IsHideItem, v21);
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           *((_DWORD *)&v32->_1.byval_arg.data + v26),
                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                v40 = Entity;
                items = v7->fields._items;
                v42 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v7->fields._version;
                if ( !items )
                  sub_21FFECC(Entity, Entity);
                size = v7->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    Entity,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                }
                else
                {
                  v44 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v44[4] = (Il2CppClass *)v40;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v40, v34, v35, v36, v37, v38, v39);
                }
              }
              else
              {
                v30 = 0;
                while ( 1 )
                {
                  IsHideItem = System_Collections_Generic_List_object___get_Item(
                                 v7,
                                 v30,
                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
                  if ( !IsHideItem )
                    sub_21FFECC(0, v21);
                  v31 = v23[2].klass;
                  if ( !v31 )
                    sub_21FFECC(IsHideItem, v21);
                  if ( v26 >= LODWORD(v31->_1.namespaze) )
                    sub_21FFED4(IsHideItem);
                  if ( LODWORD(IsHideItem[1].klass) == *((_DWORD *)&v31->_1.byval_arg.data + v26) )
                    break;
                  if ( ++v30 >= v7->fields._size )
                    goto LABEL_41;
                }
              }
            }
          }
          ++v26;
        }
        while ( v26 != v27 );
      }
    }
  }
  if ( v64 )
  {
    v46 = v64->klass;
    v47 = *(unsigned __int16 *)&v64->klass->_2.rank;
    if ( *(_WORD *)&v64->klass->_2.rank )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_57;
      }
      v49 = (__int64)&v46->vtable[*v48];
    }
    else
    {
LABEL_57:
      v49 = sub_2237E2C(v64, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(v64, *(_QWORD *)(v49 + 8));
  }
  list = ShopMaster___c_TypeInfo;
  if ( !*(&ShopMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo, *(_QWORD *)&eventId);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__9_0 = (System_Comparison_T__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&eventId);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(_9__9_0, v52, Method_ShopMaster___c__GetEventItemList_b__9_0__, 0);
    v53 = ShopMaster___c_TypeInfo->static_fields;
    v53->__9__9_0 = (struct System_Comparison_ItemEntity__o *)_9__9_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v53->__9__9_0, (int32_t)_9__9_0, v54, v55, v56, v57, v58, v59);
  }
  if ( !v7 )
LABEL_84:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  System_Collections_Generic_List_object___Sort_71636404(
    v7,
    _9__9_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v60 = (unsigned int)v7->fields._size;
  v45 = sub_21FFD10(int___TypeInfo, (unsigned int)v60);
  if ( (int)v60 >= 1 )
  {
    v61 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v7,
               v61,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !list || !v45 )
        break;
      if ( v61 >= *(unsigned int *)(v45 + 24) )
        sub_21FFED4(list);
      v62 = v45 + 4 * v61++;
      *(_DWORD *)(v62 + 32) = *((_DWORD *)list + 4);
      if ( v60 == v61 )
        return (System_Int32_array *)v45;
    }
    goto LABEL_84;
  }
  return (System_Int32_array *)v45;
}


int32_t ShopMaster__GetEventShopBaseShopId(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  il2cpp_array_size_t max_length; // x8
  ShopEntity_o *v9; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939257 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939257 = 1;
  }
  entity = 0;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (ShopEntity_array *)entity;
    if ( !entity )
      goto LABEL_15;
    if ( !EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)entity, 0) )
      goto LABEL_13;
  }
  Instance = ShopMaster__GetEnableEventEntitiyList(this, eventId, v7);
  if ( !Instance )
    return (int)Instance;
  max_length = Instance->max_length;
  if ( !max_length )
  {
LABEL_13:
    LODWORD(Instance) = 0;
    return (int)Instance;
  }
  if ( !(_DWORD)max_length )
    sub_21FFED4(Instance);
  v9 = Instance->m_Items[0];
  if ( !v9 )
LABEL_15:
    sub_21FFECC(Instance, v6);
  LODWORD(Instance) = v9->fields.baseShopId;
  return (int)Instance;
}


int32_t ShopMaster__GetFragmentCountToExchangeForStone(ShopMaster_o *this, const MethodInfo *method)
{
  ShopEntity_o *EntityOfFragmentsShop; // x0
  __int64 v3; // x1
  struct System_Int32_array *prices; // x8
  il2cpp_array_size_t max_length; // x9

  EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop(this, method);
  if ( EntityOfFragmentsShop )
  {
    prices = EntityOfFragmentsShop->fields.prices;
    if ( !prices )
      sub_21FFECC(EntityOfFragmentsShop, v3);
    max_length = prices->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_21FFED4(EntityOfFragmentsShop);
      LODWORD(EntityOfFragmentsShop) = prices->m_Items[0];
    }
    else
    {
      LODWORD(EntityOfFragmentsShop) = 0;
    }
  }
  return (int)EntityOfFragmentsShop;
}


// local variable allocation has failed, the output may be wrong!
bool ShopMaster__IsEnableEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w24

  if ( (byte_5939258 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    byte_5939258 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list[1].klass) != eventId )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool ShopMaster__IsEnableEventShop_49829504(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x20
  Il2CppObject *Master_object; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  UserShopMaster_o *v9; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *v12; // x23
  char v13; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  ShopEntity_o *v24; // x0
  const MethodInfo *v25; // x2
  ShopEntity_o *v26; // x23
  __int64 v27; // x1
  NetworkManager_c *v28; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  bool v32; // w0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-58h]

  if ( (byte_593925B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593925B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserShopMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(v6, v7);
  v9 = (UserShopMaster_o *)v6;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v11);
  v12 = Enumerator;
  v13 = 0;
  while ( 1 )
  {
    klass = v12->klass;
    v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_14;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v17 = sub_2237E2C(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            v12,
            *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v38 )
      sub_21FFECC(v18, v19);
    v20 = v38->klass;
    v21 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ShopEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_22;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_22:
      v23 = sub_2237E2C(v38, System_Collections_Generic_IEnumerator_ShopEntity__TypeInfo, 0);
    }
    v24 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                            v38,
                            *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( v24 && v24->fields.shopType == 12 && ShopEntity__IsEnable(v24, Time, v25) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      v28 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
        v28 = NetworkManager_TypeInfo;
      }
      if ( !v9 )
        sub_21FFECC(v28, v27);
      EntityDefinitely = UserShopMaster__GetEntityDefinitely(v9, v28->static_fields->userIdNumber, v26->fields.id, 0);
      if ( EntityDefinitely && EntityDefinitely->fields.num >= v26->fields.limitNum )
      {
        v13 = 0;
        break;
      }
      if ( !Master_object )
        sub_21FFECC(EntityDefinitely, v30);
      v32 = ShopReleaseMaster__CondClearCheck((ShopReleaseMaster_o *)Master_object, v26->fields.id, 1, v31);
      v12 = v38;
      v13 |= v32;
    }
    else
    {
      v12 = v38;
    }
  }
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_45;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_45:
      v36 = sub_2237E2C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v38, *(_QWORD *)(v36 + 8));
  }
  return v13 & 1;
}


bool ShopMaster__IsEventShopOpen(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  __int64 v7; // x1
  _BOOL4 v8; // w21
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  _BOOL4 v11; // w20
  const MethodInfo *v13; // x2
  int v14; // w8
  Il2CppObject *v15; // x20
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x21
  Il2CppObject *v19; // x8
  System_Func_object__bool__o *v20; // x22
  Il2CppObject *v21; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int64_t closedAt; // [xsp+18h] [xbp-48h] BYREF
  int64_t openedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_593925C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_All_ShopEntity___);
    sub_21FFC50(&System_Func_ShopEntity__bool__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TitleInfoControl_TypeInfo);
    sub_21FFC50(&Method_ShopMaster___c__DisplayClass21_0__IsEventShopOpen_b__0__);
    sub_21FFC50(&ShopMaster___c__DisplayClass21_0_TypeInfo);
    byte_593925C = 1;
  }
  openedAt = 0;
  entity = 0;
  closedAt = 0;
  v21 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_39;
  ShopMaster__GetEnableEventPeriod((ShopMaster_o *)Instance, &openedAt, &closedAt, eventId, v6);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( closedAt < 1 )
    goto LABEL_12;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_39;
  if ( EventEntity__isPurchaseEventOpen((EventEntity_o *)entity, 0) )
  {
LABEL_12:
    v8 = 0;
  }
  else
  {
    v15 = (Il2CppObject *)sub_21FFEBC(ShopMaster___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor(v15, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !Instance )
      goto LABEL_39;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              eventId,
                                                                              v16);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !v15 )
      goto LABEL_39;
    v19 = entity;
    v15[1].klass = (Il2CppClass *)Instance;
    if ( !v19 )
      goto LABEL_39;
    if ( (__int64)Instance <= (__int64)v19[6].monitor )
    {
      v20 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(v20, v15, Method_ShopMaster___c__DisplayClass21_0__IsEventShopOpen_b__0__, 0);
      v8 = System_Linq_Enumerable__All_object_(
             EventEntitiyList,
             (System_Func_TSource__bool__o *)v20,
             (const MethodInfo_3831808 *)Method_System_Linq_Enumerable_All_ShopEntity___);
    }
    else
    {
      v8 = 1;
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v21,
          eventId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Instance = (DataManager_o *)v21;
  if ( !v21 )
    goto LABEL_39;
  if ( EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v21, 0) )
  {
    v10 = v21;
    if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v9);
    v11 = !TitleInfoControl__IsEnableEventShopButton_46896112((EventDetailEntity_o *)v10, 0);
  }
  else
  {
LABEL_22:
    v11 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
LABEL_39:
    sub_21FFECC(Instance, v5);
  }
  v14 = ShopMaster__CloseLimitEventShop((ShopMaster_o *)Instance, eventId, v13) || v11;
  return (v14 | v8) == 0;
}


bool ShopMaster__IsHideItem(ShopMaster_o *this, int32_t eventId, int32_t id, const MethodInfo *method)
{
  EventItemDisplayEntity_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  EventItemDisplayEntity_o **i; // x9
  EventItemDisplayEntity_o *v10; // x10

  if ( (byte_5939253 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventItemDisplayMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939253 = 1;
  }
  Instance = (EventItemDisplayEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventItemDisplayEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0 )
  {
LABEL_14:
    sub_21FFECC(Instance, v7);
  }
  Instance = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
               (EventItemDisplayMaster_o *)Instance,
               eventId,
               8,
               0,
               0);
  if ( !Instance )
    return 1;
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 1;
  for ( i = Instance->m_Items; ; ++i )
  {
    v10 = *i;
    if ( !*i )
      goto LABEL_14;
    if ( v10->fields.targetId == id && v10->fields.pointType == 1 )
      break;
    if ( !--max_length )
      return 1;
  }
  return 0;
}


bool ShopMaster__IsOpenPurchaseCloseShop(ShopMaster_o *this, ShopEntity_o *shopEntity, const MethodInfo *method)
{
  ShopMaster_o *v4; // x20
  int32_t eventId; // w21
  Il2CppObject *Entity; // x0

  v4 = this;
  if ( (byte_5939254 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (ShopMaster_o *)sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    byte_5939254 = 1;
  }
  if ( !shopEntity )
    goto LABEL_13;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
    this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( this )
    {
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 eventId,
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0) )
        return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_13:
    sub_21FFECC(this, shopEntity);
  }
  if ( shopEntity->fields.shopType != 16 )
    return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool ShopMaster__IsPurchaseCloseEventShopItem(ShopMaster_o *this, int32_t baseShopId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w23
  System_Collections_ObjectModel_Collection_T__o *v9; // x20
  const MethodInfo *v11; // x2
  ShopReleaseMaster_o *v12; // x21
  int32_t TargetShopGroupId; // w22
  const MethodInfo *v14; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  const MethodInfo *v16; // x3
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_5939256 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939256 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Count__);
  if ( Count < 1 )
    return 1;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ShopEntity__get_Item__);
    if ( !list )
      goto LABEL_29;
    v9 = list;
    if ( HIDWORD(list->fields.items) == baseShopId )
      break;
    if ( v7 == ++v8 )
      return 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
  if ( !list )
    goto LABEL_29;
  v12 = (ShopReleaseMaster_o *)list;
  TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId((ShopReleaseMaster_o *)list, baseShopId, v11);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !list )
    goto LABEL_29;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)list, TargetShopGroupId, v14);
  if ( TargetEntityList && TargetEntityList->max_length )
    return ShopReleaseMaster__CondClearCheck(v12, baseShopId, 82, v16);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&baseShopId);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&baseShopId);
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_29:
    sub_21FFECC(list, *(_QWORD *)&baseShopId);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)list[7].fields.items[4].klass,
                       baseShopId,
                       0);
  return EntityDefinitely && EntityDefinitely->fields.num >= SLODWORD(v9[3].fields.items);
}


bool ShopMaster__PurchaseCloseEventShop(ShopMaster_o *this, ShopEntity_o *shopEntity, const MethodInfo *method)
{
  int32_t eventId; // w20
  Il2CppObject *Entity; // x0

  if ( (byte_5939255 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (ShopMaster_o *)sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    byte_5939255 = 1;
  }
  if ( !shopEntity )
    goto LABEL_11;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
  this = (ShopMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !this )
LABEL_11:
    sub_21FFECC(this, shopEntity);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             eventId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)Entity, 0);
  return shopEntity->fields.shopType == 12;
}


void ShopMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593925D & 1) == 0 )
  {
    sub_21FFC50(&ShopMaster___c_TypeInfo);
    byte_593925D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ShopMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopMaster___c_TypeInfo->static_fields->__9 = (struct ShopMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ShopMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopMaster___c___ctor(ShopMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ShopMaster___c___GetEnableEntitiyList_b__1_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableEventEntityList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEnableExchangeSvtCoinEntitiyList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t ShopMaster___c___GetEventItemList_b__9_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}


void ShopMaster___c__DisplayClass21_0___ctor(ShopMaster___c__DisplayClass21_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopMaster___c__DisplayClass21_0___IsEventShopOpen_b__0(
        ShopMaster___c__DisplayClass21_0_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.closedAt < this->fields.nowTime;
}