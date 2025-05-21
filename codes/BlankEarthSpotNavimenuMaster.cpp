void __fastcall BlankEarthSpotNavimenuMaster___ctor(BlankEarthSpotNavimenuMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44736 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__, method);
    byte_4B44736 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    467,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
}


BlankEarthSpotNavimenuEntity_array *__fastcall BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
        BlankEarthSpotNavimenuMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  BlankEarthSpotNavimenuEntity_o *v27; // x0
  const MethodInfo *v28; // x1
  Il2CppObject *v29; // x21
  _BOOL8 IsEnable; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  BlankEarthSpotNavimenuMaster___c_c *v42; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v44; // x21
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3

  if ( (byte_4B44735 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_BlankEarthSpotNavimenuEntity__GetEnumerator__, method);
    sub_1BDB878(&System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo, v3);
    sub_1BDB878(&System_IDisposable_TypeInfo, v4);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo, v5);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo, v11);
    sub_1BDB878(&Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__, v12);
    sub_1BDB878(&BlankEarthSpotNavimenuMaster___c_TypeInfo, v13);
    byte_4B44735 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_BlankEarthSpotNavimenuEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v17);
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
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo )
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
      v26 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo, 0LL);
    }
    v27 = (BlankEarthSpotNavimenuEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                              Enumerator,
                                              *(_QWORD *)(v26 + 8));
    v29 = (Il2CppObject *)v27;
    if ( v27 )
    {
      IsEnable = BlankEarthSpotNavimenuEntity__IsEnable(v27, v28);
      if ( IsEnable )
      {
        if ( !v14 )
          sub_1BDBAD4(IsEnable, v31);
        items = v14->fields._items;
        v35 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          sub_1BDBAD4(IsEnable, v31);
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            v29,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v29;
          sub_1BDB81C((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v29, v32, v33);
        }
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_29;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_29:
    v41 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                             Enumerator,
                                                             *(_QWORD *)(v41 + 8));
  v42 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  if ( !BlankEarthSpotNavimenuMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotNavimenuMaster___c_TypeInfo);
    v42 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v42->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v44,
      Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__,
      0LL);
    static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BlankEarthSpotNavimenuEntity__o *)_9__0_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v46, v47);
  }
  if ( !v14 )
LABEL_41:
    sub_1BDBAD4(list, v15);
  System_Collections_Generic_List_object___Sort_57505928(
    v14,
    _9__0_0,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
  return (BlankEarthSpotNavimenuEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v14,
                                                 (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
}


void __fastcall BlankEarthSpotNavimenuMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44737 & 1) == 0 )
  {
    sub_1BDB878(&BlankEarthSpotNavimenuMaster___c_TypeInfo, v1);
    byte_4B44737 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BlankEarthSpotNavimenuMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotNavimenuMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BlankEarthSpotNavimenuMaster___c___ctor(
        BlankEarthSpotNavimenuMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthSpotNavimenuMaster___c___GetEnableShortcutButtons_b__0_0(
        BlankEarthSpotNavimenuMaster___c_o *this,
        BlankEarthSpotNavimenuEntity_o *a,
        BlankEarthSpotNavimenuEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BDBAD4(this, a);
  return b->fields.priority - a->fields.priority;
}