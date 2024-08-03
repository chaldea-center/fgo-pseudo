void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC0B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__, method);
    byte_49FC0B5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    409,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_array *__fastcall BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  Il2CppObject *Master_object; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  BattleMessageMaster___c_c *v35; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x21
  System_Func_object__object__o *_9__3_0; // x23
  Il2CppObject *v38; // x24
  struct BattleMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  System_Func_object__bool__o *v45; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  BattleMessageMaster___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v52; // x23
  struct BattleMessageMaster___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  BattleMessageMaster___c_c *v59; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v60; // x21
  System_Func_object__int__o *_9__3_3; // x22
  Il2CppObject *v62; // x23
  struct BattleMessageMaster___c_StaticFields *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x21
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v71; // x21
  int v72; // w27
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  __int64 IsOpen; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  const MethodInfo *v84; // x4
  __int64 v85; // x22
  int32_t v86; // w1
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  Il2CppClass **v90; // x0
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0

  if ( (byte_49FC0B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&id);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___, v9);
    sub_1B640C8(&System_Func_DataEntityBase__BattleMessageEntity__TypeInfo, v10);
    sub_1B640C8(&System_Func_BattleMessageEntity__bool__TypeInfo, v11);
    sub_1B640C8(&System_Func_BattleMessageEntity__int__TypeInfo, v12);
    sub_1B640C8(&System_IDisposable_TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, v15);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__, v19);
    sub_1B640C8(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo, v20);
    sub_1B640C8(&Method_BattleMessageMaster___c__GetEntities_b__3_0__, v21);
    sub_1B640C8(&Method_BattleMessageMaster___c__GetEntities_b__3_2__, v22);
    sub_1B640C8(&Method_BattleMessageMaster___c__GetEntities_b__3_3__, v23);
    sub_1B640C8(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__, v24);
    sub_1B640C8(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo, v25);
    sub_1B640C8(&BattleMessageMaster___c_TypeInfo, v26);
    byte_49FC0B8 = 1;
  }
  v27 = sub_1B64314(BattleMessageMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&id, method);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_67;
  *(_DWORD *)(v27 + 16) = id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleMessageEntity__TypeInfo,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  v35 = BattleMessageMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v35 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v35->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BattleMessageMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_DataEntityBase__BattleMessageEntity__TypeInfo,
                                                 v33,
                                                 v34);
    System_Func_object__object____ctor(_9__3_0, v38, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageEntity__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
  v45 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleMessageEntity__bool__TypeInfo, v43, v44);
  System_Func_object__bool____ctor(
    v45,
    (Il2CppObject *)v27,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0LL);
  v46 = System_Linq_Enumerable__Where_object_(
          v42,
          (System_Func_TSource__bool__o *)v45,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v49 = BattleMessageMaster___c_TypeInfo;
  v50 = v46;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v49 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__int__o *)v49->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = BattleMessageMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleMessageEntity__int__TypeInfo, v47, v48);
    System_Func_object__int____ctor(_9__3_2, v52, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0LL);
    v53 = BattleMessageMaster___c_TypeInfo->static_fields;
    v53->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->__9__3_2, (int32_t)_9__3_2, v54, v55);
  }
  v56 = System_Linq_Enumerable__OrderBy_object__int_(
          v50,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v59 = BattleMessageMaster___c_TypeInfo;
  v60 = v56;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v59 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__int__o *)v59->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = BattleMessageMaster___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v59->static_fields->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleMessageEntity__int__TypeInfo, v57, v58);
    System_Func_object__int____ctor(_9__3_3, v62, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0LL);
    v63 = BattleMessageMaster___c_TypeInfo->static_fields;
    v63->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v63->__9__3_3, (int32_t)_9__3_3, v64, v65);
  }
  v28 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v60,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_2E70DEC *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v28 )
    goto LABEL_67;
  klass = v28->klass;
  v67 = v28;
  v68 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v68;
      p_offset += 4;
      if ( !v68 )
        goto LABEL_29;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_29:
    p_method = sub_1BB60A8(v28, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL);
  }
  v71 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v67,
          *(_QWORD *)(p_method + 8));
  if ( !v71 )
    sub_1B64324(0LL);
  v72 = -1;
  while ( 1 )
  {
    v73 = *(_QWORD *)v71;
    v74 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
    {
      v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v75 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_37;
      }
      v76 = v73 + 16LL * *v75 + 312;
    }
    else
    {
LABEL_37:
      v76 = sub_1BB60A8(v71, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v71, *(_QWORD *)(v76 + 8)) & 1) == 0 )
      break;
    v77 = *(_QWORD *)v71;
    v78 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
    {
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v79 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_44;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_44:
      v80 = sub_1BB60A8(v71, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v71, *(_QWORD *)(v80 + 8));
    v85 = IsOpen;
    if ( !IsOpen )
      sub_1B64324(0LL);
    if ( v72 != *(_DWORD *)(IsOpen + 20) )
    {
      v86 = *(_DWORD *)(IsOpen + 28);
      if ( v86 < 1 )
        goto LABEL_51;
      if ( !Master_object )
        sub_1B64324(IsOpen);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v86, 0LL, 0, v84);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v32 )
          sub_1B64324(IsOpen);
        items = v32->fields._items;
        v88 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__;
        ++v32->fields._version;
        if ( !items )
          sub_1B64324(IsOpen);
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            (Il2CppObject *)v85,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = &items->obj.klass + size;
          v32->fields._size = size + 1;
          v90[4] = (Il2CppClass *)v85;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v90 + 4), v85, v82, v83);
        }
        v72 = *(_DWORD *)(v85 + 20);
      }
    }
  }
  v91 = *(_QWORD *)v71;
  v92 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
  {
    v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v93 - 1) != System_IDisposable_TypeInfo )
    {
      --v92;
      v93 += 4;
      if ( !v92 )
        goto LABEL_61;
    }
    v94 = v91 + 16LL * *v93 + 312;
  }
  else
  {
LABEL_61:
    v94 = sub_1BB60A8(v71, System_IDisposable_TypeInfo, 0LL);
  }
  v28 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v94)(
                                                       v71,
                                                       *(_QWORD *)(v94 + 8));
  if ( !v32 )
LABEL_67:
    sub_1B64324(v28);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v32,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
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

  if ( (byte_49FC0B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FC0B6 = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30D41FC *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
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

  if ( (byte_49FC0B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__, entity);
    byte_49FC0B7 = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC0B9 & 1) == 0 )
  {
    sub_1B640C8(&BattleMessageMaster___c_TypeInfo, v1);
    byte_49FC0B9 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleMessageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleMessageMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_49FC0BA & 1) == 0 )
  {
    sub_1B640C8(&BattleMessageEntity_TypeInfo, ent);
    byte_49FC0BA = 1;
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
    sub_1B64324(this);
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B64324(this);
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