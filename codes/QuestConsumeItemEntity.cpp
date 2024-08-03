void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC841 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FC841 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
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
  Il2CppObject *MasterData_object; // x0
  System_String_o *v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  const MethodInfo *v13; // x2
  __int64 v14; // x1
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

  if ( (byte_49FC83F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&string___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v6);
    sub_1B640C8(&StringLiteral_117/*" "*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FC83F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v13);
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
      if ( !v12 )
        break;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v12,
                            itemIds->m_Items[v15 + 1],
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v17 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL) )
      {
        Instance = sub_1B64170(string___TypeInfo, 5LL);
        if ( !Instance )
          break;
        v21 = Instance;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_23;
        *(_QWORD *)(Instance + 32) = v11;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(Instance + 32), (int32_t)v11, v19, v20);
        if ( *(_DWORD *)(v21 + 24) <= 1u )
          goto LABEL_23;
        v24 = StringLiteral_43/*"\n"*/;
        *(_QWORD *)(v21 + 40) = StringLiteral_43/*"\n"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 40), v24, v22, v23);
        if ( *(_DWORD *)(v21 + 24) <= 2u )
          goto LABEL_23;
        name = v17->fields.name;
        *(_QWORD *)(v21 + 48) = name;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 48), (int32_t)name, v25, v26);
        if ( *(_DWORD *)(v21 + 24) <= 3u )
          goto LABEL_23;
        v30 = (int)StringLiteral_117/*" "*/;
        *(_QWORD *)(v21 + 56) = StringLiteral_117/*" "*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 56), v30, v28, v29);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v15 >= nums->max_length
          || (Instance = (__int64)ItemEntity__GetCountText(v17, nums->m_Items[v15 + 1], 0LL), *(_DWORD *)(v21 + 24) <= 4u) )
        {
LABEL_23:
          sub_1B6432C(Instance, v14);
        }
        *(_QWORD *)(v21 + 64) = Instance;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 64), Instance, v32, v33);
        v11 = System_String__Concat_61388924((System_String_array *)v21, 0LL);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v15, v18);
      if ( (Instance & 1) == 0 )
        return v11;
    }
LABEL_22:
    sub_1B64324(Instance);
  }
  return v11;
}


QuestConsumeItemEntity_o *__fastcall QuestConsumeItemEntity__GetNotConsumeItemEntity(
        QuestConsumeItemEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x19
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Int32_array *itemIds; // x1
  __int64 v11; // x8
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FC840 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&QuestConsumeItemEntity_TypeInfo, v4);
    byte_49FC840 = 1;
  }
  v5 = sub_1B64314(QuestConsumeItemEntity_TypeInfo, method, v2);
  QuestConsumeItemEntity___ctor((QuestConsumeItemEntity_o *)v5, v6);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = this->fields.questId,
        itemIds = this->fields.itemIds,
        *(_QWORD *)(v5 + 24) = itemIds,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)itemIds, v8, v9),
        (v11 = *(_QWORD *)(v5 + 24)) == 0) )
  {
    sub_1B64324(v7);
  }
  v12 = sub_1B64170(int___TypeInfo, *(unsigned int *)(v11 + 24));
  *(_QWORD *)(v5 + 32) = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), v12, v13, v14);
  return (QuestConsumeItemEntity_o *)v5;
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
    sub_1B64324(this);
  max_length = itemIds->max_length;
  v6 = nums->max_length;
  if ( max_length >= v6 )
    max_length = v6;
  return max_length > index;
}