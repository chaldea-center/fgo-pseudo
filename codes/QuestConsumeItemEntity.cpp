void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1664C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B1664C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestConsumeItemEntity__CreatePrimaryKey(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


System_String_o *__fastcall QuestConsumeItemEntity__GetItemConsumeString(
        QuestConsumeItemEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v19; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x20
  const MethodInfo *v21; // x2
  il2cpp_array_size_t v22; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v24; // x24
  const MethodInfo *v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t name; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  void *v53; // x1
  struct System_Int32_array *nums; // x8
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  if ( (byte_4B1664A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B1664A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v21);
  if ( (Instance & 1) != 0 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v22 >= itemIds->max_length )
        goto LABEL_23;
      if ( !v20 )
        break;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v20,
                            itemIds->m_Items[v22 + 1],
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v24 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL) )
      {
        Instance = sub_1BCA888(string___TypeInfo, 5LL);
        if ( !Instance )
          break;
        v32 = Instance;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_23;
        *(_QWORD *)(Instance + 32) = v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(Instance + 32), (int64_t)v19, v26, v27, v28, v29, v30, v31);
        if ( *(_DWORD *)(v32 + 24) <= 1u )
          goto LABEL_23;
        v39 = StringLiteral_43/*"\n"*/;
        *(_QWORD *)(v32 + 40) = StringLiteral_43/*"\n"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 40), v39, v33, v34, v35, v36, v37, v38);
        if ( *(_DWORD *)(v32 + 24) <= 2u )
          goto LABEL_23;
        name = (int64_t)v24->fields.name;
        *(_QWORD *)(v32 + 48) = name;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 48), name, v40, v41, v42, v43, v44, v45);
        if ( *(_DWORD *)(v32 + 24) <= 3u )
          goto LABEL_23;
        v53 = StringLiteral_116/*" "*/;
        *(_QWORD *)(v32 + 56) = StringLiteral_116/*" "*/;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 56), (int64_t)v53, v47, v48, v49, v50, v51, v52);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v22 >= nums->max_length
          || (Instance = (int64_t)ItemEntity__GetCountText(v24, nums->m_Items[v22 + 1], 0LL), *(_DWORD *)(v32 + 24) <= 4u) )
        {
LABEL_23:
          sub_1BCAA44(Instance, v17);
        }
        *(_QWORD *)(v32 + 64) = Instance;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 64), Instance, v55, v56, v57, v58, v59, v60);
        v19 = System_String__Concat_62414748((System_String_array *)v32, 0LL);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v22, v25);
      if ( (Instance & 1) == 0 )
        return v19;
    }
LABEL_22:
    sub_1BCAA3C(Instance, v17);
  }
  return v19;
}


QuestConsumeItemEntity_o *__fastcall QuestConsumeItemEntity__GetNotConsumeItemEntity(
        QuestConsumeItemEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x19
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Int32_array *itemIds; // x1
  __int64 v18; // x8
  int64_t v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1664B & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&QuestConsumeItemEntity_TypeInfo, v5, v6);
    byte_4B1664B = 1;
  }
  v7 = sub_1BCAA2C(QuestConsumeItemEntity_TypeInfo, method, v2, v3);
  QuestConsumeItemEntity___ctor((QuestConsumeItemEntity_o *)v7, v8);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = this->fields.questId,
        itemIds = this->fields.itemIds,
        *(_QWORD *)(v7 + 24) = itemIds,
        sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)itemIds, v11, v12, v13, v14, v15, v16),
        (v18 = *(_QWORD *)(v7 + 24)) == 0) )
  {
    sub_1BCAA3C(v9, v10);
  }
  v19 = sub_1BCA888(int___TypeInfo, *(unsigned int *)(v18 + 24));
  *(_QWORD *)(v7 + 32) = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), v19, v20, v21, v22, v23, v24, v25);
  return (QuestConsumeItemEntity_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  max_length = itemIds->max_length;
  v6 = nums->max_length;
  if ( max_length >= v6 )
    max_length = v6;
  return max_length > index;
}