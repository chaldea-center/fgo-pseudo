void __fastcall ChaldeaGatePickupMaster___ctor(ChaldeaGatePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C273 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__, method);
    byte_4B1C273 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    532,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
}


System_Collections_Generic_List_ChaldeaGatePickupEntity__o *__fastcall ChaldeaGatePickupMaster__GetEnableEntityList(
        ChaldeaGatePickupMaster_o *this,
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
  int64_t Time; // x0
  __int64 v16; // x1
  int64_t v17; // x21
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  ChaldeaGatePickupMaster___c_c *v41; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v43; // x21
  struct ChaldeaGatePickupMaster___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3

  if ( (byte_4B1C272 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__, method);
    sub_1BCAFF8(&System_Comparison_ChaldeaGatePickupEntity__TypeInfo, v3);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v4);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo, v10);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__, v12);
    sub_1BCAFF8(&ChaldeaGatePickupMaster___c_TypeInfo, v13);
    byte_4B1C272 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_45;
  v17 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_18;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_18:
      v27 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo, 0LL);
    }
    v28 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                            Enumerator,
                            *(_QWORD *)(v27 + 8));
    v32 = v28;
    if ( !v28 )
      sub_1BCB254(0LL, v29);
    if ( v17 >= (__int64)v28[2].klass && v17 <= (__int64)v28[2].monitor )
    {
      if ( !v14 )
        sub_1BCB254(v28, v29);
      items = v14->fields._items;
      v34 = Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BCB254(v28, v29);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v28,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v32, v30, v31);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_32;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_32:
    v40 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
           Enumerator,
           *(_QWORD *)(v40 + 8));
  v41 = ChaldeaGatePickupMaster___c_TypeInfo;
  if ( !ChaldeaGatePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChaldeaGatePickupMaster___c_TypeInfo);
    v41 = ChaldeaGatePickupMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v41->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = ChaldeaGatePickupMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v43,
      Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__,
      0LL);
    static_fields = ChaldeaGatePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_ChaldeaGatePickupEntity__o *)_9__0_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v45, v46);
  }
  if ( !v14 )
LABEL_45:
    sub_1BCB254(Time, v16);
  System_Collections_Generic_List_object___Sort_57390740(
    v14,
    _9__0_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
  return (System_Collections_Generic_List_ChaldeaGatePickupEntity__o *)v14;
}


void __fastcall ChaldeaGatePickupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C274 & 1) == 0 )
  {
    sub_1BCAFF8(&ChaldeaGatePickupMaster___c_TypeInfo, v1);
    byte_4B1C274 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ChaldeaGatePickupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ChaldeaGatePickupMaster___c_TypeInfo->static_fields->__9 = (struct ChaldeaGatePickupMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ChaldeaGatePickupMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ChaldeaGatePickupMaster___c___ctor(ChaldeaGatePickupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ChaldeaGatePickupMaster___c___GetEnableEntityList_b__0_0(
        ChaldeaGatePickupMaster___c_o *this,
        ChaldeaGatePickupEntity_o *a,
        ChaldeaGatePickupEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCB254(this, a);
  return b->fields.priority - a->fields.priority;
}