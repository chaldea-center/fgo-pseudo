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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  UILabel_o *title; // x21
  System_String_o *v21; // x0
  UILabel_o *subTitle; // x21
  System_String_o *v23; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  UILabel_o *reqItemLabel; // x21
  System_String_o *v27; // x22
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *haveItemLabel; // x21
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  UILabel_o *msg; // x21
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  int64_t UserId; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  UILabel_o *haveItemCountLabel; // x21
  System_String_o *v46; // x0
  WebViewManager_o *v47; // x0
  UserItemMaster_o *v48; // x21
  struct System_Int32_array *itemIds; // x8
  UILabel_o *v50; // x21
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  struct System_Int32_array *v53; // x8
  LimitCntUpItemComponent_o *itemIcon; // x0
  int32_t num; // [xsp+0h] [xbp-40h] BYREF
  int v56; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FBDC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, ent);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_5561/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, v11);
    sub_B16FFC(&StringLiteral_5564/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, v12);
    sub_B16FFC(&StringLiteral_3321/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v13);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v14);
    sub_B16FFC(&StringLiteral_5562/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, v15);
    sub_B16FFC(&StringLiteral_5563/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, v16);
    sub_B16FFC(&StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, v17);
    byte_40FBDC0 = 1;
  }
  entity = 0LL;
  v56 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    MasterData_WarQuestSelectionMaster,
    ent->fields.eventId,
    (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3321/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_33;
  UILabel__set_text(title, v21, 0LL);
  subTitle = this->fields.subTitle;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5564/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v24 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  v25 = System_String__Format(v23, v24, 0LL);
  if ( !subTitle )
    goto LABEL_33;
  UILabel__set_text(subTitle, v25, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5563/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v28 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  v29 = System_String__Format(v27, v28, 0LL);
  if ( !reqItemLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemLabel, v29, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5562/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v32 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  v33 = System_String__Format(v31, v32, 0LL);
  if ( !haveItemLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemLabel, v33, 0LL);
  msg = this->fields.msg;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5561/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v36 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  v37 = System_String__Format(v35, v36, 0LL);
  if ( !msg )
    goto LABEL_33;
  UILabel__set_text(msg, v37, 0LL);
  itemNums = ent->fields.itemNums;
  if ( !itemNums )
    goto LABEL_33;
  if ( !itemNums->max_length )
    goto LABEL_34;
  reqItemCountLabel = this->fields.reqItemCountLabel;
  num = itemNums->m_Items[1];
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  v44 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v43, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemCountLabel, v44, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v56 = 0;
  v46 = System_Int32__ToString((int32_t)&v56, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemCountLabel, v46, 0LL);
  v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v47 )
    goto LABEL_33;
  v48 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v47,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  itemIds = ent->fields.itemIds;
  if ( !itemIds )
    goto LABEL_33;
  if ( !itemIds->max_length )
    goto LABEL_34;
  if ( !v48 )
    goto LABEL_33;
  UserId = UserItemMaster__TryGetEntity(v48, &entity, UserId, itemIds->m_Items[1], 0LL);
  if ( (UserId & 1) == 0 )
    goto LABEL_29;
  if ( !entity
    || (v50 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num),
        v52 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v51, 0LL),
        !v50) )
  {
LABEL_33:
    sub_B170D4();
  }
  UILabel__set_text(v50, v52, 0LL);
LABEL_29:
  v53 = ent->fields.itemIds;
  if ( !v53 )
    goto LABEL_33;
  if ( !v53->max_length )
  {
LABEL_34:
    sub_B17100(UserId, v39, v40);
    sub_B170A0();
  }
  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_33;
  LimitCntUpItemComponent__SetItemIcon(itemIcon, v53->m_Items[1], 0LL);
}