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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int64_t Instance; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  UILabel_o *title; // x21
  UILabel_o *subTitle; // x21
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  UILabel_o *reqItemLabel; // x21
  System_String_o *v39; // x22
  Il2CppObject *v40; // x0
  UILabel_o *haveItemLabel; // x21
  System_String_o *v42; // x22
  Il2CppObject *v43; // x0
  UILabel_o *msg; // x21
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v49; // x0
  UILabel_o *haveItemCountLabel; // x21
  __int64 v51; // x1
  Il2CppObject *MasterData_object; // x21
  struct System_Int32_array *itemIds; // x8
  UILabel_o *v54; // x21
  Il2CppObject *v55; // x0
  struct System_Int32_array *v56; // x8
  int32_t num; // [xsp+8h] [xbp-48h] BYREF
  int v58; // [xsp+Ch] [xbp-44h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B19D4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, ent, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_5645/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_5648/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3860/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_5646/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_5647/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, v29, v30);
    byte_4B19D4E = 1;
  }
  entity = 0LL;
  v58 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_31;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3860/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_31;
  UILabel__set_text(title, (System_String_o *)Instance, 0LL);
  subTitle = this->fields.subTitle;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5648/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v37 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v36, v37, 0LL);
  if ( !subTitle )
    goto LABEL_31;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v40 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v39, v40, 0LL);
  if ( !reqItemLabel )
    goto LABEL_31;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_5646/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v43 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v42, v43, 0LL);
  if ( !haveItemLabel )
    goto LABEL_31;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0LL);
  msg = this->fields.msg;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5645/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v46 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v45, v46, 0LL);
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
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v49, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_31;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v58 = 0;
  Instance = (int64_t)System_Int32__ToString((int32_t)&v58, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_31;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v51);
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
    || (v54 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num),
        Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v55, 0LL),
        !v54) )
  {
LABEL_31:
    sub_1BCAA3C(Instance, v32);
  }
  UILabel__set_text(v54, (System_String_o *)Instance, 0LL);
LABEL_27:
  v56 = ent->fields.itemIds;
  if ( !v56 )
    goto LABEL_31;
  if ( !v56->max_length )
LABEL_32:
    sub_1BCAA44(Instance, v32);
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_31;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v56->m_Items[1], 0LL);
}