void __fastcall MissionItemDisplayMaster___ctor(MissionItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC8F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_MissionItemDisplayMaster__MissionItemDisplayEntity__int___ctor__);
    byte_4BDC8F5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    533,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_MissionItemDisplayMaster__MissionItemDisplayEntity__int___ctor__);
}


MissionItemDisplayEntity_array *__fastcall MissionItemDisplayMaster__GetListByMissionType(
        MissionItemDisplayMaster_o *this,
        int32_t missionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  MissionItemDisplayEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  Il2CppObject *v20; // x22
  _BOOL8 IsEnable; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  MissionItemDisplayMaster___c_c *v37; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v39; // x21
  struct MissionItemDisplayMaster___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4BDC8F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_MissionItemDisplayEntity__GetEnumerator__);
    sub_1C21E38(&System_Comparison_MissionItemDisplayEntity__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_MissionItemDisplayEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MissionItemDisplayEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MissionItemDisplayEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MissionItemDisplayEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_MissionItemDisplayEntity__TypeInfo);
    sub_1C21E38(&Method_MissionItemDisplayMaster___c__GetListByMissionType_b__0_0__);
    sub_1C21E38(&MissionItemDisplayMaster___c_TypeInfo);
    byte_4BDC8F4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MissionItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MissionItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_MissionItemDisplayEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__TypeInfo, 0LL);
    }
    v18 = (MissionItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                          Enumerator,
                                          *(_QWORD *)(v17 + 8));
    v20 = (Il2CppObject *)v18;
    if ( !v18 )
      sub_1C22094(0LL, v19);
    if ( v18->fields.missionType == missionType )
    {
      IsEnable = MissionItemDisplayEntity__IsEnable(v18, v19);
      if ( IsEnable )
      {
        if ( !v5 )
          sub_1C22094(IsEnable, v22);
        items = v5->fields._items;
        v30 = Method_System_Collections_Generic_List_MissionItemDisplayEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C22094(IsEnable, v22);
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v20,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v20;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v20, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_30:
    v36 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                                             Enumerator,
                                                             *(_QWORD *)(v36 + 8));
  v37 = MissionItemDisplayMaster___c_TypeInfo;
  if ( !MissionItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionItemDisplayMaster___c_TypeInfo);
    v37 = MissionItemDisplayMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v37->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = MissionItemDisplayMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MissionItemDisplayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v39,
      Method_MissionItemDisplayMaster___c__GetListByMissionType_b__0_0__,
      0LL);
    static_fields = MissionItemDisplayMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_MissionItemDisplayEntity__o *)_9__0_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v41, v42, v43, v44, v45, v46);
  }
  if ( !v5 )
LABEL_43:
    sub_1C22094(list, v6);
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    _9__0_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MissionItemDisplayEntity__Sort__);
  return (MissionItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_MissionItemDisplayEntity__ToArray__);
}


void __fastcall MissionItemDisplayMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC8F6 & 1) == 0 )
  {
    sub_1C21E38(&MissionItemDisplayMaster___c_TypeInfo);
    byte_4BDC8F6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MissionItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MissionItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct MissionItemDisplayMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)MissionItemDisplayMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}