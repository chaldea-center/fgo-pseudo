void WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_Int32_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C28407 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    sub_1C2D490(&int___TypeInfo);
    byte_4C28407 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v3 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  this->fields.actionTrendIds = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actionTrendIds, (int32_t)v3, v4, v5);
  v6 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  this->fields.ratingOffsetIds = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ratingOffsetIds, (int32_t)v6, v7, v8);
}


int32_t WarBoardAIEntity__CreatePrimaryKey(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *WarBoardAIEntity__GetActionTrendIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *actionTrendIds; // x21
  System_Collections_Generic_HashSet_int__o *v4; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *actionTrendGroupIds; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  int32_t v11; // w20
  System_Int32_array *v12; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C28408 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    byte_4C28408 = 1;
  }
  entity = 0;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56862832(
    v4,
    actionTrendIds,
    (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.actionTrendGroupIds,
                                    0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    actionTrendGroupIds = this->fields.actionTrendGroupIds;
    if ( !actionTrendGroupIds )
      goto LABEL_18;
    max_length = actionTrendGroupIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
          sub_1C2D6F4(IsNullOrEmpty, v6, v7);
        v11 = actionTrendGroupIds->m_Items[v10];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v11,
                                          (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v4 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(max_length) = actionTrendGroupIds->max_length;
        if ( (__int64)++v10 >= (int)max_length )
          goto LABEL_16;
      }
LABEL_18:
      sub_1C2D6EC(IsNullOrEmpty, v6);
    }
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  v12 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)v4->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_56868028(
    v4,
    v12,
    (const MethodInfo_363BCBC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v12;
}


System_Int32_array *WarBoardAIEntity__GetRatingOffsetIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ratingOffsetIds; // x21
  System_Collections_Generic_HashSet_int__o *v4; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  int32_t v11; // w20
  System_Int32_array *v12; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C28409 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    byte_4C28409 = 1;
  }
  entity = 0;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56862832(
    v4,
    ratingOffsetIds,
    (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.ratingOffsetGroupIds,
                                    0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    ratingOffsetGroupIds = this->fields.ratingOffsetGroupIds;
    if ( !ratingOffsetGroupIds )
      goto LABEL_18;
    max_length = ratingOffsetGroupIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
          sub_1C2D6F4(IsNullOrEmpty, v6, v7);
        v11 = ratingOffsetGroupIds->m_Items[v10];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v11,
                                          (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v4 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(max_length) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v10 >= (int)max_length )
          goto LABEL_16;
      }
LABEL_18:
      sub_1C2D6EC(IsNullOrEmpty, v6);
    }
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  v12 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)v4->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_56868028(
    v4,
    v12,
    (const MethodInfo_363BCBC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v12;
}