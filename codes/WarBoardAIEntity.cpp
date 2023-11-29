void __fastcall WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x2
  struct System_Int32_array *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F8BBE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    sub_B16FFC(&int___TypeInfo, v3);
    byte_40F8BBE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v5 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v4);
  this->fields.actionTrendIds = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actionTrendIds,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v12);
  this->fields.ratingOffsetIds = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ratingOffsetIds,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


int32_t __fastcall WarBoardAIEntity__CreatePrimaryKey(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetActionTrendIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *actionTrendIds; // x21
  System_Collections_Generic_HashSet_int__o *v15; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Int32_array *actionTrendGroupIds; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x22
  int32_t v22; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *v24; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8BBF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__CopyTo___66713984, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713952, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_B16FFC(&int___TypeInfo, v13);
    byte_40F8BBF = 1;
  }
  entity = 0LL;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor_35487824(
    v15,
    actionTrendIds,
    (const MethodInfo_21D8050 *)Method_System_Collections_Generic_HashSet_int___ctor___66713952);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.actionTrendGroupIds, 0LL);
  if ( !IsNullOrEmpty )
  {
    actionTrendGroupIds = this->fields.actionTrendGroupIds;
    if ( !actionTrendGroupIds )
      goto LABEL_19;
    v20 = *(_QWORD *)&actionTrendGroupIds->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        if ( v21 >= (unsigned int)v20 )
        {
          sub_B17100(IsNullOrEmpty, v17, v18);
          sub_B170A0();
        }
        v22 = actionTrendGroupIds->m_Items[v21 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !Master_WarQuestSelectionMaster )
          break;
        IsNullOrEmpty = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                          Master_WarQuestSelectionMaster,
                          &entity,
                          v22,
                          (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( IsNullOrEmpty )
        {
          if ( !entity || !v15 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v15,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v20) = actionTrendGroupIds->max_length;
        if ( (__int64)++v21 >= (int)v20 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B170D4();
    }
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_19;
  v24 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v15->fields._count, v18);
  System_Collections_Generic_HashSet_int___CopyTo_35493032(
    v15,
    v24,
    (const MethodInfo_21D94A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___66713984);
  return v24;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetRatingOffsetIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *ratingOffsetIds; // x21
  System_Collections_Generic_HashSet_int__o *v15; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x22
  int32_t v22; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *v24; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8BC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__CopyTo___66713984, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713952, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_B16FFC(&int___TypeInfo, v13);
    byte_40F8BC0 = 1;
  }
  entity = 0LL;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor_35487824(
    v15,
    ratingOffsetIds,
    (const MethodInfo_21D8050 *)Method_System_Collections_Generic_HashSet_int___ctor___66713952);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.ratingOffsetGroupIds, 0LL);
  if ( !IsNullOrEmpty )
  {
    ratingOffsetGroupIds = this->fields.ratingOffsetGroupIds;
    if ( !ratingOffsetGroupIds )
      goto LABEL_19;
    v20 = *(_QWORD *)&ratingOffsetGroupIds->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        if ( v21 >= (unsigned int)v20 )
        {
          sub_B17100(IsNullOrEmpty, v17, v18);
          sub_B170A0();
        }
        v22 = ratingOffsetGroupIds->m_Items[v21 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !Master_WarQuestSelectionMaster )
          break;
        IsNullOrEmpty = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                          Master_WarQuestSelectionMaster,
                          &entity,
                          v22,
                          (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( IsNullOrEmpty )
        {
          if ( !entity || !v15 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v15,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v20) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v21 >= (int)v20 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B170D4();
    }
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_19;
  v24 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v15->fields._count, v18);
  System_Collections_Generic_HashSet_int___CopyTo_35493032(
    v15,
    v24,
    (const MethodInfo_21D94A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___66713984);
  return v24;
}