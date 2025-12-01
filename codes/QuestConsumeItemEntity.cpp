void QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC79E4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC79E4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestConsumeItemEntity__CreatePrimaryKey(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


System_String_o *QuestConsumeItemEntity__GetItemConsumeString(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v6; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  const MethodInfo *v8; // x2
  unsigned int v9; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v11; // x24
  const MethodInfo *v12; // x2
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_String_o *name; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  struct System_Int32_array *nums; // x8
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7

  if ( (byte_4CC79E2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC79E2 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v8);
  if ( (Instance & 1) != 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v9 >= LODWORD(itemIds->max_length) )
        goto LABEL_23;
      if ( !v7 )
        break;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v7,
                            itemIds->m_Items[v9],
                            (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v11 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0) )
      {
        Instance = sub_1C71458(string___TypeInfo, 5);
        if ( !Instance )
          break;
        v19 = Instance;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_23;
        *(_QWORD *)(Instance + 32) = v6;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(Instance + 32), (int32_t)v6, v13, v14, v15, v16, v17, v18);
        if ( *(_DWORD *)(v19 + 24) <= 1u )
          goto LABEL_23;
        v26 = StringLiteral_43/*"\n"*/;
        *(_QWORD *)(v19 + 40) = StringLiteral_43/*"\n"*/;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 40), v26, v20, v21, v22, v23, v24, v25);
        if ( *(_DWORD *)(v19 + 24) <= 2u )
          goto LABEL_23;
        name = v11->fields.name;
        *(_QWORD *)(v19 + 48) = name;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 48), (int32_t)name, v27, v28, v29, v30, v31, v32);
        if ( *(_DWORD *)(v19 + 24) <= 3u )
          goto LABEL_23;
        v40 = (int)StringLiteral_113/*" "*/;
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 56), v40, v34, v35, v36, v37, v38, v39);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v9 >= LODWORD(nums->max_length)
          || (Instance = (__int64)ItemEntity__GetCountText(v11, nums->m_Items[v9], 0), *(_DWORD *)(v19 + 24) <= 4u) )
        {
LABEL_23:
          sub_1C71610(Instance);
        }
        *(_QWORD *)(v19 + 64) = Instance;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 64), Instance, v42, v43, v44, v45, v46, v47);
        v6 = System_String__Concat_64072256((System_String_array *)v19, 0);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v9, v12);
      if ( (Instance & 1) == 0 )
        return v6;
    }
LABEL_22:
    sub_1C71608(Instance, v4);
  }
  return v6;
}


QuestConsumeItemEntity_o *QuestConsumeItemEntity__GetNotConsumeItemEntity(
        QuestConsumeItemEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Int32_array *itemIds; // x1
  __int64 v14; // x8
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC79E3 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&QuestConsumeItemEntity_TypeInfo);
    byte_4CC79E3 = 1;
  }
  v3 = sub_1C715FC(QuestConsumeItemEntity_TypeInfo);
  QuestConsumeItemEntity___ctor((QuestConsumeItemEntity_o *)v3, v4);
  if ( !v3
    || (*(_DWORD *)(v3 + 16) = this->fields.questId,
        itemIds = this->fields.itemIds,
        *(_QWORD *)(v3 + 24) = itemIds,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)itemIds, v7, v8, v9, v10, v11, v12),
        (v14 = *(_QWORD *)(v3 + 24)) == 0) )
  {
    sub_1C71608(v5, v6);
  }
  v15 = sub_1C71458(int___TypeInfo, *(unsigned int *)(v14 + 24));
  *(_QWORD *)(v3 + 32) = v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), v15, v16, v17, v18, v19, v20, v21);
  return (QuestConsumeItemEntity_o *)v3;
}


bool QuestConsumeItemEntity__IsAvailableAt(QuestConsumeItemEntity_o *this, int32_t index, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *nums; // x9
  int32_t max_length; // w8
  int32_t v6; // w9

  itemIds = this->fields.itemIds;
  if ( !itemIds || (nums = this->fields.nums) == 0 )
    sub_1C71608(this, index);
  max_length = itemIds->max_length;
  v6 = nums->max_length;
  if ( max_length >= v6 )
    max_length = v6;
  return max_length > index;
}