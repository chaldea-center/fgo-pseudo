void __fastcall ChaldeaGatePickupMaster___ctor(ChaldeaGatePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC2AA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
    byte_4BDC2AA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    529,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_ChaldeaGatePickupMaster__ChaldeaGatePickupEntity__int___ctor__);
}


System_Collections_Generic_List_ChaldeaGatePickupEntity__o *__fastcall ChaldeaGatePickupMaster__GetEnableEntityList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x8
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  ChaldeaGatePickupMaster___c_c *v34; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v36; // x21
  struct ChaldeaGatePickupMaster___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4BDC2A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
    sub_1C21E38(&System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__);
    sub_1C21E38(&ChaldeaGatePickupMaster___c_TypeInfo);
    byte_4BDC2A9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ChaldeaGatePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_45;
  v6 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_ChaldeaGatePickupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_18:
      v16 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_ChaldeaGatePickupEntity__TypeInfo, 0LL);
    }
    v17 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                            Enumerator,
                            *(_QWORD *)(v16 + 8));
    v25 = (int64_t)v17;
    if ( !v17 )
      sub_1C22094(0LL, v18);
    if ( v6 >= (__int64)v17[2].klass && v6 <= (__int64)v17[2].monitor )
    {
      if ( !v3 )
        sub_1C22094(v17, v18);
      items = v3->fields._items;
      v27 = Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(v17, v18);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v17,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v25;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 4), v25, v19, v20, v21, v22, v23, v24);
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_32;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_32:
    v33 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Time = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
           Enumerator,
           *(_QWORD *)(v33 + 8));
  v34 = ChaldeaGatePickupMaster___c_TypeInfo;
  if ( !ChaldeaGatePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChaldeaGatePickupMaster___c_TypeInfo);
    v34 = ChaldeaGatePickupMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v34->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ChaldeaGatePickupMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_ChaldeaGatePickupEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v36,
      Method_ChaldeaGatePickupMaster___c__GetEnableEntityList_b__0_0__,
      0LL);
    static_fields = ChaldeaGatePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_ChaldeaGatePickupEntity__o *)_9__0_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v38, v39, v40, v41, v42, v43);
  }
  if ( !v3 )
LABEL_45:
    sub_1C22094(Time, v5);
  System_Collections_Generic_List_object___Sort_56953720(
    v3,
    _9__0_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_ChaldeaGatePickupEntity__Sort__);
  return (System_Collections_Generic_List_ChaldeaGatePickupEntity__o *)v3;
}


void __fastcall ChaldeaGatePickupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC2AB & 1) == 0 )
  {
    sub_1C21E38(&ChaldeaGatePickupMaster___c_TypeInfo);
    byte_4BDC2AB = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ChaldeaGatePickupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ChaldeaGatePickupMaster___c_TypeInfo->static_fields->__9 = (struct ChaldeaGatePickupMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ChaldeaGatePickupMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}