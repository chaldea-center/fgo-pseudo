void ItemDropEfficiencyMaster___ctor(ItemDropEfficiencyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970CF3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__);
    byte_5970CF3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    524,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__);
}


System_Collections_Generic_List_ItemDropEfficiencyEntity__o *ItemDropEfficiencyMaster__GetEnabledListByItemId(
        ItemDropEfficiencyMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x21
  int32_t v24; // w22
  _BOOL8 IsOpen; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_Collections_Generic_IEnumerator_T__o *v42; // [xsp+18h] [xbp-48h]

  if ( (byte_5970CF2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ItemDropEfficiencyEntity__GetEnumerator__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo);
    byte_5970CF2 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ItemDropEfficiencyEntity__GetEnumerator__);
  v42 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v42 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v42 )
      sub_2213CDC(v15, v16);
    v17 = v42->klass;
    v18 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v42, System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v42,
            *(_QWORD *)(v20 + 8));
    v23 = (Il2CppObject *)v21;
    if ( !v21 )
      sub_2213CDC(0, v22);
    if ( *(_DWORD *)(v21 + 16) == itemId )
    {
      v24 = *(_DWORD *)(v21 + 56);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v22);
      IsOpen = CondType__IsOpen(113, v24, 0, 0, 0, 0);
      if ( IsOpen )
      {
        if ( !v5
          || (items = v5->fields._items,
              v34 = Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_2213CDC(IsOpen, v26);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v23, v27, v28, v29, v30, v31, v32);
        }
      }
    }
  }
  if ( v42 )
  {
    v37 = v42->klass;
    v38 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_37;
      }
      v40 = (__int64)&v37->vtable[*v39];
    }
    else
    {
LABEL_37:
      v40 = sub_224BC3C(v42, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(v42, *(_QWORD *)(v40 + 8));
  }
  return (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
ItemDropEfficiencyEntity_o *ItemDropEfficiencyMaster__GetEntity(
        ItemDropEfficiencyMaster_o *this,
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970CF4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__);
    byte_5970CF4 = 1;
  }
  PK = (Il2CppObject *)ItemDropEfficiencyEntity__CreatePK(itemId, targetType, priority, *(const MethodInfo **)&priority);
  return (ItemDropEfficiencyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3F157EC *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ItemDropEfficiencyMaster__TryGetEntity(
        ItemDropEfficiencyMaster_o *this,
        ItemDropEfficiencyEntity_o **entity,
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970CF5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__);
    byte_5970CF5 = 1;
  }
  PK = (Il2CppObject *)ItemDropEfficiencyEntity__CreatePK(
                         itemId,
                         targetType,
                         priority,
                         *(const MethodInfo **)&targetType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__);
}