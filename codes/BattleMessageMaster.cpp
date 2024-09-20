void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADF9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
    byte_4A5ADF9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    409,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


BattleMessageEntity_array *__fastcall BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v9; // x19
  BattleMessageMaster___c_c *v10; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x21
  System_Func_object__object__o *_9__3_0; // x23
  Il2CppObject *v13; // x24
  struct BattleMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  System_Func_object__bool__o *v18; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  BattleMessageMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v23; // x23
  struct BattleMessageMaster___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  BattleMessageMaster___c_c *v28; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x21
  System_Func_object__int__o *_9__3_3; // x22
  Il2CppObject *v31; // x23
  struct BattleMessageMaster___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x21
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v40; // x1
  __int64 v41; // x21
  int v42; // w27
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 IsOpen; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  const MethodInfo *v55; // x4
  __int64 v56; // x22
  __int64 v57; // x1
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0

  if ( (byte_4A5ADFC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
    sub_1B885B0(&System_Func_DataEntityBase__BattleMessageEntity__TypeInfo);
    sub_1B885B0(&System_Func_BattleMessageEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleMessageEntity__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
    sub_1B885B0(&Method_BattleMessageMaster___c__GetEntities_b__3_0__);
    sub_1B885B0(&Method_BattleMessageMaster___c__GetEntities_b__3_2__);
    sub_1B885B0(&Method_BattleMessageMaster___c__GetEntities_b__3_3__);
    sub_1B885B0(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_1B885B0(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
    sub_1B885B0(&BattleMessageMaster___c_TypeInfo);
    byte_4A5ADFC = 1;
  }
  v5 = sub_1B887FC(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_67;
  *(_DWORD *)(v5 + 16) = id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  v10 = BattleMessageMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v10 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v10->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleMessageMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DataEntityBase__BattleMessageEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v13, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageEntity__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
  v18 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v20 = BattleMessageMaster___c_TypeInfo;
  v21 = v19;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v20 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__int__o *)v20->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleMessageMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_2, v23, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0LL);
    v24 = BattleMessageMaster___c_TypeInfo->static_fields;
    v24->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->__9__3_2, (int32_t)_9__3_2, v25, v26);
  }
  v27 = System_Linq_Enumerable__OrderBy_object__int_(
          v21,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v28 = BattleMessageMaster___c_TypeInfo;
  v29 = v27;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v28 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__int__o *)v28->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = BattleMessageMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_3, v31, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0LL);
    v32 = BattleMessageMaster___c_TypeInfo->static_fields;
    v32->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->__9__3_3, (int32_t)_9__3_3, v33, v34);
  }
  v6 = System_Linq_Enumerable__ThenByDescending_object__int_(
         v29,
         (System_Func_TSource__TKey__o *)_9__3_3,
         (const MethodInfo_2EB7F74 *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v6 )
    goto LABEL_67;
  klass = v6->klass;
  v36 = v6;
  v37 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_29;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_29:
    p_method = sub_1BDA590(v6, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL);
  }
  v41 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v36,
          *(_QWORD *)(p_method + 8));
  if ( !v41 )
    sub_1B8880C(0LL, v40);
  v42 = -1;
  while ( 1 )
  {
    v43 = *(_QWORD *)v41;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_37;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_37:
      v46 = sub_1BDA590(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v41, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v41;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v49 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_44;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_44:
      v50 = sub_1BDA590(v41, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v41, *(_QWORD *)(v50 + 8));
    v56 = IsOpen;
    if ( !IsOpen )
      sub_1B8880C(0LL, v52);
    if ( v42 != *(_DWORD *)(IsOpen + 20) )
    {
      v57 = *(unsigned int *)(IsOpen + 28);
      if ( (int)v57 < 1 )
        goto LABEL_51;
      if ( !Master_object )
        sub_1B8880C(IsOpen, v57);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v57, 0LL, 0, v55);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v9 )
          sub_1B8880C(IsOpen, v57);
        items = v9->fields._items;
        v59 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          sub_1B8880C(IsOpen, v57);
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v56,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v61[4] = (Il2CppClass *)v56;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v61 + 4), v56, v53, v54);
        }
        v42 = *(_DWORD *)(v56 + 20);
      }
    }
  }
  v62 = *(_QWORD *)v41;
  v63 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
  {
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_61;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_61:
    v65 = sub_1BDA590(v41, System_IDisposable_TypeInfo, 0LL);
  }
  v6 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v65)(
                                                      v41,
                                                      *(_QWORD *)(v65 + 8));
  if ( !v9 )
LABEL_67:
    sub_1B8880C(v6, v7);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v9,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_o *__fastcall BattleMessageMaster__GetEntity(
        BattleMessageMaster_o *this,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5ADFA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
    byte_4A5ADFA = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMessageMaster__TryGetEntity(
        BattleMessageMaster_o *this,
        BattleMessageEntity_o **entity,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5ADFB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
    byte_4A5ADFB = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ADFD & 1) == 0 )
  {
    sub_1B885B0(&BattleMessageMaster___c_TypeInfo);
    byte_4A5ADFD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall BattleMessageMaster___c___ctor(BattleMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleMessageEntity_o *__fastcall BattleMessageMaster___c___GetEntities_b__3_0(
        BattleMessageMaster___c_o *this,
        DataEntityBase_o *ent,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A5ADFE & 1) == 0 )
  {
    sub_1B885B0(&BattleMessageEntity_TypeInfo);
    byte_4A5ADFE = 1;
  }
  if ( !ent )
    return 0LL;
  methodPtr_low = LOBYTE(BattleMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (BattleMessageEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleMessageEntity_TypeInfo )
    return (BattleMessageEntity_o *)ent;
  return 0LL;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_2(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B8880C(this, 0LL);
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B8880C(this, 0LL);
  return ent->fields.priority;
}


void __fastcall BattleMessageMaster___c__DisplayClass3_0___ctor(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleMessageMaster___c__DisplayClass3_0___GetEntities_b__1(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.id == this->fields.id;
}