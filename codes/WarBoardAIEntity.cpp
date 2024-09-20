void __fastcall WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct System_Int32_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5C0C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C0C9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v3 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.actionTrendIds = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actionTrendIds, (int32_t)v3, v4, v5);
  v6 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.ratingOffsetIds = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ratingOffsetIds, (int32_t)v6, v7, v8);
}


int32_t __fastcall WarBoardAIEntity__CreatePrimaryKey(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetActionTrendIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *actionTrendIds; // x21
  System_Collections_Generic_HashSet_int__o *v4; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Int32_array *actionTrendGroupIds; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  int32_t v10; // w20
  System_Int32_array *v11; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5C0CA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor___76016464);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C0CA = 1;
  }
  entity = 0LL;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_54209644(
    v4,
    actionTrendIds,
    (const MethodInfo_33B2C6C *)Method_System_Collections_Generic_HashSet_int___ctor___76016464);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.actionTrendGroupIds,
                                    0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    actionTrendGroupIds = this->fields.actionTrendGroupIds;
    if ( !actionTrendGroupIds )
      goto LABEL_18;
    v8 = *(_QWORD *)&actionTrendGroupIds->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1B88814(IsNullOrEmpty, v6);
        v10 = actionTrendGroupIds->m_Items[v9 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v10,
                                          (const MethodInfo_311D988 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v4 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v8) = actionTrendGroupIds->max_length;
        if ( (__int64)++v9 >= (int)v8 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1B8880C(IsNullOrEmpty, v6);
    }
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  v11 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v4->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_54214840(
    v4,
    v11,
    (const MethodInfo_33B40B8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v11;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetRatingOffsetIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ratingOffsetIds; // x21
  System_Collections_Generic_HashSet_int__o *v4; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  int32_t v10; // w20
  System_Int32_array *v11; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5C0CB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor___76016464);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C0CB = 1;
  }
  entity = 0LL;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_54209644(
    v4,
    ratingOffsetIds,
    (const MethodInfo_33B2C6C *)Method_System_Collections_Generic_HashSet_int___ctor___76016464);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.ratingOffsetGroupIds,
                                    0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    ratingOffsetGroupIds = this->fields.ratingOffsetGroupIds;
    if ( !ratingOffsetGroupIds )
      goto LABEL_18;
    v8 = *(_QWORD *)&ratingOffsetGroupIds->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1B88814(IsNullOrEmpty, v6);
        v10 = ratingOffsetGroupIds->m_Items[v9 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v10,
                                          (const MethodInfo_311D988 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v4 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v8) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v9 >= (int)v8 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1B8880C(IsNullOrEmpty, v6);
    }
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  v11 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v4->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_54214840(
    v4,
    v11,
    (const MethodInfo_33B40B8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v11;
}