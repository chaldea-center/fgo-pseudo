void __fastcall CostumeEventItemConfirmInfo___ctor(CostumeEventItemConfirmInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CostumeEventItemConfirmInfo__Set(
        CostumeEventItemConfirmInfo_o *this,
        EventCombineCostumeEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int64_t Instance; // x0
  __int64 v46; // x1
  UILabel_o *title; // x21
  UILabel_o *subTitle; // x21
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  UILabel_o *reqItemLabel; // x21
  System_String_o *v52; // x22
  Il2CppObject *v53; // x0
  UILabel_o *haveItemLabel; // x21
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  UILabel_o *msg; // x21
  System_String_o *v58; // x22
  Il2CppObject *v59; // x0
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v62; // x0
  UILabel_o *haveItemCountLabel; // x21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct System_Int32_array *itemIds; // x8
  UILabel_o *v66; // x21
  Il2CppObject *v67; // x0
  struct System_Int32_array *v68; // x8
  __int64 v69; // x0
  int32_t num; // [xsp+0h] [xbp-40h] BYREF
  int v71; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EA7B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)ent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_5653/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_5656/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3396/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_5654/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_5655/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, v42, v43, v44);
    byte_42EA7B3 = 1;
  }
  entity = 0LL;
  v71 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_33;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3396/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_33;
  UILabel__set_text(title, (System_String_o *)Instance, 0LL);
  subTitle = this->fields.subTitle;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5656/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v50 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v49, v50, 0LL);
  if ( !subTitle )
    goto LABEL_33;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_5655/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v53 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v52, v53, 0LL);
  if ( !reqItemLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_5654/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v56 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v55, v56, 0LL);
  if ( !haveItemLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0LL);
  msg = this->fields.msg;
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_5653/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v59 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v58, v59, 0LL);
  if ( !msg )
    goto LABEL_33;
  UILabel__set_text(msg, (System_String_o *)Instance, 0LL);
  itemNums = ent->fields.itemNums;
  if ( !itemNums )
    goto LABEL_33;
  if ( !itemNums->max_length )
    goto LABEL_34;
  reqItemCountLabel = this->fields.reqItemCountLabel;
  num = itemNums->m_Items[1];
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v62, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v71 = 0;
  Instance = (int64_t)System_Int32__ToString((int32_t)&v71, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  itemIds = ent->fields.itemIds;
  if ( !itemIds )
    goto LABEL_33;
  if ( !itemIds->max_length )
    goto LABEL_34;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               itemIds->m_Items[1],
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_29;
  if ( !entity
    || (v66 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num),
        Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v67, 0LL),
        !v66) )
  {
LABEL_33:
    sub_B5D69C(Instance, v46);
  }
  UILabel__set_text(v66, (System_String_o *)Instance, 0LL);
LABEL_29:
  v68 = ent->fields.itemIds;
  if ( !v68 )
    goto LABEL_33;
  if ( !v68->max_length )
  {
LABEL_34:
    v69 = sub_B5D6C8(Instance);
    sub_B5D668(v69, 0LL);
  }
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_33;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v68->m_Items[1], 0LL);
}