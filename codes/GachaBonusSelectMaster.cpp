void __fastcall GachaBonusSelectMaster___ctor(GachaBonusSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
    byte_4A5B3D4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    189,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
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

  if ( (byte_4A5B3D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
    byte_4A5B3D2 = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&slot);
  return (GachaBonusSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
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

  if ( (byte_4A5B3D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
    byte_4A5B3D3 = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
}


bool __fastcall GachaBonusSelectMaster__TryGetEntityArray(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_array **entityArray,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  GachaBonusSelectMaster___c_c *v34; // x8
  System_Func_object__int__o *_9__3_0; // x21
  Il2CppObject *v36; // x22
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Object_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3

  if ( (byte_4A5B3D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
    sub_1B885B0(&System_Func_GachaBonusSelectEntity__int__TypeInfo);
    sub_1B885B0(&GachaBonusSelectEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
    sub_1B885B0(&Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__);
    sub_1B885B0(&GachaBonusSelectMaster___c_TypeInfo);
    byte_4A5B3D5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20
      || (methodPtr_low = LOBYTE(GachaBonusSelectEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low)
      || *(GachaBonusSelectEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != GachaBonusSelectEntity_TypeInfo )
    {
      sub_1B8880C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 16) == gachaId )
    {
      if ( !v7 )
        sub_1B8880C(v20, v21);
      items = v7->fields._items;
      v27 = Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), v24, v22, v23);
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_31;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_31:
    v33 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  v34 = GachaBonusSelectMaster___c_TypeInfo;
  if ( !GachaBonusSelectMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBonusSelectMaster___c_TypeInfo);
    v34 = GachaBonusSelectMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v34->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = GachaBonusSelectMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_GachaBonusSelectEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v36, Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__, 0LL);
    static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_GachaBonusSelectEntity__int__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
  v41 = System_Linq_Enumerable__ToArray_object_(
          v40,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
  *entityArray = (GachaBonusSelectEntity_array *)v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)entityArray, (int32_t)v41, v42, v43);
  if ( !*entityArray )
LABEL_44:
    sub_1B8880C(list, v8);
  return (*entityArray)->max_length != 0;
}


bool __fastcall GachaBonusSelectMaster__TryGetEntitySlot(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **selectEntity,
        int32_t gachaId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  GachaBonusSelectEntity_o *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 methodPtr_low; // x11
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4A5B3D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&GachaBonusSelectEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B3D6 = 1;
  }
  *selectEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)selectEntity, 0, gachaId, slot);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (GachaBonusSelectEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                        Enumerator,
                                        *(_QWORD *)(v20 + 8));
    if ( !v21
      || (methodPtr_low = LOBYTE(GachaBonusSelectEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (GachaBonusSelectEntity_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaBonusSelectEntity_TypeInfo )
    {
      sub_1B8880C(v21, v22);
    }
    if ( v21->fields.gachaId == gachaId && v21->fields.slot == slot )
    {
      *selectEntity = v21;
      sub_1B88554((ServantStatusBattleListViewItem_o *)selectEntity, (int32_t)v21, v23, v24);
      break;
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_28;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_28:
    v29 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return *selectEntity != 0LL;
}


void __fastcall GachaBonusSelectMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B3D7 & 1) == 0 )
  {
    sub_1B885B0(&GachaBonusSelectMaster___c_TypeInfo);
    byte_4A5B3D7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(GachaBonusSelectMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  GachaBonusSelectMaster___c_TypeInfo->static_fields->__9 = (struct GachaBonusSelectMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)GachaBonusSelectMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.slot;
}