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
  __int64 v19; // x1
  UILabel_o *title; // x21
  UILabel_o *subTitle; // x21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  UILabel_o *reqItemLabel; // x21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  UILabel_o *haveItemLabel; // x21
  System_String_o *v28; // x22
  Il2CppObject *v29; // x0
  UILabel_o *msg; // x21
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v38; // x0
  UILabel_o *haveItemCountLabel; // x21
  Il2CppObject *MasterData_object; // x21
  struct System_Int32_array *itemIds; // x8
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  UILabel_o *v45; // x21
  Il2CppObject *v46; // x0
  struct System_Int32_array *v47; // x8
  int32_t num; // [xsp+8h] [xbp-48h] BYREF
  int v49; // [xsp+Ch] [xbp-44h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A0C5BD & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMaster___, ent);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B686D4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1B686D4(&int_TypeInfo, v7);
    sub_1B686D4(&LocalizationManager_TypeInfo, v8);
    sub_1B686D4(&NetworkManager_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B686D4(&StringLiteral_5543/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, v11);
    sub_1B686D4(&StringLiteral_5546/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, v12);
    sub_1B686D4(&StringLiteral_3803/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v13);
    sub_1B686D4(&StringLiteral_24850/*"{0:#,0}"*/, v14);
    sub_1B686D4(&StringLiteral_5544/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, v15);
    sub_1B686D4(&StringLiteral_5545/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, v16);
    sub_1B686D4(&StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, v17);
    byte_4A0C5BD = 1;
  }
  entity = 0LL;
  v49 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_31;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_30E44C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_31;
  UILabel__set_text(title, (System_String_o *)Instance, 0LL);
  subTitle = this->fields.subTitle;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5546/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v23 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v22, v23, 0LL);
  if ( !subTitle )
    goto LABEL_31;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5545/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v26 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v25, v26, 0LL);
  if ( !reqItemLabel )
    goto LABEL_31;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5544/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v29 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v28, v29, 0LL);
  if ( !haveItemLabel )
    goto LABEL_31;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0LL);
  msg = this->fields.msg;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5543/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v32 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v31, v32, 0LL);
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
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v33, v34, v35);
  Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_24850/*"{0:#,0}"*/, v38, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_31;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v49 = 0;
  Instance = (int64_t)System_Int32__ToString((int32_t)&v49, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_31;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    || (v45 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v42, v43, v44),
        Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_24850/*"{0:#,0}"*/, v46, 0LL),
        !v45) )
  {
LABEL_31:
    sub_1B68930(Instance, v19);
  }
  UILabel__set_text(v45, (System_String_o *)Instance, 0LL);
LABEL_27:
  v47 = ent->fields.itemIds;
  if ( !v47 )
    goto LABEL_31;
  if ( !v47->max_length )
LABEL_32:
    sub_1B68938(Instance, v19);
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_31;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v47->m_Items[1], 0LL);
}