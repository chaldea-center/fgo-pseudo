void __fastcall WarMessageMaster___ctor(WarMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C230B5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__, method);
    byte_4C230B5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    491,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarMessageEntity_o *__fastcall WarMessageMaster__GetEntity(
        WarMessageMaster_o *this,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4C230B6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__, *(_QWORD *)&warId);
    sub_1C3B764(&WarMessageEntity_TypeInfo, v7);
    byte_4C230B6 = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&idx);
  return (WarMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_329F900 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarMessageEntity__o *__fastcall WarMessageMaster__GetValidMessageList(
        WarMessageMaster_o *this,
        int32_t warId,
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
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
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
  WarMessageEntity_o *v31; // x0
  const MethodInfo *v32; // x1
  WarMessageEntity_o *v33; // x22
  const MethodInfo *v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  WarMessageMaster___c_c *v51; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v53; // x21
  struct WarMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0

  if ( (byte_4C230B4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_WarMessageEntity__GetEnumerator__, *(_QWORD *)&warId);
    sub_1C3B764(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__getEntityList__, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_WarMessageEntity___, v7);
    sub_1C3B764(&System_Func_WarMessageEntity__int__TypeInfo, v8);
    sub_1C3B764(&System_IDisposable_TypeInfo, v9);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_WarMessageEntity__TypeInfo, v10);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarMessageEntity__Add__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarMessageEntity___ctor__, v13);
    sub_1C3B764(&System_Collections_Generic_List_WarMessageEntity__TypeInfo, v14);
    sub_1C3B764(&Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, v15);
    sub_1C3B764(&WarMessageMaster___c_TypeInfo, v16);
    byte_4C230B4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_WarMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
  if ( !list )
    sub_1C3B9C0(v19, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_WarMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v21);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_WarMessageEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_WarMessageEntity__TypeInfo )
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
      v30 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_WarMessageEntity__TypeInfo, 0LL);
    }
    v31 = (WarMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                  Enumerator,
                                  *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      sub_1C3B9C0(0LL, v32);
    if ( v31->fields.warId == warId && WarMessageEntity__CheckCondition(v31, v32) )
    {
      v35 = WarMessageEntity__CheckFrequencyCondition(v33, v34);
      if ( v35 )
      {
        if ( !v18 )
          sub_1C3B9C0(v35, v36);
        items = v18->fields._items;
        v44 = Method_System_Collections_Generic_List_WarMessageEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          sub_1C3B9C0(v35, v36);
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)v33,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v33;
          sub_1C3B708((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v33, v37, v38, v39, v40, v41, v42);
        }
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_31;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_31:
    v50 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
  v51 = WarMessageMaster___c_TypeInfo;
  if ( !WarMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageMaster___c_TypeInfo);
    v51 = WarMessageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v51->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = WarMessageMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v51->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_WarMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v53, Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, 0LL);
    static_fields = WarMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarMessageEntity__int__o *)_9__0_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v55, v56, v57, v58, v59, v60);
  }
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_301A1E4 *)Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
  return (System_Collections_Generic_List_WarMessageEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v61,
                                                                  (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarMessageMaster__TryGetEntity(
        WarMessageMaster_o *this,
        WarMessageEntity_o **entity,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4C230B7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__, entity);
    sub_1C3B764(&WarMessageEntity_TypeInfo, v9);
    byte_4C230B7 = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
}


void __fastcall WarMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C230B8 & 1) == 0 )
  {
    sub_1C3B764(&WarMessageMaster___c_TypeInfo, v1);
    byte_4C230B8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(WarMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarMessageMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)WarMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall WarMessageMaster___c___ctor(WarMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarMessageMaster___c___GetValidMessageList_b__0_0(
        WarMessageMaster___c_o *this,
        WarMessageEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C3B9C0(this, 0LL);
  return v->fields.idx;
}