void CostumeEventItemConfirmInfo___ctor(CostumeEventItemConfirmInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CostumeEventItemConfirmInfo__Set(
        CostumeEventItemConfirmInfo_o *this,
        EventCombineCostumeEntity_o *ent,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
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
  Il2CppObject *MasterData_object; // x21
  struct System_Int32_array *itemIds; // x8
  UILabel_o *v26; // x21
  Il2CppObject *v27; // x0
  struct System_Int32_array *v28; // x8
  int32_t num; // [xsp+0h] [xbp-50h] BYREF
  int v30; // [xsp+4h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CBA506 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_5534/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/);
    sub_1C6BA08(&StringLiteral_5537/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3759/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C6BA08(&StringLiteral_25162/*"{0:#,0}"*/);
    sub_1C6BA08(&StringLiteral_5535/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/);
    sub_1C6BA08(&StringLiteral_5536/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/);
    sub_1C6BA08(&StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4CBA506 = 1;
  }
  entity = 0;
  v30 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_35;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !title )
    goto LABEL_35;
  UILabel__set_text(title, (System_String_o *)Instance, 0);
  subTitle = this->fields.subTitle;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5537/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0);
  v10 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v9, v10, 0);
  if ( !subTitle )
    goto LABEL_35;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0);
  reqItemLabel = this->fields.reqItemLabel;
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5536/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0);
  v13 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v12, v13, 0);
  if ( !reqItemLabel )
    goto LABEL_35;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0);
  haveItemLabel = this->fields.haveItemLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5535/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0);
  v16 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v15, v16, 0);
  if ( !haveItemLabel )
    goto LABEL_35;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0);
  msg = this->fields.msg;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5534/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0);
  v19 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v18, v19, 0);
  if ( !msg )
    goto LABEL_35;
  UILabel__set_text(msg, (System_String_o *)Instance, 0);
  itemNums = ent->fields.itemNums;
  if ( !itemNums )
    goto LABEL_35;
  if ( !LODWORD(itemNums->max_length) )
    goto LABEL_36;
  reqItemCountLabel = this->fields.reqItemCountLabel;
  num = itemNums->m_Items[0];
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v22, 0);
  if ( !reqItemCountLabel )
    goto LABEL_35;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v30 = 0;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v30, 0);
  if ( !haveItemCountLabel )
    goto LABEL_35;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  itemIds = ent->fields.itemIds;
  if ( !itemIds )
    goto LABEL_35;
  if ( !LODWORD(itemIds->max_length) )
    goto LABEL_36;
  if ( !MasterData_object )
    goto LABEL_35;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                itemIds->m_Items[0],
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_31;
  if ( !entity
    || (v26 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num),
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v27, 0),
        !v26) )
  {
LABEL_35:
    sub_1C6BC60(Instance, v6);
  }
  UILabel__set_text(v26, (System_String_o *)Instance, 0);
LABEL_31:
  v28 = ent->fields.itemIds;
  if ( !v28 )
    goto LABEL_35;
  if ( !LODWORD(v28->max_length) )
LABEL_36:
    sub_1C6BC68(Instance);
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_35;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v28->m_Items[0], 0);
}