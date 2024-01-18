void __fastcall WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4186750 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_4186750 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v4 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.actionTrendIds = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actionTrendIds,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.ratingOffsetIds = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.ratingOffsetIds,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  WarQuestSelectionMaster_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  struct System_Int32_array *actionTrendGroupIds; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w20
  System_Int32_array *v19; // x20
  __int64 v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4186751 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__CopyTo___67287864, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287832, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v8);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    byte_4186751 = 1;
  }
  entity = 0LL;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_47731024(
    v12,
    actionTrendIds,
    (const MethodInfo_2D85150 *)Method_System_Collections_Generic_HashSet_int___ctor___67287832);
  IsNullOrEmpty = (WarQuestSelectionMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)this->fields.actionTrendGroupIds,
                                                 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    actionTrendGroupIds = this->fields.actionTrendGroupIds;
    if ( !actionTrendGroupIds )
      goto LABEL_19;
    v16 = *(_QWORD *)&actionTrendGroupIds->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)v16 )
        {
          v21 = sub_B2C460(IsNullOrEmpty);
          sub_B2C400(v21, 0LL);
        }
        v18 = actionTrendGroupIds->m_Items[v17 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)IsNullOrEmpty,
                                                       &entity,
                                                       v18,
                                                       (const MethodInfo_24E412C *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v12 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v12,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v16) = actionTrendGroupIds->max_length;
        if ( (__int64)++v17 >= (int)v16 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B2C434(IsNullOrEmpty, v14);
    }
  }
LABEL_17:
  if ( !v12 )
    goto LABEL_19;
  v19 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v12->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_47736232(
    v12,
    v19,
    (const MethodInfo_2D865A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67287864);
  return v19;
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
  WarQuestSelectionMaster_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w20
  System_Int32_array *v19; // x20
  __int64 v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4186752 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__CopyTo___67287864, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287832, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v8);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    byte_4186752 = 1;
  }
  entity = 0LL;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_47731024(
    v12,
    ratingOffsetIds,
    (const MethodInfo_2D85150 *)Method_System_Collections_Generic_HashSet_int___ctor___67287832);
  IsNullOrEmpty = (WarQuestSelectionMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)this->fields.ratingOffsetGroupIds,
                                                 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    ratingOffsetGroupIds = this->fields.ratingOffsetGroupIds;
    if ( !ratingOffsetGroupIds )
      goto LABEL_19;
    v16 = *(_QWORD *)&ratingOffsetGroupIds->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)v16 )
        {
          v21 = sub_B2C460(IsNullOrEmpty);
          sub_B2C400(v21, 0LL);
        }
        v18 = ratingOffsetGroupIds->m_Items[v17 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)IsNullOrEmpty,
                                                       &entity,
                                                       v18,
                                                       (const MethodInfo_24E412C *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v12 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v12,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v16) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v17 >= (int)v16 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B2C434(IsNullOrEmpty, v14);
    }
  }
LABEL_17:
  if ( !v12 )
    goto LABEL_19;
  v19 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v12->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_47736232(
    v12,
    v19,
    (const MethodInfo_2D865A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67287864);
  return v19;
}