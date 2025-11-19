void BlankEarthSpotNavimenuMaster___ctor(BlankEarthSpotNavimenuMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F6E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
    byte_4CB5F6E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    467,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
}


BlankEarthSpotNavimenuEntity_array *BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
        BlankEarthSpotNavimenuMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  BlankEarthSpotNavimenuEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  _BOOL8 IsEnable; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  BlankEarthSpotNavimenuMaster___c_c *v31; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v33; // x21
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_4CB5F6D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_BlankEarthSpotNavimenuEntity__GetEnumerator__);
    sub_1C6BA08(&System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_1C6BA08(&Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__);
    sub_1C6BA08(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_4CB5F6D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_BlankEarthSpotNavimenuEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo, 0);
    }
    v16 = (BlankEarthSpotNavimenuEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                              Enumerator,
                                              *(_QWORD *)(v15 + 8));
    v18 = (Il2CppObject *)v16;
    if ( v16 )
    {
      IsEnable = BlankEarthSpotNavimenuEntity__IsEnable(v16, v17);
      if ( IsEnable )
      {
        if ( !v3 )
          sub_1C6BC60(IsEnable, v20);
        items = v3->fields._items;
        v24 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(IsEnable, v20);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v18,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v18;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v18, v21, v22);
        }
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_29:
    v30 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                             Enumerator,
                                                             *(_QWORD *)(v30 + 8));
  v31 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  if ( !BlankEarthSpotNavimenuMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotNavimenuMaster___c_TypeInfo);
    v31 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v31->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v33,
      Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__,
      0);
    static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BlankEarthSpotNavimenuEntity__o *)_9__0_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v35, v36);
  }
  if ( !v3 )
LABEL_41:
    sub_1C6BC60(list, v4);
  System_Collections_Generic_List_object___Sort_58729528(
    v3,
    _9__0_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
  return (BlankEarthSpotNavimenuEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v3,
                                                 (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
}


void BlankEarthSpotNavimenuMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB5F6F & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_4CB5F6F = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BlankEarthSpotNavimenuMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotNavimenuMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BlankEarthSpotNavimenuMaster___c___ctor(BlankEarthSpotNavimenuMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BlankEarthSpotNavimenuMaster___c___GetEnableShortcutButtons_b__0_0(
        BlankEarthSpotNavimenuMaster___c_o *this,
        BlankEarthSpotNavimenuEntity_o *a,
        BlankEarthSpotNavimenuEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}