void BlankEarthSpotNavimenuMaster___ctor(BlankEarthSpotNavimenuMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7092 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
    byte_4CC7092 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    467,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  BlankEarthSpotNavimenuMaster___c_c *v35; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v37; // x21
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4CC7091 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_BlankEarthSpotNavimenuEntity__GetEnumerator__);
    sub_1C713B0(&System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_1C713B0(&Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__);
    sub_1C713B0(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_4CC7091 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_BlankEarthSpotNavimenuEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v6);
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
      v11 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v15 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_BlankEarthSpotNavimenuEntity__TypeInfo, 0);
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
          sub_1C71608(IsEnable, v20);
        items = v3->fields._items;
        v28 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C71608(IsEnable, v20);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v18,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v18;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v18, v21, v22, v23, v24, v25, v26);
        }
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_29:
    v34 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                             Enumerator,
                                                             *(_QWORD *)(v34 + 8));
  v35 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  if ( !BlankEarthSpotNavimenuMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotNavimenuMaster___c_TypeInfo);
    v35 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v35->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v37,
      Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__,
      0);
    static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BlankEarthSpotNavimenuEntity__o *)_9__0_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v39, v40, v41, v42, v43, v44);
  }
  if ( !v3 )
LABEL_41:
    sub_1C71608(list, v4);
  System_Collections_Generic_List_object___Sort_58794460(
    v3,
    _9__0_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
  return (BlankEarthSpotNavimenuEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v3,
                                                 (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
}


void BlankEarthSpotNavimenuMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7093 & 1) == 0 )
  {
    sub_1C713B0(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_4CC7093 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BlankEarthSpotNavimenuMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotNavimenuMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields,
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
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}