void QuestMaster___ctor(QuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938D19 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
    byte_5938D19 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    72,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
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
  bool v10; // w29
  QuestEntity_o *v11; // x25
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5938D20 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_5938D20 = 1;
  }
  list = this->fields.list;
  entity = 0;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
  list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count >= 1 )
  {
    v8 = (UserQuestMaster_o *)MasterData_object;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
      if ( list )
      {
        if ( !questIds )
          break;
        v11 = (QuestEntity_o *)list;
        if ( System_Collections_Generic_List_int___Remove(
               questIds,
               *((_DWORD *)list + 4),
               (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__) )
        {
          if ( v11->fields.mIsPhaseDetailed
            || (PhaseDetail = QuestEntity__GetPhaseDetail(v11, (const MethodInfo *)questIds)) == 0 )
          {
            p_consumeType = &v11->fields.consumeType;
          }
          else
          {
            p_consumeType = &PhaseDetail->fields.consumeType;
          }
          if ( *p_consumeType == 2 )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, questIds);
            if ( !byte_5931D52 )
            {
              sub_21FFC50(&NetworkManager_TypeInfo);
              byte_5931D52 = 1;
            }
            list = NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, questIds);
              list = NetworkManager_TypeInfo;
            }
            if ( !v8 )
              break;
            if ( UserQuestMaster__TryGetEntity(
                   v8,
                   &entity,
                   *(_QWORD *)(*((_QWORD *)list + 23) + 64LL),
                   v11->fields.id,
                   0) )
            {
              return v10;
            }
            list = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !list )
              break;
            if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)list, v11->fields.id, 0, 0) )
              return v10;
          }
        }
      }
      v10 = ++v9 < Count;
      if ( Count == v9 )
        return v10;
    }
LABEL_30:
    sub_21FFECC(list, questIds);
  }
  return 0;
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
  QuestPhaseDetailEntity_o *PhaseDetail_49428408; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938D25 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_5938D25 = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v7 )
  {
    v10 = entity;
    if ( !entity )
      sub_21FFECC(v7, v8);
    if ( *((_BYTE *)&qword_A8 + (_QWORD)entity + 4)
      || (PhaseDetail_49428408 = QuestEntity__GetPhaseDetail_49428408((QuestEntity_o *)entity, questPhase, v9)) == 0 )
    {
      p_flag = (int64_t *)&v10[9];
    }
    else
    {
      p_flag = &PhaseDetail_49428408->fields.flag;
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

  if ( (byte_5938D1F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
    byte_5938D1F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
}


QuestEntity_array *QuestMaster__GetQuestEntityList(
        QuestMaster_o *this,
        System_Int32_array *questList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  _BOOL8 v6; // x0
  Il2CppObject *v7; // x1
  unsigned __int64 v8; // x22
  __int64 max_length; // x25
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5938D21 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    byte_5938D21 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( questList && (int)questList->max_length >= 1 )
  {
    v8 = 0;
    max_length = (unsigned int)questList->max_length;
    do
    {
      if ( v8 >= LODWORD(questList->max_length) )
        sub_21FFED4(v6);
      v6 = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             &entity,
             questList->m_Items[v8],
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
      if ( v6 )
      {
        if ( !v5 )
          goto LABEL_16;
        items = v5->fields._items;
        v7 = entity;
        v17 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v7;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v7, v10, v11, v12, v13, v14, v15);
        }
      }
      ++v8;
    }
    while ( max_length != v8 );
  }
  if ( !v5 )
LABEL_16:
    sub_21FFECC(v6, v7);
  return (QuestEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_QuestEntity__ToArray__);
}


QuestEntity_array *QuestMaster__GetQuestEntityListByType(QuestMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  QuestMaster___c_c *v9; // x0
  struct QuestMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__2_0; // x21
  Il2CppObject *v12; // x22
  struct QuestMaster___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_object__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_5938D1B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_QuestEntity__QuestEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_21FFC50(&System_Func_QuestEntity__QuestEntity__TypeInfo);
    sub_21FFC50(&System_Func_QuestEntity__bool__TypeInfo);
    sub_21FFC50(&Method_QuestMaster___c__GetQuestEntityListByType_b__2_0__);
    sub_21FFC50(&Method_QuestMaster___c__DisplayClass2_0__GetQuestEntityListByType_b__1__);
    sub_21FFC50(&QuestMaster___c__DisplayClass2_0_TypeInfo);
    sub_21FFC50(&QuestMaster___c_TypeInfo);
    byte_5938D1B = 1;
  }
  v5 = sub_21FFEBC(QuestMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = this->fields.list;
  *(_DWORD *)(v5 + 16) = type;
  v9 = QuestMaster___c_TypeInfo;
  if ( !*(&QuestMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestMaster___c_TypeInfo, v7);
    v9 = QuestMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__2_0 = (System_Func_object__object__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      static_fields = QuestMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_QuestEntity__QuestEntity__TypeInfo);
    System_Func_object__object____ctor(_9__2_0, v12, Method_QuestMaster___c__GetQuestEntityListByType_b__2_0__, 0);
    v13 = QuestMaster___c_TypeInfo->static_fields;
    v13->__9__2_0 = (struct System_Func_QuestEntity__QuestEntity__o *)_9__2_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__2_0, (int32_t)_9__2_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_QuestEntity__QuestEntity___);
  v21 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_QuestMaster___c__DisplayClass2_0__GetQuestEntityListByType_b__1__,
    0);
  v22 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
  return (QuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                v22,
                                (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *QuestMaster__GetQuestEntitybyIdx(QuestMaster_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_5938D1E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    byte_5938D1E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&idx);
  return (QuestEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                            list,
                            idx,
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
}


int32_t QuestMaster__GetQuestType(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_5938D27 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938D27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_5938D26 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938D26 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = QuestEntity__getSpotId((QuestEntity_o *)Entity, v6);
  return (int)Entity;
}


int32_t QuestMaster__GetWarIdByQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5938D22 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938D22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return QuestMaster__GetWarIdFromQuestId((QuestMaster_o *)Instance, questId, v5);
}


int32_t QuestMaster__GetWarIdFromQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938D23 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_5938D23 = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          questId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_21FFECC(0, v5);
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

  if ( (byte_5938D28 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938D28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questId,
                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_5938D24 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938D24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  return QuestMaster__CheckQuestPhaseWithNoBattle((QuestMaster_o *)Instance, questId, questPhase, v7);
}


bool QuestMaster__TryGetPrivilegePeriodMessage(
        System_String_o **infoText,
        int64_t *endedAt,
        int32_t quesId,
        const MethodInfo *method)
{
  DataManager_c *v7; // x0
  int v8; // w8
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x4
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w23
  System_String_o *OpenedPeriodMessage; // x0
  System_String_o *v20; // x22
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByQuestIdTargetIdAndCondType; // x21
  int32_t revision; // w21
  bool v25; // w20
  int64_t startedAt; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5938D29 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_5938D29 = 1;
  }
  v7 = DataManager_TypeInfo;
  entity = 0;
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  startedAt = 0;
  *endedAt = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, endedAt);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, quesId, 1, v11) )
    goto LABEL_24;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  Master_object = (QuestPhaseMaster_o *)QuestPhaseEntity__GetOpenedPeriodPrivilegeId(entity, v10);
  if ( !entity )
    goto LABEL_26;
  v18 = (int)Master_object;
  OpenedPeriodMessage = QuestPhaseEntity__GetOpenedPeriodMessage(entity, v10);
  if ( v18 < 1 || (v20 = OpenedPeriodMessage, System_String__IsNullOrEmpty(OpenedPeriodMessage, 0)) )
  {
LABEL_24:
    v25 = 0;
    v20 = **(System_String_o ***)(qword_594C0B8 + 184);
    goto LABEL_25;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
LABEL_26:
    sub_21FFECC(Master_object, v10);
  ListByQuestIdTargetIdAndCondType = QuestReleaseMaster__GetListByQuestIdTargetIdAndCondType(
                                       (QuestReleaseMaster_o *)Master_object,
                                       quesId,
                                       v18,
                                       247,
                                       v22);
  Master_object = (QuestPhaseMaster_o *)System_Linq_Enumerable__Any_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestIdTargetIdAndCondType,
                                          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( ListByQuestIdTargetIdAndCondType )
    {
      Master_object = (QuestPhaseMaster_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)ListByQuestIdTargetIdAndCondType,
                                              0,
                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
      if ( Master_object )
      {
        revision = Master_object->fields.revision;
        goto LABEL_19;
      }
    }
    goto LABEL_26;
  }
  revision = 1;
LABEL_19:
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
  if ( !CondType__IsValidPrivilege(v18, revision, &startedAt, endedAt, 0) || *endedAt <= 0 )
    goto LABEL_24;
  v25 = 1;
LABEL_25:
  *infoText = v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)infoText, (int32_t)v20, v12, v13, v14, v15, v16, v17);
  return v25;
}


bool QuestMaster__TryGetQuestEntity(
        QuestMaster_o *this,
        QuestEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_5938D1D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_5938D1D = 1;
  }
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           questId,
           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


QuestEntity_o *QuestMaster__getQuestEntity(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  if ( (byte_5938D1C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_5938D1C = 1;
  }
  return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            questId,
                            (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}


int32_t QuestMaster__getScriptQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938D1A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_5938D1A = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_21FFECC(v5, v6);
    if ( *(int *)((char *)&qword_A8 + (_QWORD)entity) > 0 )
      return *(_DWORD *)((char *)&qword_A8 + (_QWORD)entity);
  }
  return questId;
}


void QuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938D2A & 1) == 0 )
  {
    sub_21FFC50(&QuestMaster___c_TypeInfo);
    byte_5938D2A = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestMaster___c_TypeInfo->static_fields->__9 = (struct QuestMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestMaster___c___ctor(QuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


QuestEntity_o *QuestMaster___c___GetQuestEntityListByType_b__2_0(
        QuestMaster___c_o *this,
        QuestEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
}


void QuestMaster___c__DisplayClass2_0___ctor(QuestMaster___c__DisplayClass2_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestMaster___c__DisplayClass2_0___GetQuestEntityListByType_b__1(
        QuestMaster___c__DisplayClass2_0_o *this,
        QuestEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.type == this->fields.type;
}