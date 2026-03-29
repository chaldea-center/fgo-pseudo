void QuestMaster___ctor(QuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31020 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
    byte_4D31020 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    72,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
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

  if ( (byte_4D31027 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4D31027 = 1;
  }
  entity = 0;
  list = this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__),
        (list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_30:
    sub_1C93D2C(list, questIds);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
             (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    if ( list )
    {
      if ( !questIds )
        goto LABEL_30;
      v10 = (QuestEntity_o *)list;
      if ( System_Collections_Generic_List_int___Remove(
             questIds,
             *((_DWORD *)list + 4),
             (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__) )
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
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
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
          list = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  QuestPhaseDetailEntity_o *PhaseDetail_43180968; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D3102C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4D3102C = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v7 )
  {
    v10 = entity;
    if ( !entity )
      sub_1C93D2C(v7, v8);
    if ( *((_BYTE *)&qword_A8 + (_QWORD)entity + 4)
      || (PhaseDetail_43180968 = QuestEntity__GetPhaseDetail_43180968((QuestEntity_o *)entity, questPhase, v9)) == 0 )
    {
      p_flag = (int64_t *)&v10[9];
    }
    else
    {
      p_flag = &PhaseDetail_43180968->fields.flag;
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

  if ( (byte_4D31026 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
    byte_4D31026 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Count__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D31028 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    byte_4D31028 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
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
             (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
      if ( v6 )
      {
        if ( !v5 )
          goto LABEL_17;
        v7 = entity;
        items = v5->fields._items;
        v17 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v7;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v7, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( v9 == v8 )
        break;
      if ( ++v8 >= (unsigned __int64)LODWORD(questList->max_length) )
        sub_1C93D34(v6);
    }
  }
  if ( !v5 )
LABEL_17:
    sub_1C93D2C(v6, v7);
  return (QuestEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_QuestEntity__ToArray__);
}


QuestEntity_array *QuestMaster__GetQuestEntityListByType(QuestMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  QuestMaster___c_c *v9; // x0
  System_Func_object__object__o *_9__2_0; // x21
  Il2CppObject *v11; // x22
  struct QuestMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_object__bool__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4D31022 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_QuestEntity__QuestEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C93AD4(&System_Func_QuestEntity__QuestEntity__TypeInfo);
    sub_1C93AD4(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_QuestMaster___c__GetQuestEntityListByType_b__2_0__);
    sub_1C93AD4(&Method_QuestMaster___c__DisplayClass2_0__GetQuestEntityListByType_b__1__);
    sub_1C93AD4(&QuestMaster___c__DisplayClass2_0_TypeInfo);
    sub_1C93AD4(&QuestMaster___c_TypeInfo);
    byte_4D31022 = 1;
  }
  v5 = sub_1C93D20(QuestMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = type;
  list = this->fields.list;
  v9 = QuestMaster___c_TypeInfo;
  if ( !QuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestMaster___c_TypeInfo);
    v9 = QuestMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__object__o *)v9->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__2_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_QuestEntity__QuestEntity__TypeInfo);
    System_Func_object__object____ctor(_9__2_0, v11, Method_QuestMaster___c__GetQuestEntityListByType_b__2_0__, 0);
    static_fields = QuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_QuestEntity__QuestEntity__o *)_9__2_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_QuestEntity__QuestEntity___);
  v20 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_QuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_QuestMaster___c__DisplayClass2_0__GetQuestEntityListByType_b__1__,
    0);
  v21 = System_Linq_Enumerable__Where_object_(
          v19,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_QuestEntity___);
  return (QuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                v21,
                                (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *QuestMaster__GetQuestEntitybyIdx(QuestMaster_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4D31025 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
    byte_4D31025 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, *(_QWORD *)&idx);
  return (QuestEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                            list,
                            idx,
                            (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestEntity__get_Item__);
}


int32_t QuestMaster__GetQuestType(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4D3102E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3102E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4D3102D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3102D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = QuestEntity__getSpotId((QuestEntity_o *)Entity, v6);
  return (int)Entity;
}


int32_t QuestMaster__GetWarIdByQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D31029 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31029 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  return QuestMaster__GetWarIdFromQuestId((QuestMaster_o *)Instance, questId, v5);
}


int32_t QuestMaster__GetWarIdFromQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D3102A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4D3102A = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          questId,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1C93D2C(0, v5);
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

  if ( (byte_4D3102F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3102F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v6);
  }
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questId,
                              (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4D3102B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3102B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v6);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w23
  System_String_o *OpenedPeriodMessage; // x0
  System_String_o *v18; // x22
  const MethodInfo *v19; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByQuestIdTargetIdAndCondType; // x21
  int32_t revision; // w21
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  int64_t startedAt; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D31030 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D31030 = 1;
  }
  entity = 0;
  startedAt = 0;
  *endedAt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  v16 = (int)Master_object;
  OpenedPeriodMessage = QuestPhaseEntity__GetOpenedPeriodMessage(entity, v8);
  if ( v16 < 1 )
    goto LABEL_24;
  v18 = OpenedPeriodMessage;
  if ( System_String__IsNullOrEmpty(OpenedPeriodMessage, 0) )
    goto LABEL_24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  ListByQuestIdTargetIdAndCondType = QuestReleaseMaster__GetListByQuestIdTargetIdAndCondType(
                                       (QuestReleaseMaster_o *)Master_object,
                                       quesId,
                                       v16,
                                       247,
                                       v19);
  Master_object = (QuestPhaseMaster_o *)System_Linq_Enumerable__Any_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)ListByQuestIdTargetIdAndCondType,
                                          (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( ListByQuestIdTargetIdAndCondType )
    {
      Master_object = (QuestPhaseMaster_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)ListByQuestIdTargetIdAndCondType,
                                              0,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
      if ( Master_object )
      {
        revision = Master_object->fields.revision;
        goto LABEL_19;
      }
    }
LABEL_26:
    sub_1C93D2C(Master_object, v8);
  }
  revision = 1;
LABEL_19:
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsValidPrivilege(v16, revision, &startedAt, endedAt, 0) && *endedAt >= 1 )
  {
    *infoText = v18;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)infoText, (int32_t)v18, v10, v11, v12, v13, v14, v15);
    return 1;
  }
LABEL_24:
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *infoText = static_fields->Empty;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)infoText, (int32_t)Empty, v10, v11, v12, v13, v14, v15);
  return 0;
}


bool QuestMaster__TryGetQuestEntity(
        QuestMaster_o *this,
        QuestEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_4D31024 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4D31024 = 1;
  }
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           questId,
           (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


QuestEntity_o *QuestMaster__getQuestEntity(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4D31023 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_4D31023 = 1;
  }
  return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            questId,
                            (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}


int32_t QuestMaster__getScriptQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31021 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4D31021 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C93D2C(v5, v6);
    if ( *(int *)((char *)&qword_A8 + (_QWORD)entity) > 0 )
      return *(_DWORD *)((char *)&qword_A8 + (_QWORD)entity);
  }
  return questId;
}


void QuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31031 & 1) == 0 )
  {
    sub_1C93AD4(&QuestMaster___c_TypeInfo);
    byte_4D31031 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(QuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestMaster___c_TypeInfo->static_fields->__9 = (struct QuestMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)QuestMaster___c_TypeInfo->static_fields,
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