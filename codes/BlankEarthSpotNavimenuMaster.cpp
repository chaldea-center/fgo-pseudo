void __fastcall BlankEarthSpotNavimenuMaster___ctor(BlankEarthSpotNavimenuMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE4A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
    byte_4A5AE4A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    461,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
}


BlankEarthSpotNavimenuEntity_array *__fastcall BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  BlankEarthSpotNavimenuEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  __int64 methodPtr_low; // x10
  _BOOL8 IsEnable; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  BlankEarthSpotNavimenuMaster___c_c *v32; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v34; // x21
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3

  if ( (byte_4A5AE49 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthSpotNavimenuEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_1B885B0(&Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__);
    sub_1B885B0(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_4A5AE49 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
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
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (BlankEarthSpotNavimenuEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                              Enumerator,
                                              *(_QWORD *)(v15 + 8));
    v18 = (Il2CppObject *)v16;
    if ( v16 )
    {
      methodPtr_low = LOBYTE(BlankEarthSpotNavimenuEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (BlankEarthSpotNavimenuEntity_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == BlankEarthSpotNavimenuEntity_TypeInfo )
      {
        IsEnable = BlankEarthSpotNavimenuEntity__IsEnable(v16, v17);
        if ( IsEnable )
        {
          if ( !v3 )
            sub_1B8880C(IsEnable, v21);
          items = v3->fields._items;
          v25 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(IsEnable, v21);
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v18,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v18;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v18, v22, v23);
          }
        }
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                             Enumerator,
                                                             *(_QWORD *)(v31 + 8));
  v32 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  if ( !BlankEarthSpotNavimenuMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotNavimenuMaster___c_TypeInfo);
    v32 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v32->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v34,
      Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__,
      0LL);
    static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BlankEarthSpotNavimenuEntity__o *)_9__0_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v36, v37);
  }
  if ( !v3 )
LABEL_41:
    sub_1B8880C(list, v4);
  System_Collections_Generic_List_object___Sort_55571192(
    v3,
    _9__0_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
  return (BlankEarthSpotNavimenuEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v3,
                                                 (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
}


void __fastcall BlankEarthSpotNavimenuMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AE4B & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_4A5AE4B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BlankEarthSpotNavimenuMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotNavimenuMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}