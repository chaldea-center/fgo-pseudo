void __fastcall WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B45B4E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    sub_1BDB878(&int___TypeInfo, v3);
    byte_4B45B4E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v4 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  this->fields.actionTrendIds = v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.actionTrendIds, (int32_t)v4, v5, v6);
  v7 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  this->fields.ratingOffsetIds = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.ratingOffsetIds, (int32_t)v7, v8, v9);
}


int32_t __fastcall WarBoardAIEntity__CreatePrimaryKey(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetActionTrendIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *actionTrendIds; // x21
  System_Collections_Generic_HashSet_int__o *v12; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *actionTrendGroupIds; // x21
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  int32_t v19; // w20
  System_Int32_array *v20; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B45B4F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__,
      v4);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor___77003856, v7);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__get_Count__, v8);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_1BDB878(&int___TypeInfo, v10);
    byte_4B45B4F = 1;
  }
  entity = 0LL;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56146576(
    v12,
    actionTrendIds,
    (const MethodInfo_358BA90 *)Method_System_Collections_Generic_HashSet_int___ctor___77003856);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.actionTrendGroupIds,
                                    0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    actionTrendGroupIds = this->fields.actionTrendGroupIds;
    if ( !actionTrendGroupIds )
      goto LABEL_18;
    v17 = *(_QWORD *)&actionTrendGroupIds->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v17 )
          sub_1BDBADC(IsNullOrEmpty, v14, v15);
        v19 = actionTrendGroupIds->m_Items[v18 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v19,
                                          (const MethodInfo_32E1E88 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v12 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v12,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_358CBB4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v17) = actionTrendGroupIds->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1BDBAD4(IsNullOrEmpty, v14);
    }
  }
LABEL_16:
  if ( !v12 )
    goto LABEL_18;
  v20 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, (unsigned int)v12->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_56151772(
    v12,
    v20,
    (const MethodInfo_358CEDC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v20;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetRatingOffsetIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *ratingOffsetIds; // x21
  System_Collections_Generic_HashSet_int__o *v12; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  int32_t v19; // w20
  System_Int32_array *v20; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B45B50 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(
      &Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__,
      v4);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor___77003856, v7);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__get_Count__, v8);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_1BDB878(&int___TypeInfo, v10);
    byte_4B45B50 = 1;
  }
  entity = 0LL;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56146576(
    v12,
    ratingOffsetIds,
    (const MethodInfo_358BA90 *)Method_System_Collections_Generic_HashSet_int___ctor___77003856);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.ratingOffsetGroupIds,
                                    0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    ratingOffsetGroupIds = this->fields.ratingOffsetGroupIds;
    if ( !ratingOffsetGroupIds )
      goto LABEL_18;
    v17 = *(_QWORD *)&ratingOffsetGroupIds->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v17 )
          sub_1BDBADC(IsNullOrEmpty, v14, v15);
        v19 = ratingOffsetGroupIds->m_Items[v18 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v19,
                                          (const MethodInfo_32E1E88 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v12 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v12,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_358CBB4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v17) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1BDBAD4(IsNullOrEmpty, v14);
    }
  }
LABEL_16:
  if ( !v12 )
    goto LABEL_18;
  v20 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, (unsigned int)v12->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_56151772(
    v12,
    v20,
    (const MethodInfo_358CEDC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v20;
}