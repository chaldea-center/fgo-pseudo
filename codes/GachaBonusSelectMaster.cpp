void GachaBonusSelectMaster___ctor(GachaBonusSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEA1A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
    byte_4CEEA1A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    193,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBonusSelectEntity_o *GachaBonusSelectMaster__GetEntity(
        GachaBonusSelectMaster_o *this,
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEA18 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
    byte_4CEEA18 = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&slot);
  return (GachaBonusSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3432DB4 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GachaBonusSelectMaster__TryGetEntity(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **entity,
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEA19 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
    byte_4CEEA19 = 1;
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
           (const MethodInfo_3432E00 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
}


bool GachaBonusSelectMaster__TryGetEntityArray(
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
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  GachaBonusSelectMaster___c_c *v37; // x8
  System_Func_object__int__o *_9__3_0; // x21
  Il2CppObject *v39; // x22
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Object_array *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7

  if ( (byte_4CEEA1B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
    sub_1C7BAE8(&System_Func_GachaBonusSelectEntity__int__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
    sub_1C7BAE8(&Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__);
    sub_1C7BAE8(&GachaBonusSelectMaster___c_TypeInfo);
    byte_4CEEA1B = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1C7BD40(0, v21);
    if ( *(_DWORD *)(v20 + 16) == gachaId )
    {
      if ( !v7 )
        sub_1C7BD40(v20, v21);
      items = v7->fields._items;
      v30 = Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C7BD40(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_29;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_29:
    v36 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  v37 = GachaBonusSelectMaster___c_TypeInfo;
  if ( !GachaBonusSelectMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBonusSelectMaster___c_TypeInfo);
    v37 = GachaBonusSelectMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v37->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = GachaBonusSelectMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_GachaBonusSelectEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v39, Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__, 0);
    static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_GachaBonusSelectEntity__int__o *)_9__3_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v41, v42, v43, v44, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_319EF58 *)Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
  v48 = System_Linq_Enumerable__ToArray_object_(
          v47,
          (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
  *entityArray = (GachaBonusSelectEntity_array *)v48;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)entityArray, (int32_t)v48, v49, v50, v51, v52, v53, v54);
  if ( !*entityArray )
LABEL_42:
    sub_1C7BD40(list, v8);
  return LODWORD((*entityArray)->max_length) != 0;
}


bool GachaBonusSelectMaster__TryGetEntitySlot(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **selectEntity,
        int32_t gachaId,
        int32_t slot,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  GachaBonusSelectEntity_o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4CEEA1C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    byte_4CEEA1C = 1;
  }
  *selectEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)selectEntity, 0, gachaId, slot, (System_String_o *)method, v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v19 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8))
        & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_16:
      v23 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, 0);
    }
    v24 = (GachaBonusSelectEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                        Enumerator,
                                        *(_QWORD *)(v23 + 8));
    if ( !v24 )
      sub_1C7BD40(0, v25);
    if ( v24->fields.gachaId == gachaId && v24->fields.slot == slot )
    {
      *selectEntity = v24;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)selectEntity, (int32_t)v24, v26, v27, v28, v29, v30, v31);
      break;
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_26;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_26:
    v35 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return *selectEntity != 0;
}


void GachaBonusSelectMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEEA1D & 1) == 0 )
  {
    sub_1C7BAE8(&GachaBonusSelectMaster___c_TypeInfo);
    byte_4CEEA1D = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(GachaBonusSelectMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaBonusSelectMaster___c_TypeInfo->static_fields->__9 = (struct GachaBonusSelectMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)GachaBonusSelectMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GachaBonusSelectMaster___c___ctor(GachaBonusSelectMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t GachaBonusSelectMaster___c___TryGetEntityArray_b__3_0(
        GachaBonusSelectMaster___c_o *this,
        GachaBonusSelectEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.slot;
}