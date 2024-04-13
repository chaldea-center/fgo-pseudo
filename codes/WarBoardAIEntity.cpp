void __fastcall WarBoardAIEntity___ctor(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Int32_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Int32_array *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E68C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42E68C6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  v8 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.actionTrendIds = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actionTrendIds,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.ratingOffsetIds = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ratingOffsetIds,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


int32_t __fastcall WarBoardAIEntity__CreatePrimaryKey(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetActionTrendIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_T__o *actionTrendIds; // x21
  System_Collections_Generic_HashSet_int__o *v30; // x19
  WarQuestSelectionMaster_o *IsNullOrEmpty; // x0
  __int64 v32; // x1
  struct System_Int32_array *actionTrendGroupIds; // x21
  __int64 v34; // x8
  unsigned __int64 v35; // x22
  int32_t v36; // w20
  System_Int32_array *v37; // x20
  __int64 v39; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E68C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__CopyTo___68716272, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716240, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&int___TypeInfo, v26, v27, v28);
    byte_42E68C7 = 1;
  }
  entity = 0LL;
  actionTrendIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.actionTrendIds;
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_38794568(
    v30,
    actionTrendIds,
    (const MethodInfo_24FF548 *)Method_System_Collections_Generic_HashSet_int___ctor___68716240);
  IsNullOrEmpty = (WarQuestSelectionMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)this->fields.actionTrendGroupIds,
                                                 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    actionTrendGroupIds = this->fields.actionTrendGroupIds;
    if ( !actionTrendGroupIds )
      goto LABEL_19;
    v34 = *(_QWORD *)&actionTrendGroupIds->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      while ( 1 )
      {
        if ( v35 >= (unsigned int)v34 )
        {
          v39 = sub_B5D6C8(IsNullOrEmpty);
          sub_B5D668(v39, 0LL);
        }
        v36 = actionTrendGroupIds->m_Items[v35 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionTrendGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)IsNullOrEmpty,
                                                       &entity,
                                                       v36,
                                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v30 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v30,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v34) = actionTrendGroupIds->max_length;
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B5D69C(IsNullOrEmpty, v32);
    }
  }
LABEL_17:
  if ( !v30 )
    goto LABEL_19;
  v37 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v30->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_38799776(
    v30,
    v37,
    (const MethodInfo_25009A0 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68716272);
  return v37;
}


System_Int32_array *__fastcall WarBoardAIEntity__GetRatingOffsetIds(WarBoardAIEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_T__o *ratingOffsetIds; // x21
  System_Collections_Generic_HashSet_int__o *v30; // x19
  WarQuestSelectionMaster_o *IsNullOrEmpty; // x0
  __int64 v32; // x1
  struct System_Int32_array *ratingOffsetGroupIds; // x21
  __int64 v34; // x8
  unsigned __int64 v35; // x22
  int32_t v36; // w20
  System_Int32_array *v37; // x20
  __int64 v39; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E68C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__CopyTo___68716272, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716240, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&int___TypeInfo, v26, v27, v28);
    byte_42E68C8 = 1;
  }
  entity = 0LL;
  ratingOffsetIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.ratingOffsetIds;
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_38794568(
    v30,
    ratingOffsetIds,
    (const MethodInfo_24FF548 *)Method_System_Collections_Generic_HashSet_int___ctor___68716240);
  IsNullOrEmpty = (WarQuestSelectionMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)this->fields.ratingOffsetGroupIds,
                                                 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    ratingOffsetGroupIds = this->fields.ratingOffsetGroupIds;
    if ( !ratingOffsetGroupIds )
      goto LABEL_19;
    v34 = *(_QWORD *)&ratingOffsetGroupIds->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      while ( 1 )
      {
        if ( v35 >= (unsigned int)v34 )
        {
          v39 = sub_B5D6C8(IsNullOrEmpty);
          sub_B5D668(v39, 0LL);
        }
        v36 = ratingOffsetGroupIds->m_Items[v35 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardRatingOffsetGroupMaster___);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)IsNullOrEmpty,
                                                       &entity,
                                                       v36,
                                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( !entity || !v30 )
            break;
          System_Collections_Generic_HashSet_int___UnionWith(
            v30,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.age,
            (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        }
        LODWORD(v34) = ratingOffsetGroupIds->max_length;
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_17;
      }
LABEL_19:
      sub_B5D69C(IsNullOrEmpty, v32);
    }
  }
LABEL_17:
  if ( !v30 )
    goto LABEL_19;
  v37 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v30->fields._count);
  System_Collections_Generic_HashSet_int___CopyTo_38799776(
    v30,
    v37,
    (const MethodInfo_25009A0 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68716272);
  return v37;
}