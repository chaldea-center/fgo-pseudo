void BlankEarthSpotNavimenuMaster___ctor(BlankEarthSpotNavimenuMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593832E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
    byte_593832E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    469,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
}


BlankEarthSpotNavimenuEntity_array *BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
        BlankEarthSpotNavimenuMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  void *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  BlankEarthSpotNavimenuEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  Il2CppObject *v20; // x20
  _BOOL8 IsEnable; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v39; // x21
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_IEnumerator_T__o *v48; // [xsp+18h] [xbp-38h]

  if ( (byte_593832D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BlankEarthSpotNavimenuEntity__GetEnumerator__);
    sub_21FFC50(&System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_21FFC50(&Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__);
    sub_21FFC50(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_593832D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_BlankEarthSpotNavimenuEntity__GetEnumerator__);
  v48 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v7);
  for ( i = Enumerator; ; i = v48 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v48 )
      sub_21FFECC(v13, v4);
    v14 = v48->klass;
    v15 = *(unsigned __int16 *)&v48->klass->_2.rank;
    if ( *(_WORD *)&v48->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_18:
      v17 = sub_2237E2C(v48, System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo, 0);
    }
    v18 = (BlankEarthSpotNavimenuEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                              v48,
                                              *(_QWORD *)(v17 + 8));
    v20 = (Il2CppObject *)v18;
    if ( v18 )
    {
      IsEnable = BlankEarthSpotNavimenuEntity__IsEnable(v18, v19);
      if ( IsEnable )
      {
        if ( !v3
          || (items = v3->fields._items,
              v30 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(IsEnable, v22);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v20,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v20;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v20, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
  if ( v48 )
  {
    v33 = v48->klass;
    v34 = *(unsigned __int16 *)&v48->klass->_2.rank;
    if ( *(_WORD *)&v48->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_34;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_34:
      v36 = sub_2237E2C(v48, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v48, *(_QWORD *)(v36 + 8));
  }
  list = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  if ( !*(&BlankEarthSpotNavimenuMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotNavimenuMaster___c_TypeInfo, v4);
    list = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  }
  static_fields = (struct BlankEarthSpotNavimenuMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__0_0 = (System_Comparison_T__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v4);
      static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v39,
      Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__,
      0);
    v40 = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    v40->__9__0_0 = (struct System_Comparison_BlankEarthSpotNavimenuEntity__o *)_9__0_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->__9__0_0, (int32_t)_9__0_0, v41, v42, v43, v44, v45, v46);
  }
  if ( !v3 )
LABEL_47:
    sub_21FFECC(list, v4);
  System_Collections_Generic_List_object___Sort_71636404(
    v3,
    _9__0_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
  return (BlankEarthSpotNavimenuEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v3,
                                                 (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
}


void BlankEarthSpotNavimenuMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593832F & 1) == 0 )
  {
    sub_21FFC50(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_593832F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BlankEarthSpotNavimenuMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotNavimenuMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}