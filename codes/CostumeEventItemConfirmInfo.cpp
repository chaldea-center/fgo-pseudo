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
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *title; // x21
  UILabel_o *subTitle; // x21
  System_String_o *v11; // x22
  Il2CppObject *v12; // x0
  UILabel_o *reqItemLabel; // x21
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  UILabel_o *haveItemLabel; // x21
  System_String_o *v17; // x22
  Il2CppObject *v18; // x0
  UILabel_o *msg; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  struct System_Int32_array *itemNums; // x8
  UILabel_o *reqItemCountLabel; // x21
  Il2CppObject *v24; // x0
  UILabel_o *haveItemCountLabel; // x21
  __int64 v26; // x2
  Il2CppObject *MasterData_object; // x21
  struct System_Int32_array *itemIds; // x8
  UILabel_o *v29; // x21
  Il2CppObject *v30; // x0
  struct System_Int32_array *v31; // x8
  int32_t num; // [xsp+0h] [xbp-50h] BYREF
  int v33; // [xsp+4h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593214E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_5732/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/);
    sub_21FFC50(&StringLiteral_5735/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3906/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    sub_21FFC50(&StringLiteral_5733/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/);
    sub_21FFC50(&StringLiteral_5734/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/);
    sub_21FFC50(&StringLiteral_5731/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_593214E = 1;
  }
  entity = 0;
  v33 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_35;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3906/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !title )
    goto LABEL_35;
  UILabel__set_text(title, (System_String_o *)Instance, 0);
  subTitle = this->fields.subTitle;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5735/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0);
  v12 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5731/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v11, v12, 0);
  if ( !subTitle )
    goto LABEL_35;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0);
  reqItemLabel = this->fields.reqItemLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5734/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0);
  v15 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5731/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v14, v15, 0);
  if ( !reqItemLabel )
    goto LABEL_35;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0);
  haveItemLabel = this->fields.haveItemLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5733/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0);
  v18 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5731/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v17, v18, 0);
  if ( !haveItemLabel )
    goto LABEL_35;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0);
  msg = this->fields.msg;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0);
  v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5731/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
  Instance = (DataManager_o *)System_String__Format(v20, v21, 0);
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
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &num);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v24, 0);
  if ( !reqItemCountLabel )
    goto LABEL_35;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v33 = 0;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v33, 0);
  if ( !haveItemCountLabel )
    goto LABEL_35;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v26);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v26);
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
    || (v29 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &num),
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v30, 0),
        !v29) )
  {
LABEL_35:
    sub_21FFECC(Instance, v6);
  }
  UILabel__set_text(v29, (System_String_o *)Instance, 0);
LABEL_31:
  v31 = ent->fields.itemIds;
  if ( !v31 )
    goto LABEL_35;
  if ( !LODWORD(v31->max_length) )
LABEL_36:
    sub_21FFED4(Instance);
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_35;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v31->m_Items[0], 0);
}