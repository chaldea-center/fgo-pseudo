void GachaBonusSelectMaster___ctor(GachaBonusSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938A60 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
    byte_5938A60 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    195,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
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

  if ( (byte_5938A5E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
    byte_5938A5E = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&slot);
  return (GachaBonusSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
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

  if ( (byte_5938A5F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
    byte_5938A5F = 1;
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
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  GachaBonusSelectMaster___c_c *v39; // x0
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__3_0; // x21
  Il2CppObject *v42; // x22
  struct GachaBonusSelectMaster___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Object_array *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_Collections_Generic_IEnumerator_T__o *v59; // [xsp+18h] [xbp-48h]

  if ( (byte_5938A61 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
    sub_21FFC50(&System_Func_GachaBonusSelectEntity__int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
    sub_21FFC50(&Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__);
    sub_21FFC50(&GachaBonusSelectMaster___c_TypeInfo);
    byte_5938A61 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
  v59 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v11);
  for ( i = Enumerator; ; i = v59 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v59 )
      sub_21FFECC(v17, v18);
    v19 = v59->klass;
    v20 = *(unsigned __int16 *)&v59->klass->_2.rank;
    if ( *(_WORD *)&v59->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_2237E2C(v59, System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v59,
            *(_QWORD *)(v22 + 8));
    v30 = v23;
    if ( !v23 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v23 + 16) == gachaId )
    {
      if ( !v7
        || (items = v7->fields._items,
            v32 = Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(v23, v23);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v23,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  if ( v59 )
  {
    v35 = v59->klass;
    v36 = *(unsigned __int16 *)&v59->klass->_2.rank;
    if ( *(_WORD *)&v59->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_34;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_34:
      v38 = sub_2237E2C(v59, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v59, *(_QWORD *)(v38 + 8));
  }
  v39 = GachaBonusSelectMaster___c_TypeInfo;
  if ( !*(&GachaBonusSelectMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GachaBonusSelectMaster___c_TypeInfo, v18);
    v39 = GachaBonusSelectMaster___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__3_0 = (System_Func_object__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v39->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v39, v18);
      static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_GachaBonusSelectEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v42, Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__, 0);
    v43 = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    v43->__9__3_0 = (struct System_Func_GachaBonusSelectEntity__int__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->__9__3_0, (int32_t)_9__3_0, v44, v45, v46, v47, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
  v51 = System_Linq_Enumerable__ToArray_object_(
          v50,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
  *entityArray = (GachaBonusSelectEntity_array *)v51;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entityArray, (int32_t)v51, v52, v53, v54, v55, v56, v57);
  if ( !*entityArray )
LABEL_48:
    sub_21FFECC(list, v8);
  return LODWORD((*entityArray)->max_length) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool GachaBonusSelectMaster__TryGetEntitySlot(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **selectEntity,
        int32_t gachaId,
        int32_t slot,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  GachaBonusSelectEntity_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  System_Collections_Generic_IEnumerator_T__o *v39; // [xsp+18h] [xbp-38h]

  if ( (byte_5938A62 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938A62 = 1;
  }
  *selectEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)selectEntity,
    0,
    *(System_String_o **)&gachaId,
    *(System_String_o **)&slot,
    (int32_t)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
  v39 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v15);
  for ( i = Enumerator; ; i = v39 )
  {
    klass = i->klass;
    v18 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            i,
            *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
      break;
    if ( !v39 )
      sub_21FFECC(v21, v22);
    v23 = v39->klass;
    v24 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_2237E2C(v39, System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, 0);
    }
    v27 = (GachaBonusSelectEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                        v39,
                                        *(_QWORD *)(v26 + 8));
    if ( !v27 )
      sub_21FFECC(0, 0);
    if ( v27->fields.gachaId == gachaId && v27->fields.slot == slot )
    {
      *selectEntity = v27;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)selectEntity, (int32_t)v27, v28, v29, v30, v31, v32, v33);
      break;
    }
  }
  if ( v39 )
  {
    v34 = v39->klass;
    v35 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_31;
      }
      v37 = (__int64)&v34->vtable[*v36];
    }
    else
    {
LABEL_31:
      v37 = sub_2237E2C(v39, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(v39, *(_QWORD *)(v37 + 8));
  }
  return *selectEntity != 0;
}


void GachaBonusSelectMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938A63 & 1) == 0 )
  {
    sub_21FFC50(&GachaBonusSelectMaster___c_TypeInfo);
    byte_5938A63 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(GachaBonusSelectMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GachaBonusSelectMaster___c_TypeInfo->static_fields->__9 = (struct GachaBonusSelectMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)GachaBonusSelectMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return x->fields.slot;
}