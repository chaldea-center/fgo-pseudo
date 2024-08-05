void __fastcall ServantCommentAddMaster___ctor(ServantCommentAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEB73 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__, method);
    byte_49FEB73 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    182,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentAddMaster__GetConditionString(
        ServantCommentAddMaster_o *this,
        System_String_o *textType,
        System_String_o *textType2,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *v16; // x22
  ServantCommentAddEntity_o *EntitiyList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x8
  ServantCommentAddEntity_o *v21; // x23
  int v22; // w20
  int v23; // w29
  __int64 v24; // x20
  int v25; // w28
  int32_t *p_condType; // x25
  __int64 v27; // x24
  const MethodInfo *v28; // x5
  int32_t *v29; // x19
  int32_t v30; // w26
  int32_t v31; // w27
  System_Int32_array *v32; // x25
  int32_t v33; // w24
  int v34; // w21
  System_String_o *v35; // x28
  System_String_o *ConditionText; // x24
  System_String_o *v37; // x0
  int32_t v39; // [xsp+Ch] [xbp-74h]

  if ( (byte_49FEB76 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, textType);
    sub_1B64870(&ServantCommentEntity_TypeInfo, v13);
    sub_1B64870(&StringLiteral_3765/*"COND_TYPE_AND_FLAVOR2"*/, v14);
    sub_1B64870(&StringLiteral_1/*""*/, v15);
    byte_49FEB76 = 1;
  }
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddMaster__GetEntitiyList(
                                               this,
                                               svtId,
                                               id,
                                               priority,
                                               *(const MethodInfo **)&id);
  if ( !EntitiyList )
LABEL_30:
    sub_1B64ACC(EntitiyList, v18);
  v20 = *(_QWORD *)&EntitiyList->fields.priority;
  v21 = EntitiyList;
  if ( (int)v20 >= 1 )
  {
    v22 = 0;
    v23 = 0;
    while ( v22 < (unsigned int)v20 )
    {
      EntitiyList = (ServantCommentAddEntity_o *)*((_QWORD *)&v21->fields.condType + v22);
      if ( !EntitiyList )
        goto LABEL_30;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(EntitiyList, oldFriendShipRank, v19);
      v20 = *(_QWORD *)&v21->fields.priority;
      ++v22;
      v23 += ((unsigned __int8)EntitiyList & 1) == 0;
      if ( v22 >= (int)v20 )
        goto LABEL_11;
    }
LABEL_29:
    sub_1B64AD4(EntitiyList, v18);
  }
  v23 = 0;
LABEL_11:
  if ( (int)v20 >= 1 )
  {
    v24 = 0LL;
    v25 = 0;
    p_condType = &v21->fields.condType;
    v39 = oldFriendShipRank;
    while ( (unsigned int)v24 < (unsigned int)v20 )
    {
      v27 = *(_QWORD *)&p_condType[2 * v24];
      if ( !v27 )
        goto LABEL_30;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(
                                                   *(ServantCommentAddEntity_o **)&p_condType[2 * v24],
                                                   oldFriendShipRank,
                                                   v19);
      if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      {
        v29 = p_condType;
        v31 = *(_DWORD *)(v27 + 32);
        v30 = *(_DWORD *)(v27 + 36);
        v32 = *(System_Int32_array **)(v27 + 40);
        v33 = *(_DWORD *)(v27 + 48);
        v34 = v25 + 1;
        if ( v25 + 1 == v23 )
          v35 = textType;
        else
          v35 = textType2;
        if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
        ConditionText = ServantCommentEntity__GetConditionText(v35, v31, v30, v32, v33, v28);
        if ( System_String__IsNullOrEmpty(v16, 0LL) )
        {
          p_condType = v29;
          oldFriendShipRank = v39;
          v25 = v34;
        }
        else
        {
          p_condType = v29;
          v25 = v34;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
          oldFriendShipRank = v39;
          v16 = System_String__Concat_61383576(v16, v37, 0LL);
        }
        EntitiyList = (ServantCommentAddEntity_o *)System_String__Concat_61383576(v16, ConditionText, 0LL);
        v16 = (System_String_o *)EntitiyList;
      }
      LODWORD(v20) = v21->fields.priority;
      if ( (int)++v24 >= (int)v20 )
        return v16;
    }
    goto LABEL_29;
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
ServantCommentAddEntity_array *__fastcall ServantCommentAddMaster__GetEntitiyList(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  int32_t v7; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v17; // x24
  int32_t v18; // w25
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  v7 = svtId;
  if ( (byte_49FEB74 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__, v12);
    sub_1B64870(&System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo, v13);
    sub_1B64870(&ServantCommentAddEntity_TypeInfo, v14);
    byte_49FEB74 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        methodPtr_low = LOBYTE(ServantCommentAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantCommentAddEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCommentAddEntity_TypeInfo
          && LODWORD(list->fields.items) == v7
          && HIDWORD(list->fields.items) == id
          && LODWORD(list[1].klass) == priority )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)list,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v25[4] = *(Il2CppClass **)&svtId;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v25 + 4), svtId, v19, v20);
          }
        }
      }
      if ( Count == ++v18 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B64ACC(list, *(_QWORD *)&svtId);
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_21;
  return (ServantCommentAddEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v17,
                                            (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentAddEntity_o *__fastcall ServantCommentAddMaster__GetEntity(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FEB71 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FEB71 = 1;
  }
  PK = (Il2CppObject *)ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&idx);
  return (ServantCommentAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D64D8 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddMaster__IsEntityListCondContain(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w24
  int32_t v16; // w25
  bool v17; // w28
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FEB75 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1B64870(&ServantCommentAddEntity_TypeInfo, v12);
    byte_49FEB75 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    v17 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v16,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(ServantCommentAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (ServantCommentAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentAddEntity_TypeInfo
        || LODWORD(Item[1].klass) != svtId
        || HIDWORD(Item[1].klass) != id
        || LODWORD(Item[1].monitor) != priority
        || LODWORD(Item[2].klass) != condType )
      {
        v17 = ++v16 < v15;
        if ( v15 != v16 )
          continue;
      }
      return v17;
    }
LABEL_18:
    sub_1B64ACC(list, *(_QWORD *)&svtId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddMaster__IsOnlyOpenQuestCond(
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
        sub_1B64AD4(EntitiyList, v12);
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
    sub_1B64ACC(EntitiyList, v12);
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddMaster__IsOpen(
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
        sub_1B64AD4(EntitiyList, v8);
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
    sub_1B64ACC(EntitiyList, v8);
  }
  return !v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddMaster__TryGetEntity(
        ServantCommentAddMaster_o *this,
        ServantCommentAddEntity_o **entity,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FEB72 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__, entity);
    byte_49FEB72 = 1;
  }
  PK = (Il2CppObject *)ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
}