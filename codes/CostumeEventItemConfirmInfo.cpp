void __fastcall CostumeEventItemConfirmInfo___ctor(CostumeEventItemConfirmInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CostumeEventItemConfirmInfo__Set(
        CostumeEventItemConfirmInfo_o *this,
        EventCombineCostumeEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int64_t Instance; // x0
  UILabel_o *title; // x21
  UILabel_o *subTitle; // x21
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  UILabel_o *reqItemLabel; // x21
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  UILabel_o *haveItemLabel; // x21
  System_String_o *v27; // x22
  Il2CppObject *v28; // x0
  UILabel_o *msg; // x21
  System_String_o *v30; // x22
  Il2CppObject *v31; // x0
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v34; // x0
  UILabel_o *haveItemCountLabel; // x21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct System_Int32_array *itemIds; // x8
  UILabel_o *v38; // x21
  Il2CppObject *v39; // x0
  struct System_Int32_array *v40; // x8
  __int64 v41; // x0
  int32_t num; // [xsp+0h] [xbp-40h] BYREF
  int v43; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42164D0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, ent);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_5592/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, v11);
    sub_B0D8A4(&StringLiteral_5595/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, v12);
    sub_B0D8A4(&StringLiteral_3343/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v13);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v14);
    sub_B0D8A4(&StringLiteral_5593/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, v15);
    sub_B0D8A4(&StringLiteral_5594/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, v16);
    sub_B0D8A4(&StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, v17);
    byte_42164D0 = 1;
  }
  entity = 0LL;
  v43 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_33;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3343/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_33;
  UILabel__set_text(title, (System_String_o *)Instance, 0LL);
  subTitle = this->fields.subTitle;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5595/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v22 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v21, v22, 0LL);
  if ( !subTitle )
    goto LABEL_33;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5594/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v25 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v24, v25, 0LL);
  if ( !reqItemLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5593/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v28 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v27, v28, 0LL);
  if ( !haveItemLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0LL);
  msg = this->fields.msg;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5592/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v31 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v30, v31, 0LL);
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
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v34, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v43 = 0;
  Instance = (int64_t)System_Int32__ToString((int32_t)&v43, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    || (v38 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num),
        Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v39, 0LL),
        !v38) )
  {
LABEL_33:
    sub_B0D97C(Instance);
  }
  UILabel__set_text(v38, (System_String_o *)Instance, 0LL);
LABEL_29:
  v40 = ent->fields.itemIds;
  if ( !v40 )
    goto LABEL_33;
  if ( !v40->max_length )
  {
LABEL_34:
    v41 = sub_B0D9A8(Instance);
    sub_B0D948(v41, 0LL);
  }
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_33;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v40->m_Items[1], 0LL);
}