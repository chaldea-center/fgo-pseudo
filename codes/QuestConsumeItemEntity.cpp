void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B375FA & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_int___ctor__, method);
    byte_4B375FA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31D1CF0 *)Method_DataEntityBase_int___ctor__);
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
  int64_t Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v12; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  const MethodInfo *v14; // x2
  il2cpp_array_size_t v15; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v17; // x24
  const MethodInfo *v18; // x2
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t name; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  void *v46; // x1
  struct System_Int32_array *nums; // x8
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4B375F8 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BD3458(&string___TypeInfo, v5);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v6);
    sub_1BD3458(&StringLiteral_116/*" "*/, v7);
    sub_1BD3458(&StringLiteral_1/*""*/, v8);
    byte_4B375F8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ItemMaster___);
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
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v13,
                            itemIds->m_Items[v15 + 1],
                            (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v17 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL) )
      {
        Instance = sub_1BD3500(string___TypeInfo, 5LL);
        if ( !Instance )
          break;
        v25 = Instance;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_23;
        *(_QWORD *)(Instance + 32) = v12;
        sub_1BD33FC((PartyOrganizationUtility_o *)(Instance + 32), (int64_t)v12, v19, v20, v21, v22, v23, v24);
        if ( *(_DWORD *)(v25 + 24) <= 1u )
          goto LABEL_23;
        v32 = StringLiteral_43/*"\n"*/;
        *(_QWORD *)(v25 + 40) = StringLiteral_43/*"\n"*/;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 40), v32, v26, v27, v28, v29, v30, v31);
        if ( *(_DWORD *)(v25 + 24) <= 2u )
          goto LABEL_23;
        name = (int64_t)v17->fields.name;
        *(_QWORD *)(v25 + 48) = name;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 48), name, v33, v34, v35, v36, v37, v38);
        if ( *(_DWORD *)(v25 + 24) <= 3u )
          goto LABEL_23;
        v46 = StringLiteral_116/*" "*/;
        *(_QWORD *)(v25 + 56) = StringLiteral_116/*" "*/;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 56), (int64_t)v46, v40, v41, v42, v43, v44, v45);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v15 >= nums->max_length
          || (Instance = (int64_t)ItemEntity__GetCountText(v17, nums->m_Items[v15 + 1], 0LL), *(_DWORD *)(v25 + 24) <= 4u) )
        {
LABEL_23:
          sub_1BD36BC(Instance, v10);
        }
        *(_QWORD *)(v25 + 64) = Instance;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 64), Instance, v48, v49, v50, v51, v52, v53);
        v12 = System_String__Concat_62538776((System_String_array *)v25, 0LL);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v15, v18);
      if ( (Instance & 1) == 0 )
        return v12;
    }
LABEL_22:
    sub_1BD36B4(Instance, v10);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Int32_array *itemIds; // x1
  __int64 v15; // x8
  int64_t v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B375F9 & 1) == 0 )
  {
    sub_1BD3458(&int___TypeInfo, method);
    sub_1BD3458(&QuestConsumeItemEntity_TypeInfo, v3);
    byte_4B375F9 = 1;
  }
  v4 = sub_1BD36A4(QuestConsumeItemEntity_TypeInfo);
  QuestConsumeItemEntity___ctor((QuestConsumeItemEntity_o *)v4, v5);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = this->fields.questId,
        itemIds = this->fields.itemIds,
        *(_QWORD *)(v4 + 24) = itemIds,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)itemIds, v8, v9, v10, v11, v12, v13),
        (v15 = *(_QWORD *)(v4 + 24)) == 0) )
  {
    sub_1BD36B4(v6, v7);
  }
  v16 = sub_1BD3500(int___TypeInfo, *(unsigned int *)(v15 + 24));
  *(_QWORD *)(v4 + 32) = v16;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v4 + 32), v16, v17, v18, v19, v20, v21, v22);
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
    sub_1BD36B4(this, index);
  max_length = itemIds->max_length;
  v6 = nums->max_length;
  if ( max_length >= v6 )
    max_length = v6;
  return max_length > index;
}