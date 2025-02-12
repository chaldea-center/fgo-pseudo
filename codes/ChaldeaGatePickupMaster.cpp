void __fastcall ChaldeaGatePickupMaster___ctor(ChaldeaGatePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4445 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__, method);
    byte_4BB4445 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    529,
    (const MethodInfo_3236300 *)Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x8
  struct System_Object_array *items; // x9
  _QWORD *v38; // x10
  __int64 size; // x11
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  ChaldeaGatePickupMaster___c_c *v45; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v47; // x21
  struct ChaldeaGatePickupMaster___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  if ( (byte_4BB4444 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__, method);
    sub_1C13D24(&System_Comparison_ChaldeaGatePickupEntity__TypeInfo, v3);
    sub_1C13D24(&System_IDisposable_TypeInfo, v4);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo, v5);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo, v10);
    sub_1C13D24(&NetworkManager_TypeInfo, v11);
    sub_1C13D24(&Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__, v12);
    sub_1C13D24(&ChaldeaGatePickupMaster___c_TypeInfo, v13);
    byte_4BB4444 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_45;
  v17 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v18);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v27 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo, 0LL);
    }
    v28 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                            Enumerator,
                            *(_QWORD *)(v27 + 8));
    v36 = (int64_t)v28;
    if ( !v28 )
      sub_1C13F80(0LL, v29);
    if ( v17 >= (__int64)v28[2].klass && v17 <= (__int64)v28[2].monitor )
    {
      if ( !v14 )
        sub_1C13F80(v28, v29);
      items = v14->fields._items;
      v38 = Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1C13F80(v28, v29);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v28,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v36;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 4), v36, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_32;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_32:
    v44 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
           Enumerator,
           *(_QWORD *)(v44 + 8));
  v45 = ChaldeaGatePickupMaster___c_TypeInfo;
  if ( !ChaldeaGatePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChaldeaGatePickupMaster___c_TypeInfo);
    v45 = ChaldeaGatePickupMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v45->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = ChaldeaGatePickupMaster___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v45->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v47,
      Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__,
      0LL);
    static_fields = ChaldeaGatePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_ChaldeaGatePickupEntity__o *)_9__0_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v49, v50, v51, v52, v53, v54);
  }
  if ( !v14 )
LABEL_45:
    sub_1C13F80(Time, v16);
  System_Collections_Generic_List_object___Sort_56814736(
    v14,
    _9__0_0,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
  return (System_Collections_Generic_List_ChaldeaGatePickupEntity__o *)v14;
}


void __fastcall ChaldeaGatePickupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4446 & 1) == 0 )
  {
    sub_1C13D24(&ChaldeaGatePickupMaster___c_TypeInfo, v1);
    byte_4BB4446 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ChaldeaGatePickupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ChaldeaGatePickupMaster___c_TypeInfo->static_fields->__9 = (struct ChaldeaGatePickupMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ChaldeaGatePickupMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, a);
  return b->fields.priority - a->fields.priority;
}