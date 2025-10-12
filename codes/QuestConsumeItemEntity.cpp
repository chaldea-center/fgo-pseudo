void QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37FAA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C37FAA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestConsumeItemEntity__CreatePrimaryKey(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


System_String_o *QuestConsumeItemEntity__GetItemConsumeString(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x0
  System_String_o *v5; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  const MethodInfo *v7; // x2
  unsigned int v8; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v10; // x24
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_String_o *name; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct System_Int32_array *nums; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C37FA8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C37FA8 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v7);
  if ( (Instance & 1) != 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v8 >= LODWORD(itemIds->max_length) )
        goto LABEL_23;
      if ( !v6 )
        break;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v6,
                            itemIds->m_Items[v8],
                            (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v10 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0) )
      {
        Instance = sub_1C32CC8(string___TypeInfo, 5);
        if ( !Instance )
          break;
        v14 = Instance;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_23;
        *(_QWORD *)(Instance + 32) = v5;
        sub_1C32BC4((CGThumbnailListItem_o *)(Instance + 32), (int32_t)v5, v12, v13);
        if ( *(_DWORD *)(v14 + 24) <= 1u )
          goto LABEL_23;
        v17 = StringLiteral_43/*"\n"*/;
        *(_QWORD *)(v14 + 40) = StringLiteral_43/*"\n"*/;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 40), v17, v15, v16);
        if ( *(_DWORD *)(v14 + 24) <= 2u )
          goto LABEL_23;
        name = v10->fields.name;
        *(_QWORD *)(v14 + 48) = name;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 48), (int32_t)name, v18, v19);
        if ( *(_DWORD *)(v14 + 24) <= 3u )
          goto LABEL_23;
        v23 = (int)StringLiteral_113/*" "*/;
        *(_QWORD *)(v14 + 56) = StringLiteral_113/*" "*/;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 56), v23, v21, v22);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v8 >= LODWORD(nums->max_length)
          || (Instance = (__int64)ItemEntity__GetCountText(v10, nums->m_Items[v8], 0), *(_DWORD *)(v14 + 24) <= 4u) )
        {
LABEL_23:
          sub_1C32E84(Instance);
        }
        *(_QWORD *)(v14 + 64) = Instance;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 64), Instance, v25, v26);
        v5 = System_String__Concat_63559060((System_String_array *)v14, 0);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v8, v11);
      if ( (Instance & 1) == 0 )
        return v5;
    }
LABEL_22:
    sub_1C32E7C(Instance);
  }
  return v5;
}


QuestConsumeItemEntity_o *QuestConsumeItemEntity__GetNotConsumeItemEntity(
        QuestConsumeItemEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array *itemIds; // x1
  __int64 v9; // x8
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C37FA9 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&QuestConsumeItemEntity_TypeInfo);
    byte_4C37FA9 = 1;
  }
  v3 = sub_1C32E6C(QuestConsumeItemEntity_TypeInfo);
  QuestConsumeItemEntity___ctor((QuestConsumeItemEntity_o *)v3, v4);
  if ( !v3
    || (*(_DWORD *)(v3 + 16) = this->fields.questId,
        itemIds = this->fields.itemIds,
        *(_QWORD *)(v3 + 24) = itemIds,
        sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)itemIds, v6, v7),
        (v9 = *(_QWORD *)(v3 + 24)) == 0) )
  {
    sub_1C32E7C(v5);
  }
  v10 = sub_1C32CC8(int___TypeInfo, *(unsigned int *)(v9 + 24));
  *(_QWORD *)(v3 + 32) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), v10, v11, v12);
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
    sub_1C32E7C(this);
  max_length = itemIds->max_length;
  v6 = nums->max_length;
  if ( max_length >= v6 )
    max_length = v6;
  return max_length > index;
}