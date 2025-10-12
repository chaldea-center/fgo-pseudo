void ServantCommentAddMaster___ctor(ServantCommentAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38248 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
    byte_4C38248 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    186,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantCommentAddMaster__GetConditionString(
        ServantCommentAddMaster_o *this,
        System_String_o *textType,
        System_String_o *textType2,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  System_String_o *v13; // x22
  ServantCommentAddEntity_o *EntitiyList; // x0
  const MethodInfo *v15; // x2
  __int64 v16; // x8
  ServantCommentAddEntity_o *v17; // x23
  int v18; // w20
  int v19; // w29
  __int64 v20; // x20
  int v21; // w28
  int32_t *p_condType; // x25
  __int64 v23; // x24
  const MethodInfo *v24; // x5
  int32_t *v25; // x19
  int32_t v26; // w26
  int32_t v27; // w27
  System_Int32_array *v28; // x25
  int32_t v29; // w24
  int v30; // w21
  System_String_o *v31; // x28
  System_String_o *ConditionText; // x24
  System_String_o *v33; // x0
  int32_t v35; // [xsp+Ch] [xbp-74h]

  if ( (byte_4C3824B & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&ServantCommentEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_3722/*"COND_TYPE_AND_FLAVOR2"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3824B = 1;
  }
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddMaster__GetEntitiyList(
                                               this,
                                               svtId,
                                               id,
                                               priority,
                                               *(const MethodInfo **)&id);
  if ( !EntitiyList )
LABEL_30:
    sub_1C32E7C(EntitiyList);
  v16 = *(_QWORD *)&EntitiyList->fields.priority;
  v17 = EntitiyList;
  if ( (int)v16 >= 1 )
  {
    v18 = 0;
    v19 = 0;
    while ( v18 < (unsigned int)v16 )
    {
      EntitiyList = (ServantCommentAddEntity_o *)*((_QWORD *)&v17->fields.condType + v18);
      if ( !EntitiyList )
        goto LABEL_30;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(EntitiyList, oldFriendShipRank, v15);
      v16 = *(_QWORD *)&v17->fields.priority;
      ++v18;
      v19 += ((unsigned __int8)EntitiyList & 1) == 0;
      if ( v18 >= (int)v16 )
        goto LABEL_11;
    }
LABEL_29:
    sub_1C32E84(EntitiyList);
  }
  v19 = 0;
LABEL_11:
  if ( (int)v16 >= 1 )
  {
    v20 = 0;
    v21 = 0;
    p_condType = &v17->fields.condType;
    v35 = oldFriendShipRank;
    while ( (unsigned int)v20 < (unsigned int)v16 )
    {
      v23 = *(_QWORD *)&p_condType[2 * v20];
      if ( !v23 )
        goto LABEL_30;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(
                                                   *(ServantCommentAddEntity_o **)&p_condType[2 * v20],
                                                   oldFriendShipRank,
                                                   v15);
      if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      {
        v25 = p_condType;
        v27 = *(_DWORD *)(v23 + 32);
        v26 = *(_DWORD *)(v23 + 36);
        v28 = *(System_Int32_array **)(v23 + 40);
        v29 = *(_DWORD *)(v23 + 48);
        v30 = v21 + 1;
        if ( v21 + 1 == v19 )
          v31 = textType;
        else
          v31 = textType2;
        if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
        ConditionText = ServantCommentEntity__GetConditionText(v31, v27, v26, v28, v29, v24);
        if ( System_String__IsNullOrEmpty(v13, 0) )
        {
          p_condType = v25;
          oldFriendShipRank = v35;
          v21 = v30;
        }
        else
        {
          p_condType = v25;
          v21 = v30;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3722/*"COND_TYPE_AND_FLAVOR2"*/, 0);
          oldFriendShipRank = v35;
          v13 = System_String__Concat_63518544(v13, v33, 0);
        }
        EntitiyList = (ServantCommentAddEntity_o *)System_String__Concat_63518544(v13, ConditionText, 0);
        v13 = (System_String_o *)EntitiyList;
      }
      LODWORD(v16) = v17->fields.priority;
      if ( (int)++v20 >= (int)v16 )
        return v13;
    }
    goto LABEL_29;
  }
  return v13;
}


ServantCommentAddEntity_array *ServantCommentAddMaster__GetEntitiyList(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_ObjectModel_Collection_T__o *v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C38249 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo);
    byte_4C38249 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Item__);
      if ( list )
      {
        v15 = list;
        if ( LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == id
          && LODWORD(list[1].klass) == priority )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v17 = Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v15;
            sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v15, v13, v14);
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C32E7C(list);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (ServantCommentAddEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v11,
                                            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentAddEntity_o *ServantCommentAddMaster__GetEntity(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C38246 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
    byte_4C38246 = 1;
  }
  PK = (Il2CppObject *)ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&idx);
  return (ServantCommentAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_339B2F0 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
}


bool ServantCommentAddMaster__IsEntityListCondContain(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  bool v15; // w27
  Il2CppObject *Item; // x0

  if ( (byte_4C3824A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Item__);
    byte_4C3824A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    v15 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v14,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Item__);
      if ( !Item
        || LODWORD(Item[1].klass) != svtId
        || HIDWORD(Item[1].klass) != id
        || LODWORD(Item[1].monitor) != priority
        || LODWORD(Item[2].klass) != condType )
      {
        v15 = ++v14 < v13;
        if ( v13 != v14 )
          continue;
      }
      return v15;
    }
LABEL_16:
    sub_1C32E7C(list);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentAddMaster__IsOnlyOpenQuestCond(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t kind,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentAddEntity_array *EntitiyList; // x0
  const MethodInfo *v12; // x3
  int max_length; // w8
  ServantCommentAddEntity_array *v14; // x22
  bool v15; // w23
  int v16; // w24

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(this, svtId, id, priority, *(const MethodInfo **)&kind);
  if ( !EntitiyList )
    goto LABEL_11;
  max_length = EntitiyList->max_length;
  v14 = EntitiyList;
  v15 = max_length > 0;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C32E84(EntitiyList);
      EntitiyList = (ServantCommentAddEntity_array *)v14->m_Items[v16];
      if ( !EntitiyList )
        break;
      if ( LODWORD(EntitiyList->m_Items[0]) != kind
        || (EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOnlyOpenQuestCond(
                                                             (ServantCommentAddEntity_o *)EntitiyList,
                                                             questId,
                                                             questPhase,
                                                             v12),
            ((unsigned __int8)EntitiyList & 1) == 0) )
      {
        max_length = v14->max_length;
        v15 = ++v16 < max_length;
        if ( v16 < max_length )
          continue;
      }
      return v15;
    }
LABEL_11:
    sub_1C32E7C(EntitiyList);
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentAddMaster__IsOpen(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  ServantCommentAddEntity_array *EntitiyList; // x0
  const MethodInfo *v8; // x2
  int max_length; // w8
  ServantCommentAddEntity_array *v10; // x20
  bool v11; // w21
  int v12; // w22

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(
                  this,
                  svtId,
                  id,
                  priority,
                  *(const MethodInfo **)&oldFriendShipRank);
  if ( !EntitiyList )
    goto LABEL_10;
  max_length = EntitiyList->max_length;
  v10 = EntitiyList;
  v11 = max_length > 0;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C32E84(EntitiyList);
      EntitiyList = (ServantCommentAddEntity_array *)v10->m_Items[v12];
      if ( !EntitiyList )
        break;
      EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOpen(
                                                       (ServantCommentAddEntity_o *)EntitiyList,
                                                       oldFriendShipRank,
                                                       v8);
      if ( ((unsigned __int8)EntitiyList & 1) != 0 )
      {
        max_length = v10->max_length;
        v11 = ++v12 < max_length;
        if ( v12 < max_length )
          continue;
      }
      return !v11;
    }
LABEL_10:
    sub_1C32E7C(EntitiyList);
  }
  return !v11;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentAddMaster__TryGetEntity(
        ServantCommentAddMaster_o *this,
        ServantCommentAddEntity_o **entity,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C38247 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
    byte_4C38247 = 1;
  }
  PK = (Il2CppObject *)ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
}