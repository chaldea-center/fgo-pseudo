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
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v22; // x0
  UILabel_o *haveItemCountLabel; // x21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct System_Int32_array *itemIds; // x8
  UILabel_o *v26; // x21
  Il2CppObject *v27; // x0
  struct System_Int32_array *v28; // x8
  __int64 v29; // x0
  int32_t num; // [xsp+0h] [xbp-40h] BYREF
  int v31; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B1F0E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_5618/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/);
    sub_B52984(&StringLiteral_5621/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_3363/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_5619/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/);
    sub_B52984(&StringLiteral_5620/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/);
    sub_B52984(&StringLiteral_5617/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_42B1F0E = 1;
  }
  entity = 0LL;
  v31 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_33;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3363/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_33;
  UILabel__set_text(title, (System_String_o *)Instance, 0LL);
  subTitle = this->fields.subTitle;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5621/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v10 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5617/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v9, v10, 0LL);
  if ( !subTitle )
    goto LABEL_33;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5620/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v13 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5617/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v12, v13, 0LL);
  if ( !reqItemLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v16 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5617/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v15, v16, 0LL);
  if ( !haveItemLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0LL);
  msg = this->fields.msg;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v19 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5617/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
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
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v22, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v31 = 0;
  Instance = (int64_t)System_Int32__ToString((int32_t)&v31, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_33;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    || (v26 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num),
        Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v27, 0LL),
        !v26) )
  {
LABEL_33:
    sub_B52A5C(Instance, v6);
  }
  UILabel__set_text(v26, (System_String_o *)Instance, 0LL);
LABEL_29:
  v28 = ent->fields.itemIds;
  if ( !v28 )
    goto LABEL_33;
  if ( !v28->max_length )
  {
LABEL_34:
    v29 = sub_B52A88(Instance);
    sub_B52A28(v29, 0LL);
  }
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_33;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v28->m_Items[1], 0LL);
}