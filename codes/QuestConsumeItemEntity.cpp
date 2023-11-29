void __fastcall QuestConsumeItemEntity___ctor(QuestConsumeItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9559 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40F9559 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  System_Int32_array **v11; // x24
  const MethodInfo *v12; // x2
  __int64 IsAvailableAt; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  il2cpp_array_size_t v16; // w21
  struct System_Int32_array *itemIds; // x8
  ItemEntity_o *Entity; // x0
  ItemEntity_o *v19; // x23
  const MethodInfo *v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array *v26; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **name; // x24
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_Int32_array *nums; // x8
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x23

  if ( (byte_40F9558 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&string___TypeInfo, v5);
    sub_B16FFC(&StringLiteral_26, v6);
    sub_B16FFC(&StringLiteral_80, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40F9558 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  v11 = (System_Int32_array **)StringLiteral_1;
  IsAvailableAt = QuestConsumeItemEntity__IsAvailableAt(this, 0, v12);
  if ( (IsAvailableAt & 1) != 0 )
  {
    v16 = 0;
    while ( 1 )
    {
      itemIds = this->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v16 >= itemIds->max_length )
        goto LABEL_37;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 itemIds->m_Items[v16 + 1],
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        break;
      v19 = Entity;
      if ( ItemEntity__IsEnable(Entity, 0LL) )
      {
        IsAvailableAt = sub_B17014(string___TypeInfo, 5LL, v20);
        if ( !IsAvailableAt )
          break;
        v26 = (System_String_array *)IsAvailableAt;
        if ( v11 )
        {
          IsAvailableAt = sub_B170BC(v11, *(_QWORD *)(*(_QWORD *)IsAvailableAt + 64LL));
          if ( !IsAvailableAt )
          {
LABEL_38:
            sub_B170F4(IsAvailableAt);
            sub_B170A0();
          }
        }
        if ( !v26->max_length )
          goto LABEL_37;
        v26->m_Items[0] = (System_String_o *)v11;
        sub_B16F98((BattleServantConfConponent_o *)v26->m_Items, v11, v15, v21, v22, v23, v24, v25);
        IsAvailableAt = StringLiteral_26;
        if ( StringLiteral_26 )
        {
          IsAvailableAt = sub_B170BC(StringLiteral_26, v26->obj.klass->_1.element_class);
          if ( !IsAvailableAt )
            goto LABEL_38;
          v14 = (System_Int32_array **)StringLiteral_26;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v26->max_length <= 1 )
          goto LABEL_37;
        v26->m_Items[1] = (System_String_o *)v14;
        sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[1], v14, v15, v27, v28, v29, v30, v31);
        name = (System_Int32_array **)v19->fields.name;
        if ( name )
        {
          IsAvailableAt = sub_B170BC(v19->fields.name, v26->obj.klass->_1.element_class);
          if ( !IsAvailableAt )
            goto LABEL_38;
        }
        if ( v26->max_length <= 2 )
          goto LABEL_37;
        v26->m_Items[2] = (System_String_o *)name;
        sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[2], name, v15, v32, v33, v34, v35, v36);
        IsAvailableAt = StringLiteral_80;
        if ( StringLiteral_80 )
        {
          IsAvailableAt = sub_B170BC(StringLiteral_80, v26->obj.klass->_1.element_class);
          if ( !IsAvailableAt )
            goto LABEL_38;
          v14 = (System_Int32_array **)StringLiteral_80;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v26->max_length <= 3 )
          goto LABEL_37;
        v26->m_Items[3] = (System_String_o *)v14;
        sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[3], v14, v15, v38, v39, v40, v41, v42);
        nums = this->fields.nums;
        if ( !nums )
          break;
        if ( v16 >= nums->max_length )
        {
LABEL_37:
          sub_B17100(IsAvailableAt, v14, v15);
          sub_B170A0();
        }
        IsAvailableAt = (__int64)ItemEntity__GetCountText(v19, nums->m_Items[v16 + 1], 0LL);
        v49 = (System_Int32_array **)IsAvailableAt;
        if ( IsAvailableAt )
        {
          IsAvailableAt = sub_B170BC(IsAvailableAt, v26->obj.klass->_1.element_class);
          if ( !IsAvailableAt )
            goto LABEL_38;
        }
        if ( v26->max_length <= 4 )
          goto LABEL_37;
        v26->m_Items[4] = (System_String_o *)v49;
        sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[4], v49, v15, v44, v45, v46, v47, v48);
        v11 = (System_Int32_array **)System_String__Concat_43823856(v26, 0LL);
      }
      IsAvailableAt = QuestConsumeItemEntity__IsAvailableAt(this, ++v16, v20);
      if ( (IsAvailableAt & 1) == 0 )
        return (System_String_o *)v11;
    }
LABEL_36:
    sub_B170D4();
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
    sub_B170D4();
  return UnityEngine_Mathf__Min_40727532(itemIds->max_length, nums->max_length, 0LL) > index;
}