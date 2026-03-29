void ServantCommentAddMaster___ctor(ServantCommentAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3127B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
    byte_4D3127B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    186,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  ServantCommentAddEntity_o *v18; // x23
  int v19; // w20
  int v20; // w29
  __int64 v21; // x20
  int v22; // w28
  int32_t *p_condType; // x25
  __int64 v24; // x24
  const MethodInfo *v25; // x5
  int32_t *v26; // x19
  int32_t v27; // w26
  int32_t v28; // w27
  System_Int32_array *v29; // x25
  int32_t v30; // w24
  int v31; // w21
  System_String_o *v32; // x28
  System_String_o *ConditionText; // x24
  System_String_o *v34; // x0
  int32_t v36; // [xsp+Ch] [xbp-74h]

  if ( (byte_4D3127E & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&ServantCommentEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_3744/*"COND_TYPE_AND_FLAVOR2"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3127E = 1;
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
    sub_1C93D2C(EntitiyList, v15);
  v17 = *(_QWORD *)&EntitiyList->fields.priority;
  v18 = EntitiyList;
  if ( (int)v17 >= 1 )
  {
    v19 = 0;
    v20 = 0;
    while ( v19 < (unsigned int)v17 )
    {
      EntitiyList = (ServantCommentAddEntity_o *)*((_QWORD *)&v18->fields.condType + v19);
      if ( !EntitiyList )
        goto LABEL_30;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(EntitiyList, oldFriendShipRank, v16);
      v17 = *(_QWORD *)&v18->fields.priority;
      ++v19;
      v20 += ((unsigned __int8)EntitiyList & 1) == 0;
      if ( v19 >= (int)v17 )
        goto LABEL_11;
    }
LABEL_29:
    sub_1C93D34(EntitiyList);
  }
  v20 = 0;
LABEL_11:
  if ( (int)v17 >= 1 )
  {
    v21 = 0;
    v22 = 0;
    p_condType = &v18->fields.condType;
    v36 = oldFriendShipRank;
    while ( (unsigned int)v21 < (unsigned int)v17 )
    {
      v24 = *(_QWORD *)&p_condType[2 * v21];
      if ( !v24 )
        goto LABEL_30;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(
                                                   *(ServantCommentAddEntity_o **)&p_condType[2 * v21],
                                                   oldFriendShipRank,
                                                   v16);
      if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      {
        v26 = p_condType;
        v28 = *(_DWORD *)(v24 + 32);
        v27 = *(_DWORD *)(v24 + 36);
        v29 = *(System_Int32_array **)(v24 + 40);
        v30 = *(_DWORD *)(v24 + 48);
        v31 = v22 + 1;
        if ( v22 + 1 == v20 )
          v32 = textType;
        else
          v32 = textType2;
        if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
        ConditionText = ServantCommentEntity__GetConditionText(v32, v28, v27, v29, v30, v25);
        if ( System_String__IsNullOrEmpty(v13, 0) )
        {
          p_condType = v26;
          oldFriendShipRank = v36;
          v22 = v31;
        }
        else
        {
          p_condType = v26;
          v22 = v31;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"COND_TYPE_AND_FLAVOR2"*/, 0);
          oldFriendShipRank = v36;
          v13 = System_String__Concat_64425724(v13, v34, 0);
        }
        EntitiyList = (ServantCommentAddEntity_o *)System_String__Concat_64425724(v13, ConditionText, 0);
        v13 = (System_String_o *)EntitiyList;
      }
      LODWORD(v17) = v18->fields.priority;
      if ( (int)++v21 >= (int)v17 )
        return v13;
    }
    goto LABEL_29;
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
ServantCommentAddEntity_array *ServantCommentAddMaster__GetEntitiyList(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  int32_t v7; // w21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w25
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  v7 = svtId;
  if ( (byte_4D3127C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo);
    byte_4D3127C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        if ( LODWORD(list->fields.items) == v7
          && HIDWORD(list->fields.items) == id
          && LODWORD(list[1].klass) == priority )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = *(Il2CppClass **)&svtId;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 4), svtId, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C93D2C(list, *(_QWORD *)&svtId);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (ServantCommentAddEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v11,
                                            (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
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

  if ( (byte_4D31279 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
    byte_4D31279 = 1;
  }
  PK = (Il2CppObject *)ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&idx);
  return (ServantCommentAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_34681D4 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4D3127D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Item__);
    byte_4D3127D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Count__);
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
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantCommentAddEntity__get_Item__);
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
    sub_1C93D2C(list, *(_QWORD *)&svtId);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int max_length; // w8
  ServantCommentAddEntity_array *v15; // x22
  bool v16; // w23
  int v17; // w24

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(this, svtId, id, priority, *(const MethodInfo **)&kind);
  if ( !EntitiyList )
    goto LABEL_11;
  max_length = EntitiyList->max_length;
  v15 = EntitiyList;
  v16 = max_length > 0;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1C93D34(EntitiyList);
      EntitiyList = (ServantCommentAddEntity_array *)v15->m_Items[v17];
      if ( !EntitiyList )
        break;
      if ( LODWORD(EntitiyList->m_Items[0]) != kind
        || (EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOnlyOpenQuestCond(
                                                             (ServantCommentAddEntity_o *)EntitiyList,
                                                             questId,
                                                             questPhase,
                                                             v13),
            ((unsigned __int8)EntitiyList & 1) == 0) )
      {
        max_length = v15->max_length;
        v16 = ++v17 < max_length;
        if ( v17 < max_length )
          continue;
      }
      return v16;
    }
LABEL_11:
    sub_1C93D2C(EntitiyList, v12);
  }
  return v16;
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int max_length; // w8
  ServantCommentAddEntity_array *v11; // x20
  bool v12; // w21
  int v13; // w22

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(
                  this,
                  svtId,
                  id,
                  priority,
                  *(const MethodInfo **)&oldFriendShipRank);
  if ( !EntitiyList )
    goto LABEL_10;
  max_length = EntitiyList->max_length;
  v11 = EntitiyList;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C93D34(EntitiyList);
      EntitiyList = (ServantCommentAddEntity_array *)v11->m_Items[v13];
      if ( !EntitiyList )
        break;
      EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOpen(
                                                       (ServantCommentAddEntity_o *)EntitiyList,
                                                       oldFriendShipRank,
                                                       v9);
      if ( ((unsigned __int8)EntitiyList & 1) != 0 )
      {
        max_length = v11->max_length;
        v12 = ++v13 < max_length;
        if ( v13 < max_length )
          continue;
      }
      return !v12;
    }
LABEL_10:
    sub_1C93D2C(EntitiyList, v8);
  }
  return !v12;
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

  if ( (byte_4D3127A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
    byte_4D3127A = 1;
  }
  PK = (Il2CppObject *)ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
}