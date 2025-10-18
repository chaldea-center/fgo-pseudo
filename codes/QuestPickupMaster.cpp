void QuestPickupMaster___ctor(QuestPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C436DF & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
    byte_4C436DF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    276,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
}


int32_t QuestPickupMaster__GetPriority(QuestPickupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  int64_t Time; // x19
  const MethodInfo *v6; // x2
  QuestPickupEntity_array *List; // x0
  il2cpp_array_size_t max_length; // x8
  int v9; // w9
  int *v10; // x10

  if ( (byte_4C436E1 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C436E1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  List = QuestPickupMaster__getList(this, questId, v6);
  if ( !List )
LABEL_15:
    sub_1C372B4(List);
  max_length = List->max_length;
  if ( !max_length || (int)max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = (int *)List->m_Items[v9];
    if ( !v10 )
      goto LABEL_15;
    if ( Time >= v10[5] && Time <= v10[6] )
      return v10[7];
    if ( (_DWORD)max_length == ++v9 )
      return 0;
  }
}


QuestPickupEntity_array *QuestPickupMaster__getList(
        QuestPickupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C436E0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestPickupEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestPickupEntity__TypeInfo);
    byte_4C436E0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestPickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v7 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Count__);
    if ( v7 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v7,
                                                               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( LODWORD(list->fields.items) == questId )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_QuestPickupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v10;
          sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C372B4(list);
  return (QuestPickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
}