void __fastcall ServantCommentAddMaster___ctor(ServantCommentAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1689C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__, method, v2);
    byte_4B1689C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    182,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x22
  ServantCommentAddEntity_o *EntitiyList; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x8
  ServantCommentAddEntity_o *v24; // x23
  int v25; // w20
  int v26; // w29
  __int64 v27; // x20
  int v28; // w28
  int32_t *p_condType; // x25
  __int64 v30; // x24
  const MethodInfo *v31; // x5
  int32_t *v32; // x19
  int32_t v33; // w26
  int32_t v34; // w27
  System_Int32_array *v35; // x25
  int32_t v36; // w24
  int v37; // w21
  System_String_o *v38; // x28
  System_String_o *ConditionText; // x24
  __int64 v40; // x1
  System_String_o *v41; // x0
  int32_t v43; // [xsp+Ch] [xbp-74h]

  if ( (byte_4B1689F & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, textType, textType2);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3821/*"COND_TYPE_AND_FLAVOR2"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B1689F = 1;
  }
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddMaster__GetEntitiyList(
                                               this,
                                               svtId,
                                               id,
                                               priority,
                                               *(const MethodInfo **)&id);
  if ( !EntitiyList )
LABEL_30:
    sub_1BCAA3C(EntitiyList, v21);
  v23 = *(_QWORD *)&EntitiyList->fields.priority;
  v24 = EntitiyList;
  if ( (int)v23 >= 1 )
  {
    v25 = 0;
    v26 = 0;
    while ( v25 < (unsigned int)v23 )
    {
      EntitiyList = (ServantCommentAddEntity_o *)*((_QWORD *)&v24->fields.condType + v25);
      if ( !EntitiyList )
        goto LABEL_30;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(EntitiyList, oldFriendShipRank, v22);
      v23 = *(_QWORD *)&v24->fields.priority;
      ++v25;
      v26 += ((unsigned __int8)EntitiyList & 1) == 0;
      if ( v25 >= (int)v23 )
        goto LABEL_11;
    }
LABEL_29:
    sub_1BCAA44(EntitiyList, v21);
  }
  v26 = 0;
LABEL_11:
  if ( (int)v23 >= 1 )
  {
    v27 = 0LL;
    v28 = 0;
    p_condType = &v24->fields.condType;
    v43 = oldFriendShipRank;
    while ( (unsigned int)v27 < (unsigned int)v23 )
    {
      v30 = *(_QWORD *)&p_condType[2 * v27];
      if ( !v30 )
        goto LABEL_30;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(
                                                   *(ServantCommentAddEntity_o **)&p_condType[2 * v27],
                                                   oldFriendShipRank,
                                                   v22);
      if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      {
        v32 = p_condType;
        v34 = *(_DWORD *)(v30 + 32);
        v33 = *(_DWORD *)(v30 + 36);
        v35 = *(System_Int32_array **)(v30 + 40);
        v36 = *(_DWORD *)(v30 + 48);
        v37 = v28 + 1;
        if ( v28 + 1 == v26 )
          v38 = textType;
        else
          v38 = textType2;
        if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, v21);
        ConditionText = ServantCommentEntity__GetConditionText(v38, v34, v33, v35, v36, v31);
        if ( System_String__IsNullOrEmpty(v19, 0LL) )
        {
          p_condType = v32;
          oldFriendShipRank = v43;
          v28 = v37;
        }
        else
        {
          p_condType = v32;
          v28 = v37;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3821/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
          oldFriendShipRank = v43;
          v19 = System_String__Concat_62401220(v19, v41, 0LL);
        }
        EntitiyList = (ServantCommentAddEntity_o *)System_String__Concat_62401220(v19, ConditionText, 0LL);
        v19 = (System_String_o *)EntitiyList;
      }
      LODWORD(v23) = v24->fields.priority;
      if ( (int)++v27 >= (int)v23 )
        return v19;
    }
    goto LABEL_29;
  }
  return v19;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x24
  int32_t v27; // w25
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  v7 = svtId;
  if ( (byte_4B1689D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&id);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantCommentAddEntity_TypeInfo, v19, v20);
    byte_4B1689D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v27,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          if ( !v26 )
            break;
          items = v26->fields._items;
          v36 = Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v38[4] = *(Il2CppClass **)&svtId;
            sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), *(int64_t *)&svtId, v28, v29, v30, v31, v32, v33);
          }
        }
      }
      if ( Count == ++v27 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
LABEL_19:
  if ( !v26 )
    goto LABEL_21;
  return (ServantCommentAddEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v26,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
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

  if ( (byte_4B1689A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&id);
    byte_4B1689A = 1;
  }
  PK = (Il2CppObject *)ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&idx);
  return (ServantCommentAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w24
  int32_t v18; // w25
  bool v19; // w28
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1689E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&id);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12);
    sub_1BCA7E0(&ServantCommentAddEntity_TypeInfo, v13, v14);
    byte_4B1689E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v18,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(ServantCommentAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (ServantCommentAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentAddEntity_TypeInfo
        || LODWORD(Item[1].klass) != svtId
        || HIDWORD(Item[1].klass) != id
        || LODWORD(Item[1].monitor) != priority
        || LODWORD(Item[2].klass) != condType )
      {
        v19 = ++v18 < v17;
        if ( v17 != v18 )
          continue;
      }
      return v19;
    }
LABEL_18:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
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
        sub_1BCAA44(EntitiyList, v12);
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
    sub_1BCAA3C(EntitiyList, v12);
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
        sub_1BCAA44(EntitiyList, v8);
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
    sub_1BCAA3C(EntitiyList, v8);
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

  if ( (byte_4B1689B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B1689B = 1;
  }
  PK = (Il2CppObject *)ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
}