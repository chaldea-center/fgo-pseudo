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
  UILabel_o *title; // x21
  UILabel_o *subTitle; // x21
  System_String_o *v8; // x22
  Il2CppObject *v9; // x0
  UILabel_o *reqItemLabel; // x21
  System_String_o *v11; // x22
  Il2CppObject *v12; // x0
  UILabel_o *haveItemLabel; // x21
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  UILabel_o *msg; // x21
  System_String_o *v17; // x22
  Il2CppObject *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v27; // x0
  UILabel_o *haveItemCountLabel; // x21
  Il2CppObject *MasterData_object; // x21
  struct System_Int32_array *itemIds; // x8
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  UILabel_o *v37; // x21
  Il2CppObject *v38; // x0
  struct System_Int32_array *v39; // x8
  int32_t num; // [xsp+0h] [xbp-50h] BYREF
  int v41; // [xsp+4h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3BB23 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_5543/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/);
    sub_1C32C20(&StringLiteral_5546/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_3767/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    sub_1C32C20(&StringLiteral_5544/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/);
    sub_1C32C20(&StringLiteral_5545/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/);
    sub_1C32C20(&StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4C3BB23 = 1;
  }
  entity = 0;
  v41 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_35;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !title )
    goto LABEL_35;
  UILabel__set_text(title, (System_String_o *)Instance, 0);
  subTitle = this->fields.subTitle;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5546/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0);
  v9 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v8, v9, 0);
  if ( !subTitle )
    goto LABEL_35;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0);
  reqItemLabel = this->fields.reqItemLabel;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5545/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0);
  v12 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v11, v12, 0);
  if ( !reqItemLabel )
    goto LABEL_35;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0);
  haveItemLabel = this->fields.haveItemLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5544/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0);
  v15 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v14, v15, 0);
  if ( !haveItemLabel )
    goto LABEL_35;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0);
  msg = this->fields.msg;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5543/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0);
  v18 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v17, v18, 0);
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
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v19, v20, v21, v22, v23, v24);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25047/*"{0:#,0}"*/, v27, 0);
  if ( !reqItemCountLabel )
    goto LABEL_35;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v41 = 0;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v41, 0);
  if ( !haveItemCountLabel )
    goto LABEL_35;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    || (v37 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v31, v32, v33, v34, v35, v36),
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25047/*"{0:#,0}"*/, v38, 0),
        !v37) )
  {
LABEL_35:
    sub_1C32E7C(Instance);
  }
  UILabel__set_text(v37, (System_String_o *)Instance, 0);
LABEL_31:
  v39 = ent->fields.itemIds;
  if ( !v39 )
    goto LABEL_35;
  if ( !LODWORD(v39->max_length) )
LABEL_36:
    sub_1C32E84(Instance);
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_35;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v39->m_Items[0], 0);
}