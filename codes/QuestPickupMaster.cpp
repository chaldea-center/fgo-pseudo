void __fastcall QuestPickupMaster___ctor(QuestPickupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16758 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__, method, v2);
    byte_4B16758 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    270,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
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

  if ( (byte_4B1675A & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&questId, method);
    byte_4B1675A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
  Time = NetworkManager__getTime(0LL);
  List = QuestPickupMaster__getList(this, questId, v6);
  if ( !List )
LABEL_15:
    sub_1BCAA3C(List, v8);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B16759 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPickupEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPickupEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestPickupEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&QuestPickupEntity_TypeInfo, v16, v17);
    byte_4B16759 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestPickupEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      methodPtr_low = LOBYTE(QuestPickupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestPickupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == QuestPickupEntity_TypeInfo
        && *(_DWORD *)(list + 16) == questId )
      {
        if ( !v18 )
          goto LABEL_20;
        items = v18->fields._items;
        v30 = Method_System_Collections_Generic_List_QuestPickupEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (QuestPickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v18,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
}