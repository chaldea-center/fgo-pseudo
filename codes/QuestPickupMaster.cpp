void QuestPickupMaster___ctor(QuestPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970FD8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
    byte_5970FD8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    278,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestPickupMaster__GetPriority(QuestPickupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  int64_t Time; // x19
  const MethodInfo *v6; // x2
  QuestPickupEntity_array *List; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  int **i; // x9
  int *v11; // x10

  if ( (byte_5970FDA & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970FDA = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
  Time = NetworkManager__getTime(0);
  List = QuestPickupMaster__getList(this, questId, v6);
  if ( !List )
LABEL_15:
    sub_2213CDC(List, v8);
  max_length = List->max_length;
  if ( !max_length || (int)max_length < 1 )
    return 0;
  for ( i = (int **)List->m_Items; ; ++i )
  {
    v11 = *i;
    if ( !*i )
      goto LABEL_15;
    if ( Time >= v11[5] && Time <= v11[6] )
      break;
    LODWORD(max_length) = max_length - 1;
    if ( !(_DWORD)max_length )
      return 0;
  }
  return v11[7];
}


QuestPickupEntity_array *QuestPickupMaster__getList(
        QuestPickupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5970FD9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestPickupEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestPickupEntity__TypeInfo);
    byte_5970FD9 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestPickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestPickupEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list->fields.items) == questId )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_QuestPickupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_2213CDC(list, v6);
  return (QuestPickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
}