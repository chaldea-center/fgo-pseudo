void __fastcall QuestMaster___ctor(QuestMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1667F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__, method, v2);
    byte_4B1667F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    68,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int___ctor__);
}


bool __fastcall QuestMaster__CheckBpEnabled(
        QuestMaster_o *this,
        System_Collections_Generic_List_int__o *questIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v22; // x22
  int32_t v23; // w23
  QuestEntity_o *v24; // x24
  __int64 methodPtr_low; // x10
  int32_t *p_consumeType; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16687 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIds, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v17, v18);
    byte_4B16687 = 1;
  }
  entity = 0LL;
  list = (int64_t)this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_28:
    sub_1BCAA3C(list, questIds);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v22 = (UserQuestMaster_o *)MasterData_object;
  v23 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v23,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v24 = (QuestEntity_o *)list;
      methodPtr_low = LOBYTE(QuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == QuestEntity_TypeInfo )
      {
        if ( !questIds )
          goto LABEL_28;
        if ( System_Collections_Generic_List_int___Remove(
               questIds,
               *(_DWORD *)(list + 16),
               (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__) )
        {
          if ( v24->fields.mIsPhaseDetailed
            || (PhaseDetail = QuestEntity__GetPhaseDetail(v24, (const MethodInfo *)questIds)) == 0LL )
          {
            p_consumeType = &v24->fields.consumeType;
          }
          else
          {
            p_consumeType = &PhaseDetail->fields.consumeType;
          }
          if ( *p_consumeType == 2 )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, questIds);
            list = NetworkManager__get_UserId(0LL);
            if ( !v22 )
              goto LABEL_28;
            if ( UserQuestMaster__TryGetEntity(v22, &entity, list, v24->fields.id, 0LL) )
              return 1;
            list = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !list )
              goto LABEL_28;
            if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)list, v24->fields.id, 0LL) )
              return 1;
          }
        }
      }
    }
    if ( Count == ++v23 )
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
  QuestPhaseDetailEntity_o *PhaseDetail_40196060; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1668C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&questPhase);
    byte_4B1668C = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v7 )
  {
    v10 = entity;
    if ( !entity )
      sub_1BCAA3C(v7, v8);
    if ( BYTE4(entity[10].monitor)
      || (PhaseDetail_40196060 = QuestEntity__GetPhaseDetail_40196060((QuestEntity_o *)entity, questPhase, v9)) == 0LL )
    {
      p_flag = (int64_t *)&v10[9];
    }
    else
    {
      p_flag = &PhaseDetail_40196060->fields.flag;
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
  __int64 v2; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4B16686 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    byte_4B16686 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


QuestEntity_array *__fastcall QuestMaster__GetQuestEntityList(
        QuestMaster_o *this,
        System_Int32_array *questList,
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
  System_Collections_Generic_List_object__o *v14; // x21
  _BOOL8 v15; // x0
  Il2CppObject *v16; // x1
  __int64 v17; // x22
  __int64 v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16688 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, questList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestEntity__TypeInfo, v12, v13);
    byte_4B16688 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                       questList,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( questList && (int)*(_QWORD *)&questList->max_length >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)*(_QWORD *)&questList->max_length - 1LL;
    while ( 1 )
    {
      v15 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              questList->m_Items[v17 + 1],
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
      if ( v15 )
      {
        if ( !v14 )
          goto LABEL_17;
        v16 = entity;
        items = v14->fields._items;
        v26 = Method_System_Collections_Generic_List_QuestEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            v16,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v16;
          sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v16, v19, v20, v21, v22, v23, v24);
        }
      }
      if ( v18 == v17 )
        break;
      if ( ++v17 >= (unsigned __int64)questList->max_length )
        sub_1BCAA44(v15, v16);
    }
  }
  if ( !v14 )
LABEL_17:
    sub_1BCAA3C(v15, v16);
  return (QuestEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v14,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_array *__fastcall QuestMaster__GetQuestEntityListByType(
        QuestMaster_o *this,
        int32_t type,
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  QuestMaster___c_c *v28; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v30; // x22
  struct QuestMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_object__bool__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_4B16682 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__QuestEntity___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_QuestEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_DataEntityBase__QuestEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_QuestEntity__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_QuestMaster___c__GetQuestEntityListByType_b__3_0__, v14, v15);
    sub_1BCA7E0(&Method_QuestMaster___c__DisplayClass3_0__GetQuestEntityListByType_b__1__, v16, v17);
    sub_1BCA7E0(&QuestMaster___c__DisplayClass3_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&QuestMaster___c_TypeInfo, v20, v21);
    byte_4B16682 = 1;
  }
  v22 = sub_1BCAA2C(QuestMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&type, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  *(_DWORD *)(v22 + 16) = type;
  list = this->fields.list;
  v28 = QuestMaster___c_TypeInfo;
  if ( !QuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestMaster___c_TypeInfo, v24);
    v28 = QuestMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v28->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v24);
      v28 = QuestMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__QuestEntity__TypeInfo,
                                                 v24,
                                                 v25,
                                                 v26);
    System_Func_object__object____ctor(_9__3_0, v30, Method_QuestMaster___c__GetQuestEntityListByType_b__3_0__, 0LL);
    static_fields = QuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__QuestEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__QuestEntity___);
  v42 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestEntity__bool__TypeInfo, v39, v40, v41);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v22,
    Method_QuestMaster___c__DisplayClass3_0__GetQuestEntityListByType_b__1__,
    0LL);
  v43 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
  return (QuestEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                v43,
                                (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall QuestMaster__GetQuestEntitybyIdx(QuestMaster_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  QuestEntity_o *result; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4B16685 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&QuestEntity_TypeInfo, v5, v6);
    byte_4B16685 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_9:
    sub_1BCAA3C(list, *(_QWORD *)&idx);
  result = (QuestEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                              list,
                              idx,
                              (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  if ( result )
  {
    methodPtr_low = LOBYTE(QuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestEntity_TypeInfo )
    {
      sub_1BCACFC(result);
      goto LABEL_9;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestMaster__GetQuestIdListWithScriptId(
        QuestMaster_o *this,
        int32_t scriptId,
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
  System_Collections_Generic_List_int__o *v16; // x21
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t i; // w22
  __int64 methodPtr_low; // x10
  int klass; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  if ( (byte_4B16681 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&scriptId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v12, v13);
    sub_1BCA7E0(&QuestEntity_TypeInfo, v14, v15);
    byte_4B16681 = 1;
  }
  v16 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&scriptId,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_1BCAA3C(list, items_low);
  for ( i = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
          - 1; i >= 0; --i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( !v16 )
          goto LABEL_22;
        items = v16->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_22;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v16,
            items_low,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v16->fields._size = size + 1;
          items->m_Items[size + 1] = items_low;
        }
      }
    }
  }
  return v16;
}


int32_t __fastcall QuestMaster__GetQuestType(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B1668E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1668E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = 1 << LODWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetSpotId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B1668D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1668D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = QuestEntity__getSpotId((QuestEntity_o *)Entity, v11);
  return (int)Entity;
}


int32_t __fastcall QuestMaster__GetWarIdByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B16689 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16689 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return QuestMaster__GetWarIdFromQuestId((QuestMaster_o *)Instance, questId, v8);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestMaster__GetWarIdFromQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1668A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, *(_QWORD *)&questId, method);
    byte_4B1668A = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          questId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1BCAA3C(0LL, v5);
  return QuestEntity__GetWarId((QuestEntity_o *)entity, v5);
}


bool __fastcall QuestMaster__HasFlag(int32_t questId, int64_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  QuestEntity_o *Entity; // x0
  const MethodInfo *v12; // x1
  QuestEntity_o *v13; // x20
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0

  if ( (byte_4B1668F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, flag, method);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1668F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questId,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
  {
    v13 = Entity;
    if ( Entity->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(Entity, v12)) == 0LL )
      p_flag = &v13->fields.flag;
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
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B1668B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questPhase, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B1668B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  return QuestMaster__CheckQuestPhaseWithNoBattle((QuestMaster_o *)Instance, questId, questPhase, v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestMaster__TryGetQuestEntity(
        QuestMaster_o *this,
        QuestEntity_o **entity,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_4B16684 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, entity, *(_QWORD *)&questId);
    byte_4B16684 = 1;
  }
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           questId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *__fastcall QuestMaster__getQuestEntity(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4B16683 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, *(_QWORD *)&questId, method);
    byte_4B16683 = 1;
  }
  return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            questId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestMaster__getScriptQuestId(QuestMaster_o *this, int32_t questId, const MethodInfo *method)
{
  int32_t v3; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = questId;
  if ( (byte_4B16680 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, *(_QWORD *)&questId, method);
    byte_4B16680 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         v3,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1BCAA3C(v5, v6);
    if ( SLODWORD(entity[10].monitor) > 0 )
      return (int32_t)entity[10].monitor;
  }
  return v3;
}


void __fastcall QuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16690 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestMaster___c_TypeInfo, v1, v2);
    byte_4B16690 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestMaster___c_TypeInfo->static_fields->__9 = (struct QuestMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall QuestMaster___c___ctor(QuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall QuestMaster___c___GetQuestEntityListByType_b__3_0(
        QuestMaster___c_o *this,
        DataEntityBase_o *ent,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B16691 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestEntity_TypeInfo, ent, method);
    byte_4B16691 = 1;
  }
  if ( !ent )
    return 0LL;
  methodPtr_low = LOBYTE(QuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (QuestEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestEntity_TypeInfo )
    return (QuestEntity_o *)ent;
  return 0LL;
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