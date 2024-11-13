void __fastcall WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Int32_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B17182 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B17182 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v6 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.actionTrendIds = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.actionTrendIds, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.ratingOffsetIds = v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ratingOffsetIds, (int64_t)v13, v14, v15, v16, v17, v18, v19);
}


int32_t __fastcall WarBoardAIEntity__CreatePrimaryKey(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetActionTrendIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_IEnumerable_T__o *actionTrendIds; // x21
  System_Collections_Generic_HashSet_int__o *v22; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v24; // x1
  struct System_Int32_array *actionTrendGroupIds; // x21
  __int64 v26; // x8
  unsigned __int64 v27; // x22
  int32_t v28; // w20
  System_Int32_array *v29; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B17183 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&int___TypeInfo, v19, v20);
    byte_4B17183 = 1;
  }
  entity = 0LL;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor_54873236(
    v22,
    actionTrendIds,
    (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.actionTrendGroupIds,
                                    0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    actionTrendGroupIds = this->fields.actionTrendGroupIds;
    if ( !actionTrendGroupIds )
      goto LABEL_18;
    v26 = *(_QWORD *)&actionTrendGroupIds->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)v26 )
          sub_1BCAA44(IsNullOrEmpty, v24);
        v28 = actionTrendGroupIds->m_Items[v27 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v28,
                                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v22 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v26) = actionTrendGroupIds->max_length;
        if ( (__int64)++v27 >= (int)v26 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1BCAA3C(IsNullOrEmpty, v24);
    }
  }
LABEL_16:
  if ( !v22 )
    goto LABEL_18;
  v29 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v22->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_54878432(
    v22,
    v29,
    (const MethodInfo_34560E0 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v29;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetRatingOffsetIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_IEnumerable_T__o *ratingOffsetIds; // x21
  System_Collections_Generic_HashSet_int__o *v22; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v24; // x1
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  __int64 v26; // x8
  unsigned __int64 v27; // x22
  int32_t v28; // w20
  System_Int32_array *v29; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B17184 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&int___TypeInfo, v19, v20);
    byte_4B17184 = 1;
  }
  entity = 0LL;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor_54873236(
    v22,
    ratingOffsetIds,
    (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.ratingOffsetGroupIds,
                                    0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    ratingOffsetGroupIds = this->fields.ratingOffsetGroupIds;
    if ( !ratingOffsetGroupIds )
      goto LABEL_18;
    v26 = *(_QWORD *)&ratingOffsetGroupIds->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)v26 )
          sub_1BCAA44(IsNullOrEmpty, v24);
        v28 = ratingOffsetGroupIds->m_Items[v27 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
        IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
                                          &entity,
                                          v28,
                                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v22 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)entity[1].monitor,
            (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v26) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v27 >= (int)v26 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1BCAA3C(IsNullOrEmpty, v24);
    }
  }
LABEL_16:
  if ( !v22 )
    goto LABEL_18;
  v29 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v22->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_54878432(
    v22,
    v29,
    (const MethodInfo_34560E0 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v29;
}