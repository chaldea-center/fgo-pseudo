void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186E4B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4186E4B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  System_Int32_array **v12; // x24
  const MethodInfo *v13; // x2
  il2cpp_array_size_t v14; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v16; // x23
  const MethodInfo *v17; // x2
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **name; // x24
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  struct System_Int32_array *nums; // x8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x23
  __int64 v55; // x0
  __int64 v56; // x0

  if ( (byte_4186E4A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&string___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v6);
    sub_B2C35C(&StringLiteral_80/*" "*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4186E4A = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v13);
  if ( (Instance & 1) != 0 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v14 >= itemIds->max_length )
        goto LABEL_37;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            MasterData_WarQuestSelectionMaster,
                            itemIds->m_Items[v14 + 1],
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v16 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL) )
      {
        Instance = sub_B2C374(string___TypeInfo, 5LL);
        if ( !Instance )
          break;
        v24 = (System_String_array *)Instance;
        if ( v12 )
        {
          Instance = sub_B2C41C(v12, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
          if ( !Instance )
          {
LABEL_38:
            v56 = sub_B2C454();
            sub_B2C400(v56, 0LL);
          }
        }
        if ( !v24->max_length )
          goto LABEL_37;
        v24->m_Items[0] = (System_String_o *)v12;
        sub_B2C2F8((BattleServantConfConponent_o *)v24->m_Items, v12, v18, v19, v20, v21, v22, v23);
        Instance = StringLiteral_26/*"\n"*/;
        if ( StringLiteral_26/*"\n"*/ )
        {
          Instance = sub_B2C41C(StringLiteral_26/*"\n"*/, v24->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
          v31 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
        }
        else
        {
          v31 = 0LL;
        }
        if ( v24->max_length <= 1 )
          goto LABEL_37;
        v24->m_Items[1] = (System_String_o *)v31;
        sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
        name = (System_Int32_array **)v16->fields.name;
        if ( name )
        {
          Instance = sub_B2C41C(v16->fields.name, v24->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
        }
        if ( v24->max_length <= 2 )
          goto LABEL_37;
        v24->m_Items[2] = (System_String_o *)name;
        sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[2], name, v32, v33, v34, v35, v36, v37);
        Instance = StringLiteral_80/*" "*/;
        if ( StringLiteral_80/*" "*/ )
        {
          Instance = sub_B2C41C(StringLiteral_80/*" "*/, v24->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
          v45 = (System_Int32_array **)StringLiteral_80/*" "*/;
        }
        else
        {
          v45 = 0LL;
        }
        if ( v24->max_length <= 3 )
          goto LABEL_37;
        v24->m_Items[3] = (System_String_o *)v45;
        sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v14 >= nums->max_length )
        {
LABEL_37:
          v55 = sub_B2C460(Instance);
          sub_B2C400(v55, 0LL);
        }
        Instance = (__int64)ItemEntity__GetCountText(v16, nums->m_Items[v14 + 1], 0LL);
        v53 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B2C41C(Instance, v24->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
        }
        if ( v24->max_length <= 4 )
          goto LABEL_37;
        v24->m_Items[4] = (System_String_o *)v53;
        sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[4], v53, v47, v48, v49, v50, v51, v52);
        v12 = (System_Int32_array **)System_String__Concat_44385656(v24, 0LL);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v14, v17);
      if ( (Instance & 1) == 0 )
        return (System_String_o *)v12;
    }
LABEL_36:
    sub_B2C434(Instance, v10);
  }
  return (System_String_o *)v12;
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
    sub_B2C434(this, index);
  return UnityEngine_Mathf__Min_40694704(itemIds->max_length, nums->max_length, 0LL) > index;
}