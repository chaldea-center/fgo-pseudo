void __fastcall WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FD350 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    sub_1B640C8(&int___TypeInfo, v3);
    byte_49FD350 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v4 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.actionTrendIds = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.actionTrendIds, (int32_t)v4, v5, v6);
  v7 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.ratingOffsetIds = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ratingOffsetIds, (int32_t)v7, v8, v9);
}


int32_t __fastcall WarBoardAIEntity__CreatePrimaryKey(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetActionTrendIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__o *actionTrendIds; // x21
  System_Collections_Generic_HashSet_int__o *v13; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v15; // x1
  struct System_Int32_array *actionTrendGroupIds; // x21
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  int32_t v19; // w20
  System_Int32_array *v20; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FD351 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1B640C8(&int___TypeInfo, v11);
    byte_49FD351 = 1;
  }
  entity = 0LL;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor_53885596(
    v13,
    actionTrendIds,
    (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
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
          sub_1B6432C(IsNullOrEmpty, v15);
        v19 = actionTrendGroupIds->m_Items[v18 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v19,
                                          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v13 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v13,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v17) = actionTrendGroupIds->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1B64324(IsNullOrEmpty);
    }
  }
LABEL_16:
  if ( !v13 )
    goto LABEL_18;
  v20 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v13->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_53890792(
    v13,
    v20,
    (const MethodInfo_3364EE8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v20;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetRatingOffsetIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__o *ratingOffsetIds; // x21
  System_Collections_Generic_HashSet_int__o *v13; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v15; // x1
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  int32_t v19; // w20
  System_Int32_array *v20; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FD352 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(
      &Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1B640C8(&int___TypeInfo, v11);
    byte_49FD352 = 1;
  }
  entity = 0LL;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor_53885596(
    v13,
    ratingOffsetIds,
    (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
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
          sub_1B6432C(IsNullOrEmpty, v15);
        v19 = ratingOffsetGroupIds->m_Items[v18 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v19,
                                          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v13 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v13,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v17) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1B64324(IsNullOrEmpty);
    }
  }
LABEL_16:
  if ( !v13 )
    goto LABEL_18;
  v20 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v13->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_53890792(
    v13,
    v20,
    (const MethodInfo_3364EE8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v20;
}