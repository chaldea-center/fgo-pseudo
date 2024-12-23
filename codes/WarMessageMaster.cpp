void __fastcall WarMessageMaster___ctor(WarMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67CA8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__, method);
    byte_4B67CA8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    488,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
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

  if ( (byte_4B67CA9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__, *(_QWORD *)&warId);
    sub_1BE4ACC(&WarMessageEntity_TypeInfo, v7);
    byte_4B67CA9 = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&idx);
  return (WarMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31FDB1C *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
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
  __int64 v32; // x1
  WarMessageEntity_o *v33; // x22
  __int64 methodPtr_low; // x9
  const MethodInfo *v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  WarMessageMaster___c_c *v52; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v54; // x21
  struct WarMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0

  if ( (byte_4B67CA7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&warId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_WarMessageEntity___, v6);
    sub_1BE4ACC(&System_Func_WarMessageEntity__int__TypeInfo, v7);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarMessageEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarMessageEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_WarMessageEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, v14);
    sub_1BE4ACC(&WarMessageMaster___c_TypeInfo, v15);
    sub_1BE4ACC(&WarMessageEntity_TypeInfo, v16);
    byte_4B67CA7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
  if ( !list )
    sub_1BE4D28(v19, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v21);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v30 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (WarMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                  Enumerator,
                                  *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      goto LABEL_43;
    methodPtr_low = LOBYTE(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v31->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarMessageEntity_c *)v31->klass->_2.typeHierarchy[methodPtr_low - 1] != WarMessageEntity_TypeInfo )
    {
      sub_1BE4FE8(v31);
LABEL_43:
      sub_1BE4D28(v31, v32);
    }
    if ( v31->fields.warId == warId
      && WarMessageEntity__CheckCondition(v31, (const MethodInfo *)WarMessageEntity_TypeInfo) )
    {
      v36 = WarMessageEntity__CheckFrequencyCondition(v33, v35);
      if ( v36 )
      {
        if ( !v18 )
          sub_1BE4D28(v36, v37);
        items = v18->fields._items;
        v45 = Method_System_Collections_Generic_List_WarMessageEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          sub_1BE4D28(v36, v37);
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)v33,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v33;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v33, v38, v39, v40, v41, v42, v43);
        }
      }
    }
  }
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_33;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_33:
    v51 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  v52 = WarMessageMaster___c_TypeInfo;
  if ( !WarMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageMaster___c_TypeInfo);
    v52 = WarMessageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v52->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = WarMessageMaster___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v52->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_WarMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v54, Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, 0LL);
    static_fields = WarMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarMessageEntity__int__o *)_9__0_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v56, v57, v58, v59, v60, v61);
  }
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2F821CC *)Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
  return (System_Collections_Generic_List_WarMessageEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v62,
                                                                  (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
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

  if ( (byte_4B67CAA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__, entity);
    sub_1BE4ACC(&WarMessageEntity_TypeInfo, v9);
    byte_4B67CAA = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
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

  if ( (byte_4B67CAB & 1) == 0 )
  {
    sub_1BE4ACC(&WarMessageMaster___c_TypeInfo, v1);
    byte_4B67CAB = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(WarMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarMessageMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, 0LL);
  return v->fields.idx;
}