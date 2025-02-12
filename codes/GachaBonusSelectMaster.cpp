void __fastcall GachaBonusSelectMaster___ctor(GachaBonusSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7D2C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__, method);
    byte_4BC7D2C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    193,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBonusSelectEntity_o *__fastcall GachaBonusSelectMaster__GetEntity(
        GachaBonusSelectMaster_o *this,
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7D2A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4BC7D2A = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&slot);
  return (GachaBonusSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_324D130 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBonusSelectMaster__TryGetEntity(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **entity,
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC7D2B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__, entity);
    byte_4BC7D2B = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectEntity__CreatePK(
                         gachaId,
                         gachaBonusId,
                         slot,
                         *(const MethodInfo **)&gachaBonusId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
}


bool __fastcall GachaBonusSelectMaster__TryGetEntityArray(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_array **entityArray,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x20
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x8
  struct System_Object_array *items; // x9
  _QWORD *v41; // x10
  __int64 size; // x11
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  GachaBonusSelectMaster___c_c *v48; // x8
  System_Func_object__int__o *_9__3_0; // x21
  Il2CppObject *v50; // x22
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Object_array *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7

  if ( (byte_4BC7D2D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__, entityArray);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___, v7);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___, v8);
    sub_1C1ABD4(&System_Func_GachaBonusSelectEntity__int__TypeInfo, v9);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, v11);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo, v15);
    sub_1C1ABD4(&Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__, v16);
    sub_1C1ABD4(&GachaBonusSelectMaster___c_TypeInfo, v17);
    byte_4BC7D2D = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    v39 = v31;
    if ( !v31 )
      sub_1C1AE30(0LL, v32);
    if ( *(_DWORD *)(v31 + 16) == gachaId )
    {
      if ( !v18 )
        sub_1C1AE30(v31, v32);
      items = v18->fields._items;
      v41 = Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1C1AE30(v31, v32);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v31,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v39;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 4), v39, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_29;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_29:
    v47 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  v48 = GachaBonusSelectMaster___c_TypeInfo;
  if ( !GachaBonusSelectMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBonusSelectMaster___c_TypeInfo);
    v48 = GachaBonusSelectMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v48->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = GachaBonusSelectMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_GachaBonusSelectEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v50, Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__, 0LL);
    static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_GachaBonusSelectEntity__int__o *)_9__3_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v52, v53, v54, v55, v56, v57);
  }
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_2FC8568 *)Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
  v59 = System_Linq_Enumerable__ToArray_object_(
          v58,
          (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
  *entityArray = (GachaBonusSelectEntity_array *)v59;
  sub_1C1AB78((PartyOrganizationUtility_o *)entityArray, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  if ( !*entityArray )
LABEL_42:
    sub_1C1AE30(list, v19);
  return (*entityArray)->max_length != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBonusSelectMaster__TryGetEntitySlot(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **selectEntity,
        int32_t gachaId,
        int32_t slot,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  GachaBonusSelectEntity_o *v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4BC7D2E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__, selectEntity);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v12);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, v13);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v14);
    byte_4BC7D2E = 1;
  }
  *selectEntity = 0LL;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)selectEntity,
    0LL,
    *(int64_t *)&gachaId,
    slot,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, 0LL);
    }
    v27 = (GachaBonusSelectEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                        Enumerator,
                                        *(_QWORD *)(v26 + 8));
    if ( !v27 )
      sub_1C1AE30(0LL, v28);
    if ( v27->fields.gachaId == gachaId && v27->fields.slot == slot )
    {
      *selectEntity = v27;
      sub_1C1AB78((PartyOrganizationUtility_o *)selectEntity, (int64_t)v27, v29, v30, v31, v32, v33, v34);
      break;
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_26;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_26:
    v38 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return *selectEntity != 0LL;
}


void __fastcall GachaBonusSelectMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC7D2F & 1) == 0 )
  {
    sub_1C1ABD4(&GachaBonusSelectMaster___c_TypeInfo, v1);
    byte_4BC7D2F = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(GachaBonusSelectMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaBonusSelectMaster___c_TypeInfo->static_fields->__9 = (struct GachaBonusSelectMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)GachaBonusSelectMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall GachaBonusSelectMaster___c___ctor(GachaBonusSelectMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaBonusSelectMaster___c___TryGetEntityArray_b__3_0(
        GachaBonusSelectMaster___c_o *this,
        GachaBonusSelectEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.slot;
}