void __fastcall QuestPickupMaster___ctor(QuestPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEA3F & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__, method);
    byte_49FEA3F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    270,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
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

  if ( (byte_49FEA41 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    byte_49FEA41 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  List = QuestPickupMaster__getList(this, questId, v6);
  if ( !List )
LABEL_15:
    sub_1B64ACC(List, v8);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FEA40 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_QuestPickupEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_QuestPickupEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_QuestPickupEntity__TypeInfo, v9);
    sub_1B64870(&QuestPickupEntity_TypeInfo, v10);
    byte_49FEA40 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_QuestPickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(QuestPickupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestPickupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestPickupEntity_TypeInfo
        && LODWORD(list->fields.items) == questId )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_QuestPickupEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B64ACC(list, v12);
  return (QuestPickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v11,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
}