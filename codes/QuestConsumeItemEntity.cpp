void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A1FF0E & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_int___ctor__, method);
    byte_4A1FF0E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30F8560 *)Method_DataEntityBase_int___ctor__);
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
  il2cpp_array_size_t v15; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v17; // x24
  const MethodInfo *v18; // x2
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_String_o *name; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  struct System_Int32_array *nums; // x8
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_4A1FF0C & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B715CC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B715CC(&string___TypeInfo, v5);
    sub_1B715CC(&StringLiteral_43/*"\n"*/, v6);
    sub_1B715CC(&StringLiteral_117/*" "*/, v7);
    sub_1B715CC(&StringLiteral_1/*""*/, v8);
    byte_4A1FF0C = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ItemMaster___);
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v14);
  if ( (Instance & 1) != 0 )
  {
    v15 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v15 >= itemIds->max_length )
        goto LABEL_23;
      if ( !v13 )
        break;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v13,
                            itemIds->m_Items[v15 + 1],
                            (const MethodInfo_30F8760 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v17 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL) )
      {
        Instance = sub_1B71674(string___TypeInfo, 5LL);
        if ( !Instance )
          break;
        v21 = Instance;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_23;
        *(_QWORD *)(Instance + 32) = v12;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(Instance + 32), (int32_t)v12, v19, v20);
        if ( *(_DWORD *)(v21 + 24) <= 1u )
          goto LABEL_23;
        v24 = StringLiteral_43/*"\n"*/;
        *(_QWORD *)(v21 + 40) = StringLiteral_43/*"\n"*/;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v21 + 40), v24, v22, v23);
        if ( *(_DWORD *)(v21 + 24) <= 2u )
          goto LABEL_23;
        name = v17->fields.name;
        *(_QWORD *)(v21 + 48) = name;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v21 + 48), (int32_t)name, v25, v26);
        if ( *(_DWORD *)(v21 + 24) <= 3u )
          goto LABEL_23;
        v30 = (int)StringLiteral_117/*" "*/;
        *(_QWORD *)(v21 + 56) = StringLiteral_117/*" "*/;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v21 + 56), v30, v28, v29);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v15 >= nums->max_length
          || (Instance = (__int64)ItemEntity__GetCountText(v17, nums->m_Items[v15 + 1], 0LL), *(_DWORD *)(v21 + 24) <= 4u) )
        {
LABEL_23:
          sub_1B71830(Instance, v10);
        }
        *(_QWORD *)(v21 + 64) = Instance;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v21 + 64), Instance, v32, v33);
        v12 = System_String__Concat_61519032((System_String_array *)v21, 0LL);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v15, v18);
      if ( (Instance & 1) == 0 )
        return v12;
    }
LABEL_22:
    sub_1B71828(Instance, v10);
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
  int32_t v9; // w3
  struct System_Int32_array *itemIds; // x1
  __int64 v11; // x8
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A1FF0D & 1) == 0 )
  {
    sub_1B715CC(&int___TypeInfo, method);
    sub_1B715CC(&QuestConsumeItemEntity_TypeInfo, v3);
    byte_4A1FF0D = 1;
  }
  v4 = sub_1B71818(QuestConsumeItemEntity_TypeInfo);
  QuestConsumeItemEntity___ctor((QuestConsumeItemEntity_o *)v4, v5);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = this->fields.questId,
        itemIds = this->fields.itemIds,
        *(_QWORD *)(v4 + 24) = itemIds,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)itemIds, v8, v9),
        (v11 = *(_QWORD *)(v4 + 24)) == 0) )
  {
    sub_1B71828(v6, v7);
  }
  v12 = sub_1B71674(int___TypeInfo, *(unsigned int *)(v11 + 24));
  *(_QWORD *)(v4 + 32) = v12;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v4 + 32), v12, v13, v14);
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
    sub_1B71828(this, index);
  max_length = itemIds->max_length;
  v6 = nums->max_length;
  if ( max_length >= v6 )
    max_length = v6;
  return max_length > index;
}