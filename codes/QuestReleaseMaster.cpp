void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5B6C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
    byte_4A5B6C7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.isCached, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    70,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x0

  if ( (byte_4A5B6C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
    byte_4A5B6C9 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v4 )
    sub_1B8880C(0LL, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int klass_high; // w8

  if ( (byte_4A5B6D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    byte_4A5B6D0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1B8880C(list, *(_QWORD *)&questId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    ++v8;
    if ( !list )
      goto LABEL_14;
  }
  if ( winGroup1 )
    return 1;
  else
    return 2;
}


QuestReleaseEntity_o *__fastcall QuestReleaseMaster__GetEntity(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B6C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
    byte_4A5B6C5 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


System_Int32_array *__fastcall QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v11; // x23
  int32_t v12; // w25
  __int64 methodPtr_low; // x10
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass *v19; // x1
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x19
  Il2CppObject *v22; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_int__o *v26; // x19
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B6CF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_QuestEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__);
    sub_1B885B0(&QuestReleaseMaster___c_TypeInfo);
    byte_4A5B6CF = 1;
  }
  memset(&v36, 0, sizeof(v36));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_23;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v12,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                     (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Instance )
        {
          if ( !v11 )
            goto LABEL_23;
          items = v11->fields._items;
          v17 = Method_System_Collections_Generic_List_QuestEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v11->fields._size;
          v19 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)Instance,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v20[4] = v19;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
          }
        }
      }
    }
    Instance = this->fields.list;
    ++v12;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = QuestReleaseMaster___c_TypeInfo;
  if ( !QuestReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo);
    Instance = QuestReleaseMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestReleaseMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v21 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, 0LL);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_QuestEntity__o *)v21;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)v21, v24, v25);
  }
  if ( !v11 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_55571192(
    v11,
    v21,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v26 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v11,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v27 )
      break;
    if ( !v36.fields._current )
      sub_1B8880C(v27, v28);
    if ( !v26 )
      sub_1B8880C(v27, v28);
    klass_low = LODWORD(v36.fields._current[1].klass);
    v30 = v26->fields._items;
    v31 = Method_System_Collections_Generic_List_int__Add__;
    ++v26->fields._version;
    if ( !v30 )
      sub_1B8880C(v27, klass_low);
    v32 = v26->fields._size;
    if ( (unsigned int)v32 >= v30->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v26,
        klass_low,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v26->fields._size = v32 + 1;
      v30->m_Items[v32 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v26 )
LABEL_23:
    sub_1B8880C(Instance, v9);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v8; // x1
  CommonReleaseMaster_o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 methodPtr_low; // x10
  int v14; // w8

  if ( (byte_4A5B6CE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    byte_4A5B6CE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_20:
    sub_1B8880C(Master_object, v8);
  v9 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    Master_object = this->fields.list;
    if ( !Master_object )
      goto LABEL_20;
    Master_object = System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                      v12,
                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Master_object )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Master_object + 4) == targetId )
      {
        v14 = *((_DWORD *)Master_object + 5);
        if ( v14 == condType )
          return 1;
        if ( v14 == 113 )
        {
          if ( !v9 )
            goto LABEL_20;
          if ( CommonReleaseMaster__IsContainCondType(v9, *((_DWORD *)Master_object + 6), condType, 0LL) )
            return 1;
        }
      }
    }
    if ( v11 == ++v12 )
      return 0;
  }
}


bool __fastcall QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x21
  QuestGroupMaster_o *Master_object; // x0
  __int64 v9; // x1
  QuestGroupMaster_o *v10; // x22
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24
  Il2CppObject *v14; // x27
  int32_t v15; // w2
  int32_t v16; // w3
  QuestReleaseEntity_c *v17; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v19; // x10
  int32_t v20; // w1
  ServantStatusBattleListViewItem_o *v21; // x26
  System_Predicate_int__o *v22; // x28
  const MethodInfo *v23; // x3
  ServantStatusBattleListViewItem_c *klass; // x8
  int v25; // w9
  int name_high; // w10
  ServantStatusBattleListViewItem_c *v27; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v29; // x27
  System_Predicate_int__o *v30; // x28
  int32_t v31; // w2
  int32_t v32; // w3
  ServantStatusBattleListViewItem_o *v34; // [xsp+0h] [xbp-70h]

  if ( (byte_4A5B6D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Exists_int___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__);
    sub_1B885B0(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
    sub_1B885B0(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__);
    sub_1B885B0(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    byte_4A5B6D2 = 1;
  }
  v7 = sub_1B887FC(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_48;
  *(_DWORD *)(v7 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_48:
    sub_1B8880C(Master_object, v9);
  v10 = Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v12 = Count;
  v13 = 0;
  v34 = (ServantStatusBattleListViewItem_o *)(v7 + 24);
  while ( 1 )
  {
    v14 = (Il2CppObject *)sub_1B887FC(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    System_Object___ctor(v14, 0LL);
    Master_object = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_object )
      goto LABEL_48;
    Master_object = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                            v13,
                                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v14 )
      goto LABEL_48;
    if ( Master_object )
    {
      v17 = QuestReleaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v19 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
            ? (Il2CppClass *)Master_object
            : 0LL;
      else
        v19 = 0LL;
      v14[1].klass = v19;
      v21 = (ServantStatusBattleListViewItem_o *)&v14[1];
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v20 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == v17
            ? (int)Master_object
            : 0;
      else
        v20 = 0;
    }
    else
    {
      v20 = 0;
      v14[1].klass = 0LL;
      v21 = (ServantStatusBattleListViewItem_o *)&v14[1];
    }
    sub_1B88554(v21, v20, v15, v16);
    if ( v21->klass )
    {
      v22 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v22,
        v14,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0LL);
      Master_object = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                              questIdList,
                                              (System_Predicate_T__o *)v22,
                                              (const MethodInfo_2F77F4C *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        klass = v21->klass;
        if ( !v21->klass )
          goto LABEL_48;
        v25 = *(_DWORD *)(v7 + 16);
        if ( LODWORD(klass->_1.name) != v25 )
        {
          name_high = HIDWORD(klass->_1.name);
          if ( name_high == 32 )
          {
            Master_object = v10;
            if ( !v10 )
              goto LABEL_48;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v10, (int32_t)klass->_1.namespaze, 2, v23);
            if ( !QuestIdListByGroupId )
              goto LABEL_45;
            v29 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_45;
            v30 = (System_Predicate_int__o *)v34->klass;
            if ( !v34->klass )
            {
              v30 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v30,
                (Il2CppObject *)v7,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0LL);
              *(_QWORD *)(v7 + 24) = v30;
              sub_1B88554(v34, (int32_t)v30, v31, v32);
            }
            if ( !System_Array__Exists_int_(
                    v29,
                    (System_Predicate_T__o *)v30,
                    (const MethodInfo_2F77F4C *)Method_System_Array_Exists_int___) )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v27 = v21->klass;
            if ( !v21->klass || !Master_object )
              goto LABEL_48;
          }
          else
          {
            if ( name_high != 1 || LODWORD(klass->_1.namespaze) != v25 )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v27 = v21->klass;
            if ( !v21->klass || !Master_object )
              goto LABEL_48;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, (int32_t)v27->_1.name, 0LL) )
            return 1;
          Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !v21->klass || !Master_object )
            goto LABEL_48;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, (int32_t)v21->klass->_1.name, 0, 0LL) )
            return 1;
        }
      }
    }
LABEL_45:
    if ( v12 == ++v13 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsQuestOfResultBattleCleared(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B6D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A5B6D1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&targetId);
  v6 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v6 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v6,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v9 = Item;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48
        && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_15;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v9[1].klass, 0, 0LL) )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_15;
  }
  return v6 < Count;
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

  if ( (byte_4A5B6C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    byte_4A5B6C6 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B6C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    byte_4A5B6C8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == qid )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


void __fastcall QuestReleaseMaster__getListByQuestID_39525884(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  QuestReleaseOverwriteMaster_o *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v11; // x8
  int32_t v12; // w2
  int v13; // w9
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  const MethodInfo_316F0E4 **v24; // x26
  int v25; // w22
  int32_t v26; // w23
  QuestReleaseOverwriteMaster_o *v27; // x24
  __int64 methodPtr_low; // x10
  int32_t MasterKind_k__BackingField; // w25
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo_316F0E4 **v32; // x29
  System_Collections_Generic_List_object__o *v33; // x26
  Il2CppClass *klass; // x8
  _QWORD *v35; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v37; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v38; // x8
  int32_t size; // w2
  int v40; // w9
  int monitor; // w22
  int32_t v42; // w20
  System_Collections_Generic_List_object__o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  QuestReleaseOverwriteMaster_o *v49; // x1
  Il2CppClass **v50; // x0
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v52; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A5B6CA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    byte_4A5B6CA = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v52 = 0LL;
  value = 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_53;
  Master_object = (QuestReleaseOverwriteMaster_o *)QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                                                     Master_object,
                                                     &entityList,
                                                     questId,
                                                     0LL,
                                                     v10);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
      if ( !Master_object )
        goto LABEL_53;
      Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v24 = (const MethodInfo_316F0E4 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v25 = (int)Master_object;
        v26 = 0;
        do
        {
          Master_object = (QuestReleaseOverwriteMaster_o *)this->fields.list;
          if ( !Master_object )
            goto LABEL_53;
          Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v26,
                                                             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Master_object )
          {
            v27 = Master_object;
            methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
              && (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo )
            {
              Master_object = *(QuestReleaseOverwriteMaster_o **)&this->fields.isCached;
              if ( !Master_object )
                goto LABEL_53;
              MasterKind_k__BackingField = v27->fields._MasterKind_k__BackingField;
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      MasterKind_k__BackingField,
                      &value,
                      *v24) )
              {
                v32 = v24;
                v33 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v33,
                  (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (Il2CppObject *)v33;
                Master_object = *(QuestReleaseOverwriteMaster_o **)&this->fields.isCached;
                if ( !Master_object )
                  goto LABEL_53;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  MasterKind_k__BackingField,
                  (Il2CppObject *)v33,
                  (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v24 = v32;
              }
              Master_object = (QuestReleaseOverwriteMaster_o *)value;
              if ( !value )
                goto LABEL_53;
              klass = value[1].klass;
              v35 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( !klass )
                goto LABEL_53;
              MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Master_object,
                  (Il2CppObject *)v27,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v37 = &klass->_1.image + MasterName_k__BackingField_low;
                LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v37[4] = v27;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v27, v30, v31);
              }
            }
          }
        }
        while ( v25 != ++v26 );
      }
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    v38 = *resultList;
    if ( *resultList )
    {
      size = v38->fields._size;
      v40 = v38->fields._version + 1;
      v38->fields._size = 0;
      v38->fields._version = v40;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v38->fields._items, 0, size, 0LL);
      Master_object = *(QuestReleaseOverwriteMaster_o **)&this->fields.isCached;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v52,
                (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (QuestReleaseOverwriteMaster_o *)v52;
        if ( v52 )
        {
          monitor = (int)v52[1].monitor;
          if ( monitor < 1 )
            return;
          v42 = 0;
          do
          {
            v43 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (QuestReleaseOverwriteMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)Master_object,
                                                               v42,
                                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v43 )
              break;
            items = v43->fields._items;
            v47 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v43->fields._version;
            if ( !items )
              break;
            v48 = v43->fields._size;
            v49 = Master_object;
            if ( (unsigned int)v48 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v43,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v50 = &items->obj.klass + v48;
              v43->fields._size = v48 + 1;
              v50[4] = (Il2CppClass *)v49;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v49, v44, v45);
            }
            if ( monitor == ++v42 )
              return;
            Master_object = (QuestReleaseOverwriteMaster_o *)v52;
          }
          while ( v52 );
        }
      }
    }
LABEL_53:
    sub_1B8880C(Master_object, v9);
  }
  v11 = *resultList;
  if ( !*resultList )
    goto LABEL_53;
  v12 = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( v12 >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, v12, 0LL);
  if ( !v7 )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    v7,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v54 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v54.fields._current )
      sub_1B8880C(0LL, v14);
    v15 = (System_Collections_Generic_List_object__o *)*resultList;
    v16 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v54.fields._current,
                            v14);
    v19 = v16;
    if ( !v15 )
      sub_1B8880C(v16, v16);
    v20 = v15->fields._items;
    v21 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v15->fields._version;
    if ( !v20 )
      sub_1B8880C(v16, v16);
    v22 = v15->fields._size;
    if ( (unsigned int)v22 >= v20->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        v16,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &v20->obj.klass + v22;
      v15->fields._size = v22 + 1;
      v23[4] = (Il2CppClass *)v19;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
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

  if ( (byte_4A5B6CD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    byte_4A5B6CD = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
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
        methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
          && LODWORD(list[1].klass) == targetId
          && HIDWORD(list->fields.items) == condType )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v17 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
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
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
    }
LABEL_19:
    sub_1B8880C(list, v8);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
}


QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B6CB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    byte_4A5B6CB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && HIDWORD(list->fields.items) == type )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4A5B6CC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    byte_4A5B6CC = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list[1].klass) == targetId
        && HIDWORD(list->fields.items) == openCondType )
      {
        if ( !v7 )
          goto LABEL_21;
        items_low = LODWORD(list->fields.items);
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            items_low,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = items_low;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v7 )
LABEL_21:
    sub_1B8880C(list, items_low);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B6D3 & 1) == 0 )
  {
    sub_1B885B0(&QuestReleaseMaster___c_TypeInfo);
    byte_4A5B6D3 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)QuestReleaseMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, x);
  return data->fields.questId == x;
}