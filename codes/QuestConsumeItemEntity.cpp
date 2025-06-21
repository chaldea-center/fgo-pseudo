void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CAD5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1CAD5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestConsumeItemEntity__CreatePrimaryKey(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


System_String_o *__fastcall QuestConsumeItemEntity__GetItemConsumeString(
        QuestConsumeItemEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v12; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  const MethodInfo *v14; // x2
  __int64 v15; // x2
  il2cpp_array_size_t v16; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v18; // x24
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  __int64 v21; // x23
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  struct System_String_o *name; // x1
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct System_Int32_array *nums; // x8
  const MethodInfo *v29; // x3

  if ( (byte_4B1CAD3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BCAFF8(&string___TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v6);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v7);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v8);
    byte_4B1CAD3 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v14);
  if ( (Instance & 1) != 0 )
  {
    v16 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v16 >= itemIds->max_length )
        goto LABEL_23;
      if ( !v13 )
        break;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v13,
                            itemIds->m_Items[v16 + 1],
                            (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v18 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL) )
      {
        Instance = sub_1BCB0A0(string___TypeInfo, 5LL);
        if ( !Instance )
          break;
        v21 = Instance;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_23;
        *(_QWORD *)(Instance + 32) = v12;
        sub_1BCAF9C((CGThumbnailListItem_o *)(Instance + 32), (int32_t)v12, v15, v20);
        if ( *(_DWORD *)(v21 + 24) <= 1u )
          goto LABEL_23;
        v23 = StringLiteral_43/*"\n"*/;
        *(_QWORD *)(v21 + 40) = StringLiteral_43/*"\n"*/;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 40), v23, v15, v22);
        if ( *(_DWORD *)(v21 + 24) <= 2u )
          goto LABEL_23;
        name = v18->fields.name;
        *(_QWORD *)(v21 + 48) = name;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 48), (int32_t)name, v15, v24);
        if ( *(_DWORD *)(v21 + 24) <= 3u )
          goto LABEL_23;
        v27 = (int)StringLiteral_113/*" "*/;
        *(_QWORD *)(v21 + 56) = StringLiteral_113/*" "*/;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 56), v27, v15, v26);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v16 >= nums->max_length
          || (Instance = (__int64)ItemEntity__GetCountText(v18, nums->m_Items[v16 + 1], 0LL), *(_DWORD *)(v21 + 24) <= 4u) )
        {
LABEL_23:
          sub_1BCB25C(Instance, v10, v15);
        }
        *(_QWORD *)(v21 + 64) = Instance;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 64), Instance, v15, v29);
        v12 = System_String__Concat_62490940((System_String_array *)v21, 0LL);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v16, v19);
      if ( (Instance & 1) == 0 )
        return v12;
    }
LABEL_22:
    sub_1BCB254(Instance, v10);
  }
  return v12;
}


QuestConsumeItemEntity_o *__fastcall QuestConsumeItemEntity__GetNotConsumeItemEntity(
        QuestConsumeItemEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x19
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int32_array *itemIds; // x1
  __int64 v11; // x8
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B1CAD4 & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, method);
    sub_1BCAFF8(&QuestConsumeItemEntity_TypeInfo, v3);
    byte_4B1CAD4 = 1;
  }
  v4 = sub_1BCB244(QuestConsumeItemEntity_TypeInfo);
  QuestConsumeItemEntity___ctor((QuestConsumeItemEntity_o *)v4, v5);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = this->fields.questId,
        itemIds = this->fields.itemIds,
        *(_QWORD *)(v4 + 24) = itemIds,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 24), (int32_t)itemIds, v8, v9),
        (v11 = *(_QWORD *)(v4 + 24)) == 0) )
  {
    sub_1BCB254(v6, v7);
  }
  v12 = sub_1BCB0A0(int___TypeInfo, *(unsigned int *)(v11 + 24));
  *(_QWORD *)(v4 + 32) = v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 32), v12, v13, v14);
  return (QuestConsumeItemEntity_o *)v4;
}


bool __fastcall QuestConsumeItemEntity__IsAvailableAt(
        QuestConsumeItemEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *nums; // x9
  int32_t max_length; // w8
  signed int v6; // w9

  itemIds = this->fields.itemIds;
  if ( !itemIds || (nums = this->fields.nums) == 0LL )
    sub_1BCB254(this, index);
  max_length = itemIds->max_length;
  v6 = nums->max_length;
  if ( max_length >= v6 )
    max_length = v6;
  return max_length > index;
}