void ChaldeaGatePickupMaster___ctor(ChaldeaGatePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37714 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
    byte_4C37714 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    532,
    (const MethodInfo_3394514 *)Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
}


System_Collections_Generic_List_ChaldeaGatePickupEntity__o *ChaldeaGatePickupMaster__GetEnableEntityList(
        ChaldeaGatePickupMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  int64_t Time; // x0
  int64_t v5; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x8
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  Il2CppClass **v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  ChaldeaGatePickupMaster___c_c *v27; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v29; // x21
  struct ChaldeaGatePickupMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4C37713 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
    sub_1C32C20(&System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__);
    sub_1C32C20(&ChaldeaGatePickupMaster___c_TypeInfo);
    byte_4C37713 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_45;
  v5 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_11;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v10 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_18;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_18:
      v14 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo, 0);
    }
    v15 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                            Enumerator,
                            *(_QWORD *)(v14 + 8));
    v18 = v15;
    if ( !v15 )
      sub_1C32E7C(0);
    if ( v5 >= (__int64)v15[2].klass && v5 <= (__int64)v15[2].monitor )
    {
      if ( !v3 )
        sub_1C32E7C(v15);
      items = v3->fields._items;
      v20 = Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(v15);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v15,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v18, v16, v17);
      }
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_32;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_32:
    v26 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Time = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
           Enumerator,
           *(_QWORD *)(v26 + 8));
  v27 = ChaldeaGatePickupMaster___c_TypeInfo;
  if ( !ChaldeaGatePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChaldeaGatePickupMaster___c_TypeInfo);
    v27 = ChaldeaGatePickupMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v27->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ChaldeaGatePickupMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    System_Comparison_object____ctor(_9__0_0, v29, Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__, 0);
    static_fields = ChaldeaGatePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_ChaldeaGatePickupEntity__o *)_9__0_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v31, v32);
  }
  if ( !v3 )
LABEL_45:
    sub_1C32E7C(Time);
  System_Collections_Generic_List_object___Sort_58303104(
    v3,
    _9__0_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
  return (System_Collections_Generic_List_ChaldeaGatePickupEntity__o *)v3;
}


void ChaldeaGatePickupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37715 & 1) == 0 )
  {
    sub_1C32C20(&ChaldeaGatePickupMaster___c_TypeInfo);
    byte_4C37715 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ChaldeaGatePickupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ChaldeaGatePickupMaster___c_TypeInfo->static_fields->__9 = (struct ChaldeaGatePickupMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ChaldeaGatePickupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ChaldeaGatePickupMaster___c___ctor(ChaldeaGatePickupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ChaldeaGatePickupMaster___c___GetEnableEntityList_b__0_0(
        ChaldeaGatePickupMaster___c_o *this,
        ChaldeaGatePickupEntity_o *a,
        ChaldeaGatePickupEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}