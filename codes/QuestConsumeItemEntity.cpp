void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8A8F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E8A8F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestConsumeItemEntity__CreatePrimaryKey(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


System_String_o *__fastcall QuestConsumeItemEntity__GetItemConsumeString(
        QuestConsumeItemEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 Instance; // x0
  __int64 v24; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  System_Int32_array **v26; // x24
  const MethodInfo *v27; // x2
  il2cpp_array_size_t v28; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *v30; // x23
  const MethodInfo *v31; // x2
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **name; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  struct System_Int32_array *nums; // x8
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x23
  __int64 v69; // x0
  __int64 v70; // x0

  if ( (byte_42E8A8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&string___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E8A8E = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  v26 = (System_Int32_array **)StringLiteral_1/*""*/;
  Instance = QuestConsumeItemEntity__IsAvailableAt(this, 0, v27);
  if ( (Instance & 1) != 0 )
  {
    v28 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v28 >= itemIds->max_length )
        goto LABEL_37;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            MasterData_WarQuestSelectionMaster,
                            itemIds->m_Items[v28 + 1],
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        break;
      v30 = (ItemEntity_o *)Instance;
      if ( ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL) )
      {
        Instance = sub_B5D5DC(string___TypeInfo, 5LL);
        if ( !Instance )
          break;
        v38 = (System_String_array *)Instance;
        if ( v26 )
        {
          Instance = sub_B5D684(v26, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
          if ( !Instance )
          {
LABEL_38:
            v70 = sub_B5D6BC(Instance);
            sub_B5D668(v70, 0LL);
          }
        }
        if ( !v38->max_length )
          goto LABEL_37;
        v38->m_Items[0] = (System_String_o *)v26;
        sub_B5D560((BattleServantConfConponent_o *)v38->m_Items, v26, v32, v33, v34, v35, v36, v37);
        Instance = StringLiteral_26/*"\n"*/;
        if ( StringLiteral_26/*"\n"*/ )
        {
          Instance = sub_B5D684(StringLiteral_26/*"\n"*/, v38->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
          v45 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
        }
        else
        {
          v45 = 0LL;
        }
        if ( v38->max_length <= 1 )
          goto LABEL_37;
        v38->m_Items[1] = (System_String_o *)v45;
        sub_B5D560((BattleServantConfConponent_o *)&v38->m_Items[1], v45, v39, v40, v41, v42, v43, v44);
        name = (System_Int32_array **)v30->fields.name;
        if ( name )
        {
          Instance = sub_B5D684(v30->fields.name, v38->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
        }
        if ( v38->max_length <= 2 )
          goto LABEL_37;
        v38->m_Items[2] = (System_String_o *)name;
        sub_B5D560((BattleServantConfConponent_o *)&v38->m_Items[2], name, v46, v47, v48, v49, v50, v51);
        Instance = StringLiteral_81/*" "*/;
        if ( StringLiteral_81/*" "*/ )
        {
          Instance = sub_B5D684(StringLiteral_81/*" "*/, v38->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
          v59 = (System_Int32_array **)StringLiteral_81/*" "*/;
        }
        else
        {
          v59 = 0LL;
        }
        if ( v38->max_length <= 3 )
          goto LABEL_37;
        v38->m_Items[3] = (System_String_o *)v59;
        sub_B5D560((BattleServantConfConponent_o *)&v38->m_Items[3], v59, v53, v54, v55, v56, v57, v58);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v28 >= nums->max_length )
        {
LABEL_37:
          v69 = sub_B5D6C8(Instance);
          sub_B5D668(v69, 0LL);
        }
        Instance = (__int64)ItemEntity__GetCountText(v30, nums->m_Items[v28 + 1], 0LL);
        v67 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B5D684(Instance, v38->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_38;
        }
        if ( v38->max_length <= 4 )
          goto LABEL_37;
        v38->m_Items[4] = (System_String_o *)v67;
        sub_B5D560((BattleServantConfConponent_o *)&v38->m_Items[4], v67, v61, v62, v63, v64, v65, v66);
        v26 = (System_Int32_array **)System_String__Concat_44657912(v38, 0LL);
      }
      Instance = QuestConsumeItemEntity__IsAvailableAt(this, ++v28, v31);
      if ( (Instance & 1) == 0 )
        return (System_String_o *)v26;
    }
LABEL_36:
    sub_B5D69C(Instance, v24);
  }
  return (System_String_o *)v26;
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
    sub_B5D69C(this, index);
  return UnityEngine_Mathf__Min_41629336(itemIds->max_length, nums->max_length, 0LL) > index;
}