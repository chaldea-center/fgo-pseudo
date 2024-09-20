void __fastcall QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B5C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
    byte_4A5B5C7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetClearedGroupOpenQuestListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  System_Collections_Generic_List_object__o *v6; // x20
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_List_int__o *v8; // x24
  __int64 klass_low; // x1
  void *list; // x0
  int v11; // w25
  int32_t i; // w26
  Il2CppObject *v13; // x27
  __int64 methodPtr_low; // x10
  int v15; // w8
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  char *v21; // x8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  __int64 v26; // x8
  System_Collections_Generic_List_int__o *v27; // x0
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  int v31; // w8
  int v32; // w8
  System_Comparison_T__o *v33; // x22
  Il2CppObject *v34; // x23
  struct QuestGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int v38; // w26
  char v39; // w23
  int32_t v40; // w22
  int v41; // w28
  int v42; // w25
  int32_t v43; // w24
  int v44; // w8
  struct System_Int32_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10

  if ( (byte_4A5B5CD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_QuestGroupEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    sub_1B885B0(&QuestGroupEntity_TypeInfo);
    sub_1B885B0(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__);
    sub_1B885B0(&QuestGroupMaster___c_TypeInfo);
    byte_4A5B5CD = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_68;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = (int)list;
    for ( i = 0; v11 != i; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_68;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               i,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        continue;
      v13 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
      {
        continue;
      }
      v15 = *((_DWORD *)list + 5);
      if ( v15 == 1 )
      {
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v8 )
            goto LABEL_68;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           v8,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_23:
            if ( !v6 )
              goto LABEL_68;
            items = v6->fields._items;
            v23 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_68;
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                v13,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v13;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v13, v16, v17);
            }
            continue;
          }
          if ( !v7 )
            goto LABEL_68;
          klass_low = LODWORD(v13[1].klass);
          v28 = v7->fields._items;
          v29 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !v28 )
            goto LABEL_68;
          v30 = v7->fields._size;
          if ( (unsigned int)v30 >= v28->max_length )
          {
            v26 = v29[4];
            v27 = v7;
            goto LABEL_35;
          }
          v21 = (char *)v28 + 4 * v30;
          v7->fields._size = v30 + 1;
          goto LABEL_33;
        }
      }
      else if ( v15 == 2 )
      {
        if ( !v7 )
          goto LABEL_68;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         v7,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 )
          goto LABEL_23;
        if ( !v8 )
          goto LABEL_68;
        klass_low = LODWORD(v13[1].klass);
        v18 = v8->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v18 )
          goto LABEL_68;
        v20 = v8->fields._size;
        if ( (unsigned int)v20 >= v18->max_length )
        {
          v26 = v19[4];
          v27 = v8;
LABEL_35:
          System_Collections_Generic_List_int___AddWithResize(
            v27,
            klass_low,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v26 + 192) + 112LL));
          continue;
        }
        v21 = (char *)v18 + 4 * v20;
        v8->fields._size = v20 + 1;
LABEL_33:
        *((_DWORD *)v21 + 8) = klass_low;
      }
    }
  }
  if ( !v7 )
    goto LABEL_68;
  v31 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v31;
  if ( !v8 )
    goto LABEL_68;
  v32 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v32;
  list = QuestGroupMaster___c_TypeInfo;
  if ( !QuestGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestGroupMaster___c_TypeInfo);
    list = QuestGroupMaster___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = QuestGroupMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)list + 23);
    v33 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_QuestGroupEntity__TypeInfo);
    System_Comparison_object____ctor(
      v33,
      v34,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      0LL);
    static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)v33;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)v33, v36, v37);
  }
  if ( !v6 )
    goto LABEL_68;
  System_Collections_Generic_List_object___Sort_55571192(
    v6,
    v33,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  v38 = v6->fields._size;
  if ( v38 < 1 )
    return v5;
  v39 = 0;
  v40 = 0;
  v41 = -1;
  do
  {
    list = System_Collections_Generic_List_object___get_Item(
             v6,
             v40,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v42 = *((_DWORD *)list + 6);
    list = System_Collections_Generic_List_object___get_Item(
             v6,
             v40,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v43 = *((_DWORD *)list + 4);
    if ( v42 == v41 )
    {
      if ( (v39 & 1) != 0 )
      {
        v39 = 1;
        goto LABEL_59;
      }
    }
    else
    {
      if ( (v39 & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_68;
        System_Collections_Generic_List_int___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v41 = v42;
      v44 = v7->fields._version + 1;
      v7->fields._size = 0;
      v7->fields._version = v44;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    list = (void *)CondType__IsQuestClear_37596684(v43, -1, 0, 0LL);
    v39 = (char)list;
LABEL_59:
    v45 = v7->fields._items;
    v46 = Method_System_Collections_Generic_List_int__Add__;
    ++v7->fields._version;
    if ( !v45 )
      goto LABEL_68;
    v47 = v7->fields._size;
    if ( (unsigned int)v47 >= v45->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        v43,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = v47 + 1;
      v45->m_Items[v47 + 1] = v43;
    }
    ++v40;
  }
  while ( v38 != v40 );
  if ( (v39 & 1) != 0 )
  {
    if ( v5 )
    {
      System_Collections_Generic_List_int___AddRange(
        v5,
        (System_Collections_Generic_IEnumerable_T__o *)v7,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
      return v5;
    }
LABEL_68:
    sub_1B8880C(list, klass_low);
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
QuestGroupEntity_o *__fastcall QuestGroupMaster__GetEntity(
        QuestGroupMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B5C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
    byte_4A5B5C5 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestGroupEntity__o *__fastcall QuestGroupMaster__GetEntityListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A5B5CC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    sub_1B885B0(&QuestGroupEntity_TypeInfo);
    byte_4A5B5CC = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list[1].klass) == groupId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v17 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v8;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v8, v13, v14);
          }
        }
      }
      if ( v11 == ++v12 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v7;
    }
LABEL_19:
    sub_1B8880C(list, v8);
  }
  return (System_Collections_Generic_List_QuestGroupEntity__o *)v7;
}


int32_t __fastcall QuestGroupMaster__GetEventId(QuestGroupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetGroupId(this, questId, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestGroupMaster__GetEventTowerQuestId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        int32_t tower,
        int32_t floor,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  System_Collections_ObjectModel_Collection_T__o *v13; // x25
  __int64 methodPtr_low; // x10
  int v15; // w29
  int v16; // w19
  int32_t i; // w26
  __int64 v18; // x10
  int items_high; // w8
  int32_t v21; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A5B5CF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&QuestGroupEntity_TypeInfo);
    byte_4A5B5CF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_27:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  v21 = floor;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v13 = list;
    methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestGroupEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( HIDWORD(list->fields.items) == 9 && LODWORD(list[1].klass) == floor )
    {
      v15 = 0;
      v16 = 0;
      for ( i = 0; i != v11; ++i )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_27;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   i,
                                                                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_27;
        v18 = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)v18
          || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] != QuestGroupEntity_TypeInfo )
        {
          goto LABEL_27;
        }
        if ( LODWORD(list->fields.items) == LODWORD(v13->fields.items) )
        {
          items_high = HIDWORD(list->fields.items);
          if ( items_high == 8 )
          {
            v16 |= LODWORD(list[1].klass) == tower;
          }
          else if ( items_high == 1 )
          {
            v15 |= LODWORD(list[1].klass) == eventId;
          }
        }
      }
      floor = v21;
      if ( (v16 & v15 & 1) != 0 )
        return (int32_t)v13->fields.items;
    }
    if ( ++v12 == v11 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestGroupMaster__GetGroupId(
        QuestGroupMaster_o *this,
        int32_t questId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B5C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&QuestGroupEntity_TypeInfo);
    byte_4A5B5C8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                        list,
                        v10,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * methodPtr_low - 8) == QuestGroupEntity_TypeInfo
        && Item[4] == questId
        && Item[5] == type )
      {
        return Item[6];
      }
    }
    if ( v9 == ++v10 )
      return 0;
  }
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetInterludeQuestIdList(
        QuestGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  unsigned int *v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x9
  __int64 v21; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4A5B5D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&QuestGroupEntity_TypeInfo);
    byte_4A5B5D1 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_37:
      sub_1B8880C(v18, v19);
    }
    v21 = v18[4];
    if ( (_DWORD)v21 != questId && v18[5] == 13 && v18[6] == questId )
    {
      if ( !v5 )
        sub_1B8880C(v18, v21);
      items = v5->fields._items;
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v21);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          v21,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size + 1] = v21;
      }
    }
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_33;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_33:
    v28 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v5;
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetListOfQuestIdByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4A5B5CB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&QuestGroupEntity_TypeInfo);
    byte_4A5B5CB = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list[1].klass) == groupId )
        {
          if ( !v7 )
            break;
          items_low = LODWORD(list->fields.items);
          items = v7->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              items_low,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = size + 1;
            items->m_Items[size + 1] = items_low;
          }
        }
      }
      if ( v11 == ++v12 )
        return v7;
    }
LABEL_19:
    sub_1B8880C(list, items_low);
  }
  return v7;
}


System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetQuestIdListByGroupId(this, eventId, 1, v3);
}


System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *ListOfQuestIdByGroupId; // x0
  __int64 v8; // x1

  if ( (byte_4A5B5CA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A5B5CA = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_1B8880C(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetQuestIdListByGroupType(
        QuestGroupMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  unsigned int *v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x10
  __int64 v21; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4A5B5D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&QuestGroupEntity_TypeInfo);
    byte_4A5B5D0 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) == QuestGroupEntity_TypeInfo
        && v18[5] == type )
      {
        if ( !v5 )
          sub_1B8880C(v18, v19);
        v21 = v18[4];
        items = v5->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1B8880C(v18, v21);
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v21,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size + 1] = v21;
        }
      }
    }
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_31;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_31:
    v28 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v5;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestGroupMaster__GetQuestIdToGroupIdDict(
        QuestGroupMaster_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *GroupId; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *v10; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int size; // w8
  int32_t Item; // w23
  int32_t v15; // w0
  const MethodInfo *v16; // x3
  int32_t Count; // w0
  int32_t v18; // w23
  int32_t v19; // w24
  int32_t *v20; // x0
  int32_t *v21; // x25
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B5C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__BinarySearch__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&QuestGroupEntity_TypeInfo);
    byte_4A5B5C9 = 1;
  }
  memset(&i, 0, sizeof(i));
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55443684(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort(
    v7,
    (const MethodInfo_34E2154 *)Method_System_Collections_Generic_List_int__Sort__);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v7,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v24;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v10,
          i.fields._current,
          0,
          (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v11 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v11 )
      break;
    if ( !v10 )
      sub_1B8880C(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v7->fields._size;
  if ( size > 0 )
  {
    if ( size == 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v7,
               0,
               (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      v15 = System_Collections_Generic_List_int___get_Item(
              v7,
              0,
              (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)QuestGroupMaster__GetGroupId(
                                                                                                  this,
                                                                                                  v15,
                                                                                                  type,
                                                                                                  v16);
      if ( v10 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v10,
          Item,
          (int32_t)GroupId,
          (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v10;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        if ( Count < 1 )
          return v10;
        v18 = Count;
        v19 = 0;
        while ( 1 )
        {
          GroupId = this->fields.list;
          if ( !GroupId )
            break;
          v20 = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                             (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                             v19,
                             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !v20 )
            goto LABEL_29;
          v21 = v20;
          methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low )
            goto LABEL_29;
          if ( *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
            goto LABEL_29;
          if ( v20[5] != type )
            goto LABEL_29;
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_Generic_List_int___BinarySearch_55446328(v7, v20[4], (const MethodInfo_34E0B38 *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_29;
          if ( !v10 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v10,
            v21[4],
            v21[6],
            (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v7,
            v21[4],
            (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v7->fields._size >= 1 )
          {
LABEL_29:
            if ( v18 != ++v19 )
              continue;
          }
          return v10;
        }
      }
    }
LABEL_26:
    sub_1B8880C(GroupId, v9);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__IsEntryEvent(QuestGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v8; // x22
  int32_t v9; // w23
  bool v10; // w28
  int64_t v11; // x24
  __int64 methodPtr_low; // x10
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4A5B5CE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&QuestGroupEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5CE = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count >= 1 )
  {
    v8 = (UserQuestMaster_o *)MasterData_object;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v9,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = list;
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 20) == 1 && *(_DWORD *)(list + 24) == eventId )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        list = NetworkManager__get_UserId(0LL);
        if ( !v8 )
          break;
        EntityFromId = UserQuestMaster__getEntityFromId(v8, list, *(_DWORD *)(v11 + 16), 0LL);
        if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
          return v10;
      }
      v10 = ++v9 < Count;
      if ( Count == v9 )
        return v10;
    }
LABEL_22:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__TryGetEntity(
        QuestGroupMaster_o *this,
        QuestGroupEntity_o **entity,
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B5C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
    byte_4A5B5C6 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B5D2 & 1) == 0 )
  {
    sub_1B885B0(&QuestGroupMaster___c_TypeInfo);
    byte_4A5B5D2 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestGroupMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)QuestGroupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall QuestGroupMaster___c___ctor(QuestGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestGroupMaster___c___GetClearedGroupOpenQuestListByEventId_b__10_0(
        QuestGroupMaster___c_o *this,
        QuestGroupEntity_o *x,
        QuestGroupEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B8880C(this, x);
  return x->fields.groupId - y->fields.groupId;
}