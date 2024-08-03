void __fastcall QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC868 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__, method);
    byte_49FC868 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_int__o *v32; // x24
  void *list; // x0
  __int64 klass_low; // x1
  __int64 v35; // x2
  int v36; // w25
  int32_t i; // w26
  Il2CppObject *v38; // x27
  __int64 methodPtr_low; // x10
  int v40; // w8
  int32_t v41; // w3
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  char *v45; // x8
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  __int64 v50; // x8
  System_Collections_Generic_List_int__o *v51; // x0
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  int v55; // w8
  int v56; // w8
  System_Comparison_T__o *v57; // x22
  Il2CppObject *v58; // x23
  struct QuestGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  int v62; // w26
  char v63; // w23
  int32_t v64; // w22
  int v65; // w28
  int v66; // w25
  int32_t v67; // w24
  int v68; // w8
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10

  if ( (byte_49FC86E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_QuestGroupEntity__TypeInfo, v6);
    sub_1B640C8(&CondType_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v17);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B640C8(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v19);
    sub_1B640C8(&QuestGroupEntity_TypeInfo, v20);
    sub_1B640C8(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__, v21);
    sub_1B640C8(&QuestGroupMaster___c_TypeInfo, v22);
    byte_49FC86E = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestGroupEntity__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v32 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v30, v31);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_68;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v36 = (int)list;
    for ( i = 0; v36 != i; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_68;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               i,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        continue;
      v38 = (Il2CppObject *)list;
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
      {
        continue;
      }
      v40 = *((_DWORD *)list + 5);
      if ( v40 == 1 )
      {
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v32 )
            goto LABEL_68;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           v32,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_23:
            if ( !v26 )
              goto LABEL_68;
            items = v26->fields._items;
            v47 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              goto LABEL_68;
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                v38,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v49[4] = (Il2CppClass *)v38;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v38, v35, v41);
            }
            continue;
          }
          if ( !v29 )
            goto LABEL_68;
          klass_low = LODWORD(v38[1].klass);
          v52 = v29->fields._items;
          v53 = Method_System_Collections_Generic_List_int__Add__;
          ++v29->fields._version;
          if ( !v52 )
            goto LABEL_68;
          v54 = v29->fields._size;
          if ( (unsigned int)v54 >= v52->max_length )
          {
            v50 = v53[4];
            v51 = v29;
            goto LABEL_35;
          }
          v45 = (char *)v52 + 4 * v54;
          v29->fields._size = v54 + 1;
          goto LABEL_33;
        }
      }
      else if ( v40 == 2 )
      {
        if ( !v29 )
          goto LABEL_68;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         v29,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 )
          goto LABEL_23;
        if ( !v32 )
          goto LABEL_68;
        klass_low = LODWORD(v38[1].klass);
        v42 = v32->fields._items;
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++v32->fields._version;
        if ( !v42 )
          goto LABEL_68;
        v44 = v32->fields._size;
        if ( (unsigned int)v44 >= v42->max_length )
        {
          v50 = v43[4];
          v51 = v32;
LABEL_35:
          System_Collections_Generic_List_int___AddWithResize(
            v51,
            klass_low,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v50 + 192) + 112LL));
          continue;
        }
        v45 = (char *)v42 + 4 * v44;
        v32->fields._size = v44 + 1;
LABEL_33:
        *((_DWORD *)v45 + 8) = klass_low;
      }
    }
  }
  if ( !v29 )
    goto LABEL_68;
  v55 = v29->fields._version + 1;
  v29->fields._size = 0;
  v29->fields._version = v55;
  if ( !v32 )
    goto LABEL_68;
  v56 = v32->fields._version + 1;
  v32->fields._size = 0;
  v32->fields._version = v56;
  list = QuestGroupMaster___c_TypeInfo;
  if ( !QuestGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestGroupMaster___c_TypeInfo);
    list = QuestGroupMaster___c_TypeInfo;
  }
  v57 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v57 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = QuestGroupMaster___c_TypeInfo;
    }
    v58 = (Il2CppObject *)**((_QWORD **)list + 23);
    v57 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_QuestGroupEntity__TypeInfo, klass_low, v35);
    System_Comparison_object____ctor(
      v57,
      v58,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      0LL);
    static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)v57;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)v57, v60, v61);
  }
  if ( !v26 )
    goto LABEL_68;
  System_Collections_Generic_List_object___Sort_55243320(
    v26,
    v57,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  v62 = v26->fields._size;
  if ( v62 < 1 )
    return v23;
  v63 = 0;
  v64 = 0;
  v65 = -1;
  do
  {
    list = System_Collections_Generic_List_object___get_Item(
             v26,
             v64,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v66 = *((_DWORD *)list + 6);
    list = System_Collections_Generic_List_object___get_Item(
             v26,
             v64,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v67 = *((_DWORD *)list + 4);
    if ( v66 == v65 )
    {
      if ( (v63 & 1) != 0 )
      {
        v63 = 1;
        goto LABEL_59;
      }
    }
    else
    {
      if ( (v63 & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_68;
        System_Collections_Generic_List_int___AddRange(
          v23,
          (System_Collections_Generic_IEnumerable_T__o *)v29,
          (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v65 = v66;
      v68 = v29->fields._version + 1;
      v29->fields._size = 0;
      v29->fields._version = v68;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    list = (void *)CondType__IsQuestClear_37285996(v67, -1, 0, 0LL);
    v63 = (char)list;
LABEL_59:
    v69 = v29->fields._items;
    v70 = Method_System_Collections_Generic_List_int__Add__;
    ++v29->fields._version;
    if ( !v69 )
      goto LABEL_68;
    v71 = v29->fields._size;
    if ( (unsigned int)v71 >= v69->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v29,
        v67,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v29->fields._size = v71 + 1;
      v69->m_Items[v71 + 1] = v67;
    }
    ++v64;
  }
  while ( v62 != v64 );
  if ( (v63 & 1) != 0 )
  {
    if ( v23 )
    {
      System_Collections_Generic_List_int___AddRange(
        v23,
        (System_Collections_Generic_IEnumerable_T__o *)v29,
        (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
      return v23;
    }
LABEL_68:
    sub_1B64324(list);
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

  if ( (byte_49FC866 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_49FC866 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FC86D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v10);
    sub_1B640C8(&QuestGroupEntity_TypeInfo, v11);
    byte_49FC86D = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestGroupEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       *(_QWORD *)&type);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
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
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v19;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
          }
        }
      }
      if ( v15 == ++v16 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v12;
    }
LABEL_19:
    sub_1B64324(list);
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

  if ( (byte_49FC870 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&QuestGroupEntity_TypeInfo, v10);
    byte_49FC870 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_27:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                                                                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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

  if ( (byte_49FC869 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&QuestGroupEntity_TypeInfo, v8);
    byte_49FC869 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 methodPtr_low; // x9
  int32_t v25; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_49FC872 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B640C8(&QuestGroupEntity_TypeInfo, v11);
    byte_49FC872 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&questId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
    {
      sub_1B645E4(v23);
LABEL_37:
      sub_1B64324(v23);
    }
    v25 = v23[4];
    if ( v25 != questId && v23[5] == 13 && v23[6] == questId )
    {
      if ( !v12 )
        sub_1B64324(v23);
      items = v12->fields._items;
      v27 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(v23);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          v25,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size + 1] = v25;
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_33;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_33:
    v32 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  __int64 methodPtr_low; // x10
  int32_t v18; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_49FC86C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B640C8(&QuestGroupEntity_TypeInfo, v11);
    byte_49FC86C = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&groupId,
                                                    *(_QWORD *)&type);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v16,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == QuestGroupEntity_TypeInfo
          && *((_DWORD *)list + 5) == type
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v12 )
            break;
          v18 = *((_DWORD *)list + 4);
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
              v18,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = v18;
          }
        }
      }
      if ( v15 == ++v16 )
        return v12;
    }
LABEL_19:
    sub_1B64324(list);
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

  if ( (byte_49FC86B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&groupId);
    byte_49FC86B = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_1B64324(0LL);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 methodPtr_low; // x10
  int32_t v25; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_49FC871 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B640C8(&QuestGroupEntity_TypeInfo, v11);
    byte_49FC871 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&type,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( v23 )
    {
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) == QuestGroupEntity_TypeInfo
        && v23[5] == type )
      {
        if ( !v12 )
          sub_1B64324(v23);
        v25 = v23[4];
        items = v12->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(v23);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v25,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = v25;
        }
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return v12;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_int__int__o *v27; // x22
  _BOOL8 v28; // x0
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

  if ( (byte_49FC86A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIdList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__BinarySearch__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B640C8(&QuestGroupEntity_TypeInfo, v22);
    byte_49FC86A = 1;
  }
  memset(&i, 0, sizeof(i));
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    questIdList,
                                                    *(_QWORD *)&type);
  System_Collections_Generic_List_int____ctor_55113648(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  if ( !v23 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort(
    v23,
    (const MethodInfo_34918C0 *)Method_System_Collections_Generic_List_int__Sort__);
  v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v25,
                                                               v26);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v27,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v23,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v40;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v27,
          i.fields._current,
          0,
          (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v28 )
      break;
    if ( !v27 )
      sub_1B64324(v28);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v23->fields._size;
  if ( size > 0 )
  {
    if ( size == 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v23,
               0,
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      v31 = System_Collections_Generic_List_int___get_Item(
              v23,
              0,
              (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)QuestGroupMaster__GetGroupId(
                                                                                                  this,
                                                                                                  v31,
                                                                                                  type,
                                                                                                  v32);
      if ( v27 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v27,
          Item,
          (int32_t)GroupId,
          (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v27;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        if ( Count < 1 )
          return v27;
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
                             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_Generic_List_int___BinarySearch_55116292(v23, v36[4], (const MethodInfo_3490204 *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_29;
          if ( !v27 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v27,
            v37[4],
            v37[6],
            (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v23,
            v37[4],
            (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v23->fields._size >= 1 )
          {
LABEL_29:
            if ( v34 != ++v35 )
              continue;
          }
          return v27;
        }
      }
    }
LABEL_26:
    sub_1B64324(GroupId);
  }
  return v27;
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

  if ( (byte_49FC86F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&QuestGroupEntity_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FC86F = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
                        (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1B64324(list);
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

  if ( (byte_49FC867 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__, entity);
    byte_49FC867 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC873 & 1) == 0 )
  {
    sub_1B640C8(&QuestGroupMaster___c_TypeInfo, v1);
    byte_49FC873 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestGroupMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestGroupMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)QuestGroupMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return x->fields.groupId - y->fields.groupId;
}