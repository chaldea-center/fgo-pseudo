void __fastcall QuestMaster___ctor(QuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02536 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__, method);
    byte_4B02536 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    72,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
}


bool __fastcall QuestMaster__CheckBpEnabled(
        QuestMaster_o *this,
        System_Collections_Generic_List_int__o *questIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v14; // x22
  int32_t v15; // w23
  QuestEntity_o *v16; // x25
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B0253E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__, questIds);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Remove__, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BC3008(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    byte_4B0253E = 1;
  }
  entity = 0LL;
  list = this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__),
        (list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_30:
    sub_1BC3264(list, questIds);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v14 = (UserQuestMaster_o *)MasterData_object;
  v15 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_30;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v15,
             (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    if ( list )
    {
      if ( !questIds )
        goto LABEL_30;
      v16 = (QuestEntity_o *)list;
      if ( System_Collections_Generic_List_int___Remove(
             questIds,
             *((_DWORD *)list + 4),
             (const MethodInfo_3685318 *)Method_System_Collections_Generic_List_int__Remove__) )
      {
        if ( v16->fields.mIsPhaseDetailed
          || (PhaseDetail = QuestEntity__GetPhaseDetail(v16, (const MethodInfo *)questIds)) == 0LL )
        {
          p_consumeType = &v16->fields.consumeType;
        }
        else
        {
          p_consumeType = &PhaseDetail->fields.consumeType;
        }
        if ( *p_consumeType == 2 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4AFC1F1 )
          {
            sub_1BC3008(&NetworkManager_TypeInfo, questIds);
            byte_4AFC1F1 = 1;
          }
          list = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            list = NetworkManager_TypeInfo;
          }
          if ( !v14 )
            goto LABEL_30;
          if ( UserQuestMaster__TryGetEntity(
                 v14,
                 &entity,
                 *(_QWORD *)(*((_QWORD *)list + 23) + 64LL),
                 v16->fields.id,
                 0LL) )
          {
            return 1;
          }
          list = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !list )
            goto LABEL_30;
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)list, v16->fields.id, 0LL) )
            return 1;
        }
      }
    }
    if ( Count == ++v15 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestMaster__CheckQuestPhaseWithNoBattle(
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
  QuestPhaseDetailEntity_o *PhaseDetail_41369740; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B02543 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, *(_QWORD *)&questId);
    byte_4B02543 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v7 )
  {
    v10 = entity;
    if ( !entity )
      sub_1BC3264(v7, v8);
    if ( BYTE4(entity[10].monitor)
      || (PhaseDetail_41369740 = QuestEntity__GetPhaseDetail_41369740((QuestEntity_o *)entity, questPhase, v9)) == 0LL )
    {
      p_flag = (int64_t *)&v10[9];
    }
    else
    {
      p_flag = &PhaseDetail_41369740->fields.flag;
    }
    return (*(unsigned __int8 *)p_flag >> 1) & 1;
  }
  else
  {
    LOBYTE(v12) = 0;
  }
  return v12;
}


int32_t __fastcall QuestMaster__Count(QuestMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4B0253D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__, method);
    byte_4B0253D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
}


QuestEntity_array *__fastcall QuestMaster__GetQuestEntityList(
        QuestMaster_o *this,
        System_Int32_array *questList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  _BOOL8 v10; // x0
  Il2CppObject *v11; // x1
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B0253F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, questList);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestEntity__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestEntity__ToArray__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_QuestEntity__TypeInfo, v8);
    byte_4B0253F = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( questList && (int)*(_QWORD *)&questList->max_length >= 1 )
  {
    v12 = 0LL;
    v13 = (unsigned int)*(_QWORD *)&questList->max_length - 1LL;
    while ( 1 )
    {
      v10 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              questList->m_Items[v12 + 1],
              (const MethodInfo_32AF0BC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
      if ( v10 )
      {
        if ( !v9 )
          goto LABEL_17;
        v11 = entity;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v11,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
      if ( v13 == v12 )
        break;
      if ( ++v12 >= (unsigned __int64)questList->max_length )
        sub_1BC326C(v10, v11, v14);
    }
  }
  if ( !v9 )
LABEL_17:
    sub_1BC3264(v10, v11);
  return (QuestEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v9,
                                (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_QuestEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_array *__fastcall QuestMaster__GetQuestEntityListByType(
        QuestMaster_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  QuestMaster___c_c *v17; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v19; // x22
  struct QuestMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4B02539 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_QuestEntity__QuestEntity___, *(_QWORD *)&type);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_QuestEntity___, v6);
    sub_1BC3008(&System_Func_QuestEntity__QuestEntity__TypeInfo, v7);
    sub_1BC3008(&System_Func_QuestEntity__bool__TypeInfo, v8);
    sub_1BC3008(&Method_QuestMaster___c__GetQuestEntityListByType_b__3_0__, v9);
    sub_1BC3008(&Method_QuestMaster___c__DisplayClass3_0__GetQuestEntityListByType_b__1__, v10);
    sub_1BC3008(&QuestMaster___c__DisplayClass3_0_TypeInfo, v11);
    sub_1BC3008(&QuestMaster___c_TypeInfo, v12);
    byte_4B02539 = 1;
  }
  v13 = sub_1BC3254(QuestMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BC3264(v14, v15);
  *(_DWORD *)(v13 + 16) = type;
  list = this->fields.list;
  v17 = QuestMaster___c_TypeInfo;
  if ( !QuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestMaster___c_TypeInfo);
    v17 = QuestMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v17->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = QuestMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BC3254(System_Func_QuestEntity__QuestEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v19, Method_QuestMaster___c__GetQuestEntityListByType_b__3_0__, 0LL);
    static_fields = QuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_QuestEntity__QuestEntity__o *)_9__3_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select_QuestEntity__QuestEntity___);
  v24 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_QuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_QuestMaster___c__DisplayClass3_0__GetQuestEntityListByType_b__1__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
  return (QuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                v25,
                                (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall QuestMaster__GetQuestEntitybyIdx(QuestMaster_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4B0253C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__, *(_QWORD *)&idx);
    byte_4B0253C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, *(_QWORD *)&idx);
  return (QuestEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                            list,
                            idx,
                            (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestMaster__GetQuestIdListWithScriptId(
        QuestMaster_o *this,
        int32_t scriptId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x21
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t i; // w22
  int klass; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4B02538 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__, *(_QWORD *)&scriptId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4B02538 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1BC3264(list, items_low);
  for ( i = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__)
          - 1; i >= 0; --i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
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
      if ( !v9 )
        goto LABEL_19;
      items = v9->fields._items;
      v15 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          items_low,
          *(const MethodInfo_3683E1C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size + 1] = items_low;
      }
    }
  }
  return v9;
}


int32_t __fastcall QuestMaster__GetQuestType(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B02545 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B02545 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = 1 << LODWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetSpotId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B02544 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B02544 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = QuestEntity__getSpotId((QuestEntity_o *)Entity, v8);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetWarIdByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B02540 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B02540 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v5);
  }
  return QuestMaster__GetWarIdFromQuestId((QuestMaster_o *)Instance, questId, v6);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestMaster__GetWarIdFromQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B02541 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, *(_QWORD *)&questId);
    byte_4B02541 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          questId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1BC3264(0LL, v5);
  return QuestEntity__GetWarId((QuestEntity_o *)entity, v5);
}


bool __fastcall QuestMaster__HasFlag(int32_t questId, int64_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v10; // x1
  QuestEntity_o *v11; // x20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4B02546 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, flag);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B02546 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v8);
  }
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questId,
                              (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
  {
    v11 = Entity;
    if ( Entity->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(Entity, v10)) == 0LL )
      p_flag = &v11->fields.flag;
    else
      p_flag = &PhaseDetail->fields.flag;
    LOBYTE(Entity) = (*p_flag & flag) != 0;
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestMaster__IsQuestPhaseWithNoBattle(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4B02542 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questPhase);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B02542 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v7);
  }
  return QuestMaster__CheckQuestPhaseWithNoBattle((QuestMaster_o *)Instance, questId, questPhase, v8);
}


bool __fastcall QuestMaster__TryGetPrivilegePeriodMessage(
        System_String_o **infoText,
        int64_t *endedAt,
        int32_t quesId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w23
  System_String_o *OpenedPeriodMessage; // x0
  System_String_o *v19; // x22
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByQuestIdTargetIdAndCondType; // x21
  int32_t ValueInt; // w21
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  int64_t startedAt; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B02547 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, endedAt);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestPhaseMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestReleaseMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v11);
    sub_1BC3008(&string_TypeInfo, v12);
    byte_4B02547 = 1;
  }
  entity = 0LL;
  startedAt = 0LL;
  *endedAt = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, quesId, 1, 0LL) )
    goto LABEL_24;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  Master_object = (QuestPhaseMaster_o *)QuestPhaseEntity__GetOpenedPeriodPrivilegeId(entity, 0LL);
  if ( !entity )
    goto LABEL_26;
  v17 = (int)Master_object;
  OpenedPeriodMessage = QuestPhaseEntity__GetOpenedPeriodMessage(entity, 0LL);
  if ( v17 < 1 )
    goto LABEL_24;
  v19 = OpenedPeriodMessage;
  if ( System_String__IsNullOrEmpty(OpenedPeriodMessage, 0LL) )
    goto LABEL_24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  ListByQuestIdTargetIdAndCondType = QuestReleaseMaster__GetListByQuestIdTargetIdAndCondType(
                                       (QuestReleaseMaster_o *)Master_object,
                                       quesId,
                                       v17,
                                       247,
                                       0LL);
  Master_object = (QuestPhaseMaster_o *)System_Linq_Enumerable__Any_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestIdTargetIdAndCondType,
                                          (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( ListByQuestIdTargetIdAndCondType )
    {
      Master_object = (QuestPhaseMaster_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)ListByQuestIdTargetIdAndCondType,
                                              0,
                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
      if ( Master_object )
      {
        ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Master_object, 0LL);
        goto LABEL_19;
      }
    }
LABEL_26:
    sub_1BC3264(Master_object, v14);
  }
  ValueInt = 1;
LABEL_19:
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsValidPrivilege(v17, ValueInt, &startedAt, endedAt, 0LL) && *endedAt >= 1 )
  {
    *infoText = v19;
    sub_1BC2FAC((CGThumbnailListItem_o *)infoText, (int32_t)v19, v15, v16);
    return 1;
  }
LABEL_24:
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *infoText = static_fields->Empty;
  sub_1BC2FAC((CGThumbnailListItem_o *)infoText, (int32_t)Empty, v15, v16);
  return 0;
}


bool __fastcall QuestMaster__TryGetQuestEntity(
        QuestMaster_o *this,
        QuestEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_4B0253B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, entity);
    byte_4B0253B = 1;
  }
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           questId,
           (const MethodInfo_32AF0BC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall QuestMaster__getQuestEntity(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4B0253A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, *(_QWORD *)&questId);
    byte_4B0253A = 1;
  }
  return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            questId,
                            (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestMaster__getScriptQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  int32_t v3; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = questId;
  if ( (byte_4B02537 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, *(_QWORD *)&questId);
    byte_4B02537 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         v3,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1BC3264(v5, v6);
    if ( SLODWORD(entity[10].monitor) > 0 )
      return (int32_t)entity[10].monitor;
  }
  return v3;
}


void __fastcall QuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B02548 & 1) == 0 )
  {
    sub_1BC3008(&QuestMaster___c_TypeInfo, v1);
    byte_4B02548 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(QuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestMaster___c_TypeInfo->static_fields->__9 = (struct QuestMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)QuestMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestMaster___c___ctor(QuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall QuestMaster___c___GetQuestEntityListByType_b__3_0(
        QuestMaster___c_o *this,
        QuestEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
}


void __fastcall QuestMaster___c__DisplayClass3_0___ctor(
        QuestMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestMaster___c__DisplayClass3_0___GetQuestEntityListByType_b__1(
        QuestMaster___c__DisplayClass3_0_o *this,
        QuestEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.type == this->fields.type;
}