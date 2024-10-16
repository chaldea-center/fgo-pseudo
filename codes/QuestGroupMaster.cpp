void __fastcall QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB61BF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__, method);
    byte_4AB61BF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetClearedGroupOpenQuestListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_int__o *v23; // x19
  System_Collections_Generic_List_object__o *v24; // x20
  System_Collections_Generic_List_int__o *v25; // x21
  System_Collections_Generic_List_int__o *v26; // x24
  __int64 klass_low; // x1
  void *list; // x0
  int v29; // w25
  int32_t i; // w26
  Il2CppObject *v31; // x27
  __int64 methodPtr_low; // x10
  int v33; // w8
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  char *v39; // x8
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x8
  System_Collections_Generic_List_int__o *v45; // x0
  struct System_Int32_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  int v49; // w8
  int v50; // w8
  System_Comparison_T__o *v51; // x22
  Il2CppObject *v52; // x23
  struct QuestGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  int v56; // w26
  char v57; // w23
  int32_t v58; // w22
  int v59; // w28
  int v60; // w25
  int32_t v61; // w24
  int v62; // w8
  struct System_Int32_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10

  if ( (byte_4AB61C5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&System_Comparison_QuestGroupEntity__TypeInfo, v6);
    sub_1BAB41C(&CondType_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Remove__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v17);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1BAB41C(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v19);
    sub_1BAB41C(&QuestGroupEntity_TypeInfo, v20);
    sub_1BAB41C(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__, v21);
    sub_1BAB41C(&QuestGroupMaster___c_TypeInfo, v22);
    byte_4AB61C5 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  v26 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_68;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v29 = (int)list;
    for ( i = 0; v29 != i; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_68;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               i,
               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        continue;
      v31 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
      {
        continue;
      }
      v33 = *((_DWORD *)list + 5);
      if ( v33 == 1 )
      {
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v26 )
            goto LABEL_68;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           v26,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3531D94 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_23:
            if ( !v24 )
              goto LABEL_68;
            items = v24->fields._items;
            v41 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
            ++v24->fields._version;
            if ( !items )
              goto LABEL_68;
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v24,
                v31,
                *(const MethodInfo_354D8BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &items->obj.klass + size;
              v24->fields._size = size + 1;
              v43[4] = (Il2CppClass *)v31;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v31, v34, v35);
            }
            continue;
          }
          if ( !v25 )
            goto LABEL_68;
          klass_low = LODWORD(v31[1].klass);
          v46 = v25->fields._items;
          v47 = Method_System_Collections_Generic_List_int__Add__;
          ++v25->fields._version;
          if ( !v46 )
            goto LABEL_68;
          v48 = v25->fields._size;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v44 = v47[4];
            v45 = v25;
            goto LABEL_35;
          }
          v39 = (char *)v46 + 4 * v48;
          v25->fields._size = v48 + 1;
          goto LABEL_33;
        }
      }
      else if ( v33 == 2 )
      {
        if ( !v25 )
          goto LABEL_68;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         v25,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_3531D94 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 )
          goto LABEL_23;
        if ( !v26 )
          goto LABEL_68;
        klass_low = LODWORD(v31[1].klass);
        v36 = v26->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v26->fields._version;
        if ( !v36 )
          goto LABEL_68;
        v38 = v26->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          v44 = v37[4];
          v45 = v26;
LABEL_35:
          System_Collections_Generic_List_int___AddWithResize(
            v45,
            klass_low,
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v44 + 192) + 112LL));
          continue;
        }
        v39 = (char *)v36 + 4 * v38;
        v26->fields._size = v38 + 1;
LABEL_33:
        *((_DWORD *)v39 + 8) = klass_low;
      }
    }
  }
  if ( !v25 )
    goto LABEL_68;
  v49 = v25->fields._version + 1;
  v25->fields._size = 0;
  v25->fields._version = v49;
  if ( !v26 )
    goto LABEL_68;
  v50 = v26->fields._version + 1;
  v26->fields._size = 0;
  v26->fields._version = v50;
  list = QuestGroupMaster___c_TypeInfo;
  if ( !QuestGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestGroupMaster___c_TypeInfo);
    list = QuestGroupMaster___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = QuestGroupMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)list + 23);
    v51 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_QuestGroupEntity__TypeInfo);
    System_Comparison_object____ctor(
      v51,
      v52,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      0LL);
    static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)v51;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)v51, v54, v55);
  }
  if ( !v24 )
    goto LABEL_68;
  System_Collections_Generic_List_object___Sort_55899008(
    v24,
    v51,
    (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  v56 = v24->fields._size;
  if ( v56 < 1 )
    return v23;
  v57 = 0;
  v58 = 0;
  v59 = -1;
  do
  {
    list = System_Collections_Generic_List_object___get_Item(
             v24,
             v58,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v60 = *((_DWORD *)list + 6);
    list = System_Collections_Generic_List_object___get_Item(
             v24,
             v58,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v61 = *((_DWORD *)list + 4);
    if ( v60 == v59 )
    {
      if ( (v57 & 1) != 0 )
      {
        v57 = 1;
        goto LABEL_59;
      }
    }
    else
    {
      if ( (v57 & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_68;
        System_Collections_Generic_List_int___AddRange(
          v23,
          (System_Collections_Generic_IEnumerable_T__o *)v25,
          (const MethodInfo_3530AA4 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v59 = v60;
      v62 = v25->fields._version + 1;
      v25->fields._size = 0;
      v25->fields._version = v62;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    list = (void *)CondType__IsQuestClear_37980612(v61, -1, 0, 0LL);
    v57 = (char)list;
LABEL_59:
    v63 = v25->fields._items;
    v64 = Method_System_Collections_Generic_List_int__Add__;
    ++v25->fields._version;
    if ( !v63 )
      goto LABEL_68;
    v65 = v25->fields._size;
    if ( (unsigned int)v65 >= v63->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v25,
        v61,
        *(const MethodInfo_3530898 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
    }
    else
    {
      v25->fields._size = v65 + 1;
      v63->m_Items[v65 + 1] = v61;
    }
    ++v58;
  }
  while ( v56 != v58 );
  if ( (v57 & 1) != 0 )
  {
    if ( v23 )
    {
      System_Collections_Generic_List_int___AddRange(
        v23,
        (System_Collections_Generic_IEnumerable_T__o *)v25,
        (const MethodInfo_3530AA4 *)Method_System_Collections_Generic_List_int__AddRange__);
      return v23;
    }
LABEL_68:
    sub_1BAB678(list, klass_low);
  }
  return v23;
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

  if ( (byte_4AB61BD & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4AB61BD = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31640E8 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestGroupEntity__o *__fastcall QuestGroupMaster__GetEntityListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4AB61C4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v9);
    sub_1BAB41C(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v10);
    sub_1BAB41C(&QuestGroupEntity_TypeInfo, v11);
    byte_4AB61C4 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list[1].klass) == groupId )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v13;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v13, v18, v19);
          }
        }
      }
      if ( v16 == ++v17 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v12;
    }
LABEL_19:
    sub_1BAB678(list, v13);
  }
  return (System_Collections_Generic_List_QuestGroupEntity__o *)v12;
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  System_Collections_ObjectModel_Collection_T__o *v15; // x25
  __int64 methodPtr_low; // x10
  int v17; // w29
  int v18; // w19
  int32_t i; // w26
  __int64 v20; // x10
  int items_high; // w8
  int32_t v23; // [xsp+Ch] [xbp-64h]

  if ( (byte_4AB61C7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BAB41C(&QuestGroupEntity_TypeInfo, v10);
    byte_4AB61C7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_27:
    sub_1BAB678(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  v14 = 0;
  v23 = floor;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v15 = list;
    methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestGroupEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( HIDWORD(list->fields.items) == 9 && LODWORD(list[1].klass) == floor )
    {
      v17 = 0;
      v18 = 0;
      for ( i = 0; i != v13; ++i )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_27;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   i,
                                                                   (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_27;
        v20 = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)v20
          || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] != QuestGroupEntity_TypeInfo )
        {
          goto LABEL_27;
        }
        if ( LODWORD(list->fields.items) == LODWORD(v15->fields.items) )
        {
          items_high = HIDWORD(list->fields.items);
          if ( items_high == 8 )
          {
            v18 |= LODWORD(list[1].klass) == tower;
          }
          else if ( items_high == 1 )
          {
            v17 |= LODWORD(list[1].klass) == eventId;
          }
        }
      }
      floor = v23;
      if ( (v18 & v17 & 1) != 0 )
        return (int32_t)v15->fields.items;
    }
    if ( ++v14 == v13 )
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4AB61C0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BAB41C(&QuestGroupEntity_TypeInfo, v8);
    byte_4AB61C0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BAB678(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                        list,
                        v12,
                        (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( v11 == ++v12 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetInterludeQuestIdList(
        QuestGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  unsigned int *v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x9
  __int64 v28; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4AB61C9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v5);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BAB41C(&QuestGroupEntity_TypeInfo, v11);
    byte_4AB61C9 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
    {
      sub_1BAB938(v25);
LABEL_37:
      sub_1BAB678(v25, v26);
    }
    v28 = v25[4];
    if ( (_DWORD)v28 != questId && v25[5] == 13 && v25[6] == questId )
    {
      if ( !v12 )
        sub_1BAB678(v25, v28);
      items = v12->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BAB678(v25, v28);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          v28,
          *(const MethodInfo_3530898 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size + 1] = v28;
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
    v35 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetListOfQuestIdByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x22
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4AB61C3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BAB41C(&QuestGroupEntity_TypeInfo, v11);
    byte_4AB61C3 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list[1].klass) == groupId )
        {
          if ( !v12 )
            break;
          items_low = LODWORD(list->fields.items);
          items = v12->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              items_low,
              *(const MethodInfo_3530898 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = items_low;
          }
        }
      }
      if ( v16 == ++v17 )
        return v12;
    }
LABEL_19:
    sub_1BAB678(list, items_low);
  }
  return v12;
}


System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetQuestIdListByGroupId(this, eventId, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *ListOfQuestIdByGroupId; // x0
  __int64 v8; // x1

  if ( (byte_4AB61C2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&groupId);
    byte_4AB61C2 = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_1BAB678(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetQuestIdListByGroupType(
        QuestGroupMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  unsigned int *v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x10
  __int64 v28; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4AB61C8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v5);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BAB41C(&QuestGroupEntity_TypeInfo, v11);
    byte_4AB61C8 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) == QuestGroupEntity_TypeInfo
        && v25[5] == type )
      {
        if ( !v12 )
          sub_1BAB678(v25, v26);
        v28 = v25[4];
        items = v12->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1BAB678(v25, v28);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v28,
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = v28;
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
        goto LABEL_31;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_31:
    v35 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v12;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestGroupMaster__GetQuestIdToGroupIdDict(
        QuestGroupMaster_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        int32_t type,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_int__o *v23; // x21
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *GroupId; // x0
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_int__int__o *v26; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int size; // w8
  int32_t Item; // w23
  int32_t v31; // w0
  const MethodInfo *v32; // x3
  int32_t Count; // w0
  int32_t v34; // w23
  int32_t v35; // w24
  int32_t *v36; // x0
  int32_t *v37; // x25
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AB61C1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIdList);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v9);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__BinarySearch__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Remove__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Sort__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor___76401816, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1BAB41C(&QuestGroupEntity_TypeInfo, v22);
    byte_4AB61C1 = 1;
  }
  memset(&i, 0, sizeof(i));
  v23 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55771500(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_353016C *)Method_System_Collections_Generic_List_int___ctor___76401816);
  if ( !v23 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort(
    v23,
    (const MethodInfo_35321DC *)Method_System_Collections_Generic_List_int__Sort__);
  v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v26,
    (const MethodInfo_31AD800 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v23,
    (const MethodInfo_353136C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v40;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v26,
          i.fields._current,
          0,
          (const MethodInfo_31AE1B0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v27 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_32C0BAC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v27 )
      break;
    if ( !v26 )
      sub_1BAB678(v27, v28);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_32C0BA8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v23->fields._size;
  if ( size > 0 )
  {
    if ( size == 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v23,
               0,
               (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      v31 = System_Collections_Generic_List_int___get_Item(
              v23,
              0,
              (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)QuestGroupMaster__GetGroupId(
                                                                                                  this,
                                                                                                  v31,
                                                                                                  type,
                                                                                                  v32);
      if ( v26 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v26,
          Item,
          (int32_t)GroupId,
          (const MethodInfo_31AE1B0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v26;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                  (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        if ( Count < 1 )
          return v26;
        v34 = Count;
        v35 = 0;
        while ( 1 )
        {
          GroupId = this->fields.list;
          if ( !GroupId )
            break;
          v36 = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                             (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                             v35,
                             (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !v36 )
            goto LABEL_29;
          v37 = v36;
          methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low )
            goto LABEL_29;
          if ( *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
            goto LABEL_29;
          if ( v36[5] != type )
            goto LABEL_29;
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_Generic_List_int___BinarySearch_55774144(v23, v36[4], (const MethodInfo_3530BC0 *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_29;
          if ( !v26 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v26,
            v37[4],
            v37[6],
            (const MethodInfo_31AE1B0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v23,
            v37[4],
            (const MethodInfo_3531D94 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v23->fields._size >= 1 )
          {
LABEL_29:
            if ( v34 != ++v35 )
              continue;
          }
          return v26;
        }
      }
    }
LABEL_26:
    sub_1BAB678(GroupId, v25);
  }
  return v26;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__IsEntryEvent(QuestGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v13; // x22
  int32_t v14; // w23
  bool v15; // w28
  int64_t v16; // x24
  __int64 methodPtr_low; // x10
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4AB61C6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1BAB41C(&NetworkManager_TypeInfo, v7);
    sub_1BAB41C(&QuestGroupEntity_TypeInfo, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AB61C6 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count >= 1 )
  {
    v13 = (UserQuestMaster_o *)MasterData_object;
    v14 = 0;
    v15 = 1;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v16 = list;
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
        if ( !v13 )
          break;
        EntityFromId = UserQuestMaster__getEntityFromId(v13, list, *(_DWORD *)(v16 + 16), 0LL);
        if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
          return v15;
      }
      v15 = ++v14 < Count;
      if ( Count == v14 )
        return v15;
    }
LABEL_22:
    sub_1BAB678(list, *(_QWORD *)&eventId);
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

  if ( (byte_4AB61BE & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__, entity);
    byte_4AB61BE = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB61CA & 1) == 0 )
  {
    sub_1BAB41C(&QuestGroupMaster___c_TypeInfo, v1);
    byte_4AB61CA = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(QuestGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestGroupMaster___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)QuestGroupMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BAB678(this, x);
  return x->fields.groupId - y->fields.groupId;
}