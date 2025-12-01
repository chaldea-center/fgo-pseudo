void MyroomServantSpecialImageMaster___ctor(MyroomServantSpecialImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC793C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__);
    byte_4CC793C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    527,
    (const MethodInfo_340B614 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__);
}


MyroomServantSpecialImageEntity_array *MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t baseLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
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
  MyroomServantSpecialImageMaster___c_c *v37; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v39; // x21
  struct MyroomServantSpecialImageMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_4CC793B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MyroomServantSpecialImageEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___);
    sub_1C713B0(&System_Func_MyroomServantSpecialImageEntity__int__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo);
    sub_1C713B0(&Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__);
    sub_1C713B0(&MyroomServantSpecialImageMaster___c_TypeInfo);
    byte_4CC793B = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_MyroomServantSpecialImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v10);
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
      v15 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__TypeInfo )
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
      v19 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1C71608(0, v21);
    if ( *(_DWORD *)(v20 + 16) == svtId && *(_DWORD *)(v20 + 24) == baseLimitCount )
    {
      if ( !v7 )
        sub_1C71608(v20, v21);
      items = v7->fields._items;
      v30 = Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C71608(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
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
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_30:
    v36 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  v37 = MyroomServantSpecialImageMaster___c_TypeInfo;
  if ( !MyroomServantSpecialImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyroomServantSpecialImageMaster___c_TypeInfo);
    v37 = MyroomServantSpecialImageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v37->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = MyroomServantSpecialImageMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_MyroomServantSpecialImageEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v39,
      Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__,
      0);
    static_fields = MyroomServantSpecialImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_MyroomServantSpecialImageEntity__int__o *)_9__0_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v41, v42, v43, v44, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_317A93C *)Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___);
  return (MyroomServantSpecialImageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v47,
                                                    (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___);
}


MyroomServantSpecialImageEntity_o *MyroomServantSpecialImageMaster__GetEntity(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC793D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__);
    byte_4CC793D = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0);
  return (MyroomServantSpecialImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_340D938 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__);
}


bool MyroomServantSpecialImageMaster__TryGetEntity(
        MyroomServantSpecialImageMaster_o *this,
        MyroomServantSpecialImageEntity_o **entity,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC793E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__);
    byte_4CC793E = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__);
}


void MyroomServantSpecialImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC793F & 1) == 0 )
  {
    sub_1C713B0(&MyroomServantSpecialImageMaster___c_TypeInfo);
    byte_4CC793F = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(MyroomServantSpecialImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyroomServantSpecialImageMaster___c_TypeInfo->static_fields->__9 = (struct MyroomServantSpecialImageMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)MyroomServantSpecialImageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MyroomServantSpecialImageMaster___c___ctor(MyroomServantSpecialImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MyroomServantSpecialImageMaster___c___GetEntitiesByBaseLimitCount_b__0_0(
        MyroomServantSpecialImageMaster___c_o *this,
        MyroomServantSpecialImageEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C71608(this, 0);
  return a->fields.num;
}