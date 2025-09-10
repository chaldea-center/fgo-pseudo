void QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C278A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C278A9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v9; // x2
  unsigned int v10; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v12; // x24
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x23
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  struct System_String_o *name; // x1
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct System_Int32_array *nums; // x8
  const MethodInfo *v23; // x3

  if ( (byte_4C278A7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C278A7 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v8);
  if ( (Instance & 1) != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v10 >= LODWORD(itemIds->max_length) )
        goto LABEL_23;
      if ( !v7 )
        break;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v7,
                            itemIds->m_Items[v10],
                            (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v12 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0) )
      {
        Instance = sub_1C2D538(string___TypeInfo, 5);
        if ( !Instance )
          break;
        v15 = Instance;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_23;
        *(_QWORD *)(Instance + 32) = v6;
        sub_1C2D434((CGThumbnailListItem_o *)(Instance + 32), (int32_t)v6, v9, v14);
        if ( *(_DWORD *)(v15 + 24) <= 1u )
          goto LABEL_23;
        v17 = StringLiteral_43/*"\n"*/;
        *(_QWORD *)(v15 + 40) = StringLiteral_43/*"\n"*/;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 40), v17, v9, v16);
        if ( *(_DWORD *)(v15 + 24) <= 2u )
          goto LABEL_23;
        name = v12->fields.name;
        *(_QWORD *)(v15 + 48) = name;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 48), (int32_t)name, v9, v18);
        if ( *(_DWORD *)(v15 + 24) <= 3u )
          goto LABEL_23;
        v21 = (int)StringLiteral_113/*" "*/;
        *(_QWORD *)(v15 + 56) = StringLiteral_113/*" "*/;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 56), v21, v9, v20);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v10 >= LODWORD(nums->max_length)
          || (Instance = (__int64)ItemEntity__GetCountText(v12, nums->m_Items[v10], 0), *(_DWORD *)(v15 + 24) <= 4u) )
        {
LABEL_23:
          sub_1C2D6F4(Instance, v4, v9);
        }
        *(_QWORD *)(v15 + 64) = Instance;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 64), Instance, v9, v23);
        v6 = System_String__Concat_63498380((System_String_array *)v15, 0);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v10, v13);
      if ( (Instance & 1) == 0 )
        return v6;
    }
LABEL_22:
    sub_1C2D6EC(Instance, v4);
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
  const MethodInfo *v8; // x3
  struct System_Int32_array *itemIds; // x1
  __int64 v10; // x8
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C278A8 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&QuestConsumeItemEntity_TypeInfo);
    byte_4C278A8 = 1;
  }
  v3 = sub_1C2D6DC(QuestConsumeItemEntity_TypeInfo);
  QuestConsumeItemEntity___ctor((QuestConsumeItemEntity_o *)v3, v4);
  if ( !v3
    || (*(_DWORD *)(v3 + 16) = this->fields.questId,
        itemIds = this->fields.itemIds,
        *(_QWORD *)(v3 + 24) = itemIds,
        sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)itemIds, v7, v8),
        (v10 = *(_QWORD *)(v3 + 24)) == 0) )
  {
    sub_1C2D6EC(v5, v6);
  }
  v11 = sub_1C2D538(int___TypeInfo, *(unsigned int *)(v10 + 24));
  *(_QWORD *)(v3 + 32) = v11;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), v11, v12, v13);
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
    sub_1C2D6EC(this, index);
  max_length = itemIds->max_length;
  v6 = nums->max_length;
  if ( max_length >= v6 )
    max_length = v6;
  return max_length > index;
}