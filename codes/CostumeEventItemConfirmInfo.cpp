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
  __int64 v32; // x1
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v35; // x0
  UILabel_o *haveItemCountLabel; // x21
  Il2CppObject *MasterData_object; // x21
  struct System_Int32_array *itemIds; // x8
  UILabel_o *v39; // x21
  Il2CppObject *v40; // x0
  struct System_Int32_array *v41; // x8
  int32_t num; // [xsp+8h] [xbp-48h] BYREF
  int v43; // [xsp+Ch] [xbp-44h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49FFD42 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, ent);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, v11);
    sub_1B640C8(&StringLiteral_5545/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_3804/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v13);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v14);
    sub_1B640C8(&StringLiteral_5543/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, v15);
    sub_1B640C8(&StringLiteral_5544/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, v16);
    sub_1B640C8(&StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, v17);
    byte_49FFD42 = 1;
  }
  entity = 0LL;
  v43 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_31;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_31;
  UILabel__set_text(title, (System_String_o *)Instance, 0LL);
  subTitle = this->fields.subTitle;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5545/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v22 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v21, v22, 0LL);
  if ( !subTitle )
    goto LABEL_31;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5544/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v25 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v24, v25, 0LL);
  if ( !reqItemLabel )
    goto LABEL_31;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5543/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v28 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v27, v28, 0LL);
  if ( !haveItemLabel )
    goto LABEL_31;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0LL);
  msg = this->fields.msg;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v31 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v30, v31, 0LL);
  if ( !msg )
    goto LABEL_31;
  UILabel__set_text(msg, (System_String_o *)Instance, 0LL);
  itemNums = ent->fields.itemNums;
  if ( !itemNums )
    goto LABEL_31;
  if ( !itemNums->max_length )
    goto LABEL_32;
  reqItemCountLabel = this->fields.reqItemCountLabel;
  num = itemNums->m_Items[1];
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v35, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_31;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v43 = 0;
  Instance = (int64_t)System_Int32__ToString((int32_t)&v43, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_31;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  itemIds = ent->fields.itemIds;
  if ( !itemIds )
    goto LABEL_31;
  if ( !itemIds->max_length )
    goto LABEL_32;
  if ( !MasterData_object )
    goto LABEL_31;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               Instance,
               itemIds->m_Items[1],
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_27;
  if ( !entity
    || (v39 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num),
        Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v40, 0LL),
        !v39) )
  {
LABEL_31:
    sub_1B64324(Instance);
  }
  UILabel__set_text(v39, (System_String_o *)Instance, 0LL);
LABEL_27:
  v41 = ent->fields.itemIds;
  if ( !v41 )
    goto LABEL_31;
  if ( !v41->max_length )
LABEL_32:
    sub_1B6432C(Instance, v32);
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_31;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v41->m_Items[1], 0LL);
}