void __fastcall WarMessageMaster___ctor(WarMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C1EA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
    byte_4A5C1EA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    484,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarMessageEntity_o *__fastcall WarMessageMaster__GetEntity(
        WarMessageMaster_o *this,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C1EB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
    sub_1B885B0(&WarMessageEntity_TypeInfo);
    byte_4A5C1EB = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&idx);
  return (WarMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarMessageEntity__o *__fastcall WarMessageMaster__GetValidMessageList(
        WarMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  WarMessageEntity_o *v19; // x0
  __int64 v20; // x1
  WarMessageEntity_o *v21; // x22
  __int64 methodPtr_low; // x9
  const MethodInfo *v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  WarMessageMaster___c_c *v36; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v38; // x21
  struct WarMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0

  if ( (byte_4A5C1E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
    sub_1B885B0(&System_Func_WarMessageEntity__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarMessageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarMessageEntity__TypeInfo);
    sub_1B885B0(&Method_WarMessageMaster___c__GetValidMessageList_b__0_0__);
    sub_1B885B0(&WarMessageMaster___c_TypeInfo);
    sub_1B885B0(&WarMessageEntity_TypeInfo);
    byte_4A5C1E9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
  if ( !list )
    sub_1B8880C(v7, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (WarMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                  Enumerator,
                                  *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_43;
    methodPtr_low = LOBYTE(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarMessageEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != WarMessageEntity_TypeInfo )
    {
      sub_1B88ACC(v19);
LABEL_43:
      sub_1B8880C(v19, v20);
    }
    if ( v19->fields.warId == warId
      && WarMessageEntity__CheckCondition(v19, (const MethodInfo *)WarMessageEntity_TypeInfo) )
    {
      v24 = WarMessageEntity__CheckFrequencyCondition(v21, v23);
      if ( v24 )
      {
        if ( !v6 )
          sub_1B8880C(v24, v25);
        items = v6->fields._items;
        v29 = Method_System_Collections_Generic_List_WarMessageEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          sub_1B8880C(v24, v25);
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v21,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v21, v26, v27);
        }
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_33;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_33:
    v35 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  v36 = WarMessageMaster___c_TypeInfo;
  if ( !WarMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageMaster___c_TypeInfo);
    v36 = WarMessageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v36->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = WarMessageMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_WarMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v38, Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, 0LL);
    static_fields = WarMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarMessageEntity__int__o *)_9__0_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
  return (System_Collections_Generic_List_WarMessageEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v42,
                                                                  (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarMessageMaster__TryGetEntity(
        WarMessageMaster_o *this,
        WarMessageEntity_o **entity,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5C1EC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
    sub_1B885B0(&WarMessageEntity_TypeInfo);
    byte_4A5C1EC = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
}


void __fastcall WarMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C1ED & 1) == 0 )
  {
    sub_1B885B0(&WarMessageMaster___c_TypeInfo);
    byte_4A5C1ED = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarMessageMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return v->fields.idx;
}