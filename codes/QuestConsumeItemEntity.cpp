void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4213C75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4213C75 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  System_Int32_array **v11; // x24
  const MethodInfo *v12; // x2
  il2cpp_array_size_t v13; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v15; // x23
  const MethodInfo *v16; // x2
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **name; // x24
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  struct System_Int32_array *nums; // x8
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x23
  __int64 v54; // x0
  __int64 v55; // x0

  if ( (byte_4213C74 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&string___TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v6);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4213C74 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v12);
  if ( (Instance & 1) != 0 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v13 >= itemIds->max_length )
        goto LABEL_37;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            MasterData_WarQuestSelectionMaster,
                            itemIds->m_Items[v13 + 1],
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v15 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL) )
      {
        Instance = sub_B0D8BC(string___TypeInfo, 5LL);
        if ( !Instance )
          break;
        v23 = (System_String_array *)Instance;
        if ( v11 )
        {
          Instance = sub_B0D964(v11, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
          if ( !Instance )
          {
LABEL_38:
            v55 = sub_B0D99C(Instance);
            sub_B0D948(v55, 0LL);
          }
        }
        if ( !v23->max_length )
          goto LABEL_37;
        v23->m_Items[0] = (System_String_o *)v11;
        sub_B0D840((BattleServantConfConponent_o *)v23->m_Items, v11, v17, v18, v19, v20, v21, v22);
        Instance = StringLiteral_26/*"\n"*/;
        if ( StringLiteral_26/*"\n"*/ )
        {
          Instance = sub_B0D964(StringLiteral_26/*"\n"*/, v23->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
          v30 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
        }
        else
        {
          v30 = 0LL;
        }
        if ( v23->max_length <= 1 )
          goto LABEL_37;
        v23->m_Items[1] = (System_String_o *)v30;
        sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
        name = (System_Int32_array **)v15->fields.name;
        if ( name )
        {
          Instance = sub_B0D964(v15->fields.name, v23->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
        }
        if ( v23->max_length <= 2 )
          goto LABEL_37;
        v23->m_Items[2] = (System_String_o *)name;
        sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[2], name, v31, v32, v33, v34, v35, v36);
        Instance = StringLiteral_80/*" "*/;
        if ( StringLiteral_80/*" "*/ )
        {
          Instance = sub_B0D964(StringLiteral_80/*" "*/, v23->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
          v44 = (System_Int32_array **)StringLiteral_80/*" "*/;
        }
        else
        {
          v44 = 0LL;
        }
        if ( v23->max_length <= 3 )
          goto LABEL_37;
        v23->m_Items[3] = (System_String_o *)v44;
        sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v13 >= nums->max_length )
        {
LABEL_37:
          v54 = sub_B0D9A8(Instance);
          sub_B0D948(v54, 0LL);
        }
        Instance = (__int64)ItemEntity__GetCountText(v15, nums->m_Items[v13 + 1], 0LL);
        v52 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B0D964(Instance, v23->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
        }
        if ( v23->max_length <= 4 )
          goto LABEL_37;
        v23->m_Items[4] = (System_String_o *)v52;
        sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
        v11 = (System_Int32_array **)System_String__Concat_43930028(v23, 0LL);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v13, v16);
      if ( (Instance & 1) == 0 )
        return (System_String_o *)v11;
    }
LABEL_36:
    sub_B0D97C(Instance);
  }
  return (System_String_o *)v11;
}


bool __fastcall QuestConsumeItemEntity__IsAvailableAt(
        QuestConsumeItemEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *nums; // x9

  itemIds = this->fields.itemIds;
  if ( !itemIds || (nums = this->fields.nums) == 0LL )
    sub_B0D97C(this);
  return UnityEngine_Mathf__Min_40819044(itemIds->max_length, nums->max_length, 0LL) > index;
}