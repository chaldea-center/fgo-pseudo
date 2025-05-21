void __fastcall MissionItemDisplayMaster___ctor(MissionItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44E63 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_MissionItemDisplayMaster__MissionItemDisplayEntity__int___ctor__, method);
    byte_4B44E63 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    536,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_MissionItemDisplayMaster__MissionItemDisplayEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MissionItemDisplayEntity_array *__fastcall MissionItemDisplayMaster__GetListByMissionType(
        MissionItemDisplayMaster_o *this,
        int32_t missionType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  MissionItemDisplayEntity_o *v29; // x0
  const MethodInfo *v30; // x1
  Il2CppObject *v31; // x22
  _BOOL8 IsEnable; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  MissionItemDisplayMaster___c_c *v44; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v46; // x21
  struct MissionItemDisplayMaster___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3

  if ( (byte_4B44E62 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_MissionItemDisplayEntity__GetEnumerator__,
      *(_QWORD *)&missionType);
    sub_1BDB878(&System_Comparison_MissionItemDisplayEntity__TypeInfo, v5);
    sub_1BDB878(&System_IDisposable_TypeInfo, v6);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__TypeInfo, v7);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionItemDisplayEntity__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionItemDisplayEntity__Sort__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionItemDisplayEntity__ToArray__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionItemDisplayEntity___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_MissionItemDisplayEntity__TypeInfo, v13);
    sub_1BDB878(&Method_MissionItemDisplayMaster___c__GetListByMissionType_b__0_0__, v14);
    sub_1BDB878(&MissionItemDisplayMaster___c_TypeInfo, v15);
    byte_4B44E62 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_MissionItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_MissionItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_MissionItemDisplayEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
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
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__TypeInfo, 0LL);
    }
    v29 = (MissionItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                          Enumerator,
                                          *(_QWORD *)(v28 + 8));
    v31 = (Il2CppObject *)v29;
    if ( !v29 )
      sub_1BDBAD4(0LL, v30);
    if ( v29->fields.missionType == missionType )
    {
      IsEnable = MissionItemDisplayEntity__IsEnable(v29, v30);
      if ( IsEnable )
      {
        if ( !v16 )
          sub_1BDBAD4(IsEnable, v33);
        items = v16->fields._items;
        v37 = Method_System_Collections_Generic_List_MissionItemDisplayEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          sub_1BDBAD4(IsEnable, v33);
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v31,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v31;
          sub_1BDB81C((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v31, v34, v35);
        }
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_30;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_30:
    v43 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                                                             Enumerator,
                                                             *(_QWORD *)(v43 + 8));
  v44 = MissionItemDisplayMaster___c_TypeInfo;
  if ( !MissionItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionItemDisplayMaster___c_TypeInfo);
    v44 = MissionItemDisplayMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v44->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = MissionItemDisplayMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_MissionItemDisplayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v46,
      Method_MissionItemDisplayMaster___c__GetListByMissionType_b__0_0__,
      0LL);
    static_fields = MissionItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_MissionItemDisplayEntity__o *)_9__0_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v48, v49);
  }
  if ( !v16 )
LABEL_43:
    sub_1BDBAD4(list, v17);
  System_Collections_Generic_List_object___Sort_57505928(
    v16,
    _9__0_0,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_MissionItemDisplayEntity__Sort__);
  return (MissionItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v16,
                                             (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_MissionItemDisplayEntity__ToArray__);
}


void __fastcall MissionItemDisplayMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44E64 & 1) == 0 )
  {
    sub_1BDB878(&MissionItemDisplayMaster___c_TypeInfo, v1);
    byte_4B44E64 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(MissionItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct MissionItemDisplayMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)MissionItemDisplayMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall MissionItemDisplayMaster___c___ctor(MissionItemDisplayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MissionItemDisplayMaster___c___GetListByMissionType_b__0_0(
        MissionItemDisplayMaster___c_o *this,
        MissionItemDisplayEntity_o *a,
        MissionItemDisplayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BDBAD4(this, a);
  return b->fields.priority - a->fields.priority;
}