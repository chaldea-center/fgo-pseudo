void ChaldeaGatePickupMaster___ctor(ChaldeaGatePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2701D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
    byte_4C2701D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    532,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
}


System_Collections_Generic_List_ChaldeaGatePickupEntity__o *ChaldeaGatePickupMaster__GetEnableEntityList(
        ChaldeaGatePickupMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  int64_t Time; // x0
  __int64 v5; // x1
  int64_t v6; // x21
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x8
  struct System_Object_array *items; // x9
  _QWORD *v23; // x10
  __int64 size; // x11
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  ChaldeaGatePickupMaster___c_c *v30; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v32; // x21
  struct ChaldeaGatePickupMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4C2701C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
    sub_1C2D490(&System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__);
    sub_1C2D490(&ChaldeaGatePickupMaster___c_TypeInfo);
    byte_4C2701C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_45;
  v6 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo, 0);
    }
    v17 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                            Enumerator,
                            *(_QWORD *)(v16 + 8));
    v21 = v17;
    if ( !v17 )
      sub_1C2D6EC(0, v18);
    if ( v6 >= (__int64)v17[2].klass && v6 <= (__int64)v17[2].monitor )
    {
      if ( !v3 )
        sub_1C2D6EC(v17, v18);
      items = v3->fields._items;
      v23 = Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(v17, v18);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v17,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v21, v19, v20);
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_32;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_32:
    v29 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Time = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
           Enumerator,
           *(_QWORD *)(v29 + 8));
  v30 = ChaldeaGatePickupMaster___c_TypeInfo;
  if ( !ChaldeaGatePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChaldeaGatePickupMaster___c_TypeInfo);
    v30 = ChaldeaGatePickupMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v30->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = ChaldeaGatePickupMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    System_Comparison_object____ctor(_9__0_0, v32, Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__, 0);
    static_fields = ChaldeaGatePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_ChaldeaGatePickupEntity__o *)_9__0_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v34, v35);
  }
  if ( !v3 )
LABEL_45:
    sub_1C2D6EC(Time, v5);
  System_Collections_Generic_List_object___Sort_58242632(
    v3,
    _9__0_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
  return (System_Collections_Generic_List_ChaldeaGatePickupEntity__o *)v3;
}


void ChaldeaGatePickupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2701E & 1) == 0 )
  {
    sub_1C2D490(&ChaldeaGatePickupMaster___c_TypeInfo);
    byte_4C2701E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ChaldeaGatePickupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ChaldeaGatePickupMaster___c_TypeInfo->static_fields->__9 = (struct ChaldeaGatePickupMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ChaldeaGatePickupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}