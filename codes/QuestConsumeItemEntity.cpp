void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B019E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B019E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestConsumeItemEntity__CreatePrimaryKey(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


System_String_o *__fastcall QuestConsumeItemEntity__GetItemConsumeString(
        QuestConsumeItemEntity_o *this,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  System_Int32_array **v6; // x24
  const MethodInfo *v7; // x2
  il2cpp_array_size_t v8; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v10; // x23
  const MethodInfo *v11; // x2
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **name; // x24
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  struct System_Int32_array *nums; // x8
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x23
  __int64 v49; // x0
  __int64 v50; // x0

  if ( (byte_42B019D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B019D = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  v6 = (System_Int32_array **)StringLiteral_1/*""*/;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v7);
  if ( (Instance & 1) != 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v8 >= itemIds->max_length )
        goto LABEL_37;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            MasterData_WarQuestSelectionMaster,
                            itemIds->m_Items[v8 + 1],
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v10 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL) )
      {
        Instance = sub_B5299C(string___TypeInfo, 5LL);
        if ( !Instance )
          break;
        v18 = (System_String_array *)Instance;
        if ( v6 )
        {
          Instance = sub_B52A44(v6, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
          if ( !Instance )
          {
LABEL_38:
            v50 = sub_B52A7C(Instance);
            sub_B52A28(v50, 0LL);
          }
        }
        if ( !v18->max_length )
          goto LABEL_37;
        v18->m_Items[0] = (System_String_o *)v6;
        sub_B52920((BattleServantConfConponent_o *)v18->m_Items, v6, v12, v13, v14, v15, v16, v17);
        Instance = StringLiteral_26/*"\n"*/;
        if ( StringLiteral_26/*"\n"*/ )
        {
          Instance = sub_B52A44(StringLiteral_26/*"\n"*/, v18->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
          v25 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v18->max_length <= 1 )
          goto LABEL_37;
        v18->m_Items[1] = (System_String_o *)v25;
        sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
        name = (System_Int32_array **)v10->fields.name;
        if ( name )
        {
          Instance = sub_B52A44(v10->fields.name, v18->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
        }
        if ( v18->max_length <= 2 )
          goto LABEL_37;
        v18->m_Items[2] = (System_String_o *)name;
        sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[2], name, v26, v27, v28, v29, v30, v31);
        Instance = StringLiteral_81/*" "*/;
        if ( StringLiteral_81/*" "*/ )
        {
          Instance = sub_B52A44(StringLiteral_81/*" "*/, v18->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
          v39 = (System_Int32_array **)StringLiteral_81/*" "*/;
        }
        else
        {
          v39 = 0LL;
        }
        if ( v18->max_length <= 3 )
          goto LABEL_37;
        v18->m_Items[3] = (System_String_o *)v39;
        sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v8 >= nums->max_length )
        {
LABEL_37:
          v49 = sub_B52A88(Instance);
          sub_B52A28(v49, 0LL);
        }
        Instance = (__int64)ItemEntity__GetCountText(v10, nums->m_Items[v8 + 1], 0LL);
        v47 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B52A44(Instance, v18->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
        }
        if ( v18->max_length <= 4 )
          goto LABEL_37;
        v18->m_Items[4] = (System_String_o *)v47;
        sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[4], v47, v41, v42, v43, v44, v45, v46);
        v6 = (System_Int32_array **)System_String__Concat_44648440(v18, 0LL);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v8, v11);
      if ( (Instance & 1) == 0 )
        return (System_String_o *)v6;
    }
LABEL_36:
    sub_B52A5C(Instance, v4);
  }
  return (System_String_o *)v6;
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
    sub_B52A5C(this, index);
  return UnityEngine_Mathf__Min_41525188(itemIds->max_length, nums->max_length, 0LL) > index;
}