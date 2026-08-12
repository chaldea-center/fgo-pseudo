void WarMessageMaster___ctor(WarMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971B3A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
    byte_5971B3A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    493,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarMessageEntity_o *WarMessageMaster__GetEntity(
        WarMessageMaster_o *this,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971B3B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
    sub_2213A60(&WarMessageEntity_TypeInfo);
    byte_5971B3B = 1;
  }
  if ( !*(&WarMessageEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, *(_QWORD *)&warId);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&idx);
  return (WarMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3F157EC *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarMessageEntity__o *WarMessageMaster__GetValidMessageList(
        WarMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x21
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  WarMessageEntity_o *v22; // x0
  const MethodInfo *v23; // x1
  WarMessageEntity_o *v24; // x21
  const MethodInfo *v25; // x1
  _BOOL8 v26; // x0
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
  WarMessageMaster___c_c *v42; // x0
  struct WarMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v45; // x21
  struct WarMessageMaster___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_IEnumerator_T__o *v55; // [xsp+18h] [xbp-38h]

  if ( (byte_5971B39 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarMessageEntity__GetEnumerator__);
    sub_2213A60(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
    sub_2213A60(&System_Func_WarMessageEntity__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_WarMessageEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarMessageEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarMessageEntity__TypeInfo);
    sub_2213A60(&Method_WarMessageMaster___c__GetValidMessageList_b__0_0__);
    sub_2213A60(&WarMessageMaster___c_TypeInfo);
    byte_5971B39 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
  if ( !list )
    sub_2213CDC(v7, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_WarMessageEntity__GetEnumerator__);
  v55 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v10);
  for ( i = Enumerator; ; i = v55 )
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
          goto LABEL_10;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v15 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            i,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v55 )
      sub_2213CDC(v16, v17);
    v18 = v55->klass;
    v19 = *(unsigned __int16 *)&v55->klass->_2.rank;
    if ( *(_WORD *)&v55->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarMessageEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_WarMessageEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_224BC3C(v55, System_Collections_Generic_IEnumerator_WarMessageEntity__TypeInfo, 0);
    }
    v22 = (WarMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                  v55,
                                  *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      sub_2213CDC(0, v23);
    if ( v22->fields.warId == warId && WarMessageEntity__CheckCondition(v22, v23) )
    {
      v26 = WarMessageEntity__CheckFrequencyCondition(v24, v25);
      if ( v26 )
      {
        if ( !v6
          || (items = v6->fields._items,
              v35 = Method_System_Collections_Generic_List_WarMessageEntity__Add__,
              ++v6->fields._version,
              !items) )
        {
          sub_2213CDC(v26, v27);
        }
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v24,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)v24, v28, v29, v30, v31, v32, v33);
        }
      }
    }
  }
  if ( v55 )
  {
    v38 = v55->klass;
    v39 = *(unsigned __int16 *)&v55->klass->_2.rank;
    if ( *(_WORD *)&v55->klass->_2.rank )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_36;
      }
      v41 = (__int64)&v38->vtable[*v40];
    }
    else
    {
LABEL_36:
      v41 = sub_224BC3C(v55, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(v55, *(_QWORD *)(v41 + 8));
  }
  v42 = WarMessageMaster___c_TypeInfo;
  if ( !*(&WarMessageMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarMessageMaster___c_TypeInfo, v17);
    v42 = WarMessageMaster___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__0_0 = (System_Func_object__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v42->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v42, v17);
      static_fields = WarMessageMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_WarMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v45, Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, 0);
    v46 = WarMessageMaster___c_TypeInfo->static_fields;
    v46->__9__0_0 = (struct System_Func_WarMessageEntity__int__o *)_9__0_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v46->__9__0_0, (int32_t)_9__0_0, v47, v48, v49, v50, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
  return (System_Collections_Generic_List_WarMessageEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v53,
                                                                  (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool WarMessageMaster__TryGetEntity(
        WarMessageMaster_o *this,
        WarMessageEntity_o **entity,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5971B3C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
    sub_2213A60(&WarMessageEntity_TypeInfo);
    byte_5971B3C = 1;
  }
  if ( !*(&WarMessageEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, entity);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
}


void WarMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971B3D & 1) == 0 )
  {
    sub_2213A60(&WarMessageMaster___c_TypeInfo);
    byte_5971B3D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarMessageMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarMessageMaster___c___ctor(WarMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarMessageMaster___c___GetValidMessageList_b__0_0(
        WarMessageMaster___c_o *this,
        WarMessageEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_2213CDC(this, 0);
  return v->fields.idx;
}