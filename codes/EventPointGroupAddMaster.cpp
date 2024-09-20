void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
    byte_4A5B1D9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    220,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupAddEntity_o *__fastcall EventPointGroupAddMaster__GetEntity(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B1D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
    byte_4A5B1D7 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupAddEntity__CreatePK(
                         eventId,
                         termId,
                         groupId,
                         priority,
                         *(const MethodInfo **)&priority);
  return (EventPointGroupAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
}


System_Int32_array *__fastcall EventPointGroupAddMaster__GetTermedIconIds(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        System_Int32_array *defaultImageIds,
        const MethodInfo *method)
{
  __int64 v10; // x24
  __int64 list; // x0
  const MethodInfo *v12; // x1
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x9
  int32_t Count; // w0
  int32_t v16; // w26
  int32_t v17; // w27
  __int64 *v18; // x28
  int32_t v19; // w2
  int32_t v20; // w3
  EventPointGroupAddEntity_c *v21; // x8
  __int64 methodPtr_low; // x9
  __int64 v23; // x10
  int32_t v24; // w1
  _DWORD *v25; // x8
  System_Predicate_int__o *klass; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  il2cpp_array_size_t v29; // w19
  __int64 v30; // x25
  _DWORD *v31; // x25
  int v32; // t1
  __int64 v33; // x8
  __int64 v35; // [xsp+10h] [xbp-80h]
  System_Int32_array *array; // [xsp+18h] [xbp-78h]
  ServantStatusBattleListViewItem_o *v37; // [xsp+20h] [xbp-70h]

  if ( (byte_4A5B1DB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindIndex_int___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventPointGroupAddEntity_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    sub_1B885B0(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__);
    sub_1B885B0(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
    byte_4A5B1DB = 1;
  }
  v10 = sub_1B887FC(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !groupIds )
    goto LABEL_45;
  list = sub_1B88658(int___TypeInfo, groupIds->max_length);
  if ( !list )
    goto LABEL_45;
  v13 = *(unsigned int *)(list + 24);
  if ( (__int64)(v13 << 32) >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= v13 )
LABEL_46:
        sub_1B88814(list, v12);
      *(_DWORD *)(list + 32 + 4 * v14++) = 0;
    }
    while ( (int)v13 != v14 );
  }
  v35 = list;
  array = groupIds;
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_45:
    sub_1B8880C(list, v12);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    v18 = (__int64 *)(v10 + 16);
    v37 = (ServantStatusBattleListViewItem_o *)(v10 + 24);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_45;
      list = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v17,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v10 )
        goto LABEL_45;
      if ( list )
      {
        v21 = EventPointGroupAddEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventPointGroupAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventPointGroupAddEntity_TypeInfo )
            v23 = list;
          else
            v23 = 0LL;
        }
        else
        {
          v23 = 0LL;
        }
        *v18 = v23;
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v21 )
            v24 = list;
          else
            v24 = 0;
        }
        else
        {
          v24 = 0;
        }
      }
      else
      {
        v24 = 0;
        *v18 = 0LL;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), v24, v19, v20);
      v25 = (_DWORD *)*v18;
      if ( *v18 && v25[4] == eventId && v25[5] == termId && v25[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v37->klass;
        if ( !v37->klass )
        {
          klass = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v10,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0LL);
          *(_QWORD *)(v10 + 24) = klass;
          sub_1B88554(v37, (int32_t)klass, v27, v28);
        }
        list = System_Array__FindIndex_int_(
                 array,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_2F78F14 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_45;
          v29 = list;
          if ( (int)list < (signed int)defaultImageIds->max_length )
          {
            list = *v18;
            if ( !*v18 )
              goto LABEL_45;
            if ( v29 >= *(_DWORD *)(v35 + 24) )
              goto LABEL_46;
            v30 = v35 + 4LL * v29;
            v32 = *(_DWORD *)(v30 + 32);
            v31 = (_DWORD *)(v30 + 32);
            if ( *(_DWORD *)(list + 28) >= v32 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v12);
              if ( (list & 1) != 0 )
              {
                v33 = *v18;
                if ( !*v18 )
                  goto LABEL_45;
                if ( v29 >= *(_DWORD *)(v35 + 24) )
                  goto LABEL_46;
                *v31 = *(_DWORD *)(v33 + 28);
                if ( v29 >= defaultImageIds->max_length )
                  goto LABEL_46;
                defaultImageIds->m_Items[v29 + 1] = *(_DWORD *)(v33 + 36);
              }
            }
          }
        }
      }
      if ( v16 == ++v17 )
        return defaultImageIds;
    }
  }
  return defaultImageIds;
}


bool __fastcall EventPointGroupAddMaster__IsClearCondChangeImage(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t *imageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x20
  const MethodInfo *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w25
  int32_t v15; // w26
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  EventPointGroupAddMaster___c_c *v23; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v25; // x22
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int v29; // w23
  int32_t v30; // w21
  System_Collections_ObjectModel_Collection_T__o *v31; // x22
  bool result; // w0

  if ( (byte_4A5B1DA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventPointGroupAddEntity__TypeInfo);
    sub_1B885B0(&EventPointGroupAddEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
    sub_1B885B0(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__);
    sub_1B885B0(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4A5B1DA = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = (const MethodInfo *)list;
      methodPtr_low = LOBYTE(EventPointGroupAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventPointGroupAddEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointGroupAddEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == termId
        && LODWORD(list[1].klass) == groupId
        && LODWORD(list[1].monitor) == 1 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v20 = Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_20;
    }
LABEL_35:
    sub_1B8880C(list, v12);
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_35;
  if ( !v11->fields._size )
    return 0;
  v23 = EventPointGroupAddMaster___c_TypeInfo;
  if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
    v23 = EventPointGroupAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v23->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = EventPointGroupAddMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v25,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0LL);
    static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v27, v28);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v11,
    _9__3_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v29 = v11->fields._size;
  if ( v29 < 1 )
    return 0;
  v30 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v11,
                                                               v30,
                                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    if ( !list )
      goto LABEL_35;
    v31 = list;
    if ( EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v12) )
      break;
    if ( v29 == ++v30 )
      return 0;
  }
  result = 1;
  *imageId = HIDWORD(v31[1].monitor);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupAddMaster__TryGetEntity(
        EventPointGroupAddMaster_o *this,
        EventPointGroupAddEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B1D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
    byte_4A5B1D8 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupAddEntity__CreatePK(
                         eventId,
                         termId,
                         groupId,
                         priority,
                         *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void __fastcall EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B1DC & 1) == 0 )
  {
    sub_1B885B0(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4A5B1DC = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventPointGroupAddMaster___c___ctor(EventPointGroupAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPointGroupAddMaster___c___IsClearCondChangeImage_b__3_0(
        EventPointGroupAddMaster___c_o *this,
        EventPointGroupAddEntity_o *a,
        EventPointGroupAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall EventPointGroupAddMaster___c__DisplayClass4_0___ctor(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventPointGroupAddMaster___c__DisplayClass4_0___GetTermedIconIds_b__0(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventPointGroupAddEntity_o *tempEnt; // x8

  tempEnt = this->fields.tempEnt;
  if ( !tempEnt )
    sub_1B8880C(this, x);
  return tempEnt->fields.groupId == x;
}