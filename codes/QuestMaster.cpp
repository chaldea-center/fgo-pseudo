void QuestMaster___ctor(QuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6905 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
    byte_4CB6905 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    72,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
}


bool QuestMaster__CheckBpEnabled(
        QuestMaster_o *this,
        System_Collections_Generic_List_int__o *questIds,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v8; // x22
  int32_t v9; // w23
  QuestEntity_o *v10; // x25
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB690D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4CB690D = 1;
  }
  entity = 0;
  list = this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__),
        (list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_30:
    sub_1C6BC60(list, questIds);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v8 = (UserQuestMaster_o *)MasterData_object;
  v9 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_30;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v9,
             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    if ( list )
    {
      if ( !questIds )
        goto LABEL_30;
      v10 = (QuestEntity_o *)list;
      if ( System_Collections_Generic_List_int___Remove(
             questIds,
             *((_DWORD *)list + 4),
             (const MethodInfo_37E4E4C *)Method_System_Collections_Generic_List_int__Remove__) )
      {
        if ( v10->fields.mIsPhaseDetailed
          || (PhaseDetail = QuestEntity__GetPhaseDetail(v10, (const MethodInfo *)questIds)) == 0 )
        {
          p_consumeType = &v10->fields.consumeType;
        }
        else
        {
          p_consumeType = &PhaseDetail->fields.consumeType;
        }
        if ( *p_consumeType == 2 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CB002A )
          {
            sub_1C6BA08(&NetworkManager_TypeInfo);
            byte_4CB002A = 1;
          }
          list = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            list = NetworkManager_TypeInfo;
          }
          if ( !v8 )
            goto LABEL_30;
          if ( UserQuestMaster__TryGetEntity(v8, &entity, *(_QWORD *)(*((_QWORD *)list + 23) + 64LL), v10->fields.id, 0) )
            return 1;
          list = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !list )
            goto LABEL_30;
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)list, v10->fields.id, 0, 0) )
            return 1;
        }
      }
    }
    if ( Count == ++v9 )
      return 0;
  }
}


bool QuestMaster__CheckQuestPhaseWithNoBattle(
        QuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x20
  int64_t *p_flag; // x8
  _BOOL4 v12; // w0
  QuestPhaseDetailEntity_o *PhaseDetail_42704012; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB6912 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4CB6912 = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v7 )
  {
    v10 = entity;
    if ( !entity )
      sub_1C6BC60(v7, v8);
    if ( *((_BYTE *)&qword_A8 + (_QWORD)entity + 4)
      || (PhaseDetail_42704012 = QuestEntity__GetPhaseDetail_42704012((QuestEntity_o *)entity, questPhase, v9)) == 0 )
    {
      p_flag = (int64_t *)&v10[9];
    }
    else
    {
      p_flag = &PhaseDetail_42704012->fields.flag;
    }
    return (*(unsigned __int8 *)p_flag >> 1) & 1;
  }
  else
  {
    LOBYTE(v12) = 0;
  }
  return v12;
}


int32_t QuestMaster__Count(QuestMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4CB690C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
    byte_4CB690C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
}


QuestEntity_array *QuestMaster__GetQuestEntityList(
        QuestMaster_o *this,
        System_Int32_array *questList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  _BOOL8 v6; // x0
  Il2CppObject *v7; // x1
  __int64 v8; // x22
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB690E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    byte_4CB690E = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( questList && (int)questList->max_length >= 1 )
  {
    v8 = 0;
    v9 = (unsigned int)questList->max_length - 1LL;
    while ( 1 )
    {
      v6 = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             &entity,
             questList->m_Items[v8],
             (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
      if ( v6 )
      {
        if ( !v5 )
          goto LABEL_17;
        v7 = entity;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v7;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v7, v10, v11);
        }
      }
      if ( v9 == v8 )
        break;
      if ( ++v8 >= (unsigned __int64)LODWORD(questList->max_length) )
        sub_1C6BC68(v6);
    }
  }
  if ( !v5 )
LABEL_17:
    sub_1C6BC60(v6, v7);
  return (QuestEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_QuestEntity__ToArray__);
}


QuestEntity_array *QuestMaster__GetQuestEntityListByType(QuestMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  QuestMaster___c_c *v9; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v11; // x22
  struct QuestMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4CB6908 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_QuestEntity__QuestEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C6BA08(&System_Func_QuestEntity__QuestEntity__TypeInfo);
    sub_1C6BA08(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_QuestMaster___c__GetQuestEntityListByType_b__3_0__);
    sub_1C6BA08(&Method_QuestMaster___c__DisplayClass3_0__GetQuestEntityListByType_b__1__);
    sub_1C6BA08(&QuestMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C6BA08(&QuestMaster___c_TypeInfo);
    byte_4CB6908 = 1;
  }
  v5 = sub_1C6BC54(QuestMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = type;
  list = this->fields.list;
  v9 = QuestMaster___c_TypeInfo;
  if ( !QuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestMaster___c_TypeInfo);
    v9 = QuestMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v9->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_QuestEntity__QuestEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v11, Method_QuestMaster___c__GetQuestEntityListByType_b__3_0__, 0);
    static_fields = QuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_QuestEntity__QuestEntity__o *)_9__3_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_QuestEntity__QuestEntity___);
  v16 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_QuestMaster___c__DisplayClass3_0__GetQuestEntityListByType_b__1__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
  return (QuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                v17,
                                (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *QuestMaster__GetQuestEntitybyIdx(QuestMaster_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4CB690B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    byte_4CB690B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, *(_QWORD *)&idx);
  return (QuestEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                            list,
                            idx,
                            (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
}


System_Collections_Generic_List_int__o *QuestMaster__GetQuestIdListWithScriptId(
        QuestMaster_o *this,
        int32_t scriptId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t i; // w22
  int klass; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_4CB6907 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB6907 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1C6BC60(list, items_low);
  for ( i = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__)
          - 1; i >= 0; --i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    if ( list )
    {
      klass = (int)list[7].klass;
      if ( klass == scriptId )
      {
        items_low = LODWORD(list->fields.items);
      }
      else
      {
        if ( klass > 0 )
          continue;
        items_low = (unsigned int)scriptId;
        if ( LODWORD(list->fields.items) != scriptId )
          continue;
      }
      if ( !v5 )
        goto LABEL_19;
      items = v5->fields._items;
      v11 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          items_low,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = items_low;
      }
    }
  }
  return v5;
}


int32_t QuestMaster__GetQuestType(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4CB6914 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6914 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = 1 << LODWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t QuestMaster__GetSpotId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CB6913 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6913 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = QuestEntity__getSpotId((QuestEntity_o *)Entity, v6);
  return (int)Entity;
}


int32_t QuestMaster__GetWarIdByQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CB690F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB690F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v4);
  }
  return QuestMaster__GetWarIdFromQuestId((QuestMaster_o *)Instance, questId, v5);
}


int32_t QuestMaster__GetWarIdFromQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB6910 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4CB6910 = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          questId,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1C6BC60(0, v5);
  return QuestEntity__GetWarId((QuestEntity_o *)entity, v5);
}


bool QuestMaster__HasFlag(int32_t questId, int64_t flag, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v8; // x1
  QuestEntity_o *v9; // x20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4CB6915 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6915 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v6);
  }
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questId,
                              (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = Entity;
    if ( Entity->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(Entity, v8)) == 0 )
      p_flag = &v9->fields.flag;
    else
      p_flag = &PhaseDetail->fields.flag;
    LOBYTE(Entity) = (*p_flag & flag) != 0;
  }
  return (char)Entity;
}


bool QuestMaster__IsQuestPhaseWithNoBattle(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4CB6911 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6911 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v6);
  }
  return QuestMaster__CheckQuestPhaseWithNoBattle((QuestMaster_o *)Instance, questId, questPhase, v7);
}


bool QuestMaster__TryGetPrivilegePeriodMessage(
        System_String_o **infoText,
        int64_t *endedAt,
        int32_t quesId,
        const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x4
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w23
  System_String_o *OpenedPeriodMessage; // x0
  System_String_o *v14; // x22
  const MethodInfo *v15; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByQuestIdTargetIdAndCondType; // x21
  int32_t revision; // w21
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  int64_t startedAt; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CB6916 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB6916 = 1;
  }
  entity = 0;
  startedAt = 0;
  *endedAt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, quesId, 1, v9) )
    goto LABEL_24;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  Master_object = (QuestPhaseMaster_o *)QuestPhaseEntity__GetOpenedPeriodPrivilegeId(entity, v8);
  if ( !entity )
    goto LABEL_26;
  v12 = (int)Master_object;
  OpenedPeriodMessage = QuestPhaseEntity__GetOpenedPeriodMessage(entity, v8);
  if ( v12 < 1 )
    goto LABEL_24;
  v14 = OpenedPeriodMessage;
  if ( System_String__IsNullOrEmpty(OpenedPeriodMessage, 0) )
    goto LABEL_24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  ListByQuestIdTargetIdAndCondType = QuestReleaseMaster__GetListByQuestIdTargetIdAndCondType(
                                       (QuestReleaseMaster_o *)Master_object,
                                       quesId,
                                       v12,
                                       247,
                                       v15);
  Master_object = (QuestPhaseMaster_o *)System_Linq_Enumerable__Any_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestIdTargetIdAndCondType,
                                          (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( ListByQuestIdTargetIdAndCondType )
    {
      Master_object = (QuestPhaseMaster_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)ListByQuestIdTargetIdAndCondType,
                                              0,
                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
      if ( Master_object )
      {
        revision = Master_object->fields.revision;
        goto LABEL_19;
      }
    }
LABEL_26:
    sub_1C6BC60(Master_object, v8);
  }
  revision = 1;
LABEL_19:
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsValidPrivilege(v12, revision, &startedAt, endedAt, 0) && *endedAt >= 1 )
  {
    *infoText = v14;
    sub_1C6B9AC((CGThumbnailListItem_o *)infoText, (int32_t)v14, v10, v11);
    return 1;
  }
LABEL_24:
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *infoText = static_fields->Empty;
  sub_1C6B9AC((CGThumbnailListItem_o *)infoText, (int32_t)Empty, v10, v11);
  return 0;
}


bool QuestMaster__TryGetQuestEntity(
        QuestMaster_o *this,
        QuestEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_4CB690A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4CB690A = 1;
  }
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           questId,
           (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


QuestEntity_o *QuestMaster__getQuestEntity(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4CB6909 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_4CB6909 = 1;
  }
  return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            questId,
                            (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}


int32_t QuestMaster__getScriptQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB6906 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4CB6906 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C6BC60(v5, v6);
    if ( *(int *)((char *)&qword_A8 + (_QWORD)entity) > 0 )
      return *(_DWORD *)((char *)&qword_A8 + (_QWORD)entity);
  }
  return questId;
}


void QuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6917 & 1) == 0 )
  {
    sub_1C6BA08(&QuestMaster___c_TypeInfo);
    byte_4CB6917 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(QuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestMaster___c_TypeInfo->static_fields->__9 = (struct QuestMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)QuestMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestMaster___c___ctor(QuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


QuestEntity_o *QuestMaster___c___GetQuestEntityListByType_b__3_0(
        QuestMaster___c_o *this,
        QuestEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
}


void QuestMaster___c__DisplayClass3_0___ctor(QuestMaster___c__DisplayClass3_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestMaster___c__DisplayClass3_0___GetQuestEntityListByType_b__1(
        QuestMaster___c__DisplayClass3_0_o *this,
        QuestEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.type == this->fields.type;
}