void ChaldeaGatePickupMaster___ctor(ChaldeaGatePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59383CC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
    byte_59383CC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    534,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
}


System_Collections_Generic_List_ChaldeaGatePickupEntity__o *ChaldeaGatePickupMaster__GetEnableEntityList(
        ChaldeaGatePickupMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  int64_t Time; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int64_t v8; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  Il2CppObject *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  struct ChaldeaGatePickupMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v39; // x21
  struct ChaldeaGatePickupMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_IEnumerator_T__o *v48; // [xsp+18h] [xbp-38h]

  if ( (byte_59383CB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
    sub_21FFC50(&System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__);
    sub_21FFC50(&ChaldeaGatePickupMaster___c_TypeInfo);
    byte_59383CB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Time = NetworkManager__getTime(0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  v8 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
  v48 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v10);
  for ( i = Enumerator; ; i = v48 )
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
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            i,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v48 )
      sub_21FFECC(v16, v6);
    v17 = v48->klass;
    v18 = *(unsigned __int16 *)&v48->klass->_2.rank;
    if ( *(_WORD *)&v48->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_20;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_20:
      v20 = sub_2237E2C(v48, System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo, 0);
    }
    v21 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            v48,
                            *(_QWORD *)(v20 + 8));
    v28 = v21;
    if ( !v21 )
      sub_21FFECC(0, 0);
    if ( v8 >= (__int64)v21[2].klass && v8 <= (__int64)v21[2].monitor )
    {
      if ( !v3
        || (items = v3->fields._items,
            v30 = Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(v21, v21);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v21,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v28, v22, v23, v24, v25, v26, v27);
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
          goto LABEL_37;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_37:
      v36 = sub_2237E2C(v48, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v48, *(_QWORD *)(v36 + 8));
  }
  Time = (int64_t)ChaldeaGatePickupMaster___c_TypeInfo;
  if ( !*(&ChaldeaGatePickupMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ChaldeaGatePickupMaster___c_TypeInfo, v6);
    Time = (int64_t)ChaldeaGatePickupMaster___c_TypeInfo;
  }
  static_fields = *(struct ChaldeaGatePickupMaster___c_StaticFields **)(Time + 184);
  _9__0_0 = (System_Comparison_T__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v6);
      static_fields = ChaldeaGatePickupMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    System_Comparison_object____ctor(_9__0_0, v39, Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__, 0);
    v40 = ChaldeaGatePickupMaster___c_TypeInfo->static_fields;
    v40->__9__0_0 = (struct System_Comparison_ChaldeaGatePickupEntity__o *)_9__0_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->__9__0_0, (int32_t)_9__0_0, v41, v42, v43, v44, v45, v46);
  }
  if ( !v3 )
LABEL_51:
    sub_21FFECC(Time, v6);
  System_Collections_Generic_List_object___Sort_71636404(
    v3,
    _9__0_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
  return (System_Collections_Generic_List_ChaldeaGatePickupEntity__o *)v3;
}


void ChaldeaGatePickupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59383CD & 1) == 0 )
  {
    sub_21FFC50(&ChaldeaGatePickupMaster___c_TypeInfo);
    byte_59383CD = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ChaldeaGatePickupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ChaldeaGatePickupMaster___c_TypeInfo->static_fields->__9 = (struct ChaldeaGatePickupMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ChaldeaGatePickupMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}