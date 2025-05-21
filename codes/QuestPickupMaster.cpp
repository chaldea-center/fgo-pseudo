void __fastcall QuestPickupMaster___ctor(QuestPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B4514E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__, method);
    byte_4B4514E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    276,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPickupMaster__GetPriority(QuestPickupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  int64_t Time; // x19
  const MethodInfo *v6; // x2
  QuestPickupEntity_array *List; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  int v10; // w9
  int *v11; // x10

  if ( (byte_4B45150 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    byte_4B45150 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  List = QuestPickupMaster__getList(this, questId, v6);
  if ( !List )
LABEL_15:
    sub_1BDBAD4(List, v8);
  v9 = *(_QWORD *)&List->max_length;
  if ( !v9 || (int)v9 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = (int *)List->m_Items[v10];
    if ( !v11 )
      goto LABEL_15;
    if ( Time >= v11[5] && Time <= v11[6] )
      return v11[7];
    if ( (_DWORD)v9 == ++v10 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
QuestPickupEntity_array *__fastcall QuestPickupMaster__getList(
        QuestPickupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B4514F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Count__, *(_QWORD *)&questId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Item__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestPickupEntity__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestPickupEntity___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_QuestPickupEntity__TypeInfo, v9);
    byte_4B4514F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_QuestPickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( LODWORD(list->fields.items) == questId )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_QuestPickupEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1BDBAD4(list, v11);
  return (QuestPickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v10,
                                      (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
}