void WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct System_Int32_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Int32_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5939853 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    sub_21FFC50(&int___TypeInfo);
    byte_5939853 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
  v3 = int___TypeInfo;
  this->fields.id = 0;
  v4 = (struct System_Int32_array *)sub_21FFD10(v3, 0);
  this->fields.actionTrendIds = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.actionTrendIds, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  this->fields.ratingOffsetIds = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ratingOffsetIds,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  struct System_Int32_array *actionTrendGroupIds; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  int32_t v10; // w20
  System_Int32_array *v11; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5939854 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    byte_5939854 = 1;
  }
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  entity = 0;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69731156(
    v4,
    actionTrendIds,
    (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
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
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)max_length )
          sub_21FFED4(IsNullOrEmpty);
        v10 = actionTrendGroupIds->m_Items[v9];
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v10,
                                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v4 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(max_length) = actionTrendGroupIds->max_length;
        if ( (__int64)++v9 >= (int)max_length )
          goto LABEL_16;
      }
LABEL_18:
      sub_21FFECC(IsNullOrEmpty, v6);
    }
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  v11 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, (unsigned int)v4->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_69736372(
    v4,
    v11,
    (const MethodInfo_42817B4 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v11;
}


System_Int32_array *WarBoardAIEntity__GetRatingOffsetIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ratingOffsetIds; // x21
  System_Collections_Generic_HashSet_int__o *v4; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  int32_t v10; // w20
  System_Int32_array *v11; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5939855 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    byte_5939855 = 1;
  }
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  entity = 0;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69731156(
    v4,
    ratingOffsetIds,
    (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
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
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)max_length )
          sub_21FFED4(IsNullOrEmpty);
        v10 = ratingOffsetGroupIds->m_Items[v9];
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v10,
                                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v4 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(max_length) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v9 >= (int)max_length )
          goto LABEL_16;
      }
LABEL_18:
      sub_21FFECC(IsNullOrEmpty, v6);
    }
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  v11 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, (unsigned int)v4->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_69736372(
    v4,
    v11,
    (const MethodInfo_42817B4 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v11;
}