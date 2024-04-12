void __fastcall WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Int32_array *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AE03A & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    sub_B52984(&int___TypeInfo);
    byte_42AE03A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v3 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  this->fields.actionTrendIds = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.actionTrendIds,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  this->fields.ratingOffsetIds = v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.ratingOffsetIds,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


int32_t __fastcall WarBoardAIEntity__CreatePrimaryKey(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetActionTrendIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *actionTrendIds; // x21
  System_Collections_Generic_HashSet_int__o *v4; // x19
  WarQuestSelectionMaster_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Int32_array *actionTrendGroupIds; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  int32_t v10; // w20
  System_Int32_array *v11; // x20
  __int64 v13; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AE03B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488960);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42AE03B = 1;
  }
  entity = 0LL;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_38639384(
    v4,
    actionTrendIds,
    (const MethodInfo_24D9718 *)Method_System_Collections_Generic_HashSet_int___ctor___68488960);
  IsNullOrEmpty = (WarQuestSelectionMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)this->fields.actionTrendGroupIds,
                                                 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    actionTrendGroupIds = this->fields.actionTrendGroupIds;
    if ( !actionTrendGroupIds )
      goto LABEL_19;
    v8 = *(_QWORD *)&actionTrendGroupIds->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v8 )
        {
          v13 = sub_B52A88(IsNullOrEmpty);
          sub_B52A28(v13, 0LL);
        }
        v10 = actionTrendGroupIds->m_Items[v9 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)IsNullOrEmpty,
                                                       &entity,
                                                       v10,
                                                       (const MethodInfo_23E2334 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v4 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v8) = actionTrendGroupIds->max_length;
        if ( (__int64)++v9 >= (int)v8 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B52A5C(IsNullOrEmpty, v6);
    }
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  v11 = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)v4->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_38644592(
    v4,
    v11,
    (const MethodInfo_24DAB70 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
  return v11;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetRatingOffsetIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ratingOffsetIds; // x21
  System_Collections_Generic_HashSet_int__o *v4; // x19
  WarQuestSelectionMaster_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  int32_t v10; // w20
  System_Int32_array *v11; // x20
  __int64 v13; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AE03C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488960);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42AE03C = 1;
  }
  entity = 0LL;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_38639384(
    v4,
    ratingOffsetIds,
    (const MethodInfo_24D9718 *)Method_System_Collections_Generic_HashSet_int___ctor___68488960);
  IsNullOrEmpty = (WarQuestSelectionMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)this->fields.ratingOffsetGroupIds,
                                                 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    ratingOffsetGroupIds = this->fields.ratingOffsetGroupIds;
    if ( !ratingOffsetGroupIds )
      goto LABEL_19;
    v8 = *(_QWORD *)&ratingOffsetGroupIds->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v8 )
        {
          v13 = sub_B52A88(IsNullOrEmpty);
          sub_B52A28(v13, 0LL);
        }
        v10 = ratingOffsetGroupIds->m_Items[v9 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)IsNullOrEmpty,
                                                       &entity,
                                                       v10,
                                                       (const MethodInfo_23E2334 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v4 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v4,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v8) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v9 >= (int)v8 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B52A5C(IsNullOrEmpty, v6);
    }
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  v11 = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)v4->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_38644592(
    v4,
    v11,
    (const MethodInfo_24DAB70 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
  return v11;
}