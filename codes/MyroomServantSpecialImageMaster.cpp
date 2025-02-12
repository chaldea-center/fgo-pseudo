void __fastcall MyroomServantSpecialImageMaster___ctor(
        MyroomServantSpecialImageMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB4ABA & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__,
      method);
    byte_4BB4ABA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    524,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MyroomServantSpecialImageEntity_array *__fastcall MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t baseLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x8
  struct System_Object_array *items; // x9
  _QWORD *v41; // x10
  __int64 size; // x11
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  MyroomServantSpecialImageMaster___c_c *v48; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v50; // x21
  struct MyroomServantSpecialImageMaster___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0

  if ( (byte_4BB4AB9 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_MyroomServantSpecialImageEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___, v8);
    sub_1C13D24(&System_Func_MyroomServantSpecialImageEntity__int__TypeInfo, v9);
    sub_1C13D24(&System_IDisposable_TypeInfo, v10);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__TypeInfo, v11);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__, v14);
    sub_1C13D24(&System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo, v15);
    sub_1C13D24(&Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__, v16);
    sub_1C13D24(&MyroomServantSpecialImageMaster___c_TypeInfo, v17);
    byte_4BB4AB9 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, v19);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_MyroomServantSpecialImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1C65D04(
              Enumerator,
              System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__TypeInfo,
              0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    v39 = v31;
    if ( !v31 )
      sub_1C13F80(0LL, v32);
    if ( *(_DWORD *)(v31 + 16) == svtId && *(_DWORD *)(v31 + 24) == baseLimitCount )
    {
      if ( !v18 )
        sub_1C13F80(v31, v32);
      items = v18->fields._items;
      v41 = Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1C13F80(v31, v32);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v31,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v39;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v43 + 4), v39, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_30;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_30:
    v47 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  v48 = MyroomServantSpecialImageMaster___c_TypeInfo;
  if ( !MyroomServantSpecialImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyroomServantSpecialImageMaster___c_TypeInfo);
    v48 = MyroomServantSpecialImageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v48->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = MyroomServantSpecialImageMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_MyroomServantSpecialImageEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v50,
      Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__,
      0LL);
    static_fields = MyroomServantSpecialImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_MyroomServantSpecialImageEntity__int__o *)_9__0_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v52, v53, v54, v55, v56, v57);
  }
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2FB842C *)Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___);
  return (MyroomServantSpecialImageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v58,
                                                    (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___);
}


// local variable allocation has failed, the output may be wrong!
MyroomServantSpecialImageEntity_o *__fastcall MyroomServantSpecialImageMaster__GetEntity(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4ABB & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BB4ABB = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0LL);
  return (MyroomServantSpecialImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_323D0DC *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__);
}


bool __fastcall MyroomServantSpecialImageMaster__TryGetEntity(
        MyroomServantSpecialImageMaster_o *this,
        MyroomServantSpecialImageEntity_o **entity,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB4ABC & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__,
      entity);
    byte_4BB4ABC = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__);
}


void __fastcall MyroomServantSpecialImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4ABD & 1) == 0 )
  {
    sub_1C13D24(&MyroomServantSpecialImageMaster___c_TypeInfo, v1);
    byte_4BB4ABD = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(MyroomServantSpecialImageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyroomServantSpecialImageMaster___c_TypeInfo->static_fields->__9 = (struct MyroomServantSpecialImageMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)MyroomServantSpecialImageMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall MyroomServantSpecialImageMaster___c___ctor(
        MyroomServantSpecialImageMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MyroomServantSpecialImageMaster___c___GetEntitiesByBaseLimitCount_b__0_0(
        MyroomServantSpecialImageMaster___c_o *this,
        MyroomServantSpecialImageEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C13F80(this, 0LL);
  return a->fields.num;
}