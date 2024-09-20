void __fastcall QuestMaster___ctor(QuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B5D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
    byte_4A5B5D3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    68,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
}


bool __fastcall QuestMaster__CheckBpEnabled(
        QuestMaster_o *this,
        System_Collections_Generic_List_int__o *questIds,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v8; // x22
  int32_t v9; // w23
  QuestEntity_o *v10; // x24
  __int64 methodPtr_low; // x10
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B5DA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&QuestEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A5B5DA = 1;
  }
  entity = 0LL;
  list = (int64_t)this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_28:
    sub_1B8880C(list, questIds);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v8 = (UserQuestMaster_o *)MasterData_object;
  v9 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v9,
                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v10 = (QuestEntity_o *)list;
      methodPtr_low = LOBYTE(QuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == QuestEntity_TypeInfo )
      {
        if ( !questIds )
          goto LABEL_28;
        if ( System_Collections_Generic_List_int___Remove(
               questIds,
               *(_DWORD *)(list + 16),
               (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__) )
        {
          if ( v10->fields.mIsPhaseDetailed
            || (PhaseDetail = QuestEntity__GetPhaseDetail(v10, (const MethodInfo *)questIds)) == 0LL )
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
            list = NetworkManager__get_UserId(0LL);
            if ( !v8 )
              goto LABEL_28;
            if ( UserQuestMaster__TryGetEntity(v8, &entity, list, v10->fields.id, 0LL) )
              return 1;
            list = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !list )
              goto LABEL_28;
            if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)list, v10->fields.id, 0LL) )
              return 1;
          }
        }
      }
    }
    if ( Count == ++v9 )
      return 0;
  }
}


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
  QuestPhaseDetailEntity_o *PhaseDetail_39469212; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B5DF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4A5B5DF = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v7 )
  {
    v10 = entity;
    if ( !entity )
      sub_1B8880C(v7, v8);
    if ( BYTE4(entity[10].monitor)
      || (PhaseDetail_39469212 = QuestEntity__GetPhaseDetail_39469212((QuestEntity_o *)entity, questPhase, v9)) == 0LL )
    {
      p_flag = (int64_t *)&v10[9];
    }
    else
    {
      p_flag = &PhaseDetail_39469212->fields.flag;
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

  if ( (byte_4A5B5D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    byte_4A5B5D9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


QuestEntity_array *__fastcall QuestMaster__GetQuestEntityList(
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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5B5DB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    byte_4A5B5DB = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( questList && (int)*(_QWORD *)&questList->max_length >= 1 )
  {
    v8 = 0LL;
    v9 = (unsigned int)*(_QWORD *)&questList->max_length - 1LL;
    while ( 1 )
    {
      v6 = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             &entity,
             questList->m_Items[v8 + 1],
             (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v7;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v7, v10, v11);
        }
      }
      if ( v9 == v8 )
        break;
      if ( ++v8 >= (unsigned __int64)questList->max_length )
        sub_1B88814(v6, v7);
    }
  }
  if ( !v5 )
LABEL_17:
    sub_1B8880C(v6, v7);
  return (QuestEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall QuestMaster__GetQuestEntitybyIdx(QuestMaster_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  QuestEntity_o *result; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4A5B5D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&QuestEntity_TypeInfo);
    byte_4A5B5D8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_9:
    sub_1B8880C(list, *(_QWORD *)&idx);
  result = (QuestEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                              list,
                              idx,
                              (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  if ( result )
  {
    methodPtr_low = LOBYTE(QuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestEntity_TypeInfo )
    {
      sub_1B88ACC(result);
      goto LABEL_9;
    }
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall QuestMaster__GetQuestIdListWithScriptId(
        QuestMaster_o *this,
        int32_t scriptId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t i; // w22
  __int64 methodPtr_low; // x10
  int klass; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4A5B5D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&QuestEntity_TypeInfo);
    byte_4A5B5D5 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_1B8880C(list, items_low);
  for ( i = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
          - 1; i >= 0; --i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      methodPtr_low = LOBYTE(QuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestEntity_TypeInfo )
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
          goto LABEL_22;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_22;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            items_low,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size + 1] = items_low;
        }
      }
    }
  }
  return v5;
}


int32_t __fastcall QuestMaster__GetQuestType(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5B5E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = 1 << LODWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetSpotId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A5B5E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = QuestEntity__getSpotId((QuestEntity_o *)Entity, v6);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetWarIdByQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A5B5DC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return QuestMaster__GetWarIdFromQuestId((QuestMaster_o *)Instance, questId, v5);
}


int32_t __fastcall QuestMaster__GetWarIdFromQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B5DD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4A5B5DD = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          questId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1B8880C(0LL, v5);
  return QuestEntity__GetWarId((QuestEntity_o *)entity, v5);
}


bool __fastcall QuestMaster__HasFlag(int32_t questId, int64_t flag, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v8; // x1
  QuestEntity_o *v9; // x20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4A5B5E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questId,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = Entity;
    if ( Entity->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(Entity, v8)) == 0LL )
      p_flag = &v9->fields.flag;
    else
      p_flag = &PhaseDetail->fields.flag;
    LOBYTE(Entity) = (*p_flag & flag) != 0;
  }
  return (char)Entity;
}


bool __fastcall QuestMaster__IsQuestPhaseWithNoBattle(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A5B5DE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B5DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return QuestMaster__CheckQuestPhaseWithNoBattle((QuestMaster_o *)Instance, questId, questPhase, v7);
}


bool __fastcall QuestMaster__TryGetQuestEntity(
        QuestMaster_o *this,
        QuestEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_4A5B5D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4A5B5D7 = 1;
  }
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           questId,
           (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


QuestEntity_o *__fastcall QuestMaster__getQuestEntity(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4A5B5D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_4A5B5D6 = 1;
  }
  return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            questId,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}


int32_t __fastcall QuestMaster__getScriptQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B5D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    byte_4A5B5D4 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1B8880C(v5, v6);
    if ( SLODWORD(entity[10].monitor) > 0 )
      return (int32_t)entity[10].monitor;
  }
  return questId;
}