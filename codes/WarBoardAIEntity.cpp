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

  if ( (byte_4212AF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_4212AF6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v4 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.actionTrendIds = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.actionTrendIds,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.ratingOffsetIds = v11;
  sub_B0D840(
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
  WarQuestSelectionMaster_o *IsNullOrEmpty; // x0
  struct System_Int32_array *actionTrendGroupIds; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w20
  System_Int32_array *v19; // x20
  __int64 v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212AF7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__CopyTo___67861336, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861304, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_B0D8A4(&int___TypeInfo, v11);
    byte_4212AF7 = 1;
  }
  entity = 0LL;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor_46616780(
    v13,
    actionTrendIds,
    (const MethodInfo_2C750CC *)Method_System_Collections_Generic_HashSet_int___ctor___67861304);
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
          v21 = sub_B0D9A8(IsNullOrEmpty);
          sub_B0D948(v21, 0LL);
        }
        v18 = actionTrendGroupIds->m_Items[v17 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)IsNullOrEmpty,
                                                       &entity,
                                                       v18,
                                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v13 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v13,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v16) = actionTrendGroupIds->max_length;
        if ( (__int64)++v17 >= (int)v16 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B0D97C(IsNullOrEmpty);
    }
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  v19 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v13->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_46621988(
    v13,
    v19,
    (const MethodInfo_2C76524 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67861336);
  return v19;
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
  WarQuestSelectionMaster_o *IsNullOrEmpty; // x0
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w20
  System_Int32_array *v19; // x20
  __int64 v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212AF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__CopyTo___67861336, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861304, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_B0D8A4(&int___TypeInfo, v11);
    byte_4212AF8 = 1;
  }
  entity = 0LL;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor_46616780(
    v13,
    ratingOffsetIds,
    (const MethodInfo_2C750CC *)Method_System_Collections_Generic_HashSet_int___ctor___67861304);
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
          v21 = sub_B0D9A8(IsNullOrEmpty);
          sub_B0D948(v21, 0LL);
        }
        v18 = ratingOffsetGroupIds->m_Items[v17 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)IsNullOrEmpty,
                                                       &entity,
                                                       v18,
                                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v13 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v13,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v16) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v17 >= (int)v16 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B0D97C(IsNullOrEmpty);
    }
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  v19 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v13->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_46621988(
    v13,
    v19,
    (const MethodInfo_2C76524 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67861336);
  return v19;
}