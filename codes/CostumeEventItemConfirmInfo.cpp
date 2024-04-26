void __fastcall CostumeEventItemConfirmInfo___ctor(CostumeEventItemConfirmInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CostumeEventItemConfirmInfo__Set(
        CostumeEventItemConfirmInfo_o *this,
        EventCombineCostumeEntity_o *ent,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  UILabel_o *title; // x21
  UILabel_o *subTitle; // x21
  System_String_o *v9; // x22
  Il2CppObject *v10; // x0
  UILabel_o *reqItemLabel; // x21
  System_String_o *v12; // x22
  Il2CppObject *v13; // x0
  UILabel_o *haveItemLabel; // x21
  System_String_o *v15; // x22
  Il2CppObject *v16; // x0
  UILabel_o *msg; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  __int64 v20; // x2
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v23; // x0
  UILabel_o *haveItemCountLabel; // x21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct System_Int32_array *itemIds; // x8
  __int64 v27; // x2
  UILabel_o *v28; // x21
  Il2CppObject *v29; // x0
  struct System_Int32_array *v30; // x8
  __int64 v31; // x0
  int32_t num; // [xsp+0h] [xbp-40h] BYREF
  int v33; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4353595 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_5664/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/);
    sub_B70694(&StringLiteral_5667/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_B70694(&StringLiteral_3405/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    sub_B70694(&StringLiteral_5665/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/);
    sub_B70694(&StringLiteral_5666/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/);
    sub_B70694(&StringLiteral_5663/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4353595 = 1;
  }
  entity = 0LL;
  v33 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_33;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3405/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_33;
  UILabel__set_text(title, (System_String_o *)Instance, 0LL);
  subTitle = this->fields.subTitle;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v10 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v9, v10, 0LL);
  if ( !subTitle )
    goto LABEL_33;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5666/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v13 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v12, v13, 0LL);
  if ( !reqItemLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5665/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v16 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v15, v16, 0LL);
  if ( !haveItemLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0LL);
  msg = this->fields.msg;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5664/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v19 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v18, v19, 0LL);
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
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v20);
  Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v23, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v33 = 0;
  Instance = (int64_t)System_Int32__ToString((int32_t)&v33, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    || (v28 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v27),
        Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v29, 0LL),
        !v28) )
  {
LABEL_33:
    sub_B7076C(Instance, v6);
  }
  UILabel__set_text(v28, (System_String_o *)Instance, 0LL);
LABEL_29:
  v30 = ent->fields.itemIds;
  if ( !v30 )
    goto LABEL_33;
  if ( !v30->max_length )
  {
LABEL_34:
    v31 = sub_B70798(Instance);
    sub_B70738(v31, 0LL);
  }
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_33;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v30->m_Items[1], 0LL);
}