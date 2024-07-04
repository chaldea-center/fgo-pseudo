void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48E2D28 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v3);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v4);
    byte_48E2D28 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v5;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.isCached, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    69,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x0

  if ( (byte_48E2D2A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__, method);
    byte_48E2D2A = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v4 )
    sub_1B00F28(0LL, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_30366B4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int klass_high; // w8

  if ( (byte_48E2D31 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v8);
    byte_48E2D31 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1B00F28(list, *(_QWORD *)&questId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == questId )
      {
        klass_high = HIDWORD(Item[1].klass);
        if ( klass_high == 49 )
          return 3;
        if ( klass_high == 48 )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_14;
  }
  if ( winGroup1 )
    return 1;
  else
    return 2;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_o *__fastcall QuestReleaseMaster__GetEntity(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_48E2D26 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_48E2D26 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  void *Instance; // x0
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v31; // x23
  int32_t v32; // w25
  __int64 methodPtr_low; // x10
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass *v39; // x1
  Il2CppClass **v40; // x0
  System_Comparison_T__o *v41; // x19
  Il2CppObject *v42; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_List_int__o *v46; // x19
  _BOOL8 v47; // x0
  __int64 v48; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E2D30 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B00CCC(&System_Comparison_QuestEntity__TypeInfo, v9);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestEntity__Add__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v21);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B00CCC(&System_Collections_Generic_List_QuestEntity__TypeInfo, v23);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v24);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B00CCC(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, v26);
    sub_1B00CCC(&QuestReleaseMaster___c_TypeInfo, v27);
    byte_48E2D30 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_23;
  v32 = 0;
  while ( v32 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v32,
                 (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Instance )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Instance + 5) == type
        && *((_DWORD *)Instance + 6) == targetId
        && ((value & 0x80000000) != 0 || *((_DWORD *)Instance + 8) == value) )
      {
        if ( !MasterData_object )
          goto LABEL_23;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     *((_DWORD *)Instance + 4),
                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Instance )
        {
          if ( !v31 )
            goto LABEL_23;
          items = v31->fields._items;
          v37 = Method_System_Collections_Generic_List_QuestEntity__Add__;
          ++v31->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v31->fields._size;
          v39 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              (Il2CppObject *)Instance,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v31->fields._size = size + 1;
            v40[4] = v39;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v39, v34, v35);
          }
        }
      }
    }
    Instance = this->fields.list;
    ++v32;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = QuestReleaseMaster___c_TypeInfo;
  if ( !QuestReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo);
    Instance = QuestReleaseMaster___c_TypeInfo;
  }
  v41 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v41 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestReleaseMaster___c_TypeInfo;
    }
    v42 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v41 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_object____ctor(v41, v42, Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, 0LL);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_QuestEntity__o *)v41;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)v41, v44, v45);
  }
  if ( !v31 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_54277268(
    v31,
    v41,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v46 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    v31,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v47 )
      break;
    if ( !v56.fields._current )
      sub_1B00F28(v47, v48);
    if ( !v46 )
      sub_1B00F28(v47, v48);
    klass_low = LODWORD(v56.fields._current[1].klass);
    v50 = v46->fields._items;
    v51 = Method_System_Collections_Generic_List_int__Add__;
    ++v46->fields._version;
    if ( !v50 )
      sub_1B00F28(v47, klass_low);
    v52 = v46->fields._size;
    if ( (unsigned int)v52 >= v50->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v46,
        klass_low,
        *(const MethodInfo_33A49AC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v46->fields._size = v52 + 1;
      v50->m_Items[v52 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v46 )
LABEL_23:
    sub_1B00F28(Instance, v29);
  return System_Collections_Generic_List_int___ToArray(
           v46,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Master_object; // x0
  __int64 v12; // x1
  CommonReleaseMaster_o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  __int64 methodPtr_low; // x10
  int v18; // w8

  if ( (byte_48E2D2F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_1B00CCC(&DataManager_TypeInfo, v9);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v10);
    byte_48E2D2F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_20:
    sub_1B00F28(Master_object, v12);
  v13 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    Master_object = this->fields.list;
    if ( !Master_object )
      goto LABEL_20;
    Master_object = System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                      v16,
                      (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Master_object )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Master_object + 4) == targetId )
      {
        v18 = *((_DWORD *)Master_object + 5);
        if ( v18 == condType )
          return 1;
        if ( v18 == 113 )
        {
          if ( !v13 )
            goto LABEL_20;
          if ( CommonReleaseMaster__IsContainCondType(v13, *((_DWORD *)Master_object + 6), condType, 0LL) )
            return 1;
        }
      }
    }
    if ( v15 == ++v16 )
      return 0;
  }
}


bool __fastcall QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
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
  __int64 v18; // x21
  QuestGroupMaster_o *Master_object; // x0
  __int64 v20; // x1
  QuestGroupMaster_o *v21; // x22
  int32_t Count; // w0
  int32_t v23; // w23
  int32_t v24; // w24
  Il2CppObject *v25; // x27
  int32_t v26; // w2
  int32_t v27; // w3
  QuestReleaseEntity_c *v28; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v30; // x10
  int32_t v31; // w1
  ServantStatusBattleListViewItem_o *v32; // x26
  System_Predicate_int__o *v33; // x28
  const MethodInfo *v34; // x3
  ServantStatusBattleListViewItem_c *klass; // x8
  int v36; // w9
  int name_high; // w10
  ServantStatusBattleListViewItem_c *v38; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v40; // x27
  System_Predicate_int__o *v41; // x28
  int32_t v42; // w2
  int32_t v43; // w3
  ServantStatusBattleListViewItem_o *v45; // [xsp+0h] [xbp-70h]

  if ( (byte_48E2D33 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Exists_int___, questIdList);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_1B00CCC(&DataManager_TypeInfo, v10);
    sub_1B00CCC(&System_Predicate_int__TypeInfo, v11);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v12);
    sub_1B00CCC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_1B00CCC(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__, v14);
    sub_1B00CCC(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, v15);
    sub_1B00CCC(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__, v16);
    sub_1B00CCC(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v17);
    byte_48E2D33 = 1;
  }
  v18 = sub_1B00F18(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_48;
  *(_DWORD *)(v18 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_48:
    sub_1B00F28(Master_object, v20);
  v21 = Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v23 = Count;
  v24 = 0;
  v45 = (ServantStatusBattleListViewItem_o *)(v18 + 24);
  while ( 1 )
  {
    v25 = (Il2CppObject *)sub_1B00F18(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    System_Object___ctor(v25, 0LL);
    Master_object = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_object )
      goto LABEL_48;
    Master_object = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                            v24,
                                            (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v25 )
      goto LABEL_48;
    if ( Master_object )
    {
      v28 = QuestReleaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v30 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
            ? (Il2CppClass *)Master_object
            : 0LL;
      else
        v30 = 0LL;
      v25[1].klass = v30;
      v32 = (ServantStatusBattleListViewItem_o *)&v25[1];
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v31 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == v28
            ? (int)Master_object
            : 0;
      else
        v31 = 0;
    }
    else
    {
      v31 = 0;
      v25[1].klass = 0LL;
      v32 = (ServantStatusBattleListViewItem_o *)&v25[1];
    }
    sub_1B00C70(v32, v31, v26, v27);
    if ( v32->klass )
    {
      v33 = (System_Predicate_int__o *)sub_1B00F18(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v33,
        v25,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0LL);
      Master_object = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                              questIdList,
                                              (System_Predicate_T__o *)v33,
                                              (const MethodInfo_2E42DC4 *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        klass = v32->klass;
        if ( !v32->klass )
          goto LABEL_48;
        v36 = *(_DWORD *)(v18 + 16);
        if ( LODWORD(klass->_1.name) != v36 )
        {
          name_high = HIDWORD(klass->_1.name);
          if ( name_high == 32 )
          {
            Master_object = v21;
            if ( !v21 )
              goto LABEL_48;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v21, (int32_t)klass->_1.namespaze, 2, v34);
            if ( !QuestIdListByGroupId )
              goto LABEL_45;
            v40 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_45;
            v41 = (System_Predicate_int__o *)v45->klass;
            if ( !v45->klass )
            {
              v41 = (System_Predicate_int__o *)sub_1B00F18(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v41,
                (Il2CppObject *)v18,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0LL);
              *(_QWORD *)(v18 + 24) = v41;
              sub_1B00C70(v45, (int32_t)v41, v42, v43);
            }
            if ( !System_Array__Exists_int_(
                    v40,
                    (System_Predicate_T__o *)v41,
                    (const MethodInfo_2E42DC4 *)Method_System_Array_Exists_int___) )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v38 = v32->klass;
            if ( !v32->klass || !Master_object )
              goto LABEL_48;
          }
          else
          {
            if ( name_high != 1 || LODWORD(klass->_1.namespaze) != v36 )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v38 = v32->klass;
            if ( !v32->klass || !Master_object )
              goto LABEL_48;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, (int32_t)v38->_1.name, 0LL) )
            return 1;
          Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !v32->klass || !Master_object )
            goto LABEL_48;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, (int32_t)v32->klass->_1.name, 0, 0LL) )
            return 1;
        }
      }
    }
LABEL_45:
    if ( v23 == ++v24 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsQuestOfResultBattleCleared(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w21
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_48E2D32 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    byte_48E2D32 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B00F28(list, *(_QWORD *)&targetId);
  v9 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v9 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = Item;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48
        && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_15;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v12[1].klass, 0, 0LL) )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_15;
  }
  return v9 < Count;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__TryGetEntity(
        QuestReleaseMaster_o *this,
        QuestReleaseEntity_o **entity,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_48E2D27 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, entity);
    byte_48E2D27 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
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

  if ( (byte_48E2D29 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&qid);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v10);
    byte_48E2D29 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == qid )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
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
    sub_1B00F28(list, v12);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestReleaseMaster__getListByQuestID_38270468(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
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
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x22
  QuestReleaseOverwriteMaster_o *Master_object; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v29; // x8
  int32_t v30; // w2
  int v31; // w9
  const MethodInfo *v32; // x1
  System_Collections_Generic_List_object__o *v33; // x20
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x1
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  const MethodInfo_3037CB8 **v42; // x26
  int v43; // w22
  int32_t v44; // w23
  QuestReleaseOverwriteMaster_o *v45; // x24
  __int64 methodPtr_low; // x10
  int32_t MasterKind_k__BackingField; // w25
  int32_t v48; // w2
  int32_t v49; // w3
  const MethodInfo_3037CB8 **v50; // x29
  System_Collections_Generic_List_object__o *v51; // x26
  Il2CppClass *klass; // x8
  _QWORD *v53; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v55; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v56; // x8
  int32_t size; // w2
  int v58; // w9
  int monitor; // w22
  int32_t v60; // w20
  System_Collections_Generic_List_object__o *v61; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  QuestReleaseOverwriteMaster_o *v67; // x1
  Il2CppClass **v68; // x0
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v70; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_48E2D2B & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v8);
    sub_1B00CCC(&DataManager_TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v21);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v22);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v23);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v24);
    byte_48E2D2B = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v70 = 0LL;
  value = 0LL;
  v25 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_53;
  Master_object = (QuestReleaseOverwriteMaster_o *)QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                                                     Master_object,
                                                     &entityList,
                                                     questId,
                                                     0LL,
                                                     v28);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
      if ( !Master_object )
        goto LABEL_53;
      Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                         (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v42 = (const MethodInfo_3037CB8 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v43 = (int)Master_object;
        v44 = 0;
        do
        {
          Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
          if ( !Master_object )
            goto LABEL_53;
          Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v44,
                                                             (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Master_object )
          {
            v45 = Master_object;
            methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
              && (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo )
            {
              Master_object = *(QuestReleaseOverwriteMaster_o **)&this->fields.isCached;
              if ( !Master_object )
                goto LABEL_53;
              MasterKind_k__BackingField = v45->fields._MasterKind_k__BackingField;
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      MasterKind_k__BackingField,
                      &value,
                      *v42) )
              {
                v50 = v42;
                v51 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v51,
                  (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (Il2CppObject *)v51;
                Master_object = *(QuestReleaseOverwriteMaster_o **)&this->fields.isCached;
                if ( !Master_object )
                  goto LABEL_53;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  MasterKind_k__BackingField,
                  (Il2CppObject *)v51,
                  (const MethodInfo_3036518 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v42 = v50;
              }
              Master_object = (QuestReleaseOverwriteMaster_o *)value;
              if ( !value )
                goto LABEL_53;
              klass = value[1].klass;
              v53 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( !klass )
                goto LABEL_53;
              MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Master_object,
                  (Il2CppObject *)v45,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                v55 = &klass->_1.image + MasterName_k__BackingField_low;
                LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v55[4] = v45;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v45, v48, v49);
              }
            }
          }
        }
        while ( v43 != ++v44 );
      }
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    v56 = *resultList;
    if ( *resultList )
    {
      size = v56->fields._size;
      v58 = v56->fields._version + 1;
      v56->fields._size = 0;
      v56->fields._version = v58;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v56->fields._items, 0, size, 0LL);
      Master_object = *(QuestReleaseOverwriteMaster_o **)&this->fields.isCached;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v70,
                (const MethodInfo_3037CB8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (QuestReleaseOverwriteMaster_o *)v70;
        if ( v70 )
        {
          monitor = (int)v70[1].monitor;
          if ( monitor < 1 )
            return;
          v60 = 0;
          do
          {
            v61 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)Master_object,
                                                               v60,
                                                               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v61 )
              break;
            items = v61->fields._items;
            v65 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v61->fields._version;
            if ( !items )
              break;
            v66 = v61->fields._size;
            v67 = Master_object;
            if ( (unsigned int)v66 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v61,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
            }
            else
            {
              v68 = &items->obj.klass + v66;
              v61->fields._size = v66 + 1;
              v68[4] = (Il2CppClass *)v67;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v67, v62, v63);
            }
            if ( monitor == ++v60 )
              return;
            Master_object = (QuestReleaseOverwriteMaster_o *)v70;
          }
          while ( v70 );
        }
      }
    }
LABEL_53:
    sub_1B00F28(Master_object, v27);
  }
  v29 = *resultList;
  if ( !*resultList )
    goto LABEL_53;
  v30 = v29->fields._size;
  v31 = v29->fields._version + 1;
  v29->fields._size = 0;
  v29->fields._version = v31;
  if ( v30 >= 1 )
    System_Array__Clear((System_Array_o *)v29->fields._items, 0, v30, 0LL);
  if ( !v25 )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    v25,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v72 = v69;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v72.fields._current )
      sub_1B00F28(0LL, v32);
    v33 = (System_Collections_Generic_List_object__o *)*resultList;
    v34 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v72.fields._current,
                            v32);
    v37 = v34;
    if ( !v33 )
      sub_1B00F28(v34, v34);
    v38 = v33->fields._items;
    v39 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v33->fields._version;
    if ( !v38 )
      sub_1B00F28(v34, v34);
    v40 = v33->fields._size;
    if ( (unsigned int)v40 >= v38->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        v34,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &v38->obj.klass + v40;
      v33->fields._size = v40 + 1;
      v41[4] = (Il2CppClass *)v37;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v37, v35, v36);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
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

  if ( (byte_48E2D2E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v10);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v11);
    byte_48E2D2E = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
          && LODWORD(list[1].klass) == targetId
          && HIDWORD(list->fields.items) == condType )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v13;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v13, v18, v19);
          }
        }
      }
      if ( v16 == ++v17 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
    }
LABEL_19:
    sub_1B00F28(list, v13);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
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

  if ( (byte_48E2D2C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v10);
    byte_48E2D2C = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && HIDWORD(list->fields.items) == type )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
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
    sub_1B00F28(list, v12);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x22
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v16; // w23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_48E2D2D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v12);
    byte_48E2D2D = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v16,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list[1].klass) == targetId
        && HIDWORD(list->fields.items) == openCondType )
      {
        if ( !v13 )
          goto LABEL_21;
        items_low = LODWORD(list->fields.items);
        items = v13->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            items_low,
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = items_low;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v13 )
LABEL_21:
    sub_1B00F28(list, items_low);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E2D34 & 1) == 0 )
  {
    sub_1B00CCC(&QuestReleaseMaster___c_TypeInfo, v1);
    byte_48E2D34 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)QuestReleaseMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestReleaseMaster___c___ctor(QuestReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestReleaseMaster___c___GetQuestIdList_b__12_0(
        QuestReleaseMaster___c_o *this,
        QuestEntity_o *a,
        QuestEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (QuestReleaseMaster___c_o *)QuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1B00F28(this, a);
  return (_DWORD)this - QuestEntity__getPriority(a, (const MethodInfo *)a);
}


void __fastcall QuestReleaseMaster___c__DisplayClass15_0___ctor(
        QuestReleaseMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass15_0___IsContainUnPlayableQuestByTargetId_b__1(
        QuestReleaseMaster___c__DisplayClass15_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


void __fastcall QuestReleaseMaster___c__DisplayClass15_1___ctor(
        QuestReleaseMaster___c__DisplayClass15_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass15_1___IsContainUnPlayableQuestByTargetId_b__0(
        QuestReleaseMaster___c__DisplayClass15_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B00F28(this, x);
  return data->fields.questId == x;
}