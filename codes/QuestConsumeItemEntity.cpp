void QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CD1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938CD1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_String_o *name; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct System_Int32_array *nums; // x8
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7

  if ( (byte_5938CCF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938CCF = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
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
                            (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v11 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0) )
      {
        Instance = sub_21FFD10(string___TypeInfo, 5);
        if ( !Instance )
          break;
        v19 = Instance;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_23;
        *(_QWORD *)(Instance + 32) = v6;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Instance + 32), (int32_t)v6, v13, v14, v15, v16, v17, v18);
        if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_23;
        v26 = StringLiteral_43/*"\n"*/;
        *(_QWORD *)(v19 + 40) = StringLiteral_43/*"\n"*/;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 40), v26, v20, v21, v22, v23, v24, v25);
        if ( *(_DWORD *)(v19 + 24) <= 2u )
          goto LABEL_23;
        name = v11->fields.name;
        *(_QWORD *)(v19 + 48) = name;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 48), (int32_t)name, v27, v28, v29, v30, v31, v32);
        if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFC) == 0 )
          goto LABEL_23;
        v40 = (int)StringLiteral_113/*" "*/;
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 56), v40, v34, v35, v36, v37, v38, v39);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v9 >= LODWORD(nums->max_length)
          || (Instance = (__int64)ItemEntity__GetCountText(v11, nums->m_Items[v9], 0), *(_DWORD *)(v19 + 24) <= 4u) )
        {
LABEL_23:
          sub_21FFED4(Instance);
        }
        *(_QWORD *)(v19 + 64) = Instance;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 64), Instance, v42, v43, v44, v45, v46, v47);
        v6 = System_String__Concat_75483816((System_String_array *)v19, 0);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v9, v12);
      if ( (Instance & 1) == 0 )
        return v6;
    }
LABEL_22:
    sub_21FFECC(Instance, v4);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Int32_array *itemIds; // x1
  int32_t questId; // w8
  __int64 v15; // x8
  __int64 v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5938CD0 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&QuestConsumeItemEntity_TypeInfo);
    byte_5938CD0 = 1;
  }
  v3 = sub_21FFEBC(QuestConsumeItemEntity_TypeInfo);
  QuestConsumeItemEntity___ctor((QuestConsumeItemEntity_o *)v3, v4);
  if ( !v3
    || (itemIds = this->fields.itemIds,
        questId = this->fields.questId,
        *(_QWORD *)(v3 + 24) = itemIds,
        *(_DWORD *)(v3 + 16) = questId,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)itemIds, v7, v8, v9, v10, v11, v12),
        (v15 = *(_QWORD *)(v3 + 24)) == 0) )
  {
    sub_21FFECC(v5, v6);
  }
  v16 = sub_21FFD10(int___TypeInfo, *(unsigned int *)(v15 + 24));
  *(_QWORD *)(v3 + 32) = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), v16, v17, v18, v19, v20, v21, v22);
  return (QuestConsumeItemEntity_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
bool QuestConsumeItemEntity__IsAvailableAt(QuestConsumeItemEntity_o *this, int32_t index, const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *nums; // x9
  int32_t max_length; // w8
  int32_t v6; // w9

  itemIds = this->fields.itemIds;
  if ( !itemIds || (nums = this->fields.nums) == 0 )
    sub_21FFECC(this, *(_QWORD *)&index);
  max_length = itemIds->max_length;
  v6 = nums->max_length;
  if ( max_length >= v6 )
    max_length = v6;
  return max_length > index;
}