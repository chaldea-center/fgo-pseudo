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
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v25; // x0
  UILabel_o *haveItemCountLabel; // x21
  Il2CppObject *MasterData_object; // x21
  struct System_Int32_array *itemIds; // x8
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  UILabel_o *v32; // x21
  Il2CppObject *v33; // x0
  struct System_Int32_array *v34; // x8
  int32_t num; // [xsp+8h] [xbp-48h] BYREF
  int v36; // [xsp+Ch] [xbp-44h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5EB2B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5568/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/);
    sub_1B885B0(&StringLiteral_5571/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3827/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    sub_1B885B0(&StringLiteral_5569/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/);
    sub_1B885B0(&StringLiteral_5570/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/);
    sub_1B885B0(&StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4A5EB2B = 1;
  }
  entity = 0LL;
  v36 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_31;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_31;
  UILabel__set_text(title, (System_String_o *)Instance, 0LL);
  subTitle = this->fields.subTitle;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5571/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v10 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v9, v10, 0LL);
  if ( !subTitle )
    goto LABEL_31;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5570/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v13 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v12, v13, 0LL);
  if ( !reqItemLabel )
    goto LABEL_31;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5569/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v16 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v15, v16, 0LL);
  if ( !haveItemLabel )
    goto LABEL_31;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0LL);
  msg = this->fields.msg;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5568/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v19 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (int64_t)System_String__Format(v18, v19, 0LL);
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
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v20, v21, v22);
  Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v25, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_31;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v36 = 0;
  Instance = (int64_t)System_Int32__ToString((int32_t)&v36, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_31;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    || (v32 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v29, v30, v31),
        Instance = (int64_t)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v33, 0LL),
        !v32) )
  {
LABEL_31:
    sub_1B8880C(Instance, v6);
  }
  UILabel__set_text(v32, (System_String_o *)Instance, 0LL);
LABEL_27:
  v34 = ent->fields.itemIds;
  if ( !v34 )
    goto LABEL_31;
  if ( !v34->max_length )
LABEL_32:
    sub_1B88814(Instance, v6);
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_31;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v34->m_Items[1], 0LL);
}